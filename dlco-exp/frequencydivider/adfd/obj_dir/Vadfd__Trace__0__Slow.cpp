// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadfd__Syms.h"


VL_ATTR_COLD void Vadfd___024root__trace_init_sub__TOP__0(Vadfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadfd___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"out", false,-1, 2,0);
    tracep->pushNamePrefix("adfd ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"out", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vadfd___024root__trace_init_top(Vadfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadfd___024root__trace_init_top\n"); );
    // Body
    Vadfd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadfd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadfd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadfd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadfd___024root__trace_register(Vadfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadfd___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vadfd___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vadfd___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vadfd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadfd___024root__trace_full_sub_0(Vadfd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadfd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadfd___024root__trace_full_top_0\n"); );
    // Init
    Vadfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadfd___024root*>(voidSelf);
    Vadfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vadfd___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadfd___024root__trace_full_sub_0(Vadfd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vadfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadfd___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->en));
    bufp->fullCData(oldp+3,(vlSelf->out),3);
}
