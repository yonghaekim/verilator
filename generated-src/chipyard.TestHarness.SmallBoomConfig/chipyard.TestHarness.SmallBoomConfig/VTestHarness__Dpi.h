// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/SimDRAM.v:1
    extern void* memory_init(long long mem_size, long long word_size, long long line_size, long long id_bits);
    // DPI import at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/SimDRAM.v:9
    extern void memory_tick(void* channel, unsigned char reset, unsigned char ar_valid, unsigned char* ar_ready, int ar_addr, int ar_id, int ar_size, int ar_len, unsigned char aw_valid, unsigned char* aw_ready, int aw_addr, int aw_id, int aw_size, int aw_len, unsigned char w_valid, unsigned char* w_ready, int w_strb, long long w_data, unsigned char w_last, unsigned char* r_valid, unsigned char r_ready, int* r_id, int* r_resp, long long* r_data, unsigned char* r_last, unsigned char* b_valid, unsigned char b_ready, int* b_id, int* b_resp);
    // DPI import at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/SimSerial.v:1
    extern int serial_tick(unsigned char serial_out_valid, unsigned char* serial_out_ready, int serial_out_bits, unsigned char* serial_in_valid, unsigned char serial_in_ready, int* serial_in_bits);
    // DPI import at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/SimUART.v:3
    extern void uart_init(const char* filename, int uartno);
    // DPI import at /home/centos/firesim/target-design/chipyard/sims/verilator_org/generated-src/chipyard.TestHarness.SmallBoomConfig/SimUART.v:8
    extern void uart_tick(unsigned char serial_out_valid, unsigned char* serial_out_ready, char serial_out_bits, unsigned char* serial_in_valid, unsigned char serial_in_ready, char* serial_in_bits);
    
#ifdef __cplusplus
}
#endif
