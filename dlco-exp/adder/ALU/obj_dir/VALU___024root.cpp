// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU___024root.h"
#include "VALU__Syms.h"

//==========

VL_INLINE_OPT void VALU___024root___combo__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__1\n"); );
    // Body
    if ((0U == (IData)(vlSelf->judge))) {
        vlSelf->result = 0U;
        vlSelf->overflow = 0U;
        vlSelf->result = (0xffU & ((IData)(vlSelf->x) 
                                   + (IData)(vlSelf->y)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->x) 
                                    >> 7U)) == (1U 
                                                & ((IData)(vlSelf->y) 
                                                   >> 7U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelf->x) 
                                                     >> 7U))));
    }
    if ((1U == (IData)(vlSelf->judge))) {
        vlSelf->result = 0U;
        vlSelf->overflow = 0U;
        vlSelf->result = (0xffU & ((IData)(vlSelf->x) 
                                   - (IData)(vlSelf->y)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->x) 
                                    >> 7U)) != (1U 
                                                & ((IData)(vlSelf->y) 
                                                   >> 7U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelf->x) 
                                                     >> 7U))));
    } else {
        vlSelf->overflow = 0U;
        vlSelf->result = (0xffU & ((4U & (IData)(vlSelf->judge))
                                    ? ((2U & (IData)(vlSelf->judge))
                                        ? ((1U & (IData)(vlSelf->judge))
                                            ? ((IData)(vlSelf->x) 
                                               == (IData)(vlSelf->y))
                                            : ((((IData)(vlSelf->x) 
                                                 > (IData)(vlSelf->y)) 
                                                & ((1U 
                                                    & ((IData)(vlSelf->x) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->y) 
                                                       >> 7U)))) 
                                               | ((0x7fU 
                                                   > 
                                                   ((IData)(vlSelf->x) 
                                                    - (IData)(vlSelf->y))) 
                                                  & ((1U 
                                                      & ((IData)(vlSelf->x) 
                                                         >> 7U)) 
                                                     != 
                                                     (1U 
                                                      & ((IData)(vlSelf->y) 
                                                         >> 7U))))))
                                        : ((1U & (IData)(vlSelf->judge))
                                            ? ((IData)(vlSelf->x) 
                                               ^ (IData)(vlSelf->y))
                                            : ((IData)(vlSelf->x) 
                                               | (IData)(vlSelf->y))))
                                    : ((2U & (IData)(vlSelf->judge))
                                        ? ((1U & (IData)(vlSelf->judge))
                                            ? ((IData)(vlSelf->x) 
                                               & (IData)(vlSelf->y))
                                            : (~ (IData)(vlSelf->x)))
                                        : 0U)));
    }
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    VALU___024root___combo__TOP__1(vlSelf);
}

QData VALU___024root___change_request_1(VALU___024root* vlSelf);

VL_INLINE_OPT QData VALU___024root___change_request(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request\n"); );
    // Body
    return (VALU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VALU___024root___change_request_1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->judge & 0xf8U))) {
        Verilated::overWidthError("judge");}
}
#endif  // VL_DEBUG
