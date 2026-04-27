#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x43 */
int cctest_pointer(void)
{
   int x  = 0x42;
   int *p = &x;
   *p     = *p + 1;
   return x; /* 0x43 */
}
