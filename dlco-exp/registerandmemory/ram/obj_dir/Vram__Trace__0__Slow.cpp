// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram__Syms.h"


VL_ATTR_COLD void Vram___024root__trace_init_sub__TOP__0(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"wen", false,-1);
    tracep->declBus(c+11,"din", false,-1, 7,0);
    tracep->declBus(c+12,"addrin", false,-1, 2,0);
    tracep->declBus(c+13,"addrout", false,-1, 2,0);
    tracep->declBus(c+14,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+15,"RAM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"RAM_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"wen", false,-1);
    tracep->declBus(c+11,"din", false,-1, 7,0);
    tracep->declBus(c+12,"addrin", false,-1, 2,0);
    tracep->declBus(c+13,"addrout", false,-1, 2,0);
    tracep->declBus(c+14,"dout", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vram___024root__trace_init_top(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_init_top\n"); );
    // Body
    Vram___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vram___024root__trace_register(Vram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vram___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vram___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vram___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vram___024root__trace_full_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_full_top_0\n"); );
    // Init
    Vram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram___024root*>(voidSelf);
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vram___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vram___024root__trace_full_sub_0(Vram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ram__DOT__ram[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->ram__DOT__ram[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->ram__DOT__ram[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->ram__DOT__ram[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->ram__DOT__ram[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->ram__DOT__ram[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->ram__DOT__ram[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->ram__DOT__ram[7]),8);
    bufp->fullBit(oldp+9,(vlSelf->clk));
    bufp->fullBit(oldp+10,(vlSelf->wen));
    bufp->fullCData(oldp+11,(vlSelf->din),8);
    bufp->fullCData(oldp+12,(vlSelf->addrin),3);
    bufp->fullCData(oldp+13,(vlSelf->addrout),3);
    bufp->fullCData(oldp+14,(vlSelf->dout),8);
    bufp->fullIData(oldp+15,(8U),32);
    bufp->fullIData(oldp+16,(3U),32);
}
