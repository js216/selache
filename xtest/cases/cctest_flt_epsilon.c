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
int cctest_flt_epsilon(void)
{
   int r     = 0;
   float one = 1.0f;
   float eps = FLT_EPSILON;
   if (one + eps != one)
      r += 1; /* 1+eps is distinguishable from 1 */
   if (one + eps / 2.0f == one)
      r += 2; /* 1+eps/2 rounds back to 1 */
   return r;  /* 1+2 = 3 */
}
