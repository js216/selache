#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_struct_chain_assign(void)
{
   struct p2 {
      int x;
      int y;
   };
   struct p2 a = {1, 2}, b, c;
   c = b = a; /* chained assignment */
   return (c.x == 1 && c.y == 2 && b.x == 1) ? 0x55 : 0xAA;
}
