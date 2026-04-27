#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MAYBE(x) (0 x + 1)

/* @expect 1 */
int cctest_macro_empty_arg(void)
{
   return MAYBE(); /* (0  + 1) = 1 */
}
