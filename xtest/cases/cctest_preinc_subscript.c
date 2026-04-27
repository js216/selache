#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x42 */
int cctest_preinc_subscript(void)
{
   int arr[4] = {0x10, 0x20, 0x42, 0x80};
   int i      = 1;
   return arr[++i]; /* i=2, arr[2]=0x42 */
}
