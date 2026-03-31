// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhvsync_generator.h for the primary calling header

#include "Vhvsync_generator__pch.h"

void Vhvsync_generator___024root___eval_triggers_vec__ico(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_triggers_vec__ico\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vhvsync_generator___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___trigger_anySet__ico\n"); );
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

void Vhvsync_generator___024root___ico_sequent__TOP__0(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___ico_sequent__TOP__0\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hvsync_generator__DOT__hmaxxed = ((0x031fU 
                                                 == (IData)(vlSelfRef.hpos)) 
                                                | (IData)(vlSelfRef.reset));
    vlSelfRef.hvsync_generator__DOT__vmaxxed = ((0x020cU 
                                                 == (IData)(vlSelfRef.vpos)) 
                                                | (IData)(vlSelfRef.reset));
}

void Vhvsync_generator___024root___eval_ico(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_ico\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vhvsync_generator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_generator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vhvsync_generator___024root___eval_phase__ico(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_phase__ico\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vhvsync_generator___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhvsync_generator___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vhvsync_generator___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vhvsync_generator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vhvsync_generator___024root___eval_triggers_vec__act(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_triggers_vec__act\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vhvsync_generator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___trigger_anySet__act\n"); );
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

void Vhvsync_generator___024root___nba_sequent__TOP__0(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___nba_sequent__TOP__0\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hsync = ((0x0290U <= (IData)(vlSelfRef.hpos)) 
                       & (0x02efU >= (IData)(vlSelfRef.hpos)));
    vlSelfRef.vsync = ((0x01eaU <= (IData)(vlSelfRef.vpos)) 
                       & (0x01ebU >= (IData)(vlSelfRef.vpos)));
    if (vlSelfRef.hvsync_generator__DOT__hmaxxed) {
        vlSelfRef.hpos = 0U;
        vlSelfRef.vpos = ((IData)(vlSelfRef.hvsync_generator__DOT__vmaxxed)
                           ? 0U : (0x000003ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.vpos))));
    } else {
        vlSelfRef.hpos = (0x000003ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.hpos)));
    }
    vlSelfRef.hvsync_generator__DOT__hmaxxed = ((0x031fU 
                                                 == (IData)(vlSelfRef.hpos)) 
                                                | (IData)(vlSelfRef.reset));
    vlSelfRef.display_on = ((0x0280U > (IData)(vlSelfRef.hpos)) 
                            & (0x01e0U > (IData)(vlSelfRef.vpos)));
    vlSelfRef.hvsync_generator__DOT__vmaxxed = ((0x020cU 
                                                 == (IData)(vlSelfRef.vpos)) 
                                                | (IData)(vlSelfRef.reset));
}

void Vhvsync_generator___024root___eval_nba(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_nba\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vhvsync_generator___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vhvsync_generator___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vhvsync_generator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vhvsync_generator___024root___eval_phase__act(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_phase__act\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhvsync_generator___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhvsync_generator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vhvsync_generator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vhvsync_generator___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vhvsync_generator___024root___eval_phase__nba(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_phase__nba\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vhvsync_generator___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vhvsync_generator___024root___eval_nba(vlSelf);
        Vhvsync_generator___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vhvsync_generator___024root___eval(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vhvsync_generator___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("hvsync_generator.v", 12, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vhvsync_generator___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vhvsync_generator___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("hvsync_generator.v", 12, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhvsync_generator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("hvsync_generator.v", 12, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vhvsync_generator___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vhvsync_generator___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vhvsync_generator___024root___eval_debug_assertions(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_debug_assertions\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
