// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhvsync_test.h for the primary calling header

#include "Vhvsync_test__pch.h"

void Vhvsync_test___024root___ctor_var_reset(Vhvsync_test___024root* vlSelf);

Vhvsync_test___024root::Vhvsync_test___024root(Vhvsync_test__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vhvsync_test___024root___ctor_var_reset(this);
}

void Vhvsync_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhvsync_test___024root::~Vhvsync_test___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
