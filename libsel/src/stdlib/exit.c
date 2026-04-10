/* SPDX-License-Identifier: MIT */
/* exit.c --- Normal program termination with cleanup */
/* Copyright (c) 2026 Jakob Kastelic */

#include "exit_internal.h"

extern void _Exit(int);

void exit(int status)
{
    int i;
    for (i = sel_atexit_count - 1; i >= 0; i--)
        sel_atexit_funcs[i]();
    _Exit(status);
}
