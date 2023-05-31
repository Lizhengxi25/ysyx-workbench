#include <stdlib.h>
#include <iostream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/VALU.h"
#include "VALU.h"



VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VALU* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VALU;
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
	
	top->judge=0b000;	top->x=0b00000010;	top->y=0b00000001; step_and_dump_wave();
							top->y=0b00001000; step_and_dump_wave();
							top->y=0b01111111; step_and_dump_wave();
	top->judge=0b001;	top->x=0b00001000;	top->y=0b00000001; step_and_dump_wave();
							top->y=0b00010000; step_and_dump_wave();
	top->judge=0b010;	top->x=0b00000000;	top->y=0b00000000; step_and_dump_wave();
	top->judge=0b011;	top->x=0b01010110;	top->y=0b00000100; step_and_dump_wave();
	top->judge=0b100;	top->x=0b10101010;	top->y=0b01010101; step_and_dump_wave();
	top->judge=0b101;	top->x=0b00000010;	top->y=0b00000001; step_and_dump_wave();
	top->judge=0b110;	top->x=0b11111110;	top->y=0b00000001; step_and_dump_wave();
	top->judge=0b111;	top->x=0b00000001;	top->y=0b00000011; step_and_dump_wave();
							top->y=0b00000001; step_and_dump_wave();
	
	sim_exit();
}
