// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjgxzq__Syms.h"


VL_ATTR_COLD void Vjgxzq___024root__trace_init_sub__TOP__0(Vjgxzq___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c", false,-1);
    tracep->declBit(c+4,"y", false,-1);
    tracep->pushNamePrefix("jgxzq ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c", false,-1);
    tracep->declBit(c+4,"y", false,-1);
    tracep->declBit(c+5,"l", false,-1);
    tracep->declBit(c+6,"r", false,-1);
    tracep->declBit(c+7,"b_n", false,-1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBit(c+2,"a", false,-1);
    tracep->declBit(c+7,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+5,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i3 ");
    tracep->declBit(c+7,"a", false,-1);
    tracep->declBit(c+3,"b", false,-1);
    tracep->declBit(c+6,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i4 ");
    tracep->declBit(c+5,"a", false,-1);
    tracep->declBit(c+6,"b", false,-1);
    tracep->declBit(c+4,"c", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vjgxzq___024root__trace_init_top(Vjgxzq___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_init_top\n"); );
    // Body
    Vjgxzq___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vjgxzq___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjgxzq___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjgxzq___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vjgxzq___024root__trace_register(Vjgxzq___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vjgxzq___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vjgxzq___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vjgxzq___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vjgxzq___024root__trace_full_sub_0(Vjgxzq___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vjgxzq___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_full_top_0\n"); );
    // Init
    Vjgxzq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjgxzq___024root*>(voidSelf);
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vjgxzq___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vjgxzq___024root__trace_full_sub_0(Vjgxzq___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjgxzq___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->c));
    bufp->fullBit(oldp+4,(vlSelf->y));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->a) & (IData)(vlSelf->b))));
    bufp->fullBit(oldp+6,(((~ (IData)(vlSelf->b)) & (IData)(vlSelf->c))));
    bufp->fullBit(oldp+7,((1U & (~ (IData)(vlSelf->b)))));
}
