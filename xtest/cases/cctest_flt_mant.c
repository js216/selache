#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_flt_mant(void)
{
   return FLT_MANT_DIG + FLT_DIG; /* 24 + 6 = 30 = 0x1E */
}
