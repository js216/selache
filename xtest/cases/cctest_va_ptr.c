#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int va_ptr_sum(int count, ...)
{
   va_list ap;
   va_start(ap, count);
   int s = 0;
   for (int i = 0; i < count; i++) {
      int *p = va_arg(ap, int *);
      s += *p;
   }
   va_end(ap);
   return s;
}

/* @expect 0x3C */
int cctest_va_ptr(void)
{
   int a = 10, b = 20, c = 30;
   return va_ptr_sum(3, &a, &b, &c); /* 60 = 0x3C */
}
