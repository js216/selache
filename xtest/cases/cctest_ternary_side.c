#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_ternary_side(void)
{
   int a = 0, b = 0;
   int cond = 1;
   cond ? (a = 10) : (b = 20);
   return a + b; /* 10 = 0xA */
}
