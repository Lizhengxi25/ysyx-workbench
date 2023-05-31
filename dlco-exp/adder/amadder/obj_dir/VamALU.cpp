// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VamALU.h"
#include "VamALU__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VamALU::VamALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VamALU__Syms(contextp(), _vcname__, this)}
    , judge{vlSymsp->TOP.judge}
    , overflow{vlSymsp->TOP.overflow}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VamALU::VamALU(const char* _vcname__)
    : VamALU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VamALU::~VamALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VamALU___024root___eval_debug_assertions(VamALU___024root* vlSelf);
#endif  // VL_DEBUG
void VamALU___024root___eval_static(VamALU___024root* vlSelf);
void VamALU___024root___eval_initial(VamALU___024root* vlSelf);
void VamALU___024root___eval_settle(VamALU___024root* vlSelf);
void VamALU___024root___eval(VamALU___024root* vlSelf);

void VamALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VamALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VamALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VamALU___024root___eval_static(&(vlSymsp->TOP));
        VamALU___024root___eval_initial(&(vlSymsp->TOP));
        VamALU___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VamALU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VamALU::eventsPending() { return false; }

uint64_t VamALU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VamALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VamALU___024root___eval_final(VamALU___024root* vlSelf);

VL_ATTR_COLD void VamALU::final() {
    VamALU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VamALU::hierName() const { return vlSymsp->name(); }
const char* VamALU::modelName() const { return "VamALU"; }
unsigned VamALU::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VamALU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VamALU___024root__trace_init_top(VamALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VamALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VamALU___024root*>(voidSelf);
    VamALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VamALU___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VamALU___024root__trace_register(VamALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VamALU::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VamALU::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VamALU___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
