// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"
class Vmain___024unit;


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024root final {
  public:
    // CELLS
    Vmain___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(we,0,0);
    VL_IN8(ras,0,0);
    VL_IN8(cas,0,0);
    VL_IN8(ba,1,0);
    CData/*0:0*/ main__DOT__dram__DOT__is_out;
    CData/*2:0*/ main__DOT__dram__DOT__opcode;
    CData/*0:0*/ __VdlySet__DRAM__v0_hierarchical;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN16(addr,11,0);
    VL_INOUT16(dq,15,0);
    SData/*15:0*/ main__DOT__dram__DOT__out_data;
    SData/*13:0*/ main__DOT__dram__DOT__pre_addr;
    SData/*15:0*/ __VdlyVal__DRAM__v0_hierarchical;
    IData/*21:0*/ main__DOT__dram__DOT__full_addr;
    IData/*21:0*/ __VdlyDim0__DRAM__v0_hierarchical;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmain__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* namep);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
