#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_cmp_value(void)
{
   int a = 5, b = 3;
   return (a > b) + (a == 5) + (b != 5); /* 3 */
}
