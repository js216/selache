#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 6 */
int cctest_fallthrough(void)
{
   int x = 2, r = 0;
   switch (x) {
      case 1: r += 1;
      case 2: r += 2;
      case 3: r += 4; break;
      default: r = 0xFF;
   }
   return r; /* 2+4=6 */
}
