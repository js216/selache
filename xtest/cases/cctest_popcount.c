#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return s.a + s.b + s.c; /* 30 = 0x1E */
}

/* @expect 0x10 */
int cctest_popcount(void)
{
   unsigned int x = 0xFFFF0000u; /* 16 one-bits */
   int count      = 0;
   while (x) {
      count += x & 1;
      x >>= 1;
   }
   return count; /* 16 = 0x10 */
}
