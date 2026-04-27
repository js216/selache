#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int inc1(int x)
{
   return x + 1;
}

static int dbl1(int x)
{
   return x * 2;
}

/* @expect 0x0D */
int cctest_fnptr_chain(void)
{
   int (*ops[2])(int);
   ops[0] = inc1;
   ops[1] = dbl1;
   int x  = 5;
   x      = ops[0](x); /* 6 */
   x      = ops[1](x); /* 12 */
   x      = ops[0](x); /* 13 */
   return x;           /* 13 = 0x0D */
}
