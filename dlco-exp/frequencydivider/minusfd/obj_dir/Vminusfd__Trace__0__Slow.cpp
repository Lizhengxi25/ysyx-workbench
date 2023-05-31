// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vminusfd__Syms.h"


VL_ATTR_COLD void Vminusfd___024root__trace_init_sub__TOP__0(Vminusfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"out", false,-1, 2,0);
    tracep->pushNamePrefix("minusfd ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+3,"out", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vminusfd___024root__trace_init_top(Vminusfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root__trace_init_top\n"); );
    // Body
    Vminusfd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vminusfd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminusfd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminusfd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vminusfd___024root__trace_register(Vminusfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vminusfd___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vminusfd___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vminusfd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vminusfd___024root__trace_full_sub_0(Vminusfd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vminusfd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root__trace_full_top_0\n"); );
    // Init
    Vminusfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminusfd___024root*>(voidSelf);
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vminusfd___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vminusfd___024root__trace_full_sub_0(Vminusfd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminusfd___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->en));
    bufp->fullCData(oldp+3,(vlSelf->out),3);
}
