#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 4 */
int cctest_past_end(void)
{
   int arr[4];
   int *end  = &arr[4]; /* valid for comparison */
   int *p    = &arr[0];
   int count = 0;
   while (p != end) {
      count++;
      p++;
   }
   return count; /* 4 */
}
