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
int cctest_conv_rank(void)
{
   short s = 1;
   long l  = 2;
   /* s is promoted to long for the addition; result type is long */
   long result = s + l;
   return (result == 3 && sizeof(result) == sizeof(long)) ? 0x55 : 0xAA;
}
