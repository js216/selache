#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_chained_cmp(void)
{
   int a = 1, b = 5, c = 10;
   return (a < b && b < c) ? 0x55 : 0xAA;
}
