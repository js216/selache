#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_uint_wrap_zero(void)
{
   unsigned int m = (unsigned int)-1;
   return (m + 1 == 0) ? 0x55 : 0xAA;
}
