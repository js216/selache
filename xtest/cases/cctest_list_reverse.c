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

/* @expect 0x03 */
int cctest_list_reverse(void)
{
   struct node {
      int val;
      struct node *next;
   };
   struct node c     = {3, 0};
   struct node b     = {2, &c};
   struct node a     = {1, &b};
   struct node *prev = 0, *curr = &a, *next;
   while (curr) {
      next       = curr->next;
      curr->next = prev;
      prev       = curr;
      curr       = next;
   }
   /* Now prev points to reversed list: 3->2->1->null */
   return prev->val; /* 3 */
}
