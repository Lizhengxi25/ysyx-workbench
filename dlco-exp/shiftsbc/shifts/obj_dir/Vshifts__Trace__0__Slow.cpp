// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshifts__Syms.h"


VL_ATTR_COLD void Vshifts___024root__trace_init_sub__TOP__0(Vshifts___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"x", false,-1, 7,0);
    tracep->declBus(c+3,"y", false,-1, 7,0);
    tracep->pushNamePrefix("shifts ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"x", false,-1, 7,0);
    tracep->declBus(c+3,"y", false,-1, 7,0);
    tracep->declBus(c+4,"a", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vshifts___024root__trace_init_top(Vshifts___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root__trace_init_top\n"); );
    // Body
    Vshifts___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshifts___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshifts___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshifts___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshifts___024root__trace_register(Vshifts___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vshifts___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vshifts___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vshifts___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshifts___024root__trace_full_sub_0(Vshifts___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vshifts___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root__trace_full_top_0\n"); );
    // Init
    Vshifts___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshifts___024root*>(voidSelf);
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vshifts___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vshifts___024root__trace_full_sub_0(Vshifts___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifts___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullCData(oldp+2,(vlSelf->x),8);
    bufp->fullCData(oldp+3,(vlSelf->y),8);
    bufp->fullCData(oldp+4,(vlSelf->shifts__DOT__a),8);
}
