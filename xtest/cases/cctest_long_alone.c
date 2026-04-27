#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1F4 */
int cctest_long_alone(void)
{
   long a = 1000L;
   long b = -500L;
   return (int)(a + b); /* 500 = 0x1F4 */
}
