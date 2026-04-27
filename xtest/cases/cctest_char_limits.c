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
int cctest_char_limits(void)
{
   int r = 0;
   if (CHAR_MIN == SCHAR_MIN)
      r += 1; /* char is signed on SHARC */
   if (CHAR_MAX == SCHAR_MAX)
      r += 2;
   return r; /* 1+2 = 3 */
}
