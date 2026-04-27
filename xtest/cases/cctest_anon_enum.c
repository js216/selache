#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x28 */
int cctest_anon_enum(void)
{
   enum { AE_X = 7, AE_Y = 13, AE_Z = 20 };
