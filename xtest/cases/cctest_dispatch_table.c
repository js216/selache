#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

static int helper_mul(int a, int b)
{
   return a * b;
}

struct cmd_entry {
   const char *name;
   int (*fn)(int, int);
};

static int cmd_sub(int a, int b)
{
   return a - b;
}
static const struct cmd_entry cmd_table[] = {
    {"add", helper_add},
    {"mul", helper_mul},
    {"sub", cmd_sub   },
};

/* @expect 0x1A */
int cctest_dispatch_table(void)
{
   int r = 0;
   r += cmd_table[0].fn(3, 4);  /* add: 7 */
   r += cmd_table[1].fn(3, 4);  /* mul: 12 */
   r += cmd_table[2].fn(10, 3); /* sub: 7 */
   return r;                    /* 7+12+7 = 26 = 0x1A */
}
