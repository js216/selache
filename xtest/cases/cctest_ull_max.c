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
int cctest_ull_max(void)
{
   unsigned long long max   = ~0ULL;
   unsigned long long check = 0xFFFFFFFFFFFFFFFFULL;
   return (max == check) ? 0xFF : 0;
}
