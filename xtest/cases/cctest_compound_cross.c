#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xBE */
int cctest_compound_cross(void)
{
   int x  = 100;
   char c = 5;
   x += c;         /* int += char → 105 */
   x -= (short)10; /* int -= short → 95 */
   float f = 2.0f;
   x       = (int)((float)x * f); /* 190 */
   return x;                      /* 190 = 0xBE */
}
