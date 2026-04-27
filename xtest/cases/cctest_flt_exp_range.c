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
int cctest_flt_exp_range(void)
{
   int r = 0;
   if (FLT_MAX_EXP == 128)
      r += 1;
   if (FLT_MIN_EXP == -125)
      r += 2;
   return r; /* 1+2 = 3 */
}
