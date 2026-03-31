// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vhvsync_generator__Syms.h"


VL_ATTR_COLD void Vhvsync_generator___024root__trace_init_sub__TOP__0(Vhvsync_generator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root__trace_init_sub__TOP__0\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"display_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"hpos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+6,0,"vpos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("hvsync_generator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"display_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"hpos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+6,0,"vpos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+9,0,"H_DISPLAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"H_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"H_FRONT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"H_SYNC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"V_DISPLAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"V_TOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"V_BOTTOM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"V_SYNC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"H_SYNC_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"H_SYNC_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"H_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"V_SYNC_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"V_SYNC_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"V_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"hmaxxed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"vmaxxed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhvsync_generator___024root__trace_init_top(Vhvsync_generator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root__trace_init_top\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhvsync_generator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhvsync_generator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhvsync_generator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhvsync_generator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhvsync_generator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhvsync_generator___024root__trace_register(Vhvsync_generator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root__trace_register\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhvsync_generator___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vhvsync_generator___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vhvsync_generator___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vhvsync_generator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhvsync_generator___024root__trace_const_0_sub_0(Vhvsync_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhvsync_generator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root__trace_const_0\n"); );
    // Body
    Vhvsync_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhvsync_generator___024root*>(voidSelf);
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhvsync_generator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhvsync_generator___024root__trace_const_0_sub_0(Vhvsync_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root__trace_const_0_sub_0\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+9,(0x00000280U),32);
    bufp->fullIData(oldp+10,(0x00000030U),32);
    bufp->fullIData(oldp+11,(0x00000010U),32);
    bufp->fullIData(oldp+12,(0x00000060U),32);
    bufp->fullIData(oldp+13,(0x000001e0U),32);
    bufp->fullIData(oldp+14,(0x00000021U),32);
    bufp->fullIData(oldp+15,(0x0000000aU),32);
    bufp->fullIData(oldp+16,(2U),32);
    bufp->fullIData(oldp+17,(0x00000290U),32);
    bufp->fullIData(oldp+18,(0x000002efU),32);
    bufp->fullIData(oldp+19,(0x0000031fU),32);
    bufp->fullIData(oldp+20,(0x000001eaU),32);
    bufp->fullIData(oldp+21,(0x000001ebU),32);
    bufp->fullIData(oldp+22,(0x0000020cU),32);
}

VL_ATTR_COLD void Vhvsync_generator___024root__trace_full_0_sub_0(Vhvsync_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhvsync_generator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root__trace_full_0\n"); );
    // Body
    Vhvsync_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhvsync_generator___024root*>(voidSelf);
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhvsync_generator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhvsync_generator___024root__trace_full_0_sub_0(Vhvsync_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhvsync_generator___024root__trace_full_0_sub_0\n"); );
    Vhvsync_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clk));
    bufp->fullBit(oldp+1,(vlSelfRef.reset));
    bufp->fullBit(oldp+2,(vlSelfRef.hsync));
    bufp->fullBit(oldp+3,(vlSelfRef.vsync));
    bufp->fullBit(oldp+4,(vlSelfRef.display_on));
    bufp->fullSData(oldp+5,(vlSelfRef.hpos),10);
    bufp->fullSData(oldp+6,(vlSelfRef.vpos),10);
    bufp->fullBit(oldp+7,(vlSelfRef.hvsync_generator__DOT__hmaxxed));
    bufp->fullBit(oldp+8,(((0x020cU == (IData)(vlSelfRef.vpos)) 
                           | (IData)(vlSelfRef.reset))));
}
