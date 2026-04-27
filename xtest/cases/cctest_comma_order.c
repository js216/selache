#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x05 */
int cctest_comma_order(void)
{
   int x = 0;
   int y = (x = 3, x += 2, x); /* x=3 then x=5 */
   return y;
}
