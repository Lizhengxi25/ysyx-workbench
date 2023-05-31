// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddingfd.h for the primary calling header

#include "verilated.h"

#include "Vaddingfd___024root.h"

VL_ATTR_COLD void Vaddingfd___024root___eval_static(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vaddingfd___024root___eval_initial(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s 
        = vlSelf->addingfd__DOT__i3__DOT__s;
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i4__DOT__w 
        = vlSelf->addingfd__DOT__i4__DOT__w;
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s 
        = vlSelf->addingfd__DOT__i2__DOT__s;
}

VL_ATTR_COLD void Vaddingfd___024root___eval_final(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vaddingfd___024root___eval_triggers__stl(Vaddingfd___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__stl(Vaddingfd___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___eval_stl(Vaddingfd___024root* vlSelf);

VL_ATTR_COLD void Vaddingfd___024root___eval_settle(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vaddingfd___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vaddingfd___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("addingfd.v", 11, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vaddingfd___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__stl(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] addingfd.i3.s)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] addingfd.i3.s or [hybrid] addingfd.i4.w)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] addingfd.i3.s or [hybrid] addingfd.i2.s)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] addingfd.i2.s)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaddingfd___024root___stl_comb__TOP__2(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___stl_comb__TOP__2\n"); );
    // Body
    vlSelf->addingfd__DOT__i3__DOT__s = (1U & ((~ (IData)(vlSelf->addingfd__DOT__i3__DOT__w)) 
                                               & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s))));
    vlSelf->qc = (1U & (~ ((~ ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                               & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))) 
                           & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))));
}

void Vaddingfd___024root___ico_sequent__TOP__0(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___act_sequent__TOP__0(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___act_sequent__TOP__1(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___act_sequent__TOP__2(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___act_comb__TOP__0(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___act_comb__TOP__2(Vaddingfd___024root* vlSelf);

VL_ATTR_COLD void Vaddingfd___024root___eval_stl(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vaddingfd___024root___ico_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        Vaddingfd___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        Vaddingfd___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(4U))) {
        Vaddingfd___024root___act_sequent__TOP__2(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
         | vlSelf->__VstlTriggered.at(2U))) {
        Vaddingfd___024root___act_comb__TOP__0(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(3U)) 
         | vlSelf->__VstlTriggered.at(4U))) {
        Vaddingfd___024root___stl_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U)) 
          | vlSelf->__VstlTriggered.at(3U)) | vlSelf->__VstlTriggered.at(4U))) {
        Vaddingfd___024root___act_comb__TOP__2(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__ico(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] addingfd.i2.s)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__act(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] addingfd.i3.s)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] addingfd.i3.s or [hybrid] addingfd.i4.w)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] addingfd.i3.s or [hybrid] addingfd.i2.s)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] addingfd.i2.s)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddingfd___024root___dump_triggers__nba(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] addingfd.i3.s)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] addingfd.i3.s or [hybrid] addingfd.i4.w)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] addingfd.i3.s or [hybrid] addingfd.i2.s)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] addingfd.i2.s)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaddingfd___024root___ctor_var_reset(Vaddingfd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->c = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clka = VL_RAND_RESET_I(1);
    vlSelf->qb = VL_RAND_RESET_I(1);
    vlSelf->qc = VL_RAND_RESET_I(1);
    vlSelf->qd = VL_RAND_RESET_I(1);
    vlSelf->addingfd__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->addingfd__DOT__i2__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->addingfd__DOT__i3__DOT__w = VL_RAND_RESET_I(1);
    vlSelf->addingfd__DOT__i3__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->addingfd__DOT__i4__DOT__w = VL_RAND_RESET_I(1);
    vlSelf->addingfd__DOT__i4__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i3__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i4__DOT__w = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__addingfd__DOT__i2__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
