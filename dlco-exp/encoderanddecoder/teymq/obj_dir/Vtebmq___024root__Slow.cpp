// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtebmq.h for the primary calling header

#include "verilated.h"

#include "Vtebmq__Syms.h"
#include "Vtebmq___024root.h"

void Vtebmq___024root___ctor_var_reset(Vtebmq___024root* vlSelf);

Vtebmq___024root::Vtebmq___024root(Vtebmq__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtebmq___024root___ctor_var_reset(this);
}

void Vtebmq___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtebmq___024root::~Vtebmq___024root() {
}
