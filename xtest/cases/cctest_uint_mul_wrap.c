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
int cctest_uint_mul_wrap(void)
{
   unsigned int a = 0x10000u;
   unsigned int b = 0x10000u;
   unsigned int c = a * b; /* 0x100000000 wraps to 0 */
   return (c == 0) ? 0x55 : 0xAA;
}
