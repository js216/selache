#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int g_zero_init_test;

/* @expect 0 */
int cctest_implicit_zero(void)
{
   return g_zero_init_test; /* 0 -- file-scope without initializer is zero */
}
