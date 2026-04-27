#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x31 */
int cctest_neg_div(void)
{
   int a = -7, b = 2;
   int q = a / b;           /* -3 (toward zero, not -4) */
   int r = a % b;           /* -1 (a == b*q + r) */
   return -q * 0x10 + (-r); /* 3*16 + 1 = 49 = 0x31 */
}
