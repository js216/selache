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
int cctest_cond_assign(void)
{
   int a = 0, b = 0;
   for (int i = 0; i < 6; i++)
      (i & 1) ? (a += i) : (b += i);
   /* even i: b += 0,2,4 = 6; odd i: a += 1,3,5 = 9 */
   return a + b; /* 9+6 = 15 = 0x0F */
}
