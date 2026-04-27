#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x10 */
int cctest_compound(void)
{
   int x = 1;
   x += 2;
   x *= 3;
   x -= 1;
   x <<= 1;
   return x;
}
