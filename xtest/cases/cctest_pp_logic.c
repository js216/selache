#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define PP_X 1
#define PP_Y 0

/* @expect 0x55 */
int cctest_pp_logic(void)
{
#if defined(PP_X) && !defined(PP_Z) && (PP_X > PP_Y)
   return 0x55;
#else
   return 0xAA;
#endif
}
