#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x05 */
int cctest_past_end_cmp(void)
{
   int arr[5];
   int *end  = &arr[5]; /* one past end: valid for comparison */
   int count = 0;
   for (int *p = arr; p != end; p++)
      count++;
   return count;
}
