#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0 */
int cctest_uchar_256(void)
{
   unsigned char c = 255;
   c += 1;
   return (int)c;
}
