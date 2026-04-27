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
int cctest_schar_range(void)
{
   signed char c = -128;
   signed char d = 127;
   return (c == -128 && d == 127) ? 0x55 : 0xAA;
}
