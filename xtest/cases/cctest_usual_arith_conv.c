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
int cctest_usual_arith_conv(void)
{
   unsigned int u = 10;
   int s          = -3;
   /* s converts to unsigned; result is unsigned */
   unsigned int result = u + s; /* 10 + (UINT_MAX - 2) wraps to 7 */
   return (result == 7) ? 0x55 : 0xAA;
}
