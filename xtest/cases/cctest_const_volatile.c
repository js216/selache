#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x33 */
int cctest_const_volatile(void)
{
   volatile int x        = 0x33;
   const volatile int *p = &x;
   return *p; /* 0x33 */
}
