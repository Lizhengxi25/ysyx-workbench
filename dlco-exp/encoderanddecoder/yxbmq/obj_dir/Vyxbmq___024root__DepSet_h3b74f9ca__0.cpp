// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyxbmq.h for the primary calling header

#include "verilated.h"

#include "Vyxbmq__Syms.h"
#include "Vyxbmq___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyxbmq___024root___dump_triggers__ico(Vyxbmq___024root* vlSelf);
#endif  // VL_DEBUG

void Vyxbmq___024root___eval_triggers__ico(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vyxbmq___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyxbmq___024root___dump_triggers__act(Vyxbmq___024root* vlSelf);
#endif  // VL_DEBUG

void Vyxbmq___024root___eval_triggers__act(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vyxbmq___024root___dump_triggers__act(vlSelf);
    }
#endif
}
