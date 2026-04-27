#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 4 */
int cctest_sizeof_incomplete_arr(void)
{
   int a[] = {10, 20, 30, 40};
   return (int)(sizeof(a) / sizeof(a[0])); /* 4 */
}
