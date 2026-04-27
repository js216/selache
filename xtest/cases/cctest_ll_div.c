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
int cctest_ll_div(void)
{
   long long a = 1000000000LL;
   long long b = 7LL;
   long long q = a / b; /* 142857142 */
   long long r = a % b; /* 6 */
   return (q == 142857142LL && r == 6LL) ? 0x55 : 0xAA;
}
