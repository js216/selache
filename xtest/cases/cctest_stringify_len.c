#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x03 */
int cctest_stringify_len(void)
{
#define MKSTR(x) #x
   const char *s = MKSTR(abc);
   int len       = 0;
   while (s[len])
      len++;
   return len; /* "abc" -> 3 */
#undef MKSTR
}
