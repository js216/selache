#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x32 */
int cctest_desig_override(void)
{
   int arr[3] = {[0] = 10, [1] = 20, [0] = 30}; /* arr[0] overridden to 30 */
   return arr[0] + arr[1];                      /* 30+20 = 50 = 0x32 */
}
