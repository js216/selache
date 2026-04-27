#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x20 */
int cctest_bool_as_index(void)
{
   int arr[2] = {0x10, 0x20};
   _Bool b    = 42;
   return arr[b];
}
