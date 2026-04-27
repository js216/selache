#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_neg_zero(void)
{
   int a = -0;
   int b = 0;
   return (a == b) ? 0x55 : 0xAA; /* 0x55 */
}
