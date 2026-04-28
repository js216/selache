// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_free.c --- libsel stdlib/free per-function selcc test
// Copyright (c) 2026 Jakob Kastelic

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

void free(void *ptr)
{
   struct block_header *h, *nx;
   unsigned char *p;
   if (!ptr)
      return;
   h       = (struct block_header *)((unsigned char *)ptr -
                               sizeof(struct block_header));
   h->used = 0;
   p       = sel_heap;
   while (p < sel_heap + HEAP_SIZE) {
      h  = (struct block_header *)p;
      nx = (struct block_header *)(p + sizeof(struct block_header) + h->size);
      if ((unsigned char *)nx < sel_heap + HEAP_SIZE && !h->used && !nx->used) {
         h->size += sizeof(struct block_header) + nx->size;
         continue;
      }
      p += sizeof(struct block_header) + h->size;
   }
}

int test_main(void)
{

   do {
      void *p = malloc(16);
      if (!p)
         return 0xAA;
      free(p);
      void *q = malloc(16);
      if (!q)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
