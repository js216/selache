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
int cctest_llong_const(void)
{
   long long x = 1LL << 40;
   long long y = x >> 40;
   return (y == 1) ? 0x55 : 0xAA;
}
