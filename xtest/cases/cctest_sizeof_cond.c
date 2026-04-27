#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 4 */
int cctest_sizeof_cond(void)
{
   int a  = 0;
   long b = 0;
   /* sizeof(cond ? a : b) should be sizeof(long), even though cond is known */
   return (int)sizeof(a ? a : b); /* sizeof(long) = 4 on SHARC */
}
