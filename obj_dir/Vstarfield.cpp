// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstarfield__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vstarfield::Vstarfield(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstarfield__Syms(contextp(), _vcname__, this)}
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

Vstarfield::Vstarfield(const char* _vcname__)
    : Vstarfield(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstarfield::~Vstarfield() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstarfield___024root___eval_debug_assertions(Vstarfield___024root* vlSelf);
#endif  // VL_DEBUG
void Vstarfield___024root___eval_static(Vstarfield___024root* vlSelf);
void Vstarfield___024root___eval_initial(Vstarfield___024root* vlSelf);
void Vstarfield___024root___eval_settle(Vstarfield___024root* vlSelf);
void Vstarfield___024root___eval(Vstarfield___024root* vlSelf);

void Vstarfield::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstarfield::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstarfield___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstarfield___024root___eval_static(&(vlSymsp->TOP));
        Vstarfield___024root___eval_initial(&(vlSymsp->TOP));
        Vstarfield___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstarfield___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstarfield::eventsPending() { return false; }

uint64_t Vstarfield::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vstarfield::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstarfield___024root___eval_final(Vstarfield___024root* vlSelf);

VL_ATTR_COLD void Vstarfield::final() {
    Vstarfield___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstarfield::hierName() const { return vlSymsp->name(); }
const char* Vstarfield::modelName() const { return "Vstarfield"; }
unsigned Vstarfield::threads() const { return 1; }
void Vstarfield::prepareClone() const { contextp()->prepareClone(); }
void Vstarfield::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vstarfield::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstarfield___024root__trace_decl_types(VerilatedVcd* tracep);

void Vstarfield___024root__trace_init_top(Vstarfield___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstarfield___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstarfield___024root*>(voidSelf);
    Vstarfield__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vstarfield___024root__trace_decl_types(tracep);
    Vstarfield___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstarfield___024root__trace_register(Vstarfield___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vstarfield::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstarfield::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 32);
    Vstarfield___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
