#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int dual_static(int which)
{
   static int count_a = 0;
   static int count_b = 0;
   if (which == 0) {
      count_a++;
      return count_a;
   }
   count_b++;
   return count_b;
}

/* @expect 1 */
int cctest_multi_static(void)
{
   int a1 = dual_static(0);
   int a2 = dual_static(0);
   /* a2 - a1 is always 1 regardless of prior calls */
   return a2 - a1; /* 1 */
}
