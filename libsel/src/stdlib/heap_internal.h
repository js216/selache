/* SPDX-License-Identifier: MIT */
/* heap_internal.h --- Shared heap state for malloc/free/calloc/realloc */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef LIBSEL_HEAP_INTERNAL_H
#define LIBSEL_HEAP_INTERNAL_H

#include "stddef.h"

#define HEAP_SIZE (128 * 1024)

struct block_header {
    size_t size;
    int used;
};

extern unsigned char sel_heap[HEAP_SIZE];
extern int sel_heap_initialized;

void sel_heap_init(void);

#endif
