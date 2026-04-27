#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 5 */
int cctest_nested_comma(void)
{
   int a = 1, b = 2;
   return (a++, b++, a + b); /* a=2, b=3 → 5 */
}
