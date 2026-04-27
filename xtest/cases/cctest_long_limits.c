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
int cctest_long_limits(void)
{
   int r = 0;
   if (LONG_MAX == 2147483647L)
      r += 1;
   if (ULONG_MAX == 0xFFFFFFFFUL)
      r += 2;
   return r; /* 1+2 = 3 */
}
