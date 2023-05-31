// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister__Syms.h"


VL_ATTR_COLD void Vregister___024root__trace_init_sub__TOP__0(Vregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"load", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"pre", false,-1);
    tracep->declBit(c+4,"clr", false,-1);
    tracep->declBit(c+5,"in", false,-1);
    tracep->declBit(c+6,"q", false,-1);
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+1,"load", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"pre", false,-1);
    tracep->declBit(c+4,"clr", false,-1);
    tracep->declBit(c+5,"in", false,-1);
    tracep->declBit(c+6,"q", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vregister___024root__trace_init_top(Vregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_init_top\n"); );
    // Body
    Vregister___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregister___024root__trace_register(Vregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vregister___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vregister___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vregister___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregister___024root__trace_full_sub_0(Vregister___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_full_top_0\n"); );
    // Init
    Vregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister___024root*>(voidSelf);
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregister___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregister___024root__trace_full_sub_0(Vregister___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->load));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->pre));
    bufp->fullBit(oldp+4,(vlSelf->clr));
    bufp->fullBit(oldp+5,(vlSelf->in));
    bufp->fullBit(oldp+6,(vlSelf->q));
}
