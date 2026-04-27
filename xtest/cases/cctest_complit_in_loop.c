#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_complit_in_loop(void)
{
   int sum = 0;
   for (int i = 1; i <= 5; i++) {
      const int *p = (const int[]){i, i * 2};
      sum += p[0]; /* 1+2+3+4+5 = 15 */
   }
   return sum;
}
