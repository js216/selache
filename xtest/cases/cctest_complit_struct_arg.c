#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct cl_pair {
   int a;
   int b;
};

static int cl_sum(struct cl_pair p)
{
   return p.a + p.b;
}

/* @expect 0x1E */
int cctest_complit_struct_arg(void)
{
   return cl_sum((struct cl_pair){10, 20});
}
