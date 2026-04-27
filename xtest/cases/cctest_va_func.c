#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int va_sum(int count, ...)
{
   va_list ap;
   va_start(ap, count);
   int s = 0;
   for (int i = 0; i < count; i++)
      s += va_arg(ap, int);
   va_end(ap);
   return s;
}

/* @expect 0x64 */
int cctest_va_func(void)
{
   return va_sum(4, 10, 20, 30, 40); /* 100 = 0x64 */
}
