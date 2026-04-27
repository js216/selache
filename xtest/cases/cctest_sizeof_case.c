#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x44 */
int cctest_sizeof_case(void)
{
   int x = (int)sizeof(int);
   switch (x) {
      case sizeof(int): return 0x44;
      default: return 0xFF;
   }
}
