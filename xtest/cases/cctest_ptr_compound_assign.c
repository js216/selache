#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x32 */
int cctest_ptr_compound_assign(void)
{
   int arr[5] = {10, 20, 30, 40, 50};
   int *p     = arr;
   p += 2;       /* now at arr[2] */
   int a = *p;   /* 30 */
   p -= 1;       /* now at arr[1] */
   int b = *p;   /* 20 */
   return a + b; /* 50 = 0x32 */
}
