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
int cctest_shift_zero(void)
{
   int x = 0x12345678;
   return ((x << 0) == x && (x >> 0) == x) ? 0x55 : 0xAA;
}
