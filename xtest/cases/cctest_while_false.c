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
int cctest_while_false(void)
{
   int r = 0x55;
   while (0) {
      r = 0;
   }
   return r; /* 0x55 */
}
