#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_uint_to_float_conv(void)
{
   unsigned int u = 1000000;
   float f        = (float)u;
   return ((int)f == 1000000) ? 0x55 : 0xAA;
}
