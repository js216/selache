#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x03 */
int cctest_nested_ifdef(void)
{
   int r = 0;
#if 1
   r += 1;
#if 0
    r += 100;
#elif 1
   r += 2;
#else
   r += 200;
#endif
#else
   r += 300;
#endif
   return r; /* 1 + 2 = 3 */
}
