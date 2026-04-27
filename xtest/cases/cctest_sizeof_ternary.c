#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0C */
int cctest_sizeof_ternary(void)
{
   int cond = 1;
   int a    = (int)sizeof(cond ? (long long)0 : (char)0);
   /* Result type is long long due to promotion, so sizeof = 8 */
   int b = (int)sizeof(cond ? (short)0 : (char)0);
   /* Result type is int due to integer promotion, so sizeof = 4 */
   return a + b; /* 8 + 4 = 12 = 0x0C */
}
