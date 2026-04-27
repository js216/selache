#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   rgb.r = 31; /* max 5-bit */
   rgb.g = 63; /* max 6-bit */
   rgb.b = 15;
   return rgb.r + rgb.g + rgb.b; /* 31+63+15 = 109 = 0x6D */
}

/* @expect 0x42 */
int cctest_complit_addr(void)
{
   int *p = &(int){0x42};
   return *p; /* 0x42 */
}
