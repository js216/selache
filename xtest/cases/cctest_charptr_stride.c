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
int cctest_charptr_stride(void)
{
   char arr[4] = {10, 20, 30, 40};
   char *p     = arr;
   p += 2;
   return (*p == 30) ? 0x55 : 0xAA;
}
