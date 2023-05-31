// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadfd.h for the primary calling header

#ifndef VERILATED_VADFD___024ROOT_H_
#define VERILATED_VADFD___024ROOT_H_  // guard

#include "verilated.h"

class Vadfd__Syms;

class Vadfd___024root final : public VerilatedModule {
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
    Vadfd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vadfd___024root(Vadfd__Syms* symsp, const char* v__name);
    ~Vadfd___024root();
    VL_UNCOPYABLE(Vadfd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
