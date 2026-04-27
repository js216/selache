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
int cctest_float_div(void)
{
   float a = 7.0f;
   float b = 2.0f;
   return (int)(a / b); /* 3 (truncated from 3.5) */
}
