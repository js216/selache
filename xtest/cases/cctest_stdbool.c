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
int cctest_stdbool(void)
{
   bool a = true;
   bool b = false;
   bool c = !b;
   int r  = 0;
   if (a == true)
      r += 1;
   if (b == false)
      r += 2;
   if (c)
      r += 4;
   if (a && c)
      r += 8;
   return r; /* 1+2+4+8 = 15 = 0x0F */
}
