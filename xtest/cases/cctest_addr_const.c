#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int g_addr_target = 0x55;
static int *g_addr_ptr   = &g_addr_target;

/* @expect 0x55 */
int cctest_addr_const(void)
{
   return *g_addr_ptr; /* 0x55 */
}
