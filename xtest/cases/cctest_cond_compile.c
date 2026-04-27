#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define CCTEST_COND_VAL 2

/* @expect 0x20 */
int cctest_cond_compile(void)
{
#if CCTEST_COND_VAL == 1
   return 0x10;
#elif CCTEST_COND_VAL == 2
   return 0x20;
#else
   return 0x30;
#endif
}
