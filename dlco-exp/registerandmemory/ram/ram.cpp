#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vram.h"
#include "Vram.h"



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vram* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vram;
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
	
	top->wen=1;	top->addrin=0b00000001;	top->din=0b001;		top->addrout=0b00000001; 	top->clk=0;	step_and_dump_wave();
													top->clk=1;	step_and_dump_wave();
			top->addrin=0b00000010;	top->din=0b010;		top->addrout=0b00000010;	top->clk=0;	step_and_dump_wave();
													top->clk=1;	step_and_dump_wave();
			top->addrin=0b00000101;	top->din=0b111;		top->addrout=0b00000101;	top->clk=0;	step_and_dump_wave();
													top->clk=1;	step_and_dump_wave();													
			top->addrin=0b00000010;	top->din=0b011;		top->addrout=0b00000010;	top->clk=0;	step_and_dump_wave();
													top->clk=1;	step_and_dump_wave();
			top->addrin=0b00000101;	top->din=0b000;		top->addrout=0b00000101;	top->clk=0;	step_and_dump_wave();
													top->clk=1;	step_and_dump_wave();
									top->addrout=0b00000001;	top->clk=0;	step_and_dump_wave();
													top->clk=1;	step_and_dump_wave();
						
			
			
	sim_exit();
}
