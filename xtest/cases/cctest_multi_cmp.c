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
int cctest_multi_cmp(void)
{
   int a = 5, b = 10, c = 15;
   int r = 0;
   if (a < b && b < c)
      r += 1;
   if (a <= 5 && c >= 15)
      r += 2;
   if (a != b || b == c)
      r += 4;
   return r; /* 1+2+4 = 7 */
}
