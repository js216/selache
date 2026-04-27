#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int va_mixed(int count, ...)
{
   va_list ap;
   va_start(ap, count);
   int iarg = va_arg(ap, int);
   int farg = (int)va_arg(ap, double); /* float promoted to double in varargs */
   int iarg2 = va_arg(ap, int);
   va_end(ap);
   return iarg + farg + iarg2;
}

/* @expect 0x3C */
int cctest_va_mixed(void)
{
   return va_mixed(3, 10, 20.0, 30); /* 10+20+30 = 60 = 0x3C */
}
