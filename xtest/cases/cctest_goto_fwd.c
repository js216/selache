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
int cctest_goto_fwd(void)
{
   int r = 0;
   int x = 1;
   if (x)
      goto skip;
   r = 0xFF;
skip:
   r += 0x42;
   return r; /* 0x42 */
}
