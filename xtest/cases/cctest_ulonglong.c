#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 1 */
int cctest_ulonglong(void)
{
   unsigned long long a = 0xFFFFFFFFULL;
   unsigned long long b = 1ULL;
   unsigned long long c = a + b; /* 0x100000000 */
   return (int)(c >> 32);        /* 1 */
}
