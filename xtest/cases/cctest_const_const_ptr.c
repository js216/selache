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
int cctest_const_const_ptr(void)
{
   int x              = 0x42;
   const int *const p = &x;
   return *p; /* 0x42 */
}
