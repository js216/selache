#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xFF */
int cctest_unsigned_sub_wrap(void)
{
   unsigned int a = 0;
   unsigned int b = a - 1;
   return (b == (unsigned int)-1) ? 0xFF : 0x00;
}
