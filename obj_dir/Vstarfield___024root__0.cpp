// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstarfield.h for the primary calling header

#include "Vstarfield__pch.h"

void Vstarfield___024root___eval_triggers_vec__ico(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_triggers_vec__ico\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vstarfield___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___trigger_anySet__ico\n"); );
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

void Vstarfield___024root___ico_sequent__TOP__0(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___ico_sequent__TOP__0\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__hmaxxed 
        = ((0x031fU == (IData)(vlSelfRef.starfield_top__DOT__hpos)) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__vmaxxed 
        = ((0x020cU == (IData)(vlSelfRef.starfield_top__DOT__vpos)) 
           | (IData)(vlSelfRef.reset));
}

void Vstarfield___024root___eval_ico(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_ico\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vstarfield___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarfield___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vstarfield___024root___eval_phase__ico(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_phase__ico\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vstarfield___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstarfield___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vstarfield___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vstarfield___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vstarfield___024root___eval_triggers_vec__act(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_triggers_vec__act\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vstarfield___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___trigger_anySet__act\n"); );
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

void Vstarfield___024root___nba_sequent__TOP__0(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___nba_sequent__TOP__0\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vdly__starfield_top__DOT__lfsr;
    __Vdly__starfield_top__DOT__lfsr = 0;
    // Body
    __Vdly__starfield_top__DOT__lfsr = vlSelfRef.starfield_top__DOT__lfsr;
    if (vlSelfRef.reset) {
        __Vdly__starfield_top__DOT__lfsr = (1U | (0x0000fffeU 
                                                  & ((IData)(vlSelfRef.starfield_top__DOT__lfsr) 
                                                     << 1U)));
    } else if ((1U & (~ (((IData)(vlSelfRef.starfield_top__DOT__hpos) 
                          | (IData)(vlSelfRef.starfield_top__DOT__vpos)) 
                         >> 9U)))) {
        __Vdly__starfield_top__DOT__lfsr = (0x0000ffffU 
                                            & ((0x0000fffeU 
                                                & ((IData)(vlSelfRef.starfield_top__DOT__lfsr) 
                                                   << 1U)) 
                                               ^ ((IData)(vlSelfRef.starfield_top__DOT__lfsr_gen__DOT__feedback)
                                                   ? 0x0000100bU
                                                   : 0U)));
    }
    vlSelfRef.hsync = ((0x0290U <= (IData)(vlSelfRef.starfield_top__DOT__hpos)) 
                       & (0x02efU >= (IData)(vlSelfRef.starfield_top__DOT__hpos)));
    vlSelfRef.vsync = ((0x01eaU <= (IData)(vlSelfRef.starfield_top__DOT__vpos)) 
                       & (0x01ebU >= (IData)(vlSelfRef.starfield_top__DOT__vpos)));
    if (vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__hmaxxed) {
        vlSelfRef.starfield_top__DOT__hpos = 0U;
        vlSelfRef.starfield_top__DOT__vpos = ((IData)(vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__vmaxxed)
                                               ? 0U
                                               : (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.starfield_top__DOT__vpos))));
    } else {
        vlSelfRef.starfield_top__DOT__hpos = (0x000003ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.starfield_top__DOT__hpos)));
    }
    vlSelfRef.starfield_top__DOT__lfsr = __Vdly__starfield_top__DOT__lfsr;
    vlSelfRef.rgb = (7U & (IData)(vlSelfRef.starfield_top__DOT__lfsr));
    vlSelfRef.starfield_top__DOT__lfsr_gen__DOT__feedback 
        = (1U & ((IData)(vlSelfRef.starfield_top__DOT__lfsr) 
                 >> 0x0000000fU));
    vlSelfRef.out_hpos = vlSelfRef.starfield_top__DOT__hpos;
    vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__hmaxxed 
        = ((0x031fU == (IData)(vlSelfRef.starfield_top__DOT__hpos)) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.out_vpos = vlSelfRef.starfield_top__DOT__vpos;
    vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__vmaxxed 
        = ((0x020cU == (IData)(vlSelfRef.starfield_top__DOT__vpos)) 
           | (IData)(vlSelfRef.reset));
}

void Vstarfield___024root___eval_nba(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_nba\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vstarfield___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vstarfield___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vstarfield___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vstarfield___024root___eval_phase__act(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_phase__act\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vstarfield___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstarfield___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vstarfield___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vstarfield___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vstarfield___024root___eval_phase__nba(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_phase__nba\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vstarfield___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vstarfield___024root___eval_nba(vlSelf);
        Vstarfield___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vstarfield___024root___eval(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vstarfield___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("starfield.v", 9, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vstarfield___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vstarfield___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("starfield.v", 9, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vstarfield___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("starfield.v", 9, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vstarfield___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vstarfield___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vstarfield___024root___eval_debug_assertions(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_debug_assertions\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
