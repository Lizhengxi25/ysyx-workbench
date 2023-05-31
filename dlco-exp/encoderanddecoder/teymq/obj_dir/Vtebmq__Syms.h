// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEBMQ__SYMS_H_
#define VERILATED_VTEBMQ__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtebmq.h"

// INCLUDE MODULE CLASSES
#include "Vtebmq___024root.h"

// SYMS CLASS (contains all model state)
class Vtebmq__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtebmq* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtebmq___024root               TOP;

    // CONSTRUCTORS
    Vtebmq__Syms(VerilatedContext* contextp, const char* namep, Vtebmq* modelp);
    ~Vtebmq__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
