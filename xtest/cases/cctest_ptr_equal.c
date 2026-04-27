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
int cctest_ptr_equal(void)
{
   int x  = 42;
   int *p = &x;
   int *q = &x;
   return (p == q) ? 0x55 : 0xAA; /* 0x55 */
}
