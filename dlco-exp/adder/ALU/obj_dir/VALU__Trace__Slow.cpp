// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__traceInitSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VALU___024root__traceInitTop(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VALU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VALU___024root__traceInitSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"x", false,-1, 7,0);
        tracep->declBus(c+2,"y", false,-1, 7,0);
        tracep->declBus(c+3,"judge", false,-1, 2,0);
        tracep->declBus(c+4,"result", false,-1, 7,0);
        tracep->declBit(c+5,"overflow", false,-1);
        tracep->declBus(c+1,"ALU x", false,-1, 7,0);
        tracep->declBus(c+2,"ALU y", false,-1, 7,0);
        tracep->declBus(c+3,"ALU judge", false,-1, 2,0);
        tracep->declBus(c+4,"ALU result", false,-1, 7,0);
        tracep->declBit(c+5,"ALU overflow", false,-1);
    }
}

void VALU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VALU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VALU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VALU___024root__traceRegister(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VALU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VALU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VALU___024root__traceCleanup, vlSelf);
    }
}

void VALU___024root__traceFullSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VALU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VALU___024root* const __restrict vlSelf = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VALU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VALU___024root__traceFullSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->x),8);
        tracep->fullCData(oldp+2,(vlSelf->y),8);
        tracep->fullCData(oldp+3,(vlSelf->judge),3);
        tracep->fullCData(oldp+4,(vlSelf->result),8);
        tracep->fullBit(oldp+5,(vlSelf->overflow));
    }
}
