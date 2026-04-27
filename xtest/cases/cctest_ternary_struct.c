#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct tern_s {
   int a;
   int b;
};

/* @expect 0x46 */
int cctest_ternary_struct(void)
{
   struct tern_s x, y;
   x.a             = 10;
   x.b             = 20;
   y.a             = 30;
   y.b             = 40;
   int cond        = 0;
   struct tern_s r = cond ? x : y;
   return r.a + r.b; /* 30+40 = 70 = 0x46 */
}
