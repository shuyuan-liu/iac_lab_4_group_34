// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprogram_counter.h"
#include "Vprogram_counter__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vprogram_counter::Vprogram_counter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vprogram_counter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , PC{vlSymsp->TOP.PC}
    , PC_plus_4{vlSymsp->TOP.PC_plus_4}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vprogram_counter::Vprogram_counter(const char* _vcname__)
    : Vprogram_counter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vprogram_counter::~Vprogram_counter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vprogram_counter___024root___eval_initial(Vprogram_counter___024root* vlSelf);
void Vprogram_counter___024root___eval_settle(Vprogram_counter___024root* vlSelf);
void Vprogram_counter___024root___eval(Vprogram_counter___024root* vlSelf);
#ifdef VL_DEBUG
void Vprogram_counter___024root___eval_debug_assertions(Vprogram_counter___024root* vlSelf);
#endif  // VL_DEBUG
void Vprogram_counter___024root___final(Vprogram_counter___024root* vlSelf);

static void _eval_initial_loop(Vprogram_counter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vprogram_counter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vprogram_counter___024root___eval_settle(&(vlSymsp->TOP));
        Vprogram_counter___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vprogram_counter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprogram_counter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprogram_counter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vprogram_counter___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vprogram_counter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vprogram_counter::final() {
    Vprogram_counter___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vprogram_counter::hierName() const { return vlSymsp->name(); }
const char* Vprogram_counter::modelName() const { return "Vprogram_counter"; }
unsigned Vprogram_counter::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vprogram_counter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vprogram_counter___024root__trace_init_top(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vprogram_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprogram_counter___024root*>(voidSelf);
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vprogram_counter___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vprogram_counter___024root__trace_register(Vprogram_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vprogram_counter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vprogram_counter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vprogram_counter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
