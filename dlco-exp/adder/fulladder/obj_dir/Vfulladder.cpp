// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfulladder.h"
#include "Vfulladder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfulladder::Vfulladder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfulladder__Syms(contextp(), _vcname__, this)}
    , j{vlSymsp->TOP.j}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , l{vlSymsp->TOP.l}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfulladder::Vfulladder(const char* _vcname__)
    : Vfulladder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfulladder::~Vfulladder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfulladder___024root___eval_debug_assertions(Vfulladder___024root* vlSelf);
#endif  // VL_DEBUG
void Vfulladder___024root___eval_static(Vfulladder___024root* vlSelf);
void Vfulladder___024root___eval_initial(Vfulladder___024root* vlSelf);
void Vfulladder___024root___eval_settle(Vfulladder___024root* vlSelf);
void Vfulladder___024root___eval(Vfulladder___024root* vlSelf);

void Vfulladder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfulladder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfulladder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfulladder___024root___eval_static(&(vlSymsp->TOP));
        Vfulladder___024root___eval_initial(&(vlSymsp->TOP));
        Vfulladder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfulladder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfulladder::eventsPending() { return false; }

uint64_t Vfulladder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfulladder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfulladder___024root___eval_final(Vfulladder___024root* vlSelf);

VL_ATTR_COLD void Vfulladder::final() {
    Vfulladder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfulladder::hierName() const { return vlSymsp->name(); }
const char* Vfulladder::modelName() const { return "Vfulladder"; }
unsigned Vfulladder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfulladder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfulladder___024root__trace_init_top(Vfulladder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfulladder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfulladder___024root*>(voidSelf);
    Vfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfulladder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfulladder___024root__trace_register(Vfulladder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfulladder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfulladder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfulladder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
