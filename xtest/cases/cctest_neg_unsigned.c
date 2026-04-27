#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_neg_unsigned(void)
{
   unsigned int a = 1;
   unsigned int b = -a;   /* 0xFFFFFFFF */
   return (int)(b >> 28); /* 0xF = 15 */
}
