#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

/* @expect 0x111 */
int cctest_cast_ret(void)
{
   return (short)helper_add(0x100, 0x10) + 1;
   /* helper_add returns 0x110 = 272, cast to short: 0x110, +1 = 0x111 */
   /* On 32-bit SHARC short is 16-bit: 0x110 fits, so 0x111 = 273 */
}
