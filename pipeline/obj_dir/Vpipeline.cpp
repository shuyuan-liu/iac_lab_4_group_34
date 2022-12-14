// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpipeline.h"
#include "Vpipeline__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpipeline::Vpipeline(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpipeline__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpipeline::Vpipeline(const char* _vcname__)
    : Vpipeline(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpipeline::~Vpipeline() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpipeline___024root___eval_initial(Vpipeline___024root* vlSelf);
void Vpipeline___024root___eval_settle(Vpipeline___024root* vlSelf);
void Vpipeline___024root___eval(Vpipeline___024root* vlSelf);
QData Vpipeline___024root___change_request(Vpipeline___024root* vlSelf);
#ifdef VL_DEBUG
void Vpipeline___024root___eval_debug_assertions(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
void Vpipeline___024root___final(Vpipeline___024root* vlSelf);

static void _eval_initial_loop(Vpipeline__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpipeline___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpipeline___024root___eval_settle(&(vlSymsp->TOP));
        Vpipeline___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpipeline___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pipeline.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpipeline___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpipeline::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpipeline::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpipeline___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpipeline___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpipeline___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pipeline.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpipeline___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vpipeline::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpipeline::final() {
    Vpipeline___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpipeline::hierName() const { return vlSymsp->name(); }
const char* Vpipeline::modelName() const { return "Vpipeline"; }
unsigned Vpipeline::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vpipeline::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vpipeline___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpipeline::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpipeline::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpipeline___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
