#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const int sc_base    = 10;
static const int sc_derived = 10 + 5;

/* @expect 0x19 */
int cctest_const_chain(void)
{
   return sc_base + sc_derived; /* 10+15 = 25 = 0x19 */
}
