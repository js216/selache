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
int cctest_ll_bigshift(void)
{
   long long a = 0x55LL;
   long long b = a << 40;
   long long c = b >> 40;
   return (c == a) ? 0x55 : 0xAA;
}
