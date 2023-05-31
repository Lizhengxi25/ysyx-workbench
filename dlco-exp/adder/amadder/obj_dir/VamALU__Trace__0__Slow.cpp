// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VamALU__Syms.h"


VL_ATTR_COLD void VamALU___024root__trace_init_sub__TOP__0(VamALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"x", false,-1, 7,0);
    tracep->declBus(c+2,"y", false,-1, 7,0);
    tracep->declBit(c+3,"judge", false,-1);
    tracep->declBus(c+4,"result", false,-1, 7,0);
    tracep->declBit(c+5,"overflow", false,-1);
    tracep->pushNamePrefix("amALU ");
    tracep->declBus(c+1,"x", false,-1, 7,0);
    tracep->declBus(c+2,"y", false,-1, 7,0);
    tracep->declBit(c+3,"judge", false,-1);
    tracep->declBus(c+4,"result", false,-1, 7,0);
    tracep->declBit(c+5,"overflow", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VamALU___024root__trace_init_top(VamALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root__trace_init_top\n"); );
    // Body
    VamALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VamALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VamALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VamALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VamALU___024root__trace_register(VamALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VamALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VamALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VamALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VamALU___024root__trace_full_sub_0(VamALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VamALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root__trace_full_top_0\n"); );
    // Init
    VamALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VamALU___024root*>(voidSelf);
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VamALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VamALU___024root__trace_full_sub_0(VamALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VamALU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->x),8);
    bufp->fullCData(oldp+2,(vlSelf->y),8);
    bufp->fullBit(oldp+3,(vlSelf->judge));
    bufp->fullCData(oldp+4,(vlSelf->result),8);
    bufp->fullBit(oldp+5,(vlSelf->overflow));
}
