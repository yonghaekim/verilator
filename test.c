#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#ifdef __ASSEMBLY__
#define __ASM_STR(x)x
#else
#define __ASM_STR(x)#x
#endif

//#ifndef __ASSEMBLY__
#define csr_write(csr, val)         \
({                \
  unsigned long __v = (unsigned long)(val);   \
  __asm__ ("csrw " __ASM_STR(csr) ", %0" \
            : : "rK" (__v)      \
            : "memory");      \
})
//  __asm__ ____volatile____ ("csrw " __ASM_STR(csr) ", %0" \

#define csr_read(csr)           \
({                \
  register unsigned long __v;       \
  __asm__ ("csrr %0, " __ASM_STR(csr)  \
            : "=r" (__v) :      \
            : "memory");      \
  __v;              \
  })
//  __asm__ ____volatile____ ("csrr %0, " __ASM_STR(csr)  \
//#endif /* __ASSEMBLY__ */


long int HBT[1000];

int main(void) {
  csr_write(0x430, 0x1);
  csr_write(0x431, HBT);

  int i;
  char arr[12];
  char *ptr = arr;
  printf("Before ptr: %p\n", ptr);

  ptr = (char *) ((long long) ptr | (long long) 0x000F000000000000);

  printf("After ptr: %p\n", ptr);

  for (i=0; i<11; i++) {
    ptr[i] = 0;
  }

  for (i=0; i<10; i++) {
    ptr[i] = 'a';
  }

  printf("ptr[0]: %c\n", ptr[0]);
  
  return 0;
}
