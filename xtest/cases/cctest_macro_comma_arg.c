#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return ONLY; /* 0x33 */
}

#define FIRST_ARG(x) (x)

/* @expect 3 */
int cctest_macro_comma_arg(void)
{
   /* The argument (1, 2, 3) is a single macro arg due to outer parens */
   return FIRST_ARG((1, 2, 3)); /* comma operator: result is 3 */
}
