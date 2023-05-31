// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfulladder__Syms.h"


VL_ATTR_COLD void Vfulladder___024root__trace_init_sub__TOP__0(Vfulladder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"j", false,-1);
    tracep->declBit(c+2,"a", false,-1);
    tracep->declBit(c+3,"b", false,-1);
    tracep->declBit(c+4,"s", false,-1);
    tracep->declBit(c+5,"l", false,-1);
    tracep->pushNamePrefix("fulladder ");
    tracep->declBit(c+1,"j", false,-1);
    tracep->declBit(c+2,"a", false,-1);
    tracep->declBit(c+3,"b", false,-1);
    tracep->declBit(c+4,"s", false,-1);
    tracep->declBit(c+5,"l", false,-1);
    tracep->declBit(c+6,"k", false,-1);
    tracep->declBit(c+7,"w", false,-1);
    tracep->declBit(c+8,"h", false,-1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBit(c+2,"a", false,-1);
    tracep->declBit(c+3,"b", false,-1);
    tracep->declBit(c+6,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBit(c+2,"a", false,-1);
    tracep->declBit(c+3,"b", false,-1);
    tracep->declBit(c+7,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i3 ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+6,"b", false,-1);
    tracep->declBit(c+5,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i4 ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+6,"b", false,-1);
    tracep->declBit(c+8,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i5 ");
    tracep->declBit(c+7,"a", false,-1);
    tracep->declBit(c+8,"b", false,-1);
    tracep->declBit(c+4,"c", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vfulladder___024root__trace_init_top(Vfulladder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_init_top\n"); );
    // Body
    Vfulladder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfulladder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfulladder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfulladder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfulladder___024root__trace_register(Vfulladder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfulladder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfulladder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfulladder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfulladder___024root__trace_full_sub_0(Vfulladder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfulladder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_full_top_0\n"); );
    // Init
    Vfulladder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfulladder___024root*>(voidSelf);
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfulladder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfulladder___024root__trace_full_sub_0(Vfulladder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->j));
    bufp->fullBit(oldp+2,(vlSelf->a));
    bufp->fullBit(oldp+3,(vlSelf->b));
    bufp->fullBit(oldp+4,(vlSelf->s));
    bufp->fullBit(oldp+5,(vlSelf->l));
    bufp->fullBit(oldp+6,(vlSelf->fulladder__DOT__k));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->a) & (IData)(vlSelf->b))));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->j) & (IData)(vlSelf->fulladder__DOT__k))));
}
