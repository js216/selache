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
int cctest_pp_arith(void)
{
#if (1 << 4) == 16 && (100 / 3) == 33
   return 0x55;
#else
   return 0xAA;
#endif
}
