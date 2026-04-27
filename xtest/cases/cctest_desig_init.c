#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x80 */
int cctest_desig_init(void)
{
   int arr[5] = {[2] = 0x30, [4] = 0x50};
   return arr[2] + arr[4]; /* 0x80 */
}
