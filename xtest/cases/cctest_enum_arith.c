#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum weights { W_A = 10, W_B = 20, W_C = 30 };

/* @expect 0x3C */
int cctest_enum_arith(void)
{
   enum weights w = W_B;
   return w + W_A + W_C; /* 20+10+30 = 60 = 0x3C */
}
