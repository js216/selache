/* SPDX-License-Identifier: MIT */
/* abs.c --- Absolute value of int */
/* Copyright (c) 2026 Jakob Kastelic */

__attribute__((weak)) int abs(int n)
{
    return n < 0 ? -n : n;
}
