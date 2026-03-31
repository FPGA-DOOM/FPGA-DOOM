// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstarfield.h for the primary calling header

#include "Vstarfield__pch.h"

VL_ATTR_COLD void Vstarfield___024root___eval_static(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_static\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vstarfield___024root___eval_initial(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_initial\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vstarfield___024root___eval_final(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_final\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarfield___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstarfield___024root___eval_phase__stl(Vstarfield___024root* vlSelf);

VL_ATTR_COLD void Vstarfield___024root___eval_settle(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_settle\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vstarfield___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("starfield.v", 9, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vstarfield___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vstarfield___024root___eval_triggers_vec__stl(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_triggers_vec__stl\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vstarfield___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarfield___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vstarfield___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vstarfield___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vstarfield___024root___stl_sequent__TOP__0(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___stl_sequent__TOP__0\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_hpos = vlSelfRef.starfield_top__DOT__hpos;
    vlSelfRef.out_vpos = vlSelfRef.starfield_top__DOT__vpos;
    vlSelfRef.rgb = (7U & (IData)(vlSelfRef.starfield_top__DOT__lfsr));
    vlSelfRef.starfield_top__DOT__lfsr_gen__DOT__feedback 
        = (1U & ((IData)(vlSelfRef.starfield_top__DOT__lfsr) 
                 >> 0x0000000fU));
    vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__hmaxxed 
        = ((0x031fU == (IData)(vlSelfRef.starfield_top__DOT__hpos)) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.starfield_top__DOT__hvsync_gen__DOT__vmaxxed 
        = ((0x020cU == (IData)(vlSelfRef.starfield_top__DOT__vpos)) 
           | (IData)(vlSelfRef.reset));
}

VL_ATTR_COLD void Vstarfield___024root___eval_stl(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_stl\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vstarfield___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vstarfield___024root___eval_phase__stl(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___eval_phase__stl\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstarfield___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstarfield___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vstarfield___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vstarfield___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vstarfield___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarfield___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vstarfield___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vstarfield___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstarfield___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vstarfield___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstarfield___024root___ctor_var_reset(Vstarfield___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstarfield___024root___ctor_var_reset\n"); );
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->rgb = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11277054808258870952ull);
    vlSelf->out_hpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 231378536325028722ull);
    vlSelf->out_vpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8042142748537930039ull);
    vlSelf->starfield_top__DOT__hpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3634230058634448273ull);
    vlSelf->starfield_top__DOT__vpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16858250484575519775ull);
    vlSelf->starfield_top__DOT__lfsr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3917362100076661658ull);
    vlSelf->starfield_top__DOT__hvsync_gen__DOT__hmaxxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7041112971569132540ull);
    vlSelf->starfield_top__DOT__hvsync_gen__DOT__vmaxxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6814858088570431142ull);
    vlSelf->starfield_top__DOT__lfsr_gen__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13711658672236244637ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
