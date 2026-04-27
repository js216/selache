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
int cctest_hex_float_p4(void)
{
   float f = 0x1.0p4;
   return ((int)f == 16) ? 0x55 : 0xAA;
}
