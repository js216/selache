// SPDX-License-Identifier: MIT
// cctest_csmith_ce152c96.c --- cctest case csmith_ce152c96 (csmith seed 3457494166)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x25907b5f */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

// Options:   -s 3457494166 -o /tmp/csmith_gen_wbnx_ae3/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint64_t g_2 = 0x124F01C08901F2C2LL;
static uint32_t g_3[4][3] = {{1UL,4294967294UL,1UL},{0x491E29EAL,9UL,0x491E29EAL},{1UL,4294967294UL,1UL},{0x491E29EAL,9UL,0x491E29EAL}};



static const uint16_t  func_1(void);




static const uint16_t  func_1(void)
{ 
    const int64_t l_4 = 0xFB37B04800FA72C2LL;
    g_3[0][0] = g_2;
    return l_4;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
