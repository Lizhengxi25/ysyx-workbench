// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftbmq.h for the primary calling header

#include "verilated.h"

#include "Vftbmq__Syms.h"
#include "Vftbmq___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftbmq___024root___dump_triggers__ico(Vftbmq___024root* vlSelf);
#endif  // VL_DEBUG

void Vftbmq___024root___eval_triggers__ico(Vftbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vftbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftbmq___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vftbmq___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftbmq___024root___dump_triggers__act(Vftbmq___024root* vlSelf);
#endif  // VL_DEBUG

void Vftbmq___024root___eval_triggers__act(Vftbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vftbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftbmq___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vftbmq___024root___dump_triggers__act(vlSelf);
    }
#endif
}
