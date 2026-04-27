#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 7 */
int cctest_flt_range(void)
{
   int r = 0;
   if (FLT_MAX > 1.0e+37f)
      r += 1;
   if (FLT_MIN < 1.0e-37f && FLT_MIN > 0.0f)
      r += 2;
   if (FLT_EPSILON < 1.0e-6f && FLT_EPSILON > 0.0f)
      r += 4;
   return r; /* 1+2+4 = 7 */
}
