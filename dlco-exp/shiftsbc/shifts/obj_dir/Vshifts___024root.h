// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshifts.h for the primary calling header

#ifndef VERILATED_VSHIFTS___024ROOT_H_
#define VERILATED_VSHIFTS___024ROOT_H_  // guard

#include "verilated.h"

class Vshifts__Syms;

class Vshifts___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(x,7,0);
    VL_OUT8(y,7,0);
    CData/*7:0*/ shifts__DOT__a;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshifts__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshifts___024root(Vshifts__Syms* symsp, const char* v__name);
    ~Vshifts___024root();
    VL_UNCOPYABLE(Vshifts___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
