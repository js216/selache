#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_for_zero(void)
{
   int r = 0x55;
   for (int i = 0; i < 0; i++)
      r = 0;
   return r; /* 0x55 */
}
