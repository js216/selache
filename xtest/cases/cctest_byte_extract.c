#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x56 */
int cctest_byte_extract(void)
{
   unsigned int x = 0x12345678u;
   int b0         = (x >> 0) & 0xFF;  /* 0x78 */
   int b1         = (x >> 8) & 0xFF;  /* 0x56 */
   int b2         = (x >> 16) & 0xFF; /* 0x34 */
   int b3         = (x >> 24) & 0xFF; /* 0x12 */
   return b1;                         /* 0x56 */
}
