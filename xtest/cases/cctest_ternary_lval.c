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
int cctest_ternary_lval(void)
{
   int a = 1, b = 2;
   int sel          = 0;
   *(sel ? &a : &b) = 99;
   return a + b; /* 1 + 99 = 100 = 0x64 */
}
