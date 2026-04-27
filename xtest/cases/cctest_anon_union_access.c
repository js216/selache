#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

      struct {
         int x;
         int y;
      };
   };
   struct outer o;
   o.tag = 0;
   o.x   = 10;
   o.y   = 20;
   return o.x + o.y;
}

union ival {
   int i;
   float f;
};

/* @expect 0x42 */
int cctest_anon_union_access(void)
{
   struct mixed {
      int kind;
