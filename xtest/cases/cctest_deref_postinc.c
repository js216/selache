#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0B */
int cctest_deref_postinc(void)
{
   int x  = 10;
   int *p = &x;
   (*p)++;
   return x; /* 11 */
}
