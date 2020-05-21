module Queue_40_inTestHarness( // @[:chipyard.TestHarness.SmallBoomConfig.fir@319700.2]
  input        clock, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319701.4]
  input        reset, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319702.4]
  output       io_enq_ready, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
  input        io_enq_valid, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
  input  [7:0] io_enq_bits, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
  input        io_deq_ready, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
  output       io_deq_valid, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
  output [7:0] io_deq_bits // @[:chipyard.TestHarness.SmallBoomConfig.fir@319703.4]
);
  reg [7:0] _T [0:127]; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  reg [31:0] _RAND_0;
  wire [7:0] _T__T_18_data; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  wire [6:0] _T__T_18_addr; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  wire [7:0] _T__T_10_data; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  wire [6:0] _T__T_10_addr; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  wire  _T__T_10_mask; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  wire  _T__T_10_en; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  reg [6:0] value; // @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319706.4]
  reg [31:0] _RAND_1;
  reg [6:0] value_1; // @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319707.4]
  reg [31:0] _RAND_2;
  reg  _T_1; // @[Decoupled.scala 212:35:chipyard.TestHarness.SmallBoomConfig.fir@319708.4]
  reg [31:0] _RAND_3;
  wire  _T_2; // @[Decoupled.scala 214:41:chipyard.TestHarness.SmallBoomConfig.fir@319709.4]
  wire  _T_3; // @[Decoupled.scala 215:36:chipyard.TestHarness.SmallBoomConfig.fir@319710.4]
  wire  _T_4; // @[Decoupled.scala 215:33:chipyard.TestHarness.SmallBoomConfig.fir@319711.4]
  wire  _T_5; // @[Decoupled.scala 216:32:chipyard.TestHarness.SmallBoomConfig.fir@319712.4]
  wire  _T_6; // @[Decoupled.scala 40:37:chipyard.TestHarness.SmallBoomConfig.fir@319713.4]
  wire  _T_8; // @[Decoupled.scala 40:37:chipyard.TestHarness.SmallBoomConfig.fir@319716.4]
  wire [6:0] _T_12; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319724.6]
  wire [6:0] _T_14; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319730.6]
  wire  _T_15; // @[Decoupled.scala 227:16:chipyard.TestHarness.SmallBoomConfig.fir@319733.4]
  assign _T__T_18_addr = value_1;
  assign _T__T_18_data = _T[_T__T_18_addr]; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
  assign _T__T_10_data = io_enq_bits;
  assign _T__T_10_addr = value;
  assign _T__T_10_mask = 1'h1;
  assign _T__T_10_en = io_enq_ready & io_enq_valid;
  assign _T_2 = value == value_1; // @[Decoupled.scala 214:41:chipyard.TestHarness.SmallBoomConfig.fir@319709.4]
  assign _T_3 = _T_1 == 1'h0; // @[Decoupled.scala 215:36:chipyard.TestHarness.SmallBoomConfig.fir@319710.4]
  assign _T_4 = _T_2 & _T_3; // @[Decoupled.scala 215:33:chipyard.TestHarness.SmallBoomConfig.fir@319711.4]
  assign _T_5 = _T_2 & _T_1; // @[Decoupled.scala 216:32:chipyard.TestHarness.SmallBoomConfig.fir@319712.4]
  assign _T_6 = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37:chipyard.TestHarness.SmallBoomConfig.fir@319713.4]
  assign _T_8 = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37:chipyard.TestHarness.SmallBoomConfig.fir@319716.4]
  assign _T_12 = value + 7'h1; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319724.6]
  assign _T_14 = value_1 + 7'h1; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319730.6]
  assign _T_15 = _T_6 != _T_8; // @[Decoupled.scala 227:16:chipyard.TestHarness.SmallBoomConfig.fir@319733.4]
  assign io_enq_ready = _T_5 == 1'h0; // @[Decoupled.scala 232:16:chipyard.TestHarness.SmallBoomConfig.fir@319740.4]
  assign io_deq_valid = _T_4 == 1'h0; // @[Decoupled.scala 231:16:chipyard.TestHarness.SmallBoomConfig.fir@319738.4]
  assign io_deq_bits = _T__T_18_data; // @[Decoupled.scala 233:15:chipyard.TestHarness.SmallBoomConfig.fir@319742.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    _T[initvar] = _RAND_0[7:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  value = _RAND_1[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value_1 = _RAND_2[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  _T_1 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if(_T__T_10_en & _T__T_10_mask) begin
      _T[_T__T_10_addr] <= _T__T_10_data; // @[Decoupled.scala 209:24:chipyard.TestHarness.SmallBoomConfig.fir@319705.4]
    end
    if (reset) begin
      value <= 7'h0;
    end else begin
      if (_T_6) begin
        value <= _T_12;
      end
    end
    if (reset) begin
      value_1 <= 7'h0;
    end else begin
      if (_T_8) begin
        value_1 <= _T_14;
      end
    end
    if (reset) begin
      _T_1 <= 1'h0;
    end else begin
      if (_T_15) begin
        _T_1 <= _T_6;
      end
    end
  end
endmodule
module UARTAdapter_inTestHarness( // @[:chipyard.TestHarness.SmallBoomConfig.fir@319808.2]
  input   clock, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319809.4]
  input   reset, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319810.4]
  input   io_uart_txd, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319811.4]
  output  io_uart_rxd // @[:chipyard.TestHarness.SmallBoomConfig.fir@319811.4]
);
  wire  txfifo_clock; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire  txfifo_reset; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire  txfifo_io_enq_ready; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire  txfifo_io_enq_valid; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire [7:0] txfifo_io_enq_bits; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire  txfifo_io_deq_ready; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire  txfifo_io_deq_valid; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire [7:0] txfifo_io_deq_bits; // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
  wire  rxfifo_clock; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire  rxfifo_reset; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire  rxfifo_io_enq_ready; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire  rxfifo_io_enq_valid; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire [7:0] rxfifo_io_enq_bits; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire  rxfifo_io_deq_ready; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire  rxfifo_io_deq_valid; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire [7:0] rxfifo_io_deq_bits; // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
  wire  sim_clock; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  wire  sim_reset; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  wire  sim_serial_in_ready; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  wire  sim_serial_in_valid; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  wire [7:0] sim_serial_in_bits; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  wire  sim_serial_out_ready; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  wire  sim_serial_out_valid; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  wire [7:0] sim_serial_out_bits; // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
  reg [1:0] txState; // @[UARTAdapter.scala 43:24:chipyard.TestHarness.SmallBoomConfig.fir@319819.4]
  reg [31:0] _RAND_0;
  reg [7:0] txData; // @[UARTAdapter.scala 44:19:chipyard.TestHarness.SmallBoomConfig.fir@319820.4]
  reg [31:0] _RAND_1;
  wire  _T; // @[UARTAdapter.scala 46:49:chipyard.TestHarness.SmallBoomConfig.fir@319821.4]
  wire  _T_1; // @[UARTAdapter.scala 46:61:chipyard.TestHarness.SmallBoomConfig.fir@319822.4]
  reg [2:0] value; // @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319823.4]
  reg [31:0] _RAND_2;
  wire  _T_2; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319825.6]
  wire [2:0] _T_4; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319827.6]
  wire  txDataWrap; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319830.4]
  wire  _T_5; // @[UARTAdapter.scala 48:51:chipyard.TestHarness.SmallBoomConfig.fir@319831.4]
  wire  _T_6; // @[UARTAdapter.scala 48:63:chipyard.TestHarness.SmallBoomConfig.fir@319832.4]
  reg [9:0] value_1; // @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319833.4]
  reg [31:0] _RAND_3;
  wire  _T_7; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319835.6]
  wire [9:0] _T_9; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319837.6]
  wire  txBaudWrap; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319843.4]
  wire  _T_10; // @[UARTAdapter.scala 49:53:chipyard.TestHarness.SmallBoomConfig.fir@319844.4]
  wire  _T_11; // @[UARTAdapter.scala 49:80:chipyard.TestHarness.SmallBoomConfig.fir@319845.4]
  wire  _T_12; // @[UARTAdapter.scala 49:65:chipyard.TestHarness.SmallBoomConfig.fir@319846.4]
  wire  _T_13; // @[UARTAdapter.scala 49:88:chipyard.TestHarness.SmallBoomConfig.fir@319847.4]
  reg [1:0] value_2; // @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319848.4]
  reg [31:0] _RAND_4;
  wire  _T_14; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319850.6]
  wire [1:0] _T_16; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319852.6]
  wire  txSlackWrap; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319855.4]
  wire  _T_17; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319856.4]
  wire  _T_18; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319864.6]
  wire  _T_19; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319871.8]
  wire [7:0] _GEN_30; // @[UARTAdapter.scala 65:41:chipyard.TestHarness.SmallBoomConfig.fir@319874.12]
  wire [7:0] _T_20; // @[UARTAdapter.scala 65:41:chipyard.TestHarness.SmallBoomConfig.fir@319874.12]
  wire [7:0] _T_21; // @[UARTAdapter.scala 65:26:chipyard.TestHarness.SmallBoomConfig.fir@319875.12]
  wire  _T_24; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319889.10]
  wire  _T_26; // @[UARTAdapter.scala 74:32:chipyard.TestHarness.SmallBoomConfig.fir@319892.12]
  reg [1:0] rxState; // @[UARTAdapter.scala 84:24:chipyard.TestHarness.SmallBoomConfig.fir@319899.4]
  reg [31:0] _RAND_5;
  reg [9:0] value_3; // @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319900.4]
  reg [31:0] _RAND_6;
  wire  _T_27; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319902.6]
  wire [9:0] _T_29; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319904.6]
  wire  rxBaudWrap; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319910.4]
  wire  _T_30; // @[UARTAdapter.scala 88:49:chipyard.TestHarness.SmallBoomConfig.fir@319911.4]
  wire  _T_31; // @[UARTAdapter.scala 88:61:chipyard.TestHarness.SmallBoomConfig.fir@319912.4]
  wire  _T_32; // @[UARTAdapter.scala 88:84:chipyard.TestHarness.SmallBoomConfig.fir@319913.4]
  reg [2:0] value_4; // @[Counter.scala 29:33:chipyard.TestHarness.SmallBoomConfig.fir@319914.4]
  reg [31:0] _RAND_7;
  wire  _T_33; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319916.6]
  wire [2:0] _T_35; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319918.6]
  wire  rxDataWrap; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319921.4]
  wire  _T_36; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319923.4]
  wire  _T_37; // @[UARTAdapter.scala 94:24:chipyard.TestHarness.SmallBoomConfig.fir@319926.6]
  wire  _T_38; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319932.6]
  wire  _T_39; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319940.8]
  wire [7:0] _T_40; // @[UARTAdapter.scala 105:42:chipyard.TestHarness.SmallBoomConfig.fir@319942.10]
  wire  _T_41; // @[UARTAdapter.scala 105:55:chipyard.TestHarness.SmallBoomConfig.fir@319943.10]
  wire  _T_42; // @[UARTAdapter.scala 106:23:chipyard.TestHarness.SmallBoomConfig.fir@319945.10]
  wire  _GEN_24; // @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319941.8]
  wire  _GEN_26; // @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319933.6]
  wire  _T_44; // @[UARTAdapter.scala 111:48:chipyard.TestHarness.SmallBoomConfig.fir@319951.4]
  wire  _T_45; // @[UARTAdapter.scala 111:62:chipyard.TestHarness.SmallBoomConfig.fir@319952.4]
  Queue_40_inTestHarness txfifo ( // @[UARTAdapter.scala 37:22:chipyard.TestHarness.SmallBoomConfig.fir@319813.4]
    .clock(txfifo_clock),
    .reset(txfifo_reset),
    .io_enq_ready(txfifo_io_enq_ready),
    .io_enq_valid(txfifo_io_enq_valid),
    .io_enq_bits(txfifo_io_enq_bits),
    .io_deq_ready(txfifo_io_deq_ready),
    .io_deq_valid(txfifo_io_deq_valid),
    .io_deq_bits(txfifo_io_deq_bits)
  );
  Queue_40_inTestHarness rxfifo ( // @[UARTAdapter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319816.4]
    .clock(rxfifo_clock),
    .reset(rxfifo_reset),
    .io_enq_ready(rxfifo_io_enq_ready),
    .io_enq_valid(rxfifo_io_enq_valid),
    .io_enq_bits(rxfifo_io_enq_bits),
    .io_deq_ready(rxfifo_io_deq_ready),
    .io_deq_valid(rxfifo_io_deq_valid),
    .io_deq_bits(rxfifo_io_deq_bits)
  );
  SimUART #(.UARTNO(0)) sim ( // @[UARTAdapter.scala 113:19:chipyard.TestHarness.SmallBoomConfig.fir@319955.4]
    .clock(sim_clock),
    .reset(sim_reset),
    .serial_in_ready(sim_serial_in_ready),
    .serial_in_valid(sim_serial_in_valid),
    .serial_in_bits(sim_serial_in_bits),
    .serial_out_ready(sim_serial_out_ready),
    .serial_out_valid(sim_serial_out_valid),
    .serial_out_bits(sim_serial_out_bits)
  );
  assign _T = txState == 2'h2; // @[UARTAdapter.scala 46:49:chipyard.TestHarness.SmallBoomConfig.fir@319821.4]
  assign _T_1 = _T & txfifo_io_enq_ready; // @[UARTAdapter.scala 46:61:chipyard.TestHarness.SmallBoomConfig.fir@319822.4]
  assign _T_2 = value == 3'h7; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319825.6]
  assign _T_4 = value + 3'h1; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319827.6]
  assign txDataWrap = _T_1 & _T_2; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319830.4]
  assign _T_5 = txState == 2'h1; // @[UARTAdapter.scala 48:51:chipyard.TestHarness.SmallBoomConfig.fir@319831.4]
  assign _T_6 = _T_5 & txfifo_io_enq_ready; // @[UARTAdapter.scala 48:63:chipyard.TestHarness.SmallBoomConfig.fir@319832.4]
  assign _T_7 = value_1 == 10'h363; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319835.6]
  assign _T_9 = value_1 + 10'h1; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319837.6]
  assign txBaudWrap = _T_6 & _T_7; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319843.4]
  assign _T_10 = txState == 2'h0; // @[UARTAdapter.scala 49:53:chipyard.TestHarness.SmallBoomConfig.fir@319844.4]
  assign _T_11 = io_uart_txd == 1'h0; // @[UARTAdapter.scala 49:80:chipyard.TestHarness.SmallBoomConfig.fir@319845.4]
  assign _T_12 = _T_10 & _T_11; // @[UARTAdapter.scala 49:65:chipyard.TestHarness.SmallBoomConfig.fir@319846.4]
  assign _T_13 = _T_12 & txfifo_io_enq_ready; // @[UARTAdapter.scala 49:88:chipyard.TestHarness.SmallBoomConfig.fir@319847.4]
  assign _T_14 = value_2 == 2'h3; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319850.6]
  assign _T_16 = value_2 + 2'h1; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319852.6]
  assign txSlackWrap = _T_13 & _T_14; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319855.4]
  assign _T_17 = 2'h0 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319856.4]
  assign _T_18 = 2'h1 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319864.6]
  assign _T_19 = 2'h2 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319871.8]
  assign _GEN_30 = {{7'd0}, io_uart_txd}; // @[UARTAdapter.scala 65:41:chipyard.TestHarness.SmallBoomConfig.fir@319874.12]
  assign _T_20 = _GEN_30 << value; // @[UARTAdapter.scala 65:41:chipyard.TestHarness.SmallBoomConfig.fir@319874.12]
  assign _T_21 = txData | _T_20; // @[UARTAdapter.scala 65:26:chipyard.TestHarness.SmallBoomConfig.fir@319875.12]
  assign _T_24 = 2'h3 == txState; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319889.10]
  assign _T_26 = io_uart_txd & txfifo_io_enq_ready; // @[UARTAdapter.scala 74:32:chipyard.TestHarness.SmallBoomConfig.fir@319892.12]
  assign _T_27 = value_3 == 10'h363; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319902.6]
  assign _T_29 = value_3 + 10'h1; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319904.6]
  assign rxBaudWrap = txfifo_io_enq_ready & _T_27; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319910.4]
  assign _T_30 = rxState == 2'h2; // @[UARTAdapter.scala 88:49:chipyard.TestHarness.SmallBoomConfig.fir@319911.4]
  assign _T_31 = _T_30 & txfifo_io_enq_ready; // @[UARTAdapter.scala 88:61:chipyard.TestHarness.SmallBoomConfig.fir@319912.4]
  assign _T_32 = _T_31 & rxBaudWrap; // @[UARTAdapter.scala 88:84:chipyard.TestHarness.SmallBoomConfig.fir@319913.4]
  assign _T_33 = value_4 == 3'h7; // @[Counter.scala 37:24:chipyard.TestHarness.SmallBoomConfig.fir@319916.6]
  assign _T_35 = value_4 + 3'h1; // @[Counter.scala 38:22:chipyard.TestHarness.SmallBoomConfig.fir@319918.6]
  assign rxDataWrap = _T_32 & _T_33; // @[Counter.scala 72:20:chipyard.TestHarness.SmallBoomConfig.fir@319921.4]
  assign _T_36 = 2'h0 == rxState; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319923.4]
  assign _T_37 = rxBaudWrap & rxfifo_io_deq_valid; // @[UARTAdapter.scala 94:24:chipyard.TestHarness.SmallBoomConfig.fir@319926.6]
  assign _T_38 = 2'h1 == rxState; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319932.6]
  assign _T_39 = 2'h2 == rxState; // @[Conditional.scala 37:30:chipyard.TestHarness.SmallBoomConfig.fir@319940.8]
  assign _T_40 = rxfifo_io_deq_bits >> value_4; // @[UARTAdapter.scala 105:42:chipyard.TestHarness.SmallBoomConfig.fir@319942.10]
  assign _T_41 = _T_40[0]; // @[UARTAdapter.scala 105:55:chipyard.TestHarness.SmallBoomConfig.fir@319943.10]
  assign _T_42 = rxDataWrap & rxBaudWrap; // @[UARTAdapter.scala 106:23:chipyard.TestHarness.SmallBoomConfig.fir@319945.10]
  assign _GEN_24 = _T_39 ? _T_41 : 1'h1; // @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319941.8]
  assign _GEN_26 = _T_38 ? 1'h0 : _GEN_24; // @[Conditional.scala 39:67:chipyard.TestHarness.SmallBoomConfig.fir@319933.6]
  assign _T_44 = _T_30 & rxDataWrap; // @[UARTAdapter.scala 111:48:chipyard.TestHarness.SmallBoomConfig.fir@319951.4]
  assign _T_45 = _T_44 & rxBaudWrap; // @[UARTAdapter.scala 111:62:chipyard.TestHarness.SmallBoomConfig.fir@319952.4]
  assign io_uart_rxd = _T_36 | _GEN_26; // @[UARTAdapter.scala 90:15:chipyard.TestHarness.SmallBoomConfig.fir@319922.4 UARTAdapter.scala 93:19:chipyard.TestHarness.SmallBoomConfig.fir@319925.6 UARTAdapter.scala 99:19:chipyard.TestHarness.SmallBoomConfig.fir@319934.8 UARTAdapter.scala 105:19:chipyard.TestHarness.SmallBoomConfig.fir@319944.10]
  assign txfifo_clock = clock; // @[:chipyard.TestHarness.SmallBoomConfig.fir@319814.4]
  assign txfifo_reset = reset; // @[:chipyard.TestHarness.SmallBoomConfig.fir@319815.4]
  assign txfifo_io_enq_valid = _T_1 & _T_2; // @[UARTAdapter.scala 81:23:chipyard.TestHarness.SmallBoomConfig.fir@319898.4]
  assign txfifo_io_enq_bits = txData; // @[UARTAdapter.scala 80:23:chipyard.TestHarness.SmallBoomConfig.fir@319897.4]
  assign txfifo_io_deq_ready = sim_serial_out_ready; // @[UARTAdapter.scala 120:23:chipyard.TestHarness.SmallBoomConfig.fir@319964.4]
  assign rxfifo_clock = clock; // @[:chipyard.TestHarness.SmallBoomConfig.fir@319817.4]
  assign rxfifo_reset = reset; // @[:chipyard.TestHarness.SmallBoomConfig.fir@319818.4]
  assign rxfifo_io_enq_valid = sim_serial_in_valid; // @[UARTAdapter.scala 123:23:chipyard.TestHarness.SmallBoomConfig.fir@319966.4]
  assign rxfifo_io_enq_bits = sim_serial_in_bits; // @[UARTAdapter.scala 122:22:chipyard.TestHarness.SmallBoomConfig.fir@319965.4]
  assign rxfifo_io_deq_ready = _T_45 & txfifo_io_enq_ready; // @[UARTAdapter.scala 111:23:chipyard.TestHarness.SmallBoomConfig.fir@319954.4]
  assign sim_clock = clock; // @[UARTAdapter.scala 115:16:chipyard.TestHarness.SmallBoomConfig.fir@319959.4]
  assign sim_reset = $unsigned(reset); // @[UARTAdapter.scala 116:16:chipyard.TestHarness.SmallBoomConfig.fir@319961.4]
  assign sim_serial_in_ready = rxfifo_io_enq_ready; // @[UARTAdapter.scala 124:26:chipyard.TestHarness.SmallBoomConfig.fir@319967.4]
  assign sim_serial_out_valid = txfifo_io_deq_valid; // @[UARTAdapter.scala 119:27:chipyard.TestHarness.SmallBoomConfig.fir@319963.4]
  assign sim_serial_out_bits = txfifo_io_deq_bits; // @[UARTAdapter.scala 118:26:chipyard.TestHarness.SmallBoomConfig.fir@319962.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  txState = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  txData = _RAND_1[7:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  value = _RAND_2[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  value_1 = _RAND_3[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  value_2 = _RAND_4[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  rxState = _RAND_5[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  value_3 = _RAND_6[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  value_4 = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end
  always @(posedge clock) begin
    if (reset) begin
      txState <= 2'h0;
    end else begin
      if (_T_17) begin
        if (txSlackWrap) begin
          txState <= 2'h1;
        end
      end else begin
        if (_T_18) begin
          if (txBaudWrap) begin
            txState <= 2'h2;
          end
        end else begin
          if (_T_19) begin
            if (txDataWrap) begin
              if (io_uart_txd) begin
                txState <= 2'h0;
              end else begin
                txState <= 2'h3;
              end
            end else begin
              if (txfifo_io_enq_ready) begin
                txState <= 2'h1;
              end
            end
          end else begin
            if (_T_24) begin
              if (_T_26) begin
                txState <= 2'h0;
              end
            end
          end
        end
      end
    end
    if (_T_17) begin
      if (txSlackWrap) begin
        txData <= 8'h0;
      end
    end else begin
      if (!(_T_18)) begin
        if (_T_19) begin
          if (txfifo_io_enq_ready) begin
            txData <= _T_21;
          end
        end
      end
    end
    if (reset) begin
      value <= 3'h0;
    end else begin
      if (_T_1) begin
        value <= _T_4;
      end
    end
    if (reset) begin
      value_1 <= 10'h0;
    end else begin
      if (_T_6) begin
        if (_T_7) begin
          value_1 <= 10'h0;
        end else begin
          value_1 <= _T_9;
        end
      end
    end
    if (reset) begin
      value_2 <= 2'h0;
    end else begin
      if (_T_13) begin
        value_2 <= _T_16;
      end
    end
    if (reset) begin
      rxState <= 2'h0;
    end else begin
      if (_T_36) begin
        if (_T_37) begin
          rxState <= 2'h1;
        end
      end else begin
        if (_T_38) begin
          if (rxBaudWrap) begin
            rxState <= 2'h2;
          end
        end else begin
          if (_T_39) begin
            if (_T_42) begin
              rxState <= 2'h0;
            end
          end
        end
      end
    end
    if (reset) begin
      value_3 <= 10'h0;
    end else begin
      if (txfifo_io_enq_ready) begin
        if (_T_27) begin
          value_3 <= 10'h0;
        end else begin
          value_3 <= _T_29;
        end
      end
    end
    if (reset) begin
      value_4 <= 3'h0;
    end else begin
      if (_T_32) begin
        value_4 <= _T_35;
      end
    end
  end
endmodule
module TestHarness( // @[:chipyard.TestHarness.SmallBoomConfig.fir@319969.2]
  input   clock, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319970.4]
  input   reset, // @[:chipyard.TestHarness.SmallBoomConfig.fir@319971.4]
  output  io_success // @[:chipyard.TestHarness.SmallBoomConfig.fir@319972.4]
);
  wire  top_clock; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_reset; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_clockeddmi_dmi_req_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_clockeddmi_dmi_req_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [6:0] top_debug_clockeddmi_dmi_req_bits_addr; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [31:0] top_debug_clockeddmi_dmi_req_bits_data; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [1:0] top_debug_clockeddmi_dmi_req_bits_op; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_clockeddmi_dmi_resp_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_clockeddmi_dmi_resp_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [31:0] top_debug_clockeddmi_dmi_resp_bits_data; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [1:0] top_debug_clockeddmi_dmi_resp_bits_resp; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_clockeddmi_dmiClock; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_clockeddmi_dmiReset; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_ndreset; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_debug_dmactive; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_aw_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_aw_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_aw_bits_id; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [31:0] top_mem_axi4_0_aw_bits_addr; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [7:0] top_mem_axi4_0_aw_bits_len; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [2:0] top_mem_axi4_0_aw_bits_size; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [1:0] top_mem_axi4_0_aw_bits_burst; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_aw_bits_lock; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_aw_bits_cache; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [2:0] top_mem_axi4_0_aw_bits_prot; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_aw_bits_qos; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_w_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_w_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [63:0] top_mem_axi4_0_w_bits_data; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [7:0] top_mem_axi4_0_w_bits_strb; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_w_bits_last; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_b_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_b_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_b_bits_id; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [1:0] top_mem_axi4_0_b_bits_resp; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_ar_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_ar_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_ar_bits_id; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [31:0] top_mem_axi4_0_ar_bits_addr; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [7:0] top_mem_axi4_0_ar_bits_len; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [2:0] top_mem_axi4_0_ar_bits_size; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [1:0] top_mem_axi4_0_ar_bits_burst; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_ar_bits_lock; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_ar_bits_cache; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [2:0] top_mem_axi4_0_ar_bits_prot; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_ar_bits_qos; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_r_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_r_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [3:0] top_mem_axi4_0_r_bits_id; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [63:0] top_mem_axi4_0_r_bits_data; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [1:0] top_mem_axi4_0_r_bits_resp; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_mem_axi4_0_r_bits_last; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_serial_in_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_serial_in_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [31:0] top_serial_in_bits; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_serial_out_ready; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_serial_out_valid; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire [31:0] top_serial_out_bits; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_uart_0_txd; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  top_uart_0_rxd; // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
  wire  SimSerial_clock; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire  SimSerial_reset; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire  SimSerial_serial_in_ready; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire  SimSerial_serial_in_valid; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire [31:0] SimSerial_serial_in_bits; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire  SimSerial_serial_out_ready; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire  SimSerial_serial_out_valid; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire [31:0] SimSerial_serial_out_bits; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire  SimSerial_exit; // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
  wire  SimDRAM_clock; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_reset; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_aw_ready; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_aw_valid; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_aw_bits_id; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [31:0] SimDRAM_axi_aw_bits_addr; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [7:0] SimDRAM_axi_aw_bits_len; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [2:0] SimDRAM_axi_aw_bits_size; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [1:0] SimDRAM_axi_aw_bits_burst; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_aw_bits_lock; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_aw_bits_cache; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [2:0] SimDRAM_axi_aw_bits_prot; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_aw_bits_qos; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_w_ready; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_w_valid; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [63:0] SimDRAM_axi_w_bits_data; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [7:0] SimDRAM_axi_w_bits_strb; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_w_bits_last; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_b_ready; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_b_valid; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_b_bits_id; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [1:0] SimDRAM_axi_b_bits_resp; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_ar_ready; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_ar_valid; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_ar_bits_id; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [31:0] SimDRAM_axi_ar_bits_addr; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [7:0] SimDRAM_axi_ar_bits_len; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [2:0] SimDRAM_axi_ar_bits_size; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [1:0] SimDRAM_axi_ar_bits_burst; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_ar_bits_lock; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_ar_bits_cache; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [2:0] SimDRAM_axi_ar_bits_prot; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_ar_bits_qos; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_r_ready; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_r_valid; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [3:0] SimDRAM_axi_r_bits_id; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [63:0] SimDRAM_axi_r_bits_data; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire [1:0] SimDRAM_axi_r_bits_resp; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  SimDRAM_axi_r_bits_last; // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
  wire  UARTAdapter_clock; // @[IOBinders.scala 92:28:chipyard.TestHarness.SmallBoomConfig.fir@320015.4]
  wire  UARTAdapter_reset; // @[IOBinders.scala 92:28:chipyard.TestHarness.SmallBoomConfig.fir@320015.4]
  wire  UARTAdapter_io_uart_txd; // @[IOBinders.scala 92:28:chipyard.TestHarness.SmallBoomConfig.fir@320015.4]
  wire  UARTAdapter_io_uart_rxd; // @[IOBinders.scala 92:28:chipyard.TestHarness.SmallBoomConfig.fir@320015.4]
  Top top ( // @[TestHarness.scala 20:80:chipyard.TestHarness.SmallBoomConfig.fir@319974.4]
    .clock(top_clock),
    .reset(top_reset),
    .debug_clockeddmi_dmi_req_ready(top_debug_clockeddmi_dmi_req_ready),
    .debug_clockeddmi_dmi_req_valid(top_debug_clockeddmi_dmi_req_valid),
    .debug_clockeddmi_dmi_req_bits_addr(top_debug_clockeddmi_dmi_req_bits_addr),
    .debug_clockeddmi_dmi_req_bits_data(top_debug_clockeddmi_dmi_req_bits_data),
    .debug_clockeddmi_dmi_req_bits_op(top_debug_clockeddmi_dmi_req_bits_op),
    .debug_clockeddmi_dmi_resp_ready(top_debug_clockeddmi_dmi_resp_ready),
    .debug_clockeddmi_dmi_resp_valid(top_debug_clockeddmi_dmi_resp_valid),
    .debug_clockeddmi_dmi_resp_bits_data(top_debug_clockeddmi_dmi_resp_bits_data),
    .debug_clockeddmi_dmi_resp_bits_resp(top_debug_clockeddmi_dmi_resp_bits_resp),
    .debug_clockeddmi_dmiClock(top_debug_clockeddmi_dmiClock),
    .debug_clockeddmi_dmiReset(top_debug_clockeddmi_dmiReset),
    .debug_ndreset(top_debug_ndreset),
    .debug_dmactive(top_debug_dmactive),
    .mem_axi4_0_aw_ready(top_mem_axi4_0_aw_ready),
    .mem_axi4_0_aw_valid(top_mem_axi4_0_aw_valid),
    .mem_axi4_0_aw_bits_id(top_mem_axi4_0_aw_bits_id),
    .mem_axi4_0_aw_bits_addr(top_mem_axi4_0_aw_bits_addr),
    .mem_axi4_0_aw_bits_len(top_mem_axi4_0_aw_bits_len),
    .mem_axi4_0_aw_bits_size(top_mem_axi4_0_aw_bits_size),
    .mem_axi4_0_aw_bits_burst(top_mem_axi4_0_aw_bits_burst),
    .mem_axi4_0_aw_bits_lock(top_mem_axi4_0_aw_bits_lock),
    .mem_axi4_0_aw_bits_cache(top_mem_axi4_0_aw_bits_cache),
    .mem_axi4_0_aw_bits_prot(top_mem_axi4_0_aw_bits_prot),
    .mem_axi4_0_aw_bits_qos(top_mem_axi4_0_aw_bits_qos),
    .mem_axi4_0_w_ready(top_mem_axi4_0_w_ready),
    .mem_axi4_0_w_valid(top_mem_axi4_0_w_valid),
    .mem_axi4_0_w_bits_data(top_mem_axi4_0_w_bits_data),
    .mem_axi4_0_w_bits_strb(top_mem_axi4_0_w_bits_strb),
    .mem_axi4_0_w_bits_last(top_mem_axi4_0_w_bits_last),
    .mem_axi4_0_b_ready(top_mem_axi4_0_b_ready),
    .mem_axi4_0_b_valid(top_mem_axi4_0_b_valid),
    .mem_axi4_0_b_bits_id(top_mem_axi4_0_b_bits_id),
    .mem_axi4_0_b_bits_resp(top_mem_axi4_0_b_bits_resp),
    .mem_axi4_0_ar_ready(top_mem_axi4_0_ar_ready),
    .mem_axi4_0_ar_valid(top_mem_axi4_0_ar_valid),
    .mem_axi4_0_ar_bits_id(top_mem_axi4_0_ar_bits_id),
    .mem_axi4_0_ar_bits_addr(top_mem_axi4_0_ar_bits_addr),
    .mem_axi4_0_ar_bits_len(top_mem_axi4_0_ar_bits_len),
    .mem_axi4_0_ar_bits_size(top_mem_axi4_0_ar_bits_size),
    .mem_axi4_0_ar_bits_burst(top_mem_axi4_0_ar_bits_burst),
    .mem_axi4_0_ar_bits_lock(top_mem_axi4_0_ar_bits_lock),
    .mem_axi4_0_ar_bits_cache(top_mem_axi4_0_ar_bits_cache),
    .mem_axi4_0_ar_bits_prot(top_mem_axi4_0_ar_bits_prot),
    .mem_axi4_0_ar_bits_qos(top_mem_axi4_0_ar_bits_qos),
    .mem_axi4_0_r_ready(top_mem_axi4_0_r_ready),
    .mem_axi4_0_r_valid(top_mem_axi4_0_r_valid),
    .mem_axi4_0_r_bits_id(top_mem_axi4_0_r_bits_id),
    .mem_axi4_0_r_bits_data(top_mem_axi4_0_r_bits_data),
    .mem_axi4_0_r_bits_resp(top_mem_axi4_0_r_bits_resp),
    .mem_axi4_0_r_bits_last(top_mem_axi4_0_r_bits_last),
    .serial_in_ready(top_serial_in_ready),
    .serial_in_valid(top_serial_in_valid),
    .serial_in_bits(top_serial_in_bits),
    .serial_out_ready(top_serial_out_ready),
    .serial_out_valid(top_serial_out_valid),
    .serial_out_bits(top_serial_out_bits),
    .uart_0_txd(top_uart_0_txd),
    .uart_0_rxd(top_uart_0_rxd)
  );
  SimSerial SimSerial ( // @[SerialAdapter.scala 217:21:chipyard.TestHarness.SmallBoomConfig.fir@319990.4]
    .clock(SimSerial_clock),
    .reset(SimSerial_reset),
    .serial_in_ready(SimSerial_serial_in_ready),
    .serial_in_valid(SimSerial_serial_in_valid),
    .serial_in_bits(SimSerial_serial_in_bits),
    .serial_out_ready(SimSerial_serial_out_ready),
    .serial_out_valid(SimSerial_serial_out_valid),
    .serial_out_bits(SimSerial_serial_out_bits),
    .exit(SimSerial_exit)
  );
  SimDRAM #(.LINE_SIZE(64), .ID_BITS(4), .ADDR_BITS(32), .MEM_SIZE(268435456), .DATA_BITS(64)) SimDRAM ( // @[IOBinders.scala 112:25:chipyard.TestHarness.SmallBoomConfig.fir@320007.4]
    .clock(SimDRAM_clock),
    .reset(SimDRAM_reset),
    .axi_aw_ready(SimDRAM_axi_aw_ready),
    .axi_aw_valid(SimDRAM_axi_aw_valid),
    .axi_aw_bits_id(SimDRAM_axi_aw_bits_id),
    .axi_aw_bits_addr(SimDRAM_axi_aw_bits_addr),
    .axi_aw_bits_len(SimDRAM_axi_aw_bits_len),
    .axi_aw_bits_size(SimDRAM_axi_aw_bits_size),
    .axi_aw_bits_burst(SimDRAM_axi_aw_bits_burst),
    .axi_aw_bits_lock(SimDRAM_axi_aw_bits_lock),
    .axi_aw_bits_cache(SimDRAM_axi_aw_bits_cache),
    .axi_aw_bits_prot(SimDRAM_axi_aw_bits_prot),
    .axi_aw_bits_qos(SimDRAM_axi_aw_bits_qos),
    .axi_w_ready(SimDRAM_axi_w_ready),
    .axi_w_valid(SimDRAM_axi_w_valid),
    .axi_w_bits_data(SimDRAM_axi_w_bits_data),
    .axi_w_bits_strb(SimDRAM_axi_w_bits_strb),
    .axi_w_bits_last(SimDRAM_axi_w_bits_last),
    .axi_b_ready(SimDRAM_axi_b_ready),
    .axi_b_valid(SimDRAM_axi_b_valid),
    .axi_b_bits_id(SimDRAM_axi_b_bits_id),
    .axi_b_bits_resp(SimDRAM_axi_b_bits_resp),
    .axi_ar_ready(SimDRAM_axi_ar_ready),
    .axi_ar_valid(SimDRAM_axi_ar_valid),
    .axi_ar_bits_id(SimDRAM_axi_ar_bits_id),
    .axi_ar_bits_addr(SimDRAM_axi_ar_bits_addr),
    .axi_ar_bits_len(SimDRAM_axi_ar_bits_len),
    .axi_ar_bits_size(SimDRAM_axi_ar_bits_size),
    .axi_ar_bits_burst(SimDRAM_axi_ar_bits_burst),
    .axi_ar_bits_lock(SimDRAM_axi_ar_bits_lock),
    .axi_ar_bits_cache(SimDRAM_axi_ar_bits_cache),
    .axi_ar_bits_prot(SimDRAM_axi_ar_bits_prot),
    .axi_ar_bits_qos(SimDRAM_axi_ar_bits_qos),
    .axi_r_ready(SimDRAM_axi_r_ready),
    .axi_r_valid(SimDRAM_axi_r_valid),
    .axi_r_bits_id(SimDRAM_axi_r_bits_id),
    .axi_r_bits_data(SimDRAM_axi_r_bits_data),
    .axi_r_bits_resp(SimDRAM_axi_r_bits_resp),
    .axi_r_bits_last(SimDRAM_axi_r_bits_last)
  );
  UARTAdapter_inTestHarness UARTAdapter ( // @[IOBinders.scala 92:28:chipyard.TestHarness.SmallBoomConfig.fir@320015.4]
    .clock(UARTAdapter_clock),
    .reset(UARTAdapter_reset),
    .io_uart_txd(UARTAdapter_io_uart_txd),
    .io_uart_rxd(UARTAdapter_io_uart_rxd)
  );
  assign io_success = SimSerial_exit; // @[TestHarness.scala 28:14:chipyard.TestHarness.SmallBoomConfig.fir@319977.4 IOBinders.scala 163:28:chipyard.TestHarness.SmallBoomConfig.fir@320004.6]
  assign top_clock = clock; // @[:chipyard.TestHarness.SmallBoomConfig.fir@319975.4]
  assign top_reset = reset; // @[:chipyard.TestHarness.SmallBoomConfig.fir@319976.4]
  assign top_debug_clockeddmi_dmi_req_valid = 1'h0; // @[Periphery.scala 261:25:chipyard.TestHarness.SmallBoomConfig.fir@319979.4]
  assign top_debug_clockeddmi_dmi_req_bits_addr = 7'h0;
  assign top_debug_clockeddmi_dmi_req_bits_data = 32'h0;
  assign top_debug_clockeddmi_dmi_req_bits_op = 2'h0;
  assign top_debug_clockeddmi_dmi_resp_ready = 1'h1; // @[Periphery.scala 262:26:chipyard.TestHarness.SmallBoomConfig.fir@319980.4]
  assign top_debug_clockeddmi_dmiClock = 1'h0; // @[Periphery.scala 263:20:chipyard.TestHarness.SmallBoomConfig.fir@319982.4]
  assign top_debug_clockeddmi_dmiReset = 1'h1; // @[Periphery.scala 264:20:chipyard.TestHarness.SmallBoomConfig.fir@319983.4]
  assign top_mem_axi4_0_aw_ready = SimDRAM_axi_aw_ready; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_w_ready = SimDRAM_axi_w_ready; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_b_valid = SimDRAM_axi_b_valid; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_b_bits_id = SimDRAM_axi_b_bits_id; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_b_bits_resp = SimDRAM_axi_b_bits_resp; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_ar_ready = SimDRAM_axi_ar_ready; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_r_valid = SimDRAM_axi_r_valid; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_r_bits_id = SimDRAM_axi_r_bits_id; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_r_bits_data = SimDRAM_axi_r_bits_data; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_r_bits_resp = SimDRAM_axi_r_bits_resp; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_mem_axi4_0_r_bits_last = SimDRAM_axi_r_bits_last; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign top_serial_in_valid = SimSerial_serial_in_valid; // @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@320001.4]
  assign top_serial_in_bits = SimSerial_serial_in_bits; // @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@320000.4]
  assign top_serial_out_ready = SimSerial_serial_out_ready; // @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@319999.4]
  assign top_uart_0_rxd = UARTAdapter_io_uart_rxd; // @[IOBinders.scala 94:18:chipyard.TestHarness.SmallBoomConfig.fir@320019.4]
  assign SimSerial_clock = top_clock; // @[SerialAdapter.scala 218:18:chipyard.TestHarness.SmallBoomConfig.fir@319995.4]
  assign SimSerial_reset = top_reset; // @[SerialAdapter.scala 219:18:chipyard.TestHarness.SmallBoomConfig.fir@319996.4]
  assign SimSerial_serial_in_ready = top_serial_in_ready; // @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@320002.4]
  assign SimSerial_serial_out_valid = top_serial_out_valid; // @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@319998.4]
  assign SimSerial_serial_out_bits = top_serial_out_bits; // @[SerialAdapter.scala 220:19:chipyard.TestHarness.SmallBoomConfig.fir@319997.4]
  assign SimDRAM_clock = clock; // @[IOBinders.scala 114:22:chipyard.TestHarness.SmallBoomConfig.fir@320012.4]
  assign SimDRAM_reset = reset; // @[IOBinders.scala 115:22:chipyard.TestHarness.SmallBoomConfig.fir@320013.4]
  assign SimDRAM_axi_aw_valid = top_mem_axi4_0_aw_valid; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_id = top_mem_axi4_0_aw_bits_id; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_addr = top_mem_axi4_0_aw_bits_addr; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_len = top_mem_axi4_0_aw_bits_len; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_size = top_mem_axi4_0_aw_bits_size; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_burst = top_mem_axi4_0_aw_bits_burst; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_lock = top_mem_axi4_0_aw_bits_lock; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_cache = top_mem_axi4_0_aw_bits_cache; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_prot = top_mem_axi4_0_aw_bits_prot; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_aw_bits_qos = top_mem_axi4_0_aw_bits_qos; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_w_valid = top_mem_axi4_0_w_valid; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_w_bits_data = top_mem_axi4_0_w_bits_data; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_w_bits_strb = top_mem_axi4_0_w_bits_strb; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_w_bits_last = top_mem_axi4_0_w_bits_last; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_b_ready = top_mem_axi4_0_b_ready; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_valid = top_mem_axi4_0_ar_valid; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_id = top_mem_axi4_0_ar_bits_id; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_addr = top_mem_axi4_0_ar_bits_addr; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_len = top_mem_axi4_0_ar_bits_len; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_size = top_mem_axi4_0_ar_bits_size; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_burst = top_mem_axi4_0_ar_bits_burst; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_lock = top_mem_axi4_0_ar_bits_lock; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_cache = top_mem_axi4_0_ar_bits_cache; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_prot = top_mem_axi4_0_ar_bits_prot; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_ar_bits_qos = top_mem_axi4_0_ar_bits_qos; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign SimDRAM_axi_r_ready = top_mem_axi4_0_r_ready; // @[IOBinders.scala 113:20:chipyard.TestHarness.SmallBoomConfig.fir@320011.4]
  assign UARTAdapter_clock = clock; // @[:chipyard.TestHarness.SmallBoomConfig.fir@320016.4]
  assign UARTAdapter_reset = reset; // @[:chipyard.TestHarness.SmallBoomConfig.fir@320017.4]
  assign UARTAdapter_io_uart_txd = top_uart_0_txd; // @[IOBinders.scala 93:28:chipyard.TestHarness.SmallBoomConfig.fir@320018.4]
endmodule
