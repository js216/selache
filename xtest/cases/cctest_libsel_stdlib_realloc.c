// SPDX-License-Identifier: MIT
// cctest_libsel_stdlib_realloc.c --- libsel stdlib/realloc per-function selcc
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

void *realloc(void *ptr, size_t size)
{
   struct block_header *h;
   void *np;
   size_t old_sz, cp;
   unsigned char *src, *dst;
   size_t i;
   if (!ptr)
      return malloc(size);
   if (size == 0) {
      free(ptr);
      return 0;
   }
   h      = (struct block_header *)((unsigned char *)ptr -
                               sizeof(struct block_header));
   old_sz = h->size;
   if (old_sz >= size)
      return ptr;
   np = malloc(size);
   if (!np)
      return 0;
   cp  = old_sz < size ? old_sz : size;
   src = (unsigned char *)ptr;
   dst = (unsigned char *)np;
   for (i = 0; i < cp; i++)
      dst[i] = src[i];
   free(ptr);
   return np;
}

int test_main(void)
{

   do {
      char *p = malloc(4);
      if (!p)
         return 0xAA;
      p[0] = 7;
      p    = realloc(p, 16);
      if (!p || p[0] != 7)
         return 0xAA;
   } while (0);
   1;
   return 0x55;
}
