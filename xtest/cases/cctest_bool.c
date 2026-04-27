#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 1 */
int cctest_bool(void)
{
   _Bool a = 1, b = 0;
   _Bool c = a && !b;
   return (int)c; /* 1 */
}
