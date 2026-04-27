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
int cctest_null_ptr(void)
{
   int *p = 0;
   int r  = 0;
   if (p == 0)
      r += 1;
   if (!p)
      r += 2;
   return r; /* 3 */
}
