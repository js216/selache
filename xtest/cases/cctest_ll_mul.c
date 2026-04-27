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
int cctest_ll_mul(void)
{
   long long a = 100000LL;
   long long b = 100000LL;
   long long c = a * b; /* 10,000,000,000 = 0x2540BE400 */
   return (c == 10000000000LL) ? 0x55 : 0xAA;
}
