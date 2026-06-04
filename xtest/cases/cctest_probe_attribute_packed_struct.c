// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x05 */
/* @exp_ticks 0x200 */

struct __attribute__((packed)) S{char c; int x;}; int test_main(void){return sizeof(struct S);}
