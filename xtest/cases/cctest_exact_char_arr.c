#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xD7 */
int cctest_exact_char_arr(void)
{
   char s[5] = "hello"; /* fills all 5 bytes, no room for NUL */
   return s[0] + s[4];  /* 'h'+'o' = 104+111 = 215 = 0xD7 */
}
