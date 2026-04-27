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

/* @expect 0x55 */
int cctest_fnptr_eq(void)
{
   int (*f)(int, int) = helper_add;
   int (*g)(int, int) = helper_add;
   int (*h)(int, int) = helper_mul;
   return (f == g && f != h) ? 0x55 : 0xAA;
}
