// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFSM_bin.h for the primary calling header

#ifndef VERILATED_VFSM_BIN___024ROOT_H_
#define VERILATED_VFSM_BIN___024ROOT_H_  // guard

#include "verilated.h"

class VFSM_bin__Syms;

class VFSM_bin___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(out,0,0);
    CData/*3:0*/ FSM_bin__DOT__state;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFSM_bin__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFSM_bin___024root(VFSM_bin__Syms* symsp, const char* v__name);
    ~VFSM_bin___024root();
    VL_UNCOPYABLE(VFSM_bin___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
