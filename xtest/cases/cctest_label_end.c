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
int cctest_label_end(void)
{
   int x = 1;
   int r = 0;
   if (x)
      goto skip;
   r = 0x10;
skip:;
   r += 0x55;
   return r; /* 0x55 */
}
