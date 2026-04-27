#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 8 */
int cctest_clz(void)
{
   unsigned int x = 0x00800000u;
   int lz         = 0;
   if (x == 0)
      return 32;
   while (!(x & 0x80000000u)) {
      lz++;
      x <<= 1;
   }
   return lz; /* 8 leading zeros in 0x00800000 */
}
