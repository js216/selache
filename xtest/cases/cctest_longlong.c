#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_longlong(void)
{
   long long a = 1;
   a <<= 33;                      /* 0x200000000 */
   long long b = a + (1LL << 32); /* 0x300000000 */
   return (int)(b >> 32);         /* 3 */
}
