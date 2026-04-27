#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x12C */
int cctest_uchar_arith(void)
{
   unsigned char a = 200;
   unsigned char b = 100;
   int sum         = a + b; /* promoted to int: 300 */
   return sum;              /* 300 = 0x12C */
}
