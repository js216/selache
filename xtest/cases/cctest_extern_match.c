#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int g_extern_match = 0x77;

/* @expect 0x77 */
int cctest_extern_match(void)
{
   extern int g_extern_match;
   return g_extern_match;
}
