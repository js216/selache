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
int cctest_float_to_uint_pos(void)
{
   float f        = 42.7f;
   unsigned int u = (unsigned int)f;
   return (u == 42) ? 0x55 : 0xAA;
}
