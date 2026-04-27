#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x12C */
int cctest_deref_write(void)
{
   int a = 100, b = 200;
   int *p = &a;
   *p     = *p + b;
   return a; /* 300 = 0x12C */
}
