// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "verilated.h"

#include "Vram___024root.h"

VL_INLINE_OPT void Vram___024root___ico_sequent__TOP__0(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->dout = vlSelf->ram__DOT__ram[vlSelf->addrout];
}

void Vram___024root___eval_ico(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vram___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vram___024root___eval_act(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vram___024root___nba_sequent__TOP__0(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__ram__DOT__ram__v0;
    __Vdlyvdim0__ram__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__ram__v0;
    __Vdlyvval__ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__ram__v0;
    __Vdlyvset__ram__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__DOT__ram__v0 = 0U;
    if (vlSelf->wen) {
        __Vdlyvval__ram__DOT__ram__v0 = vlSelf->din;
        __Vdlyvset__ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ram__DOT__ram__v0 = vlSelf->addrin;
    }
    if (__Vdlyvset__ram__DOT__ram__v0) {
        vlSelf->ram__DOT__ram[__Vdlyvdim0__ram__DOT__ram__v0] 
            = __Vdlyvval__ram__DOT__ram__v0;
    }
    vlSelf->dout = vlSelf->ram__DOT__ram[vlSelf->addrout];
}

void Vram___024root___eval_nba(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vram___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vram___024root___eval_triggers__ico(Vram___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram___024root___dump_triggers__ico(Vram___024root* vlSelf);
#endif  // VL_DEBUG
void Vram___024root___eval_triggers__act(Vram___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram___024root___dump_triggers__act(Vram___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram___024root___dump_triggers__nba(Vram___024root* vlSelf);
#endif  // VL_DEBUG

void Vram___024root___eval(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vram___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vram___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("ram.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vram___024root___eval_ico(vlSelf);
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
            Vram___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vram___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ram.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vram___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vram___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ram.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vram___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vram___024root___eval_debug_assertions(Vram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
    if (VL_UNLIKELY((vlSelf->addrin & 0xf8U))) {
        Verilated::overWidthError("addrin");}
    if (VL_UNLIKELY((vlSelf->addrout & 0xf8U))) {
        Verilated::overWidthError("addrout");}
}
#endif  // VL_DEBUG
