#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int
abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghijk(void)
{
   return 0x63;
}

/* @expect 0x63 */
int cctest_long_ident(void)
{
   return abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghij_abcdefghijk();
}
