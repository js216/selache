#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_deep_scope(void)
{
   int x = 1;
   int r = 0;
   {
      int x = 2;
      r += x; /* 2 */
      {
         int x = 3;
         r += x; /* 3 */
         {
            int x = 4;
            r += x; /* 4 */
         }
         r += x; /* 3 */
      }
      r += x; /* 2 */
   }
   r += x;   /* 1 */
   return r; /* 2+3+4+3+2+1 = 15 = 0x0F */
}
