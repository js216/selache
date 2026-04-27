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
int cctest_ptrdiff_sign(void)
{
   int arr[10];
   ptrdiff_t d = &arr[2] - &arr[7];
   return (d == -5) ? 0x55 : 0xAA;
}
