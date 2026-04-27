#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_zero_init_array(void)
{
   int arr[100] = {0};
   int ok       = 1;
   for (int i = 0; i < 100; i++)
      if (arr[i] != 0)
         ok = 0;
   return ok ? 0x55 : 0xAA;
}
