#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#ifndef INT8_MIN
#define INT8_MIN   (-128)
#define INT8_MAX   127
#define UINT8_MAX  255
#define INT16_MIN  (-32768)
#define INT16_MAX  32767
#define UINT16_MAX 65535
#define INT32_MIN  (-2147483647 - 1)
#define INT32_MAX  2147483647
#define UINT32_MAX 0xFFFFFFFFU
#endif
/* @expect 0x1F */
int cctest_stdint_limits(void)
{
   int r = 0;
   if (INT8_MIN == -128)
      r += 1;
   if (INT8_MAX == 127)
      r += 2;
   if (UINT8_MAX == 255)
      r += 4;
   if (INT16_MAX == 32767)
      r += 8;
   if (UINT32_MAX == 0xFFFFFFFFU)
      r += 16;
   return r; /* 1+2+4+8+16 = 31 = 0x1F */
}
