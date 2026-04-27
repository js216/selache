#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xAA */
int cctest_arith_conv(void)
{
   int s          = -1;
   unsigned int u = 1;
   /* s promoted to unsigned → 0xFFFFFFFF > 1 */
   return (s > u) ? 0xAA : 0xBB; /* 0xAA */
}
