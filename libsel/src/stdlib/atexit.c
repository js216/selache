/* SPDX-License-Identifier: GPL-3.0 */
/* atexit.c --- Register exit handlers */
/* Copyright (c) 2026 Jakob Kastelic */

#include "exit_internal.h"

atexit_func sel_atexit_funcs[ATEXIT_MAX];
int sel_atexit_count;

int atexit(void (*func)(void))
{
    if (sel_atexit_count >= ATEXIT_MAX)
        return -1;
    sel_atexit_funcs[sel_atexit_count] = func;
    sel_atexit_count++;
    return 0;
}
