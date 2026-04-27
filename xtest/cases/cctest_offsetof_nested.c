#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct off_nested {
   int a;

   struct {
      int x;
      int y;
   } b;

   int c;
};

/* @expect 0x0C */
int cctest_offsetof_nested(void)
{
   return (int)offsetof(struct off_nested,
                        c); /* a(4) + b.x(4) + b.y(4) = 12 = 0x0C */
}
