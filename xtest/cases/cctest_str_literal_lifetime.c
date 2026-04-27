#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_str_literal_lifetime(void)
{
   const char *p;
   {
      p = "hello"; /* string literal persists past block */
   }
   return (p[0] == 'h') ? 0x55 : 0xAA;
}
