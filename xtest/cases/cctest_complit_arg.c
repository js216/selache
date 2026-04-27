#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

      union {
         int ival;
         float fval;
      };
   };
   struct mixed m;
   m.kind = 1;
   m.ival = 0x42;
   return m.ival;
}

static int pair_sum(const int *p)
{
   return p[0] + p[1];
}

/* @expect 0x1E */
int cctest_complit_arg(void)
{
   return pair_sum((const int[]){10, 20});
}
