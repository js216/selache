#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_do_side_cond(void)
{
   int i = 0, sum = 0;
   do {
      sum += i;
   } while (++i < 5);
   return sum; /* 0+1+2+3+4 = 10 = 0x0A */
}
