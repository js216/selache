#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0B */
int cctest_mixed_decl(void)
{
   int a = 5;
   int r = 0;
   if (a > 0) {
      int b = a * 2;
      r     = b;
   }
   int c = r + 1;
   return c; /* 11 = 0xB */
}
