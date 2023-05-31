// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifts.h for the primary calling header

#include "verilated.h"

#include "Vshifts__Syms.h"
#include "Vshifts___024root.h"

void Vshifts___024root___ctor_var_reset(Vshifts___024root* vlSelf);

Vshifts___024root::Vshifts___024root(Vshifts__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vshifts___024root___ctor_var_reset(this);
}

void Vshifts___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vshifts___024root::~Vshifts___024root() {
}
