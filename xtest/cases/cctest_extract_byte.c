#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x34 */
int cctest_extract_byte(void)
{
   unsigned int x = 0x12345678u;
   return (int)((x >> 16) & 0xFF);
}
