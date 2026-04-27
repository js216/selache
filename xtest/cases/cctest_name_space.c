#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct ns_tag {
   int val;
};

/* @expect 0x0F */
int cctest_name_space(void)
{
   int ns_tag = 5;  /* ordinary name space */
   struct ns_tag s; /* tag name space */
   s.val = ns_tag + 10;
   return s.val; /* 15 = 0x0F */
}
