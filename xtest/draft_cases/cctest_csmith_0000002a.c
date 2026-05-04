// SPDX-License-Identifier: MIT
// cctest_csmith_0000002a.c --- cctest case csmith_0000002a (csmith seed 42)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x68afc935 */

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

// Options:   -s 42 -o /tmp/csmith_gen_cat45l8g/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_14 = 0xCF13E13AL;
static uint8_t g_16 = 0x50L;
static int16_t g_17[3] = {0x55EBL,0x55EBL,0x55EBL};
static uint8_t g_24 = 255UL;
static int32_t g_41 = (-1L);
static uint32_t g_42[3] = {2UL,2UL,2UL};
static int32_t g_43 = (-7L);
static uint64_t g_44 = 0x1021F5EB7F464F61LL;



static uint8_t  func_1(void);
static uint16_t  func_6(uint16_t  p_7);
static int64_t  func_11(uint16_t  p_12);




static uint8_t  func_1(void)
{ 
    uint16_t l_5 = 0xCB8CL;
    int32_t l_34[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_34[i][j] = 1L;
    }
    if (((((g_16 = ((uint16_t)(!((l_5 & (func_6(l_5) , 6UL)) && l_5)) + (uint16_t)(-1L))) < 0x74L) != 0xBDE64F6CBCB1A7A8LL) ^ l_5))
    { 
        uint32_t l_25[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_25[i][j] = 0xA41B8700L;
        }
        for (l_5 = 0; (l_5 <= 2); l_5 += 1)
        { 
            g_24 = ((uint32_t)(((uint16_t)((uint8_t)g_16 / (uint8_t)251UL) >> (uint16_t)0) , 0x0AE73598L) % (uint32_t)g_14);
            return l_25[0][0];
        }
    }
    else
    { 
        int32_t l_32 = 0xCB8E0045L;
        int32_t l_33 = 0x2C3B03C3L;
        l_34[0][0] = ((uint64_t)((int8_t)((uint8_t)(l_32 = (l_5 , l_5)) * (uint8_t)(l_33 == 0x3CL)) / (int8_t)l_5) - (uint64_t)g_24);
        g_44 = ((int64_t)(((g_43 &= (((int32_t)l_32 % (int32_t)(l_5 | (g_42[0] = (((((int8_t)((g_41 ^= 4294967293UL) <= 1L) * (int8_t)252UL) , g_14) < g_24) <= g_16)))) == g_16)) & 0L) <= 0x1847726BL) % (int64_t)l_32);
    }
    return g_43;
}



static uint16_t  func_6(uint16_t  p_7)
{ 
    uint32_t l_15 = 18446744073709551610UL;
    l_15 = ((uint32_t)(+func_11(p_7)) + (uint32_t)(0UL & g_14));
    return p_7;
}



static int64_t  func_11(uint16_t  p_12)
{ 
    int8_t l_13[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_13[i][j] = 0L;
    }
    l_13[0][0] &= (p_12 == p_12);
    return p_12;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);

    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_42[i], "g_42[i]", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
