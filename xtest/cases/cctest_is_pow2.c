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
int cctest_is_pow2(void)
{
   int r = 1;
   for (int i = 0; i < 10; i++) {
      int n = 1 << i;
      if ((n & (n - 1)) != 0)
         r = 0;
   }
   return r ? 0x55 : 0xAA;
}
