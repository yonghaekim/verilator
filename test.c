#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "dataset.h"
#include "util.h"

void __attribute__((noinline)) myprint(int coreid, int ncores)
{
  int a = 10;
  int b = 20;

  printf("a + b = %d\n", a + b);

  __asm__ (
            "xor x1, x1, x1;"
            "addi x1, x1, 0x3F;"
            "csrw 0x7c2, x1;"
            "xor x1, x1, x1;"
            "csrr x1, 0x7d0;"
            "xor x1, x1, x1;"
            "csrr x1, 0x7d1;"
            "xor x1, x1, x1;"
            "csrr x1, 0x7f0;"

            //"xor x1, x1, x1;"
            //"addi x1, x1, 0x7;"
            //"csrw 0x7c4, x1;"
          );
  barrier(ncores);
  __asm__ (
            "xor x1, x1, x1;"
            "csrw 0x7c4, x1;"
            "xor x1, x1, x1;"
            "csrr x1, 0x7d0;"
            "xor x1, x1, x1;"
            "csrr x1, 0x7d1;"
            "xor x1, x1, x1;"
            "csrr x1, 0x7f0;"
          );
}

void thread_entry(int cid, int nc)
{
  __asm__ (
            //"xor x1, x1, x1;"
            //"addi x1, x1, 0x100;"
            //"mul x1, x1, x1;"
            //"csrw 0x7c5, x1;"
            "xor x1, x1, x1;"
            "not x1, x1;"
            //"xor x2, x2, x2;"
            ///"addi x1, x1, 0x100;"
            //"addi x2, x2, 0x2;"
            "csrw 0x7c6, x1;"
            "csrw 0x7c5, x1;"
            //"mul x1, x1, x1;"
            //"mul x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"add x1, x1, x1;"
            //"csrw 0x7c6, x1;"

            "xor x1, x1, x1;"
            "addi x1, x1, 0x0;"
            "csrw 0x7c4, x1;"
          );

  barrier(nc);
  stats(myprint(cid, nc); barrier(nc), DATA_SIZE);

  barrier(nc);
  exit(0);
}
