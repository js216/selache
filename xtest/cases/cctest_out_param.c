#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static void swap_out(int *a, int *b)
{
   int t = *a;
   *a    = *b;
   *b    = t;
}

/* @expect 0x73 */
int cctest_out_param(void)
{
   int x = 3, y = 7;
   swap_out(&x, &y);
   return x * 0x10 + y; /* x=7, y=3 → 7*16+3 = 115 = 0x73 */
}
