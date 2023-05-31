#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vregister.h"
#include "Vregister.h"



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vregister* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vregister;
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
	
	top->pre=1;	top->clr=0;	top->load=1;	top->in=1;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
	top->pre=0;	top->clr=1;	top->load=1;	top->in=1;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
			top->clr=0;	top->load=0;	top->in=1;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
							top->in=0;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
					top->load=1;	top->in=1;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
							top->in=0;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
							top->in=1;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
			top->clr=1;	top->load=1;	top->in=1;	top->clk=0;	step_and_dump_wave();
									top->clk=1;	step_and_dump_wave();
			
	sim_exit();
}
