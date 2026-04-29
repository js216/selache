/* SPDX-License-Identifier: MIT */
/* labs.c --- Absolute value of long */
/* Copyright (c) 2026 Jakob Kastelic */

__attribute__((weak)) long labs(long n)
{
    return n < 0 ? -n : n;
}
