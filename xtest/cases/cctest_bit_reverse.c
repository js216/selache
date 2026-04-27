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
int cctest_bit_reverse(void)
{
   unsigned char x = 0xB4; /* 10110100 -> 00101101 = 0x2D */
   unsigned char r = 0;
   for (int i = 0; i < 8; i++) {
      r = (r << 1) | (x & 1);
      x >>= 1;
   }
   return (r == 0x2D) ? 0x55 : 0xAA;
}
