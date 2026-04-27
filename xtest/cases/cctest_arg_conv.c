#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int take_long(long x)
{
   return (int)(x + 1);
}

/* @expect 0x64 */
int cctest_arg_conv(void)
{
   char c = 99;
   return take_long(c); /* char→long implicit, 100 = 0x64 */
}
