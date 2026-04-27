#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xAB */
int cctest_bitshift_combo(void)
{
   unsigned int x = 0xABCD1234u;
   return (int)((x >> 24) & 0xFF); /* top byte = 0xAB */
}
