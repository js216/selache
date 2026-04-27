#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x03 */
int cctest_default_first(void)
{
   int x = 42;
   switch (x) {
      default: return 3;
      case 1: return 1;
      case 2: return 2;
   }
}
