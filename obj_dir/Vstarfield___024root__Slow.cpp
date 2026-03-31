// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstarfield.h for the primary calling header

#include "Vstarfield__pch.h"

void Vstarfield___024root___ctor_var_reset(Vstarfield___024root* vlSelf);

Vstarfield___024root::Vstarfield___024root(Vstarfield__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vstarfield___024root___ctor_var_reset(this);
}

void Vstarfield___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstarfield___024root::~Vstarfield___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
