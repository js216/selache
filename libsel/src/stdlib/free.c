/* SPDX-License-Identifier: MIT */
/* free.c --- Free allocated memory */
/* Copyright (c) 2026 Jakob Kastelic */

#include "heap_internal.h"

__attribute__((weak)) void free(void *ptr)
{
    struct block_header *h;
    struct block_header *next;
    unsigned char *p;

    if (!ptr)
        return;

    h = (struct block_header *)((unsigned char *)ptr - sizeof(struct block_header));
    h->used = 0;

    /* coalesce adjacent free blocks */
    p = sel_heap;
    while (p < sel_heap + HEAP_SIZE) {
        h = (struct block_header *)p;
        next = (struct block_header *)(p + sizeof(struct block_header) + h->size);
        if ((unsigned char *)next < sel_heap + HEAP_SIZE && !h->used && !next->used) {
            h->size += sizeof(struct block_header) + next->size;
            continue;
        }
        p += sizeof(struct block_header) + h->size;
    }
}
