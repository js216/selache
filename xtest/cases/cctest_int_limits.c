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
int cctest_int_limits(void)
{
   int r = 0;
   if (SCHAR_MIN == -128)
      r += 1;
   if (SCHAR_MAX == 127)
      r += 2;
   if (UCHAR_MAX == 255)
      r += 4;
   if (SHRT_MIN == -32768)
      r += 8;
   if (SHRT_MAX == 32767)
      r += 16;
   return r; /* 1+2+4+8+16 = 31 = 0x1F */
}
