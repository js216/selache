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
int cctest_ptr_sizes_equal(void)
{
   return (sizeof(void *) == sizeof(int *) && sizeof(int *) == sizeof(char *))
              ? 0x55
              : 0xAA;
}
