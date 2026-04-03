// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

void Vmain___024unit___nba_sequent__TOP____024unit__0(Vmain___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmain___024unit___nba_sequent__TOP____024unit__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP.__VdlySet__DRAM__v0_hierarchical = 0U;
}

void Vmain___024unit___nba_sequent__TOP____024unit__1(Vmain___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmain___024unit___nba_sequent__TOP____024unit__1\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__VdlySet__DRAM__v0_hierarchical) {
        vlSelfRef.DRAM[vlSymsp->TOP.__VdlyDim0__DRAM__v0_hierarchical] 
            = vlSymsp->TOP.__VdlyVal__DRAM__v0_hierarchical;
    }
}
