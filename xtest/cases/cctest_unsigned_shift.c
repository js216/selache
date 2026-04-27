#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 8 */
int cctest_unsigned_shift(void)
{
   unsigned int x = 0x80000000;
   return (int)(x >> 28); /* 8 */
}
