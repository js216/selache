#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 9 */
int cctest_ternary(void)
{
   int a = 5, b = 9;
   return (a > b) ? a : b;
}
