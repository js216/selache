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
int cctest_iso646_misc(void)
{
   int r = 0;
   if ((compl 0u) == 0xFFFFFFFFu)
      r += 1; /* ~0 */
   if (5 not_eq 3)
      r += 2; /* != */
   return r;  /* 1+2 = 3 */
}
