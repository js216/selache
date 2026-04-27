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
int cctest_if_zero(void)
{
   int r = 0;
#if 0
  r = 0xFF; /* dead code */
#endif
#if 1
   r = 0x42;
#endif
   return r; /* 0x42 */
}
