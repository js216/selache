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
int cctest_unsigned_rshift(void)
{
   unsigned int x = 0x80000000u;
   unsigned int y = x >> 1;
   return (y == 0x40000000u) ? 0x55 : 0xAA;
}
