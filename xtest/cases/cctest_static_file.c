#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int file_scope_var = 0x33;

/* @expect 0x33 */
int cctest_static_file(void)
{
   int r          = file_scope_var;
   file_scope_var = 0x33; /* keep idempotent */
   return r;              /* 0x33 */
}
