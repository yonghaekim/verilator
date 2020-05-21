// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

void VTestHarness::_settle__TOP__5888(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5888\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_140 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_137)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_278 
        = (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_valid) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_executed))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_succeeded))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_137)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_144 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_141)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_287 
        = (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_valid) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_executed))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_succeeded))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_141)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
             & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19689))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19686))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_753));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1405 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cmd_amo_logical_0) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__cmd_amo_arithmetic_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__ptw_ae_array_0 
        = ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                              >> 0xbU)) << 6U)) | (
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                                >> 0xbU)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                                                   >> 0xbU)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_1_data_0 
                                                                      >> 0xbU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_0_data_0 
                                                                         >> 0xbU)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_15 
                                                                            >> 0xbU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_11 
                                                                             >> 0xbU)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1218 
        = ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                              >> 0xdU)) << 6U)) | (
                                                   (0x20U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_3_data_0 
                                                                >> 0xdU)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_2_data_0 
                                                                   >> 0xdU)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_1_data_0 
                                                                      >> 0xdU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_entries_0_data_0 
                                                                         >> 0xdU)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_15 
                                                                            >> 0xdU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_11 
                                                                             >> 0xdU)))))))));
}

void VTestHarness::_settle__TOP__5889(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5889\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0 
        = (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__resp_valid_0)
                                            ? (0xfffffU 
                                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_ppn))
                                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0)
                                                ? (
                                                   (0xc0000U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                                                                >> 0x20U)) 
                                                       << 0x12U)) 
                                                   | ((0x3fe00U 
                                                       & ((0xfffffe00U 
                                                           & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_29) 
                                                          | (0xffe00U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                                                                        >> 0xeU))))) 
                                                      | (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_35 
                                                            | (0xfffffU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_data_0 
                                                                          >> 0xeU)))))))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                                           >> 0xcU))))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_6 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_623));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_3 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1499 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_3) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_2) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_1) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__superpage_hits_0_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sector_hits_0_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_405) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_406 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_406 
                                      >> 2U)))));
}

void VTestHarness::_settle__TOP__5890(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5890\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sector_hits_0_1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_412) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_413 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_413 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1035 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_972)) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1042 
        = (1U & ((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1029)
                        ? 1U : 0U)) | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1046 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_972) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15)) 
                 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1029)
                        ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1947 
        = ((((0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_27)) 
             != (0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_28))) 
            | (0U == (0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_27)))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__5891(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5891\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1951 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1877) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_27)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_28))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1940 
        = (1U & ((0x1fU & ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_27) 
                                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1877))) 
                           >> (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_536[2U] 
                                     >> 5U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1947 
        = ((((0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_27)) 
             != (0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_28))) 
            | (0U == (0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_27)))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1951 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1877) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_27)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_28))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1940 
        = (1U & ((0x1fU & ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_27) 
                                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1877))) 
                           >> (7U & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_536[2U] 
                                     >> 5U)))) | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_128 
        = ((0U == (0x7ffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[2U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                                          >> 0x14U)))) 
           & (VL_ULL(0) == (VL_ULL(0xfffffffffffff) 
                            & (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U]))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_209 
        = ((0U == (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                             << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U] 
                                       >> 0x17U)))) 
           & (0U == (0x7fffffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])));
}

void VTestHarness::_settle__TOP__5897(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5897\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_343 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & (1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_dst_rtype)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_610 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_bsy
                        [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx]))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT___T_60 
        = (1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                      & (1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_dst_rtype))) 
                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                        & (1U != (3U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[4U] 
                                         << 0x13U) 
                                        | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[3U] 
                                           >> 0xdU))))))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___GEN_145 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__next_uop_prs1))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__next_uop_prs1))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p1)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___GEN_146 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__next_uop_prs2))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__next_uop_prs2))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p2)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p2))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___GEN_147 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__next_uop_prs3))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__next_uop_prs3))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p3)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p3))));
}

void VTestHarness::_settle__TOP__5898(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5898\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___GEN_145 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__next_uop_prs1))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__next_uop_prs1))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p1)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___GEN_146 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__next_uop_prs2))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__next_uop_prs2))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p2)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p2))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___GEN_147 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__next_uop_prs3))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__next_uop_prs3))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p3)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p3))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___GEN_145 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__next_uop_prs1))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__next_uop_prs1))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__p1)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___GEN_146 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__next_uop_prs2))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__next_uop_prs2))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__p2)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p2))));
}

void VTestHarness::_settle__TOP__5899(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5899\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___GEN_147 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__next_uop_prs3))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__next_uop_prs3))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__p3)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p3))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___GEN_145 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__next_uop_prs1))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__next_uop_prs1))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p1)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__p1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___GEN_146 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__next_uop_prs2))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__next_uop_prs2))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p2)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__p2))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___GEN_147 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__next_uop_prs3))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__next_uop_prs3))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p3)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__p3))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___GEN_145 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__next_uop_prs1))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__next_uop_prs1))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p1))));
}

void VTestHarness::_settle__TOP__5900(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5900\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___GEN_146 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__next_uop_prs2))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__next_uop_prs2))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p2)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p2))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___GEN_147 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__next_uop_prs3))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__next_uop_prs3))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p3)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p3))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___GEN_145 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__next_uop_prs1))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__next_uop_prs1))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p1)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___GEN_146 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__next_uop_prs2))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__next_uop_prs2))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p2)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p2))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___GEN_147 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__next_uop_prs3))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__next_uop_prs3))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p3)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p3))));
}

void VTestHarness::_settle__TOP__5901(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5901\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___GEN_145 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs1))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs1))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___GEN_146 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs2))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs2))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p2)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p2))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___GEN_147 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
            & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                          << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                    >> 0x19U))) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs3))) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__next_uop_prs3))) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p3)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p3))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_349 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_valid)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2908)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32403)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2910)
                                    ? ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_fp_val)
                                        : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_fp_val)
                                            : ((5U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_fp_val)
                                                : (
                                                   (4U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_fp_val)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_fp_val)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_fp_val)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_fp_val)
                                                       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_fp_val))))))))
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32403)))
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue_io_empty)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_2_1_fp_val)
                                : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__value_1))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__uops_4_fp_val)
                                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__value_1))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__uops_3_fp_val)
                                        : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__value_1))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__uops_2_fp_val)
                                            : ((1U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__value_1))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__uops_1_fp_val)
                                                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__uops_0_fp_val)))))))))) 
                 | (IData)(vlTOPp->reset)));
}

void VTestHarness::_settle__TOP__5902(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5902\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__busytable__DOT__busy_table_next 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__busytable__DOT__busy_table 
            & (~ (((VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid)
                       ? VL_ULL(0xffffffffffff) : VL_ULL(0))) 
                  | ((VL_ULL(1) << (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                                              << 7U) 
                                             | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                                >> 0x19U)))) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid)
                         ? VL_ULL(0xffffffffffff) : VL_ULL(0)))))) 
           | ((VL_ULL(1) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_185)) 
              & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT___T_1) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage_io_dis_fire_0))
                  ? VL_ULL(0xffffffffffff) : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___GEN_145 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                                << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                          >> 0x19U))) 
                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs1))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs1))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid)
                        ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_bits_prs1_busy))
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___GEN_146 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                                << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                          >> 0x19U))) 
                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs2))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs2))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid)
                        ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs2_busy))
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p2)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___GEN_147 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[8U] 
                                << 7U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_233[7U] 
                                          >> 0x19U))) 
                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs3))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__next_uop_prs3))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid)
                        ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_prs3_busy))
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p3)))));
}

void VTestHarness::_settle__TOP__5903(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5903\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34601 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6136))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6136))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6136));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34602 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6137))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6137))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6137));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34603 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6138))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6138))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6138));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34604 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6139))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6139))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6139));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34605 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6140))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6140))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6140));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34606 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6141))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6141))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6141));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34607 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6142))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6142))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6142));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_34608 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_uses_ldq)
                ? ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_ldq_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2885)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6143))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6143))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6143));
}

void VTestHarness::_settle__TOP__5904(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5904\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_14147 
        = ((0x15U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_21)
            : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_20)
                : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_19)
                    : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_18)
                        : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_17)
                            : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_16)
                                : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_15)
                                    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_14)
                                        : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_13)
                                            : ((0xcU 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_12)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_1)
                                                              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_0))))))))))))))))))))));
}

void VTestHarness::_settle__TOP__5909(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5909\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_6 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3091)
            ? (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_iresp_bits_uop_ldq_idx))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3092) 
               & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_bits_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3091)
            ? (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_iresp_bits_uop_ldq_idx))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3092) 
               & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_bits_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3091)
            ? (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_iresp_bits_uop_ldq_idx))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3092) 
               & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_bits_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_3 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3091)
            ? (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_iresp_bits_uop_ldq_idx))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3092) 
               & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_bits_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3091)
            ? (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_iresp_bits_uop_ldq_idx))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3092) 
               & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_bits_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3091)
            ? (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_iresp_bits_uop_ldq_idx))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3092) 
               & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_bits_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3091)
            ? (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_iresp_bits_uop_ldq_idx))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3092) 
               & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_exe_0_fresp_bits_uop_ldq_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_overrides_bcheck 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_307) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_req_valid)) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_redirect_cfiidx) 
                 < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_req_cfi_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_req_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_307) 
              | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_req_valid)));
}

void VTestHarness::_settle__TOP__5910(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5910\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__monitor__DOT___GEN_12) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__monitor__DOT__last_cfitype)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_178 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_176) 
                   >> (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_153))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankEn 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankSel) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_176));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_187 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_229) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_need_bs))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_ready 
        = (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires)) 
                   | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full))) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_229)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_need_bs))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_8 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d_io_deq_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d_io_deq_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_uses_directory_for_lb)
            ? ((((((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_set)
                      : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_set)
                                : 0U)) | ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_set)
                                           : 0U)) | 
                  ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_set)
                    : 0U)) | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_set)
                               : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
                                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set)
                                          : 0U)) | 
               ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)
                 : 0U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set));
}

void VTestHarness::_settle__TOP__5912(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5912\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_247 
        = ((0xf7U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x300000000000100)
            : ((0xf6U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x1000f010000)
                : ((0xf5U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x800000003000000)
                    : ((0xf4U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x306d6f722c6576) : 
                       ((0xf3U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))
                         ? VL_ULL(0x696669731b000000)
                         : ((0xf2U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                             ? VL_ULL(0xc00000003000000)
                             : ((0xf1U == (0x1ffU & 
                                           (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                                 ? VL_ULL(0x3030303031)
                                 : ((0xf0U == (0x1ffU 
                                               & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                  >> 3U)))
                                     ? VL_ULL(0x406d6f7201000000)
                                     : ((0xefU == (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                         ? VL_ULL(0x200000004000000)
                                         : ((0xeeU 
                                             == (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                             ? VL_ULL(0x7801000004000000)
                                             : ((0xedU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                                 ? VL_ULL(0x300000001000000)
                                                 : 
                                                ((0xecU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                                  ? VL_ULL(0xe401000004000000)
                                                  : 
                                                 ((0xebU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 3U)))
                                                   ? VL_ULL(0x300000001000000)
                                                   : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_234)))))))))))));
}

void VTestHarness::_settle__TOP__5913(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5913\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591361 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591378 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
             & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19689))) 
            & ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_committed)
                : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_committed)
                    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_committed)
                        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_committed)
                            : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_committed)
                                : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_committed)
                                    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_committed)
                                        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_committed)
                                            : ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_committed)
                                                : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_committed)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_committed)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_committed)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_committed)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_committed)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_committed)
                                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_committed))))))))))))))))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_753) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0))));
}

void VTestHarness::_settle__TOP__5919(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5919\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hits_0 
        = ((0x80U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0)) 
                     << 7U)) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_6) 
                                 << 6U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_5) 
                                            << 5U) 
                                           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_4) 
                                               << 4U) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_3) 
                                                  << 3U) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_2) 
                                                     << 2U) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_1) 
                                                        << 1U) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_0))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_6) 
            << 6U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_5) 
                       << 5U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_4) 
                                  << 4U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_3) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_2) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_1) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__hitsVec_0_0)))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_199 
        = ((0x400000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
            ? 0U : ((0x200000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                     ? 1U : ((0x100000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                              ? 2U : ((0x80000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                       ? 3U : ((0x40000U 
                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                ? 4U
                                                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_194))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_101 
        = ((4U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
            ? 0x11U : ((2U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                        ? 0x12U : ((1U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                    ? 0x13U : ((0x80000000U 
                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                ? 0x14U
                                                : (
                                                   (0x40000000U 
                                                    & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                    ? 0x15U
                                                    : 
                                                   ((0x20000000U 
                                                     & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                     ? 0x16U
                                                     : 
                                                    ((0x10000000U 
                                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                      ? 0x17U
                                                      : 
                                                     ((0x8000000U 
                                                       & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                       ? 0x18U
                                                       : 
                                                      ((0x4000000U 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                        ? 0x19U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                         ? 0x1aU
                                                         : 
                                                        ((0x1000000U 
                                                          & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                          ? 0x1bU
                                                          : 
                                                         ((0x800000U 
                                                           & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                           ? 0x1cU
                                                           : 
                                                          ((0x400000U 
                                                            & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                            ? 0x1dU
                                                            : 
                                                           ((0x200000U 
                                                             & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                             ? 0x1eU
                                                             : 
                                                            ((0x100000U 
                                                              & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                              ? 0x1fU
                                                              : 
                                                             ((0x80000U 
                                                               & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                               ? 0x20U
                                                               : 
                                                              ((0x40000U 
                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U])
                                                                ? 0x21U
                                                                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_84))))))))))))))))));
}

void VTestHarness::_settle__TOP__5920(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5920\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_601 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & (~ ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_31)
                            : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_30)
                                : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_29)
                                    : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_28)
                                        : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_27)
                                            : ((0x1aU 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_26)
                                                : (
                                                   (0x19U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_25)
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_24)
                                                     : 
                                                    ((0x17U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_23)
                                                      : 
                                                     ((0x16U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_22)
                                                       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_20803)))))))))))))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_616 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
            & ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_ldst_val)
                : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_ldst_val)
                    : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_ldst_val)
                        : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_ldst_val)
                            : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_ldst_val)
                                : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_ldst_val)
                                    : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_ldst_val)
                                        : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_ldst_val)
                                            : ((0x17U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_ldst_val)
                                                : (
                                                   (0x16U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_ldst_val)
                                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_23021)))))))))))) 
           & (((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_31_pdst)
                : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_30_pdst)
                    : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_29_pdst)
                        : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_28_pdst)
                            : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_27_pdst)
                                : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_26_pdst)
                                    : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_25_pdst)
                                        : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_24_pdst)
                                            : ((0x17U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_23_pdst)
                                                : (
                                                   (0x16U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_rob_idx))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_uop_22_pdst)
                                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_22991))))))))))) 
              != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst)));
}

void VTestHarness::_settle__TOP__5934(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5934\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1819 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_succeeded) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1809 
        = (0xffU & ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__do_st_search_0) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_valid)) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_valid)) 
                        & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1799) 
                            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_succeeded)) 
                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_1))) 
                       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_virtual))) 
                      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_st_dep_mask) 
                         >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_stq_idx_0))) 
                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1783)) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1785))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1735 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_succeeded) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1725 
        = (0xffU & ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__do_st_search_0) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_valid)) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_valid)) 
                        & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1715) 
                            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_succeeded)) 
                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__succeeding_loads_0))) 
                       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual))) 
                      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_st_dep_mask) 
                         >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_stq_idx_0))) 
                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1699)) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1701))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_349 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_br_idx)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_overrides_bcheck));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_359 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_br_idx)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_overrides_bcheck));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_369 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_br_idx)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_overrides_bcheck));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_379 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_br_idx)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_overrides_bcheck));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_btb_mask 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_valid) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_req_valid)))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_mask)
            : 0xfU);
}

void VTestHarness::_settle__TOP__5935(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5935\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_331 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_req_valid)
             ? 0xfU : 0U) & ((IData)(0x1eU) << ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_overrides_bcheck)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_redirect_cfiidx)
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_req_cfi_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__monitor__DOT___GEN_21) 
           & (2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__monitor__DOT__last_cfitype)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_16 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_178) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_radr_valid)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_block_r));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_266 
        = (1U & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankEn) 
                    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankEn)) 
                   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankEn)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankEn)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_304 
        = (1U & ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankEn) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankEn)) 
                    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankEn)) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankEn)) 
                 >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_342 
        = (1U & ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankEn) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankEn)) 
                    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankEn)) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankEn)) 
                 >> 2U));
}

void VTestHarness::_settle__TOP__5936(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5936\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_380 
        = (1U & ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankEn) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankEn)) 
                    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankEn)) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_4_bankEn)) 
                 >> 3U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__retire 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_187));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_latch 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_ready));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_105 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_ready));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_ready) 
                    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_122))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_8)) 
            | ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_8)) 
               | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T_7)))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT___T));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__alloc_uses_directory 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_alloc_cases));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_alloc_cases) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__queue) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue) 
                 | (VL_ULL(0x1ffffffff) != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_set));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_60_data)));
}

void VTestHarness::_settle__TOP__5937(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5937\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_reload) 
                 & (((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                      | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                         >> 7U)) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                    >> 0xeU)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_889)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_set));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_60_data)));
}

void VTestHarness::_settle__TOP__5938(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5938\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
               >> 1U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_reload) 
                         & ((((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                               >> 1U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                         >> 8U)) | 
                             (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                              >> 0xfU)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_912)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_set));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_60_data)));
}

void VTestHarness::_settle__TOP__5939(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5939\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
               >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_reload) 
                         & ((((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                               >> 2U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                         >> 9U)) | 
                             (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                              >> 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_935)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_set));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
               >> 3U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_reload) 
                         & ((((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                               >> 3U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                         >> 0xaU)) 
                             | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x11U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_958)))));
}

void VTestHarness::_settle__TOP__5940(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5940\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_set));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
               >> 4U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_reload) 
                         & ((((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                               >> 4U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                         >> 0xbU)) 
                             | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x12U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_981)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_set));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_60_data)));
}

void VTestHarness::_settle__TOP__5941(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5941\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_60_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198) 
           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
               >> 5U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_reload) 
                         & ((((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                               >> 5U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                         >> 0xcU)) 
                             | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                >> 0x13U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1004)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_set 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_set)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_set)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2___05FT_60_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_control)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control___05FT_60_data))));
}

void VTestHarness::_settle__TOP__5942(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5942\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_source)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source___05FT_60_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_param)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param___05FT_60_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_opcode)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode___05FT_60_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_bits_tag)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag___05FT_60_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202) 
              | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                  >> 6U) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_reload) 
                            & ((((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                  >> 6U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                            >> 0xdU)) 
                                | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                   >> 0x14U)) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1027))))));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_260 
        = ((0x104U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 3U))) ? VL_ULL(0x800000003000000)
            : ((0x103U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 3U))) ? VL_ULL(0x100000000020000)
                : ((0x102U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 3U))) ? VL_ULL(0x400000003000000)
                    : ((0x101U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))
                        ? VL_ULL(0x4000000ef010000)
                        : ((0x100U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                            ? VL_ULL(0x400000003000000)
                            : ((0xffU == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x30747261)
                                : ((0xfeU == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x752c657669666973)
                                    : ((0xfdU == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x1b0000000d000000)
                                        : ((0xfcU == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x300000000303030)
                                            : ((0xfbU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x3030303435406c61)
                                                : (
                                                   (0xfaU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x6972657301000000)
                                                    : 
                                                   ((0xf9U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x2000000006d656d)
                                                     : 
                                                    ((0xf8U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0xa101000004000000)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_247)))))))))))));
}

void VTestHarness::_settle__TOP__5943(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5943\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591379 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591378) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_823 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit_io_resp_valid) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_814) 
                              | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_std_incoming_0)) 
                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_sfence_0)) 
                            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)) 
                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0))))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23003 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
            ? (((QData)((IData)((0xffU & (IData)(((0xfU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                   ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                         ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                          ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                           ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                             ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                 : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))) 
                << 0x38U) | (((QData)((IData)((0xffU 
                                               & (IData)(
                                                         ((0xfU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                           ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                           : 
                                                          ((0xeU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                             ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                              : 
                                                             ((0xbU 
                                                               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                               : 
                                                              ((0xaU 
                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                                : 
                                                               ((9U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                                 : 
                                                                ((8U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                  ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                                  : 
                                                                 ((7U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                   ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                                   : 
                                                                  ((6U 
                                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                                    : 
                                                                   ((5U 
                                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                                      : 
                                                                     ((3U 
                                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                         ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                         : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       ((0xfU 
                                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                         ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                                         : 
                                                                        ((0xeU 
                                                                          == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                          ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                                          : 
                                                                         ((0xdU 
                                                                           == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                           ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                                           : 
                                                                          ((0xcU 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                                            : 
                                                                           ((0xbU 
                                                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                             ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                                             : 
                                                                            ((0xaU 
                                                                              == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                                              : 
                                                                             ((9U 
                                                                               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                                               : 
                                                                              ((8U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                                                : 
                                                                               ((7U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                                 : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          ((0xfU 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                                            : 
                                                                           ((0xeU 
                                                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                             ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                                             : 
                                                                            ((0xdU 
                                                                              == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                                              : 
                                                                             ((0xcU 
                                                                               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                                               : 
                                                                              ((0xbU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                                                : 
                                                                               ((0xaU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                                                 : 
                                                                                ((9U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                                                 : 
                                                                                ((7U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                                 : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             ((0xfU 
                                                                               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                                               : 
                                                                              ((0xeU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                                                : 
                                                                               ((0xdU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                                                 : 
                                                                                ((0xcU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                                                 : 
                                                                                ((9U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                                                 : 
                                                                                ((7U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                                 : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))) 
                                                  << 0x18U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                ((0xfU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                                                 : 
                                                                                ((0xeU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                                                 : 
                                                                                ((0xdU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                                                 : 
                                                                                ((0xcU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                                                 : 
                                                                                ((9U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                                                 : 
                                                                                ((7U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                                 : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))) 
                                                     << 0x10U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                ((0xfU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                                                 : 
                                                                                ((0xeU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                                                 : 
                                                                                ((0xdU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                                                 : 
                                                                                ((0xcU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                                                 : 
                                                                                ((9U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                                                 : 
                                                                                ((7U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                                 : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                ((0xfU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits
                                                                                 : 
                                                                                ((0xeU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits
                                                                                 : 
                                                                                ((0xdU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits
                                                                                 : 
                                                                                ((0xcU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits
                                                                                 : 
                                                                                ((9U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits
                                                                                 : 
                                                                                ((7U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits
                                                                                 : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits))))))))))))))))))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? VL_ULL(0) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                                ? ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_839))
                                    ? (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                                  << 0x18U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                                     << 0x10U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))))))))))
                                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_839))
                                        ? (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))))))
                                        : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_839))
                                            ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))
                                            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_876)))
                                : VL_ULL(0))));
}

void VTestHarness::_settle__TOP__5945(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5945\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591404 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591378) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23443 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7008)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7008)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7008)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7008)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7008))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7008))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23444 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7009)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7009)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7009)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7009)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7009))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7009))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23445 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7010)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7010)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7010)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7010)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7010))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7010))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23446 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7011)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7011)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7011)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7011)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7011))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7011))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23447 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7012)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7012)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7012)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7012)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7012))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7012))))));
}

void VTestHarness::_settle__TOP__5946(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5946\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23448 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7013)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7013)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7013)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7013)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((5U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7013))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7013))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23449 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7014)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7014)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7014)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7014)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7014))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7014))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23450 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7015)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7015)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7015)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7015)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                            ? ((7U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7015))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_7015))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23426 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9256)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9256)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9256))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9256))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23427 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9257)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9257)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9257))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9257))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23428 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9258)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9258)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9258))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9258))));
}

void VTestHarness::_settle__TOP__5948(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5948\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23436 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9266)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9266)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9266))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9266))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23437 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9267)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9267)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9267))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9267))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23438 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9268)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9268)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9268))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9268))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23439 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9269)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9269)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9269))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9269))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23440 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9270)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9270)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9270))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9270))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23441 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9271)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_load_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9271)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_brq_store_0)
                    ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9271))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_9271))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1469 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1233 
                       & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1226) 
                  | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1233) 
                     & ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                        < (7U & (~ (3U | (~ (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                   << 2U)))))))))));
}

void VTestHarness::_settle__TOP__5949(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5949\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1519 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                                               << 2U)))))))
                  : (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1233) 
                        & (0U != ((~ (3U | (~ (4U & 
                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                << 2U))))) 
                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60)))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_147 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                                               << 2U)))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_57) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_23) 
                           & (0U != ((~ (3U | (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                     << 2U))))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60))))))));
}

void VTestHarness::_settle__TOP__5950(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5950\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_343 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_357 
                                               << 2U)))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_253) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_57) 
                           & (0U != ((~ (3U | (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                     << 2U))))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_539 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_348 
                                               << 2U)))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_449) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_253) 
                           & (0U != ((~ (3U | (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                     << 2U))))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60))))))));
}

void VTestHarness::_settle__TOP__5951(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5951\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_735 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_339 
                                               << 2U)))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_645) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_449) 
                           & (0U != ((~ (3U | (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                     << 2U))))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_931 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_330 
                                               << 2U)))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_841) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_645) 
                           & (0U != ((~ (3U | (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                     << 2U))))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60))))))));
}

void VTestHarness::_settle__TOP__5952(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5952\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1127 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_321 
                                               << 2U)))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1037) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_841) 
                           & (0U != ((~ (3U | (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                     << 2U))))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1323 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
                  ? (0U == (7U & ((~ (0x3fU & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))) 
                                  & (~ (3U | (4U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_312 
                                               << 2U)))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1233) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_1037) 
                           & (0U != ((~ (3U | (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                     << 2U))))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60))))))));
}

void VTestHarness::_settle__TOP__5953(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5953\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_97 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
            ? ((0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_23 
                       & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                             >> 1U)))) & (0U == (7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0) 
                                                     ^ 
                                                     (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                              << 2U)))))) 
                                                    & (~ 
                                                       (3U 
                                                        | ((4U 
                                                            & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                                                               << 2U)) 
                                                           | (~ 
                                                              (0x3fU 
                                                               & ((IData)(7U) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb_io_req_0_bits_size)))))))))))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_50) 
                      | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_57) 
                         & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_60) 
                            < (7U & (~ (3U | (~ (4U 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                    << 2U)))))))))) 
                  & (((0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0 
                                              >> 3U))) 
                      < (0x1fffffffU & (~ ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                               << 2U)) 
                                           >> 3U)))) 
                     | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__pmp_0__DOT___T_23) 
                        & ((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__mpu_physaddr_0)) 
                           < (7U & (~ (3U | (~ (4U 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                   << 2U))))))))))));
}

void VTestHarness::_settle__TOP__5960(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5960\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__tlb_miss_0 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__vm_enabled_0) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__bad_va_0))) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1534 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                  >> 1U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1548 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                  >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                            >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1557 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                  >> 5U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__real_hits_0) 
                            >> 6U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_208 
        = (0x1ffU & (((0U == (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                                        << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U] 
                                                  >> 0x17U))))
                       ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_199))
                       : (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                                    << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U] 
                                              >> 0x17U)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U] 
                                                   << 9U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[0U] 
                                                     >> 0x17U))))
                                  ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_118 
        = ((0x80000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
            ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                     ? 1U : ((0x20000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                              ? 2U : ((0x10000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                       ? 3U : ((0x8000U 
                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                ? 4U
                                                : (
                                                   (0x4000U 
                                                    & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                    ? 5U
                                                    : 
                                                   ((0x2000U 
                                                     & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                     ? 6U
                                                     : 
                                                    ((0x1000U 
                                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                      ? 7U
                                                      : 
                                                     ((0x800U 
                                                       & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                       ? 8U
                                                       : 
                                                      ((0x400U 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                        ? 9U
                                                        : 
                                                       ((0x200U 
                                                         & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                         ? 0xaU
                                                         : 
                                                        ((0x100U 
                                                          & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                          ? 0xbU
                                                          : 
                                                         ((0x80U 
                                                           & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                           ? 0xcU
                                                           : 
                                                          ((0x40U 
                                                            & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                            ? 0xdU
                                                            : 
                                                           ((0x20U 
                                                             & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                             ? 0xeU
                                                             : 
                                                            ((0x10U 
                                                              & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                              ? 0xfU
                                                              : 
                                                             ((8U 
                                                               & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_10[1U])
                                                               ? 0x10U
                                                               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT___T_101))))))))))))))))));
}

void VTestHarness::_settle__TOP__5962(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5962\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit_io_wakeup_ports_0_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_dst_rtype)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_wakeup_ports_0_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_dst_rtype)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state))
             ? 1U : 0U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_8) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_10) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_12) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_14) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_16) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_18) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__num_available 
        = (0xfU & ((7U & ((3U & ((1U & ((~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state)) 
                                            & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_grant) 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state)) 
                                                      | (((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state)) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p1)) 
                                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p2)))) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_10)))))) 
                                        & (~ (((0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state))
                                                ? 1U
                                                : 0U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_will_be_valid))))) 
                                 + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_will_be_valid)) 
                                           | ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state))
                                               ? 1U
                                               : 0U)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_8) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_will_be_valid))))))) 
                          + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_will_be_valid)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_8)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_10) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_will_be_valid))))) 
                                   + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_10)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_12) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_will_be_valid))))))))) 
                   + (7U & ((3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_will_be_valid)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_12)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_14) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_will_be_valid))))) 
                                   + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_14)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_16) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_will_be_valid))))))) 
                            + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_16)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_18) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_will_be_valid))))) 
                                     + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_will_be_valid)) 
                                               | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_18)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_20) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__will_be_valid_8)))))))))));
}

void VTestHarness::_settle__TOP__5963(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5963\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0_io_in_uop_valid 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state))
             ? 1U : 0U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_8) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_10) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_12) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_14) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_16) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_18) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_will_be_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__num_available 
        = (0xfU & ((7U & ((3U & ((1U & ((~ ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state)) 
                                            & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0_io_grant) 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state)) 
                                                      | (((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state)) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__p1)) 
                                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__p2)))) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___T_10)))))) 
                                        & (~ (((0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state))
                                                ? 1U
                                                : 0U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_will_be_valid))))) 
                                 + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_will_be_valid)) 
                                           | ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state))
                                               ? 1U
                                               : 0U)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_8) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2_io_will_be_valid))))))) 
                          + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2_io_will_be_valid)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_8)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_10) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3_io_will_be_valid))))) 
                                   + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_10)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_12) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_will_be_valid))))))))) 
                   + (7U & ((3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_will_be_valid)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_12)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_14) 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_will_be_valid))))) 
                                   + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_14)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_16) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_will_be_valid))))))) 
                            + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_will_be_valid)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_16)) 
                                            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_18) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_will_be_valid))))) 
                                     + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_will_be_valid)) 
                                               | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_18)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_20) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__will_be_valid_8)))))))))));
}

void VTestHarness::_settle__TOP__5964(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5964\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_27002 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2323) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6151));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_27004 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2323)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6135)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_7 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2297)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2313)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2322) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2323))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2329) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2332) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2339) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2323))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26909 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2239) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6150));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26911 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2239)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6134)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2213)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2229)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2238) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2239))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2245) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2250) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2255) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2239))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26816 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2155) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6149));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26818 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2155)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6133)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_5 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2129)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2145)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2154) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2155))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2161) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2166) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2171) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2155))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26723 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2071) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6148));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26725 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2071)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6132)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_4 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2045)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2061)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2070) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2071))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2077) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2082) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2087) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2071))))));
}

void VTestHarness::_settle__TOP__5965(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5965\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26630 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1987) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6147));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26632 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1987)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6131)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_3 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1961)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1977)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1986) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1987))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1993) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1998) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2003) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1987))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26537 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1903) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6146));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26539 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1903)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6130)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1877)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1893)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1902) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1903))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1909) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1914) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1919) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1903))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26444 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1819) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6145));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26446 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1819)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6129)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1793)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1809)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1818) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1819))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1825) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1830) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1835) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1819))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26351 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1735) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6144));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26353 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1735)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_6128)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__failed_loads_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1709)) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1725)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1734) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1735))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1741) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1746) 
                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1751) 
                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1735))))));
}

void VTestHarness::_settle__TOP__5966(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5966\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26434 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1709)) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1725)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1741) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1746)) 
                    & ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1756) 
                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1757)))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_26443 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1709)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1664)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1725)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1664)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1741)
                    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1746)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1664)
                        : ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1756)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1664))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1664)))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1664))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_341 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_331)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_btb_mask)) 
           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_3) 
               << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_2) 
                          << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_1) 
                                     << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_0)))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0_RW0_en 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_275)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_275)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_266));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1_RW0_en 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_313)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_313)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_304));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2_RW0_en 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_351)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_351)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_342));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3_RW0_en 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_389)) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_389)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_380));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_113 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_latch) 
           | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_187)) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue_io_deq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_105) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_need_r));
}

void VTestHarness::_settle__TOP__5967(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5967\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_ready) 
                    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_89))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_81 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_89)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_ready));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkd_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkd_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkd_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkd_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid) 
           & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkd_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid) 
           & (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkd_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid) 
           & (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkd_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD_io_resp_valid) 
           & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_source___05FT_18_data)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_uses_directory) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__alloc_uses_directory));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_137 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_68)) 
           & (~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
                  >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_ready))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_718 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount) 
            >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__request_ready));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_94 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) 
           | ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
               ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__no_wait)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_valid))
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_valid)));
}

void VTestHarness::_settle__TOP__5968(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5968\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__new_request_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_prio_2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_2));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__new_request_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_control)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_control));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__new_request_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_source)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__new_request_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_param)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__new_request_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_776 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1178)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_tag) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_94 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) 
           | ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
               ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__no_wait)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_valid))
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__new_request_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_prio_2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_2));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__new_request_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_control)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_control));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__new_request_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_source)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__new_request_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_param)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__new_request_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_776 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1182)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_tag) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_94 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) 
           | ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
               ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__no_wait)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_valid))
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_valid)));
}

void VTestHarness::_settle__TOP__5969(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5969\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__new_request_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_prio_2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_2));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__new_request_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_control)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_control));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__new_request_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_source)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__new_request_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_param)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__new_request_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_776 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1186)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_tag) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_94 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) 
           | ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
               ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__no_wait)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_valid))
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__new_request_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_prio_2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_2));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__new_request_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_control)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_control));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__new_request_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_source)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__new_request_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_param)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__new_request_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_776 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1190)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_tag) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_94 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) 
           | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
               ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__no_wait)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_valid))
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_valid)));
}

void VTestHarness::_settle__TOP__5970(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5970\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__new_request_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_prio_2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_2));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__new_request_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_control)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_control));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__new_request_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_source)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__new_request_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_param)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__new_request_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_776 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1194)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_tag) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_94 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) 
           | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
               ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__no_wait)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid))
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_prio_2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_2));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_control)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_control));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_source)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_param)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_776 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1198)) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_tag) 
                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_tag))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_94 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) 
           | ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH))
               ? ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__no_wait)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid))
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_valid)));
}

void VTestHarness::_settle__TOP__5971(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5971\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_prio_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_prio_2)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_2));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_control 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_control)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_control));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_source 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_source)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_source));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_param)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_776 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1218)) 
              & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1202)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_tag) 
                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_tag)))));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_273 
        = ((0x111U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 3U))) ? VL_ULL(0x636f6c6300306c61)
            : ((0x110U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 3U))) ? VL_ULL(0x69726573006c6564)
                : ((0x10fU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 3U))) ? VL_ULL(0x6f6d00656c626974)
                    : ((0x10eU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))
                        ? VL_ULL(0x61706d6f6300736c)
                        : ((0x10dU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                            ? VL_ULL(0x6c65632d657a6973)
                            : ((0x10cU == (0x1ffU & 
                                           (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                                ? VL_ULL(0x2300736c6c65632d)
                                : ((0x10bU == (0x1ffU 
                                               & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                  >> 3U)))
                                    ? VL_ULL(0x7373657264646123)
                                    : ((0x10aU == (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                        ? VL_ULL(0x900000002000000)
                                        : ((0x109U 
                                            == (0x1ffU 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 3U)))
                                            ? VL_ULL(0x200000002000000)
                                            : ((0x108U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x6c6f72746e6f63)
                                                : (
                                                   (0x107U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0xa101000008000000)
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x300000000100000)
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x540f010000)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_260)))))))))))));
}

void VTestHarness::_settle__TOP__5972(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5972\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591405 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591404) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591420 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_591404) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_uop_0_uopc 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853)
            ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_uopc)
                : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_uopc)
                    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_uopc)
                        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_uopc)
                            : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_uopc)
                                : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_uopc)
                                    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_uopc)
                                        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_uopc)
                                            : ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_uopc)
                                                : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_uopc)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_uopc)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_uopc)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_uopc)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_uopc)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_uopc)
                                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_uopc))))))))))))))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_uop_0_brq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853)
            ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_brq_idx)
                : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_brq_idx)
                    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_brq_idx)
                        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_brq_idx)
                            : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_brq_idx)
                                : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_brq_idx)
                                    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_brq_idx)
                                        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_brq_idx)
                                            : ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_brq_idx)
                                                : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_brq_idx)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_brq_idx)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_brq_idx)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_brq_idx)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_brq_idx)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_brq_idx)
                                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_brq_idx))))))))))))))))
            : 0U);
}

void VTestHarness::_settle__TOP__5973(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5973\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_uop_0_mem_cmd 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853)
            ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_mem_cmd)
                : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_mem_cmd)
                    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_mem_cmd)
                        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_mem_cmd)
                            : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_mem_cmd)
                                : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_mem_cmd)
                                    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_mem_cmd)
                                        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_mem_cmd)
                                            : ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_mem_cmd)
                                                : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_mem_cmd)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_mem_cmd)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_mem_cmd)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_mem_cmd)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_mem_cmd)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_mem_cmd)
                                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_mem_cmd))))))))))))))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_uop_0_uses_brq 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853) 
           & ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_uses_brq)
               : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_uses_brq)
                   : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_uses_brq)
                       : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_uses_brq)
                           : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_uses_brq)
                               : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_uses_brq)
                                   : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_uses_brq)
                                       : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_uses_brq)
                                           : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_uses_brq)
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_uses_brq)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_uses_brq)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_uses_brq)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_uses_brq)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_uses_brq)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_uses_brq)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_uses_brq)))))))))))))))));
}

void VTestHarness::_settle__TOP__5974(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5974\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_uop_0_is_fuzz_st 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853) 
           & ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_is_fuzz_st)
               : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_is_fuzz_st)
                   : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_is_fuzz_st)
                       : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_is_fuzz_st)
                           : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_is_fuzz_st)
                               : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_is_fuzz_st)
                                   : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_is_fuzz_st)
                                       : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_is_fuzz_st)
                                           : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_is_fuzz_st)
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_is_fuzz_st)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_is_fuzz_st)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_is_fuzz_st)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_is_fuzz_st)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_is_fuzz_st)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_is_fuzz_st)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_is_fuzz_st)))))))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_uop_0_is_fuzz_ld 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853) 
           & ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_is_fuzz_ld)
               : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_is_fuzz_ld)
                   : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_is_fuzz_ld)
                       : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_is_fuzz_ld)
                           : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_is_fuzz_ld)
                               : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_is_fuzz_ld)
                                   : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_is_fuzz_ld)
                                       : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_is_fuzz_ld)
                                           : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_is_fuzz_ld)
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_is_fuzz_ld)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_is_fuzz_ld)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_is_fuzz_ld)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_is_fuzz_ld)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_is_fuzz_ld)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_is_fuzz_ld)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_is_fuzz_ld)))))))))))))))));
}

void VTestHarness::_settle__TOP__5975(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__5975\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_uop_0_br_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853)
            ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_br_mask)
                : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_br_mask)
                    : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_br_mask)
                        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_br_mask)
                            : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_br_mask)
                                : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_br_mask)
                                    : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_br_mask)
                                        : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_br_mask)
                                            : ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_br_mask)
                                                : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_br_mask)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_br_mask)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_br_mask)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_br_mask)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_br_mask)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_br_mask)
                                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_br_mask))))))))))))))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fuzz_exe_paddr_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_853)
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32563 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_stq_idx)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23443));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_32564 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_resp_0_bits_uop_stq_idx)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_23444));
}
