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
int cctest_uint_cmp_edge(void)
{
   unsigned int zero = 0;
   unsigned int max  = 0xFFFFFFFFu;
   int r             = 0;
   if (zero < max)
      r += 1;
   if (max > zero)
      r += 2;
   if (zero <= max)
      r += 4;
   return r; /* 1+2+4 = 7 */
}
