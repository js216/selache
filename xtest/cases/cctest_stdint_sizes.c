#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x3F */
int cctest_stdint_sizes(void)
{
   int r = 0;
   if (sizeof(int8_t) == 1)
      r += 1;
   if (sizeof(uint8_t) == 1)
      r += 2;
   if (sizeof(int16_t) == 2)
      r += 4;
   if (sizeof(uint16_t) == 2)
      r += 8;
   if (sizeof(int32_t) == 4)
      r += 16;
   if (sizeof(uint32_t) == 4)
      r += 32;
   return r; /* 1+2+4+8+16+32 = 63 = 0x3F */
}
