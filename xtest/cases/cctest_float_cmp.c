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
int cctest_float_cmp(void)
{
   int r   = 0;
   float x = (float)5;
   if (x > 2.5f)
      r = r + 1;
   float y = (float)1;
   if (y < 3.0f)
      r = r + 2;
   return r;
}
