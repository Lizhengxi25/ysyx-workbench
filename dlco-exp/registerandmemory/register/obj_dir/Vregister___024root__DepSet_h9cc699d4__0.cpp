// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "verilated.h"

#include "Vregister__Syms.h"
#include "Vregister___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister___024root___dump_triggers__act(Vregister___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister___024root___eval_triggers__act(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clr) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__clr)) 
                                      | ((IData)(vlSelf->pre) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__pre)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(2U) = ((((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                       | ((IData)(vlSelf->clr) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__clr))) 
                                      | ((IData)(vlSelf->pre) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__pre)));
    vlSelf->__Vtrigrprev__TOP__clr = vlSelf->clr;
    vlSelf->__Vtrigrprev__TOP__pre = vlSelf->pre;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister___024root___dump_triggers__act(vlSelf);
    }
#endif
}
