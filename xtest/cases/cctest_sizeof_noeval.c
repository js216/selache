#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x54 */
int cctest_sizeof_noeval(void)
{
   int x = 5;
   int s = (int)sizeof(x++);
   return x * 0x10 + s; /* x still 5; s=4 → 0x54 */
}
