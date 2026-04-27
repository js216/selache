#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x32 */
int cctest_for_two_init(void)
{
   int sum = 0;
   for (int i = 0, j = 10; i < 5; i++, j--)
      sum += i + j;
   return sum; /* (0+10)+(1+9)+(2+8)+(3+7)+(4+6) = 50 = 0x32 */
}
