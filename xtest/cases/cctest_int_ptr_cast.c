#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x77 */
int cctest_int_ptr_cast(void)
{
   int x          = 0x77;
   int *p         = &x;
   unsigned int u = (unsigned int)p;
   int *q         = (int *)u;
   return *q; /* 0x77 */
}
