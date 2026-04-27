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
int cctest_float_trunc(void)
{
   float f = -3.7f;
   int i   = (int)f; /* -3 (truncate toward zero) */
   return -i;        /* 3 */
}
