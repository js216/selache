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

/* @expect 3 */
int cctest_fnptr_equal(void)
{
   int (*a)(int, int) = helper_add;
   int (*b)(int, int) = helper_add;
   int (*c)(int, int) = helper_mul;
   int r              = 0;
   if (a == b)
      r += 1; /* same function */
   if (a != c)
      r += 2; /* different function */
   return r;  /* 1+2 = 3 */
}
