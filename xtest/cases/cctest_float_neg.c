#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 7 */
int cctest_float_neg(void)
{
   float a = 3.0f;
   float b = -a;
   return (int)(b + 10.0f); /* 7 */
}
