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
int cctest_signed_rshift(void)
{
   int x = -8;
   int y = x >> 1;
   return (y == -4) ? 0x55 : 0xAA;
}
