#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.a = 0x0A;
   bf.b = 0x05;
   return bf.a + bf.b; /* 10+5 = 15 = 0x0F */
}

struct fwd_node;
static int fwd_val(struct fwd_node *p);

struct fwd_node {
   int val;
   struct fwd_node *next;
};

static int fwd_val(struct fwd_node *p)
{
   return p->val;
}

/* @expect 0x44 */
int cctest_fwd_struct(void)
{
   struct fwd_node n;
   n.val  = 0x44;
   n.next = 0;
   return fwd_val(&n); /* 0x44 */
}
