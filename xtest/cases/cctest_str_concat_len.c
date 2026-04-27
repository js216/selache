#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x05 */
int cctest_str_concat_len(void)
{
   const char *s = "ab"
                   "cde";
   int len       = 0;
   while (s[len])
      len++;
   return len; /* "abcde" = 5 */
}
