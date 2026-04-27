#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x50 */
int cctest_char_promote(void)
{
   signed char a = -50;
   signed char b = -30;
   int sum       = a + b; /* int promotion: -50 + -30 = -80 */
   return -sum;           /* 80 = 0x50 */
}
