// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfulladder__Syms.h"


void Vfulladder___024root__trace_chg_sub_0(Vfulladder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfulladder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_chg_top_0\n"); );
    // Init
    Vfulladder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfulladder___024root*>(voidSelf);
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfulladder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vfulladder___024root__trace_chg_sub_0(Vfulladder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->j));
    bufp->chgBit(oldp+1,(vlSelf->a));
    bufp->chgBit(oldp+2,(vlSelf->b));
    bufp->chgBit(oldp+3,(vlSelf->s));
    bufp->chgBit(oldp+4,(vlSelf->l));
    bufp->chgBit(oldp+5,(vlSelf->fulladder__DOT__k));
    bufp->chgBit(oldp+6,(((IData)(vlSelf->a) & (IData)(vlSelf->b))));
    bufp->chgBit(oldp+7,(((IData)(vlSelf->j) & (IData)(vlSelf->fulladder__DOT__k))));
}

void Vfulladder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_cleanup\n"); );
    // Init
    Vfulladder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfulladder___024root*>(voidSelf);
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
