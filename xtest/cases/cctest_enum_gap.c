#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum sparse { SP_LO = 1, SP_HI = 1000, SP_NEG = -500 };

/* @expect 0x1F5 */
int cctest_enum_gap(void)
{
   return SP_HI + SP_NEG + SP_LO; /* 1000 - 500 + 1 = 501 = 0x1F5 */
}
