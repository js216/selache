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

/* @expect 0x0B */
int cctest_three_params(void)
{
   return three_params_helper(2, 3, 5);
}
