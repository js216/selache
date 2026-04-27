#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 9 */
int cctest_for_continue(void)
{
   int s = 0;
   for (int i = 0; i < 6; i++) {
      if (i == 2 || i == 4)
         continue;
      s += i;
   }
   return s; /* 0+1+3+5 = 9 */
}
