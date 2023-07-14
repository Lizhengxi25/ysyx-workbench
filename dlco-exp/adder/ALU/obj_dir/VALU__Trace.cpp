// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__traceChgSub0(VALU___024root* vlSelf, VerilatedVcd* tracep);

void VALU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VALU___024root* const __restrict vlSelf = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VALU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VALU___024root__traceChgSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->x),8);
        tracep->chgCData(oldp+1,(vlSelf->y),8);
        tracep->chgCData(oldp+2,(vlSelf->judge),3);
        tracep->chgCData(oldp+3,(vlSelf->result),8);
        tracep->chgBit(oldp+4,(vlSelf->overflow));
    }
}

void VALU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VALU___024root* const __restrict vlSelf = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
