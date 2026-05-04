// SPDX-License-Identifier: MIT
// cctest_csmith_00000001.c --- cctest case csmith_00000001 (csmith seed 1)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x780eee87 */

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

// Options:   -s 1 -o /tmp/csmith_gen__we5g9w9/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int8_t g_28 = 1L;
static uint64_t g_29 = 18446744073709551611UL;
static int16_t g_46 = (-1L);
static uint32_t g_49 = 0x45464CD0L;
static int64_t g_52 = (-1L);
static uint32_t g_59 = 1UL;



static uint32_t  func_1(void);
static uint16_t  func_4(const int32_t  p_5, int32_t  p_6);
static int32_t  func_7(uint32_t  p_8, uint32_t  p_9, uint16_t  p_10, uint32_t  p_11);




static uint32_t  func_1(void)
{ 
    int32_t l_27 = 0xF5FA3187L;
    uint32_t l_60 = 1UL;
    const int8_t l_61 = 0L;
    int32_t l_62 = (-5L);
    g_52 = ((uint16_t)func_4((g_46 = func_7(((((((1UL || (0x1DL < (g_29 = ((uint16_t)((uint16_t)(((int16_t)((int16_t)((int32_t)((uint16_t)((((int8_t)(((-(uint8_t)l_27) , l_27) && l_27) * (int8_t)l_27) || l_27) <= l_27) + (uint16_t)5UL) % (int32_t)l_27) + (int16_t)g_28) / (int16_t)g_28) , g_28) / (uint16_t)0x82E5L) * (uint16_t)0x3842L)))) | l_27) & (-4L)) , g_28) || l_27) , l_27), l_27, g_28, l_27)), g_28) * (uint16_t)0x7D1CL);
    l_62 |= ((uint32_t)(((((uint8_t)((((-7L) <= ((uint8_t)(4294967295UL & ((g_29 & g_59) || g_29)) - (uint8_t)g_46)) != g_29) ^ 0xD49A337B27F9695FLL) + (uint8_t)g_29) == l_60) & 8UL) && 1UL) % (uint32_t)l_61);
    return g_46;
}



static uint16_t  func_4(const int32_t  p_5, int32_t  p_6)
{ 
    int8_t l_50[3][3] = {{0xC1L,0xC1L,0xC1L},{0x1AL,0x1AL,0x1AL},{0xC1L,0xC1L,0xC1L}};
    int32_t l_51 = 0xFF2B9ACCL;
    int i, j;
    l_51 = ((int16_t)(-1L) + (int16_t)(((p_6 && (l_50[2][2] ^= ((((g_28 = (((g_49 = (g_29 = (g_46 , p_5))) <= g_28) <= g_28)) ^ 0x30L) || 0xB7B20295L) > 0x78DB5841EC3D2506LL))) != l_51) <= 1L));
    return l_51;
}



static int32_t  func_7(uint32_t  p_8, uint32_t  p_9, uint16_t  p_10, uint32_t  p_11)
{ 
    int32_t l_35 = 0x4BB323FAL;
    int32_t l_36 = 0xDEB94592L;
    l_36 &= ((((!(g_29 |= ((((int16_t)(((int64_t)1L - (int64_t)(-1L)) && g_28) << (int16_t)g_28) >= p_9) & p_10))) ^ p_10) , l_35) >= l_35);
    l_36 = ((int16_t)(l_35 = ((int32_t)(~(((uint32_t)(g_29 && ((0x39L && ((uint16_t)((p_10 == l_35) < 0x1B9B9640L) * (uint16_t)0xCA40L)) || 0L)) + (uint32_t)0UL) >= 0L)) % (int32_t)g_28)) >> (int16_t)l_36);
    return p_9;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
