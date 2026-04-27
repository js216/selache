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
int cctest_double_negation(void)
{
   int r = 0;
   if (!!42 == 1)
      r += 1;
   if (!!0 == 0)
      r += 2;
   return r;
}
