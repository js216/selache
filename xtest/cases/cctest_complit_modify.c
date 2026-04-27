#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x63 */
int cctest_complit_modify(void)
{
   int *p = (int[]){10, 20, 30};
   p[1]   = 99;
   return p[1]; /* 99 = 0x63 */
}
