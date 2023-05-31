#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vshifts.h"
#include "Vshifts.h"



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vshifts* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vshifts;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}



int main() {
  sim_init();
  
  top->x = 0b10101010;	top->clk = 0b0; step_and_dump_wave();
  			top->clk = 0b1; step_and_dump_wave();
  
  
  sim_exit();
}
