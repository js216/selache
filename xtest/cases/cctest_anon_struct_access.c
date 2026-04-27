#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return (sizeof(struct padded) >= 5) ? 0x55 : 0xAA;
}

struct inner {
   int val;
};

struct outer {
   struct inner a;
   int b;
};

/* @expect 0x1E */
int cctest_anon_struct_access(void)
{
   struct outer {
      int tag;
