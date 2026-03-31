// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHVSYNC_TEST__SYMS_H_
#define VERILATED_VHVSYNC_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhvsync_test.h"

// INCLUDE MODULE CLASSES
#include "Vhvsync_test___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vhvsync_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhvsync_test* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhvsync_test___024root         TOP;

    // CONSTRUCTORS
    Vhvsync_test__Syms(VerilatedContext* contextp, const char* namep, Vhvsync_test* modelp);
    ~Vhvsync_test__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
