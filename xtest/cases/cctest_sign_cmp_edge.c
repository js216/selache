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
int cctest_sign_cmp_edge(void)
{
   int s          = -1;
   unsigned int u = 0;
   /* -1 converted to unsigned → 0xFFFFFFFF > 0 */
   int r = 0;
   if ((unsigned int)s > u)
      r += 1;
   /* But as signed: -1 < 0 is false; they're just -1 and 0 */
   if (s < (int)u)
      r += 2;
   return r; /* 1+2 = 3 */
}
