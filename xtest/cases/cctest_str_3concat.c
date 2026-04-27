#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x07 */
int cctest_str_3concat(void)
{
   const char *s = "ab"
                   "cd"
                   "efg";
   int len       = 0;
   while (s[len])
      len++;
   return len; /* 7 */
}
