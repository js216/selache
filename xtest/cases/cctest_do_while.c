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
int cctest_do_while(void)
{
   int n = 0, i = 0;
   do {
      n = n + 2;
      i = i + 1;
   } while (i < 6);
   return n;
}
