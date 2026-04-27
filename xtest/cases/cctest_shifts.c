#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x94 */
int cctest_shifts(void)
{
   return (1 << 6) + (0x200 >> 3) + (5 << 2);
}
