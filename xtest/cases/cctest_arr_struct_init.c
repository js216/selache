#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x15 */
int cctest_arr_struct_init(void)
{
   struct pt {
      int x;
      int y;
   };
   struct pt pts[] = {
       {1, 2},
       {3, 4},
       {5, 6}
   };
   return pts[0].x + pts[0].y + pts[1].x + pts[1].y + pts[2].x + pts[2].y;
   /* 1+2+3+4+5+6 = 21 = 0x15 */
}
