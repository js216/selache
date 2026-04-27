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
int cctest_array_addr_const(void)
{
   int arr[3] = {10, 20, 30};
   int *p     = arr; /* arr decays to &arr[0] */
   return (*p == 10) ? 0x55 : 0xAA;
}
