// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjgxzq__Syms.h"


void Vjgxzq___024root__trace_chg_sub_0(Vjgxzq___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vjgxzq___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_chg_top_0\n"); );
    // Init
    Vjgxzq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjgxzq___024root*>(voidSelf);
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vjgxzq___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vjgxzq___024root__trace_chg_sub_0(Vjgxzq___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->a));
    bufp->chgBit(oldp+1,(vlSelf->b));
    bufp->chgBit(oldp+2,(vlSelf->c));
    bufp->chgBit(oldp+3,(vlSelf->y));
    bufp->chgBit(oldp+4,(((IData)(vlSelf->a) & (IData)(vlSelf->b))));
    bufp->chgBit(oldp+5,(((~ (IData)(vlSelf->b)) & (IData)(vlSelf->c))));
    bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->b)))));
}

void Vjgxzq___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_cleanup\n"); );
    // Init
    Vjgxzq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjgxzq___024root*>(voidSelf);
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
