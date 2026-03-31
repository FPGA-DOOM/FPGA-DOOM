// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstarfield.h for the primary calling header

#ifndef VERILATED_VSTARFIELD___024ROOT_H_
#define VERILATED_VSTARFIELD___024ROOT_H_  // guard

#include "verilated.h"


class Vstarfield__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstarfield___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(rgb,2,0);
    CData/*0:0*/ starfield_top__DOT__hvsync_gen__DOT__hmaxxed;
    CData/*0:0*/ starfield_top__DOT__hvsync_gen__DOT__vmaxxed;
    CData/*0:0*/ starfield_top__DOT__lfsr_gen__DOT__feedback;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_OUT16(out_hpos,9,0);
    VL_OUT16(out_vpos,9,0);
    SData/*9:0*/ starfield_top__DOT__hpos;
    SData/*9:0*/ starfield_top__DOT__vpos;
    SData/*15:0*/ starfield_top__DOT__lfsr;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vstarfield__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vstarfield___024root(Vstarfield__Syms* symsp, const char* namep);
    ~Vstarfield___024root();
    VL_UNCOPYABLE(Vstarfield___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
