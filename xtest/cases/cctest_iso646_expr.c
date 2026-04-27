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
int cctest_iso646_expr(void)
{
   int a = 0xAA, b = 0x55;
   int c = (a bitand (compl b)) bitor (b bitand (compl a));
   /* a & ~b = 0xAA & 0xAA = 0xAA; b & ~a = 0x55 & 0x55 = 0x55; 0xAA | 0x55 =
      0xFF Wait: ~0x55 = 0xFFFFFFAA, 0xAA & 0xFFFFFFAA = 0xAA. ~0xAA =
      0xFFFFFF55, 0x55 & 0xFFFFFF55 = 0x55. 0xAA | 0x55 = 0xFF. That's XOR via
      AND/OR/NOT. */
   return (c == 0xFF) ? 0x55 : 0xAA;
}
