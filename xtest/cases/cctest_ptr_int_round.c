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
int cctest_ptr_int_round(void)
{
   int x       = 0x42;
   int *p      = &x;
   uintptr_t u = (uintptr_t)p;
   int *q      = (int *)u;
   return *q;
}
