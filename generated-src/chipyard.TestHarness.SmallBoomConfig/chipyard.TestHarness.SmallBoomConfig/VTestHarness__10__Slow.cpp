// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

void VTestHarness::_settle__TOP__4721(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4721\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_267 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_30 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_33 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_36 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_39 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_30 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_33 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_36 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_39 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                            >> 1U)));
}

void VTestHarness::_settle__TOP__4722(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4722\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_23 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_26 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_23 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_bus_named_front_bus__DOT__widget__DOT__TLMonitor__DOT___T_26 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                     >> 2U)))));
}

void VTestHarness::_settle__TOP__4723(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4723\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[0U] 
        = ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_data
                                   [vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT__value_1]) 
                           << 1U)) | vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_corrupt
           [vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT__value_1]);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[1U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_data
                          [vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT__value_1]) 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_data
                                                        [vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT__value_1] 
                                                        >> 0x20U)) 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[2U] 
        = ((0xfffffe00U & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                           << 9U)) | ((0xfffffffeU 
                                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
                                          << 1U)) | 
                                      (1U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_data
                                                      [vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT__value_1] 
                                                      >> 0x20U)) 
                                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_328[3U] 
        = ((0xfff00000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
                           << 0x14U)) | ((0xfffe0000U 
                                          & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
                                             << 0x11U)) 
                                         | ((0xffffe000U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
                                                << 0xdU)) 
                                            | ((0xfffffe00U 
                                                & (0x1000U 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
                                                      << 9U))) 
                                               | (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                                     >> 0x17U))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_178 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
            & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_209 
        = ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                             & (~ (0x7ffffffU & ((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_624 
        = (((3U >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
            & (((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                   & (QData)((IData)(
                                                     (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                     & (QData)((IData)(
                                                       (0xc000000U 
                                                        ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                    & (QData)((IData)(
                                                      (0x2000000U 
                                                       ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                   & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
                 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                  & (QData)((IData)(
                                                    (0x54000000U 
                                                     ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
                | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(
                                                   (0x2010000U 
                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
               | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                & (QData)((IData)((0x80000000U 
                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4726(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4726\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1723 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
            == vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1702) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_382 
        = (((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                               & (QData)((IData)((0x2000000U 
                                                  ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
            | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x2010000U 
                                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_382 
        = (((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                               & (QData)((IData)((0x2000000U 
                                                  ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
            | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x2010000U 
                                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_382 
        = (((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
              | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                               & (QData)((IData)((0x2000000U 
                                                  ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))) 
            | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x2010000U 
                                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))));
}

void VTestHarness::_settle__TOP__4727(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4727\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_339 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_339 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_339 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_41 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_44 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_47 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_50 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_41 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                   >> 1U))));
}

void VTestHarness::_settle__TOP__4728(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4728\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_44 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_47 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_50 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_41 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_44 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_47 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_50 
        = (1U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_34 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                        >> 2U))))));
}

void VTestHarness::_settle__TOP__4729(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4729\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_37 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_34 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_37 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_34 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                        >> 2U))))));
}

void VTestHarness::_settle__TOP__4730(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4730\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_37 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[0U] 
        = ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_data
                                   [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__value_1]) 
                           << 1U)) | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_corrupt
           [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__value_1]);
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[1U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_data
                          [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__value_1]) 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_data
                                                        [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__value_1] 
                                                        >> 0x20U)) 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[2U] 
        = ((0xfffffe00U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                           << 9U)) | ((0xfffffffeU 
                                       & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_mask___05FT_18_data) 
                                          << 1U)) | 
                                      (1U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_data
                                                      [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__value_1] 
                                                      >> 0x20U)) 
                                             >> 0x1fU))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_320[3U] 
        = ((0xfff00000U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_opcode___05FT_18_data) 
                           << 0x14U)) | ((0xfffe0000U 
                                          & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_param___05FT_18_data) 
                                             << 0x11U)) 
                                         | ((0xffffe000U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_size___05FT_18_data) 
                                                << 0xdU)) 
                                            | ((0xfffffe00U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_source___05FT_18_data) 
                                                   << 9U)) 
                                               | (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_address___05FT_18_data 
                                                     >> 0x17U))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1705 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1695)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_948 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_938)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1756 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1746)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_588 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                                         >> 3U)))) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_588 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                                         >> 3U)))) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_32 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_opcode___05FT_18_data))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_size___05FT_18_data)) 
                                         >> 3U)))) : 0U);
}

void VTestHarness::_settle__TOP__4731(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4731\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq___05FT_76_addr 
        = ((1U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_val)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_49)
            : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___GEN_5 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT___T_17)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__shifter)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txm__DOT__out)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_845 
        = (1U & (((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_836) 
                       ^ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_pnr) 
                          < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail))) 
                      ^ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head) 
                         < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail)))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_pnr) 
                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_52 
        = (((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_31)
             : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_30)
                 : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_29)
                     : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_28)
                         : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_27)
                             : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_26)
                                 : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_25)
                                     : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_24)
                                         : ((0x17U 
                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_23)
                                             : ((0x16U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clr_bsy_rob_idx_0))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_22)
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_6711))))))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_64 
        = (((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_31)
             : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_30)
                 : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_29)
                     : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_28)
                         : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_27)
                             : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_26)
                                 : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_25)
                                     : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_24)
                                         : ((0x17U 
                                             == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_23)
                                             : ((0x16U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_rob_idx))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_22)
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_6748))))))))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4763(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4763\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_66 
        = ((0U == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_data___05FT_18_data))) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1857 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1848)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1857 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1848)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1857 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1848)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1315 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1306)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1366 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1357)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1315 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_opcode___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1306)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1861 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1849)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1861 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1849)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1861 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1849)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1319 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1307)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1370 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1358)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1319 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_param___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1307)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_1));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__rxfifo__DOT___T_1)));
}

void VTestHarness::_settle__TOP__4764(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4764\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_312 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204)) 
                                           + ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                             >> 1U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 2U)))))) 
                                    + (3U & ((1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 3U))) 
                                             + ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 4U))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 5U)))))))) 
                             + (7U & ((3U & ((1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 6U))) 
                                             + ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 7U))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 8U)))))) 
                                      + ((3U & ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 9U))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0xaU))))) 
                                         + (3U & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0xbU))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0xcU)))))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 0xdU))) 
                                             + ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                            >> 0xeU))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0xfU)))))) 
                                      + (3U & ((1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                           >> 0x10U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0x11U))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0x12U)))))))) 
                               + (7U & ((3U & ((1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                           >> 0x13U))) 
                                               + ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0x14U))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0x15U)))))) 
                                        + ((3U & ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0x16U))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                              >> 0x17U))))) 
                                           + (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_204 
                                                             >> 0x19U))))))))))));
}

void VTestHarness::_settle__TOP__4766(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4766\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__ip_rxwm 
        = (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_1) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT___T_2))
              ? 0x100U : 0U) | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT__value) 
                                         - (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxq__DOT__value_1)))) 
           > (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxwm));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1070 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1048)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1298 
        = (1U & ((~ (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1265) 
                              >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork_auto_in_d_bits_sink)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1070 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor_io_in_d_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1048)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1298 
        = (1U & ((~ (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor__DOT___T_1265) 
                              >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__TLMonitor_io_in_d_bits_sink)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__ip_txwm 
        = (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_1) 
              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT___T_2))
              ? 0x100U : 0U) | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value) 
                                         - (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txq__DOT__value_1)))) 
           < (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__txwm));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_131457 
        = ((0x1eU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_30_bits_taken)
            : ((0x1dU == (0x1fU & ((IData)(8U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_29_bits_taken)
                : ((0x1cU == (0x1fU & ((IData)(8U) 
                                       + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_28_bits_taken)
                    : ((0x1bU == (0x1fU & ((IData)(8U) 
                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_27_bits_taken)
                        : ((0x1aU == (0x1fU & ((IData)(8U) 
                                               + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_26_bits_taken)
                            : ((0x19U == (0x1fU & ((IData)(8U) 
                                                   + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_25_bits_taken)
                                : ((0x18U == (0x1fU 
                                              & ((IData)(8U) 
                                                 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_24_bits_taken)
                                    : ((0x17U == (0x1fU 
                                                  & ((IData)(8U) 
                                                     + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_23_bits_taken)
                                        : ((0x16U == 
                                            (0x1fU 
                                             & ((IData)(8U) 
                                                + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_22_bits_taken)
                                            : ((0x15U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(8U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_21_bits_taken)
                                                : (
                                                   (0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(8U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_20_bits_taken)
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(8U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_19_bits_taken)
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(8U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_18_bits_taken)
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(8U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_17_bits_taken)
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_16_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_129882))))))))))))))));
}

void VTestHarness::_settle__TOP__4814(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4814\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1398 
        = (((((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(
                                                   (0x3000U 
                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                   & (QData)((IData)(
                                                     (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
                 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                  & (QData)((IData)(
                                                    (0x2000000U 
                                                     ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
                | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data))))) 
               | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                & (QData)((IData)((0x54000000U 
                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x2010000U 
                                                  ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                    (0x10000U 
                                                                     ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1398 
        = (((((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(
                                                   (0x3000U 
                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                   & (QData)((IData)(
                                                     (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
                 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                  & (QData)((IData)(
                                                    (0x2000000U 
                                                     ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
                | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data))))) 
               | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                & (QData)((IData)((0x54000000U 
                                                   ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x2010000U 
                                                  ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
             | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                    (0x10000U 
                                                                     ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
            | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4816(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4816\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1382 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
            == vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1361) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1331 
        = ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
            == vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1310) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_tag_array_RW0_wmode 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__update_valid) 
                 & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__value))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array_RW0_wmode 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__update_valid) 
                 & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__value))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_tag_array_1_RW0_wmode 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__update_valid) 
                 & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__value)) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__btb_data_array_1_RW0_wmode 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__update_valid) 
                 & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__value)) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_16 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__update_valid) 
                 & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__value))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT___T_53 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__update_valid) 
                 & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__value)) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1408 
        = ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
                             & (~ (0x7ffffffU & ((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1491 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
            & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4817(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4817\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1865 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1850)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1408 
        = ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
                             & (~ (0x7ffffffU & ((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1491 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
            & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1865 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1850)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1408 
        = ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
                             & (~ (0x7ffffffU & ((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1491 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
            & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1865 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1850)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_954 
        = ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
                            & (~ (0x1fffU & ((IData)(0x3fU) 
                                             << (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)))))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4818(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4818\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_993 
        = (((6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data))) 
            & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1323 
        = (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1308)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_999 
        = ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
                            & (~ (0x1fffU & ((IData)(0x3fU) 
                                             << (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1038 
        = (((6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data))) 
            & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1374 
        = (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1359)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_954 
        = ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data 
                            & (~ (0x1fffU & ((IData)(0x3fU) 
                                             << (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)))))))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_993 
        = (((6U == (7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data))) 
            & (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_address___05FT_18_data)))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4819(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4819\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1323 
        = (((7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_size___05FT_18_data)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1308)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_23_isInf))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_23_isZero))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_60897 
        = ((0x1eU == (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_30_bits_taken)
            : ((0x1dU == (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_29_bits_taken)
                : ((0x1cU == (0x1fU & ((IData)(1U) 
                                       + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_28_bits_taken)
                    : ((0x1bU == (0x1fU & ((IData)(1U) 
                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_27_bits_taken)
                        : ((0x1aU == (0x1fU & ((IData)(1U) 
                                               + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_26_bits_taken)
                            : ((0x19U == (0x1fU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_25_bits_taken)
                                : ((0x18U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_24_bits_taken)
                                    : ((0x17U == (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_23_bits_taken)
                                        : ((0x16U == 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_22_bits_taken)
                                            : ((0x15U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_21_bits_taken)
                                                : (
                                                   (0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_20_bits_taken)
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_19_bits_taken)
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_18_bits_taken)
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_17_bits_taken)
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_head))))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lbq_16_bits_taken)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_59322))))))))))))))));
}

void VTestHarness::_settle__TOP__4833(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4833\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1869 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1851)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1869 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1851)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1869 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1851)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1327 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1309)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1378 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1360)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1327 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1309)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1300 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
               >> 2U)) & (2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1300 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
               >> 2U)) & (2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__coupler_from_tile_named_boom_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1300 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
               >> 2U)) & (2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_888 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
                         >> 2U))) & (2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))));
}

void VTestHarness::_settle__TOP__4834(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4834\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_922 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
                         >> 2U))) & (2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_888 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data) 
                         >> 2U))) & (2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_source___05FT_18_data))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_23_isInf))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_23_isZero))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_lt 
        = (1U & (((~ ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_1 
                               >> 0x3fU)) ^ (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs2_data_1 
                                                     >> 0x3fU)))) 
                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_ltu)) 
                 | ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_1 
                             >> 0x3fU)) & (~ (IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs2_data_1 
                                                      >> 0x3fU))))));
}

void VTestHarness::_settle__TOP__4835(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4835\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pb_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_prio_0)
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_160)
                  : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_186)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
           | ((3U == (3U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_out_wdata_double[2U] 
                             << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_out_wdata_double[1U] 
                                       >> 0x1eU)))) 
              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_out_wdata_double[1U] 
                 >> 0x1dU)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_2__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_2__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_2__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_2__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_2__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_2__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_3) 
           | (0xfffcU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_3) 
                         << 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_1__DOT___T_1)));
}

void VTestHarness::_settle__TOP__4836(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4836\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_3__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_3__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_3__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_3__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_3__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__btb__DOT__bim__DOT__Queue_3__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1218 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1205)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_1)
            ? vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_param
           [0U] : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_param));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN_io_in_sig 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN_io_in_sig))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_corrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_bad) 
           & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_prio_0)
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_83)
               : 6U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_prio_0)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_83)
            : 6U);
}

void VTestHarness::_settle__TOP__4837(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4837\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_382 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                            >> 0xfU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                            >> 0xfU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                               >> 0xeU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                                >> 0xeU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                                   >> 0xdU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0xcU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0xbU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                   >> 0xaU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                                    >> 0xaU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                      >> 9U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                                       >> 9U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_6_0_data 
                                                                          >> 8U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__atomics__DOT___T_374)))))))));
}

void VTestHarness::_settle__TOP__4839(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4839\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_6 
        = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_3 
           | (VL_ULL(0xfffffffffc) & (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_3 
                                      << 2U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_35 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_25) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__downvert_d2s__DOT__RoundAnyRawFNToRecFN__DOT___T_25) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_6 
        = (vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_3 
           | ((QData)((IData)((0x7fffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_3)))) 
              << 2U));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_428 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__setQuash) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__directory__DOT__tagMatch));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_92 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_resp_reg)) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_24));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
        = ((0xff00ffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
                         >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
                                                   << 8U)));
}

void VTestHarness::_settle__TOP__4840(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4840\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_747 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_698 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_4 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_) 
                 + ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready) 
                    & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3805 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink_io_deq_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource_io_enq_ready));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_data_resp 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_499 
           | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_497);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_1104 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s4_valid) 
            & ((VL_ULL(0x1fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                        >> 3U)) == 
               (VL_ULL(0x1fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s4_req_addr 
                                        >> 3U)))) ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s4_req_data
            : (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s5_valid) 
                & ((VL_ULL(0x1fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                            >> 3U)) 
                   == (VL_ULL(0x1fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s5_req_addr 
                                               >> 3U))))
                ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s5_req_data
                : (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_499 
                   | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_497)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_1));
}

void VTestHarness::_settle__TOP__4841(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4841\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cork__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_588 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__memory_bus_xbar__DOT__TLMonitor__DOT___T_578)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_588 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_from_coherence_manager__DOT__binder__DOT__TLMonitor__DOT___T_578)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_588 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_578)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_588 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_578)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_588 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_578)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_588 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__picker__DOT__TLMonitor__DOT___T_578)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                  ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user) 
                     >> 4U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user) 
                               >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_24)
            : (0U != (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_resp_reg)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_source 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
            ? (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid_reg)
            : (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_valid_reg));
}

void VTestHarness::_settle__TOP__4842(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4842\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_123 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)) 
                 | (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_109 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
            ? (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)
            : (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                  ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user) 
                     >> 4U) : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user) 
                               >> 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___GEN_24)
            : (0U != (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_resp_reg)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_bits_source 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user)
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user)));
    vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__tl2axi4__DOT___T_81)
            ? (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_valid_reg)
            : (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_valid_reg));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__pbus__DOT__buffer_1__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT___T_1155 
        = (0x7fU & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_validOH)) 
                    | (0x7eU & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__mshr_validOH)) 
                                << 1U))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_19 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__room) 
            == (1U >= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_2)
                                ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_1)
                                    ? 0xcU : 0U) : 
                               (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value_1) 
                                 > (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__value))
                                 ? ((IData)(0xcU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_20))
                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_20)))))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4843(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4843\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__buffer__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__fbus__DOT__buffer__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__s2_hit 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_234) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT___T_247));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head_vals_0 
        = ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_31)
            : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_30)
                : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_29)
                    : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_28)
                        : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_27)
                            : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_26)
                                : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_25)
                                    : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_24)
                                        : ((0x17U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_23)
                                            : ((0x16U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head))
                                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_val_22)
                                                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___GEN_7134)))))))))));
}

void VTestHarness::_settle__TOP__4844(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4844\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_hit_state_0_state 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_191) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_189));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_784 
        = (((3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_456)) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_768)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_788 
        = (((1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_456) 
                   >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_769)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_44 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_26) 
                   | ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                               >> 0x26U)) & (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                                                     >> 0x25U)))) 
                  << 3U)) | ((4U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_26) 
                                     | ((IData)((vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                                                 >> 0x26U)) 
                                        & (~ (IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                                                      >> 0x25U))))) 
                                    << 2U)) | ((2U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_23) 
                                                    | ((~ (IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                                                                   >> 0x26U))) 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                                                                  >> 0x25U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_23) 
                                                     | ((~ (IData)(
                                                                   (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                                                                    >> 0x26U))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
                                                                      >> 0x25U)))))))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1237 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1185) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__TLMonitor__DOT___T_1193)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__ordered 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__rawB_isNaN))));
}

void VTestHarness::_settle__TOP__4845(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4845\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_122));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__common_ltMags 
        = (VL_LTS_III(1,13,13, (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in1[2U] 
                                           << 0xcU) 
                                          | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U))), 
                      (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in2[2U] 
                                  << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in2[1U] 
                                              >> 0x14U)))) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__rawA_sig 
                 < vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__rawB_sig)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__common_eqMags 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__rawA_sig 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__dcmp__DOT__rawB_sig));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1273 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1257)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1222 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1206)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1285 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1260)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1234 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1209)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1281 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1259)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1509 
        = (1U & ((~ (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1476) 
                              >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1230 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1208)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1458 
        = (1U & ((~ (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1425) 
                              >> (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_sink)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_460 
        = ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
                             >> 2U))) & (2U >= (3U 
                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source)))) 
              | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
             | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
            | (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
           | (IData)(vlTOPp->reset));
}

void VTestHarness::_settle__TOP__4846(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4846\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_441 
        = (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
                            >> 2U))) & (2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source)))) 
             | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
            | (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1277 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__filter__DOT__TLMonitor__DOT___T_1258)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1226 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1207)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_215 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
           & (8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source)));
    vlTOPp->TestHarness__DOT__top__DOT__sbus__DOT__system_bus_xbar__DOT___T_213 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_source) 
                 >> 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT___GEN_28 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq_io_bpd_update_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__enable_assert));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT__com_idx 
        = (0x7ffU & (((IData)((VL_ULL(0xfffffffff) 
                               & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__ftq_bundle_ram_fetch_pc___05FT_49_data 
                                  >> 3U))) ^ (IData)((QData)((IData)(
                                                                     (3U 
                                                                      & (IData)(
                                                                                (VL_ULL(0x3fffffffff) 
                                                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__ftq_bundle_ram_fetch_pc___05FT_49_data 
                                                                                >> 1U)))))))) 
                     ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__ftq_bundle_ram_history
                     [vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__value]));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___GEN_36 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceX__DOT__Queue__DOT___T_1) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_3) 
              | ((~ ((1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_350) 
                              & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_259)) 
                                 >> 3U)) & (0U == (0x1b7U 
                                                   & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_index
                                                   [0U]))) 
                            & (0xffffffffU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_84)))) 
                     | (3U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_350) 
                                & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_259)) 
                                   >> 2U)) & (0U == 
                                              (0x1b7U 
                                               & vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__Queue__DOT___T_index
                                               [0U]))) 
                              & (VL_ULL(0xffffffffffffffff) 
                                 == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_84))))) 
                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__flushOutValid))));
}

void VTestHarness::_settle__TOP__4847(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4847\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0_io_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__bpdpipeline__DOT__bpd__DOT___T_96 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__ftq_bundle_ram_bpd_info___05FT_49_data) 
                  >> 1U) ^ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__ftq_bundle_ram_bpd_info___05FT_49_data)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq_io_bpd_update_bits_miss_cfi_idx 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__value))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_15_cfi_idx)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_698));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_95 
        = (3U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_297) 
                   & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_249)) 
                      >> 2U)) & (0U == (0x1b7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
                                                  [0U] 
                                                  >> 3U)))) 
                 & (VL_ULL(0xffffffffffffffff) == vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_53)));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_123 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_297) 
                   & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_249)) 
                      >> 3U)) & (0U == (0x1b7U & (vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_address
                                                  [0U] 
                                                  >> 3U)))) 
                 & (0xffffffffU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT___T_53))));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer_io_pop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_160) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_pb_pop_valid));
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer_io_pop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_186) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_rel_pop_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_701 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__value))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_15_mispredicted)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_696));
}

void VTestHarness::_settle__TOP__4848(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4848\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2271[3];
    WData/*95:0*/ __Vtemp2272[3];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq_io_bpd_update_bits_taken 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__value))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_15_taken)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_697));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_702 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__value))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_15_taken)
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_697));
    VL_EXTEND_WI(95,32, __Vtemp2271, vlTOPp->TestHarness__DOT__top__DOT__Queue_1__DOT___T___05FT_18_data);
    VL_SHIFTL_WWI(95,95,6, __Vtemp2272, __Vtemp2271, 
                  ((IData)(vlTOPp->TestHarness__DOT__top__DOT__m__DOT__idx) 
                   << 5U));
    vlTOPp->TestHarness__DOT__top__DOT__m__DOT___T_412[0U] 
        = __Vtemp2272[0U];
    vlTOPp->TestHarness__DOT__top__DOT__m__DOT___T_412[1U] 
        = __Vtemp2272[1U];
    vlTOPp->TestHarness__DOT__top__DOT__m__DOT___T_412[2U] 
        = (0x7fffffffU & __Vtemp2272[2U]);
    vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__Queue__DOT___T_1));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_1)));
    vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_2) 
           & (IData)(vlTOPp->TestHarness__DOT__UARTAdapter__DOT__txfifo__DOT___T_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_121 
        = ((0U == (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                     >> 0x34U)))) & 
           (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_202 
        = ((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                    >> 0x17U)))) & 
           (0U == (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_187 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                          >> 0x11U))) ? 5U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                             >> 0x10U)))
                                               ? 6U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                              >> 0xfU)))
                                                   ? 7U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                               >> 0xeU)))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                >> 0xdU)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                 >> 0xcU)))
                                                      ? 0xaU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                  >> 0xbU)))
                                                       ? 0xbU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                   >> 0xaU)))
                                                        ? 0xcU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                    >> 9U)))
                                                         ? 0xdU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                     >> 8U)))
                                                          ? 0xeU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                      >> 7U)))
                                                           ? 0xfU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                       >> 6U)))
                                                            ? 0x10U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                        >> 5U)))
                                                             ? 0x11U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                         >> 4U)))
                                                              ? 0x12U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                          >> 3U)))
                                                               ? 0x13U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                           >> 2U)))
                                                                ? 0x14U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_3 
                                                                            >> 1U)))
                                                                 ? 0x15U
                                                                 : 0x16U)))))))))))))))));
}

void VTestHarness::_settle__TOP__4850(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4850\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_0__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
}

void VTestHarness::_settle__TOP__4851(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4851\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_48 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu_io_core_spec_ld_wakeup_valid) 
                     & (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_pdst)))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_35 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_30) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_30)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_35 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_30) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_30)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1_io_empty 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue_io_empty 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT___T_1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_55)));
}

void VTestHarness::_settle__TOP__4852(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4852\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2274[3];
    WData/*95:0*/ __Vtemp2275[3];
    WData/*95:0*/ __Vtemp2277[3];
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__plic__DOT__Queue__DOT___T_1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue_io_empty 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__do_ld_search_0 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1622) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_tlb_miss_0))) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_load_wakeup_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1619 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1395) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_sta_retry_0));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_stq_idx_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1395)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_stq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__fired_sta_retry_0)
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1656)
                : 0U));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT___T_17 
        = ((IData)(vlTOPp->TestHarness__DOT__UARTAdapter_io_uart_rxd) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__debounce)));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT___GEN_37 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__state)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__state)
                ? ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__prescaler))
                    ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__sample) 
                        << 1U) | (IData)(vlTOPp->TestHarness__DOT__UARTAdapter_io_uart_rxd))
                    : (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__sample))
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__sample))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__sample));
    vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__restore 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__state)) 
            & ((~ (IData)(vlTOPp->TestHarness__DOT__UARTAdapter_io_uart_rxd)) 
               & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__debounce)))) 
           | (0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__uart_0_1__DOT__rxm__DOT__prescaler)));
    __Vtemp2274[0U] = (0xfffffffcU & ((IData)((VL_ULL(1) 
                                               + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len)) 
                                      << 2U));
    __Vtemp2274[1U] = ((3U & ((IData)((VL_ULL(1) + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len)) 
                              >> 0x1eU)) | (0xfffffffcU 
                                            & ((IData)(
                                                       ((VL_ULL(1) 
                                                         + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len) 
                                                        >> 0x20U)) 
                                               << 2U)));
    __Vtemp2274[2U] = (3U & ((IData)(((VL_ULL(1) + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len) 
                                      >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WQ(66,64, __Vtemp2275, vlTOPp->TestHarness__DOT__top__DOT__m__DOT__addr_size);
    VL_EXTEND_WQ(66,64, __Vtemp2277, vlTOPp->TestHarness__DOT__top__DOT__m__DOT__addr_size);
    vlTOPp->TestHarness__DOT__top__DOT__m__DOT__raw_size[0U] 
        = (VL_LT_W(3, __Vtemp2274, __Vtemp2275) ? (0xfffffffcU 
                                                   & ((IData)(
                                                              (VL_ULL(1) 
                                                               + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len)) 
                                                      << 2U))
            : __Vtemp2277[0U]);
    vlTOPp->TestHarness__DOT__top__DOT__m__DOT__raw_size[1U] 
        = (VL_LT_W(3, __Vtemp2274, __Vtemp2275) ? (
                                                   (3U 
                                                    & ((IData)(
                                                               (VL_ULL(1) 
                                                                + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len)) 
                                                       >> 0x1eU)) 
                                                   | (0xfffffffcU 
                                                      & ((IData)(
                                                                 ((VL_ULL(1) 
                                                                   + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len) 
                                                                  >> 0x20U)) 
                                                         << 2U)))
            : __Vtemp2277[1U]);
    vlTOPp->TestHarness__DOT__top__DOT__m__DOT__raw_size[2U] 
        = (VL_LT_W(3, __Vtemp2274, __Vtemp2275) ? (3U 
                                                   & ((IData)(
                                                              ((VL_ULL(1) 
                                                                + vlTOPp->TestHarness__DOT__top__DOT__m__DOT__len) 
                                                               >> 0x20U)) 
                                                      >> 0x1eU))
            : __Vtemp2277[2U]);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_114 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu_io_req_valid) 
                     & (0x44U != (0x1f6U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_uopc))))) 
                 | (IData)(vlTOPp->reset)));
}

void VTestHarness::_settle__TOP__4853(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4853\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2280[3];
    WData/*95:0*/ __Vtemp2281[3];
    WData/*95:0*/ __Vtemp2282[3];
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp2280, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_1);
    __Vtemp2281[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                  >> 0x1dU)))) 
                                                     | (6U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                    >> 0x1dU)))))
                                                     ? 
                                                    ((0xe00U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                  >> 0x1dU)) 
                                                         << 9U)) 
                                                     | (0x1ffU 
                                                        & ((IData)(0x100U) 
                                                           + (IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                      >> 0x17U)))))
                                                     : 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                 >> 0x17U)))))))) 
                                << 0x34U) | ((QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41)))) 
                                             << 0x1dU)));
    __Vtemp2281[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                   >> 0x1dU)))) 
                                                      | (6U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                     >> 0x1dU)))))
                                                      ? 
                                                     ((0xe00U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | (0x1ffU 
                                                         & ((IData)(0x100U) 
                                                            + (IData)(
                                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                       >> 0x17U)))))
                                                      : 
                                                     ((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                                                  >> 0x17U)))))))) 
                                 << 0x34U) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41)))) 
                                              << 0x1dU)) 
                               >> 0x20U));
    VL_EXTEND_WQ(65,64, __Vtemp2282, vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_1);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_108 
        = (1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu_io_req_valid) 
                      & (0x44U == (0x1f6U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_uopc)))) 
                     & ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__fp_decoder_io_sigs_singleIn)) 
                               | (0x1fU == (0x1fU & 
                                            ((__Vtemp2280[2U] 
                                              << 4U) 
                                             | (__Vtemp2280[1U] 
                                                >> 0x1cU))))))
                         ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__fp_decoder_io_sigs_singleIn)
                             ? (1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT___T_41 
                                              >> 0x20U)))
                             : __Vtemp2282[2U]) : 0U))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_253 
        = ((0xfU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_ftq_idx)))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_15_mispredicted)
            : ((0xeU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_ftq_idx)))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_14_mispredicted)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_243)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_255 
        = ((0xfU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_ftq_idx)))
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_15_cfi_idx)
            : ((0xeU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_ftq_idx)))
                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT__cfi_info_14_cfi_idx)
                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__ftq__DOT___GEN_245)));
}

void VTestHarness::_settle__TOP__4854(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4854\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_1122 
        = (((((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                             >> 1U))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_1114)
               : 0U) | ((2U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_size))
                         ? 3U : 0U)) << 2U) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                                           >> 1U)))
                                                ? 0U
                                                : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_1114)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_53 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_48) 
                  ^ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__in_fmaCmd) 
                     >> 1U)) ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__in_in3[2U]));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_53 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_48) 
                  ^ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__in_fmaCmd) 
                     >> 1U)) ^ vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__in_in3[1U]));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
           | ((3U == (3U & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                             << 2U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                       >> 0x1eU)))) 
              & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                 >> 0x1dU)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_56 
        = (0x7ffU & (((IData)(0x71bU) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_50)) 
                     - (0x1ffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__in_in3[1U] 
                                   << 9U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__in_in3[0U] 
                                             >> 0x17U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_56 
        = (0x3fffU & (((IData)(0x3838U) + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_50)) 
                      - (0xfffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__in_in3[2U] 
                                    << 0xcU) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__in_in3[1U] 
                                                >> 0x14U)))));
}

void VTestHarness::_settle__TOP__4855(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4855\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_401 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs1_data_1 
           + ((VL_ULL(0xffffffffffe00000) & (VL_NEGATE_Q((QData)((IData)(
                                                                         (1U 
                                                                          & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_91 
                                                                             >> 0x14U))))) 
                                             << 0x15U)) 
              | (QData)((IData)((0x1fffffU & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_91)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_in2 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op2_sel))
            ? (((QData)((IData)(((0x80000000U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_91)
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_91)))
            : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op2_sel))
                ? (QData)((IData)((0x1fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_prs1))))
                : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op2_sel))
                    ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs2_data_1
                    : (QData)((IData)(((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_op2_sel))
                                        ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_is_rvc)
                                            ? 2U : 4U)
                                        : 0U))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_sc_fail 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_sc) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_lrsc_addr_match_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_35 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__div__DOT___T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__div__DOT__div__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__div_io_req_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__npc 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_94 
                                   + (QData)((IData)(
                                                     (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_is_rvc) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_edge_inst))
                                                       ? 2U
                                                       : 4U)))));
}

void VTestHarness::_settle__TOP__4856(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4856\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_425 
        = (VL_ULL(0xffffffffff) & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_94 
                                    + (((QData)((IData)(
                                                        (0x7ffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_91 
                                                                                >> 0x14U))))))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (0x1fffffU 
                                                                     & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_91))))) 
                                   + (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_edge_inst)
                                        ? VL_ULL(0x7fffffffff)
                                        : VL_ULL(0)) 
                                      << 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__uop_pc 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_94 
                                   - (QData)((IData)(
                                                     ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_edge_inst)
                                                       ? 2U
                                                       : 0U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1018 
        = (((QData)((IData)((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                                   >> 0xcU))))) 
            << 0xcU) | (QData)((IData)(((0xfc0U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                                            >> 6U)) 
                                                   << 6U)) 
                                        | (0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_addr___05FT_212_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1018 
        = (((QData)((IData)((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                                   >> 0xcU))))) 
            << 0xcU) | (QData)((IData)(((0xfc0U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                                            >> 6U)) 
                                                   << 6U)) 
                                        | (0x3fU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_addr___05FT_212_data))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_br_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__out_uop_br_mask) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__out_uop_br_mask));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_409 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_382) 
            | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))) 
           | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_409 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_382) 
            | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))) 
           | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_br_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__out_uop_br_mask) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__br_unit_brinfo_mask)))
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__out_uop_br_mask));
}

void VTestHarness::_settle__TOP__4857(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4857\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_empty 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_empty 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_987 
        = (((((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd)) 
              | (9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
             | (0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
            | (0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
           | (((((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd)) 
                 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
                | (0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
               | (0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
              | (0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_cmd))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_987 
        = (((((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd)) 
              | (9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
             | (0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
            | (0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
           | (((((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd)) 
                 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
                | (0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
               | (0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd))) 
              | (0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_cmd))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_644 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)) 
             | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_217));
}

void VTestHarness::_settle__TOP__4858(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4858\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_218 
        = ((((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd)) 
             | (0x11U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_mem_cmd))) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_217));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1 
        = (VL_ULL(0x3fffffffffffff) & (((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_C1_div) 
                                          & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U] 
                                             >> 8U)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_C1_sqrt))
                                         ? (~ (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U])) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[2U])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[1U])) 
                                                     >> 0x13U))))
                                         : VL_ULL(0)) 
                                       | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_C1_div) 
                                           & (~ (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U] 
                                                 >> 8U)))
                                           ? (VL_ULL(0x1fffffffffffff) 
                                              & (~ 
                                                 (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[3U])) 
                                                   << 0x2eU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[2U])) 
                                                      << 0xeU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__mul__DOT__reg_result_s3[1U])) 
                                                        >> 0x12U)))))
                                           : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_io_in 
                                 >> 0x1eU)))) & (~ (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_io_in 
                                                            >> 0x1dU))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_io_in 
                                   >> 0x1eU)))) & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_io_in 
                                                           >> 0x1dU))) 
            & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_io_in 
                          >> 0x16U)))) | ((3U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_io_in 
                                                             >> 0x1eU)))) 
                                          & (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_io_in 
                                                     >> 0x1dU))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1_io_in 
                                 >> 0x1eU)))) & (~ (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1_io_in 
                                                            >> 0x1dU))));
}

void VTestHarness::_settle__TOP__4859(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4859\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1_io_in 
                                   >> 0x1eU)))) & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1_io_in 
                                                           >> 0x1dU))) 
            & (~ (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1_io_in 
                          >> 0x16U)))) | ((3U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1_io_in 
                                                             >> 0x1eU)))) 
                                          & (IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__RecFNToRecFN_1_io_in 
                                                     >> 0x1dU))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT___T_128 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT___T_12 
           | ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[2U] 
                                   << 4U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs1_data_0[1U] 
                                             >> 0x1cU))))
               ? VL_ULL(0) : VL_ULL(0xe0400000)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT___T_157 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT___T_41 
           | ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                   << 4U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                             >> 0x1cU))))
               ? VL_ULL(0) : VL_ULL(0xe0400000)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_560 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_558 
           != (VL_ULL(0x7fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__last_target 
                                       >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_565 
        = (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_558 
           == (VL_ULL(0x7fffffffff) & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__last_target 
                                       >> 1U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT___T_143 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_val) 
                     & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt_io_req_valid))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT___T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_req_valid) 
           & ((((0x57U == (0x1f7U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc))) 
                | (0x58U == (0x1f8U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc)))) 
               | (0x60U == (0x1fcU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc)))) 
              | (0x60U == (0x1fbU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc)))));
}

void VTestHarness::_settle__TOP__4860(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4860\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_391 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U]))) 
            << 0x3fU) | (((QData)((IData)((0x7ffU & 
                                           ((VL_GTS_III(1,13,13, 0x402U, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                                               >> 0x14U))))
                                              ? 0U : 
                                             ((0xfffU 
                                               & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                                     >> 0x14U))) 
                                              - (IData)(0x401U))) 
                                            | ((((3U 
                                                  == 
                                                  (3U 
                                                   & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                                       << 2U) 
                                                      | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                                         >> 0x1eU)))) 
                                                 & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                                    >> 0x1dU)) 
                                                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_365))
                                                ? 0x7ffU
                                                : 0U))))) 
                          << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                       & (VL_GTS_III(1,13,13, 0x402U, 
                                                     (0xfffU 
                                                      & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                                            >> 0x14U))))
                                           ? (VL_ULL(0x1fffffffffffff) 
                                              & ((VL_ULL(0x1fffffffffffff) 
                                                  & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_371 
                                                     >> 1U)) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(1U) 
                                                     - 
                                                     (0xfffU 
                                                      & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_rs2_data_0[1U] 
                                                            >> 0x14U)))))))
                                           : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_365)
                                               ? VL_ULL(0)
                                               : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_371)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_740_bits 
        = ((0x1000U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                               >> 0x30U))) ? ((0U != 
                                               (0x1fU 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x30U)) 
                                                   >> 2U)))
                                               ? (0x33U 
                                                  | ((0x1f00000U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                  >> 0x30U)) 
                                                         << 0x12U)) 
                                                     | ((0xf8000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                     >> 0x30U)) 
                                                            << 8U)) 
                                                        | (0xf80U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                      >> 0x30U))))))
                                               : ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                >> 0x30U)) 
                                                       >> 7U)))
                                                   ? 
                                                  (0xe7U 
                                                   | ((0x1f00000U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                   >> 0x30U)) 
                                                          << 0x12U)) 
                                                      | (0xf8000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                     >> 0x30U)) 
                                                            << 8U))))
                                                   : 
                                                  (0x100073U 
                                                   | (0x1ffff80U 
                                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_707))))
            : ((0U != (0x1fU & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                         >> 0x30U)) 
                                >> 2U))) ? (0x33U | 
                                            ((0x1f00000U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x30U)) 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                           >> 0x30U)))))
                : ((0U != (0x1fU & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                             >> 0x30U)) 
                                    >> 7U))) ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_707
                    : (0x1fU | (0x1ffff80U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_8__DOT___T_707)))));
}

void VTestHarness::_settle__TOP__4861(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4861\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_407 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                 >> 0x1eU)))) & (~ (IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                                            >> 0x1dU))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_413 
        = (((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396 
                                  >> 0x1dU)))) << 0x17U) 
           | (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___T_396)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_390 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                 >> 0x1aU)))) ? (0x840400U 
                                                 | (((0x700000U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                  >> 0x12U)) 
                                                         << 0x14U)) 
                                                     | ((0x38000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                     >> 0x17U)) 
                                                            << 0xfU)) 
                                                        | ((((7U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_353))
                                                              ? 3U
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_353))
                                                               ? 2U
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_353))
                                                                ? 0U
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_353))
                                                                 ? 0U
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_353))
                                                                  ? 7U
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_353))
                                                                   ? 6U
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_353))
                                                                    ? 4U
                                                                    : 0U))))))) 
                                                            << 0xcU) 
                                                           | ((0x380U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                           >> 0x17U)) 
                                                                  << 7U)) 
                                                              | ((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                             >> 0x1cU)))
                                                                  ? 0x3bU
                                                                  : 0x33U))))) 
                                                    | ((0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                    >> 0x15U))))
                                                        ? 0x40000000U
                                                        : 0U)))
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                     >> 0x1aU)))) ? 
               (0x47413U | ((((1U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                             >> 0x1cU)))
                               ? 0x7fU : 0U) << 0x19U) 
                            | ((0x1f00000U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x12U)) 
                                              << 0x14U)) 
                               | ((0x38000U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x17U)) 
                                               << 0xfU)) 
                                  | (0x380U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x17U)) 
                                               << 7U))))))
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                         >> 0x1aU))))
                    ? (0x40000000U | vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_325)
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_325)));
}

void VTestHarness::_settle__TOP__4865(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4865\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_3_bankSel 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_need_bs))
            ? (((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_204))) 
               & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__l2__DOT__mods_0__DOT__sourceD_io_bs_wadr_bits_mask)
                   ? 0xfU : 0U)) : 0U);
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_847_bits 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_843))
            ? (0x42403U | ((0x4000000U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                   >> 0x15U)) 
                                          << 0x1aU)) 
                           | ((0x3800000U & ((IData)(
                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                      >> 0x1aU)) 
                                             << 0x17U)) 
                              | ((0x400000U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x16U)) 
                                               << 0x16U)) 
                                 | ((0x38000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x17U)) 
                                                 << 0xfU)) 
                                    | (0x380U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x12U)) 
                                                 << 7U)))))))
            : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_6__DOT___T_843))
                ? (0x43407U | ((0xc000000U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                       >> 0x15U)) 
                                              << 0x1aU)) 
                               | ((0x3800000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x1aU)) 
                                                 << 0x17U)) 
                                  | ((0x38000U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                           >> 0x17U)) 
                                                  << 0xfU)) 
                                     | (0x380U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                           >> 0x12U)) 
                                                  << 7U))))))
                : (0x10400U | ((0x3c000000U & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x17U)) 
                                               << 0x1aU)) 
                               | ((0x3000000U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x1bU)) 
                                                 << 0x18U)) 
                                  | ((0x800000U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x15U)) 
                                                   << 0x17U)) 
                                     | ((0x400000U 
                                         & ((IData)(
                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                     >> 0x16U)) 
                                            << 0x16U)) 
                                        | ((0x380U 
                                            & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                        >> 0x12U)) 
                                               << 7U)) 
                                           | ((0U != 
                                               (0xffU 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                           >> 0x15U))))
                                               ? 0x13U
                                               : 0x1fU)))))))));
}

void VTestHarness::_settle__TOP__4868(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4868\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2288[3];
    WData/*95:0*/ __Vtemp2289[3];
    WData/*95:0*/ __Vtemp2292[3];
    WData/*95:0*/ __Vtemp2293[3];
    WData/*95:0*/ __Vtemp2296[3];
    WData/*95:0*/ __Vtemp2297[3];
    WData/*95:0*/ __Vtemp2300[3];
    WData/*95:0*/ __Vtemp2301[3];
    // Body
    __Vtemp2288[0U] = 0U;
    __Vtemp2288[1U] = 0U;
    __Vtemp2288[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp2289, __Vtemp2288, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_620))));
    __Vtemp2292[0U] = 0U;
    __Vtemp2292[1U] = 0U;
    __Vtemp2292[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp2293, __Vtemp2292, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_620))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
        = ((0xffU & ((0x800U & (__Vtemp2289[2U] << 0xbU)) 
                     | (__Vtemp2289[1U] >> 0x15U))) 
           | (0xff00U & ((0x8000000U & (__Vtemp2293[2U] 
                                        << 0x1bU)) 
                         | (0x7ffff00U & (__Vtemp2293[1U] 
                                          >> 5U)))));
    __Vtemp2296[0U] = 0U;
    __Vtemp2296[1U] = 0U;
    __Vtemp2296[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp2297, __Vtemp2296, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_620))));
    __Vtemp2300[0U] = 0U;
    __Vtemp2300[1U] = 0U;
    __Vtemp2300[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp2301, __Vtemp2300, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_620))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
        = ((0xffffU & ((__Vtemp2297[1U] << 3U) | (__Vtemp2297[0U] 
                                                  >> 0x1dU))) 
           | (0xffff0000U & (__Vtemp2301[0U] << 3U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PC 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC)) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_740_bits 
        = ((0x1000U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                               >> 0x30U))) ? ((0U != 
                                               (0x1fU 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                            >> 0x30U)) 
                                                   >> 2U)))
                                               ? (0x33U 
                                                  | ((0x1f00000U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                  >> 0x30U)) 
                                                         << 0x12U)) 
                                                     | ((0xf8000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                     >> 0x30U)) 
                                                            << 8U)) 
                                                        | (0xf80U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                      >> 0x30U))))))
                                               : ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                >> 0x30U)) 
                                                       >> 7U)))
                                                   ? 
                                                  (0xe7U 
                                                   | ((0x1f00000U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                   >> 0x30U)) 
                                                          << 0x12U)) 
                                                      | (0xf8000U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                                     >> 0x30U)) 
                                                            << 8U))))
                                                   : 
                                                  (0x100073U 
                                                   | (0x1ffff80U 
                                                      & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_707))))
            : ((0U != (0x1fU & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                         >> 0x30U)) 
                                >> 2U))) ? (0x33U | 
                                            ((0x1f00000U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                          >> 0x30U)) 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                                           >> 0x30U)))))
                : ((0U != (0x1fU & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data 
                                             >> 0x30U)) 
                                    >> 7U))) ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_707
                    : (0x1fU | (0x1ffff80U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_3__DOT___T_707)))));
}

void VTestHarness::_settle__TOP__4876(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4876\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___GEN_65 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__prev_is_half)
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_31
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__RVCExpander_io_in 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__prev_is_half)
            ? vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT___T_31
            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__q_f3_imemresp__DOT___T_2_0_data));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT___T_123 
        = ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__fetch_controller__DOT__fb__DOT___T_1461 
                    >> 0x20U)) & ((0xfU & ((IData)(1U) 
                                           + (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_tail))) 
                                  == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB)) 
           & (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1664 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1622)
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__mem_tlb_uncacheable_0))
                  : (~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_uncacheable)
                         : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_uncacheable)
                             : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_uncacheable)
                                 : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_uncacheable)
                                     : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_uncacheable)
                                         : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_uncacheable)
                                             : ((1U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_uncacheable)
                                                 : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_uncacheable)))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1743 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0) 
           < (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_head));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_1075 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22436)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22434))) 
                 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_408 
        = ((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_394) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22434))) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_22436))) 
             & (~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_order_fail)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_order_fail)
                        : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_order_fail)
                            : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_order_fail)
                                : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_order_fail)
                                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_order_fail)
                                        : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_order_fail)
                                            : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_order_fail)))))))))) 
            & (~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_7)
                   : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_6)
                       : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_5)
                           : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_4)
                               : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_3)
                                   : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_2)
                                       : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_1)
                                           : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_0)))))))))) 
           & (~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_7)
                  : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_6)
                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_5)
                          : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                              ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_4)
                              : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                  ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_3)
                                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_2)
                                      : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                          ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_1)
                                          : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_0))))))))));
}

void VTestHarness::_settle__TOP__4877(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4877\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_4475 
        = ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_4447) 
                   & (2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
                  & (3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
                 & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
                & (5U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
               & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
              & (7U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
             & (9U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
            & (0xaU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
           & (0xbU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_4475 
        = ((((((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_4447) 
                   & (2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                  & (3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                 & (4U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                & (5U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
               & (6U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
              & (7U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
             & (9U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
            & (0xaU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
           & (0xbU != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT___T_38 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT__state)) 
           & ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state)) 
              | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_wb_req_valid) 
                 | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_wb_req_valid))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__clear_br 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_4487) 
           & ((0xfU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_succeeded)
               : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_succeeded)
                   : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_succeeded)
                       : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_succeeded)
                           : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_succeeded)
                               : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_succeeded)
                                   : ((9U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_succeeded)
                                       : ((8U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_succeeded)
                                           : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_succeeded)
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_succeeded)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_succeeded)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_succeeded)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_succeeded)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_succeeded)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_head))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_succeeded)
                                                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_succeeded)))))))))))))))));
}

void VTestHarness::_settle__TOP__4878(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4878\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0 
        = (((((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449) 
                | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_div)) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
              | (3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
             | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
            | (4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
           | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__tlMasterXbar_auto_out_b_ready 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_source___05FT_18_data) 
               >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_auto_out_b_ready));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T_55 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
            ? 3U : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                     ? 4U : ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                              ? 5U : ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                       ? 0U : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                                ? 0U
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                                     ? 5U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                                      ? 1U
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                                       ? 1U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                                        ? 2U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT___T))
                                                         ? 5U
                                                         : 0U)))))))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_338 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_mem_finish_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_mem_finish_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_312 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_mem_finish_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_mem_finish_valid));
}

void VTestHarness::_settle__TOP__4879(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4879\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_922 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_release_valid) 
           | (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_896 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state)) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_release_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_945 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_937_0) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_release_valid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_937_1) 
              & (6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__bad_va 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (~ ((VL_ULL(0) == (VL_ULL(0xc000000000) 
                                & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc)) 
                 | (VL_ULL(0xc000000000) == (VL_ULL(0xc000000000) 
                                             & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_2933 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36496))
            ? (((QData)((IData)((0xffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                << 0x38U) | (((QData)((IData)((0xffU 
                                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                                                  << 0x18U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                                                     << 0x10U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))))))))))
            : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36496))
                ? (((QData)((IData)((0xffffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                    << 0x30U) | (((QData)((IData)((0xffffU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                                  << 0x20U) | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))))))
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36496))
                    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)) 
                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)))
                    : vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_36533)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_203 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state)) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_mem_acquire_valid) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_mem_acquire_valid)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_240 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_mem_acquire_valid) 
            | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_mem_acquire_valid)) 
           | (1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__icache_io_s2_kill 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_speculative) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_tlb_resp_cacheable))) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s2_xcpt));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_normalCase_leaving_PA));
}

void VTestHarness::_settle__TOP__4880(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4880\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0_io_request 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state))
            ? (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT___T_91) 
                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__p3)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state)) 
               & (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__p1) 
                   | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__p2)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_678)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_8 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_53)
            ? 1U : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_53)
                     ? (((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state))
                          ? 1U : 0U) << 1U) : ((0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__state))
                                                ? 1U
                                                : 0U)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_628 
        = ((0x40U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_meta_write_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_628 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_meta_write_valid)) 
            & (0x40U <= (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__rst_cnt))) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_meta_write_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__meta_write_arb_io_out_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_meta_write_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_meta_write_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_data_req_valid 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT___GEN_88));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_meta_read_valid 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb__DOT___GEN_88));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_meta_read_valid 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
           & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
              & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
                 & ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
                    & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_prober_idle))))));
}

void VTestHarness::_settle__TOP__4881(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4881\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_meta_read_valid 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
           & ((1U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
              & ((2U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
                 & ((3U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
                    & ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
                       & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_prober_idle))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3427 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_12_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3437 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_13_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3447 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_14_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3457 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_15_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3367 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_6_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3377 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_7_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3387 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_8_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3397 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_9_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3407 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_10_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
}

void VTestHarness::_settle__TOP__4882(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4882\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3417 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_11_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3307 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_0_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3317 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_1_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3327 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_2_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3337 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_3_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3347 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_4_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_3357 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19580) 
            & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_addr_valid)) 
           & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__brq_5_bits_addr_bits 
              == vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_19683));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_5 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_770) 
             | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_head) 
                == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))) 
            | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_tail) 
               == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___T_389 
        = ((((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT___GEN_843) 
             & ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_7_bits_addr_valid)
                 : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_6_bits_addr_valid)
                     : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_5_bits_addr_valid)
                         : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                             ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_4_bits_addr_valid)
                             : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                 ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_3_bits_addr_valid)
                                 : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                     ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_2_bits_addr_valid)
                                     : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                         ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_1_bits_addr_valid)
                                         : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_0_bits_addr_valid))))))))) 
            & (~ ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_7_bits_addr_is_virtual)
                   : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_6_bits_addr_is_virtual)
                       : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_5_bits_addr_is_virtual)
                           : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_4_bits_addr_is_virtual)
                               : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_3_bits_addr_is_virtual)
                                   : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_2_bits_addr_is_virtual)
                                       : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_1_bits_addr_is_virtual)
                                           : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_0_bits_addr_is_virtual)))))))))) 
           & ((7U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_7_bits_data_valid)
               : ((6U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_6_bits_data_valid)
                   : ((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_5_bits_data_valid)
                       : ((4U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                           ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_4_bits_data_valid)
                           : ((3U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                               ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_3_bits_data_valid)
                               : ((2U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                   ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_2_bits_data_valid)
                                   : ((1U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                       ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_1_bits_data_valid)
                                       : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__lsu__DOT__stq_0_bits_data_valid)))))))));
}

void VTestHarness::_settle__TOP__4883(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4883\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT__ea_sign 
        = ((0x40U & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT___T_13[1U])
            ? (0U == (0x1ffffffU & (~ ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT___T_13[2U] 
                                        << 0x19U) | 
                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT___T_13[1U] 
                                        >> 7U))))) : 
           (0U != (0x1ffffffU & ((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT___T_13[2U] 
                                  << 0x19U) | (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT___T_13[1U] 
                                               >> 7U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT___T_802 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state)) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_lsu_release_valid));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_release_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__wb_io_lsu_release_valid) 
           | (5U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__prober__DOT__state)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__pri_rdy 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_alloc_idx)
            ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_req_pri_rdy)
            : ((~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_alloc_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_req_pri_rdy)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache_io_lsu_ordered 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state)) 
             & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_req_pri_rdy) 
                & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_req_pri_rdy))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s1_valid_0))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0)));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_match_0 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_0) 
           | (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_1));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__tag_match_0 
        = (((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_0) 
            & ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
               & ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                         >> 0xcU))) 
                  == (0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                            >> 0xcU)))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_1) 
              & ((0U != (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)) 
                 & ((0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                           >> 0xcU))) 
                    == (0xfffffffU & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr 
                                              >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__ptw_ae_array 
        = ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                >> 0xbU)) << 0xcU)) 
           | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                  >> 0xbU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                     >> 0xbU)) << 0xaU)) 
                 | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                        >> 0xbU)) << 9U)) 
                    | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                           >> 0xbU)) 
                                  << 8U)) | ((0x80U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                          >> 0xbU)) 
                                                 << 7U)) 
                                             | ((0x40U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_59 
                                                             >> 0xbU)) 
                                                    << 6U)) 
                                                | ((0x20U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_55 
                                                                >> 0xbU)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_51 
                                                                   >> 0xbU)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_47 
                                                                      >> 0xbU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_43 
                                                                         >> 0xbU)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_39 
                                                                            >> 0xbU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___GEN_35 
                                                                             >> 0xbU)))))))))))))));
}

void VTestHarness::_settle__TOP__4887(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__4887\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_428) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_429 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_429 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_434) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_435 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5 
        = ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_435 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
        = (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__resp_valid_1)
                                            ? (0xfffffU 
                                               & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__ptw__DOT__r_pte_ppn))
                                            : ((IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled)
                                                ? (
                                                   (0xc0000U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                                >> 0x20U)) 
                                                       << 0x12U)) 
                                                   | ((0x3fe00U 
                                                       & ((0xfffffe00U 
                                                           & vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_27) 
                                                          | (0xffe00U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                                        >> 0xeU))))) 
                                                      | (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_33 
                                                            | (0xfffffU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                                          >> 0xeU)))))))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU))))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__top__DOT__boom_tile__DOT__frontend__DOT__s1_pc)))));
}
