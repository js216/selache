#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x34 */
int cctest_cast_trunc(void)
{
   int x           = 0x1234;
   unsigned char c = (unsigned char)x;
   return (int)c; /* 0x34 */
}
