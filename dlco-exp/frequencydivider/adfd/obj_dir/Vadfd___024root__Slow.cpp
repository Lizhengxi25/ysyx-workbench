// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadfd.h for the primary calling header

#include "verilated.h"

#include "Vadfd__Syms.h"
#include "Vadfd___024root.h"

void Vadfd___024root___ctor_var_reset(Vadfd___024root* vlSelf);

Vadfd___024root::Vadfd___024root(Vadfd__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vadfd___024root___ctor_var_reset(this);
}

void Vadfd___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vadfd___024root::~Vadfd___024root() {
}
