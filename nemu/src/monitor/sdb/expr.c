/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_UNEQ, TK_AND, TK_OR, TK_NOT, TK_SIXT, TK_NUM, TK_REG, TK_REGNAME, TK_LESS, TK_LESSEQ, TK_BIG, TK_BIGEQ

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},		// minus
  {"\\*", '*'}, 	// multiple
  {"/", '/'}, 		// divide
  {"\\(", '('},		// par1
  {"\\)", ')'},		// par2
  {"==", TK_EQ},        // equal
  {"!=", TK_UNEQ},	// unequal
  {"&&", TK_AND},	// and
  {"\\|\\|", TK_OR},	// or
  {"[!+(?!=)]", TK_NOT},	// not
  {"[0][x]", TK_SIXT},			// sixt
  {"[0-9A-F]+", TK_NUM},   // dec
  {"\\$", TK_REG},
  {"[$, r, s, g, t, a][0-9]+", TK_REGNAME},
  {"<", TK_LESS},
  {"<=", TK_LESSEQ},
  {">", TK_BIG},
  {">=", TK_BIGEQ},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
        	case '+':
        	case '-':
        	case '*':
        	case '/':
        	case '(':
        	case ')':
        	case TK_EQ:
        	case TK_UNEQ:
        	case TK_AND:
        	case TK_OR:
        	case TK_NOT:
        	case TK_SIXT:
        	case TK_NUM:
			case TK_REG:
			case TK_REGNAME:
			case TK_LESS:
			case TK_LESSEQ:
			case TK_BIG:
			case TK_BIGEQ:
        		tokens[nr_token].type=rules[i].token_type;
        		tokens[nr_token].str[substr_len] = '\0';
        		strncpy(tokens[nr_token++].str, substr_start, substr_len);
        		break;
        	case TK_NOTYPE:
        		break;
          default: TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_wrong = true;

bool check_parentheses(int p, int q){
  int judge = 0;
  int j = p;
  int cnt = 0;
  if(tokens[p].type != '(' && tokens[q].type != ')'){
  	return false;
  }
  for(; j <= q; j++){
  	if(tokens[j].type == '('){
  		judge++;
 	}
 	else if(tokens[j].type == ')'){
	  	judge--;
	}
	if(judge == 0){
		cnt++;
	}
  }
  if(judge != 0){
  	check_wrong = false;
  	return false;
  }else if(cnt == 1 && tokens[p].type == '(' && tokens[q].type == ')'){
  	return true;
  }else if(cnt != 1){
  	return false;
  }else{
  	return false;
  }
  
}


int searchmo(int p, int q){
  int j = 0;
  int judge = 0;   //judge parentheses
  int judge_mul = 1;
  int judge_div = 1;
  int judge_eq = 1;
  int adplace = -1;
  int miplace = -1;
  int muplace = 1;
  int diplace = -1;
  int nottplace = -1;
  int sixtplace = -1;
  int regplace = -1;
  for(j = p; j <= q; j++)
  {
  	if(tokens[j].type == '('){
  		judge++;
  	}else if(tokens[j].type == ')'){
  		judge--;
  	}else if(tokens[j].type == TK_NUM){
  		continue;
  	}else if(judge != 0){
  		continue;
  	}else if(judge == 0 && tokens[j].type == TK_EQ){
  		return j;
  	}else if(judge == 0 && tokens[j].type == TK_LESS){
  		return j;
  	}else if(judge == 0 && tokens[j].type == TK_LESSEQ){
  		return j;
  	}else if(judge == 0 && tokens[j].type == TK_BIG){
  		return j;
  	}else if(judge == 0 && tokens[j].type == TK_BIGEQ){
  		return j;
  	}else if(judge == 0 && tokens[j].type == TK_UNEQ){
  		//judge_eq = 0;
  		return j;
  	}else if(judge == 0 && tokens[j].type == TK_AND){
  		
  		return j;
  	}else if(judge == 0 && tokens[j].type == TK_OR){
  		
  		return j;
  	}else if(judge == 0 && judge_eq == 1 && tokens[j].type == '+'){
  		adplace = j;
  	}else if(judge == 0 && tokens[j].type == '-'){
  		if(judge_mul==1 && judge_div==1){
  			miplace = j;
  		}
  	}else if(judge == 0 && judge_mul == 1 && tokens[j].type == '*'){
  		judge_mul *= 2;
  		muplace = j;
  	}else if(judge == 0 && judge_mul == 1 && tokens[j].type == '/'){
  		judge_div *= 2;
  		diplace = j;
  	}else if(judge == 0 && tokens[j].type == TK_NOT){
  		nottplace = j;
  	}else if(judge == 0 && tokens[j].type == TK_REG){
		regplace = j;
	}
	else if(judge == 0 && tokens[j].type == TK_SIXT){
  		sixtplace = j;
  	}
  }
  if(adplace != -1){
  	return adplace;
  }
  else if(miplace != -1){
  	return miplace;
  }
  else if(judge_mul == 2){
  	return muplace;
  }
  else if(judge_mul == 1 && diplace != -1){
  	return diplace;
  }
  else if(nottplace != -1){
  	return nottplace;
  }
  else if(regplace != -1){
	return regplace;
  }
  else if(sixtplace != -1){
	return sixtplace;
  }
  else{
	  check_wrong = false;
	  return 0;
  }
}

int sixtoten(const char *sixtstr){
	int i = 0;
	int sgwei = 1;
	int final = 0;
	for(; sixtstr[i] != '\0'; i++){
		;
	}
	for(i-=1; i >= 0; i--){
		//printf("%c \n", sixtstr[i]);
		if(sixtstr[i]=='0'){
			final += 0*sgwei;
		}else if(sixtstr[i]=='1'){
			final += 1*sgwei;
		}else if(sixtstr[i]=='2'){
			final += 2*sgwei;
		}else if(sixtstr[i]=='3'){
			final += 3*sgwei;
		}else if(sixtstr[i]=='4'){
			final += 4*sgwei;
		}else if(sixtstr[i]=='5'){
			final += 5*sgwei;
		}else if(sixtstr[i]=='6'){
			final += 6*sgwei;
		}else if(sixtstr[i]=='7'){
			final += 7*sgwei;
		}else if(sixtstr[i]=='8'){
			final += 8*sgwei;
		}else if(sixtstr[i]=='9'){
			final += 9*sgwei;
		}else if(sixtstr[i]=='A'){
			final += 10*sgwei;
		}else if(sixtstr[i]=='B'){
			final += 11*sgwei;
		}else if(sixtstr[i]=='C'){
			final += 12*sgwei;
		}else if(sixtstr[i]=='D'){
			final += 13*sgwei;
		}else if(sixtstr[i]=='E'){
			final += 14*sgwei;
		}else if(sixtstr[i]=='F'){
			final += 15*sgwei;
		}else{
			check_wrong = false;
			return 1;
		}
//		switch (sixtstr[i]){
//			case '0': final += 0;
//			case '1': final += 1*sgwei;
//			case '2': final += 2*sgwei;
//			case '3': final += 3*sgwei;
///			case '4': final += 4*sgwei;
//			case '5': final += 5*sgwei;
//			case '6': final += 6*sgwei;
//			case '7': final += 7*sgwei;
///			case '8': final += 8*sgwei;
//			case '9': final += 9*sgwei;
///			case 'A': final += 10*sgwei;
//			case 'B': final += 11*sgwei;
//			case 'C': final += 12*sgwei;
//			case 'D': final += 13*sgwei;
//			case 'E': final += 14*sgwei;
//			case 'F': final += 15*sgwei;
//			default : check_wrong = false;
///				  return 1;
//		}
		sgwei *= 16;
	}
	printf("%d\n", final);
	return final;
}

int eval(int p, int q){
  int value_1 = 0;
  int value_2 = 0;
  if(check_wrong == false){
  	return 1;
  }else{
  if(p > q) {
  	/*bad expression*/
  	check_wrong = false;
  	return 0;
  }
  else if(p == q) {
  	/*single number*/
  	if(tokens[p].type != TK_NUM && tokens[p].type != TK_REGNAME){
  		check_wrong = false;
  		return 1;
  	}else{
  		if(tokens[p-1].type == TK_SIXT){
  			printf("numx=%d\n", sixtoten(tokens[p].str));
  			return sixtoten(tokens[p].str);
  		}else if(tokens[p].type == TK_NUM){
  			printf("num=%d, type is %d\n", atoi(tokens[p].str), tokens[p].type);
  			return atoi(tokens[p].str);
  		}else{
			bool success = true;
			int reg_num = isa_reg_str2val(tokens[p].str, &success);
			if(success == false){
				check_wrong = true;
				return 1;
			}else{
				return reg_num;
			}
		}
  	}
  }
  else if(check_parentheses(p, q) == true) {
  	/*a pair of parentheses surround the expression*/
  	return eval(p+1, q-1);
  }else{
  	int op;
  	op = searchmo(p, q);
  	printf("op = %d\n", op);
  	if(op == p){
		value_1 = 0;
  	}else{  	
		value_1 = eval(p, op-1);
	}
	value_2 = eval(op+1, q);
	printf("value_1=%d value_2=%d\n", value_1, value_2);
	switch (tokens[op].type){
		case '+':
			return value_1+value_2;
		case '-':
			return value_1-value_2;
		case '*':
			
				return value_1*value_2;
					
		case '/':
			if(value_2 == 0){
				check_wrong = false;
				return 0;
			}
			return value_1/value_2;
		case TK_EQ:
			return value_1 == value_2;
		case TK_LESS:
			return value_1 < value_2;
		case TK_LESSEQ:
			return value_1 <= value_2;
		case TK_BIG:
			return value_1 > value_2;
		case TK_BIGEQ:
			return value_1 >= value_2;
		case TK_UNEQ:
			return value_1 != value_2;
		case TK_AND:
			if((value_1 == 1 || value_1 == 0) && (value_2 == 1 || value_2 == 0)){
				return value_1 && value_2;
			}else{
				check_wrong = false;
				return 0;
			}
		case TK_OR:
			if((value_1 == 1 || value_1 == 0) && (value_2 == 1 || value_2 == 0)){
				return value_1 || value_2;
			}else{
				check_wrong = false;
				return 0;
			}
		case TK_NOT:
			if((value_1 == 1 || value_1 == 0) && (value_2 == 1 || value_2 == 0)){
				if(value_2 == 1){
					value_2 = 0;
				}else{
					value_2 = 1;
				}
				return value_1 + value_2;
			}else{
				check_wrong = false;
				return 0;
			}
		case TK_SIXT:
			return value_1+value_2;
		case TK_REG:
			int reg_name = value_1+value_2;
			if(reg_name > 31){
				check_wrong = false;
			}
			return cpu.gpr[reg_name];
		default : 
			check_wrong = false;
			return 1;
	}
  }
}
}

word_t expr(char *e, bool *success) {
  check_wrong = true;
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  int num = eval(0, nr_token-1);
  if(check_wrong == false){
    *success = false;
    return 0;
  }
  else{
  printf("nr_token-1=%d\n", nr_token-1);
    return num;
  }
  /* TODO: Insert codes to evaluate the expression. */
  TODO();
  
  return 0;
}
