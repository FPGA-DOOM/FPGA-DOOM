// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vstarfield__Syms.h"


void Vstarfield___024root__trace_chg_0_sub_0(Vstarfield___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vstarfield___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root__trace_chg_0\n"); );
    // Body
    Vstarfield___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarfield___024root*>(voidSelf);
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vstarfield___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstarfield___024root__trace_chg_0_sub_0(Vstarfield___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root__trace_chg_0_sub_0\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(((0x0280U > (IData)(vlSelfRef.starfield_top__DOT__hpos)) 
                              & (0x01e0U > (IData)(vlSelfRef.starfield_top__DOT__vpos)))));
        bufp->chgSData(oldp+1,(vlSelfRef.starfield_top__DOT__hpos),10);
        bufp->chgSData(oldp+2,(vlSelfRef.starfield_top__DOT__vpos),10);
        bufp->chgSData(oldp+3,(vlSelfRef.starfield_top__DOT__lfsr),16);
        bufp->chgBit(oldp+4,((1U & (~ (((IData)(vlSelfRef.starfield_top__DOT__hpos) 
                                        | (IData)(vlSelfRef.starfield_top__DOT__vpos)) 
                                       >> 9U)))));
        bufp->chgBit(oldp+5,((0x0000007fU == (0x0000007fU 
                                              & ((IData)(vlSelfRef.starfield_top__DOT__lfsr) 
                                                 >> 9U)))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelfRef.starfield_top__DOT__lfsr) 
                                    >> 0x0000000fU))));
    }
    bufp->chgBit(oldp+7,(vlSelfRef.clk));
    bufp->chgBit(oldp+8,(vlSelfRef.reset));
    bufp->chgBit(oldp+9,(vlSelfRef.hsync));
    bufp->chgBit(oldp+10,(vlSelfRef.vsync));
    bufp->chgCData(oldp+11,(vlSelfRef.rgb),3);
    bufp->chgSData(oldp+12,(vlSelfRef.out_hpos),10);
    bufp->chgSData(oldp+13,(vlSelfRef.out_vpos),10);
    bufp->chgBit(oldp+14,(vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__hmaxxed));
    bufp->chgBit(oldp+15,(((0x020cU == (IData)(vlSelfRef.starfield_top__DOT__vpos)) 
                           | (IData)(vlSelfRef.reset))));
}

void Vstarfield___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root__trace_cleanup\n"); );
    // Body
    Vstarfield___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarfield___024root*>(voidSelf);
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
