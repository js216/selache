#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x77 */
int cctest_void_ptr(void)
{
   int x    = 0x77;
   void *vp = &x;
   int *ip  = (int *)vp;
   return *ip; /* 0x77 */
}
