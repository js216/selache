#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x04 */
int cctest_sizeof_no_sideeffect(void)
{
   int x  = 0;
   int sz = (int)sizeof(x = 42); /* x = 42 is NOT executed */
   return sz + x;                /* 4 + 0 = 4 */
}
