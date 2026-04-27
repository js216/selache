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
int cctest_double_arith(void)
{
   double a = 3.5;
   double b = 2.0;
   return (int)(a * b); /* 7 */
}
