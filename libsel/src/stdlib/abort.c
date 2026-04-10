/* SPDX-License-Identifier: GPL-3.0 */
/* abort.c --- Abnormal program termination */
/* Copyright (c) 2026 Jakob Kastelic */

extern void _Exit(int);

void abort(void)
{
    _Exit(134);
}
