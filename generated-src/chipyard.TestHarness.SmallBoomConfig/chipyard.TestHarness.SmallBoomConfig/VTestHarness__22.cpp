// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1032(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1032\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111302
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111313
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111316: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111316, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111324
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Periphery.scala:72:64)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111335
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111338: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111338, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111346
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111357
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111360: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111360, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111368
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Periphery.scala:72:64)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111379
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111382: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111382, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111390
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111401
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111404: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111404, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111412
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Periphery.scala:72:64)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111423
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111426: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111426, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111434
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111445
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111448: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111448, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111456
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Periphery.scala:72:64)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111467
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111470: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111470, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111478
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111489
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111492: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111492, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111500
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Periphery.scala:72:64)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111511
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111514: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111514, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111522
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111533
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111536: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111536, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111544
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Periphery.scala:72:64)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111555
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111558: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111558, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111566
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111577
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111580: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111580, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111588
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Periphery.scala:72:64)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111599
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111602: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111602, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111610
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Periphery.scala:72:64)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111621
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111624: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111624, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111632
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111643
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111646: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111646, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111654
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Periphery.scala:72:64)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111665
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111668: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111668, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111676
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111687
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111690: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111690, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111698
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111709
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111712: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111712, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111720
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111731
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111734: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111734, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111742
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Periphery.scala:72:64)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111753
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111756: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111756, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111764
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111775
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111778: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111778, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111786
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Periphery.scala:72:64)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111797
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111800: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111800, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111808
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111819
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111822: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111822, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111830
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111841
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111844: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111844, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111852
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111863
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111866: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111866, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111874
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Periphery.scala:72:64)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111885
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111888: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111888, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111896
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111907
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111910: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111910, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111918
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111929
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111932: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111932, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111940
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111951
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111954: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111954, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111962
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111973
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111976: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111976, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111984
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Periphery.scala:72:64)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:111995
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:111998: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 111998, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112006
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_347))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112017
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_347))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112020: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112020, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112028
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112039
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112042: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112042, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112050
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112061
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112064: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112064, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112072
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112083
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112086: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112086, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112094
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Periphery.scala:72:64)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112105
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112108: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112108, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112116
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112127
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112130: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112130, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112138
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112149
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112152: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112152, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112160
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112171
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112174: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112174, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112182
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112193
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112196: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112196, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112204
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Periphery.scala:72:64)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112215
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112218: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112218, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112226
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112237
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112240: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112240, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112248
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Periphery.scala:72:64)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112259
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112262: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112262, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112270
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112281
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112284: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112284, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112292
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Periphery.scala:72:64)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112303
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112306: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112306, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112314
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Periphery.scala:72:64)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112325
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112328: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112328, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112336
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Periphery.scala:72:64)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112347
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112350: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112350, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112556
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112567
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112570: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112570, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112578
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112589
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112592: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112592, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112622
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_620))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112633
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_620))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112636: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112636, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112644
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_624))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112655
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_624))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112658: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112658, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112666
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_628))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112677
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_628))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112680: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112680, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112688
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_632))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112699
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_632))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112702: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112702, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112710
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_636))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112721
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_636))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112724: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112724, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112732
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_669))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112743
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_669))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112746: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112746, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112754
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112765
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112768: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112768, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112776
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_681))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Periphery.scala:72:64)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112787
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_681))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112790: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112790, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112798
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_591) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_703))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Periphery.scala:72:64)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112809
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_591) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_703))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112812: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112812, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112820
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_722))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_756))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Periphery.scala:72:64)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112831
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_722))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_756))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112834: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112834, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112842
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_769))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Periphery.scala:72:64)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:112853
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_769))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:112856: Assertion failed in %NTestHarness.top.cbus.coupler_to_debug.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 112856, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1033(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1033\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108241
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108252
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108255: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108255, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108263
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CLINT.scala:111:65)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108274
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108277: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108277, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108285
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108296
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108299: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108299, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108307
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CLINT.scala:111:65)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108318
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108321: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108321, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108329
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108340
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108343: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108343, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108351
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CLINT.scala:111:65)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108362
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108365: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108365, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108373
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108384
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108387: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108387, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108395
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CLINT.scala:111:65)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108406
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108409: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108409, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108417
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108428
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108431: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108431, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108439
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CLINT.scala:111:65)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108450
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_168))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108453: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108453, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108461
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108472
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108475: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108475, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108483
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CLINT.scala:111:65)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108494
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108497: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108497, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108505
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108516
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108519: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108519, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108527
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CLINT.scala:111:65)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108538
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108541: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108541, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108549
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CLINT.scala:111:65)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108560
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108563: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108563, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108571
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108582
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108585: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108585, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108593
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CLINT.scala:111:65)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108604
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108607: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108607, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108615
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108626
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108629: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108629, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108637
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108648
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108651: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108651, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108659
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108670
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108673: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108673, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108681
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CLINT.scala:111:65)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108692
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108695: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108695, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108703
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108714
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108717: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108717, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108725
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CLINT.scala:111:65)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108736
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108739: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108739, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108747
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108758
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108761: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108761, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108769
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108780
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108783: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108783, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108791
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108802
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108805: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108805, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108813
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CLINT.scala:111:65)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108824
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108827: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108827, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108835
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108846
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108849: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108849, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108857
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108868
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_269))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108871: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108871, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108879
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108890
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108893: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108893, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108901
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108912
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108915: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108915, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108923
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CLINT.scala:111:65)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108934
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108937: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108937, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108945
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_347))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108956
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_347))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108959: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108959, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108967
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108978
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:108981: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 108981, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:108989
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109000
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109003: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109003, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109011
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109022
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109025: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109025, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109033
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CLINT.scala:111:65)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109044
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109047: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109047, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109055
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109066
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109069: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109069, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109077
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109088
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109091: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109091, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109099
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109110
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109113: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109113, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109121
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109132
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109135: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109135, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109143
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CLINT.scala:111:65)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109154
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109157: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109157, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109165
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109176
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109179: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109179, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109187
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CLINT.scala:111:65)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109198
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109201: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109201, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109209
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109220
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109223: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109223, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109231
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CLINT.scala:111:65)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109242
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109245: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109245, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109253
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CLINT.scala:111:65)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109264
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109267: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109267, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109275
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CLINT.scala:111:65)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109286
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109289: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109289, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109495
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109506
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109509: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109509, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109517
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109528
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109531: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109531, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109561
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_620))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109572
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_620))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109575: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109575, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109583
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_624))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109594
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_624))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109597: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109597, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109605
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_628))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109616
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_628))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109619: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109619, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109627
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_632))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109638
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_632))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109641: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109641, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109649
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_636))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109660
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_600))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_636))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109663: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109663, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109671
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_669))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109682
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_669))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109685: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109685, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109693
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109704
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109707: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109707, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109715
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_681))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CLINT.scala:111:65)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109726
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_648))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_681))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109729: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109729, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109737
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_591) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_703))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CLINT.scala:111:65)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109748
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_591) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_703))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_742))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109751: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109751, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109759
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_722))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_756))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CLINT.scala:111:65)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109770
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_722))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_756))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109773: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109773, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109781
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_769))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CLINT.scala:111:65)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:109792
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_769))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:109795: Assertion failed in %NTestHarness.top.cbus.coupler_to_clint.fragmenter.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 109795, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1034(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1034\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:178955
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_202))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at icache.scala:295 assert(!(s1_valid || s1_slaveValid) ||\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:178966
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_202))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:178969: Assertion failed in %NTestHarness.top.boom_tile.frontend.icache\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 178969, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__lb__v0 = 0U;
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160979
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_315) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at tile.scala:188:21)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160990
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_315) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160993: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160993, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161001
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ (1U | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at tile.scala:188:21)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161012
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                         & (~ (1U | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161015: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161015, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161023
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at tile.scala:188:21)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161034
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161037: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161037, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161045
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at tile.scala:188:21)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161056
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161059: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161059, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161067
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at tile.scala:188:21)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161078
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161081: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161081, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161089
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at tile.scala:188:21)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161100
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161103: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161103, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161111
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at tile.scala:188:21)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161122
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161125: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161125, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161133
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at tile.scala:188:21)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161144
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161147: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161147, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161155
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at tile.scala:188:21)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161166
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161169: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161169, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161177
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at tile.scala:188:21)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161188
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161191: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161191, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161199
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at tile.scala:188:21)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161210
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161213: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161213, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161221
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at tile.scala:188:21)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161232
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161235: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161235, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161243
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at tile.scala:188:21)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161254
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161257: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161257, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161265
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at tile.scala:188:21)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161276
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161279: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161279, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161287
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_796))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at tile.scala:188:21)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161298
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_796))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161301: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161301, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161309
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at tile.scala:188:21)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161320
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161323: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161323, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161331
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at tile.scala:188:21)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161342
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161345: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161345, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161353
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at tile.scala:188:21)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161364
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161367: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161367, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161375
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_796))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at tile.scala:188:21)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161386
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_796))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161389: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161389, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161397
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at tile.scala:188:21)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161408
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161411: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161411, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161419
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at tile.scala:188:21)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161430
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161433: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161433, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161441
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_879))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_915))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at tile.scala:188:21)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161452
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_879))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_915))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161455: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161455, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161463
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_948))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at tile.scala:188:21)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161474
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_948))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161477: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161477, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161485
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at tile.scala:188:21)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161496
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_952))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161499: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161499, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161507
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_956))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at tile.scala:188:21)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161518
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_956))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161521: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161521, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161529
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_964))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at tile.scala:188:21)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161540
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_964))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161543: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161543, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161551
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_968))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at tile.scala:188:21)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161562
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_927))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_968))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161565: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161565, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161573
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1014) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_972)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at tile.scala:188:21)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161584
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1014) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_972)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161587: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161587, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161595
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1029) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1035))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at tile.scala:188:21)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161606
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1029) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1035))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161609: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161609, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161617
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1042))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at tile.scala:188:21)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161628
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1042))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161631: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161631, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161639
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1055))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at tile.scala:188:21)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:161650
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1055))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:161653: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 161653, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1035(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1035\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_sdq_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_sdq_id__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_brq_idx 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_brq_idx;
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156474
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_167))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156485
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_167))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156488: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156488, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156496
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_185))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at tile.scala:183:21)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156507
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_185))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156510: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156510, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156518
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156529
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156532: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156532, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156540
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                               >> 0xbU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:54 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156551
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                               >> 0xbU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156554: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156554, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156562
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156573
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156576: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156576, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156584
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at tile.scala:183:21)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156595
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156598: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156598, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156606
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:57 assert (~bundle.mask === 0.U, \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156617
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156620: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156620, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156628
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:58 assert (!bundle.corrupt, \"'A' channel AcquireBlock is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156639
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156642: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156642, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156650
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_167))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:62 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156661
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_167))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156664: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156664, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156672
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_185))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at tile.scala:183:21)\n    at Monitor.scala:63 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156683
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_185))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156686: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156686, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156694
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:64 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156705
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156708: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156708, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156716
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                               >> 0xbU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:65 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156727
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                               >> 0xbU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156730: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156730, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156738
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:66 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156749
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156752: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156752, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156760
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at tile.scala:183:21)\n    at Monitor.scala:67 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156771
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156774: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156774, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156782
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at tile.scala:183:21)\n    at Monitor.scala:68 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156793
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156796: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156796, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156804
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:69 assert (~bundle.mask === 0.U, \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156815
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156818: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156818, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156826
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:70 assert (!bundle.corrupt, \"'A' channel AcquirePerm is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156837
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156840: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156840, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156848
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:74 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156859
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156862: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156862, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156870
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:75 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156881
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156884: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156884, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156892
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:76 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156903
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156906: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156906, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156914
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:77 assert (bundle.param === 0.U, \"'A' channel Get carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156925
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156928: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156928, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156936
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:78 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156947
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156950: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156950, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156958
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:79 assert (!bundle.corrupt, \"'A' channel Get is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156969
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156972: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156972, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156980
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:83 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:156991
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:156994: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 156994, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157002
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:84 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157013
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157016: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157016, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157024
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:85 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157035
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157038: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157038, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157046
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:86 assert (bundle.param === 0.U, \"'A' channel PutFull carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157057
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157060: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157060, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157068
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:87 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157079
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157082: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157082, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157090
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:91 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157101
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157104: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157104, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157112
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:92 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157123
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157126: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157126, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157134
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:93 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157145
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157148: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157148, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157156
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:94 assert (bundle.param === 0.U, \"'A' channel PutPartial carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157167
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157170: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157170, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157178
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:95 assert ((bundle.mask & ~mask) === 0.U, \"'A' channel PutPartial contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157189
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157192: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157192, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157200
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:99 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157211
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157214: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157214, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157222
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:100 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157233
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157236: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157236, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157244
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:101 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157255
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157258: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157258, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157266
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at tile.scala:183:21)\n    at Monitor.scala:102 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157277
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157280: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157280, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157288
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:103 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157299
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157302: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157302, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157310
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:107 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157321
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157324: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157324, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157332
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:108 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157343
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157346: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157346, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157354
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:109 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157365
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157368: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157368, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157376
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at tile.scala:183:21)\n    at Monitor.scala:110 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157387
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                             >> 0xfU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157390: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157390, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157398
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:111 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157409
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157412: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157412, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157420
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_758))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:115 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157431
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_758))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157434: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157434, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157442
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:116 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157453
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_188))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157456: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157456, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157464
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:117 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157475
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_195))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157478: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157478, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157486
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:118 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157497
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157500: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157500, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157508
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:119 assert (!bundle.corrupt, \"'A' channel Hint is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157519
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                          >> 0x12U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157522: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157522, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157530
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at tile.scala:183:21)\n    at Monitor.scala:270 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157541
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157544: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157544, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157552
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:278 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157563
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157566: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157566, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157574
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:279 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157585
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157588: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157588, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157596
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:280 assert (bundle.param === 0.U, \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157607
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157610: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157610, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157618
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:281 assert (!bundle.corrupt, \"'D' channel ReleaseAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157629
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157632: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157632, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157640
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at tile.scala:183:21)\n    at Monitor.scala:282 assert (!bundle.denied, \"'D' channel ReleaseAck is denied\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157651
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_denied___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157654: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157654, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157662
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:286 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157673
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157676: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157676, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157684
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:288 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel Grant smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157695
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157698: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157698, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157706
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at tile.scala:183:21)\n    at Monitor.scala:289 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157717
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157720: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157720, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157728
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at tile.scala:183:21)\n    at Monitor.scala:290 assert (bundle.param =/= TLPermissions.toN, \"'D' channel Grant carries toN param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157739
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157742: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157742, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157750
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:291 assert (!bundle.corrupt, \"'D' channel Grant is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157761
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157764: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157764, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157772
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:296 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157783
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157786: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157786, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157794
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:298 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'D' channel GrantData smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157805
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157808: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157808, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157816
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at tile.scala:183:21)\n    at Monitor.scala:299 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157827
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157830: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157830, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157838
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at tile.scala:183:21)\n    at Monitor.scala:300 assert (bundle.param =/= TLPermissions.toN, \"'D' channel GrantData carries toN param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157849
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157852: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157852, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157860
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_860))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:301 assert (!bundle.denied || bundle.corrupt, \"'D' channel GrantData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157871
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_860))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157874: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157874, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157882
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:306 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157893
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157896: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157896, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157904
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:308 assert (bundle.param === 0.U, \"'D' channel AccessAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157915
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157918: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157918, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157926
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:309 assert (!bundle.corrupt, \"'D' channel AccessAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157937
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157940: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157940, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157948
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:314 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157959
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157962: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157962, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157970
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:316 assert (bundle.param === 0.U, \"'D' channel AccessAckData carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157981
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:157984: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 157984, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:157992
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_860))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:317 assert (!bundle.denied || bundle.corrupt, \"'D' channel AccessAckData is denied but not corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158003
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_860))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158006: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158006, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158014
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:322 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158025
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158028: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158028, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158036
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:324 assert (bundle.param === 0.U, \"'D' channel HintAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158047
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158050: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158050, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158058
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:325 assert (!bundle.corrupt, \"'D' channel HintAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158069
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_corrupt___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158072: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158072, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158080
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel has invalid opcode (connected at tile.scala:183:21)\n    at Monitor.scala:124 assert (TLMessages.isB(bundle.opcode), \"'B' channel has invalid opcode\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158091
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158094: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158094, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158102
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1100))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Probe type unsupported by client (connected at tile.scala:183:21)\n    at Monitor.scala:135 assert (edge.client.supportsProbe(bundle.source, bundle.size), \"'B' channel carries Probe type unsupported by client\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158113
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1100))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158116: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158116, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158124
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:136 assert (address_ok, \"'B' channel Probe carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158135
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158138: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158138, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158146
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries source that is not first source (connected at tile.scala:183:21)\n    at Monitor.scala:137 assert (legal_source, \"'B' channel Probe carries source that is not first source\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158157
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158160: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158160, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158168
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:138 assert (is_aligned, \"'B' channel Probe address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158179
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158182: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158182, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158190
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at tile.scala:183:21)\n    at Monitor.scala:139 assert (TLPermissions.isCap(bundle.param), \"'B' channel Probe carries invalid cap param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158201
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158204: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158204, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158212
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:140 assert (bundle.mask === mask, \"'B' channel Probe contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158223
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158226: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158226, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158234
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
                                [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:141 assert (!bundle.corrupt, \"'B' channel Probe is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158245
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
                                [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158248: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158248, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158256
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Get type unsupported by client (connected at tile.scala:183:21)\n    at Monitor.scala:145 assert (edge.client.supportsGet(bundle.source, bundle.size), \"'B' channel carries Get type unsupported by client\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158267
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158270: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158270, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158278
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:146 assert (address_ok, \"'B' channel Get carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158289
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158292: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158292, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158300
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries source that is not first source (connected at tile.scala:183:21)\n    at Monitor.scala:147 assert (legal_source, \"'B' channel Get carries source that is not first source\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158311
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158314: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158314, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158322
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:148 assert (is_aligned, \"'B' channel Get address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158333
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158336: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158336, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158344
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:149 assert (bundle.param === 0.U, \"'B' channel Get carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158355
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158358: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158358, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158366
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:150 assert (bundle.mask === mask, \"'B' channel Get contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158377
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158380: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158380, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158388
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
                                [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:151 assert (!bundle.corrupt, \"'B' channel Get is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158399
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
                                [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158402: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158402, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158410
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries PutFull type unsupported by client (connected at tile.scala:183:21)\n    at Monitor.scala:155 assert (edge.client.supportsPutFull(bundle.source, bundle.size), \"'B' channel carries PutFull type unsupported by client\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158421
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158424: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158424, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158432
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:156 assert (address_ok, \"'B' channel PutFull carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158443
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158446: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158446, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158454
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries source that is not first source (connected at tile.scala:183:21)\n    at Monitor.scala:157 assert (legal_source, \"'B' channel PutFull carries source that is not first source\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158465
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158468: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158468, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158476
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:158 assert (is_aligned, \"'B' channel PutFull address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158487
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158490: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158490, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158498
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:159 assert (bundle.param === 0.U, \"'B' channel PutFull carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158509
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158512: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158512, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158520
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:160 assert (bundle.mask === mask, \"'B' channel PutFull contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158531
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158534: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158534, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158542
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries PutPartial type unsupported by client (connected at tile.scala:183:21)\n    at Monitor.scala:164 assert (edge.client.supportsPutPartial(bundle.source, bundle.size), \"'B' channel carries PutPartial type unsupported by client\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158553
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158556: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158556, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158564
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:165 assert (address_ok, \"'B' channel PutPartial carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158575
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158578: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158578, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158586
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries source that is not first source (connected at tile.scala:183:21)\n    at Monitor.scala:166 assert (legal_source, \"'B' channel PutPartial carries source that is not first source\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158597
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158600: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158600, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158608
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:167 assert (is_aligned, \"'B' channel PutPartial address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158619
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158622: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158622, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158630
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:168 assert (bundle.param === 0.U, \"'B' channel PutPartial carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158641
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_param___05FT_18_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158644: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158644, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158652
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1190))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:169 assert ((bundle.mask & ~mask) === 0.U, \"'B' channel PutPartial contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158663
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1190))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158666: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158666, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158674
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Arithmetic type unsupported by client (connected at tile.scala:183:21)\n    at Monitor.scala:173 assert (edge.client.supportsArithmetic(bundle.source, bundle.size), \"'B' channel carries Arithmetic type unsupported by client\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158685
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158688: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158688, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158696
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:174 assert (address_ok, \"'B' channel Arithmetic carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158707
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158710: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158710, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158718
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic carries source that is not first source (connected at tile.scala:183:21)\n    at Monitor.scala:175 assert (legal_source, \"'B' channel Arithmetic carries source that is not first source\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158729
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158732: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158732, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158740
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:176 assert (is_aligned, \"'B' channel Arithmetic address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158751
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158754: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158754, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158762
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:178 assert (bundle.mask === mask, \"'B' channel Arithmetic contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158773
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158776: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158776, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158784
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Logical type unsupported by client (connected at tile.scala:183:21)\n    at Monitor.scala:182 assert (edge.client.supportsLogical(bundle.source, bundle.size), \"'B' channel carries Logical type unsupported by client\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158795
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158798: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158798, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158806
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:183 assert (address_ok, \"'B' channel Logical carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158817
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158820: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158820, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158828
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical carries source that is not first source (connected at tile.scala:183:21)\n    at Monitor.scala:184 assert (legal_source, \"'B' channel Logical carries source that is not first source\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158839
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158842: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158842, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158850
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:185 assert (is_aligned, \"'B' channel Logical address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158861
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158864: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158864, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158872
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:187 assert (bundle.mask === mask, \"'B' channel Logical contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158883
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158886: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158886, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158894
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Hint type unsupported by client (connected at tile.scala:183:21)\n    at Monitor.scala:191 assert (edge.client.supportsHint(bundle.source, bundle.size), \"'B' channel carries Hint type unsupported by client\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158905
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158908: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158908, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158916
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:192 assert (address_ok, \"'B' channel Hint carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158927
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1103))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158930: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158930, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158938
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint carries source that is not first source (connected at tile.scala:183:21)\n    at Monitor.scala:193 assert (legal_source, \"'B' channel Hint carries source that is not first source\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158949
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158952: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158952, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158960
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:194 assert (is_aligned, \"'B' channel Hint address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158971
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1109))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158974: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158974, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158982
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint contains invalid mask (connected at tile.scala:183:21)\n    at Monitor.scala:195 assert (bundle.mask === mask, \"'B' channel Hint contains invalid mask\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:158993
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1117))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:158996: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 158996, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159004
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
                                [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:196 assert (!bundle.corrupt, \"'B' channel Hint is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159015
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_opcode___05FT_18_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_corrupt
                                [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__value_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159018: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159018, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159026
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:210 assert (address_ok, \"'C' channel ProbeAck carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159037
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159040: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159040, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159048
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:211 assert (source_ok, \"'C' channel ProbeAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159059
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159062: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159062, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159070
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:212 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAck smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159081
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159084: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159084, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159092
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:213 assert (is_aligned, \"'C' channel ProbeAck address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159103
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159106: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159106, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159114
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at tile.scala:183:21)\n    at Monitor.scala:214 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAck carries invalid report param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159125
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159128: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159128, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159136
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:215 assert (!bundle.corrupt, \"'C' channel ProbeAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159147
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159150: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159150, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159158
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:219 assert (address_ok, \"'C' channel ProbeAckData carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159169
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159172: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159172, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159180
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:220 assert (source_ok, \"'C' channel ProbeAckData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159191
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159194: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159194, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159202
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:221 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ProbeAckData smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159213
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159216: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159216, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159224
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:222 assert (is_aligned, \"'C' channel ProbeAckData address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159235
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159238: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159238, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159246
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at tile.scala:183:21)\n    at Monitor.scala:223 assert (TLPermissions.isReport(bundle.param), \"'C' channel ProbeAckData carries invalid report param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159257
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159260: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159260, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159268
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1446))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:227 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries Release type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159279
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1446))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159282: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159282, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159290
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1464))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at tile.scala:183:21)\n    at Monitor.scala:228 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159301
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1464))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159304: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159304, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159312
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:229 assert (source_ok, \"'C' channel Release carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159323
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159326: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159326, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159334
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:230 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel Release smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159345
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159348: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159348, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159356
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:231 assert (is_aligned, \"'C' channel Release address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159367
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159370: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159370, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159378
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at tile.scala:183:21)\n    at Monitor.scala:232 assert (TLPermissions.isShrink(bundle.param), \"'C' channel Release carries invalid shrink param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159389
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159392: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159392, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159400
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:233 assert (!bundle.corrupt, \"'C' channel Release is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159411
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159414: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159414, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159422
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1446))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at tile.scala:183:21)\n    at Monitor.scala:237 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'C' channel carries ReleaseData type unsupported by manager\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159433
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1446))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159436: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159436, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159444
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1464))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at tile.scala:183:21)\n    at Monitor.scala:238 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'C' channel carries Release from a client which does not support Probe\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159455
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1464))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159458: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159458, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159466
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:239 assert (source_ok, \"'C' channel ReleaseData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159477
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159480: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159480, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159488
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at tile.scala:183:21)\n    at Monitor.scala:240 assert (bundle.size >= log2Ceil(edge.manager.beatBytes).U, \"'C' channel ReleaseData smaller than a beat\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159499
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                               >> 3U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159502: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159502, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159510
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:241 assert (is_aligned, \"'C' channel ReleaseData address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159521
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159524: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159524, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159532
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at tile.scala:183:21)\n    at Monitor.scala:242 assert (TLPermissions.isShrink(bundle.param), \"'C' channel ReleaseData carries invalid shrink param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159543
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159546: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159546, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159554
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:246 assert (address_ok, \"'C' channel AccessAck carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159565
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159568: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159568, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159576
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:247 assert (source_ok, \"'C' channel AccessAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159587
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159590: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159590, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159598
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:248 assert (is_aligned, \"'C' channel AccessAck address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159609
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159612: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159612, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159620
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:249 assert (bundle.param === 0.U, \"'C' channel AccessAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159631
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159634: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159634, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159642
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:250 assert (!bundle.corrupt, \"'C' channel AccessAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159653
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159656: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159656, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159664
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:254 assert (address_ok, \"'C' channel AccessAckData carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159675
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159678: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159678, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159686
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:255 assert (source_ok, \"'C' channel AccessAckData carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159697
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159700: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159700, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159708
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:256 assert (is_aligned, \"'C' channel AccessAckData address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159719
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159722: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159722, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159730
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:257 assert (bundle.param === 0.U, \"'C' channel AccessAckData carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159741
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159744: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159744, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159752
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at tile.scala:183:21)\n    at Monitor.scala:261 assert (address_ok, \"'C' channel HintAck carries unmanaged address\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159763
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1353))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159766: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159766, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159774
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at tile.scala:183:21)\n    at Monitor.scala:262 assert (source_ok, \"'C' channel HintAck carries invalid source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159785
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1356))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159788: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159788, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159796
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at tile.scala:183:21)\n    at Monitor.scala:263 assert (is_aligned, \"'C' channel HintAck address not aligned to size\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159807
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1363))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159810: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159810, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159818
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at tile.scala:183:21)\n    at Monitor.scala:264 assert (bundle.param === 0.U, \"'C' channel HintAck carries invalid param\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159829
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                             >> 7U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159832: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159832, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159840
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at tile.scala:183:21)\n    at Monitor.scala:265 assert (!bundle.corrupt, \"'C' channel HintAck is corrupt\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159851
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[3U] 
                                          >> 0xaU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_962[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159854: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159854, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159862
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1656))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:357 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159873
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1656))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159876: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159876, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159884
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1660))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:358 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159895
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1660))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159898: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159898, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159906
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1664))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:359 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159917
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1664))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159920: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159920, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159928
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1668))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:360 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159939
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1668))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159942: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159942, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159950
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1672))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:361 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159961
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1636))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1672))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159964: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159964, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159972
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1705))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:427 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159983
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1705))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:159986: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 159986, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:159994
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1709))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:428 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160005
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1709))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160008: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160008, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160016
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1713))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:429 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160027
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1713))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160030: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160030, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160038
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1717))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:430 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160049
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1717))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160052: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160052, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160060
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1721))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:431 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160071
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1721))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160074: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160074, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160082
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1725))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:432 assert (d.bits.denied === denied, \"'D' channel denied changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160093
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1725))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160096: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160096, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160104
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1758))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel opcode changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:380 assert (b.bits.opcode === opcode, \"'B' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160115
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1758))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160118: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160118, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160126
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1762))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:381 assert (b.bits.param  === param,  \"'B' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160137
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1762))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160140: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160140, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160148
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1766))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel size changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:382 assert (b.bits.size   === size,   \"'B' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160159
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1766))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160162: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160162, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160170
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1770))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel source changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:383 assert (b.bits.source === source, \"'B' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160181
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1770))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160184: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160184, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160192
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1774))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:384 assert (b.bits.address=== address,\"'B' channel addresss changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160203
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1738))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1774))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160206: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160206, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160214
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1806))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:403 assert (c.bits.opcode === opcode, \"'C' channel opcode changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160225
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1806))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160228: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160228, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160236
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1810))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:404 assert (c.bits.param  === param,  \"'C' channel param changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160247
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1810))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160250: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160250, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160258
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1814))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:405 assert (c.bits.size   === size,   \"'C' channel size changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160269
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1814))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160272: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160272, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160280
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1818))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:406 assert (c.bits.source === source, \"'C' channel source changed within multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160291
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1818))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160294: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160294, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160302
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1822))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at tile.scala:183:21)\n    at Monitor.scala:407 assert (c.bits.address=== address,\"'C' channel address changed with multibeat operation\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160313
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1786))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1822))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160316: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160316, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160324
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1627) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1836))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1875))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at tile.scala:183:21)\n    at Monitor.scala:462 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160335
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1627) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1836))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1875))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160338: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160338, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160346
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1676) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1855))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1889))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at tile.scala:183:21)\n    at Monitor.scala:469 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160357
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1676) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1855))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1889))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160360: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160360, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160368
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1896))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at tile.scala:183:21)\n    at Monitor.scala:473 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160379
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1896))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160382: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160382, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160390
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1909))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at tile.scala:183:21)\n    at Monitor.scala:481 assert (!inflight.orR || limit === 0.U || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160401
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1909))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160404: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160404, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160412
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1676) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1925))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1949))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at tile.scala:183:21)\n    at Monitor.scala:496 assert(!inflight(bundle.d.bits.sink), \"'D' channel re-used a sink ID\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160423
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1676) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1925))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1949))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160426: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160426, "");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160434
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1960))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at tile.scala:183:21)\n    at Monitor.scala:502 assert((d_set | inflight)(bundle.e.bits.sink), \"'E' channel acknowledged for nothing inflight\" + extra)\n");
        }
    }
    if (
        // $c function at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v:160445
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1960))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.SmallBoomConfig.top.v:160448: Assertion failed in %NTestHarness.top.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/chipyard.TestHarness.SmallBoomConfig.top.v", 160448, "");
        }
    }
}
