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

/* @expect 0x1C */
int cctest_arg_alias_3call(void)
{
   return helper_add(helper_mul(2, 5), helper_mul(3, 6)); /* 10 + 18 = 28 */
}
