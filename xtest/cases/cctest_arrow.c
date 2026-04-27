#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct arrow_s {
   int x;
   int y;
};

/* @expect 0x30 */
int cctest_arrow(void)
{
   struct arrow_s s;
   s.x               = 0x10;
   s.y               = 0x20;
   struct arrow_s *p = &s;
   return p->x + p->y; /* 0x30 */
}
