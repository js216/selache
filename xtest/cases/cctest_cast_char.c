#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xAB */
int cctest_cast_char(void)
{
   signed char c = (signed char)0x80;
   int i         = (int)c;
   return i + 0x80 + 0xAB;
}
