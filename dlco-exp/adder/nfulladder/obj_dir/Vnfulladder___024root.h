// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnfulladder.h for the primary calling header

#ifndef VERILATED_VNFULLADDER___024ROOT_H_
#define VERILATED_VNFULLADDER___024ROOT_H_  // guard

#include "verilated.h"

class Vnfulladder__Syms;

class Vnfulladder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in_x,7,0);
    VL_IN8(in_y,7,0);
    VL_OUT8(out_c,7,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnfulladder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnfulladder___024root(Vnfulladder__Syms* symsp, const char* v__name);
    ~Vnfulladder___024root();
    VL_UNCOPYABLE(Vnfulladder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
