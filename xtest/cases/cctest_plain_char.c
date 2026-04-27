#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xFF */
int cctest_plain_char(void)
{
   char c = (char)0xFF;
   /* If char is unsigned: c == 255, (int)c == 255 → 0xFF
      If char is signed:   c == -1,  (int)c == -1  → we add 256 = 0xFF */
   int val = (int)c;
   if (val < 0)
      val += 256;
   return val; /* 0xFF either way */
}
