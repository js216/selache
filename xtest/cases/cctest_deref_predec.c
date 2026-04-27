#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x09 */
int cctest_deref_predec(void)
{
   int x  = 10;
   int *p = &x;
   --*p;
   return x; /* 9 */
}
