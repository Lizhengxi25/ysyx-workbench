// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadfd.h"
#include "Vadfd__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vadfd::Vadfd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vadfd__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , en{vlSymsp->TOP.en}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vadfd::Vadfd(const char* _vcname__)
    : Vadfd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vadfd::~Vadfd() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vadfd___024root___eval_debug_assertions(Vadfd___024root* vlSelf);
#endif  // VL_DEBUG
void Vadfd___024root___eval_static(Vadfd___024root* vlSelf);
void Vadfd___024root___eval_initial(Vadfd___024root* vlSelf);
void Vadfd___024root___eval_settle(Vadfd___024root* vlSelf);
void Vadfd___024root___eval(Vadfd___024root* vlSelf);

void Vadfd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadfd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vadfd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vadfd___024root___eval_static(&(vlSymsp->TOP));
        Vadfd___024root___eval_initial(&(vlSymsp->TOP));
        Vadfd___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vadfd___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vadfd::eventsPending() { return false; }

uint64_t Vadfd::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vadfd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vadfd___024root___eval_final(Vadfd___024root* vlSelf);

VL_ATTR_COLD void Vadfd::final() {
    Vadfd___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vadfd::hierName() const { return vlSymsp->name(); }
const char* Vadfd::modelName() const { return "Vadfd"; }
unsigned Vadfd::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vadfd::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vadfd___024root__trace_init_top(Vadfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadfd___024root*>(voidSelf);
    Vadfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vadfd___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vadfd___024root__trace_register(Vadfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vadfd::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vadfd::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vadfd___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
