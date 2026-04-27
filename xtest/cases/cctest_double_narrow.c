#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_double_narrow(void)
{
   double d = 7.5;
   float f  = (float)d;
   return (int)(f * 2.0f); /* 15 = 0xF */
}
