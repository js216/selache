#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_do_break(void)
{
   int i = 0, r = 0;
   do {
      r += 10;
      i++;
      if (i == 3)
         break;
   } while (i < 10);
   return r; /* 30 = 0x1E */
}
