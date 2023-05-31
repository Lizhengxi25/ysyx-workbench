// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFSM_BIN__SYMS_H_
#define VERILATED_VFSM_BIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VFSM_bin.h"

// INCLUDE MODULE CLASSES
#include "VFSM_bin___024root.h"

// SYMS CLASS (contains all model state)
class VFSM_bin__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFSM_bin* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFSM_bin___024root             TOP;

    // CONSTRUCTORS
    VFSM_bin__Syms(VerilatedContext* contextp, const char* namep, VFSM_bin* modelp);
    ~VFSM_bin__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
