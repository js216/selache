#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int big_switch(int x)
{
   switch (x) {
      case 0: return 0x10;
      case 1: return 0x11;
      case 2: return 0x12;
      case 3: return 0x13;
      case 4: return 0x14;
      case 5: return 0x15;
      case 6: return 0x16;
      case 7: return 0x17;
      case 8: return 0x18;
      case 9: return 0x19;
      default: return 0xFF;
   }
}

/* @expect 0x17 */
int cctest_big_switch(void)
{
   return big_switch(7); /* 0x17 */
}
