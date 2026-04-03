// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024UNIT_H_
#define VERILATED_VMAIN___024UNIT_H_  // guard

#include "verilated.h"


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    VlUnpacked<SData/*15:0*/, 4194304> DRAM;

    // INTERNAL VARIABLES
    Vmain__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmain___024unit();
    ~Vmain___024unit();
    void ctor(Vmain__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vmain___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
