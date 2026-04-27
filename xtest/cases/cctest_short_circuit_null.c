#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x01 */
int cctest_short_circuit_null(void)
{
   int *p = 0;
   int r  = (p != 0) && (*p == 42);
   return (r == 0) ? 1 : 0;
}
