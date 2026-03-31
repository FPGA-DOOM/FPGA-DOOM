// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vhvsync_test__Syms.h"


void Vhvsync_test___024root__trace_chg_0_sub_0(Vhvsync_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhvsync_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root__trace_chg_0\n"); );
    // Body
    Vhvsync_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhvsync_test___024root*>(voidSelf);
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vhvsync_test___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhvsync_test___024root__trace_chg_0_sub_0(Vhvsync_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root__trace_chg_0_sub_0\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.test_hvsync_top__DOT__display_on));
        bufp->chgSData(oldp+1,(vlSelfRef.test_hvsync_top__DOT__hpos),10);
        bufp->chgSData(oldp+2,(vlSelfRef.test_hvsync_top__DOT__vpos),10);
        bufp->chgBit(oldp+3,(((IData)(vlSelfRef.test_hvsync_top__DOT__display_on) 
                              & ((0U == (7U & (IData)(vlSelfRef.test_hvsync_top__DOT__hpos))) 
                                 | (0U == (7U & (IData)(vlSelfRef.test_hvsync_top__DOT__vpos)))))));
        bufp->chgBit(oldp+4,(((IData)(vlSelfRef.test_hvsync_top__DOT__display_on) 
                              & ((IData)(vlSelfRef.test_hvsync_top__DOT__vpos) 
                                 >> 4U))));
        bufp->chgBit(oldp+5,(((IData)(vlSelfRef.test_hvsync_top__DOT__display_on) 
                              & ((IData)(vlSelfRef.test_hvsync_top__DOT__hpos) 
                                 >> 4U))));
        bufp->chgBit(oldp+6,((0x031fU == (IData)(vlSelfRef.test_hvsync_top__DOT__hpos))));
        bufp->chgBit(oldp+7,((0x020cU == (IData)(vlSelfRef.test_hvsync_top__DOT__vpos))));
    }
    bufp->chgBit(oldp+8,(vlSelfRef.clk));
    bufp->chgBit(oldp+9,(vlSelfRef.reset));
    bufp->chgBit(oldp+10,(vlSelfRef.hsync));
    bufp->chgBit(oldp+11,(vlSelfRef.vsync));
    bufp->chgCData(oldp+12,(vlSelfRef.rgb),3);
    bufp->chgSData(oldp+13,(vlSelfRef.out_hpos),10);
    bufp->chgSData(oldp+14,(vlSelfRef.out_vpos),10);
}

void Vhvsync_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root__trace_cleanup\n"); );
    // Body
    Vhvsync_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhvsync_test___024root*>(voidSelf);
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
