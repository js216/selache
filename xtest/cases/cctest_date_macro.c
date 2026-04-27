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
int cctest_date_macro(void)
{
   const char *d = __DATE__;
   return (d[0] != '\0') ? 1 : 0; /* 1 */
}
