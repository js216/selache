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

/* @expect 0x9 */
int cctest_three_cjumps(void)
{
   helper_mul(1, 1);
   helper_mul(2, 2);
   return helper_mul(3, 3); /* 9 */
}
