// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminusfd.h for the primary calling header

#ifndef VERILATED_VMINUSFD___024ROOT_H_
#define VERILATED_VMINUSFD___024ROOT_H_  // guard

#include "verilated.h"

class Vminusfd__Syms;

class Vminusfd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(out,2,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vminusfd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vminusfd___024root(Vminusfd__Syms* symsp, const char* v__name);
    ~Vminusfd___024root();
    VL_UNCOPYABLE(Vminusfd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
