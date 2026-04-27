#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x64 */
int cctest_mixed_arith(void)
{
   char a  = 10;
   short b = 20;
   int c   = 30;
   long d  = 40L;
   return (int)(a + b + c + d); /* 100 = 0x64 */
}
