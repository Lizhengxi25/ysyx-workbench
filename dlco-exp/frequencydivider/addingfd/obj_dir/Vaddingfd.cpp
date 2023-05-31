// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaddingfd.h"
#include "Vaddingfd__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaddingfd::Vaddingfd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaddingfd__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , clk{vlSymsp->TOP.clk}
    , clka{vlSymsp->TOP.clka}
    , qb{vlSymsp->TOP.qb}
    , qc{vlSymsp->TOP.qc}
    , qd{vlSymsp->TOP.qd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaddingfd::Vaddingfd(const char* _vcname__)
    : Vaddingfd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaddingfd::~Vaddingfd() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaddingfd___024root___eval_debug_assertions(Vaddingfd___024root* vlSelf);
#endif  // VL_DEBUG
void Vaddingfd___024root___eval_static(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___eval_initial(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___eval_settle(Vaddingfd___024root* vlSelf);
void Vaddingfd___024root___eval(Vaddingfd___024root* vlSelf);

void Vaddingfd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaddingfd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaddingfd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaddingfd___024root___eval_static(&(vlSymsp->TOP));
        Vaddingfd___024root___eval_initial(&(vlSymsp->TOP));
        Vaddingfd___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaddingfd___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaddingfd::eventsPending() { return false; }

uint64_t Vaddingfd::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaddingfd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaddingfd___024root___eval_final(Vaddingfd___024root* vlSelf);

VL_ATTR_COLD void Vaddingfd::final() {
    Vaddingfd___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaddingfd::hierName() const { return vlSymsp->name(); }
const char* Vaddingfd::modelName() const { return "Vaddingfd"; }
unsigned Vaddingfd::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vaddingfd::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaddingfd___024root__trace_init_top(Vaddingfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaddingfd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddingfd___024root*>(voidSelf);
    Vaddingfd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vaddingfd___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vaddingfd___024root__trace_register(Vaddingfd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaddingfd::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaddingfd::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaddingfd___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
