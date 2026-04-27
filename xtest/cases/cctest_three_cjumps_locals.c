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

/* @expect 0xA */
int cctest_three_cjumps_locals(void)
{
   int a = helper_add(1, 2); /* 3 */
   int b = helper_add(3, 4); /* 7 */
   return a + b;             /* 10 */
}
