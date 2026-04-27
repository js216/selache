#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#undef SELFVAL

/* @expect 0x2345 */
int cctest_assign_trunc(void)
{
   unsigned int full = 0x12345;
   unsigned short s = (unsigned short)full; /* explicit truncation to 16 bits */
   return (int)s;                           /* 0x2345 */
}
