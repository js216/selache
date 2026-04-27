#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x13 */
int cctest_postdec(void)
{
   int x = 10;
   int y = x--;
   return y + x; /* 10 + 9 = 19 = 0x13 */
}
