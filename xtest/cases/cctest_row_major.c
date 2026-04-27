#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.v = 7;  /* max for 3-bit */
   s.v += 1; /* wraps to 0 */
   return (s.v == 0) ? 0x07 : 0x00;
}

/* @expect 0x55 */
int cctest_row_major(void)
{
   int a[2][3] = {
       {1, 2, 3},
       {4, 5, 6}
   };
   /* a[1][0] == 4; in memory: 1,2,3,4,5,6 contiguous */
   int *flat = &a[0][0];
   return (flat[3] == 4 && flat[5] == 6) ? 0x55 : 0xAA;
}
