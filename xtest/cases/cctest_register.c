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
int cctest_register(void)
{
   register int i;
   register int sum = 0;
   for (i = 1; i <= 10; i++)
      sum += i;
   return sum; /* 55 = 0x37 */
}
