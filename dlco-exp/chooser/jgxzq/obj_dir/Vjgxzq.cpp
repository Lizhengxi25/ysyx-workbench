// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjgxzq.h"
#include "Vjgxzq__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vjgxzq::Vjgxzq(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vjgxzq__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vjgxzq::Vjgxzq(const char* _vcname__)
    : Vjgxzq(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vjgxzq::~Vjgxzq() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vjgxzq___024root___eval_debug_assertions(Vjgxzq___024root* vlSelf);
#endif  // VL_DEBUG
void Vjgxzq___024root___eval_static(Vjgxzq___024root* vlSelf);
void Vjgxzq___024root___eval_initial(Vjgxzq___024root* vlSelf);
void Vjgxzq___024root___eval_settle(Vjgxzq___024root* vlSelf);
void Vjgxzq___024root___eval(Vjgxzq___024root* vlSelf);

void Vjgxzq::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjgxzq::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjgxzq___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vjgxzq___024root___eval_static(&(vlSymsp->TOP));
        Vjgxzq___024root___eval_initial(&(vlSymsp->TOP));
        Vjgxzq___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vjgxzq___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vjgxzq::eventsPending() { return false; }

uint64_t Vjgxzq::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vjgxzq::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vjgxzq___024root___eval_final(Vjgxzq___024root* vlSelf);

VL_ATTR_COLD void Vjgxzq::final() {
    Vjgxzq___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vjgxzq::hierName() const { return vlSymsp->name(); }
const char* Vjgxzq::modelName() const { return "Vjgxzq"; }
unsigned Vjgxzq::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vjgxzq::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vjgxzq___024root__trace_init_top(Vjgxzq___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vjgxzq___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjgxzq___024root*>(voidSelf);
    Vjgxzq__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vjgxzq___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vjgxzq___024root__trace_register(Vjgxzq___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vjgxzq::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vjgxzq::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vjgxzq___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
