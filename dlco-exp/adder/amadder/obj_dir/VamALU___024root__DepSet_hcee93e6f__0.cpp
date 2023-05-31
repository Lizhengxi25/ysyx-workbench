// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VamALU.h for the primary calling header

#include "verilated.h"

#include "VamALU___024root.h"

VL_INLINE_OPT void VamALU___024root___ico_sequent__TOP__0(VamALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->judge) {
        vlSelf->result = 0U;
        vlSelf->overflow = 0U;
        vlSelf->result = (0xffU & ((IData)(vlSelf->x) 
                                   - (IData)(vlSelf->y)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->x) 
                                    >> 7U)) == (1U 
                                                & ((IData)(vlSelf->y) 
                                                   >> 7U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelf->x) 
                                                     >> 7U))));
    } else {
        vlSelf->result = 0U;
        vlSelf->overflow = 0U;
        vlSelf->result = (0xffU & ((IData)(vlSelf->x) 
                                   + (IData)(vlSelf->y)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->x) 
                                    >> 7U)) == (1U 
                                                & ((IData)(vlSelf->y) 
                                                   >> 7U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelf->x) 
                                                     >> 7U))));
    }
}

void VamALU___024root___eval_ico(VamALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VamALU___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VamALU___024root___eval_act(VamALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root___eval_act\n"); );
}

void VamALU___024root___eval_nba(VamALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root___eval_nba\n"); );
}

void VamALU___024root___eval_triggers__ico(VamALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VamALU___024root___dump_triggers__ico(VamALU___024root* vlSelf);
#endif  // VL_DEBUG
void VamALU___024root___eval_triggers__act(VamALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VamALU___024root___dump_triggers__act(VamALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VamALU___024root___dump_triggers__nba(VamALU___024root* vlSelf);
#endif  // VL_DEBUG

void VamALU___024root___eval(VamALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root___eval\n"); );
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
        VamALU___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VamALU___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("amALU.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VamALU___024root___eval_ico(vlSelf);
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
            VamALU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VamALU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("amALU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VamALU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VamALU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("amALU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VamALU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VamALU___024root___eval_debug_assertions(VamALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->judge & 0xfeU))) {
        Verilated::overWidthError("judge");}
}
#endif  // VL_DEBUG
