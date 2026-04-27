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
int cctest_stddef_ptrdiff(void)
{
   int arr[5];
   ptrdiff_t d = &arr[4] - &arr[1];
   return (int)d; /* 3 */
}
