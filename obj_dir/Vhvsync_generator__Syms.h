// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHVSYNC_GENERATOR__SYMS_H_
#define VERILATED_VHVSYNC_GENERATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhvsync_generator.h"

// INCLUDE MODULE CLASSES
#include "Vhvsync_generator___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vhvsync_generator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhvsync_generator* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhvsync_generator___024root    TOP;

    // CONSTRUCTORS
    Vhvsync_generator__Syms(VerilatedContext* contextp, const char* namep, Vhvsync_generator* modelp);
    ~Vhvsync_generator__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
