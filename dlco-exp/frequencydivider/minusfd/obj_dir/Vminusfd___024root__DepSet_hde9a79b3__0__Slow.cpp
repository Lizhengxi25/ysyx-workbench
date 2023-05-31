// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminusfd.h for the primary calling header

#include "verilated.h"

#include "Vminusfd___024root.h"

VL_ATTR_COLD void Vminusfd___024root___eval_static(Vminusfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vminusfd___024root___eval_initial(Vminusfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vminusfd___024root___eval_final(Vminusfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vminusfd___024root___eval_settle(Vminusfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminusfd___024root___dump_triggers__act(Vminusfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminusfd___024root___dump_triggers__nba(Vminusfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vminusfd___024root___ctor_var_reset(Vminusfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
