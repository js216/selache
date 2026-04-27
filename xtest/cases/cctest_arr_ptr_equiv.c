#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 7 */
int cctest_arr_ptr_equiv(void)
{
   int arr[5] = {10, 20, 30, 40, 50};
   int r      = 0;
   if (arr[2] == *(arr + 2))
      r += 1;
   if (*(arr + 3) == 3 [arr])
      r += 2; /* i[a] == a[i] */
   if (&arr[1] == arr + 1)
      r += 4;
   return r; /* 7 */
}
