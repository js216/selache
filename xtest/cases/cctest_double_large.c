#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x64 */
int cctest_double_large(void)
{
   double d = 100000.0;
   return (int)(d / 1000.0); /* 100 = 0x64 */
}
