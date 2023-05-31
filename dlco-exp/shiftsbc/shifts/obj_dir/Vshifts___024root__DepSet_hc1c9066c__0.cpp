// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifts.h for the primary calling header

#include "verilated.h"

#include "Vshifts___024root.h"

void Vshifts___024root___eval_act(Vshifts___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vshifts___024root___nba_sequent__TOP__0(Vshifts___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->shifts__DOT__a = ((0xfeU & ((IData)(vlSelf->x) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->x) 
                                                      >> 7U)));
    vlSelf->y = vlSelf->shifts__DOT__a;
}

void Vshifts___024root___eval_nba(Vshifts___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vshifts___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vshifts___024root___eval_triggers__act(Vshifts___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifts___024root___dump_triggers__act(Vshifts___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifts___024root___dump_triggers__nba(Vshifts___024root* vlSelf);
#endif  // VL_DEBUG

void Vshifts___024root___eval(Vshifts___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vshifts___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vshifts___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("shifts.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vshifts___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vshifts___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("shifts.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vshifts___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vshifts___024root___eval_debug_assertions(Vshifts___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
