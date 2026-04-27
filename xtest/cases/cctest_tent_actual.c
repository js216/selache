#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_tent_then_init;
int cctest_tent_then_init = 0x42;

/* @expect 0x42 */
int cctest_tent_actual(void)
{
   return cctest_tent_then_init; /* 0x42 */
}
