#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_int_float_prec(void)
{
   int big  = 0x1000001; /* 16777217 -- exceeds float 24-bit mantissa */
   float f  = (float)big;
   int back = (int)f;
   /* May round to 16777216 (0x1000000) or 16777218 -- implementation-defined */
   /* Just verify it's close (within 1 of the original) */
   int diff = big - back;
   if (diff < 0)
      diff = -diff;
   return (diff <= 1) ? 0x55 : 0xAA; /* 0x55 */
}
