#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0 */
int cctest_empty_loop(void)
{
   int n = 5;
   while (--n > 0)
      ;
   return n; /* 0 */
}
