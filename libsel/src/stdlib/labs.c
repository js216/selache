/* SPDX-License-Identifier: GPL-3.0 */
/* labs.c --- Absolute value of long */
/* Copyright (c) 2026 Jakob Kastelic */

long labs(long n)
{
    return n < 0 ? -n : n;
}
