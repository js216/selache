#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum limits { LIM_START = 3, LIM_END = 7 };

/* @expect 0x19 */
int cctest_enum_loop(void)
{
   int sum = 0;
   for (int i = LIM_START; i <= LIM_END; i++)
      sum += i;
   return sum; /* 3+4+5+6+7 = 25 = 0x19 */
}
