#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.flags = 0x0A;
   s.value = 0x10;
   s.extra = 0x20;
   return (int)s.flags + s.value + s.extra; /* 10+16+32 = 58 = 0x3A */
}

/* @expect 0x0F */
int cctest_complex_cond(void)
{
   int a = 0, b = 0, c = 0;
   int x = 5;
   (x > 3) ? (a = x, b = x * 2) : (c = x * 3);
   return a + b + c; /* 5 + 10 + 0 = 15 = 0x0F */
}
