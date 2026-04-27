#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define XCOLORS                                                                \
   X(RED, 1)                                                                   \
   X(GREEN, 2)                                                                 \
   X(BLUE, 4)
#define X(name, val) XC_##name = val,

enum xcolor { XCOLORS };

#undef X

/* @expect 7 */
int cctest_xmacro(void)
{
   return XC_RED + XC_GREEN + XC_BLUE; /* 1+2+4 = 7 */
}
