#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x32 */
int cctest_cond_side(void)
{
   int a = 0, b = 0;
   int x = 1;
   if (x)
      a = 5;
   else
      b = 5;
   return a * 10 + b; /* 50 = 0x32 */
}
