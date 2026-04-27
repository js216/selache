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
int cctest_div_neg1(void)
{
   int x = 42;
   return (x / (-1) == -42) ? 0x55 : 0xAA;
}
