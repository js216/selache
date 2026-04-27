#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x35 */
int cctest_sort(void)
{
   int a = 5, b = 3;
   if (a > b) {
      int tmp = a;
      a       = b;
      b       = tmp;
   }
   return a * 0x10 + b; /* 3*16 + 5 = 53 = 0x35 */
}
