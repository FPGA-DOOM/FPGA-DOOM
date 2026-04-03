// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

VL_ATTR_COLD void Vmain___024unit___ctor_var_reset(Vmain___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmain___024unit___ctor_var_reset\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->DRAM[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16945130194544943138ull);
    }
}
