// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

void Vmain___024unit___ctor_var_reset(Vmain___024unit* vlSelf);

Vmain___024unit::Vmain___024unit() = default;
Vmain___024unit::~Vmain___024unit() = default;

void Vmain___024unit::ctor(Vmain__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vmain___024unit___ctor_var_reset(this);
}

void Vmain___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vmain___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
