#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef int arr5_t[5];

/* @expect 0x0F */
int cctest_typedef_arr(void)
{
   arr5_t a = {1, 2, 3, 4, 5};
   int sum  = 0;
   for (int i = 0; i < 5; i++)
      sum += a[i];
   return sum; /* 15 = 0x0F */
}
