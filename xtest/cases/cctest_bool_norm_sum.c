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
int cctest_bool_norm_sum(void)
{
   _Bool a = 42;
   _Bool b = -100;
   _Bool c = 0;
   _Bool d = 1;
   return (int)(a + b + c + d); /* 1+1+0+1 = 3 */
}
