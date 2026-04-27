#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_goto(void)
{
   int s = 0;
   int i = 1;
loop:
   s = s + i;
   i = i + 1;
   if (i <= 4)
      goto loop;
   return s;
}
