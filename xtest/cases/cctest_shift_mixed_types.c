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
int cctest_shift_mixed_types(void)
{
   unsigned int u      = 1u;
   int shift           = 4;
   unsigned int result = u << shift; /* 16 */
   return (result == 16) ? 0x55 : 0xAA;
}
