#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define VA_SUM3(a, ...) ((a) + va_sum2_helper(__VA_ARGS__))

static int va_sum2_helper(int b, int c)
{
   return b + c;
}

/* @expect 0x1E */
int cctest_variadic_macro(void)
{
   return VA_SUM3(10, 8, 12); /* 10 + 8 + 12 = 30 */
}
