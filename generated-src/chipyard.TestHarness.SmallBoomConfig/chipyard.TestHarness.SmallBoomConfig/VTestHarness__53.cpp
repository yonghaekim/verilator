// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2875(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2875\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___GEN_150));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___GEN_150));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___GEN_150));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___GEN_150));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT___GEN_150));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___GEN_150));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___GEN_150));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lbq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lbq_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_p2_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___GEN_153)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__next_p2_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___GEN_153)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__next_p2_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___GEN_153)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__next_p2_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___GEN_153)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2876(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2876\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__next_p2_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT___GEN_153)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__next_p2_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___GEN_153)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__next_p2_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___GEN_153)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 
                = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_7;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_34 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_30) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_30)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_34 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_30) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_30)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
        = ((0xff00ffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
                         >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
                                                   << 8U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2877(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2877\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT___T_178 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PC) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PC)) 
              | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PC)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PA 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_S;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_81) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_89;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA_normalCase) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PA 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_rm;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_C4_sqrt 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_97 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_112 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           | (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zSigma1_B4 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
            ? (VL_ULL(0x3fffffffffff) & (~ (((QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U])) 
                                             << 0x33U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[2U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[1U])) 
                                                  >> 0xdU)))))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B3_sqrt 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B2_sqrt 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B2_div 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2878(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2878\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B1_sqrt 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PB));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) 
             | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB))));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PA 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_43)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_56));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_57)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_59));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PA 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_60));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                ? (0U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[2U] 
                                 << 3U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt_io_b[1U] 
                                           >> 0x1dU))))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_61));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ldst_val 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_ldst_val;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2879(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2879\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ftq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_ftq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_bypassable 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_bypassable;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_fu_code 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_fu_code;
    }
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[0U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_273)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[0U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_274)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[0U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[1U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_273)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[1U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_274)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[1U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[2U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_273)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[2U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_274)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[2U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_330[3U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_273)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[3U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_238))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_274)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_303_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[3U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_433[0U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_376)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[0U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_377)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[0U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_433[1U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_376)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[1U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_377)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[1U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_433[2U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_376)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[2U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_377)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[2U]
                       : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_433[3U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_376)
              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_0))
             ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[3U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_341))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_377)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_406_1))
                       ? vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[3U]
                       : 0U));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_prs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_prs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_prs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_prs3;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2880(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2880\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_dst_rtype;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_tag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_tag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_ldst_val 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_ldst_val;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_rxq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_rxq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_csr_addr 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_csr_addr;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_cfi_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_stat_bpd_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_stat_bpd_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_stat_btb_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_stat_btb_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bpd_resp_info 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_resp_info;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bpd_resp_takens 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_resp_takens;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bim_resp_rowdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bim_resp_rowdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bpd_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_btb_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_btb_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_btb_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_debug_wdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_debug_wdata;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2881(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2881\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_bp_debug_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_bp_debug_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_replay_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_replay_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_xcpt_pf_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_xcpt_pf_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lrs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bpd_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_btb_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_btb_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_debug_pc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_debug_pc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_debug_events_fetch_seq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_debug_events_fetch_seq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_xcpt_ma_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_xcpt_ma_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_fp_single 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_fp_single;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_stat_bpd_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_stat_bpd_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_stat_btb_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_stat_btb_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bpd_resp_history 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_resp_history;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_xcpt_ae_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_xcpt_ae_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_bp_xcpt_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_bp_xcpt_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_debug_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_debug_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bpd_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_blame;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2882(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2882\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_br_prediction_bim_resp_entry_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bim_resp_entry_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_stat_brjmp_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_stat_brjmp_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_ftq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_ftq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_jal 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_jal;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_rvc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_rvc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_sys_pc2epc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_sys_pc2epc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_edge_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_edge_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_pc_lob 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_pc_lob;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_mem_size;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lrs2 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_frs3_en 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_frs3_en;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_allocate_brtag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_allocate_brtag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_ldst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_ldst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lrs1 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_br_or_jmp = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_br_or_jmp 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_br_or_jmp;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2883(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2883\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_bypassable 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_bypassable;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_fencei 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_fencei;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_fence;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_iq_type 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_iq_type;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_is_fence;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_call 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_call;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_ret 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_ret;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_jump 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_jump;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_flush_on_commit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_flush_on_commit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_exc_cause 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_exc_cause;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2884(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2884\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_debug_events_fetch_seq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_debug_events_fetch_seq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_bp_xcpt_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_bp_xcpt_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_xcpt_ma_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_xcpt_ma_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_xcpt_ae_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_xcpt_ae_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_fp_single 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_fp_single;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_stat_bpd_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_stat_bpd_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_stat_btb_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_stat_btb_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_resp_info 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bpd_resp_info;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_resp_takens 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bpd_resp_takens;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bim_resp_rowdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bim_resp_rowdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bpd_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_stat_bpd_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_stat_bpd_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_debug_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_debug_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_stat_brjmp_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_stat_brjmp_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_replay_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_replay_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_debug_wdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_debug_wdata;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2885(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2885\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_resp_history 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bpd_resp_history;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_debug_pc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_debug_pc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bim_resp_entry_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bim_resp_entry_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_stat_btb_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_stat_btb_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_csr_addr 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_csr_addr;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_rxq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_rxq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_lrs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_lrs3;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_xcpt_pf_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_xcpt_pf_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_bp_debug_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_bp_debug_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_sys_pc2epc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_sys_pc2epc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_btb_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_btb_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bpd_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_bpd_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_bpd_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_mem_size;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2886(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2886\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_btb_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_lrs2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_frs3_en 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_frs3_en;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_allocate_brtag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_allocate_brtag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_ldst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_ldst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_lrs1;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_fencei 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_fencei;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_fence;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_iq_type 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_iq_type;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_flush_on_commit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_flush_on_commit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_lbq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uses_lbq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_pc_lob 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_pc_lob;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_179 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_112 
           != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__bj_addr);
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_imm_packed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_exc_cause 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_exc_cause;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_lbq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uses_lbq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_exception 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_exception;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2887(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2887\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*191:0*/ __Vtemp1186[6];
    WData/*191:0*/ __Vtemp1187[6];
    WData/*95:0*/ __Vtemp1190[3];
    WData/*95:0*/ __Vtemp1191[3];
    WData/*95:0*/ __Vtemp1194[3];
    WData/*95:0*/ __Vtemp1195[3];
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_exception 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_exception;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_prs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_prs3;
    }
    __Vtemp1186[0U] = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                        ? 0xffffffffU : 0U);
    __Vtemp1186[1U] = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                        ? 0xffffffffU : 0U);
    __Vtemp1186[2U] = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                        ? 0xffffffffU : 0U);
    __Vtemp1186[3U] = ((0xffff8000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                                & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                                    ? 
                                                   (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
                                                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig))) 
                                       << 0xfU)) | 
                       ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                         ? 0x7fffU : 0U));
    __Vtemp1186[4U] = ((0x7fffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                                ? (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
                                                : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig))) 
                                   >> 0x11U)) | (0xffff8000U 
                                                 & ((IData)(
                                                            ((VL_ULL(0x3fffffffffffff) 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                                                  ? 
                                                                 (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
                                                                  : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)) 
                                                             >> 0x20U)) 
                                                    << 0xfU)));
    __Vtemp1186[5U] = (0x7fffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                                ? (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
                                                : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)) 
                                           >> 0x20U)) 
                                  >> 0x11U));
    VL_SHIFTRS_WWI(165,165,8, __Vtemp1187, __Vtemp1186, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp1187[0U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp1187[1U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp1187[2U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp1187[3U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp1187[4U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0x1fU & __Vtemp1187[5U]);
    __Vtemp1190[0U] = 0U;
    __Vtemp1190[1U] = 0U;
    __Vtemp1190[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1191, __Vtemp1190, 
                   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp1194[0U] = 0U;
    __Vtemp1194[1U] = 0U;
    __Vtemp1194[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp1195, __Vtemp1194, 
                   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_126 
        = ((0xfU & ((__Vtemp1191[1U] << 4U) | (__Vtemp1191[0U] 
                                               >> 0x1cU))) 
           | (0xf0U & ((__Vtemp1195[1U] << 0xcU) | 
                       (0xff0U & (__Vtemp1195[0U] >> 0x14U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_439 
        = (((QData)((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_391 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((7U == (7U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                             << 3U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                               >> 0x1dU))))
                               ? ((0x80000000U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                           >> 0x20U)) 
                                                  << 0x1fU)) 
                                  | ((0x7f800000U & 
                                      (((VL_GTS_III(1,10,10, 0x82U, 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                                >> 0x17U))))
                                          ? 0U : ((0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                              >> 0x17U))) 
                                                  - (IData)(0x81U))) 
                                        | ((((3U == 
                                              (3U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                             >> 0x1eU)))) 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                        >> 0x1dU))) 
                                            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_407))
                                            ? 0xffU
                                            : 0U)) 
                                       << 0x17U)) | 
                                     (0x7fffffU & (
                                                   VL_GTS_III(1,10,10, 0x82U, 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                                          >> 0x17U))))
                                                    ? 
                                                   (0xffffffU 
                                                    & ((0xffffffU 
                                                        & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_413 
                                                           >> 1U)) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           - 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                                       >> 0x17U)))))))
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_407)
                                                     ? 0U
                                                     : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_413)))))
                               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_391)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2888(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2888\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          >> 0x36U))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 0x35U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x34U)))
                                                   ? 2U
                                                   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_393))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 
        = ((VL_ULL(0) != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160) 
           | (VL_ULL(0) != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_ldq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_ldq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uses_stq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uses_ldq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uses_ldq;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_111 
        = ((((0U != (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                           >> 0x16U))) << 6U) | (((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                                       >> 0x12U))) 
                                                  << 5U) 
                                                 | (((0U 
                                                      != 
                                                      (0xfU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                                          >> 0xeU))) 
                                                     << 4U) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                                             >> 0xaU))) 
                                                        << 3U) 
                                                       | (((0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                                                >> 6U))) 
                                                           << 2U) 
                                                          | (((0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                                                   >> 2U))) 
                                                              << 1U) 
                                                             | (0U 
                                                                != 
                                                                (0xcU 
                                                                 & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
                                                                    << 2U))))))))) 
           & ((0x20U & ((IData)((VL_ULL(0x7ffff) & 
                                 (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                     >> 2U))) 
                                  >> 0xeU))) << 5U)) 
              | ((0x10U & ((IData)((VL_ULL(0x3ffff) 
                                    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                          >> 2U))) 
                                       >> 0xfU))) << 4U)) 
                 | ((8U & ((IData)((VL_ULL(0x1ffff) 
                                    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                      (0x1fU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                          >> 2U))) 
                                       >> 0x10U))) 
                           << 3U)) | ((4U & ((IData)(
                                                     (VL_ULL(0xffff) 
                                                      & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                                        (0x1fU 
                                                                         & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                            >> 2U))) 
                                                         >> 0x11U))) 
                                             << 2U)) 
                                      | ((2U & ((IData)(
                                                        (VL_ULL(0x7fff) 
                                                         & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                                           (0x1fU 
                                                                            & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                               >> 2U))) 
                                                            >> 0x12U))) 
                                                << 1U)) 
                                         | (1U & (IData)(
                                                         (VL_ULL(0x3fff) 
                                                          & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
                                                                            (0x1fU 
                                                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
                                                                                >> 2U))) 
                                                             >> 0x13U))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2889(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2889\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1198[3];
    WData/*95:0*/ __Vtemp1199[3];
    // Body
    __Vtemp1198[0U] = (IData)(((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                ? VL_ULL(0x1fffffffffffff)
                                : VL_ULL(0)));
    __Vtemp1198[1U] = ((0xffe00000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                         ? (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
                                         : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig) 
                                       << 0x15U)) | (IData)(
                                                            (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                                               ? VL_ULL(0x1fffffffffffff)
                                                               : VL_ULL(0)) 
                                                             >> 0x20U)));
    __Vtemp1198[2U] = (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__doSubMags)
                                    ? (~ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
                                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig) 
                                  >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp1199, __Vtemp1198, (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp1199[0U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp1199[1U];
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp1199[2U]);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
        = (0x3ffffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
                           & (0U != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_23_sig 
                                                 >> 2U) 
                                                | (0x3fffffffU 
                                                   & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_26)) 
                                     & (0U != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
                                    & (0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95))
                                    ? (1U | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                                             << 1U))
                                    : 0U))) : ((0x1ffffffU 
                                                & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_23_sig 
                                                    & (~ 
                                                       (3U 
                                                        | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
                                                           << 2U)))) 
                                                   >> 2U)) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_26)) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT___T_247 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__RecFNToIN_io_intExceptionFlags) 
                  >> 2U) | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__RecFNToIN_1__DOT__invalidExc)) 
                            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_overflow))));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_imm_packed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_57) {
        vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_beat 
            = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_57) {
        vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set 
            = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set)
                          : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                              << 0x14U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                                           >> 0xcU))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2890(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2890\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_57) {
        vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way)
                      : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                          << 0x1aU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                                       >> 6U))));
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_unique 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_unique;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_unique 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_unique;
    }
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_io_enq_bits_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_17)) 
           | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_16)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_user 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
            ? vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_user
           [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_38));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
            ? vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_size
           [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_size));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_37))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_42 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_40))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_43))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2891(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2891\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_48 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_46))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_37))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_42 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_40))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_43))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_48 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_46))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_37))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2892(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2892\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_42 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_40))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_43))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_48 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_46))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_37))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_42 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_40))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_43))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2893(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2893\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_48 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_46))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_37))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_42 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_40))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_43))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_48 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_46))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_37))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2894(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2894\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_42 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_30) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_40))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_43))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_48 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_33) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_46))));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_11 
        = ((9U == (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                           >> 9U))) ? 9U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_10));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_id 
        = ((9U == (0xfU & (vlTOPp->TestHarness__DOT__top__DOT__cork__DOT___T_274[3U] 
                           >> 9U))) ? 9U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_10));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_8 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_61)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_65)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_510 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_61)) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_65)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_61)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_65));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2895(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2895\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_68 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_61)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_773 
        = (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___T_699) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_15)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_16))));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_645 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_597) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_606)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_15 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_597) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_709)))
            ? (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_source___05FT_18_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_91 
        = ((0x5bU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x300000001000000)
            : ((0x5aU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0xfe00000004000000)
                : ((0x59U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x300000000003933)
                    : ((0x58U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x76732c7663736972)
                        : ((0x57U == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0xf50000000b000000)
                            : ((0x56U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x300000020000000)
                                : ((0x55U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0xea00000004000000)
                                    : ((0x54U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x300000001000000)
                                        : ((0x53U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0xdf00000004000000)
                                            : ((0x52U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x300000000400000)
                                                : (
                                                   (0x51U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0xd200000004000000)
                                                    : 
                                                   ((0x50U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x300000040000000)
                                                     : 
                                                    ((0x4fU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0xc500000004000000)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_78)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2896(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2896\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_imm_packed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_brq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_brq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_brq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_brq_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT___T_45 
        = ((QData)((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT__shin_r 
                            >> 0x20U))) | (VL_ULL(0xffffffff00000000) 
                                           & ((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT__shin_r)) 
                                              << 0x20U)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_ret 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_ret;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_call 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_call;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_jump 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_jump;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_is_rvc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_is_rvc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_prediction_btb_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_prediction_btb_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_edge_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_edge_inst;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_pc = VL_ULL(0x10040);
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_replay)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_pc 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_brDest 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_replay)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_brDest)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_855_bits 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_843))
            ? (0x842023U | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_50) 
                                           << 0x14U)) 
                            | ((0x700000U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                      >> 0x12U)) 
                                             << 0x14U)) 
                               | ((0x38000U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x17U)) 
                                               << 0xfU)) 
                                  | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_50) 
                                               << 7U))))))
            : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_843))
                ? (0x843027U | ((0xe000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_28) 
                                               << 0x14U)) 
                                | ((0x700000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x12U)) 
                                                 << 0x14U)) 
                                   | ((0x38000U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x17U)) 
                                                   << 0xfU)) 
                                      | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_28) 
                                                   << 7U))))))
                : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_843))
                    ? (0x84203fU | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_50) 
                                                   << 0x14U)) 
                                    | ((0x700000U & 
                                        ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                  >> 0x12U)) 
                                         << 0x14U)) 
                                       | ((0x38000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x17U)) 
                                              << 0xfU)) 
                                          | (0xf80U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_50) 
                                                << 7U))))))
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_843))
                        ? (0x43403U | ((0xc000000U 
                                        & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                    >> 0x15U)) 
                                           << 0x1aU)) 
                                       | ((0x3800000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x1aU)) 
                                              << 0x17U)) 
                                          | ((0x38000U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x17U)) 
                                                 << 0xfU)) 
                                             | (0x380U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x12U)) 
                                                   << 7U))))))
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_847_bits))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2897(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2897\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_855_bits 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_843))
            ? (0x842023U | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_50) 
                                           << 0x14U)) 
                            | ((0x700000U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                      >> 0x22U)) 
                                             << 0x14U)) 
                               | ((0x38000U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x27U)) 
                                               << 0xfU)) 
                                  | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_50) 
                                               << 7U))))))
            : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_843))
                ? (0x843027U | ((0xe000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_28) 
                                               << 0x14U)) 
                                | ((0x700000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x22U)) 
                                                 << 0x14U)) 
                                   | ((0x38000U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x27U)) 
                                                   << 0xfU)) 
                                      | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_28) 
                                                   << 7U))))))
                : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_843))
                    ? (0x84203fU | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_50) 
                                                   << 0x14U)) 
                                    | ((0x700000U & 
                                        ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                  >> 0x22U)) 
                                         << 0x14U)) 
                                       | ((0x38000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x27U)) 
                                              << 0xfU)) 
                                          | (0xf80U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_50) 
                                                << 7U))))))
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_843))
                        ? (0x43403U | ((0xc000000U 
                                        & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                    >> 0x25U)) 
                                           << 0x1aU)) 
                                       | ((0x3800000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x2aU)) 
                                              << 0x17U)) 
                                          | ((0x38000U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x27U)) 
                                                 << 0xfU)) 
                                             | (0x380U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x22U)) 
                                                   << 7U))))))
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_7__DOT___T_847_bits))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2898(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2898\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_849_bits 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_843))
            ? (0x43403U | ((0xc000000U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                   >> 0x30U)) 
                                          << 0x15U)) 
                           | ((0x3800000U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                      >> 0x30U)) 
                                             << 0xdU)) 
                              | ((0x38000U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x30U)) 
                                              << 8U)) 
                                 | (0x380U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x30U)) 
                                              << 5U))))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_843))
                ? (0x42403U | ((0x4000000U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x30U)) 
                                              << 0x15U)) 
                               | ((0x3800000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x30U)) 
                                                 << 0xdU)) 
                                  | ((0x400000U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x30U)) 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                                        (0x380U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x30U)) 
                                                   << 5U)))))))
                : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_845_bits));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2899(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2899\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_855_bits 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_843))
            ? (0x842023U | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_50) 
                                           << 0x14U)) 
                            | ((0x700000U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                      >> 0x12U)) 
                                             << 0x14U)) 
                               | ((0x38000U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x17U)) 
                                               << 0xfU)) 
                                  | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_50) 
                                               << 7U))))))
            : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_843))
                ? (0x843027U | ((0xe000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_28) 
                                               << 0x14U)) 
                                | ((0x700000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x12U)) 
                                                 << 0x14U)) 
                                   | ((0x38000U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x17U)) 
                                                   << 0xfU)) 
                                      | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_28) 
                                                   << 7U))))))
                : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_843))
                    ? (0x84203fU | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_50) 
                                                   << 0x14U)) 
                                    | ((0x700000U & 
                                        ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                  >> 0x12U)) 
                                         << 0x14U)) 
                                       | ((0x38000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x17U)) 
                                              << 0xfU)) 
                                          | (0xf80U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_50) 
                                                << 7U))))))
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_843))
                        ? (0x43403U | ((0xc000000U 
                                        & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                    >> 0x15U)) 
                                           << 0x1aU)) 
                                       | ((0x3800000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x1aU)) 
                                              << 0x17U)) 
                                          | ((0x38000U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x17U)) 
                                                 << 0xfU)) 
                                             | (0x380U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x12U)) 
                                                   << 7U))))))
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_1__DOT___T_847_bits))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2900(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2900\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_855_bits 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_843))
            ? (0x842023U | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_50) 
                                           << 0x14U)) 
                            | ((0x700000U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                      >> 0x22U)) 
                                             << 0x14U)) 
                               | ((0x38000U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x27U)) 
                                               << 0xfU)) 
                                  | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_50) 
                                               << 7U))))))
            : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_843))
                ? (0x843027U | ((0xe000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_28) 
                                               << 0x14U)) 
                                | ((0x700000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x22U)) 
                                                 << 0x14U)) 
                                   | ((0x38000U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x27U)) 
                                                   << 0xfU)) 
                                      | (0xf80U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_28) 
                                                   << 7U))))))
                : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_843))
                    ? (0x84203fU | ((0x6000000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_50) 
                                                   << 0x14U)) 
                                    | ((0x700000U & 
                                        ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                  >> 0x22U)) 
                                         << 0x14U)) 
                                       | ((0x38000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x27U)) 
                                              << 0xfU)) 
                                          | (0xf80U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_50) 
                                                << 7U))))))
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_843))
                        ? (0x43403U | ((0xc000000U 
                                        & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                    >> 0x25U)) 
                                           << 0x1aU)) 
                                       | ((0x3800000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x2aU)) 
                                              << 0x17U)) 
                                          | ((0x38000U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x27U)) 
                                                 << 0xfU)) 
                                             | (0x380U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x22U)) 
                                                   << 7U))))))
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_2__DOT___T_847_bits))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2901(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2901\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_849_bits 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_843))
            ? (0x43403U | ((0xc000000U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                   >> 0x30U)) 
                                          << 0x15U)) 
                           | ((0x3800000U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                      >> 0x30U)) 
                                             << 0xdU)) 
                              | ((0x38000U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x30U)) 
                                              << 8U)) 
                                 | (0x380U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x30U)) 
                                              << 5U))))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_843))
                ? (0x42403U | ((0x4000000U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x30U)) 
                                              << 0x15U)) 
                               | ((0x3800000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x30U)) 
                                                 << 0xdU)) 
                                  | ((0x400000U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x30U)) 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                   >> 0x30U)) 
                                          << 8U)) | 
                                        (0x380U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x30U)) 
                                                   << 5U)))))))
                : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_845_bits));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2902(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2902\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_744 
        = ((0x1c0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                      >> 1U)) | (0x38U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                          >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_764 
        = ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                     >> 1U)) | (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                         >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_707 
        = (0x67U | ((0x1f00000U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                   << 0x12U)) | (0xf8000U 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                    << 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_497 
        = ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65)
              ? 0x1fU : 0U) << 8U) | ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                << 1U)) 
                                      | ((0x20U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                   << 3U)) 
                                         | ((0x18U 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                >> 7U)) 
                                            | (6U & 
                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_207 
        = ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65)
              ? 0x7fU : 0U) << 5U) | (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_416 
        = ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65)
              ? 0x3ffU : 0U) << 0xbU) | ((0x400U & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                           << 2U)) 
                                         | ((0x300U 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                >> 1U)) 
                                            | ((0x80U 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                   << 1U)) 
                                               | ((0x40U 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                      >> 1U)) 
                                                  | ((0x20U 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                            >> 7U)) 
                                                        | (0xeU 
                                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                              >> 2U)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2903(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2903\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_325 
        = (0x45413U | ((0x2000000U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                      << 0xdU)) | (
                                                   (0x1f00000U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                       << 0x12U)) 
                                                   | ((0x38000U 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                                          << 8U)) 
                                                      | (0x380U 
                                                         & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_353 
        = ((4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                  >> 0xaU)) | (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                     >> 5U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_50 
        = ((0x40U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                     << 1U)) | ((0x38U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                          >> 7U)) | 
                                (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                       >> 4U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_28 
        = ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                     << 1U)) | (0x38U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                         >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_5__DOT___T_843 
        = ((0x18U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                     << 3U)) | (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
                                      >> 0xdU)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_78 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__prev_is_half) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_0) 
                       & (3U == (3U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_744 
        = ((0x1c0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                      >> 1U)) | (0x38U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                          >> 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2904(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2904\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_764 
        = ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                     >> 1U)) | (0x3cU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                         >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_707 
        = (0x67U | ((0x1f00000U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                   << 0x12U)) | (0xf8000U 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                    << 8U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_497 
        = ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in)
              ? 0x1fU : 0U) << 8U) | ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                << 1U)) 
                                      | ((0x20U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                   << 3U)) 
                                         | ((0x18U 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                >> 7U)) 
                                            | (6U & 
                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_207 
        = ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in)
              ? 0x7fU : 0U) << 5U) | (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_416 
        = ((((0x1000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in)
              ? 0x3ffU : 0U) << 0xbU) | ((0x400U & 
                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                           << 2U)) 
                                         | ((0x300U 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                >> 1U)) 
                                            | ((0x80U 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                   << 1U)) 
                                               | ((0x40U 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                      >> 1U)) 
                                                  | ((0x20U 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                            >> 7U)) 
                                                        | (0xeU 
                                                           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                              >> 2U)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2905(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2905\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_325 
        = (0x45413U | ((0x2000000U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                      << 0xdU)) | (
                                                   (0x1f00000U 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                       << 0x12U)) 
                                                   | ((0x38000U 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                                          << 8U)) 
                                                      | (0x380U 
                                                         & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_353 
        = ((4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                  >> 0xaU)) | (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                     >> 5U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_50 
        = ((0x40U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                     << 1U)) | ((0x38U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                          >> 7U)) | 
                                (4U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                       >> 4U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_28 
        = ((0xc0U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                     << 1U)) | (0x38U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                         >> 7U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander__DOT___T_843 
        = ((0x18U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                     << 3U)) | (7U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
                                      >> 0xdU)));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__bad_va) 
               | (0U != ((~ (0x2000U | ((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))
                                           ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1718))
                                           : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1718)) 
                                         & ((0x1000U 
                                             & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                         >> 9U)) 
                                                << 0xcU)) 
                                            | ((0x800U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                            >> 9U)) 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                               >> 9U)) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                  >> 9U)) 
                                                         << 9U)) 
                                                     | ((0x100U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                     >> 9U)) 
                                                            << 8U)) 
                                                        | ((0x80U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                                        >> 9U)) 
                                                               << 7U)) 
                                                           | ((0x40U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_59 
                                                                           >> 9U)) 
                                                                  << 6U)) 
                                                              | ((0x20U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_55 
                                                                              >> 9U)) 
                                                                     << 5U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_51 
                                                                                >> 9U)) 
                                                                        << 4U)) 
                                                                    | ((8U 
                                                                        & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_47 
                                                                                >> 9U)) 
                                                                           << 3U)) 
                                                                       | ((4U 
                                                                           & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_43 
                                                                                >> 9U)) 
                                                                              << 2U)) 
                                                                          | ((2U 
                                                                              & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_39 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
                                                                                >> 9U)))))))))))))))) 
                                        | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__ptw_ae_array)))) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hits))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2906(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2906\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_mem_size;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_fp_val;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_cfi_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_fu_code 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_fu_code;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_994 
        = (0xffffU & ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                     >> 1U))) ? (IData)(
                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_990 
                                                         >> 0x10U))
                       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_990)));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_617) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_old_meta_tag 
                = (0xfffffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_572);
        }
    } else {
        if ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
            if ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                if ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                    if ((4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                        if ((5U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                            if ((6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                if ((7U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                    if ((9U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                        if ((0xaU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                            if ((0xbU 
                                                 != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                                if (
                                                    (0xcU 
                                                     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                                    if (
                                                        (0xdU 
                                                         != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                                        if (
                                                            (0xeU 
                                                             != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                                            if (
                                                                (0xfU 
                                                                 != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                                                if (
                                                                    (0x11U 
                                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1332)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_618)))) {
                                                                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_617) {
                                                                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_old_meta_tag 
                                                                                = 
                                                                                (0xfffffU 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_572);
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2907(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2907\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_617) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_old_meta_tag 
                = (0xfffffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_572);
        }
    } else {
        if ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
            if ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                if ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                    if ((4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                        if ((5U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                            if ((6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                if ((7U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                    if ((9U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                        if ((0xaU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                            if ((0xbU 
                                                 != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                                if (
                                                    (0xcU 
                                                     != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                                    if (
                                                        (0xdU 
                                                         != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                                        if (
                                                            (0xeU 
                                                             != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                                            if (
                                                                (0xfU 
                                                                 != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                                                if (
                                                                    (0x11U 
                                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1332)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_618)))) {
                                                                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_617) {
                                                                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_old_meta_tag 
                                                                                = 
                                                                                (0xfffffU 
                                                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_572);
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_59) {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_85) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 1U;
            }
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_69) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_87) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 2U;
                }
            } else {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_88) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 3U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_89) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state 
                            = ((((~ (((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__meta_hazard)) 
                                          & (((((0U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
                                                | (1U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                                               | (2U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                                              | (3U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                                             | (4U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_1)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_req_is_probe_0))) 
                                 & (~ (((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__meta_hazard)) 
                                            & (((((0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
                                                  | (1U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
                                                 | (2U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
                                                | (3U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
                                               | (4U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_0)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_req_is_probe_0)))) 
                                & (((0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__req_address 
                                              >> 6U)) 
                                    != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT__req_idx)) 
                                   | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT__state))))
                                ? 4U : 1U);
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_92) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state 
                                = (((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__way_en)) 
                                    & ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                       | ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                          & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                             & ((0U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                                & ((7U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                                   | ((6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                                      & ((5U 
                                                          != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                                         & ((4U 
                                                             != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)) 
                                                            & (0xbU 
                                                               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T)))))))))))
                                    ? 7U : 5U);
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_82) {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_96) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 6U;
                                }
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_60) {
                                    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_5)) 
                                               & ((0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_893))
                                                   ? 
                                                  (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_899))
                                                   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_937_1))))) {
                                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state 
                                            = ((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__way_en))
                                                ? 9U
                                                : 0U);
                                    }
                                } else {
                                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_71) {
                                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_100) {
                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 8U;
                                        }
                                    } else {
                                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_74) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT__state))) {
                                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 9U;
                                            }
                                        } else {
                                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_70) {
                                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_103) {
                                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 0xaU;
                                                }
                                            } else {
                                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_76) {
                                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2908(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2908\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_taken 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__is_taken));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__r_f4_taken = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_fire) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__r_f4_taken 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_req_valid)
                    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_overrides_bcheck) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_may_redirect_taken))
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_valid) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_taken)));
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_pdst 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_pdst)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_pdst)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pdst)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_pdst)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_pdst)
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_pdst)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_pdst)
                                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant)
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_pdst)
                                        : 0U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_is_amo 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_amo)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_amo)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_is_amo)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_is_amo)
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_is_amo)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_is_amo)
                                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant) 
                                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_is_amo)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_stq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_stq_idx)
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_stq_idx)
                                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant)
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_stq_idx)
                                        : 0U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2909(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2909\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_dst_rtype 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_dst_rtype)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_dst_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_dst_rtype)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_dst_rtype)
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_dst_rtype)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_dst_rtype)
                                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant)
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_dst_rtype)
                                        : 2U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_uses_stq 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_uses_stq)
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_uses_stq)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uses_stq)
                                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant) 
                                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uses_stq)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__next_p1_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___GEN_151)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___T_10)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uopc)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__p1)
                                    ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uopc)))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_5) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_10)))) {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__p1) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_uopc = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2_io_out_uop_lrs1_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_10)))) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2_io_out_uop_lrs2_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_10)))) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__p1)))) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2910(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2910\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1_io_out_uop_iw_state;
            } else {
                if ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) 
                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mispredict)) 
                     & (0U != ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_br_mask))))) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___T_8) {
                            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___T_10)))) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state = 0U;
                            }
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___T_5) {
                                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___T_10)))) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm))) 
                           & (0U != (2U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                          | ((((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                              | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                >> 2U))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                     & (0U != (2U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                    & (0U == (1U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))
                                    ? 1U : 0U))) : 
                         ((0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                         >> 2U)) | 
                          (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
                            ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2911(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2911\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT___T_40 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                          | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm))) 
                                         & (VL_ULL(0) 
                                            != (VL_ULL(2) 
                                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                        | ((((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                            | ((3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                  >> 2U))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                                   & (VL_ULL(0) 
                                                      != 
                                                      (VL_ULL(2) 
                                                       & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                                  & (VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(1) 
                                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))
                                                  ? VL_ULL(1)
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
                                               ? VL_ULL(1)
                                               : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___GEN_146));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 1U;
            } else {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15))) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_75) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 0U;
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2912(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2912\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_out_uop_iw_state;
            } else {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_13))) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_75) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_8) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state = 0U;
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_5) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_out_uop_iw_state;
            } else {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_11))) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_75) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_8) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state = 0U;
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_5) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_out_uop_iw_state;
            } else {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_9))) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_75) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_8) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state = 0U;
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_5) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2913(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2913\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_out_uop_iw_state;
            } else {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_7))) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___T_75) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___T_8) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state = 0U;
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___T_5) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_out_uop_iw_state;
            } else {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_5))) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___T_75) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___T_8) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state = 0U;
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT___T_5) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p1)
                                ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uopc))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___T_5) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_uopc = 3U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lrs1_rtype 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_8)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_5)
                        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p1)
                            ? 2U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1_rtype))
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs1_rtype))));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___T_5) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p1) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lrs1_rtype = 2U;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lrs2_rtype 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_8)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_5)
                        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__p1)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2_rtype)
                            : 2U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_lrs2_rtype))));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__p1)))) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_lrs2_rtype = 2U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2914(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2914\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1_io_in_uop_valid) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2_io_out_uop_iw_state;
            } else {
                if (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__state))
                      ? 1U : 0U)) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_75) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state = 0U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state = 0U;
                        } else {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_8) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state = 0U;
                            } else {
                                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT___T_5) {
                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_122 
        = (0x3ffffffU & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
                           & (0U != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_96)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_100)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
                                                 >> 2U) 
                                                | (0x3fffffffU 
                                                   & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_89)))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_divsqrt_fin_rm)) 
                                     & (0U != vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_96)) 
                                    & (0U == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_98))
                                    ? (1U | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                                             << 1U))
                                    : 0U))) : ((0x1ffffffU 
                                                & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
                                                    & (~ 
                                                       (3U 
                                                        | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                                                           << 2U)))) 
                                                   >> 2U)) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_divsqrt_fin_rm)) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_100))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_95 
                                                   >> 1U)
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2915(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2915\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__rrd_uops_0_rob_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_7_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_rob_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_6_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_5_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_4_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_rob_idx)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_3_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_rob_idx)
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_2_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_2__DOT__slot_uop_rob_idx)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_1_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__slot_uop_rob_idx)
                                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__issue_slots_0_grant)
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_0__DOT__slot_uop_rob_idx)
                                        : 0U))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__is_hit_again 
        = (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_119)) 
            | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_119)) 
               | ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_119)) 
                  | ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_119)) 
                     | ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_119)) 
                        | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_119)) 
                           | (0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_119)))))))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_470));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__is_hit_again 
        = (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_119)) 
            | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_119)) 
               | ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_119)) 
                  | ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_119)) 
                     | ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_119)) 
                        | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_119)) 
                           | (0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_119)))))))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_470));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3513_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3510 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2916(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2916\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3575_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3572 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3637_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3634 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3699_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3696 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3761_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3758 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3823_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3820 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3885_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_hash 
                          >> 1U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2917(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2917\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3882 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_3947_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3944 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4009_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4006 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4071_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4068 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4133_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4130 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4195_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4192 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2918(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2918\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4257_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4254 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4319_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4316 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4381_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4378 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___brq_T_4443_bits_prev 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_hash 
                          >> 1U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4440 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_base 
                                   + ((QData)((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_hash 
                                                       ^ 
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_prev 
                                                        & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__bitmap_size)))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__forwarding_age_logic_0_io_youngest_st_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__do_st_search_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1395)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_stq_incoming_e_0_bits_uop_stq_idx)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_sta_retry_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_stq_retry_e_bits_uop_stq_idx)
                    : 0U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0)
                               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_incoming_0)
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_incoming_e_0_bits_uop_stq_idx)
                                   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_retry_0)
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_retry_e_bits_uop_stq_idx)
                                       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_wakeup_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_wakeup_e_bits_uop_stq_idx)
                                           : 0U))) : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_brq_idx 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s1_req_0_uop_brq_idx;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2919(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2919\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clear_br) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4493;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_pdst 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_29)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_0_pdst));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_e_0_bits_st_dep_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_incoming_e_0_bits_st_dep_mask)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_retry_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_retry_e_bits_st_dep_mask)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_wakeup_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_wakeup_e_bits_st_dep_mask)
                    : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_stq_idx_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1395)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_stq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_sta_retry_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1656)
                : 0U));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ctrl_is_load 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xcU] 
                         >> 0xfU));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ctrl_is_sta 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xcU] 
                         >> 0xeU));
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_ldq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_wakeup_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1650)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_retry_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1651)
                    : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5360 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5363 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5366 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5369 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_succeeded))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2920(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2920\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5342 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5345 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5348 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5351 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5354 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5357 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5324 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5327 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5330 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5333 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5336 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5339 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_committed)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_succeeded))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_uop_0_mem_size 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__do_st_search_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1395)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_stq_incoming_e_0_bits_uop_mem_size)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_sta_retry_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_stq_retry_e_bits_uop_mem_size)
                    : 0U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0)
                               ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_incoming_0)
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_incoming_e_0_bits_uop_mem_size)
                                   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_retry_0)
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_retry_e_bits_uop_mem_size)
                                       : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_wakeup_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_wakeup_e_bits_uop_mem_size)
                                           : 0U))) : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2921(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2921\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_addr_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1619)
            ? (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1628))
            : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_paddr_0);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_stq_idx_0 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__forwarding_age_logic_0_io_forwarding_idx;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3430 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3431 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4249 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41399 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41414 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3440 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3441 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4311 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41513 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41528 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3450 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3451 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4373 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_state));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2922(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2922\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41627 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41642 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3460 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3461 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4435 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41741 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41756 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3370 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3371 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3877 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40715 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40730 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3380 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_state));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2923(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2923\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3381 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3939 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40829 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40844 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3390 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3391 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4001 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40943 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40958 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3400 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3401 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4063 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41057 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41072 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_uop_is_fuzz_ld))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2924(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2924\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3410 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3411 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4125 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41171 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41186 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3420 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3421 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4187 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41285 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_41300 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3310 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3311 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3505 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40031 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40046 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_uop_is_fuzz_ld))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2925(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2925\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3320 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3321 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3567 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40145 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40160 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3330 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3331 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3629 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40259 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40274 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3340 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3341 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3691 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40373 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40388 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_uop_is_fuzz_ld))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2926(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2926\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3350 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3351 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3753 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40487 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40502 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3360 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3361 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3815 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_state));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40601 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_is_fuzz_st));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_40616 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_state)) 
           | ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_state))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_is_fuzz_ld)
               : ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_uop_is_fuzz_ld))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35614 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_is_amo)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_is_amo)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_is_amo)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_is_amo)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_is_amo)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_is_amo)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_is_amo)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_is_amo))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2927(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2927\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35616 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_uses_stq)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_uses_stq)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_uses_stq)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_uses_stq)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_uses_stq)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_uses_stq)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_uses_stq)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_uses_stq))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35592 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_rob_idx)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_rob_idx)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_rob_idx)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_rob_idx)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_rob_idx)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_rob_idx)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_rob_idx)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_rob_idx))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35598 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_pdst)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_pdst)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_pdst)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_pdst)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_pdst)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_pdst)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_pdst)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_pdst))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2928(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2928\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35611 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_mem_signed)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_mem_signed)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_mem_signed)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_mem_signed)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_mem_signed)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_mem_signed)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_mem_signed)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_signed))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35610 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_mem_size)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_mem_size)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_mem_size)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_mem_size)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_mem_size)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_mem_size)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_mem_size)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_mem_size))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35615 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_uses_ldq)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_uses_ldq)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_uses_ldq)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_uses_ldq)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_uses_ldq)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_uses_ldq)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_uses_ldq)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_uses_ldq))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2929(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2929\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35593 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_ldq_idx)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_ldq_idx)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_ldq_idx)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_ldq_idx)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_ldq_idx)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_ldq_idx)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_ldq_idx)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_ldq_idx))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35629 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_dst_rtype)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_dst_rtype)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_dst_rtype)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_dst_rtype)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_dst_rtype)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_dst_rtype)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_dst_rtype)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_dst_rtype))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_35568 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_br_mask)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_br_mask)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_br_mask)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_br_mask)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_br_mask)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_br_mask)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_br_mask)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_br_mask))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2930(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2930\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_stq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_29)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_0_stq_idx));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_29)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_0_ldq_idx));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_uses_stq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_29)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_0_uses_stq));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_uses_ldq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_29)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_0_uses_ldq));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s1_req_0_uop_ldq_idx;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head = 0U;
    } else {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19689))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_execute_head 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1037;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_stq 
        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s1_req_0_uop_uses_stq;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22357 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_br_mask)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_br_mask)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_br_mask)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_br_mask)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_br_mask)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_br_mask)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_br_mask)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_br_mask))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22434 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_virtual)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_virtual)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_virtual)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_virtual)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_virtual)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2931(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2931\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22436 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_executed)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_executed)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_executed)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_executed)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_executed)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_executed)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_executed)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_executed))))))));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_7_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_6_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_5_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_4_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_3_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_2_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_1_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2932(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2932\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1142) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1144))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_0_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1121) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1122))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1121) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1122))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1121) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1122))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1121) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1122))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_bits 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1127;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_975 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_814) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__will_fire_sta_retry_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_retry_idx 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_183) 
            & (0U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_commit_head)))
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_184) 
                     & (1U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_commit_head)))
                     ? 1U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_185) 
                              & (2U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_commit_head)))
                              ? 2U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_186) 
                                       & (3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_commit_head)))
                                       ? 3U : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_187) 
                                                & (4U 
                                                   >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_commit_head)))
                                                ? 4U
                                                : (
                                                   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_188) 
                                                    & (5U 
                                                       >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_commit_head)))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_189) 
                                                     & (6U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_commit_head)))
                                                     ? 6U
                                                     : 
                                                    (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_7_bits_addr_valid) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_7_bits_addr_is_virtual))
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_183)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_184)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_185)
                                                         ? 2U
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_186)
                                                          ? 3U
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_187)
                                                           ? 4U
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_188)
                                                            ? 5U
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_189)
                                                             ? 6U
                                                             : 7U)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2933(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2933\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_394 
        = ((((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_valid)
              : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_valid)
                  : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_valid)
                      : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_valid)
                          : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_valid)
                              : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_valid)
                                  : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_valid)
                                      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_valid)))))))) 
            & ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_valid)
                : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_valid)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_valid)
                        : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_valid)
                            : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_valid)
                                : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_valid)
                                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_valid)
                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_valid))))))))) 
           & (~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_succeeded)
                  : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_succeeded)
                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_succeeded)
                          : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_succeeded)
                              : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_succeeded)
                                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_succeeded)
                                      : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_succeeded)
                                          : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_succeeded))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2934(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2934\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_20533 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_uop_br_mask)
            : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_uop_br_mask)
                : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_uop_br_mask)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_uop_br_mask)
                        : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_uop_br_mask)
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_uop_br_mask)
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_uop_br_mask)
                                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_uop_br_mask))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_352 
        = ((((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_valid)
              : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_valid)
                  : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_valid)
                      : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_valid)
                          : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_valid)
                              : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_valid)
                                  : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_valid)
                                      : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_valid)))))))) 
            & ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_valid)
                : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_valid)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_valid)
                        : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_valid)
                            : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_valid)
                                : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_valid)
                                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_valid)
                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_valid))))))))) 
           & ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_virtual)
               : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual)
                   : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual)
                       : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_virtual)
                           : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_virtual)
                               : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_virtual)
                                   : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_virtual)
                                       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual)))))))));
}
