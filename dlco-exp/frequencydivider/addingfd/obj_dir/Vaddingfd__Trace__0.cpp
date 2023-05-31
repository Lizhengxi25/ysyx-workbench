// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddingfd__Syms.h"


void Vaddingfd___024root__trace_chg_sub_0(Vaddingfd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaddingfd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_chg_top_0\n"); );
    // Init
    Vaddingfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddingfd___024root*>(voidSelf);
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaddingfd___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vaddingfd___024root__trace_chg_sub_0(Vaddingfd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                              & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))));
        bufp->chgBit(oldp+1,(((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                              & (IData)(vlSelf->addingfd__DOT__i4__DOT__s))));
        bufp->chgBit(oldp+2,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                       & (IData)(vlSelf->addingfd__DOT__i4__DOT__s))))));
        bufp->chgBit(oldp+3,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                       & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))))));
        bufp->chgBit(oldp+4,((1U & ((~ ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                        & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))) 
                                    & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s))))));
    }
    bufp->chgBit(oldp+5,(vlSelf->a));
    bufp->chgBit(oldp+6,(vlSelf->b));
    bufp->chgBit(oldp+7,(vlSelf->c));
    bufp->chgBit(oldp+8,(vlSelf->clk));
    bufp->chgBit(oldp+9,(vlSelf->clka));
    bufp->chgBit(oldp+10,(vlSelf->qb));
    bufp->chgBit(oldp+11,(vlSelf->qc));
    bufp->chgBit(oldp+12,(vlSelf->qd));
    bufp->chgBit(oldp+13,((1U & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))));
    bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))));
    bufp->chgBit(oldp+15,((1U & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))));
    bufp->chgBit(oldp+16,(vlSelf->addingfd__DOT__i2__DOT__s));
    bufp->chgBit(oldp+17,(((IData)(vlSelf->clka) & 
                           (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))));
    bufp->chgBit(oldp+18,(((IData)(vlSelf->clka) & (IData)(vlSelf->addingfd__DOT__i2__DOT__s))));
    bufp->chgBit(oldp+19,((1U & (~ ((IData)(vlSelf->clka) 
                                    & (IData)(vlSelf->addingfd__DOT__i2__DOT__s))))));
    bufp->chgBit(oldp+20,((1U & (~ ((IData)(vlSelf->clka) 
                                    & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))))));
    bufp->chgBit(oldp+21,(((~ ((IData)(vlSelf->clka) 
                               & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))) 
                           & (IData)(vlSelf->clk))));
    bufp->chgBit(oldp+22,(vlSelf->addingfd__DOT__i3__DOT__s));
    bufp->chgBit(oldp+23,(((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                           & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))));
    bufp->chgBit(oldp+24,(((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                           & (IData)(vlSelf->addingfd__DOT__i3__DOT__s))));
    bufp->chgBit(oldp+25,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                    & (IData)(vlSelf->addingfd__DOT__i3__DOT__s))))));
    bufp->chgBit(oldp+26,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                    & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))))));
    bufp->chgBit(oldp+27,((1U & ((~ ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                     & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))) 
                                 & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s))))));
    bufp->chgBit(oldp+28,(vlSelf->addingfd__DOT__i4__DOT__s));
}

void Vaddingfd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_cleanup\n"); );
    // Init
    Vaddingfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddingfd___024root*>(voidSelf);
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
