#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_ext_linkage_var = 0x37;

/* @expect 0x37 */
int cctest_ext_linkage(void)
{
   return cctest_ext_linkage_var;
}
