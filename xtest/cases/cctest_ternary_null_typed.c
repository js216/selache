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
int cctest_ternary_null_typed(void)
{
   int x  = 42;
   int *p = (1) ? &x : (int *)0; /* both branches are int* */
   return (*p == 42) ? 0x55 : 0xAA;
}
