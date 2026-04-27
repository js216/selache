#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x5678 */
int cctest_narrow_trunc(void)
{
   int x   = 0x12345678;
   short s = (short)x;
   /* Implementation-defined but typically keeps low 16 bits */
   return s & 0xFFFF;
}
