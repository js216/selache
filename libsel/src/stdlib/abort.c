/* SPDX-License-Identifier: MIT */
/* abort.c --- Abnormal program termination */
/* Copyright (c) 2026 Jakob Kastelic */

extern void _Exit(int);

__attribute__((weak)) void abort(void)
{
    _Exit(134);
}
