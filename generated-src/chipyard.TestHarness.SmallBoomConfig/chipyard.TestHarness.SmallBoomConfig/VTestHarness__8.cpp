// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__958(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__958\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62701
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62712
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62715: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62715, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62723
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusTopology.scala:25:91)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62734
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62737: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62737, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62745
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62756
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62759: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62759, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62767
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusTopology.scala:25:91)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62778
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62781: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62781, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62789
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62800
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62803: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62803, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62811
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusTopology.scala:25:91)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62822
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62825: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62825, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62833
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62844
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62847: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62847, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62855
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62866
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62869: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62869, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62877
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62888
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62891: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62891, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62899
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusTopology.scala:25:91)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62910
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62913: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62913, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62921
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62932
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62935: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62935, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62943
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusTopology.scala:25:91)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62954
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62957: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62957, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62965
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62976
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:62979: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 62979, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62987
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusTopology.scala:25:91)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:62998
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63001: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63001, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63009
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusTopology.scala:25:91)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63020
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63023: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63023, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63031
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63042
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63045: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63045, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63053
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63064
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63067: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63067, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63075
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63086
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63089: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63089, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63097
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63108
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63111: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63111, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63119
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63130
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63133: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63133, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63141
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusTopology.scala:25:91)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63152
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63155: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63155, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63163
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63174
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63177: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63177, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63185
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63196
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63199: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63199, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63207
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63218
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63221: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63221, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63229
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63240
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63243: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63243, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63251
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63262
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63265: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63265, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63273
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusTopology.scala:25:91)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63284
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63287: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63287, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63295
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63306
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63309: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63309, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63317
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63328
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63331: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63331, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63339
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63350
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63353: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63353, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63361
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63372
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63375: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63375, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63383
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusTopology.scala:25:91)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63394
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63397: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63397, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63405
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_272))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63416
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_272))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63419: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63419, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63427
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63438
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63441: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63441, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63449
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63460
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63463: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63463, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63471
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63482
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63485: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63485, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63493
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusTopology.scala:25:91)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63504
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63507: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63507, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63515
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63526
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63529: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63529, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63537
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63548
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63551: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63551, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63559
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63570
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63573: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63573, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63581
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63592
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63595: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63595, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63603
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusTopology.scala:25:91)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63614
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63617: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63617, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63625
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63636
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63639: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63639, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63647
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusTopology.scala:25:91)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63658
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63661: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63661, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63669
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63680
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63683: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63683, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63691
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusTopology.scala:25:91)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63702
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63705: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63705, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63713
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusTopology.scala:25:91)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63724
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63727: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63727, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63735
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63746
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63749: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63749, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63757
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusTopology.scala:25:91)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63768
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63771: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63771, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63779
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63790
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63793: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63793, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63801
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusTopology.scala:25:91)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63812
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63815: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63815, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63823
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63834
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63837: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63837, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63845
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusTopology.scala:25:91)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63856
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63859: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63859, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63867
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63878
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63881: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63881, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63889
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63900
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63903: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63903, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63911
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusTopology.scala:25:91)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63922
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63925: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63925, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63933
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63944
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63947: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63947, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63955
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63966
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63969: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63969, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63977
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63988
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:63991: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 63991, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:63999
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusTopology.scala:25:91)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64010
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64013: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64013, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64021
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_436))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64032
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_436))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64035: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64035, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64043
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64054
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64057: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64057, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64065
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64076
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64079: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64079, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64087
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64098
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64101: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64101, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64109
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_436))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64120
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_436))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64123: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64123, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64131
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64142
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64145: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64145, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64153
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusTopology.scala:25:91)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64164
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64167: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64167, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64175
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_539))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64186
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_539))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64189: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64189, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64197
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64208
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64211: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64211, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64219
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_547))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64230
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_547))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64233: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64233, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64241
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64252
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64255: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64255, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64263
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64274
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64277: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64277, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64285
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_588))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64296
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_588))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64299: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64299, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64307
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64318
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64321: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64321, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64329
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64340
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64343: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64343, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64351
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_608))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusTopology.scala:25:91)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64362
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_608))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64365: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64365, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64373
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_510) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_622))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_661))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusTopology.scala:25:91)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64384
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_510) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_622))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_661))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64387: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64387, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64395
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_559) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_641))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_675))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusTopology.scala:25:91)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64406
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_559) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_641))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_675))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64409: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64409, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64417
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_682))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at BusTopology.scala:25:91)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64428
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_682))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64431: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64431, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64439
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_695))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusTopology.scala:25:91)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:64450
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_695))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:64453: Assertion failed in %NTestHarness.top.mbus.coupler_from_coherence_manager.binder.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 64453, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__959(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__959\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71127
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71138
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71141: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71141, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71149
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71160
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71163: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71163, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71171
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71182
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71185: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71185, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71193
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71204
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71207: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71207, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71215
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71226
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71229: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71229, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71237
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71248
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71251: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71251, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71259
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71270
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71273: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71273, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71281
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71292
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71295: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71295, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71303
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71314
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71317: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71317, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71325
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71336
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71339: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71339, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71347
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71358
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71361: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71361, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71369
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71380
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71383: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71383, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71391
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71402
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71405: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71405, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71413
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71424
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71427: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71427, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71435
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71446
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71449: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71449, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71457
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71468
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71471: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71471, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71479
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71490
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71493: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71493, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71501
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71512
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71515: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71515, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71523
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71534
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71537: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71537, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71545
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71556
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71559: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71559, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71567
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71578
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71581: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71581, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71589
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71600
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71603: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71603, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71611
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71622
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71625: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71625, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71633
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71644
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71647: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71647, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71655
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71666
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71669: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71669, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71677
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71688
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71691: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71691, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71699
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71710
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71713: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71713, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71721
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71732
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71735: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71735, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71743
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71754
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71757: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71757, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71765
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71776
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71779: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71779, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71787
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71798
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71801: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71801, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71809
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71820
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71823: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71823, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71831
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_272))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71842
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_272))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71845: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71845, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71853
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71864
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71867: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71867, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71875
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71886
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71889: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71889, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71897
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71908
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71911: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71911, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71919
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71930
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71933: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71933, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71941
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71952
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71955: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71955, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71963
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71974
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71977: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71977, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71985
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:71996
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:71999: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 71999, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72007
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72018
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72021: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72021, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72029
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72040
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                             >> 0x10U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72043: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72043, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72051
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72062
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72065: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72065, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72073
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72084
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72087: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72087, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72095
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72106
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                               >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72109: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72109, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72117
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72128
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72131: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72131, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72139
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72150
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72153: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72153, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72161
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72172
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                          >> 0x13U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72175: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72175, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72183
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72194
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72197: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72197, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72205
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72216
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72219: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72219, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72227
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72238
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72241: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72241, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72249
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72260
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72263: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72263, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72271
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72282
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72285: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72285, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72293
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72304
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72307: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72307, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72315
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:287 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72326
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72329: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72329, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72337
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72348
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72351: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72351, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72359
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72370
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72373: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72373, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72381
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72392
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72395: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72395, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72403
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:297 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72414
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72417: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72417, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72425
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72436
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72439: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72439, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72447
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_436))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72458
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_436))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72461: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72461, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72469
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72480
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72483: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72483, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72491
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72502
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72505: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72505, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72513
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72524
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72527: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72527, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72535
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_436))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72546
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_436))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72549: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72549, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72557
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72568
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72571: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72571, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72579
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72590
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72593: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72593, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72601
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_539))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72612
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_539))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72615: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72615, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72623
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72634
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72637: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72637, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72645
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_547))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72656
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_547))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72659: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72659, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72667
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72678
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72681: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72681, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72689
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72700
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_519))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72703: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72703, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72711
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_588))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72722
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_588))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72725: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72725, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72733
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72744
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72747: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72747, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72755
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72766
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72769: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72769, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72777
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_608))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72788
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_567))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_608))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72791: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72791, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72799
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_622))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_661))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72810
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_510) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_622))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_661))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72813: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72813, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72821
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_559) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_641))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_675))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72832
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_559) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_641))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_675))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72835: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72835, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72843
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_682))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72854
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_682))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72857: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72857, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72865
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_695))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:67:82)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:72876
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_695))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:72879: Assertion failed in %NTestHarness.top.mbus.coupler_to_memory_controller_named_axi4.widget.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 72879, "");
        }
    }
}
