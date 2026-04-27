#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   struct {
      int x;
      int y;
   } s = {
       5,
       15,
   };

   return arr[3] + s.y; /* 40 + 15 = 55 = 0x37 */
}

/* @expect 0x55 */
int cctest_multichar(void)
{
   int mc = 'AB';
   /* Implementation-defined, but nonzero and contains 'A' and 'B' bits */
   return (mc != 0) ? 0x55 : 0xAA; /* 0x55 */
}
