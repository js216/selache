#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.x = 0x10;
   s.y = 0x20;
   return s.x + s.y; /* 0x30 */
}

struct s2 {
   int a;
   int b;
};

/* @expect 3 */
int cctest_sign_cast_bits(void)
{
   int s          = -1;
   unsigned int u = (unsigned int)s;
   int r          = 0;
   if (u == 0xFFFFFFFFu)
      r += 1;
   int s2 = (int)u;
   if (s2 == -1)
      r += 2;
   return r; /* 1+2 = 3 */
}
