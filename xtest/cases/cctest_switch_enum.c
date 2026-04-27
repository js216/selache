#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum dir { UP, DOWN, LEFT, RIGHT };

/* @expect 3 */
int cctest_switch_enum(void)
{
   enum dir d = LEFT;
   switch (d) {
      case UP: return 1;
      case DOWN: return 2;
      case LEFT: return 3;
      case RIGHT: return 4;
   }
   return 0;
}
