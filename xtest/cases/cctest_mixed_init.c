#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0F */
int cctest_mixed_init(void)
{
   int arr[5] = {1, 2, [3] = 8, 4};
   /* arr[0]=1, arr[1]=2, arr[2]=0 (gap), arr[3]=8, arr[4]=4 */
   return arr[0] + arr[1] + arr[2] + arr[3] +
          arr[4]; /* 1+2+0+8+4 = 15 = 0x0F */
}
