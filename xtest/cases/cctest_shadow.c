#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 4 */
int cctest_shadow(void)
{
   int x = 1;
   int r = x;
   {
      int x = 2;
      r += x;
   }
   r += x;
   return r; /* 1+2+1 = 4 */
}
