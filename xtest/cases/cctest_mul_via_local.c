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
int cctest_mul_via_local(void)
{
   int x = helper_mul(3, 3);
   return x;
}
