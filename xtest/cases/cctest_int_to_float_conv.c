#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x07 */
int cctest_int_to_float_conv(void)
{
   int i        = 7;
   float f      = 0.5f;
   float result = i + f;
   return (int)result; /* 7.5 -> 7 */
}
