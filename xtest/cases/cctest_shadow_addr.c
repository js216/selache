#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x14 */
int cctest_shadow_addr(void)
{
   int x  = 10;
   int *p = &x;
   {
      int x  = 20;
      int *q = &x;
      return *p + (*q - 10);
   }
}
