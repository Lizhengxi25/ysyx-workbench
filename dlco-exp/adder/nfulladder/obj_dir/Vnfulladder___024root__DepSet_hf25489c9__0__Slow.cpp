// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnfulladder.h for the primary calling header

#include "verilated.h"

#include "Vnfulladder__Syms.h"
#include "Vnfulladder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnfulladder___024root___dump_triggers__stl(Vnfulladder___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnfulladder___024root___eval_triggers__stl(Vnfulladder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnfulladder___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnfulladder___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
