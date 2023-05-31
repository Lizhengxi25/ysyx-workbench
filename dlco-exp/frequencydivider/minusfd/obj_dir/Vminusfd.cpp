// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vminusfd.h"
#include "Vminusfd__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vminusfd::Vminusfd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vminusfd__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , en{vlSymsp->TOP.en}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vminusfd::Vminusfd(const char* _vcname__)
    : Vminusfd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vminusfd::~Vminusfd() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vminusfd___024root___eval_debug_assertions(Vminusfd___024root* vlSelf);
#endif  // VL_DEBUG
void Vminusfd___024root___eval_static(Vminusfd___024root* vlSelf);
void Vminusfd___024root___eval_initial(Vminusfd___024root* vlSelf);
void Vminusfd___024root___eval_settle(Vminusfd___024root* vlSelf);
void Vminusfd___024root___eval(Vminusfd___024root* vlSelf);

void Vminusfd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vminusfd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vminusfd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vminusfd___024root___eval_static(&(vlSymsp->TOP));
        Vminusfd___024root___eval_initial(&(vlSymsp->TOP));
        Vminusfd___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vminusfd___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vminusfd::eventsPending() { return false; }

uint64_t Vminusfd::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vminusfd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vminusfd___024root___eval_final(Vminusfd___024root* vlSelf);

VL_ATTR_COLD void Vminusfd::final() {
    Vminusfd___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vminusfd::hierName() const { return vlSymsp->name(); }
const char* Vminusfd::modelName() const { return "Vminusfd"; }
unsigned Vminusfd::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vminusfd::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vminusfd___024root__trace_init_top(Vminusfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vminusfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminusfd___024root*>(voidSelf);
    Vminusfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vminusfd___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vminusfd___024root__trace_register(Vminusfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vminusfd::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vminusfd::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vminusfd___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
