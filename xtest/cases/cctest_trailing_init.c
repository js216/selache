#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x37 */
int cctest_trailing_init(void)
{
   int arr[4] = {
       10,
       20,
       30,
       40,
   };
