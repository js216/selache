#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xCD */
int cctest_cast_short(void)
{
   short s = (short)0x8000;
   int i   = (int)s;
   return i + 0x8000 + 0xCD;
}
