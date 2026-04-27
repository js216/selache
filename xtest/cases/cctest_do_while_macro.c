#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define SWAP_INTS(a, b)                                                        \
   do {                                                                        \
      int _t = (a);                                                            \
      (a)    = (b);                                                            \
      (b)    = _t;                                                             \
   } while (0)

/* @expect 0x73 */
int cctest_do_while_macro(void)
{
   int x = 3, y = 7;
   SWAP_INTS(x, y);
   return x * 0x10 + y; /* 7*16+3 = 115 = 0x73 */
}
