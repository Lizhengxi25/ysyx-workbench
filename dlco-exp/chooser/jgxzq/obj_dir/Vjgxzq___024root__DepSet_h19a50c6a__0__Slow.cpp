// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjgxzq.h for the primary calling header

#include "verilated.h"

#include "Vjgxzq__Syms.h"
#include "Vjgxzq___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjgxzq___024root___dump_triggers__stl(Vjgxzq___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjgxzq___024root___eval_triggers__stl(Vjgxzq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjgxzq___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
