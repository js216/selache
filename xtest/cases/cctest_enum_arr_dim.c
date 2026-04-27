#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum arr_sz { SZ_A = 3, SZ_TOTAL = 3 };

/* @expect 0x3C */
int cctest_enum_arr_dim(void)
{
   int arr[SZ_TOTAL];
   for (int i = 0; i < SZ_TOTAL; i++)
      arr[i] = (i + 1) * 10;
   return arr[0] + arr[1] + arr[2]; /* 10+20+30 = 60 = 0x3C */
}
