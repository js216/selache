#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x30 */
int cctest_goto_multi_block(void)
{
   int r = 0;
   r += 0x10;
   goto skip1;
   r += 0xFF;
skip1:
   r += 0x10;
   goto skip2;
   r += 0xFF;
skip2:
   r += 0x10;
   return r; /* 0x10+0x10+0x10 = 0x30 */
}
