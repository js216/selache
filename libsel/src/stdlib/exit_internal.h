/* SPDX-License-Identifier: GPL-3.0 */
/* exit_internal.h --- Shared state for exit/atexit handlers */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef LIBSEL_EXIT_INTERNAL_H
#define LIBSEL_EXIT_INTERNAL_H

#define ATEXIT_MAX 32

typedef void (*atexit_func)(void);

extern atexit_func sel_atexit_funcs[ATEXIT_MAX];
extern int sel_atexit_count;

#endif
