#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1F */
int cctest_ll_cmp(void)
{
   long long a = 1LL << 40;
   long long b = (1LL << 40) + 1;
   int r       = 0;
   if (a < b)
      r += 1;
   if (b > a)
      r += 2;
   if (a <= b)
      r += 4;
   if (a != b)
      r += 8;
   if (a == a)
      r += 16;
   return r; /* 1+2+4+8+16 = 31 = 0x1F */
}
