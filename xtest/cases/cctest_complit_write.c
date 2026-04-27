#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x64 */
int cctest_complit_write(void)
{
   int *p = (int[]){10, 20, 30};
   p[1]   = 100;
   return p[1];
}
