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
int cctest_stdint_64(void)
{
   int64_t a = 1;
   a <<= 40;
   uint64_t b = (uint64_t)a;
   return (int)(b >> 40); /* 1 */
}
