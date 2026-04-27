#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xA1 */
int cctest_if(void)
{
   int x = 3, r = 0xA2;
   if (x > 0)
      r = 0xA1;
   return r;
}
