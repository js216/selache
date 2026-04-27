#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x41 */
int cctest_pp_char(void)
{
#if 'A' == 65
   return 0x41;
#else
   return 0;
#endif
}
