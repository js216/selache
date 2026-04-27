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
int cctest_llong_limits(void)
{
   int r = 0;
   if (LLONG_MAX > 0)
      r += 1;
   if (ULLONG_MAX == 0xFFFFFFFFFFFFFFFFULL)
      r += 2;
   return r; /* 1+2 = 3 */
}
