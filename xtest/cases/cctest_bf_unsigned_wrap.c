#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return (int)sizeof(enum e); /* sizeof(int) = 4 */
}

/* @expect 0x07 */
int cctest_bf_unsigned_wrap(void)
{
   struct {
      unsigned int v : 3;
   } s;
