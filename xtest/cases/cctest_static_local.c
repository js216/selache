#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int static_counter(void)
{
   static int n = 0;
   n++;
   return n;
}

/* @expect 1 */
int cctest_static_local(void)
{
   int a = static_counter();
   int b = static_counter();
   return b - a; /* always 1 */
}
