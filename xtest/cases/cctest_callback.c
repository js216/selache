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

static int apply(int (*fn)(int, int), int a, int b)
{
   return fn(a, b);
}

/* @expect 0x33 */
int cctest_callback(void)
{
   return apply(helper_add, 0x11, 0x22); /* 0x33 */
}
