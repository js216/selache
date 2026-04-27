#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x14 */
int cctest_scope_hide(void)
{
   int x = 10;
   {
      int x = 20;
      return x; /* 20 = 0x14 */
   }
}
