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
int cctest_float_int_round(void)
{
   float f = 3.14f;
   int i   = (int)f;   /* 3: truncation toward zero */
   float g = (float)i; /* 3.0 */
   return (g == 3.0f && i == 3) ? 0x55 : 0xAA;
}
