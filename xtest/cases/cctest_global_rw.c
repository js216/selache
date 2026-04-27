#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_gvar = 0;

/* @expect 0x42 */
int cctest_global_rw(void)
{
   cctest_gvar = 0x42;
   return cctest_gvar; /* 0x42 */
}
