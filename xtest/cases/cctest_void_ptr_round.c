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
int cctest_void_ptr_round(void)
{
   int x   = 0x42;
   void *v = &x;
   int *p  = (int *)v;
   return *p;
}
