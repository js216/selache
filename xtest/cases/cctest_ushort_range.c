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
int cctest_ushort_range(void)
{
   unsigned short s = 65535;
   return (s == 65535) ? 0x55 : 0xAA;
}
