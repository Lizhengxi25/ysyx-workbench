// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtebmq.h for the primary calling header

#ifndef VERILATED_VTEBMQ___024ROOT_H_
#define VERILATED_VTEBMQ___024ROOT_H_  // guard

#include "verilated.h"

class Vtebmq__Syms;

class Vtebmq___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,2,0);
    VL_OUT8(y,7,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tebmq__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtebmq__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtebmq___024root(Vtebmq__Syms* symsp, const char* v__name);
    ~Vtebmq___024root();
    VL_UNCOPYABLE(Vtebmq___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
