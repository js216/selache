#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return s.a | s.b;
}

/* @expect 0x08 */
int cctest_ternary_dim(void)
{
   int arr[sizeof(int) == 4 ? 2 : 4];
   return (int)sizeof(arr); /* 2 * 4 = 8 */
}
