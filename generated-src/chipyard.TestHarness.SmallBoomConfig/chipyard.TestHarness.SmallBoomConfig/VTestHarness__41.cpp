// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2189(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2189\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_fu_code 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_fu_code;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_61));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT___T_61));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_53));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_61));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_61));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_61));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_61));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2190(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2190\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_61));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_61));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__debug_sc_fail_addr = VL_ULL(0);
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_483)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_sc_fail) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__debug_sc_fail_addr 
                        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__debug_sc_fail_cnt = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0) {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_483) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_sc_fail) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__debug_sc_fail_cnt 
                        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_485;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_sc) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__debug_sc_fail_cnt = 0U;
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_sc_fail) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__debug_sc_fail_cnt = 1U;
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s3_req_addr 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s1_replay_way_en 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_out_bits_way_en;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s1_mshr_meta_read_way_en 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_meta_read_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_way_en)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_way_en));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_766 
        = (((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
               ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_0_coh_state) 
                   << 0x14U) | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_0_tag)
               : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                         ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_1_coh_state) 
                             << 0x14U) | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_1_tag)
                         : 0U)) | ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                    ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_2_coh_state) 
                                        << 0x14U) | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_2_tag)
                                    : 0U)) | ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                               ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_3_coh_state) 
                                                   << 0x14U) 
                                                  | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_751_3_tag)
                                               : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2191(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2191\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp474[4];
    WData/*159:0*/ __Vtemp479[5];
    WData/*319:0*/ __Vtemp480[10];
    WData/*383:0*/ __Vtemp485[12];
    WData/*127:0*/ __Vtemp500[4];
    WData/*159:0*/ __Vtemp505[5];
    WData/*319:0*/ __Vtemp506[10];
    WData/*383:0*/ __Vtemp511[12];
    WData/*575:0*/ __Vtemp521[18];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_497 
        = ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__data__DOT___T_62_0
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_499 
        = ((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__data__DOT___T_23_0
              : VL_ULL(0)) | ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__data__DOT___T_36_0
                               : VL_ULL(0))) | ((4U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__data__DOT___T_49_0
                                                 : VL_ULL(0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_191 
        = ((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_177_state)
              : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_178_state)
                        : 0U)) | ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_179_state)
                                   : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_189 
        = ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_tag_match_way_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_180_state)
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s1_wb_way_en 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT__req_way_en;
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT___T_77) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_req_uop_br_mask 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_br_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_br_mask));
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_req_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT___T_9;
        }
    }
    VL_EXTEND_WI(98,32, __Vtemp474, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_events_fetch_seq);
    __Vtemp479[0U] = __Vtemp474[0U];
    __Vtemp479[1U] = __Vtemp474[1U];
    __Vtemp479[2U] = __Vtemp474[2U];
    __Vtemp479[3U] = ((0xffffffe0U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_xcpt_pf_if))) 
                                      << 5U)) | ((0xfffffff0U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_xcpt_ae_if) 
                                                     << 4U)) 
                                                 | ((0xfffffff8U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_replay_if) 
                                                        << 3U)) 
                                                    | ((0xfffffffcU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_xcpt_ma_if) 
                                                           << 2U)) 
                                                       | __Vtemp474[3U]))));
    __Vtemp479[4U] = ((0xffffc000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_uses_brq) 
                                      << 0xeU)) | (
                                                   (0x1fU 
                                                    & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_xcpt_pf_if))) 
                                                       >> 0x1bU)) 
                                                   | (0xffffffe0U 
                                                      & ((IData)(
                                                                 ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_xcpt_pf_if)) 
                                                                  >> 0x20U)) 
                                                         << 5U))));
    VL_EXTEND_WW(309,143, __Vtemp480, __Vtemp479);
    __Vtemp485[0xbU] = ((0x7fU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_taken)) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bim_resp_rowdata)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bim_resp_entry_idx)) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_takens) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_history) 
                                                                        << 0xfU) 
                                                                       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_info))))))))) 
                                  >> 0x19U)) | (0xffffff80U 
                                                & ((IData)(
                                                           ((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_taken)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bim_resp_rowdata)) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bim_resp_entry_idx)) 
                                                                    << 0x1eU) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_takens) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_history) 
                                                                                << 0xfU) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_info)))))))) 
                                                            >> 0x20U)) 
                                                   << 7U)));
    VL_EXTEND_WI(98,32, __Vtemp500, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_events_fetch_seq);
    __Vtemp505[0U] = __Vtemp500[0U];
    __Vtemp505[1U] = __Vtemp500[1U];
    __Vtemp505[2U] = __Vtemp500[2U];
    __Vtemp505[3U] = ((0xffffffe0U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_xcpt_pf_if))) 
                                      << 5U)) | ((0xfffffff0U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_xcpt_ae_if) 
                                                     << 4U)) 
                                                 | ((0xfffffff8U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_replay_if) 
                                                        << 3U)) 
                                                    | ((0xfffffffcU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_xcpt_ma_if) 
                                                           << 2U)) 
                                                       | __Vtemp500[3U]))));
    __Vtemp505[4U] = ((0xffffc000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_uses_brq) 
                                      << 0xeU)) | (
                                                   (0x1fU 
                                                    & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_xcpt_pf_if))) 
                                                       >> 0x1bU)) 
                                                   | (0xffffffe0U 
                                                      & ((IData)(
                                                                 ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_xcpt_pf_if)) 
                                                                  >> 0x20U)) 
                                                         << 5U))));
    VL_EXTEND_WW(309,143, __Vtemp506, __Vtemp505);
    __Vtemp511[0xbU] = ((0x7fU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_taken)) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bim_resp_rowdata)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bim_resp_entry_idx)) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_takens) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_history) 
                                                                        << 0xfU) 
                                                                       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_info))))))))) 
                                  >> 0x19U)) | (0xffffff80U 
                                                & ((IData)(
                                                           ((((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_taken)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bim_resp_rowdata)) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bim_resp_entry_idx)) 
                                                                    << 0x1eU) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_takens) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_history) 
                                                                                << 0xfU) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_info)))))))) 
                                                            >> 0x20U)) 
                                                   << 7U)));
    __Vtemp521[9U] = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[9U] 
                       | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                           ? ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_ftq_idx) 
                                              << 0x1eU)) 
                              | ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_cfi_idx) 
                                                 << 0x1cU)) 
                                 | ((0xf8000000U & 
                                     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_edge_inst) 
                                      << 0x1bU)) | 
                                    ((0xffe00000U & 
                                      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_pc_lob) 
                                       << 0x15U)) | 
                                     __Vtemp480[9U]))))
                           : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                      ? ((0xc0000000U 
                                          & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_ftq_idx) 
                                             << 0x1eU)) 
                                         | ((0xf0000000U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_cfi_idx) 
                                                << 0x1cU)) 
                                            | ((0xf8000000U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_edge_inst) 
                                                   << 0x1bU)) 
                                               | ((0xffe00000U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_pc_lob) 
                                                      << 0x15U)) 
                                                  | __Vtemp506[9U]))))
                                      : 0U));
    __Vtemp521[0xaU] = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0xaU] 
                         | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                             ? ((0xffffff80U & ((IData)(
                                                        (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_taken)) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bim_resp_rowdata)) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bim_resp_entry_idx)) 
                                                                << 0x1eU) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_takens) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_history) 
                                                                                << 0xfU) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_resp_info))))))))) 
                                                << 7U)) 
                                | (0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_ftq_idx) 
                                                  >> 2U)))
                             : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                        ? ((0xffffff80U 
                                            & ((IData)(
                                                       (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_taken)) 
                                                         << 0x30U) 
                                                        | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bim_resp_rowdata)) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bim_resp_entry_idx)) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_takens) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_history) 
                                                                                << 0xfU) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_resp_info))))))))) 
                                               << 7U)) 
                                           | (0x3fffffffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_ftq_idx) 
                                                 >> 2U)))
                                        : 0U));
    __Vtemp521[0xbU] = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0xbU] 
                         | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                             ? ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_btb_blame) 
                                                << 0x1cU)) 
                                | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_btb_hit) 
                                                   << 0x1bU)) 
                                   | ((0xfc000000U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_btb_taken) 
                                          << 0x1aU)) 
                                      | ((0xfe000000U 
                                          & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_blame) 
                                             << 0x19U)) 
                                         | ((0xff000000U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_bpd_hit) 
                                                << 0x18U)) 
                                            | __Vtemp485[0xbU])))))
                             : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                        ? ((0xf0000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_btb_blame) 
                                               << 0x1cU)) 
                                           | ((0xf8000000U 
                                               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_btb_hit) 
                                                  << 0x1bU)) 
                                              | ((0xfc000000U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_btb_taken) 
                                                     << 0x1aU)) 
                                                 | ((0xfe000000U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_blame) 
                                                        << 0x19U)) 
                                                    | ((0xff000000U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_bpd_hit) 
                                                           << 0x18U)) 
                                                       | __Vtemp511[0xbU])))))
                                        : 0U));
    __Vtemp521[0xeU] = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0xeU] 
                         | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                             ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_pc) 
                                       >> 0xfU)) | 
                                (0xfffffff8U & ((0xfc000000U 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_inst 
                                                    << 0x1aU)) 
                                                | ((0xfe000000U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_is_rvc) 
                                                       << 0x19U)) 
                                                   | ((0x1fff8U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_pc) 
                                                          >> 0xfU)) 
                                                      | (0xfffe0000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_pc 
                                                                     >> 0x20U)) 
                                                            << 0x11U)))))))
                             : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                        ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_pc) 
                                                  >> 0xfU)) 
                                           | (0xfffffff8U 
                                              & ((0xfc000000U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_inst 
                                                     << 0x1aU)) 
                                                 | ((0xfe000000U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_is_rvc) 
                                                        << 0x19U)) 
                                                    | ((0x1fff8U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_pc) 
                                                           >> 0xfU)) 
                                                       | (0xfffe0000U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_pc 
                                                                      >> 0x20U)) 
                                                             << 0x11U)))))))
                                        : 0U));
    __Vtemp521[0xfU] = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0xfU] 
                         | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                             ? ((7U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_inst 
                                        >> 6U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_is_rvc) 
                                                   >> 7U) 
                                                  | ((IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_pc 
                                                              >> 0x20U)) 
                                                     >> 0xfU)))) 
                                | (0xfffffff8U & ((0xfc000000U 
                                                   & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_inst))) 
                                                      << 0x1aU)) 
                                                  | (0x3fffff8U 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_inst 
                                                        >> 6U)))))
                             : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                        ? ((7U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_inst 
                                                   >> 6U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_is_rvc) 
                                                      >> 7U) 
                                                     | ((IData)(
                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_pc 
                                                                 >> 0x20U)) 
                                                        >> 0xfU)))) 
                                           | (0xfffffff8U 
                                              & ((0xfc000000U 
                                                  & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_inst))) 
                                                     << 0x1aU)) 
                                                 | (0x3fffff8U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_inst 
                                                       >> 6U)))))
                                        : 0U));
    __Vtemp521[0x10U] = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0x10U] 
                          | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                              ? ((7U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_inst))) 
                                        >> 6U)) | (0xfffffff8U 
                                                   & ((0x3fffff8U 
                                                       & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_inst))) 
                                                          >> 6U)) 
                                                      | (0xfc000000U 
                                                         & ((IData)(
                                                                    ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                                                     >> 0x20U)) 
                                                            << 0x1aU)))))
                              : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                         ? ((7U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_inst))) 
                                                   >> 6U)) 
                                            | (0xfffffff8U 
                                               & ((0x3fffff8U 
                                                   & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_inst))) 
                                                      >> 6U)) 
                                                  | (0xfc000000U 
                                                     & ((IData)(
                                                                ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_inst)) 
                                                                 >> 0x20U)) 
                                                        << 0x1aU)))))
                                         : 0U));
    __Vtemp521[0x11U] = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0x11U] 
                          | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                              ? (7U & ((IData)(((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                                >> 0x20U)) 
                                       >> 6U)) : 0U)) 
                         | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                             ? (7U & ((IData)(((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_inst)) 
                                               >> 0x20U)) 
                                      >> 6U)) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[0U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[0U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[1U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[1U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[1U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[1U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[2U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[2U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[2U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[2U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[3U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[3U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[3U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[3U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[4U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[4U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[4U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[4U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[5U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[5U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[5U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[5U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[6U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[6U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[6U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[6U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[7U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[7U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[7U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[7U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[8U] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[8U] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? __Vtemp480[8U] : 0U)) | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                            ? __Vtemp506[8U]
                                            : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[9U] 
        = __Vtemp521[9U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0xaU] 
        = __Vtemp521[0xaU];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0xbU] 
        = __Vtemp521[0xbU];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0xcU] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0xcU] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? (0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_br_prediction_btb_blame) 
                                 >> 4U)) : 0U)) | (
                                                   (0x20U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                                                    ? 
                                                   (0xfffffffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_br_prediction_btb_blame) 
                                                       >> 4U))
                                                    : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0xdU] 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1323[0xdU] 
            | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
                ? (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_4_debug_pc) 
                                  << 0x11U)) : 0U)) 
           | ((0x20U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__head))
               ? (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT__fb_uop_ram_5_debug_pc) 
                                 << 0x11U)) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0xeU] 
        = __Vtemp521[0xeU];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0xfU] 
        = __Vtemp521[0xfU];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0x10U] 
        = __Vtemp521[0x10U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1325[0x11U] 
        = __Vtemp521[0x11U];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2192(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2192\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f4_ready)
          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__q_f3_history__DOT___T_7)
          : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__q_f3_history__DOT___T_4) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__q_f3_history__DOT___T_1_0))))) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__q_f3_history__DOT___T_2_0 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__q_f3_history__DOT___T_1_1)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__q_f3_history__DOT___T_2_1)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__r_f2_history));
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_2_uopc 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_1_uopc;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_2_pdst 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_1_pdst;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_96 
        = (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_98 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value_1 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_99)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_101));
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_2_is_amo 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_1_is_amo;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_2_stq_idx 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_1_stq_idx;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_2_dst_rtype 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_1_dst_rtype;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_2_uses_stq 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_1_uses_stq;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT___T_48 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__value));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT___T_50 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__value)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__value_1 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT___T_51)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT___T_53));
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_1_0 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu_io_req_valid) 
                                          & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_6))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_2_0_br_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_12)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_br_mask));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2193(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2193\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_107 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_49871 
        = ((0x15U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_21_bits_addr
            : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_20_bits_addr
                : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_19_bits_addr
                    : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_18_bits_addr
                        : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_17_bits_addr
                            : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_16_bits_addr
                                : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
                                    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                                        : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                                            : ((0xcU 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                         ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                          ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                           ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                             ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))
                                                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                              : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2194(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2194\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_59321 
        = ((0xfU == (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(1U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(1U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2195(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2195\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_69401 
        = ((0xfU == (0x1fU & ((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(2U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(2U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(2U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2196(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2196\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_79481 
        = ((0xfU == (0x1fU & ((IData)(3U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(3U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(3U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(3U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(3U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(3U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(3U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(3U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(3U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2197(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2197\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_89561 
        = ((0xfU == (0x1fU & ((IData)(4U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(4U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(4U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(4U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(4U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(4U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(4U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(4U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(4U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(4U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2198(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2198\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_99641 
        = ((0xfU == (0x1fU & ((IData)(5U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(5U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(5U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(5U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(5U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(5U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(5U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(5U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(5U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(5U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(5U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(5U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(5U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(5U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2199(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2199\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_109721 
        = ((0xfU == (0x1fU & ((IData)(6U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(6U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(6U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(6U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(6U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(6U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(6U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(6U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(6U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(6U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(6U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(6U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(6U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(6U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(6U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2200(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2200\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_119801 
        = ((0xfU == (0x1fU & ((IData)(7U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(7U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(7U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(7U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(7U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(7U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(7U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(7U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(7U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(7U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(7U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(7U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(7U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(7U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(7U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2201(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2201\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_129881 
        = ((0xfU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(8U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(8U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(8U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(8U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(8U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(8U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(8U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(8U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(8U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(8U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(8U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2202(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2202\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_139961 
        = ((0xfU == (0x1fU & ((IData)(9U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(9U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(9U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(9U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(9U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(9U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(9U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(9U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(9U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(9U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(9U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(9U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(9U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2203(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2203\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_150041 
        = ((0xfU == (0x1fU & ((IData)(0xaU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0xaU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0xaU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0xaU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0xaU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0xaU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0xaU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xaU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xaU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xaU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xaU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xaU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xaU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xaU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2204(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2204\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_160121 
        = ((0xfU == (0x1fU & ((IData)(0xbU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0xbU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0xbU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0xbU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0xbU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0xbU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0xbU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xbU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xbU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xbU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xbU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xbU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xbU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xbU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2205(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2205\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_170201 
        = ((0xfU == (0x1fU & ((IData)(0xcU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0xcU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0xcU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0xcU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0xcU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0xcU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0xcU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xcU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xcU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xcU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xcU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xcU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xcU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2206(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2206\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_180281 
        = ((0xfU == (0x1fU & ((IData)(0xdU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0xdU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0xdU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0xdU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0xdU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0xdU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0xdU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xdU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xdU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xdU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xdU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2207(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2207\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_190361 
        = ((0xfU == (0x1fU & ((IData)(0xeU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0xeU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0xeU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0xeU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0xeU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0xeU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0xeU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xeU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xeU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xeU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xeU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xeU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xeU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xeU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2208(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2208\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_200441 
        = ((0xfU == (0x1fU & ((IData)(0xfU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0xfU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0xfU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0xfU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0xfU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0xfU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0xfU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xfU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xfU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xfU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xfU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xfU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xfU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2209(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2209\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_210521 
        = ((0xfU == (0x1fU & ((IData)(0x10U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x10U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x10U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x10U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x10U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x10U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x10U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x10U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x10U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x10U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x10U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x10U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x10U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x10U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2210(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2210\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_220601 
        = ((0xfU == (0x1fU & ((IData)(0x11U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x11U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x11U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x11U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x11U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x11U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x11U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x11U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x11U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x11U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x11U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x11U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x11U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x11U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x11U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2211(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2211\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_230681 
        = ((0xfU == (0x1fU & ((IData)(0x12U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x12U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x12U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x12U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x12U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x12U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x12U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x12U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x12U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x12U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x12U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x12U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x12U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x12U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2212(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2212\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_240761 
        = ((0xfU == (0x1fU & ((IData)(0x13U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x13U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x13U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x13U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x13U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x13U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x13U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x13U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x13U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x13U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x13U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x13U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x13U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2213(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2213\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_250841 
        = ((0xfU == (0x1fU & ((IData)(0x14U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x14U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x14U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x14U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x14U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x14U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x14U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x14U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x14U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x14U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x14U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x14U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x14U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2214(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2214\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_260921 
        = ((0xfU == (0x1fU & ((IData)(0x15U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x15U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x15U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x15U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x15U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x15U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x15U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x15U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x15U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x15U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x15U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x15U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x15U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x15U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x15U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2215(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2215\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_271001 
        = ((0xfU == (0x1fU & ((IData)(0x16U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x16U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x16U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x16U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x16U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x16U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x16U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x16U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x16U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x16U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x16U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x16U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x16U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x16U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2216(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2216\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_281081 
        = ((0xfU == (0x1fU & ((IData)(0x17U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x17U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x17U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x17U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x17U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x17U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x17U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x17U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x17U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x17U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x17U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x17U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x17U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2217(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2217\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_291161 
        = ((0xfU == (0x1fU & ((IData)(0x18U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x18U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x18U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x18U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x18U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x18U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x18U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x18U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x18U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x18U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x18U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x18U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x18U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x18U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2218(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2218\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_301241 
        = ((0xfU == (0x1fU & ((IData)(0x19U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x19U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x19U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x19U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x19U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x19U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x19U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x19U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x19U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x19U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x19U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x19U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x19U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x19U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2219(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2219\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_311321 
        = ((0xfU == (0x1fU & ((IData)(0x1aU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x1aU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x1aU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x1aU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x1aU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x1aU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x1aU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x1aU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1aU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x1aU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x1aU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x1aU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x1aU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1aU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2220(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2220\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_321401 
        = ((0xfU == (0x1fU & ((IData)(0x1bU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x1bU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x1bU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x1bU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x1bU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x1bU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x1bU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x1bU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x1bU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1bU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x1bU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x1bU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x1bU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x1bU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1bU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2221(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2221\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_331481 
        = ((0xfU == (0x1fU & ((IData)(0x1cU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x1cU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x1cU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x1cU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x1cU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x1cU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x1cU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x1cU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x1cU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x1cU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x1cU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1cU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2222(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2222\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_341561 
        = ((0xfU == (0x1fU & ((IData)(0x1dU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x1dU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x1dU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x1dU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x1dU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x1dU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x1dU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x1dU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x1dU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1dU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x1dU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x1dU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x1dU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x1dU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1dU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2223(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2223\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_351641 
        = ((0xfU == (0x1fU & ((IData)(0x1eU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x1eU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x1eU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x1eU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x1eU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x1eU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x1eU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x1eU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1eU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x1eU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x1eU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x1eU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x1eU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1eU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2224(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2224\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_361721 
        = ((0xfU == (0x1fU & ((IData)(0x1fU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_addr
            : ((0xeU == (0x1fU & ((IData)(0x1fU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_addr
                : ((0xdU == (0x1fU & ((IData)(0x1fU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_addr
                    : ((0xcU == (0x1fU & ((IData)(0x1fU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_addr
                        : ((0xbU == (0x1fU & ((IData)(0x1fU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_addr
                            : ((0xaU == (0x1fU & ((IData)(0x1fU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_addr
                                : ((9U == (0x1fU & 
                                           ((IData)(0x1fU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_addr
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x1fU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_addr
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x1fU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_addr
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x1fU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_addr
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x1fU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_addr
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x1fU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_addr
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x1fU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_addr
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x1fU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_addr
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1fU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_addr
                                                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_addr)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2225(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2225\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_xcpt_bits_badvaddr 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : ((0x26U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_uopc))
                                                  ? 
                                                 (VL_ULL(0xfffffffffe) 
                                                  & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_412)
                                                  : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_425));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_129882 
        = ((0xfU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(8U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(8U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(8U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(8U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(8U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(8U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(8U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(8U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(8U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(8U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(8U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2226(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2226\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_139962 
        = ((0xfU == (0x1fU & ((IData)(9U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(9U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(9U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(9U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(9U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(9U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(9U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(9U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(9U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(9U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(9U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(9U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(9U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2227(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2227\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_150042 
        = ((0xfU == (0x1fU & ((IData)(0xaU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0xaU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0xaU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0xaU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0xaU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0xaU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0xaU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xaU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xaU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xaU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xaU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xaU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xaU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xaU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2228(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2228\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_160122 
        = ((0xfU == (0x1fU & ((IData)(0xbU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0xbU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0xbU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0xbU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0xbU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0xbU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0xbU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xbU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xbU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xbU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xbU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xbU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xbU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xbU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2229(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2229\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_170202 
        = ((0xfU == (0x1fU & ((IData)(0xcU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0xcU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0xcU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0xcU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0xcU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0xcU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0xcU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xcU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xcU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xcU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xcU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xcU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xcU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2230(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2230\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_180282 
        = ((0xfU == (0x1fU & ((IData)(0xdU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0xdU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0xdU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0xdU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0xdU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0xdU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0xdU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xdU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xdU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xdU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xdU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2231(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2231\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_190362 
        = ((0xfU == (0x1fU & ((IData)(0xeU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0xeU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0xeU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0xeU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0xeU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0xeU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0xeU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xeU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xeU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xeU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xeU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xeU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xeU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xeU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2232(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2232\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_200442 
        = ((0xfU == (0x1fU & ((IData)(0xfU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0xfU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0xfU) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0xfU) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0xfU) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0xfU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0xfU) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0xfU) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xfU) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xfU) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xfU) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0xfU) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xfU) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2233(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2233\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_210522 
        = ((0xfU == (0x1fU & ((IData)(0x10U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0x10U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0x10U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0x10U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0x10U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0x10U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0x10U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x10U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x10U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x10U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x10U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x10U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x10U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x10U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2234(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2234\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_220602 
        = ((0xfU == (0x1fU & ((IData)(0x11U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0x11U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0x11U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0x11U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0x11U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0x11U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0x11U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x11U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x11U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x11U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x11U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x11U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x11U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x11U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x11U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2235(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2235\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_230682 
        = ((0xfU == (0x1fU & ((IData)(0x12U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0x12U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0x12U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0x12U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0x12U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0x12U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0x12U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x12U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x12U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x12U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x12U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x12U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x12U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x12U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2236(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2236\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_240762 
        = ((0xfU == (0x1fU & ((IData)(0x13U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0x13U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0x13U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0x13U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0x13U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0x13U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0x13U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x13U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x13U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x13U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x13U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x13U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x13U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2237(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2237\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_250842 
        = ((0xfU == (0x1fU & ((IData)(0x14U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_15_bits_taken)
            : ((0xeU == (0x1fU & ((IData)(0x14U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_14_bits_taken)
                : ((0xdU == (0x1fU & ((IData)(0x14U) 
                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_13_bits_taken)
                    : ((0xcU == (0x1fU & ((IData)(0x14U) 
                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_12_bits_taken)
                        : ((0xbU == (0x1fU & ((IData)(0x14U) 
                                              + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_11_bits_taken)
                            : ((0xaU == (0x1fU & ((IData)(0x14U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_10_bits_taken)
                                : ((9U == (0x1fU & 
                                           ((IData)(0x14U) 
                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_9_bits_taken)
                                    : ((8U == (0x1fU 
                                               & ((IData)(0x14U) 
                                                  + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_8_bits_taken)
                                        : ((7U == (0x1fU 
                                                   & ((IData)(0x14U) 
                                                      + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_7_bits_taken)
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x14U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_6_bits_taken)
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x14U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_5_bits_taken)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x14U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_4_bits_taken)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x14U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_3_bits_taken)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_2_bits_taken)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x14U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_1_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_0_bits_taken))))))))))))))));
}
