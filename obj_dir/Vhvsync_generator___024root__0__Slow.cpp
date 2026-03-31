// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhvsync_generator.h for the primary calling header

#include "Vhvsync_generator__pch.h"

VL_ATTR_COLD void Vhvsync_generator___024root___eval_static(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_static\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vhvsync_generator___024root___eval_initial(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_initial\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhvsync_generator___024root___eval_final(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_final\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_generator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhvsync_generator___024root___eval_phase__stl(Vhvsync_generator___024root* vlSelf);

VL_ATTR_COLD void Vhvsync_generator___024root___eval_settle(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_settle\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vhvsync_generator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("hvsync_generator.v", 12, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vhvsync_generator___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vhvsync_generator___024root___eval_triggers_vec__stl(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_triggers_vec__stl\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vhvsync_generator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_generator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vhvsync_generator___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vhvsync_generator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vhvsync_generator___024root___stl_sequent__TOP__0(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___stl_sequent__TOP__0\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.display_on = ((0x0280U > (IData)(vlSelfRef.hpos)) 
                            & (0x01e0U > (IData)(vlSelfRef.vpos)));
    vlSelfRef.hvsync_generator__DOT__hmaxxed = ((0x031fU 
                                                 == (IData)(vlSelfRef.hpos)) 
                                                | (IData)(vlSelfRef.reset));
    vlSelfRef.hvsync_generator__DOT__vmaxxed = ((0x020cU 
                                                 == (IData)(vlSelfRef.vpos)) 
                                                | (IData)(vlSelfRef.reset));
}

VL_ATTR_COLD void Vhvsync_generator___024root___eval_stl(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_stl\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vhvsync_generator___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vhvsync_generator___024root___eval_phase__stl(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___eval_phase__stl\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhvsync_generator___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhvsync_generator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vhvsync_generator___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vhvsync_generator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vhvsync_generator___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_generator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vhvsync_generator___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vhvsync_generator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_generator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vhvsync_generator___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhvsync_generator___024root___ctor_var_reset(Vhvsync_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root___ctor_var_reset\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->display_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16227721242754849698ull);
    vlSelf->hpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2050750607729723554ull);
    vlSelf->vpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12586444320487401337ull);
    vlSelf->hvsync_generator__DOT__hmaxxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9937496814944270631ull);
    vlSelf->hvsync_generator__DOT__vmaxxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10163658746493451216ull);
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
}
