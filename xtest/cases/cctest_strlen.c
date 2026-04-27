#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 6 */
int cctest_strlen(void)
{
   const char *s = "abcdef";
   int len       = 0;
   while (*s++)
      len++;
   return len; /* 6 */
}
