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
int cctest_ll_neg(void)
{
   long long a = 12345678901LL;
   long long b = -a;
   return (a + b == 0) ? 0x55 : 0xAA;
}
