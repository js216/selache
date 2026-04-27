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
int cctest_file_macro(void)
{
   const char *f = __FILE__;
   int r         = 0;
   if (f[0] != '\0')
      r = 1;
   return r; /* 1 */
}
