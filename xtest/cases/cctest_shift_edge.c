#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_shift_edge(void)
{
   unsigned int a = 0x12345678;
   unsigned int b = a << 0;   /* unchanged */
   unsigned int c = 1u << 31; /* 0x80000000 */
   int r          = 0;
   if (b == a)
      r += 1;
   if (c == 0x80000000u)
      r += 2;
   return r; /* 3 */
}
