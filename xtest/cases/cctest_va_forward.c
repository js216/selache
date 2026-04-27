#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int va_inner(int count, va_list ap)
{
   int s = 0;
   for (int i = 0; i < count; i++)
      s += va_arg(ap, int);
   return s;
}

static int va_outer(int count, ...)
{
   va_list ap;
   va_start(ap, count);
   int r = va_inner(count, ap);
   va_end(ap);
   return r;
}

/* @expect 0x64 */
int cctest_va_forward(void)
{
   return va_outer(4, 10, 20, 30, 40); /* 100 = 0x64 */
}
