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
int cctest_incomplete_init(void)
{
   int a[5] = {1, 2};
   return a[0] + a[1] + a[2] + a[3] + a[4]; /* 1+2+0+0+0 = 3 */
}
