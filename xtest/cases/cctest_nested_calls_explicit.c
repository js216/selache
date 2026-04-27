#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

static int helper_mul(int a, int b)
{
   return a * b;
}

/* @expect 0x19 */
int cctest_nested_calls_explicit(void)
{
   int a = helper_mul(3, 3); /* 9 */
   int b = helper_mul(4, 4); /* 16 */
   return helper_add(a, b);  /* 25 */
}
