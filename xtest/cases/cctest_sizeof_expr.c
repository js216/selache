#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 5 */
int cctest_sizeof_expr(void)
{
   int arr[5];
   return sizeof(arr) / sizeof(arr[0]); /* 5 */
}
