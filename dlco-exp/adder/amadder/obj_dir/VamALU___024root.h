// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VamALU.h for the primary calling header

#ifndef VERILATED_VAMALU___024ROOT_H_
#define VERILATED_VAMALU___024ROOT_H_  // guard

#include "verilated.h"

class VamALU__Syms;

class VamALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(judge,0,0);
    VL_OUT8(overflow,0,0);
    VL_IN8(x,7,0);
    VL_IN8(y,7,0);
    VL_OUT8(result,7,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VamALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VamALU___024root(VamALU__Syms* symsp, const char* v__name);
    ~VamALU___024root();
    VL_UNCOPYABLE(VamALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
