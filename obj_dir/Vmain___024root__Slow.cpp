// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf);

Vmain___024root::Vmain___024root(Vmain__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmain___024root___ctor_var_reset(this);
}

void Vmain___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmain___024root::~Vmain___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
