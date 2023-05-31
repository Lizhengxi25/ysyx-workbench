// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtebmq.h for the primary calling header

#include "verilated.h"

#include "Vtebmq___024root.h"

VL_INLINE_OPT void Vtebmq___024root___ico_sequent__TOP__0(Vtebmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtebmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtebmq___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->tebmq__DOT__i = 8U;
        vlSelf->y = ((0xf8U & (IData)(vlSelf->y)) | 
                     (((2U == (IData)(vlSelf->x)) << 2U) 
                      | (((1U == (IData)(vlSelf->x)) 
                          << 1U) | (0U == (IData)(vlSelf->x)))));
        vlSelf->y = ((0xc7U & (IData)(vlSelf->y)) | 
                     (((5U == (IData)(vlSelf->x)) << 5U) 
                      | (((4U == (IData)(vlSelf->x)) 
                          << 4U) | ((3U == (IData)(vlSelf->x)) 
                                    << 3U))));
        vlSelf->y = ((0x3fU & (IData)(vlSelf->y)) | 
                     (((7U == (IData)(vlSelf->x)) << 7U) 
                      | ((6U == (IData)(vlSelf->x)) 
                         << 6U)));
    } else {
        vlSelf->y = 0U;
    }
}

void Vtebmq___024root___eval_ico(Vtebmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtebmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtebmq___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtebmq___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtebmq___024root___eval_act(Vtebmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtebmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtebmq___024root___eval_act\n"); );
}

void Vtebmq___024root___eval_nba(Vtebmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtebmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtebmq___024root___eval_nba\n"); );
}

void Vtebmq___024root___eval_triggers__ico(Vtebmq___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtebmq___024root___dump_triggers__ico(Vtebmq___024root* vlSelf);
#endif  // VL_DEBUG
void Vtebmq___024root___eval_triggers__act(Vtebmq___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtebmq___024root___dump_triggers__act(Vtebmq___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtebmq___024root___dump_triggers__nba(Vtebmq___024root* vlSelf);
#endif  // VL_DEBUG

void Vtebmq___024root___eval(Vtebmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtebmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtebmq___024root___eval\n"); );
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
        Vtebmq___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtebmq___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tebmq.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtebmq___024root___eval_ico(vlSelf);
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
            Vtebmq___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtebmq___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tebmq.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtebmq___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtebmq___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tebmq.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtebmq___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtebmq___024root___eval_debug_assertions(Vtebmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtebmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtebmq___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x & 0xf8U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
