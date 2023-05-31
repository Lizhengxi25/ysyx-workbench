// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vram.h"
#include "Vram__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vram::Vram(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vram__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , wen{vlSymsp->TOP.wen}
    , din{vlSymsp->TOP.din}
    , addrin{vlSymsp->TOP.addrin}
    , addrout{vlSymsp->TOP.addrout}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vram::Vram(const char* _vcname__)
    : Vram(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vram::~Vram() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vram___024root___eval_debug_assertions(Vram___024root* vlSelf);
#endif  // VL_DEBUG
void Vram___024root___eval_static(Vram___024root* vlSelf);
void Vram___024root___eval_initial(Vram___024root* vlSelf);
void Vram___024root___eval_settle(Vram___024root* vlSelf);
void Vram___024root___eval(Vram___024root* vlSelf);

void Vram::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vram::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vram___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vram___024root___eval_static(&(vlSymsp->TOP));
        Vram___024root___eval_initial(&(vlSymsp->TOP));
        Vram___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vram___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vram::eventsPending() { return false; }

uint64_t Vram::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vram::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vram___024root___eval_final(Vram___024root* vlSelf);

VL_ATTR_COLD void Vram::final() {
    Vram___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vram::hierName() const { return vlSymsp->name(); }
const char* Vram::modelName() const { return "Vram"; }
unsigned Vram::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vram::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vram___024root__trace_init_top(Vram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram___024root*>(voidSelf);
    Vram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vram___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vram___024root__trace_register(Vram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vram::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vram::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vram___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
