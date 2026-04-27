#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 6 */
int cctest_expr_arr_dim(void)
{
   int arr[2 + 3]; /* arr[5] */
   for (int i = 0; i < 5; i++)
      arr[i] = i;
   return arr[1] + arr[2] + arr[3]; /* 1+2+3 = 6 */
}
