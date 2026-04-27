#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x37 */
int cctest_while(void)
{
   int i = 1, s = 0;
   while (i <= 10) {
      s = s + i;
      i = i + 1;
   }
   return s;
}
