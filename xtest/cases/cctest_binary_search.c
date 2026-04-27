#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x04 */
int cctest_binary_search(void)
{
   int arr[]  = {2, 5, 8, 13, 21, 34, 55};
   int target = 21;
   int lo = 0, hi = 6, result = -1;
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (arr[mid] == target) {
         result = mid;
         break;
      } else if (arr[mid] < target)
         lo = mid + 1;
      else
         hi = mid - 1;
   }
   return result; /* index 4 */
}
