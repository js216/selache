// SPDX-License-Identifier: MIT
// cctest_csmith_dd73c3c5.c --- cctest case csmith_dd73c3c5 (csmith seed 3715351493)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x155a02ac */

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

// Options:   -s 3715351493 -o /tmp/csmith_gen_llmbmk6o/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_3 = 1L;
static int32_t g_17[4][1] = {{(-2L)},{(-2L)},{(-2L)},{(-2L)}};



static const int32_t  func_1(void);
static const uint8_t  func_4(int32_t  p_5, int32_t  p_6, int8_t  p_7, int32_t  p_8, int32_t  p_9);




static const int32_t  func_1(void)
{ 
    int64_t l_2[3];
    int32_t l_12 = 0xA41637C1L;
    int8_t l_16[4][4] = {{0xFAL,0xFAL,0xFAL,0xFAL},{0xFAL,0xFAL,0xFAL,0xFAL},{0xFAL,0xFAL,0xFAL,0xFAL},{0xFAL,0xFAL,0xFAL,0xFAL}};
    uint16_t l_18 = 0xFDADL;
    int32_t l_19 = 0x38F738F5L;
    uint8_t l_20[1][2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_2[i] = (-1L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_20[i][j] = 1UL;
    }
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        int i;
        l_12 = (((func_4(l_2[g_3], g_3, l_2[0], l_2[1], g_3) > (-1L)) == l_2[2]) , g_3);
        for (l_12 = 0; (l_12 <= 2); l_12 += 1)
        { 
            uint8_t l_15 = 0xBCL;
            l_19 |= (func_4(g_3, (g_17[1][0] = (((func_4(g_3, ((uint8_t)0xBBL >> (uint8_t)7), l_12, l_15, l_2[g_3]) | l_16[0][0]) || g_3) , g_3)), g_3, l_18, g_3) > l_2[g_3]);
        }
    }
    l_20[0][0] = 0xFDFE924FL;
    g_3 = 0x6BD0D42AL;
    return l_16[0][0];
}



static const uint8_t  func_4(int32_t  p_5, int32_t  p_6, int8_t  p_7, int32_t  p_8, int32_t  p_9)
{ 
    int8_t l_10 = 0L;
    int32_t l_11 = 0xAAB72B21L;
    l_11 = l_10;
    return p_5;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
