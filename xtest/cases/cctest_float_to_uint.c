#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x2A */
int cctest_float_to_uint(void)
{
   float f        = 42.7f;
   unsigned int u = (unsigned int)f; /* 42 */
   return (int)u;                    /* 42 = 0x2A */
}
