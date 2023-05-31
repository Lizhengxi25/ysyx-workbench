// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddingfd__Syms.h"


VL_ATTR_COLD void Vaddingfd___024root__trace_init_sub__TOP__0(Vaddingfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"a", false,-1);
    tracep->declBit(c+7,"b", false,-1);
    tracep->declBit(c+8,"c", false,-1);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"clka", false,-1);
    tracep->declBit(c+11,"qb", false,-1);
    tracep->declBit(c+12,"qc", false,-1);
    tracep->declBit(c+13,"qd", false,-1);
    tracep->pushNamePrefix("addingfd ");
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"clka", false,-1);
    tracep->declBit(c+11,"qb", false,-1);
    tracep->declBit(c+12,"qc", false,-1);
    tracep->declBit(c+13,"qd", false,-1);
    tracep->declBit(c+14,"q", false,-1);
    tracep->declBit(c+15,"w", false,-1);
    tracep->declBit(c+16,"e", false,-1);
    tracep->declBit(c+30,"r", false,-1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBit(c+9,"a", false,-1);
    tracep->declBit(c+10,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+11,"c", false,-1);
    tracep->declBit(c+14,"d", false,-1);
    tracep->declBit(c+10,"h", false,-1);
    tracep->declBit(c+17,"p", false,-1);
    tracep->declBit(c+18,"q", false,-1);
    tracep->declBit(c+19,"w", false,-1);
    tracep->declBit(c+20,"e", false,-1);
    tracep->declBit(c+21,"r", false,-1);
    tracep->declBit(c+17,"s", false,-1);
    tracep->declBit(c+22,"x", false,-1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBit(c+9,"a", false,-1);
    tracep->declBit(c+10,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+17,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i3 ");
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+10,"b", false,-1);
    tracep->declBit(c+18,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i4 ");
    tracep->declBit(c+10,"a", false,-1);
    tracep->declBit(c+17,"b", false,-1);
    tracep->declBit(c+19,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i5 ");
    tracep->declBit(c+18,"a", false,-1);
    tracep->declBit(c+19,"b", false,-1);
    tracep->declBit(c+20,"c", false,-1);
    tracep->declBit(c+21,"d", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i6 ");
    tracep->declBit(c+20,"a", false,-1);
    tracep->declBit(c+9,"b", false,-1);
    tracep->declBit(c+17,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i7 ");
    tracep->declBit(c+9,"a", false,-1);
    tracep->declBit(c+21,"b", false,-1);
    tracep->declBit(c+22,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i8 ");
    tracep->declBit(c+17,"a", false,-1);
    tracep->declBit(c+22,"b", false,-1);
    tracep->declBit(c+11,"c", false,-1);
    tracep->declBit(c+14,"d", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBit(c+15,"a", false,-1);
    tracep->declBit(c+14,"clk", false,-1);
    tracep->declBit(c+12,"c", false,-1);
    tracep->declBit(c+15,"d", false,-1);
    tracep->declBit(c+17,"h", false,-1);
    tracep->declBit(c+23,"p", false,-1);
    tracep->declBit(c+24,"q", false,-1);
    tracep->declBit(c+25,"w", false,-1);
    tracep->declBit(c+26,"e", false,-1);
    tracep->declBit(c+27,"r", false,-1);
    tracep->declBit(c+23,"s", false,-1);
    tracep->declBit(c+28,"x", false,-1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+17,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBit(c+15,"a", false,-1);
    tracep->declBit(c+23,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i3 ");
    tracep->declBit(c+15,"a", false,-1);
    tracep->declBit(c+17,"b", false,-1);
    tracep->declBit(c+24,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i4 ");
    tracep->declBit(c+17,"a", false,-1);
    tracep->declBit(c+23,"b", false,-1);
    tracep->declBit(c+25,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i5 ");
    tracep->declBit(c+24,"a", false,-1);
    tracep->declBit(c+25,"b", false,-1);
    tracep->declBit(c+26,"c", false,-1);
    tracep->declBit(c+27,"d", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i6 ");
    tracep->declBit(c+26,"a", false,-1);
    tracep->declBit(c+14,"b", false,-1);
    tracep->declBit(c+23,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i7 ");
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+27,"b", false,-1);
    tracep->declBit(c+28,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i8 ");
    tracep->declBit(c+23,"a", false,-1);
    tracep->declBit(c+28,"b", false,-1);
    tracep->declBit(c+12,"c", false,-1);
    tracep->declBit(c+15,"d", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBit(c+16,"a", false,-1);
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+13,"c", false,-1);
    tracep->declBit(c+16,"d", false,-1);
    tracep->declBit(c+23,"h", false,-1);
    tracep->declBit(c+29,"p", false,-1);
    tracep->declBit(c+1,"q", false,-1);
    tracep->declBit(c+2,"w", false,-1);
    tracep->declBit(c+3,"e", false,-1);
    tracep->declBit(c+4,"r", false,-1);
    tracep->declBit(c+29,"s", false,-1);
    tracep->declBit(c+5,"x", false,-1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBit(c+15,"a", false,-1);
    tracep->declBit(c+23,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBit(c+16,"a", false,-1);
    tracep->declBit(c+29,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i3 ");
    tracep->declBit(c+16,"a", false,-1);
    tracep->declBit(c+23,"b", false,-1);
    tracep->declBit(c+1,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i4 ");
    tracep->declBit(c+23,"a", false,-1);
    tracep->declBit(c+29,"b", false,-1);
    tracep->declBit(c+2,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i5 ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c", false,-1);
    tracep->declBit(c+4,"d", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i6 ");
    tracep->declBit(c+3,"a", false,-1);
    tracep->declBit(c+15,"b", false,-1);
    tracep->declBit(c+29,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i7 ");
    tracep->declBit(c+15,"a", false,-1);
    tracep->declBit(c+4,"b", false,-1);
    tracep->declBit(c+5,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i8 ");
    tracep->declBit(c+29,"a", false,-1);
    tracep->declBit(c+5,"b", false,-1);
    tracep->declBit(c+13,"c", false,-1);
    tracep->declBit(c+16,"d", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("xordoor ");
    tracep->declBit(c+6,"a", false,-1);
    tracep->declBit(c+7,"b", false,-1);
    tracep->declBit(c+8,"c", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vaddingfd___024root__trace_init_top(Vaddingfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_init_top\n"); );
    // Body
    Vaddingfd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaddingfd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddingfd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddingfd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaddingfd___024root__trace_register(Vaddingfd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vaddingfd___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vaddingfd___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vaddingfd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaddingfd___024root__trace_full_sub_0(Vaddingfd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaddingfd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_full_top_0\n"); );
    // Init
    Vaddingfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddingfd___024root*>(voidSelf);
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaddingfd___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaddingfd___024root__trace_full_sub_0(Vaddingfd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddingfd___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                           & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))));
    bufp->fullBit(oldp+2,(((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                           & (IData)(vlSelf->addingfd__DOT__i4__DOT__s))));
    bufp->fullBit(oldp+3,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                    & (IData)(vlSelf->addingfd__DOT__i4__DOT__s))))));
    bufp->fullBit(oldp+4,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                    & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))))));
    bufp->fullBit(oldp+5,((1U & ((~ ((IData)(vlSelf->addingfd__DOT__i3__DOT__s) 
                                     & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))) 
                                 & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s))))));
    bufp->fullBit(oldp+6,(vlSelf->a));
    bufp->fullBit(oldp+7,(vlSelf->b));
    bufp->fullBit(oldp+8,(vlSelf->c));
    bufp->fullBit(oldp+9,(vlSelf->clk));
    bufp->fullBit(oldp+10,(vlSelf->clka));
    bufp->fullBit(oldp+11,(vlSelf->qb));
    bufp->fullBit(oldp+12,(vlSelf->qc));
    bufp->fullBit(oldp+13,(vlSelf->qd));
    bufp->fullBit(oldp+14,((1U & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))));
    bufp->fullBit(oldp+15,((1U & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))));
    bufp->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->addingfd__DOT__i4__DOT__s)))));
    bufp->fullBit(oldp+17,(vlSelf->addingfd__DOT__i2__DOT__s));
    bufp->fullBit(oldp+18,(((IData)(vlSelf->clka) & 
                            (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->clka) & (IData)(vlSelf->addingfd__DOT__i2__DOT__s))));
    bufp->fullBit(oldp+20,((1U & (~ ((IData)(vlSelf->clka) 
                                     & (IData)(vlSelf->addingfd__DOT__i2__DOT__s))))));
    bufp->fullBit(oldp+21,((1U & (~ ((IData)(vlSelf->clka) 
                                     & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))))));
    bufp->fullBit(oldp+22,(((~ ((IData)(vlSelf->clka) 
                                & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s)))) 
                            & (IData)(vlSelf->clk))));
    bufp->fullBit(oldp+23,(vlSelf->addingfd__DOT__i3__DOT__s));
    bufp->fullBit(oldp+24,(((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                            & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                            & (IData)(vlSelf->addingfd__DOT__i3__DOT__s))));
    bufp->fullBit(oldp+26,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                     & (IData)(vlSelf->addingfd__DOT__i3__DOT__s))))));
    bufp->fullBit(oldp+27,((1U & (~ ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                     & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))))));
    bufp->fullBit(oldp+28,((1U & ((~ ((IData)(vlSelf->addingfd__DOT__i2__DOT__s) 
                                      & (~ (IData)(vlSelf->addingfd__DOT__i3__DOT__s)))) 
                                  & (~ (IData)(vlSelf->addingfd__DOT__i2__DOT__s))))));
    bufp->fullBit(oldp+29,(vlSelf->addingfd__DOT__i4__DOT__s));
    bufp->fullBit(oldp+30,(vlSelf->addingfd__DOT__r));
}
