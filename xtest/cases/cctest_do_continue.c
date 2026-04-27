#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0C */
int cctest_do_continue(void)
{
   int i = 0, s = 0;
   do {
      i++;
      if (i == 3)
         continue;
      s += i;
   } while (i < 5);
   return s; /* 1+2+4+5 = 12 = 0x0C */
}
