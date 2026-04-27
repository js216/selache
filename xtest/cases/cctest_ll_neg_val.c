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
int cctest_ll_neg_val(void)
{
   long long x = -1LL;
   long long y = -9999999999LL;
   return (x < 0 && y < 0 && x > y) ? 0x55 : 0xAA;
}
