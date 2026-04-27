#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_char_cmp(void)
{
   signed char a   = -1;
   unsigned char b = 255;
   int r           = 0;
   /* Both promoted to int: a becomes -1, b becomes 255 */
   if ((int)a < (int)b)
      r += 1; /* -1 < 255 → true */
   if ((int)a != (int)b)
      r += 2; /* -1 != 255 → true */
   return r;  /* 1+2 = 3 */
}
