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
int cctest_ternary_void_expr(void)
{
   int x = 10;
   int y = 10;
   (x > 0) ? (void)(y = 20) : (void)(y = 30);
   return y;
}
