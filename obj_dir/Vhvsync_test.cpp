// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhvsync_test__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhvsync_test::Vhvsync_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhvsync_test__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , rgb{vlSymsp->TOP.rgb}
    , out_hpos{vlSymsp->TOP.out_hpos}
    , out_vpos{vlSymsp->TOP.out_vpos}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhvsync_test::Vhvsync_test(const char* _vcname__)
    : Vhvsync_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhvsync_test::~Vhvsync_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhvsync_test___024root___eval_debug_assertions(Vhvsync_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vhvsync_test___024root___eval_static(Vhvsync_test___024root* vlSelf);
void Vhvsync_test___024root___eval_initial(Vhvsync_test___024root* vlSelf);
void Vhvsync_test___024root___eval_settle(Vhvsync_test___024root* vlSelf);
void Vhvsync_test___024root___eval(Vhvsync_test___024root* vlSelf);

void Vhvsync_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhvsync_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhvsync_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhvsync_test___024root___eval_static(&(vlSymsp->TOP));
        Vhvsync_test___024root___eval_initial(&(vlSymsp->TOP));
        Vhvsync_test___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhvsync_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhvsync_test::eventsPending() { return false; }

uint64_t Vhvsync_test::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhvsync_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhvsync_test___024root___eval_final(Vhvsync_test___024root* vlSelf);

VL_ATTR_COLD void Vhvsync_test::final() {
    Vhvsync_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhvsync_test::hierName() const { return vlSymsp->name(); }
const char* Vhvsync_test::modelName() const { return "Vhvsync_test"; }
unsigned Vhvsync_test::threads() const { return 1; }
void Vhvsync_test::prepareClone() const { contextp()->prepareClone(); }
void Vhvsync_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhvsync_test::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhvsync_test___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhvsync_test___024root__trace_init_top(Vhvsync_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhvsync_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhvsync_test___024root*>(voidSelf);
    Vhvsync_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vhvsync_test___024root__trace_decl_types(tracep);
    Vhvsync_test___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhvsync_test___024root__trace_register(Vhvsync_test___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhvsync_test::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhvsync_test::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 30);
    Vhvsync_test___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
