// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaddingfd.h for the primary calling header

#ifndef VERILATED_VADDINGFD___024ROOT_H_
#define VERILATED_VADDINGFD___024ROOT_H_  // guard

#include "verilated.h"

class Vaddingfd__Syms;

class Vaddingfd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(c,0,0);
    VL_IN8(clk,0,0);
    VL_OUT8(clka,0,0);
    VL_OUT8(qb,0,0);
    VL_OUT8(qc,0,0);
    VL_OUT8(qd,0,0);
    CData/*0:0*/ addingfd__DOT__r;
    CData/*0:0*/ addingfd__DOT__i2__DOT__s;
    CData/*0:0*/ addingfd__DOT__i3__DOT__w;
    CData/*0:0*/ addingfd__DOT__i3__DOT__s;
    CData/*0:0*/ addingfd__DOT__i4__DOT__w;
    CData/*0:0*/ addingfd__DOT__i4__DOT__s;
    CData/*0:0*/ __Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s;
    CData/*0:0*/ __Vtrigrprev__TOP__addingfd__DOT__i4__DOT__w;
    CData/*0:0*/ __Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<5> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaddingfd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaddingfd___024root(Vaddingfd__Syms* symsp, const char* v__name);
    ~Vaddingfd___024root();
    VL_UNCOPYABLE(Vaddingfd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
