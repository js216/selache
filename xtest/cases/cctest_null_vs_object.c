#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x03 */
int cctest_null_vs_object(void)
{
   int x;
   int *p = &x;
   int *n = 0;
   int r  = 0;
   if (p != n)
      r += 1;
   if (n == 0)
      r += 2;
   return r;
}
