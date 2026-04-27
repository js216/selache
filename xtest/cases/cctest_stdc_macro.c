#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 1 */
int cctest_stdc_macro(void)
{
#ifdef __STDC__
   return __STDC__; /* 1 */
#else
   return 0;
#endif
}
