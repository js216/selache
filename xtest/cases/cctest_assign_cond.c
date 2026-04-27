#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int ret7(void)
{
   return 7;
}

/* @expect 8 */
int cctest_assign_cond(void)
{
   int x;
   if ((x = ret7()) > 5)
      return x + 1; /* 8 */
   return 0;
}
