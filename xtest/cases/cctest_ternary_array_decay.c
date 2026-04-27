#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   int sum = 0;
   for (int i = START; i <= END; i++)
      sum += i;
   return sum; /* 0+1+2+3 = 6 */
}

/* @expect 0x55 */
int cctest_ternary_array_decay(void)
{
   int a[2] = {0x55, 0xAA};
   int b[2] = {0xBB, 0xCC};
   int *p   = (1) ? a : b;
   return p[0];
}
