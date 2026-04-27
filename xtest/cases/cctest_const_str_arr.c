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
int cctest_const_str_arr(void)
{
   const char *const names[] = {"ab", "cd", "ef", "gh"};
   int count                 = 0;
   for (int i = 0; i < 4; i++)
      if (names[i][0] != 0)
         count++;
   return count; /* 4 */
}
