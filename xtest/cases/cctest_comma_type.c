#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x14 */
int cctest_comma_type(void)
{
   int a  = 10;
   long b = 20L;
   long r = (a, b); /* result is b (20) */
   return (int)r;   /* 20 = 0x14 */
}
