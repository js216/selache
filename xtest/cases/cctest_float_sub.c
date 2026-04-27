#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 2 */
int cctest_float_sub(void)
{
   float a = 3.0f, b = 5.0f;
   int r = (int)(a - b); /* -2 */
   return -r;            /* 2 */
}
