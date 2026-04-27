#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xD9 */
int cctest_str_esc_concat(void)
{
   const char *s = "A\t"
                   "B\n"
                   "C";
   /* 'A'=65 '\t'=9 'B'=66 '\n'=10 'C'=67 → 65+9+66+10+67 = 217 = 0xD9 */
   return s[0] + s[1] + s[2] + s[3] + s[4];
}
