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
int cctest_intptr(void)
{
   int x       = 0x77;
   intptr_t ip = (intptr_t)&x;
   int *p      = (int *)ip;
   return *p; /* 0x77 */
}
