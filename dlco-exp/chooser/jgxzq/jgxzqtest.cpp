#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vjgxzq.h"
#include "Vjgxzq.h"



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vjgxzq* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vjgxzq;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(){
	sim_init();
	
	top->b=0;	top->a=0;	top->c=0; step_and_dump_wave();
					top->c=1; step_and_dump_wave();
			top->a=1;	top->c=0; step_and_dump_wave();
					top->c=1; step_and_dump_wave();
	top->b=1;	top->a=0;	top->c=0; step_and_dump_wave();
					top->c=1; step_and_dump_wave();
			top->a=1;	top->c=0; step_and_dump_wave();
					top->c=1; step_and_dump_wave();
	sim_exit();
}

