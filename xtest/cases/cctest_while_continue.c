#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x19 */
int cctest_while_continue(void)
{
   int sum = 0;
   int i   = 0;
   while (i < 10) {
      i++;
      if (i % 2 == 0)
         continue;
      sum += i;
   }
   return sum; /* 1+3+5+7+9 = 25 */
}
