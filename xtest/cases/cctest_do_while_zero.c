#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define DO_INCR(v)                                                             \
   do {                                                                        \
      (v) += 1;                                                                \
   } while (0)

/* @expect 0x03 */
int cctest_do_while_zero(void)
{
   int x = 0;
   DO_INCR(x);
   DO_INCR(x);
   DO_INCR(x);
   return x;
}
