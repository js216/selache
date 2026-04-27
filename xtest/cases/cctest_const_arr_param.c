#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum_const_arr(const int a[], int n)
{
   int s = 0;
   for (int i = 0; i < n; i++)
      s += a[i];
   return s;
}

/* @expect 0x1E */
int cctest_const_arr_param(void)
{
   const int arr[3] = {5, 10, 15};
   return sum_const_arr(arr, 3); /* 30 = 0x1E */
}
