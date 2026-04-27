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
int cctest_bits(void)
{
   int a = (0xFF & 0x3C) | 0x03;
   int b = a ^ 0x00;
   int c = ~0 & b;
   return c;
}
