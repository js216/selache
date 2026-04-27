#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_ptr_compound_asgn(void)
{
   int x  = 10;
   int *p = &x;
   *p += 5;
   *p *= 2;
   return x; /* (10+5)*2 = 30 = 0x1E */
}
