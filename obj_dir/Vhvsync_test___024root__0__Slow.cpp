// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhvsync_test.h for the primary calling header

#include "Vhvsync_test__pch.h"

VL_ATTR_COLD void Vhvsync_test___024root___eval_static(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_static\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vhvsync_test___024root___eval_initial(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_initial\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhvsync_test___024root___eval_final(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_final\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_test___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhvsync_test___024root___eval_phase__stl(Vhvsync_test___024root* vlSelf);

VL_ATTR_COLD void Vhvsync_test___024root___eval_settle(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_settle\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vhvsync_test___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("hvsync_test.v", 7, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vhvsync_test___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vhvsync_test___024root___eval_triggers_vec__stl(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_triggers_vec__stl\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vhvsync_test___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_test___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vhvsync_test___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vhvsync_test___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vhvsync_test___024root___stl_sequent__TOP__0(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___stl_sequent__TOP__0\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_hpos = vlSelfRef.test_hvsync_top__DOT__hpos;
    vlSelfRef.out_vpos = vlSelfRef.test_hvsync_top__DOT__vpos;
    vlSelfRef.test_hvsync_top__DOT__hvsync_gen__DOT__hmaxxed 
        = (0x031fU == (IData)(vlSelfRef.test_hvsync_top__DOT__hpos));
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

VL_ATTR_COLD void Vhvsync_test___024root____Vm_traceActivitySetAll(Vhvsync_test___024root* vlSelf);

VL_ATTR_COLD void Vhvsync_test___024root___eval_stl(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_stl\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vhvsync_test___024root___stl_sequent__TOP__0(vlSelf);
        Vhvsync_test___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vhvsync_test___024root___eval_phase__stl(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___eval_phase__stl\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhvsync_test___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhvsync_test___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vhvsync_test___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vhvsync_test___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vhvsync_test___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhvsync_test___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vhvsync_test___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhvsync_test___024root____Vm_traceActivitySetAll(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root____Vm_traceActivitySetAll\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vhvsync_test___024root___ctor_var_reset(Vhvsync_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_test___024root___ctor_var_reset\n"); );
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelf->test_hvsync_top__DOT__display_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15955126121174017849ull);
    vlSelf->test_hvsync_top__DOT__hpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12145736654580460953ull);
    vlSelf->test_hvsync_top__DOT__vpos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2902851820391853737ull);
    vlSelf->test_hvsync_top__DOT__hvsync_gen__DOT__hmaxxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4445164194801026657ull);
    vlSelf->test_hvsync_top__DOT__hvsync_gen__DOT__vmaxxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10010090351983808673ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
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
