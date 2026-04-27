#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum small_enum { SA, SB, SC };

/* @expect 4 */
int cctest_sizeof_enum(void)
{
   return (int)sizeof(enum small_enum); /* 4 on SHARC */
}
