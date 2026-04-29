/* SPDX-License-Identifier: MIT */
/* malloc.c --- Allocate memory from a static heap */
/* Copyright (c) 2026 Jakob Kastelic */

#include "heap_internal.h"

/* Park the heap in L2 SRAM as uninitialised (NO_INIT) data. The
   default placement would land it in seg_dmda (initialised data),
   which the loader writes literally into the .ldr image --- and the
   ADSP-21569 boot ROM corrupts inits larger than ~32 KiB. The
   l2_bss region in libsel/link.ldf already maps seg_l2_bss to L2 with
   NO_INIT, so the heap costs no boot-image bytes there. */
#pragma section("seg_l2_bss", NO_INIT)
unsigned char sel_heap[HEAP_SIZE];
#pragma section("seg_dmda")
int sel_heap_initialized = 0;

__attribute__((weak)) void sel_heap_init(void)
{
    struct block_header *h = (struct block_header *)sel_heap;
    h->size = HEAP_SIZE - sizeof(struct block_header);
    h->used = 0;
    sel_heap_initialized = 1;
}

__attribute__((weak)) void *malloc(size_t size)
{
    struct block_header *h;
    unsigned char *p;
    size_t total;

    if (size == 0)
        return NULL;

    if (!sel_heap_initialized)
        sel_heap_init();

    /* align size to sizeof(size_t) boundary */
    size = (size + sizeof(size_t) - 1) & ~(sizeof(size_t) - 1);

    p = sel_heap;
    while (p < sel_heap + HEAP_SIZE) {
        h = (struct block_header *)p;
        if (!h->used && h->size >= size) {
            /* split if remaining space is large enough for another block */
            total = sizeof(struct block_header) + size;
            if (h->size > size + sizeof(struct block_header) + sizeof(size_t)) {
                struct block_header *next;
                next = (struct block_header *)(p + total);
                next->size = h->size - total;
                next->used = 0;
                h->size = size;
            }
            h->used = 1;
            return p + sizeof(struct block_header);
        }
        p += sizeof(struct block_header) + h->size;
    }

    return NULL;
}
