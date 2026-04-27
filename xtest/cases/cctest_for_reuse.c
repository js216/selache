#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x2B */
int cctest_for_reuse(void)
{
   int sum = 0;
   for (int i = 0; i < 5; i++)
      sum += i;
   for (int i = 10; i < 13; i++)
      sum += i;
   return sum; /* 0+1+2+3+4=10; 10+11+12=33; total=43=0x2B */
}
