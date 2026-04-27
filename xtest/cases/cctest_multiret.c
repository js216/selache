#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int multiret(int x)
{
   if (x < 0)
      return -x;
   if (x == 0)
      return 1;
   if (x > 100) {
      int y = x / 2;
      return y;
   }
   return x;
}

/* @expect 0x6A */
int cctest_multiret(void)
{
   return multiret(-5) + multiret(0) + multiret(200); /* 5+1+100=106 = 0x6A */
}
