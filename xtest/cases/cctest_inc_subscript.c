#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x46 */
int cctest_inc_subscript(void)
{
   int arr[4];
   arr[0] = 10;
   arr[1] = 20;
   arr[2] = 30;
   arr[3] = 40;
   int i  = 0;
   int a  = arr[i++]; /* arr[0]=10, i becomes 1 */
   int b  = arr[i++]; /* arr[1]=20, i becomes 2 */
   int c  = arr[++i]; /* i becomes 3, arr[3]=40 */
   return a + b + c;  /* 10+20+40 = 70 = 0x46 */
}
