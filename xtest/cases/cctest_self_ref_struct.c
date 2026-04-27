#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_self_ref_struct(void)
{
   struct list {
      int val;
      struct list *next;
   };
   struct list c  = {10, 0};
   struct list b  = {10, &c};
   struct list a  = {10, &b};
   int sum        = 0;
   struct list *p = &a;
   while (p) {
      sum += p->val;
      p = p->next;
   }
   return sum; /* 30 */
}
