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
   int key;
   int val;
} g_kvtable[4] = {
    {1, 10},
    {2, 20}
    /* entries [2] and [3] are zero-initialized */
};

/* @expect 0x1E */
int cctest_global_arr_struct(void)
{
   return g_kvtable[0].val + g_kvtable[1].val + g_kvtable[2].val +
          g_kvtable[3].key;
   /* 10 + 20 + 0 + 0 = 30 = 0x1E */
}
