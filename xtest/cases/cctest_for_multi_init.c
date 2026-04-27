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
int cctest_for_multi_init(void)
{
   int sum = 0;
   for (int i = 0, j = 10; i < 5; i++, j--)
      sum += j - i;
   /* i=0,j=10→10; i=1,j=9→8; i=2,j=8→6; i=3,j=7→4; i=4,j=6→2 = 30 */
   return sum; /* 30 = 0x1E */
}
