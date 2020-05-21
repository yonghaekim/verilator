// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3392(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3392\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmpHomogeneous 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_866) 
            & ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
                ? (((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                     ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_357 
                        >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                   ? (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_357 
                                      >> 9U) : ((1U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_357 
                                                 >> 0x12U)
                                                 : 
                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_357 
                                                 >> 0x1bU)))) 
                   | ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                       ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[2U])) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[1U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[0U])) 
                                                 >> 0xcU)))))
                       : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                           ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[2U])) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[0U])) 
                                                     >> 0xcU)))))
                           : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                               ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[2U])) 
                                                    << 0x2bU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[1U])) 
                                                       << 0xbU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[0U])) 
                                                         >> 0x15U)))))
                               : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[2U])) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[1U])) 
                                                       << 2U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_881[0U])) 
                                                         >> 0x1eU)))))))))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)) 
                   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_860) 
                       | (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_917))) 
                      | ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_839)) 
                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_938)))))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1021));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_size;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fp_val;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3393(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3393\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_cfi_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_141 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_151 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_125) 
                 - (IData)(1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_124 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_valid) {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_135) {
                    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_124 
                        = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_137;
                }
            } else {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_ret) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_145) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_124 
                            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_147;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pdst 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_amo;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_dst_rtype 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_91 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__next_p1_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___GEN_151)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uopc 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uopc;
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_5) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_10)))) {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p1) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uopc = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs1_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_10)))) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_bits_lrs2_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_10)))) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p1)))) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3394(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3394\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_88 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_16)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___T_77 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_77)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_77;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_85 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___GEN_145));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1)
                                ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uopc))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_5) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uopc = 3U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lrs1_rtype 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5)
                        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1)
                            ? 2U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype))
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype))));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_5) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p1) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lrs1_rtype = 2U;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lrs2_rtype 
            = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5)
                        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype)
                            : 2U) : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype))));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p1)))) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_lrs2_rtype = 2U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3395(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3395\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_74 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_11)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT___T_71 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3__DOT__slot_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_71)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_71;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_pdst 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_ldq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_ldq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_rob_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_91 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__next_p1_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___GEN_151)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3396(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3396\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_10)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1)
                                    ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc)))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_5) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_10)))) {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uopc = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_lrs1_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_out_uop_lrs1_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_10)))) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_lrs1_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_lrs2_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_out_uop_lrs2_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_10)))) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1)))) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_lrs2_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_67 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_10)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_br_tag 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_7_grant)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_tag)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_6_grant)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_tag)
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_5_grant)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_tag)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_4_grant)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_br_tag)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_3_grant)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_br_tag)
                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_2_grant)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_br_tag)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_1_grant)
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_tag)
                                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_0_grant)
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_br_tag)
                                        : 0U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3397(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3397\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_77 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__slot_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_77)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_77;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A 
        = (0x7ffffU & ((0x3ffffU & ((0x1ffU & (((IData)(
                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A4_div 
                                                         >> 0x28U)) 
                                                | (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt)
                                                       ? 0x1c8U
                                                       : 0U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt)
                                                         ? 0xc1U
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt)
                                                        ? 0x143U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt)
                                                       ? 0x89U
                                                       : 0U))) 
                                               | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S)
                                                   ? 0U
                                                   : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A)))) 
                                    * (0x1ffU & (((
                                                   ((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_0_A4_div)
                                                           ? 0x1c7U
                                                           : 0U) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_1_A4_div)
                                                             ? 0x16cU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_2_A4_div)
                                                            ? 0x12aU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_3_A4_div)
                                                           ? 0xf8U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_4_A4_div)
                                                          ? 0xd2U
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_5_A4_div)
                                                         ? 0xb4U
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_6_A4_div)
                                                        ? 0x9cU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_7_A4_div)
                                                       ? 0x89U
                                                       : 0U)) 
                                                  | (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
                                                             >> 0x2aU))) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S)
                                                     ? 0U
                                                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A)))))) 
                       + (0x3ffffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3398(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3398\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1046 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_972) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___GEN_15)) 
                 & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_1029)
                        ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1951 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1877) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_27)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_28))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1951 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1877) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_27)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___GEN_28))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3403(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3403\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_695 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_693) 
           | (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_693) 
                       >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_258 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_254) 
                  >> 2U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_254)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_1 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_711) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_dir_bits_data_dirty)) 
           | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_valid))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3404(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3404\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_1 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_711) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_dir_bits_data_dirty)) 
           | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_valid))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_1 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_711) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_dir_bits_data_dirty)) 
           | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_valid))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_1 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_711) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_dir_bits_data_dirty)) 
           | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_valid))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_1 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_711) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_dir_bits_data_dirty)) 
           | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_valid))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_1 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_711) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_dir_bits_data_dirty)) 
           | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_valid))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_1 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_711) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_dir_bits_data_dirty)) 
           | ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_dir_valid))) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT___T_25 
        = ((0xfff0000U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[5U]) 
           | (0xffc0U & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[5U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3405(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3405\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_6 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_5)) 
                 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[5U] 
                    >> 0x1cU)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_23 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy)) 
                 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_1 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                    >> 0x1fU)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_17 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                  >> 0x1fU) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_6 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_5)) 
                 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                    >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_ready) 
           & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
              >> 3U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_6 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_1)) 
                 & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U]));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_6 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__write__DOT___T_1)) 
                 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[0U] 
                    >> 0x1eU)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_19 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T)) 
                 & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                    >> 0x1eU)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_7 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T)
                  : (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                     >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_36 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_35)
                  : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[5U] 
                      << 5U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                                >> 0x1bU))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T) 
                 | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                    >> 0x1eU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3406(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3406\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_60 
        = ((0xfff0000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T)
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_27)
                            : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[5U] 
                                << 0x11U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                                             >> 0xfU))) 
                          << 0x10U)) | (0xffc0U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T)
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_31)
                                                     : 
                                                    ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[5U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                                                        >> 5U))) 
                                                   << 6U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_3 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy) 
                 | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                    >> 0x1fU)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_size)
                  : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U] 
                      << 0xeU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                                  >> 0x12U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_prio_0)
                  : (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                     >> 0x1cU)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_opcode)
                  : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U] 
                      << 8U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                                >> 0x18U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set)
                      : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                          << 0x14U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                                       >> 0xcU))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way)
                  : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                      << 0x1aU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                                   >> 6U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_offset 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)
                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_offset)
                     : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[2U] 
                         << 4U) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[1U] 
                                   >> 0x1cU))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_103 
        = ((0xe000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy)
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_24_way)
                         : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                             << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U] 
                                          >> 1U))) 
                       << 0xdU)) | ((0x1ff8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_24_set)
                                                  : 
                                                 ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U] 
                                                     >> 4U))) 
                                                << 3U)) 
                                    | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__beat)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy)
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_24_set)
                      : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                          << 0x1cU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U] 
                                       >> 4U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3407(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3407\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__busy)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_24_way)
                  : ((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
                      << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U] 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_26 
        = (((vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[4U] 
             >> 3U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__room)) 
           & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[3U]);
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
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__may_pop 
        = (((0U != (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests)) 
            | (0U != (0x7fU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests 
                               >> 7U)))) | (0U != (0x7fU 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__selected_requests 
                                                      >> 0xeU))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1045 
        = (0xffffU & ((0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1041 
                                >> 0x10U)) | vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1041));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3408(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3408\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3409(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3409\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_out 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_fcn_dw)
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT__out
            : (((QData)((IData)(((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT__out 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu__DOT__out))));
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
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_jal_idx 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_224))
            ? 0U : ((2U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_224))
                     ? 1U : ((4U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_224))
                              ? 2U : 3U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3410(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3410\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1900 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1826) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_27)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_28)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1046 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_972) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1014)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1029)
                                         ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1951 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1877) 
                     | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_27)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_28))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_43 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_34) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_41))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3411(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3411\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_46 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_34) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_44))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_49 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_37) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_47))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_52 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_37) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[3U] 
                                            >> 0xcU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_50))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb_io_resp_miss 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__resp_valid_1) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__tlb_miss)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__multipleHits));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmaHomogeneous) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmpHomogeneous));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__homogeneous 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmaHomogeneous) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmpHomogeneous));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmaHomogeneous) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__pmpHomogeneous));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_ret 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_153) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_154_bpd_type) 
              >> 1U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3412(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3412\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb_io_ras_update_bits_is_call 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_153)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_154_bpd_type) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_18 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_88)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_88)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_16) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_16))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3413(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3413\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_13 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_74)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_74)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_11) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_11))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_12 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_67)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_67)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_10) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_10))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3414(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3414\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_fuzz_ld = 0U;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_fuzz_st = 0U;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stale_pdst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dispatcher_io_ren_uops_0_bits_stale_pdst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lbq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_tail;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
                = vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
        = ((0x1fc0000U & (((0x40000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A)
                            ? ((IData)(1U) + (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
                                              >> 0x12U))
                            : (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
                               >> 0x12U)) << 0x12U)) 
           | (0x3ffffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_tag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_tag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_ldst_val 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ldst_val;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3415(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3415\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_rxq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_rxq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_csr_addr 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_csr_addr;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_cfi_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stat_bpd_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_bpd_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stat_btb_made_pred 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_btb_made_pred;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_resp_info 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_resp_info;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_resp_takens 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_resp_takens;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bim_resp_rowdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bim_resp_rowdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_btb_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_btb_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_btb_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_debug_wdata 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_wdata;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_bp_debug_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_bp_debug_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_replay_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_replay_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_xcpt_pf_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_xcpt_pf_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs3;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3416(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3416\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_taken 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_taken;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_btb_hit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_btb_hit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_debug_pc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_pc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_debug_events_fetch_seq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_events_fetch_seq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_xcpt_ma_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_xcpt_ma_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fp_single 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fp_single;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stat_bpd_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_bpd_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stat_btb_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_btb_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_resp_history 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_resp_history;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_xcpt_ae_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_xcpt_ae_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_bp_xcpt_if 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_bp_xcpt_if;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_debug_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bpd_blame 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_blame;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_br_prediction_bim_resp_entry_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bim_resp_entry_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stat_brjmp_mispredicted 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_brjmp_mispredicted;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_ftq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ftq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_jal 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_jal;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3417(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3417\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_rvc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_rvc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_sys_pc2epc 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_sys_pc2epc;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_edge_inst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_edge_inst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_pc_lob 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pc_lob;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_signed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_signed;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_brq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uses_brq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_size 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_size;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs2;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_frs3_en 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_frs3_en;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_allocate_brtag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_allocate_brtag;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_ldst 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ldst;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_br_or_jmp = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_br_or_jmp 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_br_or_jmp;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_bypassable 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_bypassable;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_fencei 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_fencei;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_fence 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_fence;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3418(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3418\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_iq_type 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_iq_type;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_call 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_call;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_ret 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_ret;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_jump 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_jump;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fp_val;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_flush_on_commit 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_flush_on_commit;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_exc_cause 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_exc_cause;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_lbq 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uses_lbq;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_exception 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_exception;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_alloc_reqs_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_ldst) 
            == ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage_io_kill)
                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_lrs3)
                 : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)
                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_lrs3)
                     : (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                  << 0xbU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              >> 0x15U)))))))) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_prs3 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_185;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage_io_kill)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_prs3 
                    = ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                            << 0xbU) 
                                           | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              >> 0x15U))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_31)
                        : ((0x1eU == (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                << 0xbU) 
                                               | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  >> 0x15U))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_30)
                            : ((0x1dU == (0x1fU & (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                      >> 0x15U))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_29)
                                : ((0x1cU == (0x1fU 
                                              & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                  << 0xbU) 
                                                 | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    >> 0x15U))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_28)
                                    : ((0x1bU == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                      << 0xbU) 
                                                     | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                        >> 0x15U))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_27)
                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT___GEN_506))))));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3419(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3419\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_ldq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_tail;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uses_ldq;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_imm_packed 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_imm_packed;
    }
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3420(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3420\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_63 
        = ((((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state)) 
             & ((0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_address___05FT_18_data 
                           >> 0x10U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_tag))) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_opcode___05FT_18_data)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_33)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_1)
               : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)));
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3421(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3421\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3422(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3422\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue 
        = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[0U] 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassMatches));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1062 
        = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_602[0U] 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__may_pop));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1049 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1045) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1045)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_unique 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_unique;
    }
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

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3423(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3423\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_brq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_brq_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_266 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_br_idx) 
           < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_24))
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_30));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_86 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_52) 
             << 7U) | (0x3fffff80U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_50) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                                                 >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_52) 
                | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_50) 
                   & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                         >> 9U)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_49) 
                                               << 5U) 
                                              | (0xfffffe0U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_47) 
                                                     << 5U) 
                                                    & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                                                       >> 4U)))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_49) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_47) 
                                                     & (~ 
                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                                                         >> 9U)))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_46) 
                                                     << 3U) 
                                                    | (0x3fffff8U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_44) 
                                                           << 3U) 
                                                          & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                                                             >> 6U)))) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_46) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_44) 
                                                           & (~ 
                                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                                                               >> 9U)))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_43) 
                                                           << 1U) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_41) 
                                                                 << 1U) 
                                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                                                                   >> 8U)))) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_43) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_41) 
                                                               & (~ 
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_225[2U] 
                                                                   >> 9U)))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_172 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_0)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_0)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_36)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3424(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3424\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_173 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_1)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_37)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_174 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_2)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_2)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_38)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_175 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_3)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_3)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_39)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_0_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_182 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_0)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_58)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_183 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_1)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_59)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_184 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_2)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_60)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3425(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3425\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_185 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_839)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_3)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_942)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_61)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___GEN_114 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__special_entry_valid_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__state)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__homogeneous)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_472 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_84)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_473 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_85)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_474 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_86)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_475 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_87)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3426(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3426\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_482 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_106)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_483 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_107)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_484 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_108)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_485 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_109)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_492 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_128)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_493 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_129)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3427(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3427\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_494 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_130)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_495 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_131)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_502 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_150)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_503 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_151)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_504 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_152)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_505 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_153)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3428(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3428\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_512 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_172)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_513 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_173)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_514 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_174)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_515 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_175)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_522 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_194)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_523 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_195)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3429(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3429\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_524 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_196)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_525 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_197)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_532 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_216)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_533 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_217)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_534 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_218)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_535 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_219)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3430(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3430\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_542 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_238)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_543 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_239)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_544 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_240)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_545 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1115))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_241)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_858 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_102_rs2) 
           & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
                                     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                         ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_66)
                                             : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))
                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))
                                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_862 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_102_rs2) 
           & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
                                     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                         ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_70)
                                             : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))
                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))
                                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3431(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3431\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_866 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_102_rs2) 
           & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
                                     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                         ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_74)
                                             : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))
                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))
                                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_870 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_102_rs2) 
           & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
                                     ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                         ? ((2U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_78)
                                             : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))
                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))
                                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_354 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_cfi_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_cfi_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_135 
        = (8U > (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_124));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_137 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_124)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_145 
        = (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_124));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_147 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_124) 
                   - (IData)(1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_pdst 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_amo 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_amo;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_dst_rtype;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3432(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3432\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_91 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__next_p1_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___GEN_151)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_95 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_18)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_77 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_77)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_77;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_85 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___GEN_145));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uopc 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uopc;
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uopc = 3U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype 
            = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uopc))
                ? 2U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs1_rtype));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs1_rtype = 2U;
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs2_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__p1)))) {
                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_lrs2_rtype = 2U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3433(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3433\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_81 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_13)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT___T_71 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT___T_71)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT___T_71;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_rob_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_pdst 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx;
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_ldq_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_ldq_idx;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx;
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_91 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__p2));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__p1 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_ld_miss) 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__next_p1_poisoned))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___GEN_151)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3434(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3434\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_8)
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)
                        : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_5)
                            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_10)
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)
                                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__p1)
                                    ? 3U : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uopc)))
                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uopc))));
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_8)))) {
                    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_5) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_10)))) {
                            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1) {
                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uopc = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_out_uop_lrs1_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_10)))) {
                        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_lrs1_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6_io_out_uop_lrs2_rtype;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_8)))) {
                if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_5) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_10)))) {
                        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__p1)))) {
                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_lrs2_rtype = 2U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_74 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_12)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__state)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_br_tag 
            = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_br_tag;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3435(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3435\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_77 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__slot_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_br_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_77)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_br_mask));
        }
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_br_mask 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_77;
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
        = vlTOPp->__Vdly__TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
        = vlTOPp->__Vdly__TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_404 
        = (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrtOp_PA)
                       ? (0x7fffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                     >> 0xaU)) : (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
                                                  >> 9U)));
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3436(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3436\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3439(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3439\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_31 
        = vlTOPp->__Vdly__TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_31;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_30 
        = vlTOPp->__Vdly__TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_30;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_29 
        = vlTOPp->__Vdly__TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_29;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_28 
        = vlTOPp->__Vdly__TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_28;
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_27 
        = vlTOPp->__Vdly__TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_27;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3440(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3440\n"); );
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

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3441(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3441\n"); );
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
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_844) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypassQueue)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1062) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bypass)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1053 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1049) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1049)));
    vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_286 
        = ((0x11eU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 3U))) ? VL_ULL(0x636578652d657261)
            : ((0x11dU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 3U))) ? VL_ULL(0x7764726168006570)
                : ((0x11cU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 3U))) ? VL_ULL(0x79745f6563697665)
                    : ((0x11bU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))
                        ? VL_ULL(0x6400657a69732d62)
                        : ((0x11aU == (0x1ffU & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                            ? VL_ULL(0x6c742d6400737465)
                            : ((0x119U == (0x1ffU & 
                                           (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                                ? VL_ULL(0x732d626c742d6400)
                                : ((0x118U == (0x1ffU 
                                               & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                  >> 3U)))
                                    ? VL_ULL(0x657a69732d656863)
                                    : ((0x117U == (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                        ? VL_ULL(0x61632d6400737465)
                                        : ((0x116U 
                                            == (0x1ffU 
                                                & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 3U)))
                                            ? VL_ULL(0x732d65686361632d)
                                            : ((0x115U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x6400657a69732d6b)
                                                : (
                                                   (0x114U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x636f6c622d656863)
                                                    : 
                                                   ((0x113U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x61632d640079636e)
                                                     : 
                                                    ((0x112U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x6575716572662d6b)
                                                      : vlTOPp->TestHarness__DOT__top__DOT__bootrom__DOT___GEN_273)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3442(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3442\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_may_redirect_taken 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_263)
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_bpd_type))
                ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_265) 
                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_266))
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_taken)
                    ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_265) 
                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_266) 
                          | (~ (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_bpd_predictions) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))))))
                    : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_taken)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_265))))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_265));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___GEN_34 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_target
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_target
                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_target
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_io_target)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___GEN_38 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
            ? ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
                 & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst)) 
                     | (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst))) 
                    & (1U == (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_3_io_inst 
                                       >> 7U))))) & 
                ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
                 >> 3U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_171)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
                ? ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
                     & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst)) 
                         | (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst))) 
                        & (1U == (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_2_io_inst 
                                           >> 7U))))) 
                    & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
                       >> 2U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_122)))
                : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
                    ? ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
                         & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst)) 
                             | (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst))) 
                            & (1U == (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_1_io_inst 
                                               >> 7U))))) 
                        & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask) 
                           >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_78))
                    : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_1_0) 
                        & (((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_io_inst)) 
                            | (0x67U == (0x707fU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_io_inst))) 
                           & (1U == (0x1fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__BranchDecode_io_inst 
                                              >> 7U))))) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_mask)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3443(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3443\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___GEN_41 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_2) 
               & (3U != (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                       >> 0x20U)))))
            : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx))
                ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_1) 
                   & (3U != (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                           >> 0x10U)))))
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__f3_valid_mask_0) 
                   & (3U != (3U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT___T_37 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_valid)) 
                  | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__btb_was_wrong)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__bchecker__DOT__jal_idx) 
                    < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_btb_resp__DOT___T_2_0_bits_cfi_idx))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_v 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__res_v)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047) 
               | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_v)
                   : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052) 
                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_v)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_d 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 7U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                    >> 5U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_d)
                                             : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                            >> 5U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_d))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_a 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 6U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                    >> 4U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_a)
                                             : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                            >> 4U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_a))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3444(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3444\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_g 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 5U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__s2_g)
                                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_g)
                                             : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__s2_g)
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_g))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_u 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 4U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                    >> 3U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_u)
                                             : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                            >> 3U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_u))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_x 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 3U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                    >> 2U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_x)
                                             : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                            >> 2U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_x))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_w 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 2U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                    >> 1U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_w)
                                             : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                            >> 1U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_w))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___1_1_io_x_r 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 1U)) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227)
                                         : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_r)
                                             : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227)
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_r))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3445(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3445\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1057_ppn 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1047)
            ? (QData)((IData)((0xfffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_227 
                                                   >> 6U)))))
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1050)
                ? ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__count))
                    ? ((VL_ULL(0x3ffffffffffe00) & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_ppn) 
                       | (QData)((IData)((0x1ffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_req_addr))))
                    : ((VL_ULL(0x3ffffffffc0000) & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_ppn) 
                       | (QData)((IData)((0x3ffffU 
                                          & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_req_addr)))))
                : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_1052)
                    ? (QData)((IData)((((((((((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_0
                                               : 0U) 
                                             | ((2U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                                 ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_1
                                                 : 0U)) 
                                            | ((4U 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_2
                                                : 0U)) 
                                           | ((8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                               ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_3
                                               : 0U)) 
                                          | ((0x10U 
                                              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                              ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_4
                                              : 0U)) 
                                         | ((0x20U 
                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                             ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_5
                                             : 0U)) 
                                        | ((0x40U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_6
                                            : 0U)) 
                                       | ((0x80U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__hits))
                                           ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__data_7
                                           : 0U))))
                    : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_55)
                        ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_satp_ppn
                        : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_ppn))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3446(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3446\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_874 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_102_rs2) 
           & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                       >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1011)
                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_354)
                                     : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_95)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_95)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_18) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_18))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_81)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_81)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_13) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_13))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3447(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3447\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_14 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_74)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_74)
                     ? (2U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_12) 
                              << 1U)) : (1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_12))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3448(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3448\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_517 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5371) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_tail = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3291) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_tail 
                = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4508)
                             ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_lbq_idx))
                             : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_lbq_idx)));
        } else {
            if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_97) {
                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_tail 
                    = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_102;
            }
        }
    }
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_101 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3449(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3449\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3450(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3450\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ldst_val 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0_io_deq_uop_ldst_val;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_rxq_idx 
                = (3U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[9U] 
                          << 0x18U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[8U] 
                                       >> 8U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_csr_addr 
                = (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[9U] 
                              << 0xbU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[8U] 
                                          >> 0x15U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_bpd_made_pred 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                         >> 3U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_btb_made_pred 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                         >> 5U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_resp_info 
                = (0x7fffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                               << 0x19U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                                            >> 7U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_resp_takens 
                = (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xcU] 
                            << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                                         >> 1U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bim_resp_rowdata 
                = (0xffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xcU] 
                             << 0x11U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                                          >> 0xfU)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3451(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3451\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_hit 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                         >> 0x18U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_btb_taken 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                         >> 0x1aU));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_btb_blame 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                         >> 0x1cU));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_inst 
                = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                    << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                              >> 0x1aU));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_wdata 
                = (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[2U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[1U])));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_bp_debug_if 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                         >> 1U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_replay_if 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                         >> 3U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_xcpt_pf_if 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                         >> 5U));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3452(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3452\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs3 
                = (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                             << 0xbU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                         >> 0x15U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_taken 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                         >> 0x17U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_btb_hit 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                         >> 0x1bU));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_pc 
                = (VL_ULL(0xffffffffff) & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU])) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xeU])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xdU])) 
                                                 >> 0x11U))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_events_fetch_seq 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_xcpt_ma_if 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                         >> 2U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fp_single 
                = ((0U == (0x1040U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                       << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                 >> 0x1aU)))) 
                   | (0x40U == (0x2000040U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                               << 6U) 
                                              | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                 >> 0x1aU)))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3453(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3453\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_bpd_mispredicted 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                         >> 2U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_btb_mispredicted 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                         >> 4U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_resp_history 
                = (0x7ffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                              << 0xaU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                                          >> 0x16U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_xcpt_ae_if 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U] 
                         >> 4U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_bp_xcpt_if 
                = (1U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_debug_inst 
                = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                    << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xeU] 
                              >> 0x1aU));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bpd_blame 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                         >> 0x19U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_br_prediction_bim_resp_entry_idx 
                = (0x3ffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xcU] 
                              << 0x1bU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xbU] 
                                           >> 5U)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3454(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3454\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_stat_brjmp_mispredicted 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                         >> 6U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ftq_idx 
                = (0xfU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                            << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[9U] 
                                      >> 0x1eU)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_rvc 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xeU] 
                         >> 0x19U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_sys_pc2epc 
                = (0x73U == (0xffefffffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                             << 6U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                               >> 0x1aU))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_edge_inst 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[9U] 
                         >> 0x1bU));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pc_lob 
                = (0x3fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xaU] 
                             << 0xbU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[9U] 
                                         >> 0x15U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_signed 
                = (1U & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                            >> 8U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uses_brq 
                = (1U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[4U] 
                         >> 0xeU));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3455(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3455\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_size 
                = (3U & (((0x14U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_mem_cmd)) 
                          | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_mem_cmd)))
                          ? (((0U != (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                << 0x12U) 
                                               | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  >> 0xeU)))) 
                              << 1U) | (0U != (0x1fU 
                                               & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                     >> 9U)))))
                          : ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                              << 0x1aU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                           >> 6U))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs2 
                = (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                             << 0x12U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                          >> 0xeU)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_frs3_en 
                = (0x40U == (0x70U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                       << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                 >> 0x1aU))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_allocate_brtag 
                = (0x60U == (0x78U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                       << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                 >> 0x1aU))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_ldst 
                = (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                             << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                          >> 1U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_lrs1 
                = (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                             << 0x17U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                          >> 9U)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3456(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3456\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_bypassable 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_592) 
                   | (0x34U == (0x34U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                          << 6U) | 
                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                          >> 0x1aU)))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_fencei 
                = (0x100fU == (0x707fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                           << 6U) | 
                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                           >> 0x1aU))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_fence 
                = (8U == (0x3058U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                      << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                >> 0x1aU))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_iq_type 
                = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_583) 
                    << 1U) | (1U & (~ ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_557) 
                                         | (0x58000053U 
                                            == (0xfdf0007fU 
                                                & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    << 6U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                      >> 0x1aU))))) 
                                        | (0xc0000053U 
                                           == (0xfdc0007fU 
                                               & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                   << 6U) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                     >> 0x1aU))))) 
                                       | (0xe0000053U 
                                          == (0xfdf0607fU 
                                              & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  << 6U) 
                                                 | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                    >> 0x1aU))))))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_call 
                = (((0x26U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_uopc)) 
                    | (0x25U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_uopc))) 
                   & (1U == (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                       << 0x1fU) | 
                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                       >> 1U)))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3457(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3457\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_ret 
                = (((0x26U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_uopc)) 
                    & (0U == (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                        << 0x1fU) | 
                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                        >> 1U))))) 
                   & (1U == (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                       << 0x17U) | 
                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                       >> 9U)))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_jump 
                = ((0x68U == (0x68U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                        << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                  >> 0x1aU)))) 
                   | (0x26U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_uopc)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fp_val 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT___T_133) 
                   | (0xe0000053U == (0xedf0707fU & 
                                      ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                        << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                  >> 0x1aU)))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_flush_on_commit 
                = (((8U == (0x58U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                      << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                >> 0x1aU)))) 
                    | (0x70U == (0x70U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                           << 6U) | 
                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                           >> 0x1aU))))) 
                   | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__csr_en) 
                       & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__csr_ren))) 
                      & (~ (((0x340U <= (0xfffU & (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                      >> 0xeU)))) 
                             & (0x343U >= (0xfffU & 
                                           ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                             << 0x12U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                               >> 0xeU))))) 
                            | ((0x140U <= (0xfffU & 
                                           ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                             << 0x12U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                               >> 0xeU)))) 
                               & (0x143U >= (0xfffU 
                                             & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                 << 0x12U) 
                                                | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                   >> 0xeU)))))))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3458(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3458\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_exc_cause 
                = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_io_interrupt)
                    ? (VL_ULL(0x8000000000000000) + (QData)((IData)(
                                                                    ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__sync_0)
                                                                      ? 0xeU
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xfU)))
                                                                       ? 0xfU
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xeU)))
                                                                        ? 0xeU
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xdU)))
                                                                         ? 0xdU
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xcU)))
                                                                          ? 0xcU
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 0xbU)))
                                                                           ? 0xbU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 3U)))
                                                                            ? 3U
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 7U)))
                                                                             ? 7U
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                                >> 9U)))
                                                                              ? 9U
                                                                              : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_269)))))))))))))
                    : (QData)((IData)(((2U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U])
                                        ? 0xeU : ((1U 
                                                   & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U])
                                                   ? 3U
                                                   : 
                                                  ((8U 
                                                    & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U])
                                                    ? 0x11U
                                                    : 
                                                   ((0x20U 
                                                     & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U])
                                                     ? 0xcU
                                                     : 
                                                    ((0x10U 
                                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U])
                                                      ? 1U
                                                      : 
                                                     ((4U 
                                                       & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[3U])
                                                       ? 0U
                                                       : 2U)))))))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3459(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3459\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uses_lbq 
                = ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_custom_3 
                            >> 1U)) & (0x60U == (0x70U 
                                                 & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                     << 6U) 
                                                    | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                       >> 0x1aU)))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_exception 
                = vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0_io_deq_uop_exception;
        }
    }
    if (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__sel_fire_0) {
        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_185 
            = (((0U != (0xffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__sels_0 
                                           >> 0x20U)))) 
                << 5U) | (((0U != (0xffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_162 
                                              >> 0x10U))) 
                           << 4U) | (((0U != (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_166) 
                                                 >> 8U))) 
                                      << 3U) | (((0U 
                                                  != 
                                                  (0xfU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_170) 
                                                      >> 4U))) 
                                                 << 2U) 
                                                | (((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_174) 
                                                         >> 2U))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_174) 
                                                          >> 3U) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_174) 
                                                            >> 1U))))))));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_lrs3 
                = (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                             << 0xbU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                         >> 0x15U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_uops_0_ldst 
                = (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                             << 0x1fU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                          >> 1U)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3460(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3460\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_imm_packed 
                = ((0xfe000U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                 << 0x1aU) | (0x3ffe000U 
                                              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                 >> 6U)))) 
                   | ((0x1f00U & ((((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_imm_sel)) 
                                    | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__decode_units_0__DOT__cs_imm_sel)))
                                    ? ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                        << 0x1fU) | 
                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                        >> 1U)) : (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                      >> 0xeU))) 
                                  << 8U)) | (0xffU 
                                             & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x11U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                   >> 6U)))));
        }
    }
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
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_51 
        = ((VL_ULL(0x1ffffffff) != vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT__used) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid));
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3461(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3461\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage_io_kill)))) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__dis_hazards_0)))) {
            vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_unique 
                = (((((((((((0xfU == (0x607fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                  << 6U) 
                                                 | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                    >> 0x1aU)))) 
                            | (0x73U == (0xffefffffU 
                                         & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                             << 6U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                               >> 0x1aU))))) 
                           | (0x1073U == (0x107fU & 
                                          ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                            << 6U) 
                                           | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                              >> 0x1aU))))) 
                          | (0x202fU == (0x1800607fU 
                                         & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                             << 6U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                               >> 0x1aU))))) 
                         | (0x2073U == (0x207fU & (
                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                                    << 6U) 
                                                   | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                      >> 0x1aU))))) 
                        | (0x800202fU == (0xe800607fU 
                                          & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              << 6U) 
                                             | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                >> 0x1aU))))) 
                       | (0x1000202fU == (0xf9f0607fU 
                                          & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                              << 6U) 
                                             | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                >> 0x1aU))))) 
                      | (0x10200073U == (0xdfffffffU 
                                         & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                             << 6U) 
                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                               >> 0x1aU))))) 
                     | (0x10500073U == ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                         << 6U) | (
                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                   >> 0x1aU)))) 
                    | (0x12000073U == (0xfe007fffU 
                                       & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                           << 6U) | 
                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                           >> 0x1aU))))) 
                   | (0x7b200073U == ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0x10U] 
                                       << 6U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1327[0xfU] 
                                                 >> 0x1aU))));
        }
    }
}
