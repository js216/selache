#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return A + B + C + D; /* 0+1+2+3=6 */
}

/* @expect 0x0B */
int cctest_enum_gap_resume(void)
{
   enum e_gap2 { P2 = 3, Q2, R2 = 10 };
