#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x72 */
int cctest_escapes2(void)
{
   char a = '\a';                /* 7  (BEL)  */
   char b = '\b';                /* 8  (BS)   */
   char f = '\f';                /* 12 (FF)   */
   char r = '\r';                /* 13 (CR)   */
   char v = '\v';                /* 11 (VT)   */
   char q = '\?';                /* 63 (question mark) */
   return a + b + f + r + v + q; /* 7+8+12+13+11+63 = 114 = 0x72 */
}
