#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x05 */
int cctest_assign_in_cond(void)
{
   int x;
   if ((x = 5) > 3)
      return x;
   return 0;
}
