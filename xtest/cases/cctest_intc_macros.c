#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#ifndef INT32_C
#define INT8_C(x)   (x)
#define INT16_C(x)  (x)
#define INT32_C(x)  (x)
#define INT64_C(x)  (x##LL)
#define UINT8_C(x)  (x)
#define UINT16_C(x) (x)
#define UINT32_C(x) (x##U)
#define UINT64_C(x) (x##ULL)
#endif
/* @expect 7 */
int cctest_intc_macros(void)
{
   int r     = 0;
   int32_t a = INT32_C(42);
   if (a == 42)
      r += 1;
   uint32_t b = UINT32_C(0xDEADBEEF);
   if (b == 0xDEADBEEFU)
      r += 2;
   uint64_t c = UINT64_C(0x100000000);
   if ((int)(c >> 32) == 1)
      r += 4;
   return r; /* 1+2+4 = 7 */
}
