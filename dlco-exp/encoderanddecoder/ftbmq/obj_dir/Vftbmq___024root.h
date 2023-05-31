// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vftbmq.h for the primary calling header

#ifndef VERILATED_VFTBMQ___024ROOT_H_
#define VERILATED_VFTBMQ___024ROOT_H_  // guard

#include "verilated.h"

class Vftbmq__Syms;

class Vftbmq___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,3,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vftbmq__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vftbmq___024root(Vftbmq__Syms* symsp, const char* v__name);
    ~Vftbmq___024root();
    VL_UNCOPYABLE(Vftbmq___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
