/* SPDX-License-Identifier: MIT */
/* srand.c --- Seed the pseudo-random number generator */
/* Copyright (c) 2026 Jakob Kastelic */

unsigned long *sel_rand_seed_ptr(void);

void srand(unsigned int seed)
{
    *sel_rand_seed_ptr() = seed;
}
