// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhvsync_generator.h for the primary calling header

#ifndef VERILATED_VHVSYNC_GENERATOR___024ROOT_H_
#define VERILATED_VHVSYNC_GENERATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vhvsync_generator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhvsync_generator___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(display_on,0,0);
    CData/*0:0*/ hvsync_generator__DOT__hmaxxed;
    CData/*0:0*/ hvsync_generator__DOT__vmaxxed;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_OUT16(hpos,9,0);
    VL_OUT16(vpos,9,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhvsync_generator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhvsync_generator___024root(Vhvsync_generator__Syms* symsp, const char* namep);
    ~Vhvsync_generator___024root();
    VL_UNCOPYABLE(Vhvsync_generator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
