#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum color { RED, GREEN = 5, BLUE };

/* @expect 0x0B */
int cctest_enum(void)
{
   return GREEN + BLUE;
}
