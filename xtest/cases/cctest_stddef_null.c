#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_stddef_null(void)
{
   int r  = 0;
   int *p = NULL;
   if (p == 0)
      r += 1;
   if (!p)
      r += 2;
   return r; /* 1+2 = 3 */
}
