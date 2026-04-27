#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x42 */
int cctest_triple_ptr(void)
{
   int x      = 0x42;
   int *p     = &x;
   int **pp   = &p;
   int ***ppp = &pp;
   return ***ppp;
}
