#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x32 */
int cctest_signed_char(void)
{
   signed char a = -100;
   signed char b = 50;
   int sum       = a + b; /* int promotion: -100+50 = -50 */
   return -sum;           /* 50 = 0x32 */
}
