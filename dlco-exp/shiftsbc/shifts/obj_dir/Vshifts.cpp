// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshifts.h"
#include "Vshifts__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshifts::Vshifts(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vshifts__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vshifts::Vshifts(const char* _vcname__)
    : Vshifts(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vshifts::~Vshifts() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vshifts___024root___eval_debug_assertions(Vshifts___024root* vlSelf);
#endif  // VL_DEBUG
void Vshifts___024root___eval_static(Vshifts___024root* vlSelf);
void Vshifts___024root___eval_initial(Vshifts___024root* vlSelf);
void Vshifts___024root___eval_settle(Vshifts___024root* vlSelf);
void Vshifts___024root___eval(Vshifts___024root* vlSelf);

void Vshifts::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshifts::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshifts___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vshifts___024root___eval_static(&(vlSymsp->TOP));
        Vshifts___024root___eval_initial(&(vlSymsp->TOP));
        Vshifts___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vshifts___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vshifts::eventsPending() { return false; }

uint64_t Vshifts::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vshifts::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vshifts___024root___eval_final(Vshifts___024root* vlSelf);

VL_ATTR_COLD void Vshifts::final() {
    Vshifts___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vshifts::hierName() const { return vlSymsp->name(); }
const char* Vshifts::modelName() const { return "Vshifts"; }
unsigned Vshifts::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vshifts::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vshifts___024root__trace_init_top(Vshifts___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshifts___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshifts___024root*>(voidSelf);
    Vshifts__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vshifts___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vshifts___024root__trace_register(Vshifts___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vshifts::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vshifts::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vshifts___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
