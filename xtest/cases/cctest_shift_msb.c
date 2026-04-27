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
int cctest_shift_msb(void)
{
   unsigned int x = 1u << 31;
   return (x == 0x80000000u) ? 0x55 : 0xAA;
}
