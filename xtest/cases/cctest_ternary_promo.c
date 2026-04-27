#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x10 */
int cctest_ternary_promo(void)
{
   int cond = 1;
   long a   = 0x10;
   int b    = 0x20;
   return (int)(cond ? a : b); /* 0x10 */
}
