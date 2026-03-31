// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhvsync_generator.h for the primary calling header

#include "Vhvsync_generator__pch.h"

void Vhvsync_generator___024root___ctor_var_reset(Vhvsync_generator___024root* vlSelf);

Vhvsync_generator___024root::Vhvsync_generator___024root(Vhvsync_generator__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vhvsync_generator___024root___ctor_var_reset(this);
}

void Vhvsync_generator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhvsync_generator___024root::~Vhvsync_generator___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
