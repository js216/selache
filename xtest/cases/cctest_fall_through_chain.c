#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0E */
int cctest_fall_through_chain(void)
{
   int r = 0;
   switch (2) {
      case 1: r += 1;
      case 2: r += 2;
      case 3: r += 4;
      case 4: r += 8;
      default: break;
   }
   return r; /* 2+4+8 = 14 */
}
