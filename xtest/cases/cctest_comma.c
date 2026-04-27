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
int cctest_comma(void)
{
   int a = 1;
   return (a = a + 2, a * 3);
}
