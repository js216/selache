#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 2 */
int cctest_switch_char(void)
{
   char c = 'B';
   switch (c) {
      case 'A': return 1;
      case 'B': return 2;
      case 'C': return 3;
      default: return 0;
   }
}
