// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhvsync_test.h for the primary calling header

#include "Vhvsync_test__pch.h"

void Vhvsync_test___024root___eval_triggers_vec__act(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_triggers_vec__act\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vhvsync_test___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vhvsync_test___024root___nba_sequent__TOP__0(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___nba_sequent__TOP__0\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__test_hvsync_top__DOT__hpos;
    __Vdly__test_hvsync_top__DOT__hpos = 0;
    // Body
    __Vdly__test_hvsync_top__DOT__hpos = vlSelfRef.test_hvsync_top__DOT__hpos;
    vlSelfRef.hsync = ((0x0290U <= (IData)(vlSelfRef.test_hvsync_top__DOT__hpos)) 
                       & (0x02efU >= (IData)(vlSelfRef.test_hvsync_top__DOT__hpos)));
    __Vdly__test_hvsync_top__DOT__hpos = ((IData)(vlSelfRef.test_hvsync_top__DOT__hvsync_gen__DOT__hmaxxed)
                                           ? 0U : (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.test_hvsync_top__DOT__hpos))));
    vlSelfRef.vsync = ((0x01eaU <= (IData)(vlSelfRef.test_hvsync_top__DOT__vpos)) 
                       & (0x01ebU >= (IData)(vlSelfRef.test_hvsync_top__DOT__vpos)));
    if ((0x031fU == (IData)(vlSelfRef.test_hvsync_top__DOT__hpos))) {
        vlSelfRef.test_hvsync_top__DOT__vpos = ((IData)(vlSelfRef.test_hvsync_top__DOT__hvsync_gen__DOT__vmaxxed)
                                                 ? 0U
                                                 : 
                                                (0x000003ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.test_hvsync_top__DOT__vpos))));
    }
    vlSelfRef.test_hvsync_top__DOT__hpos = __Vdly__test_hvsync_top__DOT__hpos;
    vlSelfRef.out_hpos = vlSelfRef.test_hvsync_top__DOT__hpos;
    vlSelfRef.test_hvsync_top__DOT__hvsync_gen__DOT__hmaxxed 
        = (0x031fU == (IData)(vlSelfRef.test_hvsync_top__DOT__hpos));
    vlSelfRef.out_vpos = vlSelfRef.test_hvsync_top__DOT__vpos;
    vlSelfRef.test_hvsync_top__DOT__hvsync_gen__DOT__vmaxxed 
        = (0x020cU == (IData)(vlSelfRef.test_hvsync_top__DOT__vpos));
    vlSelfRef.test_hvsync_top__DOT__display_on = ((0x0280U 
                                                   > (IData)(vlSelfRef.test_hvsync_top__DOT__hpos)) 
                                                  & (0x01e0U 
                                                     > (IData)(vlSelfRef.test_hvsync_top__DOT__vpos)));
    vlSelfRef.rgb = ((0x3ffffffcU & (((IData)(vlSelfRef.test_hvsync_top__DOT__display_on) 
                                      << 2U) & ((IData)(vlSelfRef.test_hvsync_top__DOT__hpos) 
                                                >> 2U))) 
                     | ((0x1ffffffeU & (((IData)(vlSelfRef.test_hvsync_top__DOT__display_on) 
                                         << 1U) & ((IData)(vlSelfRef.test_hvsync_top__DOT__vpos) 
                                                   >> 3U))) 
                        | ((IData)(vlSelfRef.test_hvsync_top__DOT__display_on) 
                           & ((0U == (7U & (IData)(vlSelfRef.test_hvsync_top__DOT__hpos))) 
                              | (0U == (7U & (IData)(vlSelfRef.test_hvsync_top__DOT__vpos)))))));
}

void Vhvsync_test___024root___eval_nba(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_nba\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vhvsync_test___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vhvsync_test___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_test___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vhvsync_test___024root___eval_phase__act(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_phase__act\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhvsync_test___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhvsync_test___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vhvsync_test___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vhvsync_test___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vhvsync_test___024root___eval_phase__nba(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_phase__nba\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vhvsync_test___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vhvsync_test___024root___eval_nba(vlSelf);
        Vhvsync_test___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vhvsync_test___024root___eval(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vhvsync_test___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("hvsync_test.v", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhvsync_test___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("hvsync_test.v", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vhvsync_test___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vhvsync_test___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vhvsync_test___024root___eval_debug_assertions(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_debug_assertions\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
