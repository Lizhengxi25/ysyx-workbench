// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjgxzq.h for the primary calling header

#include "verilated.h"

#include "Vjgxzq___024root.h"

VL_INLINE_OPT void Vjgxzq___024root___ico_sequent__TOP__0(Vjgxzq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->y = (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                 | ((~ (IData)(vlSelf->b)) & (IData)(vlSelf->c)));
}

void Vjgxzq___024root___eval_ico(Vjgxzq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vjgxzq___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vjgxzq___024root___eval_act(Vjgxzq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root___eval_act\n"); );
}

void Vjgxzq___024root___eval_nba(Vjgxzq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root___eval_nba\n"); );
}

void Vjgxzq___024root___eval_triggers__ico(Vjgxzq___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjgxzq___024root___dump_triggers__ico(Vjgxzq___024root* vlSelf);
#endif  // VL_DEBUG
void Vjgxzq___024root___eval_triggers__act(Vjgxzq___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjgxzq___024root___dump_triggers__act(Vjgxzq___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjgxzq___024root___dump_triggers__nba(Vjgxzq___024root* vlSelf);
#endif  // VL_DEBUG

void Vjgxzq___024root___eval(Vjgxzq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vjgxzq___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vjgxzq___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("jgxzq.v", 24, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vjgxzq___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vjgxzq___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vjgxzq___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("jgxzq.v", 24, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vjgxzq___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vjgxzq___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("jgxzq.v", 24, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vjgxzq___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vjgxzq___024root___eval_debug_assertions(Vjgxzq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c & 0xfeU))) {
        Verilated::overWidthError("c");}
}
#endif  // VL_DEBUG
