#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x18 */
int cctest_struct_arr_sizeof(void)
{
   struct sa {
      int a;
      int b[5];
   };
