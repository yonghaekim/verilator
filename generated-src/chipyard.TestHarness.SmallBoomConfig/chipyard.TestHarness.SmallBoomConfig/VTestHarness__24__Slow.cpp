// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

void VTestHarness::_settle__TOP__5773(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5773\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_570 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_561) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_562));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_47 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_d_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_55)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_640 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_1_d_ready) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_55));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_47 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_d_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_640 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_d_ready) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_47 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_d_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_55)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_640 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_d_ready) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_55));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_143 
        = ((0x8fU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x6f72746e6f632d65)
            : ((0x8eU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x6863616301000000)
                : ((0x8dU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x8001000000000000)
                    : ((0x8cU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x300000000737562)
                        : ((0x8bU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x2d656c706d697300)
                            : ((0x8aU == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x636f732d6e776f6e)
                                : ((0x89U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x6b6e752d70696863)
                                    : ((0x88U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x74656b636f722c73)
                                        : ((0x87U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x7069686365657266)
                                            : ((0x86U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x1b0000002c000000)
                                                : (
                                                   (0x85U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x300000001000000)
                                                    : 
                                                   ((0x84U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0xf00000004000000)
                                                     : 
                                                    ((0x83U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x300000001000000)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_130)))))))))))));
}

void VTestHarness::_settle__TOP__5774(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5774\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_io_x 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_hellacache_s2_nack)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__traverse)
                         ? 1U : 0U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                        ? 0U : ((0U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state))
                                                 ? 
                                                ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_55)
                                                  ? 
                                                 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_out_bits_valid)
                                                   ? 1U
                                                   : 0U)
                                                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state))
                                                  ? 
                                                 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pte_cache_hit)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state))
                                                    ? 2U
                                                    : 1U))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state))
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__s2_hit)
                                                    ? 1U
                                                    : 4U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_hellacache_s2_xcpt_ae_ld)
                                                     ? 0U
                                                     : 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state))
                                                     ? 0U
                                                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_99 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_295 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_491 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_687 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_883 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1079 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)));
}

void VTestHarness::_settle__TOP__5775(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5775\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1275 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1471 
        = ((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0_io_prv)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_641 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_613) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_hella_wakeup_0)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_17 
        = ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_10) 
                << 1U) | (0x1e0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_10) 
                                    << 5U)))) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT__bitmap1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_861 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820) 
                     - ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
                        & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_849)
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_872)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_849)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_872));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_826 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_823) 
           | (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_823) 
                    << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1099 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1128 
        = ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                     >> 2U)) | (0xc000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                                           << 0xeU)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches 
        = ((0U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1))) 
           & (((0U != (0x7fU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                >> 0xeU))) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid))
               ? (0U == (0x7fU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                  >> 0xeU))) : ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                                     >> 7U)))
                                                 ? 
                                                (0U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                                     >> 7U)))
                                                 : 
                                                (0U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests)))));
}

void VTestHarness::_settle__TOP__5776(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5776\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__queue));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid));
}

void VTestHarness::_settle__TOP__5777(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5777\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_out_uop_iw_state 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_75)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                     ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8)
                              ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5)
                                       ? 1U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_140 
        = ((VL_ULL(0xf0f0f0f0f0f0f0f) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_130 
                                         >> 4U)) | 
           (VL_ULL(0xf0f0f0f0f0f0f0f0) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_130 
                                          << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___GEN_48 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_valid) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_enq))
            ? ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_val 
                & (~ (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_sdq_id)) 
                      & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__wen)) 
                           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_valid)) 
                          & ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd)) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                              | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                             | (((((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd)) 
                                   | (9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                                  | (0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                                 | (0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                                | (((((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd)) 
                                      | (0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                                     | (0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                                    | (0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))) 
                                   | (0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_uop_mem_cmd))))))
                          ? 0x1ffffU : 0U)))) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_448 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_enq)
                                                     ? 0x1ffffU
                                                     : 0U)))
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_val);
}

void VTestHarness::_settle__TOP__5778(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5778\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3158[3];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_store_failed 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0) 
             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_nack_0)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_send_nack_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_stq));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0) 
             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_send_nack_0)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_680))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_676)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_654 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_send_resp_0) 
                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_send_nack_0))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_send_resp_0));
    __Vtemp3158[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC) 
                                                                | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
                                                                ? 0xe00U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                               ? 0xc31U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                              ? 0x400U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x200U
                                                             : 0U))) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                           ? 0x3ceU
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                          ? 0xbffU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                         ? 0xc00U
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                        ? 0xe00U
                                                        : 0U))))) 
                                << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                             & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)) 
                                                  | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
                                                  ? 
                                                 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? VL_ULL(0x8000000000000)
                                                   : VL_ULL(0))
                                                  : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186) 
                                                | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? VL_ULL(0xfffffffffffff)
                                                    : VL_ULL(0))))));
    __Vtemp3158[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
                                                            & (~ 
                                                               (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC) 
                                                                 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
                                                                 ? 0xe00U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                ? 0xc31U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                               ? 0x400U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                              ? 0x200U
                                                              : 0U))) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                            ? 0x3ceU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                           ? 0xbffU
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                          ? 0xc00U
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                         ? 0xe00U
                                                         : 0U))))) 
                                 << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                              & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)) 
                                                   | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                    ? VL_ULL(0x8000000000000)
                                                    : VL_ULL(0))
                                                   : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                     ? VL_ULL(0xfffffffffffff)
                                                     : VL_ULL(0))))) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[0U] 
        = __Vtemp3158[0U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U] 
        = __Vtemp3158[1U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U] 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC));
}

void VTestHarness::_settle__TOP__5779(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5779\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
        = ((0x1fc0000U & (((0x40000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A)
                            ? ((IData)(1U) + (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
                                              >> 0x12U))
                            : (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
                               >> 0x12U)) << 0x12U)) 
           | (0x3ffffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_jr_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_2)
                              ? 2U : 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_jr_valid 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_0) 
             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_2)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_193) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_171))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_434 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_213) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_predictions 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_213) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd_io_resp_bits_takens));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_has_jal 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_0) 
             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_224 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_3) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_2) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_1) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_33 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_0) 
             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_valid) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_4)
                ? (~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_185) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_171)))
                       : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                           ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_136) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_122)))
                           : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_91) 
                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_78))
                               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_43) 
                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask))))))
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_type))
                    ? (~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_3)
                           : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_2)
                               : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_1)
                                   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_0)))))
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_type))
                        ? (~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_193) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_171)))
                               : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                                   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_144) 
                                      & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_122)))
                                   : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_99) 
                                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_78))
                                       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_51) 
                                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask))))))
                        : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_type)) 
                           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_taken))))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_4)
                  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_target
                       : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                           ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_target
                           : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_target
                               : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_io_target))) 
                     != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_target)
                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_type)) 
                     & (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                          ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_target
                          : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_target
                              : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                                  ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_target
                                  : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_io_target))) 
                        != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_target)))));
}

void VTestHarness::_settle__TOP__5780(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5780\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_24 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_3) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_2) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_1) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_20) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__will_be_valid_8));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__num_available 
        = (0xfU & ((7U & ((3U & ((1U & ((~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__state)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_grant) 
                                                  & ((1U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__state)) 
                                                     | (((2U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__state)) 
                                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p1)) 
                                                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p2))))))) 
                                        & (~ (((0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__state))
                                                ? 1U
                                                : 0U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1_io_will_be_valid))))) 
                                 + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1_io_will_be_valid)) 
                                           | ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__state))
                                               ? 1U
                                               : 0U)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_5) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_will_be_valid))))))) 
                          + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_will_be_valid)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_5)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_7) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_will_be_valid))))) 
                                   + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_7)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_9) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_will_be_valid))))))))) 
                   + (7U & ((3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_will_be_valid)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_9)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_11) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_will_be_valid))))) 
                                   + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_11)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_13) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_will_be_valid))))))) 
                            + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_13)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_will_be_valid))))) 
                                     + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_will_be_valid)) 
                                               | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__will_be_valid_8)))))))))));
}

void VTestHarness::_settle__TOP__5781(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5781\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__will_be_valid_8));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_20) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__will_be_valid_8));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4565 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mie 
            & (~ (VL_ULL(0x222) & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mideleg))) 
           | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4532);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_1296 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_1281) 
                         | (0x7e1U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    >> 0xeU))))) 
                        | (0x7e2U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                 << 0x12U) 
                                                | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                   >> 0xeU))))) 
                       | (0x7e3U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                << 0x12U) 
                                               | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  >> 0xeU))))) 
                      | (0x7e4U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                               << 0x12U) 
                                              | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                 >> 0xeU))))) 
                     | (0x7e5U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                              << 0x12U) 
                                             | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                >> 0xeU))))) 
                    | (0x7e6U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                             << 0x12U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                               >> 0xeU))))) 
                   | (0x7e7U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                            << 0x12U) 
                                           | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              >> 0xeU))))) 
                  | (0x7e8U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                           << 0x12U) 
                                          | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                             >> 0xeU))))) 
                 | (0x7e9U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                          << 0x12U) 
                                         | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                            >> 0xeU))))) 
                | (0x7eaU == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                         << 0x12U) 
                                        | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                           >> 0xeU))))) 
               | (0x7ebU == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                        << 0x12U) | 
                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                        >> 0xeU))))) 
              | (0x7ecU == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                       << 0x12U) | 
                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                       >> 0xeU))))) 
             | (0x7edU == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                      << 0x12U) | (
                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                   >> 0xeU))))) 
            | (0x7eeU == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                     << 0x12U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  >> 0xeU))))) 
           | (0x7efU == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                    << 0x12U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                 >> 0xeU)))));
}

void VTestHarness::_settle__TOP__5782(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5782\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_bits_source 
        = ((2U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U])
            ? (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                              >> 4U))) << 2U) | (((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_254) 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_258) 
                                                       >> 1U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_260 
        = (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_254) 
                          >> 2U))) << 1U) | (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_258) 
                                                   >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)));
}

void VTestHarness::_settle__TOP__5783(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5783\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_6) 
           != ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__flushOutValid)) 
               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_5 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T) 
            | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_19) 
               & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                  >> 4U))) & (~ ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
                                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T) 
                                           | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                                              >> 0x1eU))))
                                  ? ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_7) 
                                         << 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_7))
                                  : 0U)));
}

void VTestHarness::_settle__TOP__5784(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5784\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1813 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1801)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1813 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1801)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1813 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1801)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1271 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1259)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1322 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1310)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1271 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1259)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1780 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1780 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1780 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1238 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1289 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1238 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
}

void VTestHarness::_settle__TOP__5785(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5785\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address 
        = (0xfffffffU & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_60);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
            & (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_param)
                             : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U] 
                                 << 0xbU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                                             >> 0x15U)))))) 
           | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_153 
        = ((0xe000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way)
                         : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                             << 0x1aU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                                          >> 6U))) 
                       << 0xdU)) | ((0x1ff8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set)
                                                  : 
                                                 ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                                                     >> 0xcU))) 
                                                << 3U)) 
                                    | (7U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_offset) 
                                              >> 3U) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_offset) 
                  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___GEN_9 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_26) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_26));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1062 
        = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[0U] 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__may_pop));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1049 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1045) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1045)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_547 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_544) 
           | (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_544) 
                       << 2U)));
}

void VTestHarness::_settle__TOP__5786(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5786\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_701 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_649) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_657)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_16 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_649) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_731))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
            ? (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_698 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_646) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_654)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_646) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_728))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
            ? (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_698 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_646) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_654)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_646) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_728))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
            ? (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_source___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_692 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_648)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_722))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? (0xffffU & ((IData)(1U) << 
                                    (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
                                             [0U] >> 4U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_6) 
           != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_d_ready) 
               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1)));
}

void VTestHarness::_settle__TOP__5787(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5787\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp3159[8];
    WData/*255:0*/ __Vtemp3160[8];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_686 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_634) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_642)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_605 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_561)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_552 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_513)));
    __Vtemp3159[0U] = 1U;
    __Vtemp3159[1U] = 0U;
    __Vtemp3159[2U] = 0U;
    __Vtemp3159[3U] = 0U;
    __Vtemp3159[4U] = 0U;
    __Vtemp3159[5U] = 0U;
    __Vtemp3159[6U] = 0U;
    __Vtemp3159[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3160, __Vtemp3159, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_504) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_616)))
            ? __Vtemp3160[7U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT___T_5 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_a_valid)) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_97)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_585 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_6_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_374 
        = ((0U == (0x46010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_enq_ready));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_571 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_570) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_563));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_692 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_648)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_722)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
                                                  [0U] 
                                                  >> 6U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_6) 
           != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready) 
               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1));
}

void VTestHarness::_settle__TOP__5788(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5788\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_721 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_692 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_648)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_692 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_640) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_648)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_700 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_156 
        = ((0x9cU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x1b0000001d000000)
            : ((0x9bU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x300000093010000)
                : ((0x9aU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x3000000)
                    : ((0x99U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x80066000000) : (
                                                   (0x98U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x400000003000000)
                                                    : 
                                                   ((0x97U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x4000059000000)
                                                     : 
                                                    ((0x96U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x400000003000000)
                                                      : 
                                                     ((0x95U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 3U)))
                                                       ? VL_ULL(0x200000087010000)
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 3U)))
                                                        ? VL_ULL(0x400000003000000)
                                                        : 
                                                       ((0x93U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 3U)))
                                                         ? VL_ULL(0x4000000046000000)
                                                         : 
                                                        ((0x92U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                              >> 3U)))
                                                          ? VL_ULL(0x400000003000000)
                                                          : 
                                                         ((0x91U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                               >> 3U)))
                                                           ? VL_ULL(0x30303030)
                                                           : 
                                                          ((0x90U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                                >> 3U)))
                                                            ? VL_ULL(0x3130324072656c6c)
                                                            : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_143)))))))))))));
}

void VTestHarness::_settle__TOP__5789(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5789\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_retry_0) 
             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_607)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_582)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_641));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_21 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_17) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__IDPool__DOT___T_17)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_913 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5)) 
                 & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
                     ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_826))
                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_826)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_695));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1132 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1128) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1128)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue 
        = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[0U] 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
              & ((1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                         >> 0xeU) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
                  ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                        >> 0xeU)) : ((0x80U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)
                                      ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                            >> 7U))
                                      : (~ vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)))));
}

void VTestHarness::_settle__TOP__5790(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5790\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
               >> 1U) & ((1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                 >> 0xfU) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
                          ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0xfU)) : ((0x100U 
                                              & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)
                                              ? (~ 
                                                 (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                  >> 8U))
                                              : (~ 
                                                 (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                  >> 1U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
               >> 2U) & ((1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                 >> 0x10U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
                          ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x10U)) : ((0x200U 
                                               & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)
                                               ? (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 9U))
                                               : (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
               >> 3U) & ((1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                 >> 0x11U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
                          ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x11U)) : ((0x400U 
                                               & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)
                                               ? (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 0xaU))
                                               : (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 3U))))));
}

void VTestHarness::_settle__TOP__5791(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5791\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
               >> 4U) & ((1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                 >> 0x12U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
                          ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x12U)) : ((0x800U 
                                               & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)
                                               ? (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 0xbU))
                                               : (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 4U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
               >> 5U) & ((1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                 >> 0x13U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
                          ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x13U)) : ((0x1000U 
                                               & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)
                                               ? (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 0xcU))
                                               : (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 5U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
               >> 6U) & ((1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                 >> 0x14U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)))
                          ? (~ (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x14U)) : ((0x2000U 
                                               & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid)
                                               ? (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 0xdU))
                                               : (~ 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                                   >> 6U))))));
}

void VTestHarness::_settle__TOP__5792(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5792\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_6) 
           != (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                           & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg))) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_6) 
           != (0x7fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                              >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_6) 
           != (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                              >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_6) 
           != (0x1fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                              >> 3U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_6) 
           != (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 4U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_6) 
           != (0x7ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 5U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_6) 
           != (0x3ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 6U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___T_1))));
}

void VTestHarness::_settle__TOP__5793(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5793\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_6) 
           != (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 7U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_6) 
           != (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                         & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                            >> 8U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_6) 
           != (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_190) 
                         & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                            >> 9U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_6) 
           != (0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                            & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg))) 
                           & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_6) 
           != (0x7fffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_6) 
           != (0x3fffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                               >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_6) 
           != (0x1fffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                               >> 3U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___T_1))));
}

void VTestHarness::_settle__TOP__5794(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5794\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_6) 
           != (0xfffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 4U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_6) 
           != (0x7ffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 5U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_6) 
           != (0x3ffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 6U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_6) 
           != (0x1ffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 7U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_6) 
           != (0xffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                             >> 8U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_6) 
           != (0x7fU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT___T_62) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                             >> 9U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_150 
        = ((VL_ULL(0x3333333333333333) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_140 
                                          >> 2U)) | 
           (VL_ULL(0xcccccccccccccccc) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_140 
                                          << 2U)));
}

void VTestHarness::_settle__TOP__5795(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5795\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5240 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_1059 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
                     & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_type)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591487 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2344 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_executed)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
                     & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)) 
                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_execute_ignore)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2260 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_executed)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
                     & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)) 
                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_execute_ignore)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2176 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_executed)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
                     & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)) 
                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_execute_ignore)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2092 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_executed)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
                     & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)) 
                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_execute_ignore)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2008 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_executed)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
                     & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)) 
                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_execute_ignore)));
}

void VTestHarness::_settle__TOP__5798(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5798\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_stq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_stq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_resp_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_stq_idx)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_resp_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_stq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_resp_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_ldq_idx)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_resp_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_ldq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
              : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb__DOT___T) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0_io_resp_valid))) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) 
                  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb_io_out_bits_uop_uses_ldq)) 
                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_is_fuzz_ld)
                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb_io_out_bits_uop_is_fuzz_ld)))))) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_89) 
                 & (0U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask) 
                           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_br_mask)
                               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_resp_valid)
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_br_mask)
                                   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_resp_valid)
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_br_mask)
                                       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_br_mask)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb_io_out_bits_uop_uses_ldq));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_stq 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_stq)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_resp_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_uses_stq)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_resp_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_uses_stq)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_uses_stq))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_st 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_is_fuzz_st)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_resp_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_is_fuzz_st)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_resp_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_is_fuzz_st)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_is_fuzz_st))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_ld 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_is_fuzz_ld)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb_io_out_bits_uop_is_fuzz_ld));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_404 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PA)
                       ? (0x7fffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                     >> 0xaU)) : (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                                  >> 9U)));
}

void VTestHarness::_settle__TOP__5799(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5799\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_39 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
            | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
            ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A
                : (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                              >> 9U))) : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA))
            ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
               << 1U) : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A4_div 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
            & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
               >> 0x14U)) ? (0x3fffU & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                           >> 0xbU)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
            & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
               >> 0x13U)) ? (0x7fffU & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                           >> 0xaU)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_may_redirect_next 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_263) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_bpd_type)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_taken) 
                 & ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__fsm_state)) 
                    & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_predictions))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_265 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__fsm_state)) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_predictions)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_br_idx 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_predictions))
            ? 0U : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_predictions))
                     ? 1U : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_predictions))
                              ? 2U : 3U)));
}

void VTestHarness::_settle__TOP__5800(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5800\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_jal_idx 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_224))
            ? 0U : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_224))
                     ? 1U : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_224))
                              ? 2U : 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__btb_was_wrong 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_valid) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_19) 
              | (~ ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
                        >> 3U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                                   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
                                      >> 2U) : ((1U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))
                                                 ? 
                                                ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
                                                 >> 1U)
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask)))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_30 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_24))
            ? 1U : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_24))
                     ? 2U : 3U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_p1_poisoned 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_p2_poisoned 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_prs2));
}

void VTestHarness::_settle__TOP__5801(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5801\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_p1_poisoned 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p1_poisoned));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_p2_poisoned 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p2_poisoned));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_1316 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_933) 
                   | (~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_1296) 
                            | (0x7f0U == (0xfffU & 
                                          ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                            << 0x12U) 
                                           | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              >> 0xeU))))) 
                           | (0xf13U == (0xfffU & (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                      >> 0xeU))))) 
                          | (0xf12U == (0xfffU & ((
                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                     >> 0xeU))))) 
                         | (0xf11U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    >> 0xeU))))))) 
                  | ((0x180U == (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                            << 0x12U) 
                                           | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              >> 0xeU)))) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_904)))) 
                 | ((((0xc00U <= (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                             << 0x12U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                               >> 0xeU)))) 
                      & (0xc20U > (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                              << 0x12U) 
                                             | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                >> 0xeU))))) 
                     | ((0xc80U <= (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                               << 0x12U) 
                                              | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                 >> 0xeU)))) 
                        & (0xca0U > (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                << 0x12U) 
                                               | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  >> 0xeU)))))) 
                    & (~ (((1U < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                           | ((0x1fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mcounteren) 
                              >> (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                            << 0x12U) 
                                           | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              >> 0xeU))))) 
                          & ((1U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                             | ((0x1fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_scounteren) 
                                >> (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                              << 0x12U) 
                                             | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                >> 0xeU))))))))));
}

void VTestHarness::_settle__TOP__5802(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5802\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_req_bits_sink 
        = (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                          >> 4U))) << 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_260));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1828 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1780) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1789)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1828 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1780) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1789)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1828 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1780) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1789)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1286 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1238) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1247)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1337 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1289) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1298)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1286 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1238) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1247)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1137 
        = (((((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(
                                                   (0x3000U 
                                                    ^ 
                                                    (0x80000000U 
                                                     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address)))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                   & (QData)((IData)(
                                                     (0xc000000U 
                                                      ^ 
                                                      (0x80000000U 
                                                       | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))))) 
                 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                  & (QData)((IData)(
                                                    (0x2000000U 
                                                     ^ 
                                                     (0x80000000U 
                                                      | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))))) 
                | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(
                                                   (0x80000000U 
                                                    | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address)))))) 
               | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                & (QData)((IData)((0x54000000U 
                                                   ^ 
                                                   (0x80000000U 
                                                    | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x2010000U 
                                                  ^ 
                                                  (0x80000000U 
                                                   | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))))) 
             | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                    (0x10000U 
                                                                     ^ 
                                                                     (0x80000000U 
                                                                      | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))))) 
            | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ 
                                                                    (0x80000000U 
                                                                     | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__5804(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5804\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1825 
        = (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address) 
            == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1804) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1825 
        = (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address) 
            == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1804) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1825 
        = (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address) 
            == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1804) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1283 
        = (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address) 
            == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1262) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1334 
        = (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address) 
            == vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1313) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1283 
        = (((0x80000000U | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address) 
            == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1262) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)
            ? ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
               | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant))
            : (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass 
        = ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way) 
                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_beat) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_retires)) 
            | ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set) 
                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way) 
                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_beat) 
                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires))) 
           | (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way) 
                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_beat) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full)));
}

void VTestHarness::_settle__TOP__5805(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5805\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__beat)) 
            | ((((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                      != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set))) 
                 & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                        != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                       != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set)))) 
                & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                       != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way))) 
                   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                      != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set)))) 
               & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                      != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set))))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1053 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1049) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1049)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_772 
        = ((((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_15)) 
             != (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_16))) 
            | (0U == (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_15)))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_776 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_702) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_769 
        = ((((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15)) 
             != (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16))) 
            | (0U == (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15)))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__5806(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5806\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp3164[8];
    WData/*255:0*/ __Vtemp3165[8];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_773 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_699) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_769 
        = ((((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15)) 
             != (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16))) 
            | (0U == (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15)))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_773 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_699) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_763 
        = ((((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15)) 
             != (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16))) 
            | (0U == (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15)))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_767 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_693) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_611 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_567)));
    __Vtemp3164[0U] = 1U;
    __Vtemp3164[1U] = 0U;
    __Vtemp3164[2U] = 0U;
    __Vtemp3164[3U] = 0U;
    __Vtemp3164[4U] = 0U;
    __Vtemp3164[5U] = 0U;
    __Vtemp3164[6U] = 0U;
    __Vtemp3164[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3165, __Vtemp3164, 
                  vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_source
                  [0U]);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[1U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[2U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[3U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[4U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[5U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[6U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[7U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_641))) 
            & (6U != vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_opcode
               [0U])) ? __Vtemp3165[7U] : 0U);
}

void VTestHarness::_settle__TOP__5807(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5807\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp3173[5];
    WData/*159:0*/ __Vtemp3174[5];
    WData/*255:0*/ __Vtemp3179[8];
    WData/*255:0*/ __Vtemp3180[8];
    // Body
    __Vtemp3173[0U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0U]);
    __Vtemp3173[1U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[1U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[1U]);
    __Vtemp3173[2U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[2U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[2U]);
    __Vtemp3173[3U] = (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[3U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[3U]);
    __Vtemp3173[4U] = (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[4U] 
                                  | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[4U]));
    VL_SHIFTR_WWI(144,144,8, __Vtemp3174, __Vtemp3173, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_669 
        = (1U & (__Vtemp3174[0U] | (IData)(vlTOPp->reset)));
    __Vtemp3179[0U] = 1U;
    __Vtemp3179[1U] = 0U;
    __Vtemp3179[2U] = 0U;
    __Vtemp3179[3U] = 0U;
    __Vtemp3179[4U] = 0U;
    __Vtemp3179[5U] = 0U;
    __Vtemp3179[6U] = 0U;
    __Vtemp3179[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3180, __Vtemp3179, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[0U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[0U] 
            | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[0U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
                  ? __Vtemp3180[0U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[1U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[1U] 
            | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[1U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
                  ? __Vtemp3180[1U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[2U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[2U] 
            | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[2U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
                  ? __Vtemp3180[2U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[3U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[3U] 
            | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[3U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
                  ? __Vtemp3180[3U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_673[4U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_606[4U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___GEN_15[4U]) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_553) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT__TLMonitor__DOT___T_635)))
                             ? __Vtemp3180[4U] : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT___T_5) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_633 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_585) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_594)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_585) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_697)))
            ? (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_572 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_571) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_564));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_763 
        = ((((0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15)) 
             != (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16))) 
            | (0U == (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15)))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_767 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_693) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_611 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_567)));
}

void VTestHarness::_settle__TOP__5808(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5808\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp3188[8];
    WData/*255:0*/ __Vtemp3189[8];
    WData/*255:0*/ __Vtemp3193[8];
    WData/*255:0*/ __Vtemp3194[8];
    WData/*255:0*/ __Vtemp3198[8];
    WData/*255:0*/ __Vtemp3199[8];
    WData/*255:0*/ __Vtemp3200[8];
    WData/*255:0*/ __Vtemp3201[8];
    WData/*255:0*/ __Vtemp3202[8];
    WData/*255:0*/ __Vtemp3203[8];
    // Body
    __Vtemp3188[0U] = 1U;
    __Vtemp3188[1U] = 0U;
    __Vtemp3188[2U] = 0U;
    __Vtemp3188[3U] = 0U;
    __Vtemp3188[4U] = 0U;
    __Vtemp3188[5U] = 0U;
    __Vtemp3188[6U] = 0U;
    __Vtemp3188[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3189, __Vtemp3188, 
                  (0xffU & (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_extra
                            [0U] >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_559) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_641)))
            ? __Vtemp3189[7U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_722 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_721) 
           & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
           [0U]);
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_808 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_721) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_read
              [0U]));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_611 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_567)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_558 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_519)));
    __Vtemp3193[0U] = 1U;
    __Vtemp3193[1U] = 0U;
    __Vtemp3193[2U] = 0U;
    __Vtemp3193[3U] = 0U;
    __Vtemp3193[4U] = 0U;
    __Vtemp3193[5U] = 0U;
    __Vtemp3193[6U] = 0U;
    __Vtemp3193[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3194, __Vtemp3193, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_622)))
            ? __Vtemp3194[7U] : 0U);
    __Vtemp3198[0U] = 1U;
    __Vtemp3198[1U] = 0U;
    __Vtemp3198[2U] = 0U;
    __Vtemp3198[3U] = 0U;
    __Vtemp3198[4U] = 0U;
    __Vtemp3198[5U] = 0U;
    __Vtemp3198[6U] = 0U;
    __Vtemp3198[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3199, __Vtemp3198, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10876 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3199[3U] >> 0xeU)) & (0U == (0x80U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp3200[0U] = 1U;
    __Vtemp3200[1U] = 0U;
    __Vtemp3200[2U] = 0U;
    __Vtemp3200[3U] = 0U;
    __Vtemp3200[4U] = 0U;
    __Vtemp3200[5U] = 0U;
    __Vtemp3200[6U] = 0U;
    __Vtemp3200[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3201, __Vtemp3200, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10856 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3201[3U] >> 0xaU)) & (0U == (0x80U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp3202[0U] = 1U;
    __Vtemp3202[1U] = 0U;
    __Vtemp3202[2U] = 0U;
    __Vtemp3202[3U] = 0U;
    __Vtemp3202[4U] = 0U;
    __Vtemp3202[5U] = 0U;
    __Vtemp3202[6U] = 0U;
    __Vtemp3202[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3203, __Vtemp3202, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10871 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3203[3U] >> 0xdU)) & (0U == (0x80U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
}

void VTestHarness::_settle__TOP__5809(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5809\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp3204[8];
    WData/*255:0*/ __Vtemp3205[8];
    WData/*255:0*/ __Vtemp3206[8];
    WData/*255:0*/ __Vtemp3207[8];
    WData/*255:0*/ __Vtemp3208[8];
    WData/*255:0*/ __Vtemp3209[8];
    WData/*255:0*/ __Vtemp3210[8];
    WData/*255:0*/ __Vtemp3211[8];
    WData/*255:0*/ __Vtemp3212[8];
    WData/*255:0*/ __Vtemp3213[8];
    WData/*255:0*/ __Vtemp3214[8];
    WData/*255:0*/ __Vtemp3215[8];
    // Body
    __Vtemp3204[0U] = 1U;
    __Vtemp3204[1U] = 0U;
    __Vtemp3204[2U] = 0U;
    __Vtemp3204[3U] = 0U;
    __Vtemp3204[4U] = 0U;
    __Vtemp3204[5U] = 0U;
    __Vtemp3204[6U] = 0U;
    __Vtemp3204[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3205, __Vtemp3204, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10851 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3205[3U] >> 9U)) & (0U == (0x80U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U))));
    __Vtemp3206[0U] = 1U;
    __Vtemp3206[1U] = 0U;
    __Vtemp3206[2U] = 0U;
    __Vtemp3206[3U] = 0U;
    __Vtemp3206[4U] = 0U;
    __Vtemp3206[5U] = 0U;
    __Vtemp3206[6U] = 0U;
    __Vtemp3206[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3207, __Vtemp3206, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10866 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3207[3U] >> 0xcU)) & (0U == (0x80U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp3208[0U] = 1U;
    __Vtemp3208[1U] = 0U;
    __Vtemp3208[2U] = 0U;
    __Vtemp3208[3U] = 0U;
    __Vtemp3208[4U] = 0U;
    __Vtemp3208[5U] = 0U;
    __Vtemp3208[6U] = 0U;
    __Vtemp3208[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3209, __Vtemp3208, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10886 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3209[3U] >> 0x10U)) & (0U == 
                                             (0x80U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U))));
    __Vtemp3210[0U] = 1U;
    __Vtemp3210[1U] = 0U;
    __Vtemp3210[2U] = 0U;
    __Vtemp3210[3U] = 0U;
    __Vtemp3210[4U] = 0U;
    __Vtemp3210[5U] = 0U;
    __Vtemp3210[6U] = 0U;
    __Vtemp3210[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3211, __Vtemp3210, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10846 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3211[3U] >> 8U)) & (0U == (0x80U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U))));
    __Vtemp3212[0U] = 1U;
    __Vtemp3212[1U] = 0U;
    __Vtemp3212[2U] = 0U;
    __Vtemp3212[3U] = 0U;
    __Vtemp3212[4U] = 0U;
    __Vtemp3212[5U] = 0U;
    __Vtemp3212[6U] = 0U;
    __Vtemp3212[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3213, __Vtemp3212, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10861 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3213[3U] >> 0xbU)) & (0U == (0x80U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp3214[0U] = 1U;
    __Vtemp3214[1U] = 0U;
    __Vtemp3214[2U] = 0U;
    __Vtemp3214[3U] = 0U;
    __Vtemp3214[4U] = 0U;
    __Vtemp3214[5U] = 0U;
    __Vtemp3214[6U] = 0U;
    __Vtemp3214[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3215, __Vtemp3214, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_10881 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3215[3U] >> 0xfU)) & (0U == (0x80U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
}

void VTestHarness::_settle__TOP__5810(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5810\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp3216[8];
    WData/*255:0*/ __Vtemp3217[8];
    WData/*255:0*/ __Vtemp3218[8];
    WData/*255:0*/ __Vtemp3219[8];
    WData/*255:0*/ __Vtemp3220[8];
    WData/*255:0*/ __Vtemp3221[8];
    // Body
    __Vtemp3216[0U] = 1U;
    __Vtemp3216[1U] = 0U;
    __Vtemp3216[2U] = 0U;
    __Vtemp3216[3U] = 0U;
    __Vtemp3216[4U] = 0U;
    __Vtemp3216[5U] = 0U;
    __Vtemp3216[6U] = 0U;
    __Vtemp3216[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3217, __Vtemp3216, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13057 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & __Vtemp3217[1U]) & (0U == (0x80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                  >> 3U))));
    __Vtemp3218[0U] = 1U;
    __Vtemp3218[1U] = 0U;
    __Vtemp3218[2U] = 0U;
    __Vtemp3218[3U] = 0U;
    __Vtemp3218[4U] = 0U;
    __Vtemp3218[5U] = 0U;
    __Vtemp3218[6U] = 0U;
    __Vtemp3218[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3219, __Vtemp3218, (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8505));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_13062 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_12894) 
            & (__Vtemp3219[1U] >> 1U)) & (0U == (0x80U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT___T_5 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_repeat));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_591 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_3_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_611 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_559) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_567)));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_558 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_519)));
    __Vtemp3220[0U] = 1U;
    __Vtemp3220[1U] = 0U;
    __Vtemp3220[2U] = 0U;
    __Vtemp3220[3U] = 0U;
    __Vtemp3220[4U] = 0U;
    __Vtemp3220[5U] = 0U;
    __Vtemp3220[6U] = 0U;
    __Vtemp3220[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3221, __Vtemp3220, (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[0U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[1U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[2U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[3U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[4U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[5U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[6U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___GEN_15[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_510) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT__TLMonitor__DOT___T_622)))
            ? __Vtemp3221[7U] : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT___T_5 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_repeat));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_591 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar_auto_out_2_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_379 
        = (((((((0U == (0x46012000U & (0x2000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_5))) 
               | ((0U == (0x44000000U & (0x4000000U 
                                         ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_enq_ready))) 
              | ((0U == (0x46010000U & (0x2000000U 
                                        ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_enq_ready))) 
             | ((0U == (0x46012000U & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)) 
                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_enq_ready))) 
            | ((0U == (0x46012000U & (0x44000000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_5)))) 
           | ((0U == (0x46012000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_enq_ready)));
}

void VTestHarness::_settle__TOP__5811(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5811\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_708 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_700) 
                  & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 0xeU))) 
                     >> 1U)) & (0U == (0x7ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_713 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__clint__DOT___T_700) 
                  & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 0xeU))) 
                     >> 2U)) & (0x7ffU == (0x7ffU & 
                                           (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_169 
        = ((0xa9U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x7000000ab010000)
            : ((0xa8U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x400000003000000)
                : ((0xa7U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x6c6f72746e6f63)
                    : ((0xa6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0xa101000008000000)
                        : ((0xa5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x300000000100000)
                            : ((0xa4U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x1020f010000)
                                : ((0xa3U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x800000003000000)
                                    : ((0xa2U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x2000000fe000000)
                                        : ((0xa1U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x400000003000000)
                                            : ((0xa0U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x65686361)
                                                : (
                                                   (0x9fU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x6300306568636163)
                                                    : 
                                                   ((0x9eU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x65766973756c636e)
                                                     : 
                                                    ((0x9dU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x692c657669666973)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_156)))))))))))));
}

void VTestHarness::_settle__TOP__5812(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5812\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22493 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22486 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22487 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22488 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22489 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22490 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22491 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22492 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1121 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_669 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_641) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_663 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_607) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_666 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_582) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_961 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_913) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_922)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_904 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_695)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_913 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid));
}

void VTestHarness::_settle__TOP__5813(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5813\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp3240[4];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_847 
        = (1U & (((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_854 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_849)) 
                  | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state)) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835))) 
                 | (IData)(vlTOPp->reset)));
    __Vtemp3240[3U] = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
                          ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
                          : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
                         ? ((0xfffff000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_size) 
                                            << 0xcU)) 
                            | ((0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_5_0_bits_source) 
                                               << 8U)) 
                               | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[3U]))
                         : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
                                   ? ((0xfff80000U 
                                       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)
                                            ? (7U & 
                                               (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                >> 0x14U))
                                            : 4U) << 0x13U)) 
                                      | ((0xffff0000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_116)
                                               ? (7U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                     >> 0x11U))
                                               : 0U) 
                                             << 0x10U)) 
                                         | ((0xf000U 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                >> 1U)) 
                                            | ((0xf00U 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                   >> 1U)) 
                                               | (0xffU 
                                                  & vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U])))))
                                   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[0U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
              ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[0U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[0U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[1U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
              ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[1U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[1U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
              ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_4_0_state))
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_877[2U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_835)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_864_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[2U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
        = __Vtemp3240[3U];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1136 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1132) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1132)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue)));
}

void VTestHarness::_settle__TOP__5814(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5814\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1062) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT__out 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn)) 
            | (0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn)))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_adder_out
            : (((QData)((IData)(((0xcU <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn)) 
                                 & (((1U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in1 
                                                    >> 0x3fU))) 
                                     == (1U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in2 
                                                       >> 0x3fU))))
                                     ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_adder_out 
                                                >> 0x3fU))
                                     : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn))
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in2 
                                                    >> 0x3fU))
                                         : (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in1 
                                                    >> 0x3fU))))))) 
                | ((((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn)) 
                     | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn)))
                     ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in1 
                        ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT__in2_inv)
                     : VL_ULL(0)) | (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn)) 
                                      | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn)))
                                      ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in1 
                                         & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in2)
                                      : VL_ULL(0)))) 
               | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_36)
                    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_101[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_101[0U])))
                    : VL_ULL(0)) | ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op_fcn))
                                     ? ((VL_ULL(0x5555555555555555) 
                                         & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_150 
                                            >> 1U)) 
                                        | (VL_ULL(0xaaaaaaaaaaaaaaaa) 
                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_150 
                                              << 1U)))
                                     : VL_ULL(0)))));
}

void VTestHarness::_settle__TOP__5815(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5815\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591488 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591487) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591495 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591487) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_deq 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_ready) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___GEN_15))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_empty))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1077 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_deq 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_ready) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_15))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_empty))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1077 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32403 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_fp_val)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_fp_val)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_fp_val)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_fp_val)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_fp_val)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_fp_val)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_fp_val)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_fp_val))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32384 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_is_amo)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_is_amo)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_is_amo)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_is_amo)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_is_amo)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_is_amo)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_is_amo)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_is_amo))))))));
}

void VTestHarness::_settle__TOP__5818(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5818\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32418 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_execute_ignore)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_execute_ignore)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_execute_ignore)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_execute_ignore)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_execute_ignore)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_execute_ignore)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_execute_ignore)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_execute_ignore))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32399 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_dst_rtype)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_dst_rtype)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_dst_rtype)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_dst_rtype)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_dst_rtype)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_dst_rtype)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_dst_rtype)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_dst_rtype))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5239 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_is_hella));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591542 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591547 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2893 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_stq) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34665 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_ld)
                    ? ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_brq_idx))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_data
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits)
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits);
}

void VTestHarness::_settle__TOP__5821(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5821\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34678 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_ld)
                    ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_brq_idx))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_data
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits)
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits))
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34679 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_ld)
                    ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_brq_idx))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_data
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits)
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits))
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34680 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_ld)
                    ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_brq_idx))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_data
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits)
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits))
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_33947 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_ld)) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_is_fuzz_st)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_stq) 
                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__cache_resp_0_valid)
                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_is_amo)
                     : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_resp_valid)
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_is_amo)
                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_resp_valid)
                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_is_amo)
                             : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_is_amo)))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_38 
        = (0xffffU & ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
                       ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
                          >> 0xaU) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_37 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div))
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt) 
               | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A4_div))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_40 
        = (0x7fffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415) 
                          | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
                         | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
                         ? (((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
                                  ? (0x3fffU & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                                   >> 0xbU)))
                                  : 0U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)) 
                               | ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
                                   ? (0x1ffU & (IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
                                                        >> 0x23U)))
                                   : 0U)) | (0x1ffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A4_div 
                                                        >> 0x23U)))) 
                             | (((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
                                 | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
                                 ? (0x100U | (0xffU 
                                              & (IData)(
                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
                                                         >> 0x2cU))))
                                 : 0U)) | (((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
                                            & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                               >> 0xbU))
                                            ? (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                                  >> 2U))
                                            : 0U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A)));
}

void VTestHarness::_settle__TOP__5822(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5822\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_41 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415) 
            | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
            ? ((((((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
                                      >> 0x2aU))) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)) 
                  | ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
                      ? (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
                                   >> 1U)) : 0U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A4_div)) 
                | ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
                    ? (0x1ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt))
                    : 0U)) | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
                               ? (0x100U | (0xffU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A) 
                                             >> 1U)))
                               : 0U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_266 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_br_idx) 
           < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_24))
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_30));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_53 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_61 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT___T_53 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs1))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs1_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype))));
}

void VTestHarness::_settle__TOP__5823(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5823\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT___T_61 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst) 
               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__next_uop_prs2))) 
           & (0U == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid)
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_bits_lrs2_rtype)
                      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0_io_deq_uop_exception 
        = (1U & ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_io_interrupt) 
                       | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                          >> 1U)) | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U]) 
                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                        >> 3U)) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                                   >> 5U)) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                                              >> 4U)) 
                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                     >> 2U)) | ((((~ ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_117) 
                                        | (0x4063U 
                                           == (0x407fU 
                                               & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                   << 6U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                     >> 0x1aU))))) 
                                       | (3U == (0x405fU 
                                                 & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                     << 6U) 
                                                    | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                       >> 0x1aU))))) 
                                      | (0x33U == (0xfc007077U 
                                                   & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                       << 6U) 
                                                      | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                         >> 0x1aU)))))) 
                                  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_133) 
                                      | (0xe0000053U 
                                         == (0xedf0707fU 
                                             & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                 << 6U) 
                                                | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                   >> 0x1aU))))) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)))) 
                                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__csr_en) 
                                    & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_1316) 
                                         | ((0x410U 
                                             == (0xc50U 
                                                 & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                       >> 0xeU)))) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_debug)))) 
                                        | ((0U == (0x900U 
                                                   & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                         >> 0xeU)))) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)))) 
                                       | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__csr_ren)) 
                                          & (3U == 
                                             (3U & 
                                              ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                << 8U) 
                                               | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  >> 0x18U)))))))) 
                                | (((0x6bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_uopc)) 
                                    | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_csr_cmd))) 
                                   & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_933) 
                                         | ((0x10000000U 
                                             == (0x32200000U 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    << 6U))) 
                                            & (~ ((1U 
                                                   < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                                                  | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw)))))) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_881) 
                                           & (~ ((1U 
                                                  < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                                                 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr)))))) 
                                       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_881) 
                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              >> 0x18U)) 
                                          & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_debug)))) 
                                      | ((0x2000000U 
                                          == (0x42000000U 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                 << 6U))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_904))))))));
}

void VTestHarness::_settle__TOP__5824(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5824\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_last 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter) 
           == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single)
                ? 0U : (7U & (~ (0x3ffU & (((IData)(0x3fU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size)) 
                                           >> 3U))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_latch_bypass)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_6));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_41 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_126) 
                    >> (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_103))) 
                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)
            ? (0xfU & ((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_103))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_bits 
        = (((0U != (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1041 
                             >> 0x10U))) << 4U) | (
                                                   ((0U 
                                                     != 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1045) 
                                                         >> 8U))) 
                                                    << 3U) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1049) 
                                                            >> 4U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1053) 
                                                               >> 2U))) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1053) 
                                                                >> 3U) 
                                                               | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1053) 
                                                                  >> 1U)))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_682 
        = (((0U != (((((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0U] 
                        ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0U]) 
                       | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[1U] 
                          ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[1U])) 
                      | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[2U] 
                         ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[2U])) 
                     | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[3U] 
                        ^ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[3U])) 
                    | ((0xffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[4U]) 
                       ^ (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[4U])))) 
            | (0U == ((((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0U] 
                         | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[1U]) 
                        | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[2U]) 
                       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[3U]) 
                      | (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[4U])))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__5825(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5825\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[0U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[0U] 
            | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[0U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[1U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[1U] 
            | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[1U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[1U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[2U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[2U] 
            | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[2U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[2U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[3U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[3U] 
            | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[3U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[3U]));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_686[4U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612[4U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[4U]) 
                      & (~ vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_16[4U])));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_750 
        = (1U & ((0x1ffU & ((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15) 
                                       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_687))) 
                            >> (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                                        >> 4U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_754 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_687) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_634) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_716)))
                            ? (0xffffU & ((IData)(1U) 
                                          << (0xfU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                                                 >> 4U))))
                            : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_573 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_572) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__out_xbar__DOT___T_565));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_682 
        = (((0U != (((((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U] 
                        ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0U]) 
                       | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U] 
                          ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[1U])) 
                      | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U] 
                         ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[2U])) 
                     | (vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U] 
                        ^ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[3U])) 
                    | ((0xffffU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U]) 
                       ^ (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[4U])))) 
            | (0U == ((((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U] 
                         | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U]) 
                        | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U]) 
                       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U]) 
                      | (0xffffU & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U])))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[0U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[0U] 
            | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[0U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[1U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[1U] 
            | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[1U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[2U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[2U] 
            | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[2U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[3U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[3U] 
            | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U]) 
           & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[3U]));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_686[4U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___T_612[4U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U]) 
                      & (~ vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__TLMonitor__DOT___GEN_16[4U])));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_1 
        = (0x3fU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_722) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_515)) 
                         >> 0xaU)) & (0U == (0x7bf9efU 
                                             & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
                                             [0U]))) 
                    & (0U != (IData)((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_130 
                                      >> 0x20U)))));
}

void VTestHarness::_settle__TOP__5826(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5826\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp3279[5];
    WData/*159:0*/ __Vtemp3280[5];
    WData/*255:0*/ __Vtemp3285[8];
    WData/*255:0*/ __Vtemp3286[8];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__claimer_0 
        = (0xffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_722) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_515)) 
                         >> 8U)) & (0U == (0x7bf9efU 
                                           & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
                                           [0U]))) 
                    & (0U != (IData)((vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_130 
                                      >> 0x20U)))));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_861 
        = (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_808) 
                     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_515)) 
                        >> 0xaU)) & (0U == (0x7bf9efU 
                                            & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
                                            [0U]))));
    vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_851 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_808) 
                     & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT___T_515)) 
                        >> 8U)) & (0U == (0x7bf9efU 
                                          & vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_index
                                          [0U]))));
    __Vtemp3279[0U] = (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[0U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0U]);
    __Vtemp3279[1U] = (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[1U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[1U]);
    __Vtemp3279[2U] = (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[2U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[2U]);
    __Vtemp3279[3U] = (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[3U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[3U]);
    __Vtemp3279[4U] = (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[4U] 
                                  | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[4U]));
    VL_SHIFTR_WWI(144,144,8, __Vtemp3280, __Vtemp3279, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_675 
        = (1U & (__Vtemp3280[0U] | (IData)(vlTOPp->reset)));
    __Vtemp3285[0U] = 1U;
    __Vtemp3285[1U] = 0U;
    __Vtemp3285[2U] = 0U;
    __Vtemp3285[3U] = 0U;
    __Vtemp3285[4U] = 0U;
    __Vtemp3285[5U] = 0U;
    __Vtemp3285[6U] = 0U;
    __Vtemp3285[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp3286, __Vtemp3285, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4293) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[0U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[0U] 
            | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[0U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641)))
                  ? __Vtemp3286[0U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[1U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[1U] 
            | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[1U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641)))
                  ? __Vtemp3286[1U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[2U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[2U] 
            | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[2U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641)))
                  ? __Vtemp3286[2U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[3U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[3U] 
            | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[3U]) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641)))
                  ? __Vtemp3286[3U] : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_679[4U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_612[4U] 
                       | vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___GEN_15[4U]) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_559) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_641)))
                             ? __Vtemp3286[4U] : 0U))));
}
