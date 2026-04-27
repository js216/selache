#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_void_ptr_cast_back(void)
{
   int x   = 42;
   void *v = &x;
   int *p  = (int *)v;
   *p      = 0x55;
   return x;
}
