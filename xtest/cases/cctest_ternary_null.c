#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x2A */
int cctest_ternary_null(void)
{
   int x    = 42;
   int *p   = &x;
   int cond = 1;
   int *q   = cond ? p : (int *)0;
   return *q; /* 42 = 0x2A */
}
