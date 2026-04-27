#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 3 */
int cctest_ll_array(void)
{
   long long arr[3];
   arr[0] = 1LL << 33;
   arr[1] = 1LL << 34;
   arr[2] = arr[0] + arr[1];
   return (int)(arr[2] >> 33); /* 0x600000000 >> 33 = 3 */
}
