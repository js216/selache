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
int cctest_sizeof_unary(void)
{
   int x = 0;
   return (int)(sizeof x); /* 4 on 32-bit SHARC */
}
