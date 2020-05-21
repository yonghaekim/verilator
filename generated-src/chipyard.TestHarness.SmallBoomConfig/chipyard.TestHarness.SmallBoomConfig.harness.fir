circuit TestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@2.0]
  extmodule Top : @[:chipyard.TestHarness.SmallBoomConfig.fir@319353.2]
    input clock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319354.4]
    input reset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319355.4]
    output debug_clockeddmi_dmi_req_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input debug_clockeddmi_dmi_req_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input debug_clockeddmi_dmi_req_bits_addr : UInt<7> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input debug_clockeddmi_dmi_req_bits_data : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input debug_clockeddmi_dmi_req_bits_op : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input debug_clockeddmi_dmi_resp_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    output debug_clockeddmi_dmi_resp_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    output debug_clockeddmi_dmi_resp_bits_data : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    output debug_clockeddmi_dmi_resp_bits_resp : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input debug_clockeddmi_dmiClock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input debug_clockeddmi_dmiReset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    output debug_ndreset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    output debug_dmactive : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319358.4]
    input mem_axi4_0_aw_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_addr : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_len : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_size : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_burst : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_lock : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_cache : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_prot : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_aw_bits_qos : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_w_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_w_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_w_bits_data : UInt<64> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_w_bits_strb : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_w_bits_last : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_b_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_b_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_b_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_b_bits_resp : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_ar_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_addr : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_len : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_size : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_burst : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_lock : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_cache : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_prot : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_ar_bits_qos : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output mem_axi4_0_r_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_r_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_r_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_r_bits_data : UInt<64> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_r_bits_resp : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    input mem_axi4_0_r_bits_last : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319360.4]
    output serial_in_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319363.4]
    input serial_in_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319363.4]
    input serial_in_bits : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319363.4]
    input serial_out_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319363.4]
    output serial_out_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319363.4]
    output serial_out_bits : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319363.4]
    output uart_0_txd : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319364.4]
    input uart_0_rxd : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319364.4]
  
    defname = Top
    

  extmodule SimSerial : @[:chipyard.TestHarness.SmallBoomConfig.fir@319679.2]
    input clock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319680.4]
    input reset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319681.4]
    input serial_in_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319682.4]
    output serial_in_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319682.4]
    output serial_in_bits : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319682.4]
    output serial_out_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319682.4]
    input serial_out_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319682.4]
    input serial_out_bits : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319682.4]
    output exit : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319683.4]
  
    defname = SimSerial
    

  extmodule SimDRAM_inTestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@319688.2]
    input clock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319689.4]
    input reset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319690.4]
    output axi_aw_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_addr : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_len : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_size : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_burst : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_lock : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_cache : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_prot : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_aw_bits_qos : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_w_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_w_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_w_bits_data : UInt<64> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_w_bits_strb : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_w_bits_last : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_b_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_b_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_b_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_b_bits_resp : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_ar_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_addr : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_len : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_size : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_burst : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_lock : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_cache : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_prot : UInt<3> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_ar_bits_qos : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    input axi_r_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_r_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_r_bits_id : UInt<4> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_r_bits_data : UInt<64> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_r_bits_resp : UInt<2> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
    output axi_r_bits_last : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319691.4]
  
    defname = SimDRAM
    parameter LINE_SIZE = 64
    parameter ID_BITS = 4
    parameter ADDR_BITS = 32
    parameter MEM_SIZE = 268435456
    parameter DATA_BITS = 64

  module Queue_40_inTestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@319700.2]
    input clock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319701.4]
    input reset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319702.4]
    output io_enq_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
    input io_enq_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
    input io_enq_bits : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
    input io_deq_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
    output io_deq_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
    output io_deq_bits : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
  
    mem _T : @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
      data-type => UInt<8>
      depth => 128
      read-latency => 0
      write-latency => 1
      reader => _T_18
      writer => _T_10
      read-under-write => undefined
    reg value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319706.4]
    reg value_1 : UInt<7>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319707.4]
    reg _T_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), _T_1) @[Decoupled.scala 212:35:chipyard.TestHarness.SmallBoomConfig.fir@319708.4]
    node _T_2 = eq(value, value_1) @[Decoupled.scala 214:41:chipyard.TestHarness.SmallBoomConfig.fir@319709.4]
    node _T_3 = eq(_T_1, UInt<1>("h0")) @[Decoupled.scala 215:36:chipyard.TestHarness.SmallBoomConfig.fir@319710.4]
    node _T_4 = and(_T_2, _T_3) @[Decoupled.scala 215:33:chipyard.TestHarness.SmallBoomConfig.fir@319711.4]
    node _T_5 = and(_T_2, _T_1) @[Decoupled.scala 216:32:chipyard.TestHarness.SmallBoomConfig.fir@319712.4]
    node _T_6 = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:chipyard.TestHarness.SmallBoomConfig.fir@319713.4]
    node _T_8 = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:chipyard.TestHarness.SmallBoomConfig.fir@319716.4]
    skip
    node _T_11 = add(value, UInt<7>("h1")) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319723.6]
    node _T_12 = tail(_T_11, 1) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319724.6]
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_5 = mux(_T_6, _T_12, value) @[Decoupled.scala 220:17:chipyard.TestHarness.SmallBoomConfig.fir@319719.4]
    skip
    node _T_13 = add(value_1, UInt<7>("h1")) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319729.6]
    node _T_14 = tail(_T_13, 1) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319730.6]
    skip
    node _GEN_6 = mux(_T_8, _T_14, value_1) @[Decoupled.scala 224:17:chipyard.TestHarness.SmallBoomConfig.fir@319727.4]
    node _T_15 = neq(_T_6, _T_8) @[Decoupled.scala 227:16:chipyard.TestHarness.SmallBoomConfig.fir@319733.4]
    node _GEN_7 = mux(_T_15, _T_6, _T_1) @[Decoupled.scala 227:28:chipyard.TestHarness.SmallBoomConfig.fir@319734.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= eq(_T_5, UInt<1>("h0")) @[Decoupled.scala 232:16:chipyard.TestHarness.SmallBoomConfig.fir@319740.4]
    io_deq_valid <= eq(_T_4, UInt<1>("h0")) @[Decoupled.scala 231:16:chipyard.TestHarness.SmallBoomConfig.fir@319738.4]
    io_deq_bits <= _T._T_18.data @[Decoupled.scala 233:15:chipyard.TestHarness.SmallBoomConfig.fir@319742.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    value <= mux(reset, UInt<7>("h0"), _GEN_5) @[Counter.scala 38:13:chipyard.TestHarness.SmallBoomConfig.fir@319725.6]
    value_1 <= mux(reset, UInt<7>("h0"), _GEN_6) @[Counter.scala 38:13:chipyard.TestHarness.SmallBoomConfig.fir@319731.6]
    _T_1 <= mux(reset, UInt<1>("h0"), _GEN_7) @[Decoupled.scala 228:16:chipyard.TestHarness.SmallBoomConfig.fir@319735.6]
    skip
    skip
    _T._T_18.clk <= clock
    _T._T_18.en <= UInt<1>("h1")
    _T._T_18.addr <= value_1
    skip
    skip
    skip
    skip
    _T._T_10.clk <= clock
    _T._T_10.en <= and(io_enq_ready, io_enq_valid)
    _T._T_10.mask <= UInt<1>("h1")
    _T._T_10.addr <= value
    _T._T_10.data <= io_enq_bits

  extmodule SimUART_inTestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@319800.2]
    input clock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319801.4]
    input reset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319802.4]
    input serial_in_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319803.4]
    output serial_in_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319803.4]
    output serial_in_bits : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319803.4]
    output serial_out_ready : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319803.4]
    input serial_out_valid : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319803.4]
    input serial_out_bits : UInt<8> @[:chipyard.TestHarness.SmallBoomConfig.fir@319803.4]
  
    defname = SimUART
    parameter UARTNO = 0

  module UARTAdapter_inTestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@319808.2]
    input clock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319809.4]
    input reset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319810.4]
    input io_uart_txd : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319811.4]
    output io_uart_rxd : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319811.4]
  
    inst txfifo of Queue_40_inTestHarness @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
    inst rxfifo of Queue_40_inTestHarness @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
    inst sim of SimUART_inTestHarness @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
    reg txState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txState) @[UARTAdapter.scala 43:24:chipyard.TestHarness.SmallBoomConfig.fir@319819.4]
    reg txData : UInt<8>, clock with :
      reset => (UInt<1>("h0"), txData) @[UARTAdapter.scala 44:19:chipyard.TestHarness.SmallBoomConfig.fir@319820.4]
    node _T = eq(txState, UInt<2>("h2")) @[UARTAdapter.scala 46:49:chipyard.TestHarness.SmallBoomConfig.fir@319821.4]
    node _T_1 = and(_T, txfifo.io_enq_ready) @[UARTAdapter.scala 46:61:chipyard.TestHarness.SmallBoomConfig.fir@319822.4]
    reg value : UInt<3>, clock with :
      reset => (UInt<1>("h0"), value) @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319823.4]
    node _T_2 = eq(value, UInt<3>("h7")) @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319825.6]
    node _T_3 = add(value, UInt<3>("h1")) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319826.6]
    node _T_4 = tail(_T_3, 1) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319827.6]
    node _GEN_0 = mux(_T_1, _T_4, value) @[Counter.scala 71:17:chipyard.TestHarness.SmallBoomConfig.fir@319824.4]
    node txDataWrap = and(_T_1, _T_2) @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319830.4]
    node _T_5 = eq(txState, UInt<2>("h1")) @[UARTAdapter.scala 48:51:chipyard.TestHarness.SmallBoomConfig.fir@319831.4]
    node _T_6 = and(_T_5, txfifo.io_enq_ready) @[UARTAdapter.scala 48:63:chipyard.TestHarness.SmallBoomConfig.fir@319832.4]
    reg value_1 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), value_1) @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319833.4]
    node _T_7 = eq(value_1, UInt<10>("h363")) @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319835.6]
    node _T_8 = add(value_1, UInt<10>("h1")) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319836.6]
    node _T_9 = tail(_T_8, 1) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319837.6]
    node _GEN_1 = mux(_T_7, UInt<10>("h0"), _T_9) @[Counter.scala 40:21:chipyard.TestHarness.SmallBoomConfig.fir@319839.6]
    node _GEN_2 = mux(_T_6, _GEN_1, value_1) @[Counter.scala 71:17:chipyard.TestHarness.SmallBoomConfig.fir@319834.4]
    node txBaudWrap = and(_T_6, _T_7) @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319843.4]
    node _T_10 = eq(txState, UInt<2>("h0")) @[UARTAdapter.scala 49:53:chipyard.TestHarness.SmallBoomConfig.fir@319844.4]
    node _T_11 = eq(io_uart_txd, UInt<1>("h0")) @[UARTAdapter.scala 49:80:chipyard.TestHarness.SmallBoomConfig.fir@319845.4]
    node _T_12 = and(_T_10, _T_11) @[UARTAdapter.scala 49:65:chipyard.TestHarness.SmallBoomConfig.fir@319846.4]
    node _T_13 = and(_T_12, txfifo.io_enq_ready) @[UARTAdapter.scala 49:88:chipyard.TestHarness.SmallBoomConfig.fir@319847.4]
    reg value_2 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), value_2) @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319848.4]
    node _T_14 = eq(value_2, UInt<2>("h3")) @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319850.6]
    node _T_15 = add(value_2, UInt<2>("h1")) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319851.6]
    node _T_16 = tail(_T_15, 1) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319852.6]
    node _GEN_3 = mux(_T_13, _T_16, value_2) @[Counter.scala 71:17:chipyard.TestHarness.SmallBoomConfig.fir@319849.4]
    node txSlackWrap = and(_T_13, _T_14) @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319855.4]
    node _T_17 = eq(UInt<2>("h0"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319856.4]
    node _GEN_4 = mux(txSlackWrap, UInt<8>("h0"), txData) @[UARTAdapter.scala 53:25:chipyard.TestHarness.SmallBoomConfig.fir@319858.6]
    node _GEN_5 = mux(txSlackWrap, UInt<2>("h1"), txState) @[UARTAdapter.scala 53:25:chipyard.TestHarness.SmallBoomConfig.fir@319858.6]
    node _T_18 = eq(UInt<2>("h1"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319864.6]
    node _GEN_6 = mux(txBaudWrap, UInt<2>("h2"), txState) @[UARTAdapter.scala 59:24:chipyard.TestHarness.SmallBoomConfig.fir@319866.8]
    node _T_19 = eq(UInt<2>("h2"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319871.8]
    node _GEN_30 = pad(io_uart_txd, 8) @[UARTAdapter.scala 65:41:chipyard.TestHarness.SmallBoomConfig.fir@319874.12]
    node _T_20 = dshlw(_GEN_30, value) @[UARTAdapter.scala 65:41:chipyard.TestHarness.SmallBoomConfig.fir@319874.12]
    node _T_21 = or(txData, _T_20) @[UARTAdapter.scala 65:26:chipyard.TestHarness.SmallBoomConfig.fir@319875.12]
    node _GEN_7 = mux(txfifo.io_enq_ready, _T_21, txData) @[UARTAdapter.scala 64:34:chipyard.TestHarness.SmallBoomConfig.fir@319873.10]
    skip
    node _T_23 = mux(io_uart_txd, UInt<2>("h0"), UInt<2>("h3")) @[UARTAdapter.scala 68:23:chipyard.TestHarness.SmallBoomConfig.fir@319880.12]
    node _GEN_8 = mux(txfifo.io_enq_ready, UInt<2>("h1"), txState) @[UARTAdapter.scala 69:39:chipyard.TestHarness.SmallBoomConfig.fir@319884.12]
    node _GEN_9 = mux(txDataWrap, _T_23, _GEN_8) @[UARTAdapter.scala 67:24:chipyard.TestHarness.SmallBoomConfig.fir@319878.10]
    node _T_24 = eq(UInt<2>("h3"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319889.10]
    skip
    node _T_26 = and(io_uart_txd, txfifo.io_enq_ready) @[UARTAdapter.scala 74:32:chipyard.TestHarness.SmallBoomConfig.fir@319892.12]
    node _GEN_10 = mux(_T_26, UInt<2>("h0"), txState) @[UARTAdapter.scala 74:56:chipyard.TestHarness.SmallBoomConfig.fir@319893.12]
    node _GEN_11 = mux(_T_24, _GEN_10, txState) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319890.10]
    node _GEN_12 = mux(_T_19, _GEN_7, txData) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319872.8]
    node _GEN_13 = mux(_T_19, _GEN_9, _GEN_11) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319872.8]
    node _GEN_14 = mux(_T_18, _GEN_6, _GEN_13) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319865.6]
    node _GEN_15 = mux(_T_18, txData, _GEN_12) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319865.6]
    skip
    node _GEN_17 = mux(_T_17, _GEN_5, _GEN_14) @[Conditional.scala 40:58:chipyard.TestHarness.SmallBoomConfig.fir@319857.4]
    reg rxState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), rxState) @[UARTAdapter.scala 84:24:chipyard.TestHarness.SmallBoomConfig.fir@319899.4]
    reg value_3 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), value_3) @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319900.4]
    node _T_27 = eq(value_3, UInt<10>("h363")) @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319902.6]
    node _T_28 = add(value_3, UInt<10>("h1")) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319903.6]
    node _T_29 = tail(_T_28, 1) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319904.6]
    node _GEN_18 = mux(_T_27, UInt<10>("h0"), _T_29) @[Counter.scala 40:21:chipyard.TestHarness.SmallBoomConfig.fir@319906.6]
    node _GEN_19 = mux(txfifo.io_enq_ready, _GEN_18, value_3) @[Counter.scala 71:17:chipyard.TestHarness.SmallBoomConfig.fir@319901.4]
    node rxBaudWrap = and(txfifo.io_enq_ready, _T_27) @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319910.4]
    node _T_30 = eq(rxState, UInt<2>("h2")) @[UARTAdapter.scala 88:49:chipyard.TestHarness.SmallBoomConfig.fir@319911.4]
    node _T_31 = and(_T_30, txfifo.io_enq_ready) @[UARTAdapter.scala 88:61:chipyard.TestHarness.SmallBoomConfig.fir@319912.4]
    node _T_32 = and(_T_31, rxBaudWrap) @[UARTAdapter.scala 88:84:chipyard.TestHarness.SmallBoomConfig.fir@319913.4]
    reg value_4 : UInt<3>, clock with :
      reset => (UInt<1>("h0"), value_4) @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319914.4]
    node _T_33 = eq(value_4, UInt<3>("h7")) @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319916.6]
    node _T_34 = add(value_4, UInt<3>("h1")) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319917.6]
    node _T_35 = tail(_T_34, 1) @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319918.6]
    node _GEN_20 = mux(_T_32, _T_35, value_4) @[Counter.scala 71:17:chipyard.TestHarness.SmallBoomConfig.fir@319915.4]
    node rxDataWrap = and(_T_32, _T_33) @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319921.4]
    node _T_36 = eq(UInt<2>("h0"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319923.4]
    node _T_37 = and(rxBaudWrap, rxfifo.io_deq_valid) @[UARTAdapter.scala 94:24:chipyard.TestHarness.SmallBoomConfig.fir@319926.6]
    node _GEN_21 = mux(_T_37, UInt<2>("h1"), rxState) @[UARTAdapter.scala 94:48:chipyard.TestHarness.SmallBoomConfig.fir@319927.6]
    node _T_38 = eq(UInt<2>("h1"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319932.6]
    node _GEN_22 = mux(rxBaudWrap, UInt<2>("h2"), rxState) @[UARTAdapter.scala 100:24:chipyard.TestHarness.SmallBoomConfig.fir@319935.8]
    node _T_39 = eq(UInt<2>("h2"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319940.8]
    node _T_40 = dshr(rxfifo.io_deq_bits, value_4) @[UARTAdapter.scala 105:42:chipyard.TestHarness.SmallBoomConfig.fir@319942.10]
    node _T_41 = bits(_T_40, 0, 0) @[UARTAdapter.scala 105:55:chipyard.TestHarness.SmallBoomConfig.fir@319943.10]
    node _T_42 = and(rxDataWrap, rxBaudWrap) @[UARTAdapter.scala 106:23:chipyard.TestHarness.SmallBoomConfig.fir@319945.10]
    node _GEN_23 = mux(_T_42, UInt<2>("h0"), rxState) @[UARTAdapter.scala 106:38:chipyard.TestHarness.SmallBoomConfig.fir@319946.10]
    node _GEN_24 = mux(_T_39, _T_41, UInt<1>("h1")) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319941.8]
    node _GEN_25 = mux(_T_39, _GEN_23, rxState) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319941.8]
    node _GEN_26 = mux(_T_38, UInt<1>("h0"), _GEN_24) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319933.6]
    node _GEN_27 = mux(_T_38, _GEN_22, _GEN_25) @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319933.6]
    skip
    node _GEN_29 = mux(_T_36, _GEN_21, _GEN_27) @[Conditional.scala 40:58:chipyard.TestHarness.SmallBoomConfig.fir@319924.4]
    skip
    node _T_44 = and(_T_30, rxDataWrap) @[UARTAdapter.scala 111:48:chipyard.TestHarness.SmallBoomConfig.fir@319951.4]
    node _T_45 = and(_T_44, rxBaudWrap) @[UARTAdapter.scala 111:62:chipyard.TestHarness.SmallBoomConfig.fir@319952.4]
    skip
    skip
    io_uart_rxd <= or(_T_36, _GEN_26) @[UARTAdapter.scala 90:15:chipyard.TestHarness.SmallBoomConfig.fir@319922.4 UARTAdapter.scala 93:19:chipyard.TestHarness.SmallBoomConfig.fir@319925.6 UARTAdapter.scala 99:19:chipyard.TestHarness.SmallBoomConfig.fir@319934.8 UARTAdapter.scala 105:19:chipyard.TestHarness.SmallBoomConfig.fir@319944.10]
    txfifo.clock <= clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319814.4]
    txfifo.reset <= reset @[:chipyard.TestHarness.SmallBoomConfig.fir@319815.4]
    txfifo.io_enq_valid <= and(_T_1, _T_2) @[UARTAdapter.scala 81:23:chipyard.TestHarness.SmallBoomConfig.fir@319898.4]
    txfifo.io_enq_bits <= txData @[UARTAdapter.scala 80:23:chipyard.TestHarness.SmallBoomConfig.fir@319897.4]
    txfifo.io_deq_ready <= sim.serial_out_ready @[UARTAdapter.scala 120:23:chipyard.TestHarness.SmallBoomConfig.fir@319964.4]
    rxfifo.clock <= clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319817.4]
    rxfifo.reset <= reset @[:chipyard.TestHarness.SmallBoomConfig.fir@319818.4]
    rxfifo.io_enq_valid <= sim.serial_in_valid @[UARTAdapter.scala 123:23:chipyard.TestHarness.SmallBoomConfig.fir@319966.4]
    rxfifo.io_enq_bits <= sim.serial_in_bits @[UARTAdapter.scala 122:22:chipyard.TestHarness.SmallBoomConfig.fir@319965.4]
    rxfifo.io_deq_ready <= and(_T_45, txfifo.io_enq_ready) @[UARTAdapter.scala 111:23:chipyard.TestHarness.SmallBoomConfig.fir@319954.4]
    txState <= mux(reset, UInt<2>("h0"), _GEN_17) @[UARTAdapter.scala 55:17:chipyard.TestHarness.SmallBoomConfig.fir@319860.8 UARTAdapter.scala 60:17:chipyard.TestHarness.SmallBoomConfig.fir@319867.10 UARTAdapter.scala 68:17:chipyard.TestHarness.SmallBoomConfig.fir@319881.12 UARTAdapter.scala 70:17:chipyard.TestHarness.SmallBoomConfig.fir@319885.14 UARTAdapter.scala 75:17:chipyard.TestHarness.SmallBoomConfig.fir@319894.14]
    txData <= mux(_T_17, _GEN_4, _GEN_15) @[UARTAdapter.scala 54:17:chipyard.TestHarness.SmallBoomConfig.fir@319859.8 UARTAdapter.scala 65:16:chipyard.TestHarness.SmallBoomConfig.fir@319876.12]
    value <= mux(reset, UInt<3>("h0"), _GEN_0) @[Counter.scala 38:13:chipyard.TestHarness.SmallBoomConfig.fir@319828.6]
    value_1 <= mux(reset, UInt<10>("h0"), _GEN_2) @[Counter.scala 38:13:chipyard.TestHarness.SmallBoomConfig.fir@319838.6 Counter.scala 40:29:chipyard.TestHarness.SmallBoomConfig.fir@319840.8]
    value_2 <= mux(reset, UInt<2>("h0"), _GEN_3) @[Counter.scala 38:13:chipyard.TestHarness.SmallBoomConfig.fir@319853.6]
    rxState <= mux(reset, UInt<2>("h0"), _GEN_29) @[UARTAdapter.scala 95:17:chipyard.TestHarness.SmallBoomConfig.fir@319928.8 UARTAdapter.scala 101:17:chipyard.TestHarness.SmallBoomConfig.fir@319936.10 UARTAdapter.scala 107:17:chipyard.TestHarness.SmallBoomConfig.fir@319947.12]
    value_3 <= mux(reset, UInt<10>("h0"), _GEN_19) @[Counter.scala 38:13:chipyard.TestHarness.SmallBoomConfig.fir@319905.6 Counter.scala 40:29:chipyard.TestHarness.SmallBoomConfig.fir@319907.8]
    value_4 <= mux(reset, UInt<3>("h0"), _GEN_20) @[Counter.scala 38:13:chipyard.TestHarness.SmallBoomConfig.fir@319919.6]
    sim.clock <= clock @[UARTAdapter.scala 115:16:chipyard.TestHarness.SmallBoomConfig.fir@319959.4]
    sim.reset <= asUInt(reset) @[UARTAdapter.scala 116:16:chipyard.TestHarness.SmallBoomConfig.fir@319961.4]
    sim.serial_in_ready <= rxfifo.io_enq_ready @[UARTAdapter.scala 124:26:chipyard.TestHarness.SmallBoomConfig.fir@319967.4]
    sim.serial_out_valid <= txfifo.io_deq_valid @[UARTAdapter.scala 119:27:chipyard.TestHarness.SmallBoomConfig.fir@319963.4]
    sim.serial_out_bits <= txfifo.io_deq_bits @[UARTAdapter.scala 118:26:chipyard.TestHarness.SmallBoomConfig.fir@319962.4]

  module TestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@319969.2]
    input clock : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319970.4]
    input reset : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319971.4]
    output io_success : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@319972.4]
  
    inst top of Top @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
    inst SimSerial of SimSerial @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
    inst SimDRAM of SimDRAM_inTestHarness @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
    inst UARTAdapter of UARTAdapter_inTestHarness @[IOBinders.scala 92:28:chipyard.TestHarness.SmallBoomConfig.fir@320015.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_success <= SimSerial.exit @[TestHarness.scala 28:14:chipyard.TestHarness.SmallBoomConfig.fir@319977.4 IOBinders.scala 163:28:chipyard.TestHarness.SmallBoomConfig.fir@320004.6]
    top.clock <= clock @[:chipyard.TestHarness.SmallBoomConfig.fir@319975.4]
    top.reset <= reset @[:chipyard.TestHarness.SmallBoomConfig.fir@319976.4]
    top.debug_clockeddmi_dmi_req_valid <= UInt<1>("h0") @[Periphery.scala 261:25:chipyard.TestHarness.SmallBoomConfig.fir@319979.4]
    top.debug_clockeddmi_dmi_req_bits_addr <= UInt<7>("h0")
    top.debug_clockeddmi_dmi_req_bits_data <= UInt<32>("h0")
    top.debug_clockeddmi_dmi_req_bits_op <= UInt<2>("h0")
    top.debug_clockeddmi_dmi_resp_ready <= UInt<1>("h1") @[Periphery.scala 262:26:chipyard.TestHarness.SmallBoomConfig.fir@319980.4]
    top.debug_clockeddmi_dmiClock <= asClock(UInt<1>("h0")) @[Periphery.scala 263:20:chipyard.TestHarness.SmallBoomConfig.fir@319982.4]
    top.debug_clockeddmi_dmiReset <= UInt<1>("h1") @[Periphery.scala 264:20:chipyard.TestHarness.SmallBoomConfig.fir@319983.4]
    top.mem_axi4_0_aw_ready <= SimDRAM.axi_aw_ready @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_w_ready <= SimDRAM.axi_w_ready @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_b_valid <= SimDRAM.axi_b_valid @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_b_bits_id <= SimDRAM.axi_b_bits_id @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_b_bits_resp <= SimDRAM.axi_b_bits_resp @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_ar_ready <= SimDRAM.axi_ar_ready @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_r_valid <= SimDRAM.axi_r_valid @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_r_bits_id <= SimDRAM.axi_r_bits_id @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_r_bits_data <= SimDRAM.axi_r_bits_data @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_r_bits_resp <= SimDRAM.axi_r_bits_resp @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.mem_axi4_0_r_bits_last <= SimDRAM.axi_r_bits_last @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    top.serial_in_valid <= SimSerial.serial_in_valid @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@320001.4]
    top.serial_in_bits <= SimSerial.serial_in_bits @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@320000.4]
    top.serial_out_ready <= SimSerial.serial_out_ready @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@319999.4]
    top.uart_0_rxd <= UARTAdapter.io_uart_rxd @[IOBinders.scala 94:18:chipyard.TestHarness.SmallBoomConfig.fir@320019.4]
    SimSerial.clock <= top.clock @[SerialAdapter.scala 218:18:chipyard.TestHarness.SmallBoomConfig.fir@319995.4]
    SimSerial.reset <= top.reset @[SerialAdapter.scala 219:18:chipyard.TestHarness.SmallBoomConfig.fir@319996.4]
    SimSerial.serial_in_ready <= top.serial_in_ready @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@320002.4]
    SimSerial.serial_out_valid <= top.serial_out_valid @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@319998.4]
    SimSerial.serial_out_bits <= top.serial_out_bits @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@319997.4]
    SimDRAM.clock <= clock @[IOBinders.scala 114:22:chipyard.TestHarness.SmallBoomConfig.fir@320012.4]
    SimDRAM.reset <= reset @[IOBinders.scala 115:22:chipyard.TestHarness.SmallBoomConfig.fir@320013.4]
    SimDRAM.axi_aw_valid <= top.mem_axi4_0_aw_valid @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_id <= top.mem_axi4_0_aw_bits_id @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_addr <= top.mem_axi4_0_aw_bits_addr @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_len <= top.mem_axi4_0_aw_bits_len @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_size <= top.mem_axi4_0_aw_bits_size @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_burst <= top.mem_axi4_0_aw_bits_burst @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_lock <= top.mem_axi4_0_aw_bits_lock @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_cache <= top.mem_axi4_0_aw_bits_cache @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_prot <= top.mem_axi4_0_aw_bits_prot @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_aw_bits_qos <= top.mem_axi4_0_aw_bits_qos @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_w_valid <= top.mem_axi4_0_w_valid @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_w_bits_data <= top.mem_axi4_0_w_bits_data @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_w_bits_strb <= top.mem_axi4_0_w_bits_strb @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_w_bits_last <= top.mem_axi4_0_w_bits_last @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_b_ready <= top.mem_axi4_0_b_ready @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_valid <= top.mem_axi4_0_ar_valid @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_id <= top.mem_axi4_0_ar_bits_id @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_addr <= top.mem_axi4_0_ar_bits_addr @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_len <= top.mem_axi4_0_ar_bits_len @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_size <= top.mem_axi4_0_ar_bits_size @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_burst <= top.mem_axi4_0_ar_bits_burst @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_lock <= top.mem_axi4_0_ar_bits_lock @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_cache <= top.mem_axi4_0_ar_bits_cache @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_prot <= top.mem_axi4_0_ar_bits_prot @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_ar_bits_qos <= top.mem_axi4_0_ar_bits_qos @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    SimDRAM.axi_r_ready <= top.mem_axi4_0_r_ready @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
    UARTAdapter.clock <= clock @[:chipyard.TestHarness.SmallBoomConfig.fir@320016.4]
    UARTAdapter.reset <= reset @[:chipyard.TestHarness.SmallBoomConfig.fir@320017.4]
    UARTAdapter.io_uart_txd <= top.uart_0_txd @[IOBinders.scala 93:28:chipyard.TestHarness.SmallBoomConfig.fir@320018.4]

  extmodule plusarg_reader_inTestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@19.2]
    output out : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@20.4]
  
    defname = plusarg_reader
    parameter FORMAT = "tilelink_timeout=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  extmodule EICG_wrapper_inTestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@107359.2]
    input in : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@107360.4]
    input en : UInt<1> @[:chipyard.TestHarness.SmallBoomConfig.fir@107361.4]
    output out : Clock @[:chipyard.TestHarness.SmallBoomConfig.fir@107362.4]
  
    defname = EICG_wrapper
    

  extmodule plusarg_reader_57_inTestHarness : @[:chipyard.TestHarness.SmallBoomConfig.fir@318007.2]
    output out : UInt<32> @[:chipyard.TestHarness.SmallBoomConfig.fir@318008.4]
  
    defname = plusarg_reader
    parameter FORMAT = "uart_tx=%d"
    parameter DEFAULT = 1
    parameter WIDTH = 32

  extmodule tag_array_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<88>
    output RW0_rdata : UInt<88>
    input RW0_wmask : UInt<4>
  
    defname = tag_array_ext
    

  extmodule array_0_0_ext_inTestHarness :
    input R0_addr : UInt<9>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<64>
    input W0_addr : UInt<9>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<64>
    input W0_mask : UInt<1>
  
    defname = array_0_0_ext
    

  extmodule tag_array_0_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<84>
    output RW0_rdata : UInt<84>
    input RW0_wmask : UInt<4>
  
    defname = tag_array_0_ext
    

  extmodule dataArrayWay_0_ext_inTestHarness :
    input RW0_addr : UInt<9>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
  
    defname = dataArrayWay_0_ext
    

  extmodule bim_data_array_0_ext_inTestHarness :
    input RW0_addr : UInt<9>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<8>
    output RW0_rdata : UInt<8>
    input RW0_wmask : UInt<8>
  
    defname = bim_data_array_0_ext
    

  extmodule btb_tag_array_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<20>
    output RW0_rdata : UInt<20>
  
    defname = btb_tag_array_ext
    

  extmodule btb_data_array_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<48>
    output RW0_rdata : UInt<48>
  
    defname = btb_data_array_ext
    

  extmodule counter_table_ext_inTestHarness :
    input R0_addr : UInt<11>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input W0_addr : UInt<11>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<4>
  
    defname = counter_table_ext
    

  extmodule rob_debug_inst_mem_ext_inTestHarness :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<32>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<32>
    input W0_mask : UInt<1>
  
    defname = rob_debug_inst_mem_ext
    

  extmodule l2_tlb_ram_ext_inTestHarness :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<44>
    output RW0_rdata : UInt<44>
  
    defname = l2_tlb_ram_ext
    

  extmodule cc_dir_ext_inTestHarness :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_wmask : UInt<8>
  
    defname = cc_dir_ext
    

  extmodule cc_banks_0_ext_inTestHarness :
    input RW0_addr : UInt<14>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
  
    defname = cc_banks_0_ext
    
