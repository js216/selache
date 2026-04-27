#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0C */
int cctest_float_suffix(void)
{
   float a       = 3.0f;
   double b      = 4.0;
   long double c = 5.0L;
   return (int)a + (int)b + (int)c; /* 3+4+5 = 12 = 0x0C */
}
