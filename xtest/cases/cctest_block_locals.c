#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_block_locals(void)
{
   int r    = 0;
   int flag = 1;
   if (flag) {
      int x = 10;
      r += x;
   } else {
      int x = 20;
      r += x;
   }
   {
      int x = 5;
      r += x;
   }
   return r; /* 10+5 = 15 = 0xF */
}
