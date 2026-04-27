#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x35 */
int cctest_postinc(void)
{
   int i = 3;
   int j = i++;
   int k = ++i;
   return j * 0x10 + k;
}
