#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.lo = 0x1234;
   bf.hi = 0xABCD;
   return (int)((bf.hi >> 8) + (bf.lo & 0xFF)); /* 0xAB + 0x34 = 0xDF */
}

/* @expect 0x3C */
int cctest_arr_of_ptr(void)
{
   int a = 10, b = 20, c = 30;
   int *ptrs[3];
   ptrs[0] = &a;
   ptrs[1] = &b;
   ptrs[2] = &c;
   return *ptrs[0] + *ptrs[1] + *ptrs[2]; /* 60 = 0x3C */
}
