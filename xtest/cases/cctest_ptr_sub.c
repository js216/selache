#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_ptr_sub(void)
{
   int arr[5];
   int *p1 = &arr[1];
   int *p2 = &arr[4];
   return (int)(p2 - p1); /* 3 */
}
