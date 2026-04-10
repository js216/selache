/* SPDX-License-Identifier: MIT */
/* rand.c --- Pseudo-random number generator */
/* Copyright (c) 2026 Jakob Kastelic */

static unsigned long sel_rand_seed = 1;

unsigned long *sel_rand_seed_ptr(void)
{
    return &sel_rand_seed;
}

int rand(void)
{
    sel_rand_seed = sel_rand_seed * 1103515245UL + 12345UL;
    return (int)((sel_rand_seed >> 16) & 0x7fff);
}
