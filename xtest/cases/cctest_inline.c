#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static inline int sq(int x)
{
   return x * x;
}

/* @expect 0x31 */
int cctest_inline(void)
{
   return sq(7); /* 49 = 0x31 */
}
