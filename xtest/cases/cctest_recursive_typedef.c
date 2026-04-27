#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct rtd_node rtd_node_t;

struct rtd_node {
   int val;
   rtd_node_t *next;
};

/* @expect 0x1E */
int cctest_recursive_typedef(void)
{
   rtd_node_t a, b;
   a.val  = 10;
   a.next = &b;
   b.val  = 20;
   b.next = 0;
   return a.val + a.next->val; /* 30 = 0x1E */
}
