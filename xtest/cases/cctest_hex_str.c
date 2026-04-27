#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xC6 */
int cctest_hex_str(void)
{
   const char *s = "\x41\x42\x43"; /* "ABC" */
   return s[0] + s[1] + s[2];      /* 65+66+67 = 198 = 0xC6 */
}
