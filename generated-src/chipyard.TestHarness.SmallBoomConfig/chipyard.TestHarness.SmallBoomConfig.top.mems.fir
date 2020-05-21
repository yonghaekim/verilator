circuit cc_banks_0_ext :
  module tag_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<88>
    output RW0_rdata : UInt<88>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<4>
  
    inst mem_0_0 of split_tag_array_ext
    inst mem_0_1 of split_tag_array_ext
    inst mem_0_2 of split_tag_array_ext
    inst mem_0_3 of split_tag_array_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node RW0_rdata_0 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_2 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_3 = cat(RW0_rdata_0_2, _GEN_0)
    RW0_rdata <= cat(RW0_rdata_0_3, _GEN_1)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 21, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 43, 22)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 65, 44)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 87, 66)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)

  module array_0_0_ext :
    input W0_addr : UInt<9>
    input W0_clk : Clock
    input W0_data : UInt<64>
    input W0_en : UInt<1>
    input W0_mask : UInt<1>
    input R0_addr : UInt<9>
    input R0_clk : Clock
    output R0_data : UInt<64>
    input R0_en : UInt<1>
  
    inst mem_0_0 of split_array_0_0_ext
    node R0_data_0_0 = mem_0_0.R0_data
    node R0_data_0 = R0_data_0_0
    R0_data <= mem_0_0.R0_data
    mem_0_0.W0_addr <= W0_addr
    mem_0_0.W0_clk <= W0_clk
    mem_0_0.W0_data <= W0_data
    mem_0_0.W0_en <= W0_en
    mem_0_0.W0_mask <= W0_mask
    mem_0_0.R0_addr <= R0_addr
    mem_0_0.R0_clk <= R0_clk
    mem_0_0.R0_en <= R0_en

  module tag_array_0_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<84>
    output RW0_rdata : UInt<84>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<4>
  
    inst mem_0_0 of split_tag_array_0_ext
    inst mem_0_1 of split_tag_array_0_ext
    inst mem_0_2 of split_tag_array_0_ext
    inst mem_0_3 of split_tag_array_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node RW0_rdata_0 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_2 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_3 = cat(RW0_rdata_0_2, _GEN_0)
    RW0_rdata <= cat(RW0_rdata_0_3, _GEN_1)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 20, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 41, 21)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 62, 42)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 83, 63)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)

  module dataArrayWay_0_ext :
    input RW0_addr : UInt<9>
    input RW0_clk : Clock
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    inst mem_0_0 of split_dataArrayWay_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0 = RW0_rdata_0_0
    RW0_rdata <= mem_0_0.RW0_rdata
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= RW0_wdata
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode

  module bim_data_array_0_ext :
    input RW0_addr : UInt<9>
    input RW0_clk : Clock
    input RW0_wdata : UInt<8>
    output RW0_rdata : UInt<8>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<8>
  
    inst mem_0_0 of split_bim_data_array_0_ext
    inst mem_0_1 of split_bim_data_array_0_ext
    inst mem_0_2 of split_bim_data_array_0_ext
    inst mem_0_3 of split_bim_data_array_0_ext
    inst mem_0_4 of split_bim_data_array_0_ext
    inst mem_0_5 of split_bim_data_array_0_ext
    inst mem_0_6 of split_bim_data_array_0_ext
    inst mem_0_7 of split_bim_data_array_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node RW0_rdata_0_4 = mem_0_4.RW0_rdata
    node RW0_rdata_0_5 = mem_0_5.RW0_rdata
    node RW0_rdata_0_6 = mem_0_6.RW0_rdata
    node RW0_rdata_0_7 = mem_0_7.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_2 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_3 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_4 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_5 = cat(RW0_rdata_0_6, _GEN_4)
    node RW0_rdata_0 = cat(RW0_rdata_0_7, _GEN_5)
    node _GEN_6 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_7 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_8 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_9 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_10 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_11 = cat(RW0_rdata_0_6, _GEN_4)
    RW0_rdata <= cat(RW0_rdata_0_7, _GEN_5)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 0, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 1, 1)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 2, 2)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 3, 3)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)
    mem_0_4.RW0_addr <= RW0_addr
    mem_0_4.RW0_clk <= RW0_clk
    mem_0_4.RW0_wdata <= bits(RW0_wdata, 4, 4)
    mem_0_4.RW0_en <= RW0_en
    mem_0_4.RW0_wmode <= RW0_wmode
    mem_0_4.RW0_wmask <= bits(RW0_wmask, 4, 4)
    mem_0_5.RW0_addr <= RW0_addr
    mem_0_5.RW0_clk <= RW0_clk
    mem_0_5.RW0_wdata <= bits(RW0_wdata, 5, 5)
    mem_0_5.RW0_en <= RW0_en
    mem_0_5.RW0_wmode <= RW0_wmode
    mem_0_5.RW0_wmask <= bits(RW0_wmask, 5, 5)
    mem_0_6.RW0_addr <= RW0_addr
    mem_0_6.RW0_clk <= RW0_clk
    mem_0_6.RW0_wdata <= bits(RW0_wdata, 6, 6)
    mem_0_6.RW0_en <= RW0_en
    mem_0_6.RW0_wmode <= RW0_wmode
    mem_0_6.RW0_wmask <= bits(RW0_wmask, 6, 6)
    mem_0_7.RW0_addr <= RW0_addr
    mem_0_7.RW0_clk <= RW0_clk
    mem_0_7.RW0_wdata <= bits(RW0_wdata, 7, 7)
    mem_0_7.RW0_en <= RW0_en
    mem_0_7.RW0_wmode <= RW0_wmode
    mem_0_7.RW0_wmask <= bits(RW0_wmask, 7, 7)

  module btb_tag_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<20>
    output RW0_rdata : UInt<20>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    inst mem_0_0 of split_btb_tag_array_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0 = RW0_rdata_0_0
    RW0_rdata <= mem_0_0.RW0_rdata
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= RW0_wdata
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode

  module btb_data_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<48>
    output RW0_rdata : UInt<48>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    inst mem_0_0 of split_btb_data_array_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0 = RW0_rdata_0_0
    RW0_rdata <= mem_0_0.RW0_rdata
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= RW0_wdata
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode

  module counter_table_ext :
    input W0_addr : UInt<11>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_en : UInt<1>
    input R0_addr : UInt<11>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input R0_en : UInt<1>
  
    inst mem_0_0 of split_counter_table_ext
    node R0_data_0_0 = mem_0_0.R0_data
    node R0_data_0 = R0_data_0_0
    R0_data <= mem_0_0.R0_data
    mem_0_0.W0_addr <= W0_addr
    mem_0_0.W0_clk <= W0_clk
    mem_0_0.W0_data <= W0_data
    mem_0_0.W0_en <= W0_en
    mem_0_0.R0_addr <= R0_addr
    mem_0_0.R0_clk <= R0_clk
    mem_0_0.R0_en <= R0_en

  module rob_debug_inst_mem_ext :
    input W0_addr : UInt<5>
    input W0_clk : Clock
    input W0_data : UInt<32>
    input W0_en : UInt<1>
    input W0_mask : UInt<1>
    input R0_addr : UInt<5>
    input R0_clk : Clock
    output R0_data : UInt<32>
    input R0_en : UInt<1>
  
    inst mem_0_0 of split_rob_debug_inst_mem_ext
    node R0_data_0_0 = mem_0_0.R0_data
    node R0_data_0 = R0_data_0_0
    R0_data <= mem_0_0.R0_data
    mem_0_0.W0_addr <= W0_addr
    mem_0_0.W0_clk <= W0_clk
    mem_0_0.W0_data <= W0_data
    mem_0_0.W0_en <= W0_en
    mem_0_0.W0_mask <= W0_mask
    mem_0_0.R0_addr <= R0_addr
    mem_0_0.R0_clk <= R0_clk
    mem_0_0.R0_en <= R0_en

  module l2_tlb_ram_ext :
    input RW0_addr : UInt<10>
    input RW0_clk : Clock
    input RW0_wdata : UInt<44>
    output RW0_rdata : UInt<44>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    inst mem_0_0 of split_l2_tlb_ram_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0 = RW0_rdata_0_0
    RW0_rdata <= mem_0_0.RW0_rdata
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= RW0_wdata
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode

  module cc_dir_ext :
    input RW0_addr : UInt<10>
    input RW0_clk : Clock
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<8>
  
    inst mem_0_0 of split_cc_dir_ext
    inst mem_0_1 of split_cc_dir_ext
    inst mem_0_2 of split_cc_dir_ext
    inst mem_0_3 of split_cc_dir_ext
    inst mem_0_4 of split_cc_dir_ext
    inst mem_0_5 of split_cc_dir_ext
    inst mem_0_6 of split_cc_dir_ext
    inst mem_0_7 of split_cc_dir_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node RW0_rdata_0_4 = mem_0_4.RW0_rdata
    node RW0_rdata_0_5 = mem_0_5.RW0_rdata
    node RW0_rdata_0_6 = mem_0_6.RW0_rdata
    node RW0_rdata_0_7 = mem_0_7.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_2 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_3 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_4 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_5 = cat(RW0_rdata_0_6, _GEN_4)
    node RW0_rdata_0 = cat(RW0_rdata_0_7, _GEN_5)
    node _GEN_6 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_7 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_8 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_9 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_10 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_11 = cat(RW0_rdata_0_6, _GEN_4)
    RW0_rdata <= cat(RW0_rdata_0_7, _GEN_5)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 15, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 31, 16)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 47, 32)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 63, 48)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)
    mem_0_4.RW0_addr <= RW0_addr
    mem_0_4.RW0_clk <= RW0_clk
    mem_0_4.RW0_wdata <= bits(RW0_wdata, 79, 64)
    mem_0_4.RW0_en <= RW0_en
    mem_0_4.RW0_wmode <= RW0_wmode
    mem_0_4.RW0_wmask <= bits(RW0_wmask, 4, 4)
    mem_0_5.RW0_addr <= RW0_addr
    mem_0_5.RW0_clk <= RW0_clk
    mem_0_5.RW0_wdata <= bits(RW0_wdata, 95, 80)
    mem_0_5.RW0_en <= RW0_en
    mem_0_5.RW0_wmode <= RW0_wmode
    mem_0_5.RW0_wmask <= bits(RW0_wmask, 5, 5)
    mem_0_6.RW0_addr <= RW0_addr
    mem_0_6.RW0_clk <= RW0_clk
    mem_0_6.RW0_wdata <= bits(RW0_wdata, 111, 96)
    mem_0_6.RW0_en <= RW0_en
    mem_0_6.RW0_wmode <= RW0_wmode
    mem_0_6.RW0_wmask <= bits(RW0_wmask, 6, 6)
    mem_0_7.RW0_addr <= RW0_addr
    mem_0_7.RW0_clk <= RW0_clk
    mem_0_7.RW0_wdata <= bits(RW0_wdata, 127, 112)
    mem_0_7.RW0_en <= RW0_en
    mem_0_7.RW0_wmode <= RW0_wmode
    mem_0_7.RW0_wmask <= bits(RW0_wmask, 7, 7)

  module cc_banks_0_ext :
    input RW0_addr : UInt<14>
    input RW0_clk : Clock
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    inst mem_0_0 of split_cc_banks_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0 = RW0_rdata_0_0
    RW0_rdata <= mem_0_0.RW0_rdata
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= RW0_wdata
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode

  module split_tag_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<22>
    output RW0_rdata : UInt<22>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<22>
      depth => 64
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<6>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_array_0_0_ext :
    input W0_addr : UInt<9>
    input W0_clk : Clock
    input W0_data : UInt<64>
    input W0_en : UInt<1>
    input W0_mask : UInt<1>
    input R0_addr : UInt<9>
    input R0_clk : Clock
    output R0_data : UInt<64>
    input R0_en : UInt<1>
  
    mem ram :
      data-type => UInt<64>
      depth => 512
      read-latency => 0
      write-latency => 1
      reader => R_0
      writer => W_0
      read-under-write => undefined
    R0_data <= ram.R_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = R0_en
    node _GEN_1 = R0_addr
    reg ram_R_0_addr_pipe_0 : UInt<9>, R0_clk with :
      reset => (UInt<1>("h0"), ram_R_0_addr_pipe_0)
    node ram_R_0_addr_en = R0_en
    ram_R_0_addr_pipe_0 <= mux(_GEN_0, R0_addr, ram_R_0_addr_pipe_0)
    ram.R_0.clk <= R0_clk
    ram.R_0.en <= R0_en
    ram.R_0.addr <= ram_R_0_addr_pipe_0
    node _GEN_2 = W0_en
    node _GEN_3 = W0_mask
    node _GEN_4 = W0_addr
    node _GEN_5 = W0_data
    ram.W_0.clk <= W0_clk
    ram.W_0.en <= W0_en
    ram.W_0.mask <= W0_mask
    ram.W_0.addr <= W0_addr
    ram.W_0.data <= W0_data

  module split_tag_array_0_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<21>
    output RW0_rdata : UInt<21>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<21>
      depth => 64
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<6>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_dataArrayWay_0_ext :
    input RW0_addr : UInt<9>
    input RW0_clk : Clock
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    mem ram :
      data-type => UInt<64>
      depth => 512
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = UInt<1>("h1")
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= UInt<1>("h1")
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<9>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_bim_data_array_0_ext :
    input RW0_addr : UInt<9>
    input RW0_clk : Clock
    input RW0_wdata : UInt<1>
    output RW0_rdata : UInt<1>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<1>
      depth => 512
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<9>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_btb_tag_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<20>
    output RW0_rdata : UInt<20>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    mem ram :
      data-type => UInt<20>
      depth => 64
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = UInt<1>("h1")
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= UInt<1>("h1")
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<6>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_btb_data_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<48>
    output RW0_rdata : UInt<48>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    mem ram :
      data-type => UInt<48>
      depth => 64
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = UInt<1>("h1")
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= UInt<1>("h1")
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<6>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_counter_table_ext :
    input W0_addr : UInt<11>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_en : UInt<1>
    input R0_addr : UInt<11>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input R0_en : UInt<1>
  
    mem ram :
      data-type => UInt<4>
      depth => 2048
      read-latency => 0
      write-latency => 1
      reader => R_0
      writer => W_0
      read-under-write => undefined
    R0_data <= ram.R_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = R0_en
    node _GEN_1 = R0_addr
    reg ram_R_0_addr_pipe_0 : UInt<11>, R0_clk with :
      reset => (UInt<1>("h0"), ram_R_0_addr_pipe_0)
    node ram_R_0_addr_en = R0_en
    ram_R_0_addr_pipe_0 <= mux(_GEN_0, R0_addr, ram_R_0_addr_pipe_0)
    ram.R_0.clk <= R0_clk
    ram.R_0.en <= R0_en
    ram.R_0.addr <= ram_R_0_addr_pipe_0
    node _GEN_2 = W0_en
    node _GEN_3 = UInt<1>("h1")
    node _GEN_4 = W0_addr
    node _GEN_5 = W0_data
    ram.W_0.clk <= W0_clk
    ram.W_0.en <= W0_en
    ram.W_0.mask <= UInt<1>("h1")
    ram.W_0.addr <= W0_addr
    ram.W_0.data <= W0_data

  module split_rob_debug_inst_mem_ext :
    input W0_addr : UInt<5>
    input W0_clk : Clock
    input W0_data : UInt<32>
    input W0_en : UInt<1>
    input W0_mask : UInt<1>
    input R0_addr : UInt<5>
    input R0_clk : Clock
    output R0_data : UInt<32>
    input R0_en : UInt<1>
  
    mem ram :
      data-type => UInt<32>
      depth => 32
      read-latency => 0
      write-latency => 1
      reader => R_0
      writer => W_0
      read-under-write => undefined
    R0_data <= ram.R_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = R0_en
    node _GEN_1 = R0_addr
    reg ram_R_0_addr_pipe_0 : UInt<5>, R0_clk with :
      reset => (UInt<1>("h0"), ram_R_0_addr_pipe_0)
    node ram_R_0_addr_en = R0_en
    ram_R_0_addr_pipe_0 <= mux(_GEN_0, R0_addr, ram_R_0_addr_pipe_0)
    ram.R_0.clk <= R0_clk
    ram.R_0.en <= R0_en
    ram.R_0.addr <= ram_R_0_addr_pipe_0
    node _GEN_2 = W0_en
    node _GEN_3 = W0_mask
    node _GEN_4 = W0_addr
    node _GEN_5 = W0_data
    ram.W_0.clk <= W0_clk
    ram.W_0.en <= W0_en
    ram.W_0.mask <= W0_mask
    ram.W_0.addr <= W0_addr
    ram.W_0.data <= W0_data

  module split_l2_tlb_ram_ext :
    input RW0_addr : UInt<10>
    input RW0_clk : Clock
    input RW0_wdata : UInt<44>
    output RW0_rdata : UInt<44>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    mem ram :
      data-type => UInt<44>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = UInt<1>("h1")
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= UInt<1>("h1")
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<10>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_cc_dir_ext :
    input RW0_addr : UInt<10>
    input RW0_clk : Clock
    input RW0_wdata : UInt<16>
    output RW0_rdata : UInt<16>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<16>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<10>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_cc_banks_0_ext :
    input RW0_addr : UInt<14>
    input RW0_clk : Clock
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    mem ram :
      data-type => UInt<64>
      depth => 16384
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = UInt<1>("h1")
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= UInt<1>("h1")
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<14>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0
