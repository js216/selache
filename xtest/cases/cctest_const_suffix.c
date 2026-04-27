#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x9B */
int cctest_const_suffix(void)
{
   unsigned int a = 0xFFu;            /* 255 */
   long b         = 100L;             /* 100 */
   return (int)(a - (unsigned int)b); /* 155 = 0x9B */
}
