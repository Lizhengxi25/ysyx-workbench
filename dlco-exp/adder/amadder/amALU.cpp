#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/VamALU.h"
#include "VamALU.h"



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VamALU* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VamALU;
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
	
	top->judge=0;	top->x=0b00000010;	top->y=0b00000001; step_and_dump_wave();
						top->y=0b00001000; step_and_dump_wave();
						top->y=0b01111111; step_and_dump_wave();
	top->judge=1;	top->x=0b00001000;	top->y=0b00000001; step_and_dump_wave();
						top->y=0b00010000; step_and_dump_wave();
	
	sim_exit();
}
