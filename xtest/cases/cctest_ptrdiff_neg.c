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
int cctest_ptrdiff_neg(void)
{
   int arr[5];
   ptrdiff_t d = &arr[1] - &arr[4];
   return (d == -3) ? 0x55 : 0xAA;
}
