#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x03 */
int cctest_null_relational_ops(void)
{
   int x;
   int *p = &x;
   int *n = 0;
   int r  = 0;
   if (p > n || p >= n)
      r += 1; /* non-null > null in flat address space */
   if (!(n > p))
      r += 2;
   return r;
}
