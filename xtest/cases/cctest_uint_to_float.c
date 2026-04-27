#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xFA */
int cctest_uint_to_float(void)
{
   unsigned int u = 1000;
   float f        = (float)u;
   f              = f / 4.0f;
   return (int)f; /* 250 = 0xFA */
}
