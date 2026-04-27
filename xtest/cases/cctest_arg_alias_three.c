#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int three_params_helper(int a, int b, int c)
{
   return a * b + c;
}

/* @expect 0x1A */
int cctest_arg_alias_three(void)
{
   return three_params_helper(4, 5, 6); /* 4*5+6 = 26 */
}
