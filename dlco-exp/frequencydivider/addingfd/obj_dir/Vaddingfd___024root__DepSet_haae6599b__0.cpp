// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddingfd.h for the primary calling header

#include "verilated.h"

#include "Vaddingfd__Syms.h"
#include "Vaddingfd___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__ico(Vaddingfd___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddingfd___024root___eval_triggers__ico(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s));
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s 
        = vlSelf->addingfd__DOT__i2__DOT__s;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddingfd___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__act(Vaddingfd___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddingfd___024root___eval_triggers__act(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s)) 
                                      | ((IData)(vlSelf->addingfd__DOT__i4__DOT__w) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i4__DOT__w)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s)) 
                                      | ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s)));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s));
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s 
        = vlSelf->addingfd__DOT__i3__DOT__s;
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i4__DOT__w 
        = vlSelf->addingfd__DOT__i4__DOT__w;
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s 
        = vlSelf->addingfd__DOT__i2__DOT__s;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddingfd___024root___dump_triggers__act(vlSelf);
    }
#endif
}
