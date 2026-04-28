// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_calloc.c --- libsel stdlib/calloc per-function selcc
// test Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <stddef.h>
#include <stdint.h>

#define HEAP_SIZE (4096)

struct block_header {
   size_t size;
   int used;
};

static unsigned char sel_heap[HEAP_SIZE];
static int sel_heap_initialized = 0;

static void sel_heap_init(void)
{
   struct block_header *h = (struct block_header *)sel_heap;
   h->size                = HEAP_SIZE - sizeof(struct block_header);
   h->used                = 0;
   sel_heap_initialized   = 1;
}

void *malloc(size_t size)
{
   struct block_header *h;
   unsigned char *p;
   size_t total;
   if (size == 0)
      return 0;
   if (!sel_heap_initialized)
      sel_heap_init();
   size = (size + sizeof(size_t) - 1) & ~(sizeof(size_t) - 1);
   p    = sel_heap;
   while (p < sel_heap + HEAP_SIZE) {
      h = (struct block_header *)p;
      if (!h->used && h->size >= size) {
         total = sizeof(struct block_header) + size;
         if (h->size > size + sizeof(struct block_header) + sizeof(size_t)) {
            struct block_header *nx = (struct block_header *)(p + total);
            nx->size                = h->size - total;
            nx->used                = 0;
            h->size                 = size;
         }
         h->used = 1;
         return p + sizeof(struct block_header);
      }
      p += sizeof(struct block_header) + h->size;
   }
   return 0;
}

void *calloc(size_t nm, size_t size)
{
   size_t total;
   unsigned char *p;
   size_t i;
   if (nm == 0 || size == 0)
      return 0;
   total = nm * size;
   if (nm != 0 && total / nm != size)
      return 0;
   p = malloc(total);
   if (!p)
      return 0;
   for (i = 0; i < total; i++)
      p[i] = 0;
   return p;
}

int test_main(void)
{

   do {
      char *p = calloc(8, 1);
      if (!p)
         return 0xAA;
      for (int i = 0; i < 8; i++)
         if (p[i] != 0)
            return 0xAA;
   } while (0);
   1;
   return 0x55;
}
