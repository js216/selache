#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define EMPTY_MACRO

/* @expect 5 */
int cctest_empty_macro(void)
{
   int x = 5 EMPTY_MACRO;
   return x; /* 5 */
}
