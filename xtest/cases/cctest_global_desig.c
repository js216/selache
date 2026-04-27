#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static struct {
   int a;
   int b;
   int c;
} g_desig_struct = {.c = 30, .a = 10};

/* @expect 0x28 */
int cctest_global_desig(void)
{
   return g_desig_struct.a + g_desig_struct.b + g_desig_struct.c;
   /* 10 + 0 + 30 = 40 = 0x28 */
}
