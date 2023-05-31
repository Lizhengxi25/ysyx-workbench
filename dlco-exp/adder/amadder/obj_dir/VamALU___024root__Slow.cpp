// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VamALU.h for the primary calling header

#include "verilated.h"

#include "VamALU__Syms.h"
#include "VamALU___024root.h"

void VamALU___024root___ctor_var_reset(VamALU___024root* vlSelf);

VamALU___024root::VamALU___024root(VamALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VamALU___024root___ctor_var_reset(this);
}

void VamALU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VamALU___024root::~VamALU___024root() {
}
