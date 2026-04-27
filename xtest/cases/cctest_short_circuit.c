#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0B */
int cctest_short_circuit(void)
{
   int x = 0, y = 5;
   if (y > 0 && ++x > 0)
      y = 10;
   return x + y; /* 1 + 10 = 11 = 0xB */
}
