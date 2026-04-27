#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 7 */
int cctest_long_double(void)
{
   long double a = 3.0L;
   long double b = 4.0L;
   return (int)(a + b); /* 7 */
}
