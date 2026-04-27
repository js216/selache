#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x14 */
int cctest_desig_later_wins(void)
{
   int a[3] = {[0] = 10, [1] = 99, [1] = 20, [2] = 30};
   return a[1]; /* 20 overrides 99 */
}
