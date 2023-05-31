// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbmq.h for the primary calling header

#include "verilated.h"

#include "Vbmq__Syms.h"
#include "Vbmq___024root.h"

void Vbmq___024root___ctor_var_reset(Vbmq___024root* vlSelf);

Vbmq___024root::Vbmq___024root(Vbmq__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbmq___024root___ctor_var_reset(this);
}

void Vbmq___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbmq___024root::~Vbmq___024root() {
}
