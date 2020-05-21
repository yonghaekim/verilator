// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3257(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3257\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1728 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1676) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1684)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_28 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1676) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1855))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
            ? (0xfU & ((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_31 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1676) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1925))) 
            & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                             >> 1U)))) ? (0xffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_8 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1727 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_4) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_1_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_7 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_1_1) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_4));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_23 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_4) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_1_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_26 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_4) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_1_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram_RW_0_r_0_data 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array_1__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram_RW_0_r_0_data 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array_1__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram
        [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array_1__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__hits_oh_0 
        = (((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_valids_0 
                     >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__clear_idx))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_20)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_tag_array__DOT__btb_tag_array_ext__DOT__mem_0_0__DOT__ram
              [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_tag_array__DOT__btb_tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0] 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__s1_req_tag));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3258(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3258\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__hits_oh_1 
        = (((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_valids_1 
                     >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__clear_idx))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_57)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_tag_array_1__DOT__btb_tag_array_ext__DOT__mem_0_0__DOT__ram
              [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_tag_array_1__DOT__btb_tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_addr_pipe_0] 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__s1_req_tag));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_12 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_67)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_67)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_10) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_10))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3259(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3259\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_7 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_53)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_53)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_5) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_5))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2970 
        = ((VL_ULL(0xffffffffffff0000) & (((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35610))
                                            ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35611) 
                                                & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2959) 
                                                   >> 0xfU))
                                                ? VL_ULL(0xffffffffffff)
                                                : VL_ULL(0))
                                            : (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2955 
                                               >> 0x10U)) 
                                          << 0x10U)) 
           | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2959)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3260(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3260\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3555 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3617 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3679 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3741 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3803 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3865 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3927 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3989 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4051 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4113 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4175 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4237 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4299 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4361 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4423 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4485 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_data_bits 
           + (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__match_mask_sum)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3261(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3261\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit_io_resp_bits_mxcpt_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT__ma_ld) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT__ma_st));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_fuzz_ld 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fuzz_ld;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_fuzz_st 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fuzz_st;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stale_pdst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stale_pdst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_fuzz_st 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fuzz_st;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_fuzz_ld 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fuzz_ld;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3262(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3262\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stale_pdst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stale_pdst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lbq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lbq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
                = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_3;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
        = (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
                                         & (VL_ULL(0) 
                                            != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
                                                   >> 2U) 
                                                  | (VL_ULL(0x3fffffffffffffff) 
                                                     & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153)))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
                                                   & (VL_ULL(0) 
                                                      != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                                  & (VL_ULL(0) 
                                                     == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
                                                     << 1U))
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
                                                & (~ 
                                                   (VL_ULL(3) 
                                                    | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
                                                       << 2U)))) 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
                                               ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt)
                   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_div)))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3263(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3263\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1469[4];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_div) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_div));
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
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_868) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_693));
    __Vtemp1469[3U] = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_820))
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
        = __Vtemp1469[3U];
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1136 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1132) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1132)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_tag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_tag;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3264(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3264\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_ldst_val 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ldst_val;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_rxq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_rxq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_csr_addr 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_csr_addr;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_cfi_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stat_bpd_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_bpd_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stat_btb_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_btb_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bpd_resp_info 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_info;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bpd_resp_takens 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_takens;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bim_resp_rowdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bim_resp_rowdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bpd_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_btb_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_btb_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_debug_wdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_wdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_bp_debug_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_bp_debug_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_replay_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_replay_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_xcpt_pf_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_pf_if;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3265(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3265\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lrs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bpd_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_btb_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_debug_pc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_pc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_debug_events_fetch_seq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_events_fetch_seq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_xcpt_ma_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_ma_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_fp_single 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fp_single;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stat_bpd_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_bpd_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stat_btb_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_btb_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bpd_resp_history 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_history;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_xcpt_ae_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_ae_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_bp_xcpt_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_bp_xcpt_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_debug_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bpd_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_prediction_bim_resp_entry_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bim_resp_entry_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stat_brjmp_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_brjmp_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_ftq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ftq_idx;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3266(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3266\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_jal 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_jal;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_rvc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_rvc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_sys_pc2epc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_sys_pc2epc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_edge_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_edge_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_pc_lob 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pc_lob;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_mem_size;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lrs2 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_frs3_en 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_frs3_en;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_allocate_brtag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_allocate_brtag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_ldst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ldst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lrs1 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_br_or_jmp = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_br_or_jmp 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_br_or_jmp;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_bypassable 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_bypassable;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_fencei 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fencei;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3267(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3267\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fence;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_iq_type 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_iq_type;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_call 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_call;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_ret 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_ret;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_jump 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_jump;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fp_val;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_flush_on_commit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_flush_on_commit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_exc_cause 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_exc_cause;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_debug_events_fetch_seq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_events_fetch_seq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_bp_xcpt_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bp_xcpt_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_ma_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_ma_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_ae_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_ae_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_fp_single 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_fp_single;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stat_bpd_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_bpd_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stat_btb_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_btb_made_pred;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3268(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3268\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_info 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_info;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_takens 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_takens;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bim_resp_rowdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bim_resp_rowdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stat_bpd_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_bpd_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_debug_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stat_brjmp_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_brjmp_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_replay_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_replay_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_debug_wdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_wdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_history 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_history;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_debug_pc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_pc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bim_resp_entry_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bim_resp_entry_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stat_btb_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_btb_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_csr_addr 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_csr_addr;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_rxq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_rxq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_lrs3;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3269(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3269\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_pf_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_pf_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_bp_debug_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bp_debug_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_sys_pc2epc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_sys_pc2epc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_amo;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_size;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_lrs2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_frs3_en 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_frs3_en;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_allocate_brtag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_allocate_brtag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_ldst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ldst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_lrs1;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_fencei 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fencei;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3270(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3270\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fence;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_iq_type 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_iq_type;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_flush_on_commit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_flush_on_commit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_lbq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_lbq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_pc_lob 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_pc_lob;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_exc_cause 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_exc_cause;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uses_lbq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_lbq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_exception 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_exception;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_exception 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_exception;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_prs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_prs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_ldq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ldq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3271(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3271\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_239 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_236) 
           | (0x3ffcU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_236) 
                         << 2U)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_unique 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_unique;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_unique 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_unique;
    }
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_195 
        = ((0xc3U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x3331302d67756265)
            : ((0xc2U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x642c766373697200)
                : ((0xc1U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x3331302d67756265)
                    : ((0xc0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x642c657669666973)
                        : ((0xbfU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x1b00000021000000)
                            : ((0xbeU == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x300000000003040)
                                : ((0xbdU == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x72656c6c6f72746e)
                                    : ((0xbcU == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x6f632d6775626564)
                                        : ((0xbbU == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x100000002000000)
                                            : ((0xbaU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x6c6f72746e6f63)
                                                : (
                                                   (0xb9U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0xa101000008000000)
                                                    : 
                                                   ((0xb8U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x300000000000100)
                                                     : 
                                                    ((0xb7U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x20f010000)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_182)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3272(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3272\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_brq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_brq_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_120 
        = ((VL_ULL(0xffff0000ffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_110 
                                      >> 0x10U)) | 
           (VL_ULL(0xffff0000ffff0000) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_110 
                                          << 0x10U)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_ret 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_ret;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_call 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_call;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_jump 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_jump;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_is_rvc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_rvc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_edge_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_edge_inst;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2060 
        = (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2049) 
                            >> 4U))) << 2U) | (((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2053) 
                                                     >> 2U))) 
                                                << 1U) 
                                               | (1U 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2053) 
                                                      >> 3U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2053) 
                                                        >> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_99 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 1U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3273(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3273\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1__DOT__bpd_csignals_0 
        = ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)) 
           | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_91 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)) 
               | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_95 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_144 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 2U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2__DOT__bpd_csignals_0 
        = ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)) 
           | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_136 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)) 
               | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 2U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_140 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 2U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3274(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3274\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
        = ((3U != (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                 >> 0x30U)))) ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3_io_out_bits
            : (0xffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                  >> 0x30U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_5_io_inst 
        = ((3U != (3U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65))
            ? ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_843))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65
                : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_843))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_901_bits))
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_out_bits 
        = ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_843))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in
            : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_843))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in
                : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_901_bits));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1678 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_5)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_152 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_146) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_146) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_143) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2095 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3275(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3275\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_hits_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_out_bits_bits_addr 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_chosen))
            ? 0U : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_chosen))
                     ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag
                     : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__r_refill_tag));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_out_valid 
        = ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_chosen)) 
           & ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_chosen))
               ? (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__state))
               : (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__state))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__res_v 
        = (1U & ((1U & (((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                  >> 1U)) | (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                     >> 2U))) 
                        | (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                   >> 3U)))) ? ((~ 
                                                 ((1U 
                                                   >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count)) 
                                                  & (0U 
                                                     != 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                                 >> 0xaU)))))) 
                                                & ((~ 
                                                    ((0U 
                                                      >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count)) 
                                                     & (0U 
                                                        != 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                                    >> 0x13U)))))) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data)))
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__cacheable 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
           & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
                                                  ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_244 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
           & (((((VL_ULL(0) == (VL_ULL(0x84010000) 
                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                 | (VL_ULL(0) == (VL_ULL(0x84000000) 
                                  & (VL_ULL(0x4000000) 
                                     ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
                | (VL_ULL(0) == (VL_ULL(0x86010000) 
                                 & (VL_ULL(0x4000000) 
                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
               | (VL_ULL(0) == (VL_ULL(0x86010000) 
                                & (VL_ULL(0x2010000) 
                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
              | (VL_ULL(0) == (VL_ULL(0x80000000) & 
                               (VL_ULL(0x80000000) 
                                ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3276(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3276\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_97 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_23 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_50)) 
                                            & (((0x1fffffffU 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
                                                            >> 3U))) 
                                                < (0x1fffffffU 
                                                   & (~ 
                                                      ((~ 
                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                         << 2U)) 
                                                       >> 3U)))) 
                                               | ((0U 
                                                   == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_23) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                     < 
                                                     (7U 
                                                      & (~ 
                                                         (3U 
                                                          | (~ 
                                                             (4U 
                                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                                 << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1519 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                                                 << 2U))))))
                  : (~ ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1233) 
                        & (0U != (7U & (~ (3U | (~ 
                                                 (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                     << 2U)))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1469 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1233 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1226) 
                                            | ((0U 
                                                == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1233) 
                                               & ((7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                  < 
                                                  (7U 
                                                   & (~ 
                                                      (3U 
                                                       | (~ 
                                                          (4U 
                                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                              << 2U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3277(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3277\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_147 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                                                 << 2U))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_57) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_23) 
                           & (0U != (7U & (~ (3U | 
                                              (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                     << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_293 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_57 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_357 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_246)) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_50) 
                                               | ((0U 
                                                   == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_57) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                     < 
                                                     (7U 
                                                      & (~ 
                                                         (3U 
                                                          | (~ 
                                                             (4U 
                                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                                 << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3278(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3278\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_343 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_357 
                                                 << 2U))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_253) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_57) 
                           & (0U != (7U & (~ (3U | 
                                              (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                     << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_489 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_253 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_348 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_442)) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_246) 
                                               | ((0U 
                                                   == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_253) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                     < 
                                                     (7U 
                                                      & (~ 
                                                         (3U 
                                                          | (~ 
                                                             (4U 
                                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                                 << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3279(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3279\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_539 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_348 
                                                 << 2U))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_449) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_253) 
                           & (0U != (7U & (~ (3U | 
                                              (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                     << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_685 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_449 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_339 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_638)) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_442) 
                                               | ((0U 
                                                   == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_449) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                     < 
                                                     (7U 
                                                      & (~ 
                                                         (3U 
                                                          | (~ 
                                                             (4U 
                                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                                 << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3280(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3280\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_735 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_339 
                                                 << 2U))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_645) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_449) 
                           & (0U != (7U & (~ (3U | 
                                              (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                     << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_881 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_645 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_330 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_834)) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_638) 
                                               | ((0U 
                                                   == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_645) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                     < 
                                                     (7U 
                                                      & (~ 
                                                         (3U 
                                                          | (~ 
                                                             (4U 
                                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                                 << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3281(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3281\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_931 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_330 
                                                 << 2U))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_841) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_645) 
                           & (0U != (7U & (~ (3U | 
                                              (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                     << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1077 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_841 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_321 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1030)) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_834) 
                                               | ((0U 
                                                   == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_841) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                     < 
                                                     (7U 
                                                      & (~ 
                                                         (3U 
                                                          | (~ 
                                                             (4U 
                                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                                 << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3282(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3282\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1127 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_321 
                                                 << 2U))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1037) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_841) 
                           & (0U != (7U & (~ (3U | 
                                              (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                     << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1273 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
            ? (0U == (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1037 
                      & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_312 
                            >> 1U)))) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1226)) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1030) 
                                               | ((0U 
                                                   == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1037) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                                                     < 
                                                     (7U 
                                                      & (~ 
                                                         (3U 
                                                          | (~ 
                                                             (4U 
                                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                                 << 2U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3283(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3283\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1474[3];
    WData/*95:0*/ __Vtemp1475[3];
    WData/*95:0*/ __Vtemp1481[3];
    WData/*95:0*/ __Vtemp1482[3];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1323 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
                  ? (0U == (7U & (~ (3U | (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_312 
                                                 << 2U))))))
                  : (~ (((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1233) 
                         & (0U != (7U & ((~ (3U | (~ 
                                                   (4U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                       << 2U))))) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))))) 
                        | ((0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1037) 
                           & (0U != (7U & (~ (3U | 
                                              (~ (4U 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                     << 2U))))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_124 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pte_cache_hit 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits)) 
           & (2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count)));
    __Vtemp1474[0U] = (0xc000000U ^ (0xfffffff8U & 
                                     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47) 
                                      << 3U)));
    __Vtemp1474[1U] = ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47) 
                              >> 0x1dU)) | (0xfffffff8U 
                                            & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                                        >> 0x20U)) 
                                               << 3U)));
    __Vtemp1474[2U] = (7U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                      >> 0x20U)) >> 0x1dU));
    VL_EXTEND_WW(67,66, __Vtemp1475, __Vtemp1474);
    __Vtemp1481[0U] = (0x80000000U ^ (0xfffffff8U & 
                                      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47) 
                                       << 3U)));
    __Vtemp1481[1U] = ((7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47) 
                              >> 0x1dU)) | (0xfffffff8U 
                                            & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                                        >> 0x20U)) 
                                               << 3U)));
    __Vtemp1481[2U] = (7U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                      >> 0x20U)) >> 0x1dU));
    VL_EXTEND_WW(67,66, __Vtemp1482, __Vtemp1481);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmaHomogeneous 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count)) 
                   & ((0U == (((0xfc000000U & __Vtemp1475[0U]) 
                               | __Vtemp1475[1U]) | 
                              (7U & __Vtemp1475[2U]))) 
                      | (0U == (((0xf0000000U & __Vtemp1482[0U]) 
                                 | __Vtemp1482[1U]) 
                                | (7U & __Vtemp1482[2U])))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3284(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3284\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1484[3];
    WData/*95:0*/ __Vtemp1485[3];
    WData/*95:0*/ __Vtemp1486[3];
    WData/*95:0*/ __Vtemp1487[3];
    WData/*95:0*/ __Vtemp1488[3];
    WData/*95:0*/ __Vtemp1489[3];
    WData/*95:0*/ __Vtemp1490[3];
    // Body
    VL_EXTEND_WI(66,32, __Vtemp1484, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_782 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1484);
    VL_EXTEND_WI(66,32, __Vtemp1485, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_938 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1485);
    VL_EXTEND_WI(66,32, __Vtemp1486, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_860 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1486);
    VL_EXTEND_WI(66,32, __Vtemp1487, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_626 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1487);
    VL_EXTEND_WI(66,32, __Vtemp1488, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_704 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1488);
    VL_EXTEND_WI(66,32, __Vtemp1489, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_470 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1489);
    VL_EXTEND_WI(66,32, __Vtemp1490, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_548 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1490);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_253 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__invalidated) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3285(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3285\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_in_1_ready 
        = (((1U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb__DOT___T_1)) 
            | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb__DOT___T_6) 
                  | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__state))))) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___GEN_73 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___GEN_74 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_mem_s1_kill 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__s2_hit) 
           | (2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5224 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5226 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5229 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5230 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5238 
        = (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5241 
        = (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2839 
        = (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5225 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state)) 
           & ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)) 
              | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_hellacache_s2_nack 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state)) 
           & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state)) 
              & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3286(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3286\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_hellacache_s2_xcpt_ae_ld 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state)) 
           & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state)) 
              & ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state)) 
                 & ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_state)) 
                    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_xcpt_ae_ld)))));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_mem_size;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_fp_val;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_cfi_idx;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fu_code 
                = (((((0x24U == (0x7cU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                           << 6U) | 
                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                           >> 0x1aU)))) 
                      | (0x80000050U == (0x90000070U 
                                         & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                             << 6U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                               >> 0x1aU))))) 
                     << 9U) | (((0x90000050U == (0x90000070U 
                                                 & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                     << 6U) 
                                                    | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                       >> 0x1aU)))) 
                                << 8U) | (((0x18000050U 
                                            == (0x18000070U 
                                                & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    << 6U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                      >> 0x1aU)))) 
                                           << 7U) | 
                                          (((((0x40U 
                                               == (0x90000060U 
                                                   & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                       << 6U) 
                                                      | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                         >> 0x1aU)))) 
                                              | (0x40U 
                                                 == 
                                                 (0x88000060U 
                                                  & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                      << 6U) 
                                                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                        >> 0x1aU))))) 
                                             | (0x40U 
                                                == 
                                                (0x70U 
                                                 & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                     << 6U) 
                                                    | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                       >> 0x1aU))))) 
                                            << 6U) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_624) 
                                              << 5U))))) 
                   | (((0x2004020U == (0x2004064U & 
                                       ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                         << 6U) | (
                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                   >> 0x1aU)))) 
                       << 4U) | (((0x2000030U == (0x2004074U 
                                                  & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                      << 6U) 
                                                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                        >> 0x1aU)))) 
                                  << 3U) | ((((0U == 
                                               (0x50U 
                                                & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    << 6U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                      >> 0x1aU)))) 
                                              | (0x12000030U 
                                                 == 
                                                 (0x52003034U 
                                                  & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                      << 6U) 
                                                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                        >> 0x1aU))))) 
                                             << 2U) 
                                            | ((((0x14U 
                                                  == 
                                                  (0x34U 
                                                   & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                       << 6U) 
                                                      | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                         >> 0x1aU)))) 
                                                 | (0x60U 
                                                    == 
                                                    (0x70U 
                                                     & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                         << 6U) 
                                                        | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                           >> 0x1aU))))) 
                                                << 1U) 
                                               | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_592) 
                                                  | (0x34U 
                                                     == 
                                                     (0x34U 
                                                      & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                          << 6U) 
                                                         | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                            >> 0x1aU))))))))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3287(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3287\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_365 
        = (((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ 
                                                                    ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                                        >> 9U))))))) 
              | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                               & (QData)((IData)((0x2000000U 
                                                  ^ 
                                                  ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                    << 0x17U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                      >> 9U)))))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                    ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                                        >> 9U))))))) 
            | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ 
                                                                    ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                                        >> 9U)))))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x2010000U 
                                                                   ^ 
                                                                   ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                                     << 0x17U) 
                                                                    | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                                       >> 9U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_322 
        = ((0xcU >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                             >> 0xbU))) & (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x3000U 
                                                                  ^ 
                                                                  ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                                    << 0x17U) 
                                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                                      >> 9U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_39 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                     >> 0xbU)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                     >> 0xaU))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_42 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                     >> 0xbU)) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                  >> 0xaU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3288(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3288\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_45 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                  >> 0xbU) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                 >> 0xaU))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_48 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                  >> 0xbU) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                              >> 0xaU)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32 
        = (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                 >> 0xbU))) | (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                      >> 0xbU))) 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                    >> 0xbU))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35 
        = (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                 >> 0xbU))) | (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                                      >> 0xbU))) 
                                                 >> 2U) 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[2U] 
                                                   >> 0xbU)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1964 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1916) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_31)) 
           & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_bits_sink))
                  : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1779 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1727) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1735)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3289(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3289\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_28 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1727) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1906))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data)))
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_source___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_31 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1727) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1976))) 
            & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
                             >> 1U)))) ? (0xffU & ((IData)(1U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_sink___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_12 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp_io_deq_ready)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_7)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_4) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_1_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_36 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_26) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_1_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_29 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp_io_deq_ready)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_23)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_26) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_1_1))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_115 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__hits_oh_0)
             ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram_RW_0_r_0_data
             : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__hits_oh_1)
                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array_1__DOT__btb_data_array_ext__DOT__mem_0_0__DOT__ram_RW_0_r_0_data
                              : VL_ULL(0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_89 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__hits_oh_1) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__hits_oh_0));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((7U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_7 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((6U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_6 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3290(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3290\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((5U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_5 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((4U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_4 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((3U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_3 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((2U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_2 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((1U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_1 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
            if ((0U == (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125))))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_126_0 
                    = (VL_ULL(0x3fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT___GEN_2 
                                               >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3291(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3291\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT___T_1 
        = (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT___T));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim_io_resp_bits_rowdata 
        = (((1U & ((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_logical_idx))))
             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_read_out_0)
             : 0U) | ((2U & ((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_logical_idx))))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_read_out_1)
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim_io_resp_valid 
        = ((~ ((3U & (((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_logical_idx))) 
                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_conflict_0))) 
               | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_logical_idx))) 
                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_conflict_1))))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__s2_fsm_idle));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_pdst 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_stq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_dst_rtype 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_dst_rtype;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3292(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3292\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT___T_91 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__next_p1_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___GEN_151)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_10)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p1)
                                    ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_5) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_10)))) {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p1) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_uopc = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_out_uop_lrs1_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_10)))) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_out_uop_lrs2_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_10)))) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p1)))) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3293(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3293\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_74 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_12)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__state)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___T_77)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT___T_77;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___T_85 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___GEN_145));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1)
                                ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uopc))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_5) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uopc = 3U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lrs1_rtype 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_8)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_5)
                        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1)
                            ? 2U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype))
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype))));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_5) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p1) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lrs1_rtype = 2U;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lrs2_rtype 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_8)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_5)
                        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype)
                            : 2U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype))));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p1)))) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_lrs2_rtype = 2U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3294(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3294\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_60 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_7)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___T_71)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___T_71;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_rob_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_rob_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_pdst 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_pdst;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2974 
        = (0xffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ld_addr_0))
                     ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2970 
                                >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2970)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_stq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_ldq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_ldq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_uses_stq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_uses_ldq;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_rob_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_pdst 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_0_pdst;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3295(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3295\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_dst_rtype 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_iss_uops_0_dst_rtype;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_91 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__next_p1_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___GEN_151)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_10)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_uopc)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1)
                                    ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_uopc)))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_5) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_10)))) {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_uopc = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_lrs1_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_out_uop_lrs1_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_10)))) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_lrs1_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_lrs2_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_out_uop_lrs2_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_10)))) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1)))) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_lrs2_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3296(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3296\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_53 
        = ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state))
                ? 1U : 0U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask 
        = ((IData)(vlTOPp->reset) ? 0U : (0xfU & ((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_br_tag))));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_77)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_77;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3297(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3297\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_620)) 
                      + VL_EXTENDS_II(14,13, (3U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
                                                            >> 0x35U))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
            ? (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig)
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
           & (~ (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[2U] 
                            << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[1U] 
                                        >> 0x14U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285 
        = (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
                     & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[2U] 
                         << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[1U] 
                                     >> 0x14U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148) 
            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB) 
               | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC))))) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div)
            ? (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig)
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_0_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3298(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3298\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_1_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_2_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_3_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (3U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_4_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_5_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_6_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_7_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div) 
           & (7U == (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                                   >> 0x31U)))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_961 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_913) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_922)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_913) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1025)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                  >> 9U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_240 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_300 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238) 
                     - ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
                        & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_288)
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_311)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3299(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3299\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_913 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_913 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_913 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_162 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
                  ? (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_260) 
                        >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_1))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_153 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics_auto_in_a_ready) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_260))
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_0))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_11 
        = ((0U == (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                         >> 0xaU))) & (2U >= (3U & 
                                              (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                               >> 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_338 
        = ((0xcU >= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                             >> 0xcU))) & (0U == (0x7ffff000U 
                                                  & (0x3000U 
                                                     ^ 
                                                     ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                                       << 0x17U) 
                                                      | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                                         >> 9U))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_376 
        = (((((0U == (0x7c000000U & (0xc000000U ^ (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                                    << 0x17U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                                      >> 9U))))) 
              | (0U == (0x7fff0000U & (0x2000000U ^ 
                                       ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                         << 0x17U) 
                                        | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                           >> 9U)))))) 
             | (0U == (0x7ffff000U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                       << 0x17U) | 
                                      (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                       >> 9U))))) | 
            (0U == (0x7ffff000U & (0x54000000U ^ ((
                                                   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                                     >> 9U)))))) 
           | (0U == (0x7ffff000U & (0x2010000U ^ ((
                                                   vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                                     >> 9U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3300(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3300\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_913) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1025)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                                  >> 8U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_43 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                     >> 0xbU)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                     >> 0xaU))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_46 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                     >> 0xbU)) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                  >> 0xaU)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_49 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                  >> 0xbU) & (~ (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                 >> 0xaU))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_52 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                  >> 0xbU) & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                              >> 0xaU)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_36 
        = (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                 >> 0xcU))) | (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                                      >> 0xcU))) 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                                    >> 0xbU))))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_39 
        = (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                 >> 0xcU))) | (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                                      >> 0xcU))) 
                                                 >> 2U) 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[2U] 
                                                   >> 0xbU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3301(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3301\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
             ? 0U : (((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                                    >> 4U))) << 2U) 
                     | (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1099) 
                                       >> 2U))) << 1U) 
                        | (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1099) 
                                  >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1099) 
                                            >> 1U)))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
               ? (((0U != (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                                    >> 2U))) << 4U) 
                  | (((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1128) 
                                       >> 8U))) << 3U) 
                     | (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1132) 
                                         >> 4U))) << 2U) 
                        | (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1136) 
                                          >> 2U))) 
                            << 1U) | (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1136) 
                                             >> 3U) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1136) 
                                               >> 1U)))))))
               : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3308(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3308\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_242 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_239) 
           | (0x3ff0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_239) 
                         << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_208 
        = ((0xd0U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x1b0000000e000000)
            : ((0xcfU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x300000000000030)
                : ((0xceU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x3030334065636976)
                    : ((0xcdU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x65642d726f727265)
                        : ((0xccU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x100000002000000)
                            : ((0xcbU == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x6c6f72746e6f63)
                                : ((0xcaU == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0xa101000008000000)
                                    : ((0xc9U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x300000000100000)
                                        : ((0xc8U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0xf010000)
                                            : ((0xc7U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x800000003000000)
                                                : (
                                                   (0xc6U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0xffff000003000000)
                                                    : 
                                                   ((0xc5U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0xbd01000008000000)
                                                     : 
                                                    ((0xc4U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x300000000000000)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_195)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3309(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3309\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_130 
        = ((VL_ULL(0xff00ff00ff00ff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_120 
                                        >> 8U)) | (VL_ULL(0xff00ff00ff00ff00) 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_120 
                                                      << 8U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2069 
        = (0xffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2060))
                     ? (~ (2U | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2033) 
                                    << 1U)))) : (2U 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2033) 
                                                    << 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_99) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_78));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_target 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(2) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_pc))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (((0x80000000U 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)
                                                                                 ? 0xfffffU
                                                                                 : 0U) 
                                                                                >> 0x13U))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)
                                                                 ? 0xfffffU
                                                                 : 0U) 
                                                               << 0xcU) 
                                                              | ((0x800U 
                                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst 
                                                                          >> 7U)))))))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(2) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_pc))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (((0x80000000U 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)
                                                                                 ? 0xfffU
                                                                                 : 0U) 
                                                                                >> 0xbU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)
                                                                 ? 0xfffU
                                                                 : 0U) 
                                                               << 0x14U) 
                                                              | ((0xff000U 
                                                                  & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst) 
                                                                 | ((0x800U 
                                                                     & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst 
                                                                        >> 9U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst 
                                                                             >> 0x14U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3310(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3310\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_95) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_78));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_1 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_95) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_78));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jr_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_144) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_122)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_target 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(4) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_pc))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (((0x80000000U 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)
                                                                                 ? 0xfffffU
                                                                                 : 0U) 
                                                                                >> 0x13U))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)
                                                                 ? 0xfffffU
                                                                 : 0U) 
                                                               << 0xcU) 
                                                              | ((0x800U 
                                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst 
                                                                          >> 7U)))))))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(4) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_pc))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (((0x80000000U 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)
                                                                                 ? 0xfffU
                                                                                 : 0U) 
                                                                                >> 0xbU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)
                                                                 ? 0xfffU
                                                                 : 0U) 
                                                               << 0x14U) 
                                                              | ((0xff000U 
                                                                  & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst) 
                                                                 | ((0x800U 
                                                                     & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst 
                                                                        >> 9U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst 
                                                                             >> 0x14U)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3311(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3311\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__is_jal_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_140) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_122)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker_io_is_jal_2 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_140) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_122)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_193 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 3U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3__DOT__bpd_csignals_0 
        = ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)) 
           | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_185 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & ((0x63U == (0x207fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)) 
               | (0x4063U == (0x407fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 3U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_189 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
            & (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
              >> 3U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_io_inst 
        = ((3U != (3U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_out_bits
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1726 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1678) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1687)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_155 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_152) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_152)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3312(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3312\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2101 
        = (((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2095) 
                          >> 2U))) << 1U) | (1U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2095) 
                                                    >> 3U) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2095) 
                                                      >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hits 
        = ((0x2000U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled)) 
                       << 0xdU)) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12) 
                                     << 0xcU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11) 
                                                  << 0xbU) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10) 
                                                     << 0xaU) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9) 
                                                        << 9U) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8) 
                                                           << 8U) 
                                                          | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7) 
                                                              << 7U) 
                                                             | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
                                                                 << 6U) 
                                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_679)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1004 
        = (0xfffffU & ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0)
                                ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
                                           >> 0xeU))
                                : 0U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_39 
                                                     >> 0xeU))
                                          : 0U)) | 
                             ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2)
                               ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_43 
                                          >> 0xeU))
                               : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_47 
                                                     >> 0xeU))
                                          : 0U)) | 
                           ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4)
                             ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_51 
                                        >> 0xeU)) : 0U)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5)
                              ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_55 
                                         >> 0xeU)) : 0U)) 
                         | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6)
                             ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_59 
                                        >> 0xeU)) : 0U)) 
                        | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7)
                            ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                       >> 0xeU)) : 0U)) 
                       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8)
                           ? ((0xc0000U & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                    >> 0x20U)) 
                                           << 0x12U)) 
                              | ((0x3fe00U & (((1U 
                                                > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level))
                                                ? (0xfffffe00U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))
                                                : 0U) 
                                              | (0xffe00U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                            >> 0xeU))))) 
                                 | (0x1ffU & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                                       >> 0xcU)) 
                                              | (0xfffffU 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                            >> 0xeU)))))))
                           : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3313(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3313\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__real_hits 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12) 
            << 0xcU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11) 
                         << 0xbU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10) 
                                      << 0xaU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9) 
                                                   << 9U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
                                                            << 6U) 
                                                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_679))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__l2_tlb_ram_RW0_addr 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_196)
                      ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_req_addr
                      : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_out_bits_bits_addr));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_55 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__arb_io_out_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__traverse 
        = ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__res_v) 
               & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 1U)))) & (~ (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                                     >> 2U)))) 
             & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                           >> 3U)))) & (VL_ULL(0) == 
                                        (VL_ULL(0x3ffffffff) 
                                         & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                                            >> 0x1eU)))) 
           & (2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__prot_x 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
             & ((VL_ULL(0) == (VL_ULL(0x86000000) & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)) 
                | (VL_ULL(0) == (VL_ULL(0x80000000) 
                                 & (VL_ULL(0x80000000) 
                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__deny_access_to_debug))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1469)
               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1519) 
                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1471)))
               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1273)
                   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1323) 
                      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                         | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1275)))
                   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1077)
                       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1127) 
                          & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_1079)))
                       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_881)
                           ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_931) 
                              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_883)))
                           : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_685)
                               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_735) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_687)))
                               : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_489)
                                   ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_539) 
                                      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                         | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_491)))
                                   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_293)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_343) 
                                          & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_295)))
                                       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_97)
                                           ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_147) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_99)))
                                           : (1U < 
                                              (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_priv))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3314(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3314\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1491[3];
    WData/*95:0*/ __Vtemp1492[3];
    WData/*95:0*/ __Vtemp1493[3];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_131 
        = (((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits) 
                            >> 4U))) << 2U) | (((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_124) 
                                                     >> 2U))) 
                                                << 1U) 
                                               | (1U 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_124) 
                                                      >> 3U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_124) 
                                                        >> 1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pte_cache_hit));
    __Vtemp1491[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp1491[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp1491[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_47 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp1492, (~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                  << 2U)))));
    VL_EXTEND_WI(66,32, __Vtemp1493, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_456));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1021 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
                  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                       ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                          >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                     ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                                        >> 9U) : ((1U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                                                   >> 0x12U)
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_366 
                                                   >> 0x1bU)))) 
                     | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                         ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                          & (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[2U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[1U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[0U])) 
                                                   >> 0xcU)))))
                         : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                             ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[2U])) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[1U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[0U])) 
                                                       >> 0xcU)))))
                             : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                 ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[2U])) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[1U])) 
                                                         << 0xbU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[0U])) 
                                                           >> 0x15U)))))
                                 : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_959[0U])) 
                                                           >> 0x1eU)))))))))
                  : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)) 
                     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_938) 
                         | VL_GTE_W(3, __Vtemp1491, __Vtemp1492)) 
                        | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_917)) 
                           & VL_LT_W(3, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_457, __Vtemp1493))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3315(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3315\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_554 
        = (1U & (((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
                   ? (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                        ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                           >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                      ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                                         >> 9U) : (
                                                   (1U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                                                    >> 0x12U)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_303 
                                                    >> 0x1bU)))) 
                      | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                          ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                           & (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[0U])) 
                                                    >> 0xcU)))))
                          : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                              ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[2U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[0U])) 
                                                        >> 0xcU)))))
                              : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                  ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[2U])) 
                                                       << 0x2bU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[1U])) 
                                                          << 0xbU) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[0U])) 
                                                            >> 0x15U)))))
                                  : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[2U])) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[1U])) 
                                                          << 2U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_413[0U])) 
                                                            >> 0x1eU)))))))))
                   : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)) 
                      | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_449)) 
                         | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_470)))) 
                 & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
                     ? (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                          ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_312 
                             >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                        ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_312 
                                           >> 9U) : 
                                       ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                         ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_312 
                                            >> 0x12U)
                                         : (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_312 
                                            >> 0x1bU)))) 
                        | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                            ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[2U])) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[1U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[0U])) 
                                                      >> 0xcU)))))
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[2U])) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[1U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[0U])) 
                                                          >> 0xcU)))))
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                    ? (VL_ULL(0) != 
                                       (VL_ULL(0x1fffffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[2U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[1U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[0U])) 
                                                 >> 0x15U)))))
                                    : (VL_ULL(0) != 
                                       (VL_ULL(0xfffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[2U])) 
                                            << 0x22U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[1U])) 
                                               << 2U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_491[0U])) 
                                                 >> 0x1eU)))))))))
                     : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)) 
                        | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_470) 
                            | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_527))) 
                           | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_449)) 
                              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_548)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3316(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3316\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_587256 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5225) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__hella_req_phys));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___GEN_80 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_hellacache_s2_xcpt_ae_ld));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___GEN_64 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_hellacache_s2_xcpt_ae_ld) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___GEN_65 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_hellacache_s2_xcpt_ae_ld) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_req_dest)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_41 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                            >> 0xbU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_39))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_44 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                            >> 0xbU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_42))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_47 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                            >> 0xbU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_45))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3317(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3317\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_50 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_298[3U] 
                                            >> 0xbU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_48))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2015 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1967) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_31)) 
           & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_5)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_bits_sink))
                  : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__clear_valid 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_89) 
                 & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_89) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_resp_bits_taken 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim_io_resp_valid) 
                  & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim_io_resp_bits_rowdata) 
                      >> ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_154_cfi_idx) 
                          << 1U)) >> 1U))) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_161));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3318(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3318\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_14 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_74)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_74)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_12) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_12))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_9 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_60)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_60)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_7) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_7))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3319(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3319\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_8 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_53)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_53)
                     ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state))
                          ? 1U : 0U) << 1U) : ((0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT__state))
                                                ? 1U
                                                : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3320(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3320\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fuzz_ld 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_fuzz_ld;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fuzz_st 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_fuzz_st;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stale_pdst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stale_pdst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fuzz_st 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_fuzz_st;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fuzz_ld 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_fuzz_ld;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stale_pdst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stale_pdst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lbq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lbq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 
                = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_2;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
                                             >> 0xaU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3321(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3321\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277) 
           & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                         >> 0x33U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277) 
           & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                      >> 0x33U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285) 
           & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                         >> 0x33U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285) 
           & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
                      >> 0x33U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_81 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase) 
           | (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_89 
        = (7U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div)
                    ? 3U : 0U) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
                                   ? 6U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A) 
                                                   - (IData)(1U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S) 
              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd 
        = (((((((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4) 
                        | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A3_div)) 
                       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A1_div)) 
                      | (0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                     | (9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                    | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                   | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B3_sqrt)) 
                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B2_div)) 
               | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B1_sqrt)) 
              | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
             << 3U) | ((((((((((((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
                                 | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
                                    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PA)))) 
                                | (9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                               | (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                              | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                             | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt)) 
                           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B2_sqrt)) 
                          | ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB)))) 
                         | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
                        | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
                       << 2U)) | ((((((((((((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
                                            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A1_div)) 
                                           | (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                                          | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                                         | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                                        | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                                       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B3_sqrt)) 
                                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B1_sqrt)) 
                                     | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
                                    | (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
                                   << 1U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0) 
                                              | (6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
                                             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B2_sqrt))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3322(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3322\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
             | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
            | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1015) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_961 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_913) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_922)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_913) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_to_bus_named_periphery_bus__DOT__widget__DOT__TLMonitor__DOT___T_1025)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                  >> 9U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_961 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_913) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_922)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_913) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1025)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                  >> 9U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_961 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_913) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_922)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_913) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1025)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
                                                  >> 9U))))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_870 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_162) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_163)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3323(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3323\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_1_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_162) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_163));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1678 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_153) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_154)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_4)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar_auto_in_0_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_153) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_154));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1015) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_36) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_43))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_48 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_36) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_46))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_51 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_39) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_49))));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_39) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__TLMonitor__DOT___T_52))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3324(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3324\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail_push_tail_data 
        = ((0x14U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index))
            ? vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail
           [vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index]
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_48 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                        >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_tag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_tag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ldst_val 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_ldst_val;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_rxq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_rxq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_csr_addr 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_csr_addr;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_cfi_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_bpd_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stat_bpd_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_btb_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stat_btb_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_info 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_info;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_takens 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_takens;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bim_resp_rowdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bim_resp_rowdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_wdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_debug_wdata;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3325(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3325\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_bp_debug_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_bp_debug_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_replay_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_replay_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_pf_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_pf_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lrs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_btb_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_pc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_debug_pc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_events_fetch_seq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_debug_events_fetch_seq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_ma_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_ma_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fp_single 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fp_single;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_bpd_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stat_bpd_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_btb_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stat_btb_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_resp_history 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_history;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_xcpt_ae_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_ae_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_bp_xcpt_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_bp_xcpt_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_debug_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_debug_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bpd_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_blame;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3326(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3326\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_prediction_bim_resp_entry_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bim_resp_entry_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stat_brjmp_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stat_brjmp_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ftq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_ftq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_jal 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_jal;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_rvc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_rvc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_sys_pc2epc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_sys_pc2epc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_edge_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_edge_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pc_lob 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_pc_lob;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_mem_size;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lrs2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_frs3_en 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_frs3_en;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_allocate_brtag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_allocate_brtag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ldst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_ldst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lrs1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_br_or_jmp = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_br_or_jmp 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_br_or_jmp;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3327(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3327\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_bypassable 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_bypassable;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fencei 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_fencei;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_fence;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_iq_type 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_iq_type;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_call 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_call;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_ret 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_ret;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_jump 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_jump;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fp_val;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_flush_on_commit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_flush_on_commit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_exc_cause 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_exc_cause;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_events_fetch_seq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_debug_events_fetch_seq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bp_xcpt_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_bp_xcpt_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_ma_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_xcpt_ma_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_ae_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_xcpt_ae_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_fp_single 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_fp_single;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_bpd_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stat_bpd_made_pred;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3328(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3328\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_btb_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stat_btb_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_info 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_resp_info;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_takens 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_resp_takens;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bim_resp_rowdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bim_resp_rowdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_bpd_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stat_bpd_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_debug_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_brjmp_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stat_brjmp_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_replay_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_replay_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_wdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_debug_wdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_resp_history 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_resp_history;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_debug_pc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_debug_pc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bim_resp_entry_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bim_resp_entry_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stat_btb_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stat_btb_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_csr_addr 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_csr_addr;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_rxq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_rxq_idx;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3329(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3329\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_lrs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_xcpt_pf_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_xcpt_pf_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bp_debug_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_bp_debug_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_sys_pc2epc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_sys_pc2epc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_amo 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_amo;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_btb_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_bpd_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_mem_size;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_lrs2 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_frs3_en 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_frs3_en;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_allocate_brtag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_allocate_brtag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ldst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_ldst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_lrs1 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3330(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3330\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fencei 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_fencei;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_fence;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_iq_type 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_iq_type;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_flush_on_commit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_flush_on_commit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_lbq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_lbq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_pc_lob 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_pc_lob;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_imm_packed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_exc_cause 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_exc_cause;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_lbq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uses_lbq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_exception 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_exception;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_exception 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_exception;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_prs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_prs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_ldq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_ldq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3331(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3331\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed;
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH2 
        = ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_242) 
                << 1U) | (0x7e00U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_242) 
                                     << 9U)))) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__robin_request));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_unique 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_unique;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_unique 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_unique;
    }
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_221 
        = ((0xddU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x1b0000000c000000)
            : ((0xdcU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x300000001000000)
                : ((0xdbU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x5201000004000000)
                    : ((0xdaU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x300000000000000)
                        : ((0xd9U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x3030303030306340)
                            : ((0xd8U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x72656c6c6f72746e)
                                : ((0xd7U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x6f632d7470757272)
                                    : ((0xd6U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x65746e6901000000)
                                        : ((0xd5U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x200000000100000)
                                            : ((0xd4U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x3000000f010000)
                                                : (
                                                   (0xd3U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x800000003000000)
                                                    : 
                                                   ((0xd2U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x30726f7272)
                                                     : 
                                                    ((0xd1U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x652c657669666973)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_208)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3332(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3332\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_brq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_brq_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_140 
        = ((VL_ULL(0xf0f0f0f0f0f0f0f) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_130 
                                         >> 4U)) | 
           (VL_ULL(0xf0f0f0f0f0f0f0f0) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_130 
                                          << 4U)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_ret 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_ret;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_call 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_call;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_jump 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_jump;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_rvc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_rvc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_prediction_btb_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_btb_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_edge_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_edge_inst;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2078 
        = (0xffU & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2060))
                     ? (~ ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2069)) 
                           | (0xfU & ((IData)(1U) << 
                                      (2U | (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2060) 
                                                   >> 2U)))))))
                     : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2069) 
                        | (0xfU & ((IData)(1U) << (2U 
                                                   | (1U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2060) 
                                                         >> 2U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_target 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3__DOT__bpd_csignals_0)
            ? (VL_ULL(0xfffffffffe) & (VL_ULL(6) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_pc))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (((0x80000000U 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)
                                                                                 ? 0xfffffU
                                                                                 : 0U) 
                                                                                >> 0x13U))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)
                                                                 ? 0xfffffU
                                                                 : 0U) 
                                                               << 0xcU) 
                                                              | ((0x800U 
                                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
                                                                          >> 7U)))))))))))
            : (VL_ULL(0xfffffffffe) & (VL_ULL(6) + 
                                       ((~ (VL_ULL(7) 
                                            | (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_pc))) 
                                        + (((QData)((IData)(
                                                            (0xffU 
                                                             & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (((0x80000000U 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)
                                                                                 ? 0xfffU
                                                                                 : 0U) 
                                                                                >> 0xbU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((0x80000000U 
                                                                 & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)
                                                                 ? 0xfffU
                                                                 : 0U) 
                                                               << 0x14U) 
                                                              | ((0xff000U 
                                                                  & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst) 
                                                                 | ((0x800U 
                                                                     & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
                                                                        >> 9U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
                                                                             >> 0x14U)))))))))))));
}
