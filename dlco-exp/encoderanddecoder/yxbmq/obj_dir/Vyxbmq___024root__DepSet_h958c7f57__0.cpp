// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyxbmq.h for the primary calling header

#include "verilated.h"

#include "Vyxbmq___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vyxbmq__ConstPool__TABLE_hcfb368ec_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vyxbmq__ConstPool__TABLE_h14202f14_0;
extern const VlUnpacked<IData/*31:0*/, 32> Vyxbmq__ConstPool__TABLE_hbc2d5e8c_0;

VL_INLINE_OPT void Vyxbmq___024root___ico_sequent__TOP__0(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->y = Vyxbmq__ConstPool__TABLE_hcfb368ec_0
        [__Vtableidx1];
    if ((2U & Vyxbmq__ConstPool__TABLE_h14202f14_0[__Vtableidx1])) {
        vlSelf->yxbmq__DOT__i = Vyxbmq__ConstPool__TABLE_hbc2d5e8c_0
            [__Vtableidx1];
    }
}

void Vyxbmq___024root___eval_ico(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vyxbmq___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vyxbmq___024root___eval_act(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___eval_act\n"); );
}

void Vyxbmq___024root___eval_nba(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___eval_nba\n"); );
}

void Vyxbmq___024root___eval_triggers__ico(Vyxbmq___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vyxbmq___024root___dump_triggers__ico(Vyxbmq___024root* vlSelf);
#endif  // VL_DEBUG
void Vyxbmq___024root___eval_triggers__act(Vyxbmq___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vyxbmq___024root___dump_triggers__act(Vyxbmq___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vyxbmq___024root___dump_triggers__nba(Vyxbmq___024root* vlSelf);
#endif  // VL_DEBUG

void Vyxbmq___024root___eval(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___eval\n"); );
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
        Vyxbmq___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vyxbmq___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("yxbmq.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vyxbmq___024root___eval_ico(vlSelf);
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
            Vyxbmq___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vyxbmq___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("yxbmq.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vyxbmq___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vyxbmq___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("yxbmq.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vyxbmq___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vyxbmq___024root___eval_debug_assertions(Vyxbmq___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vyxbmq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyxbmq___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x & 0xf0U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
