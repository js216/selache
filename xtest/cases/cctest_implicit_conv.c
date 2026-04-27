#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x11 */
int cctest_implicit_conv(void)
{
   int a   = 7;
   float f = (float)a;
   f       = f * 2.5f;
   return (int)f; /* 17 = 0x11 */
}
