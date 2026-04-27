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
int cctest_int_minmax(void)
{
   int r = 0;
   if (INT_MIN < 0 && INT_MAX > 0)
      r += 1;
   if ((unsigned int)INT_MAX + 1u == (unsigned int)INT_MIN)
      r += 2;
   if (UINT_MAX == 0xFFFFFFFFu)
      r += 4;
   return r; /* 1+2+4 = 7 */
}
