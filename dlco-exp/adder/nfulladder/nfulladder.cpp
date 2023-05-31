#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vnfulladder.h"
#include "Vnfulladder.h"



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vnfulladder* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vnfulladder;
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
	
	top->in_y=0b00000000;	top->in_x = 0b00000000; step_and_dump_wave();
			
	top->in_y=0b11111111;	top->in_x = 0b11111111; step_and_dump_wave();
				top->in_x = 0b00000000; step_and_dump_wave();
			
	sim_exit();
}
