#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_mul(int a, int b)
{
   return a * b;
}

/* @expect 0x19 */
int cctest_mul_sum(void)
{
   return helper_mul(3, 3) + helper_mul(4, 4); /* 9 + 16 = 25 */
}
