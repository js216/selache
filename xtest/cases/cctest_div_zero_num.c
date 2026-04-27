#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0 */
int cctest_div_zero_num(void)
{
   int x = 0, y = 42;
   return x / y;
}
