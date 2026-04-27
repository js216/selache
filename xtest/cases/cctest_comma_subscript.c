#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x28 */
int cctest_comma_subscript(void)
{
   int arr[5];
   arr[0]    = 10;
   arr[1]    = 20;
   arr[2]    = 30;
   arr[3]    = 40;
   arr[4]    = 50;
   int dummy = 0;
   return arr[(dummy = 99, 3)]; /* comma evaluates dummy=99, result is 3 →
                                   arr[3] = 40 = 0x28 */
}
