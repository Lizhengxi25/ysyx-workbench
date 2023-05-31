// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "verilated.h"

#include "VFSM_bin__Syms.h"
#include "VFSM_bin___024root.h"

void VFSM_bin___024root___ctor_var_reset(VFSM_bin___024root* vlSelf);

VFSM_bin___024root::VFSM_bin___024root(VFSM_bin__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFSM_bin___024root___ctor_var_reset(this);
}

void VFSM_bin___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VFSM_bin___024root::~VFSM_bin___024root() {
}
