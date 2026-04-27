#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int factorial(int n)
{
   if (n <= 1)
      return 1;
   return n * factorial(n - 1);
}

/* @expect 4 */
int cctest_deep_expr(void)
{
   return factorial(4) / 8 + factorial(1);
}
