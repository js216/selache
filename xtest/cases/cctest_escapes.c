#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x8C */
int cctest_escapes(void)
{
   char a = '\0';        /* 0 */
   char b = '\t';        /* 9 */
   char c = '\\';        /* 92 */
   char d = '\'';        /* 39 */
   return a + b + c + d; /* 0+9+92+39 = 140 = 0x8C */
}
