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
int cctest_ptr_cmp(void)
{
   int arr[5];
   int *lo = &arr[1];
   int *hi = &arr[3];
   int r   = 0;
   if (lo < hi)
      r += 1;
   if (hi > lo)
      r += 2;
   if (lo <= hi)
      r += 4;
   if (lo != hi)
      r += 8;
   return r; /* 1+2+4+8 = 15 = 0xF */
}
