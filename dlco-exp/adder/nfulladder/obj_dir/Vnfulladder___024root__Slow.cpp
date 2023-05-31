// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnfulladder.h for the primary calling header

#include "verilated.h"

#include "Vnfulladder__Syms.h"
#include "Vnfulladder___024root.h"

void Vnfulladder___024root___ctor_var_reset(Vnfulladder___024root* vlSelf);

Vnfulladder___024root::Vnfulladder___024root(Vnfulladder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnfulladder___024root___ctor_var_reset(this);
}

void Vnfulladder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnfulladder___024root::~Vnfulladder___024root() {
}
