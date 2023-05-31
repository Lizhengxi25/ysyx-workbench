// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnfulladder.h"
#include "Vnfulladder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vnfulladder::Vnfulladder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnfulladder__Syms(contextp(), _vcname__, this)}
    , in_x{vlSymsp->TOP.in_x}
    , in_y{vlSymsp->TOP.in_y}
    , out_c{vlSymsp->TOP.out_c}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnfulladder::Vnfulladder(const char* _vcname__)
    : Vnfulladder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnfulladder::~Vnfulladder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnfulladder___024root___eval_debug_assertions(Vnfulladder___024root* vlSelf);
#endif  // VL_DEBUG
void Vnfulladder___024root___eval_static(Vnfulladder___024root* vlSelf);
void Vnfulladder___024root___eval_initial(Vnfulladder___024root* vlSelf);
void Vnfulladder___024root___eval_settle(Vnfulladder___024root* vlSelf);
void Vnfulladder___024root___eval(Vnfulladder___024root* vlSelf);

void Vnfulladder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnfulladder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnfulladder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnfulladder___024root___eval_static(&(vlSymsp->TOP));
        Vnfulladder___024root___eval_initial(&(vlSymsp->TOP));
        Vnfulladder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnfulladder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnfulladder::eventsPending() { return false; }

uint64_t Vnfulladder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnfulladder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnfulladder___024root___eval_final(Vnfulladder___024root* vlSelf);

VL_ATTR_COLD void Vnfulladder::final() {
    Vnfulladder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnfulladder::hierName() const { return vlSymsp->name(); }
const char* Vnfulladder::modelName() const { return "Vnfulladder"; }
unsigned Vnfulladder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vnfulladder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnfulladder___024root__trace_init_top(Vnfulladder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnfulladder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnfulladder___024root*>(voidSelf);
    Vnfulladder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vnfulladder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vnfulladder___024root__trace_register(Vnfulladder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vnfulladder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vnfulladder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnfulladder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
