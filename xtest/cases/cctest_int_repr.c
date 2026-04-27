#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xAA */
int cctest_int_repr(void)
{
   int x            = 0x55AA;
   unsigned char *p = (unsigned char *)&x;
   /* SHARC is little-endian for char-size-8 */
   return p[0]; /* low byte = 0xAA */
}
