#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x24 */
int cctest_duff_copy(void)
{
   int src[8] = {1, 2, 3, 4, 5, 6, 7, 8};
   int dst[8] = {0};
   int n      = 8;
   int *s = src, *d = dst;
   /* Standard Duff's device copy */
   int chunks = (n + 3) / 4;
   switch (n % 4) {
      case 0: do { *d++ = *s++;
            case 3: *d++ = *s++;
            case 2: *d++ = *s++;
            case 1: *d++ = *s++;
         } while (--chunks > 0);
   }
   int sum = 0;
   for (int i = 0; i < 8; i++)
      sum += dst[i];
   return sum; /* 36 = 0x24 */
}
