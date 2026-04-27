#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x42 */
int cctest_do_zero(void)
{
   int r = 0;
   do {
      r = 0x42;
   } while (0);
   return r; /* 0x42 */
}
