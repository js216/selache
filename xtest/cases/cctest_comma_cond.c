#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_comma_cond(void)
{
   int i = 0, sum = 0;
   while ((sum += i, ++i, i <= 5))
      ;
   return sum; /* 0+1+2+3+4+5 = 15 = 0x0F */
}
