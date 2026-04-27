#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 28 */
int cctest_precedence(void)
{
   /* 2 + 3*4 = 14; 14 << 1 = 28; 28 & 0xFF = 28 = 0x1C */
   return 2 + 3 * 4 << 1 & 0xFF;
}
