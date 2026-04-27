#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x20 */
int cctest_switch_neg(void)
{
   int x = -1;
   switch (x) {
      case -2: return 0x10;
      case -1: return 0x20;
      case 0: return 0x30;
      case 1: return 0x40;
   }
   return 0xFF;
}
