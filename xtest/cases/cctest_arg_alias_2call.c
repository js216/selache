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

/* @expect 0x13 */
int cctest_arg_alias_2call(void)
{
   return helper_add(helper_mul(3, 5), 4); /* 15 + 4 = 19 */
}
