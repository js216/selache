#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct node {
   int val;
   struct node *next;
};

/* @expect 6 */
int cctest_recursive_struct(void)
{
   struct node a, b, c;
   a.val          = 1;
   a.next         = &b;
   b.val          = 2;
   b.next         = &c;
   c.val          = 3;
   c.next         = 0;
   int s          = 0;
   struct node *p = &a;
   while (p) {
      s += p->val;
      p = p->next;
   }
   return s; /* 6 */
}
