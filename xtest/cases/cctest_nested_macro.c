#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define INNER_M(x) ((x) + 1)
#define OUTER_M(x) (INNER_M(x) * 2)

/* @expect 0x0C */
int cctest_nested_macro(void)
{
   return OUTER_M(5); /* (5+1)*2 = 12 = 0xC */
}
