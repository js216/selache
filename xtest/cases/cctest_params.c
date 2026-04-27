#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int params_helper(int a, int b)
{
   return a * b + 1;
}

/* @expect 0x4E */
int cctest_params(void)
{
   return params_helper(7, 11);
}
