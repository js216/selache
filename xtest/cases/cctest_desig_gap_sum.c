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
int cctest_desig_gap_sum(void)
{
   int a[4] = {[0] = 3, [2] = 7, [3] = 10};
   return a[0] + a[1] + a[2] + a[3]; /* 3+0+7+10 = 20 */
}
