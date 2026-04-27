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
int cctest_double_precision(void)
{
   double large     = 1.0e15;
   double small_val = 1.0e-10;
   double r         = large * small_val; /* 1.0e5 = 100000 */
   return (int)(r / 1000.0);             /* 100 = 0x64 */
}
