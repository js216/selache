#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 2 */
int cctest_elseif(void)
{
   int x = 7, r = 0;
   if (x > 10)
      r = 1;
   else if (x > 5)
      r = 2;
   else if (x > 0)
      r = 3;
   else
      r = 4;
   return r; /* 2 */
}
