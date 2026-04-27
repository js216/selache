#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum_arr(int *a, int n)
{
   int s = 0, i;
   for (i = 0; i < n; i++)
      s += a[i];
   return s;
}

/* @expect 0x0A */
int cctest_array_param(void)
{
   int a[4];
   a[0] = 1;
   a[1] = 2;
   a[2] = 3;
   a[3] = 4;
   return sum_arr(a, 4); /* 10 = 0xA */
}
