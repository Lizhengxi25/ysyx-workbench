// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VALU__Syms;
class VALU_VerilatedVcd;


//----------

VL_MODULE(VALU___024root) {
  public:

    // PORTS
    VL_IN8(x,7,0);
    VL_IN8(y,7,0);
    VL_IN8(judge,2,0);
    VL_OUT8(result,7,0);
    VL_OUT8(overflow,0,0);

    // INTERNAL VARIABLES
    VALU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VALU___024root);  ///< Copying not allowed
  public:
    VALU___024root(const char* name);
    ~VALU___024root();

    // INTERNAL METHODS
    void __Vconfigure(VALU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
