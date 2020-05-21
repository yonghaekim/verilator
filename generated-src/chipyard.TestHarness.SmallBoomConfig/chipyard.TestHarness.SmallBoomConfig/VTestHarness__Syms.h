// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTESTHARNESS__SYMS_H_
#define _VTESTHARNESS__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VTestHarness.h"
#include "VTestHarness___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTestHarness__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTestHarness*                  TOPp;
    VTestHarness___024unit         TOP____024unit;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TestHarness__top__InclusiveCache_inner_TLBuffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__InclusiveCache_outer_TLBuffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__csr;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__csr_exe_unit;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__csr_exe_unit__alu;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__csr_exe_unit__ifpu;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_0;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_1;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_2;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_3;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_4;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_5;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_6;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fp_issue_unit__slots_7;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fpiu_unit;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fpiu_unit__fdivsqrt;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_pipeline__fregfile;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_rename_stage;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_rename_stage__freelist;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__fp_rename_stage__maptable;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_0;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_1;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_2;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_3;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_4;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_5;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_6;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__int_issue_unit__slots_7;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__iregfile;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_0;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_1;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_2;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_3;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_4;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_5;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_6;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_issue_unit__slots_7;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__mem_units_0__MemAddrCalcUnit;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__rename_stage;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__rename_stage__freelist;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__rename_stage__maptable;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__core__rob;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__dcache;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__dcache__mshrs;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__dcache__mshrs__mmios_0;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__dcache__mshrs__mshrs_0;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__dcache__mshrs__mshrs_1;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__bpdpipeline;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__bpdpipeline__bpd;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__bpdpipeline__btb__bim;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__fetch_controller;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__fetch_controller__bchecker;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__fetch_controller__ftq;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__fetch_controller__monitor;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__icache;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__frontend__tlb;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__lsu;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__lsu__dtlb;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__ptw;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__tlMasterXbar;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__tlMasterXbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__boom_tile__tlMasterXbar__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__top__bootrom__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__atomics;
    VerilatedScope __Vscope_TestHarness__top__cbus__atomics__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__buffer_1__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_bootrom__fragmenter;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_bootrom__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_bus_named_periphery_bus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_clint__fragmenter;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_clint__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_debug__fragmenter;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_debug__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_l2_ctrl__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_l2_ctrl__fragmenter;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_l2_ctrl__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_plic__fragmenter;
    VerilatedScope __Vscope_TestHarness__top__cbus__coupler_to_plic__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__in_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__out_xbar;
    VerilatedScope __Vscope_TestHarness__top__cbus__out_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__wrapped_error_device__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cbus__wrapped_error_device__error;
    VerilatedScope __Vscope_TestHarness__top__cbus__wrapped_error_device__error__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__clint__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__cork;
    VerilatedScope __Vscope_TestHarness__top__cork__IDPool;
    VerilatedScope __Vscope_TestHarness__top__cork__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__debug_1__dmInner__dmInner;
    VerilatedScope __Vscope_TestHarness__top__debug_1__dmInner__dmInner__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__debug_1__dmInner__dmInner__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__top__fbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__fbus__coupler_from_port_named_serialadapter__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__fbus__coupler_from_port_named_serialadapter__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__fbus__front_bus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__filter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__l2;
    VerilatedScope __Vscope_TestHarness__top__l2__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__l2__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__abc_mshrs_0;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__abc_mshrs_1;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__abc_mshrs_2;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__abc_mshrs_3;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__abc_mshrs_4;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__bc_mshr;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__c_mshr;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__directory;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__requests;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__sinkA__putbuffer;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__sinkC;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__sinkC__ListBuffer;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__sinkD;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__sourceB;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__sourceC;
    VerilatedScope __Vscope_TestHarness__top__l2__mods_0__sourceD;
    VerilatedScope __Vscope_TestHarness__top__m;
    VerilatedScope __Vscope_TestHarness__top__mbus__coupler_from_coherence_manager__binder__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__mbus__coupler_to_memory_controller_named_axi4__axi4yank;
    VerilatedScope __Vscope_TestHarness__top__mbus__coupler_to_memory_controller_named_axi4__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__mbus__coupler_to_memory_controller_named_axi4__picker__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__mbus__coupler_to_memory_controller_named_axi4__tl2axi4;
    VerilatedScope __Vscope_TestHarness__top__mbus__coupler_to_memory_controller_named_axi4__tl2axi4__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__mbus__coupler_to_memory_controller_named_axi4__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__mbus__memory_bus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__pbus__atomics;
    VerilatedScope __Vscope_TestHarness__top__pbus__atomics__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__pbus__buffer_1__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__pbus__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__pbus__coupler_to_device_named_uart_0__fragmenter;
    VerilatedScope __Vscope_TestHarness__top__pbus__coupler_to_device_named_uart_0__fragmenter__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__pbus__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__pbus__in_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__pbus__out_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__plic;
    VerilatedScope __Vscope_TestHarness__top__plic__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__sbus__coupler_from_bus_named_front_bus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__sbus__coupler_from_tile_named_boom_tile__buffer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__sbus__coupler_from_tile_named_boom_tile__fixer__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__sbus__coupler_to_bus_named_periphery_bus__widget__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__sbus__system_bus_xbar;
    VerilatedScope __Vscope_TestHarness__top__sbus__system_bus_xbar__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__sbus__system_bus_xbar__TLMonitor_1;
    VerilatedScope __Vscope_TestHarness__top__uart_0_1__TLMonitor;
    VerilatedScope __Vscope_TestHarness__top__uart_0_1__buffer__TLMonitor;
    
    // CREATORS
    VTestHarness__Syms(VTestHarness* topp, const char* namep);
    ~VTestHarness__Syms() {}
    void VTestHarness__Syms_1(VTestHarness* topp);
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
