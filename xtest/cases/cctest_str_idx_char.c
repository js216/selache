#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return s.a + s.b + s.c;
}

/* @expect 0x65 */
int cctest_str_idx_char(void)
{
   const char *s = "hello";
   return s[1]; /* 'e' */
}
