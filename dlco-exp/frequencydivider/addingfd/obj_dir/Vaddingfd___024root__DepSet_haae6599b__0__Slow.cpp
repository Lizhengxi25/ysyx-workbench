// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddingfd.h for the primary calling header

#include "verilated.h"

#include "Vaddingfd__Syms.h"
#include "Vaddingfd___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__stl(Vaddingfd___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaddingfd___024root___eval_triggers__stl(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s));
    vlSelf->__VstlTriggered.at(2U) = (((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s)) 
                                      | ((IData)(vlSelf->addingfd__DOT__i4__DOT__w) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i4__DOT__w)));
    vlSelf->__VstlTriggered.at(3U) = (((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s)) 
                                      | ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s)));
    vlSelf->__VstlTriggered.at(4U) = ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s));
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s 
        = vlSelf->addingfd__DOT__i3__DOT__s;
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i4__DOT__w 
        = vlSelf->addingfd__DOT__i4__DOT__w;
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s 
        = vlSelf->addingfd__DOT__i2__DOT__s;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
        vlSelf->__VstlTriggered.at(3U) = 1U;
        vlSelf->__VstlTriggered.at(4U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddingfd___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
