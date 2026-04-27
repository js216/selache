#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0A */
int cctest_ternary_sideeffect(void)
{
   int y = 5;
   (1) ? (void)(y += 5) : (void)0;
   return y; /* 10 */
}
