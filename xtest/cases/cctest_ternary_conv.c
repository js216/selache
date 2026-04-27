#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_ternary_conv(void)
{
   int i        = 1;
   float f      = 10.0f;
   float result = i ? f : 0; /* result type is float */
   return (int)result;
}
