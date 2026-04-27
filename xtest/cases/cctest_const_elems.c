#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sum_constq(const int *p, int n)
{
   int s = 0;
   for (int i = 0; i < n; i++)
      s += p[i];
   return s;
}

/* @expect 0x32 */
int cctest_const_elems(void)
{
   const int arr[] = {5, 10, 15, 20};
   return sum_constq(arr, 4); /* 50 = 0x32 */
}
