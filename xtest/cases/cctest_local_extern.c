#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int cctest_extern_var = 0x88;

/* @expect 0x88 */
int cctest_local_extern(void)
{
   extern int cctest_extern_var;
   return cctest_extern_var; /* 0x88 */
}
