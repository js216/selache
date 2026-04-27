#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x33 */
int cctest_ptr_diff(void)
{
   int arr[5];
   int *p    = &arr[4];
   int *q    = &arr[1];
   int diff  = (int)(p - q);      /* +3 */
   int rdiff = (int)(q - p);      /* -3 */
   return diff * 0x10 + (-rdiff); /* 3*16 + 3 = 51 = 0x33 */
}
