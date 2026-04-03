// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

void Vmain___024root___eval_triggers_vec__act(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_triggers_vec__act\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vmain___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_anySet__act\n"); );
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

void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.main__DOT__dram__DOT__opcode = (((IData)(vlSelfRef.ras) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.cas) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.we)));
    if ((3U == (IData)(vlSelfRef.main__DOT__dram__DOT__opcode))) {
        vlSelfRef.main__DOT__dram__DOT__pre_addr = 
            (((IData)(vlSelfRef.ba) << 0x0000000cU) 
             | (IData)(vlSelfRef.addr));
    } else if ((5U == (IData)(vlSelfRef.main__DOT__dram__DOT__opcode))) {
        vlSelfRef.main__DOT__dram__DOT__full_addr = 
            (((IData)(vlSelfRef.main__DOT__dram__DOT__pre_addr) 
              << 8U) | (0x000000ffU & (IData)(vlSelfRef.addr)));
        vlSelfRef.main__DOT__dram__DOT__out_data = vlSymsp->TOP____024unit.DRAM
            [vlSelfRef.main__DOT__dram__DOT__full_addr];
        vlSelfRef.main__DOT__dram__DOT__is_out = 1U;
    } else if ((4U == (IData)(vlSelfRef.main__DOT__dram__DOT__opcode))) {
        vlSelfRef.main__DOT__dram__DOT__full_addr = 
            (((IData)(vlSelfRef.main__DOT__dram__DOT__pre_addr) 
              << 8U) | (0x000000ffU & (IData)(vlSelfRef.addr)));
        vlSelfRef.main__DOT__dram__DOT__is_out = 0U;
        vlSelfRef.__VdlyVal__DRAM__v0_hierarchical 
            = vlSelfRef.dq;
        vlSelfRef.__VdlyDim0__DRAM__v0_hierarchical 
            = vlSelfRef.main__DOT__dram__DOT__full_addr;
        vlSelfRef.__VdlySet__DRAM__v0_hierarchical = 1U;
    }
    vlSelfRef.dq = (((IData)(vlSelfRef.main__DOT__dram__DOT__is_out)
                      ? 0xffffU : 0U) & (((IData)(vlSelfRef.main__DOT__dram__DOT__is_out)
                                           ? 0xffffU
                                           : 0U) & 
                                         (((IData)(vlSelfRef.main__DOT__dram__DOT__is_out)
                                            ? (IData)(vlSelfRef.main__DOT__dram__DOT__out_data)
                                            : 0U) & 
                                          ((IData)(vlSelfRef.main__DOT__dram__DOT__is_out)
                                            ? 0xffffU
                                            : 0U))));
}

void Vmain___024unit___nba_sequent__TOP____024unit__0(Vmain___024unit* vlSelf);
void Vmain___024unit___nba_sequent__TOP____024unit__1(Vmain___024unit* vlSelf);

void Vmain___024root___eval_nba(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_nba\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmain___024unit___nba_sequent__TOP____024unit__0((&vlSymsp->TOP____024unit));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vmain___024root___nba_sequent__TOP__0(vlSelf);
        Vmain___024unit___nba_sequent__TOP____024unit__1((&vlSymsp->TOP____024unit));
    }
}

void Vmain___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmain___024root___eval_phase__act(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__act\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmain___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vmain___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmain___024root___eval_phase__nba(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__nba\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmain___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmain___024root___eval_nba(vlSelf);
        Vmain___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("main.v", 2, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("main.v", 2, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vmain___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmain___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.we & 0xfeU)))) {
        Verilated::overWidthError("we");
    }
    if (VL_UNLIKELY(((vlSelfRef.ras & 0xfeU)))) {
        Verilated::overWidthError("ras");
    }
    if (VL_UNLIKELY(((vlSelfRef.cas & 0xfeU)))) {
        Verilated::overWidthError("cas");
    }
    if (VL_UNLIKELY(((vlSelfRef.ba & 0xfcU)))) {
        Verilated::overWidthError("ba");
    }
    if (VL_UNLIKELY(((vlSelfRef.addr & 0xf000U)))) {
        Verilated::overWidthError("addr");
    }
}
#endif  // VL_DEBUG
