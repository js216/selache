#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 1 */
int cctest_unsigned(void)
{
   unsigned int a = 0xFFFFFFFF;
   unsigned int b = 1;
   int r          = 0;
   if (a > b)
      r = r + 1;
   return r;
}
