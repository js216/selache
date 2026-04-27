#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x6F */
int cctest_switch_in_loop(void)
{
   int r = 0, i;
   for (i = 0; i < 3; i++) {
      switch (i) {
         case 0: r += 1; break;
         case 1: r += 10; break;
         case 2: r += 100; break;
      }
   }
   return r; /* 111 = 0x6F */
}
