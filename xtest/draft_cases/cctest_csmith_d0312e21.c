// SPDX-License-Identifier: MIT
// cctest_csmith_d0312e21.c --- cctest case csmith_d0312e21 (csmith seed 3492884001)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb7d6899b */

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

// Options:   -s 3492884001 -o /tmp/csmith_gen_m_k3p3ld/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_4 = 0x5D16DF25L;
static int32_t g_41 = 0x9248E6BAL;
static int64_t g_60 = 0L;
static int32_t g_94 = 2L;
static int32_t g_95 = 0L;
static int8_t g_96 = 0L;
static int16_t g_97 = 0xE84FL;
static int16_t g_99 = 1L;
static int32_t g_100[2][4] = {{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)}};
static int8_t g_103 = 0x01L;
static int8_t g_104 = 1L;



static uint32_t  func_1(void);
static int64_t  func_6(int32_t  p_7, uint64_t  p_8, uint8_t  p_9);
static uint16_t  func_13(int32_t  p_14, uint8_t  p_15, uint32_t  p_16, const int16_t  p_17);




static uint32_t  func_1(void)
{ 
    int32_t l_5 = 1L;
    int32_t l_10 = 0x327439CBL;
    int32_t l_151 = (-9L);
    l_5 = ((uint16_t)g_4 >> (uint16_t)13);
    l_151 = (g_4 || func_6((l_10 = g_4), ((uint16_t)(func_13(((g_4 | g_4) & g_4), g_4, g_4, l_5) && l_5) % (uint16_t)0x8711L), g_4));
    return g_95;
}



static int64_t  func_6(int32_t  p_7, uint64_t  p_8, uint8_t  p_9)
{ 
    uint32_t l_25 = 0x58099740L;
    int32_t l_30 = 0L;
    uint32_t l_68 = 18446744073709551614UL;
    int8_t l_72 = 0x87L;
    uint32_t l_77[4] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL};
    int32_t l_98 = 0xAA682D83L;
    int32_t l_102 = 0xAC2FF03EL;
    int32_t l_106 = (-7L);
    int64_t l_126 = (-3L);
    int i;
    for (p_7 = (-15); (p_7 <= 17); ++p_7)
    { 
        uint16_t l_42 = 0x04E5L;
        uint64_t l_67 = 8UL;
        int32_t l_69 = 0x717F6C07L;
        if ((((((uint8_t)(((l_25 , (g_41 = ((uint32_t)(l_30 |= ((uint16_t)g_4 << (uint16_t)1)) + (uint32_t)(((uint8_t)(((uint16_t)(((int16_t)((uint16_t)(((uint8_t)p_8 % (uint8_t)(-1L)) == 0x6BL) - (uint16_t)0UL) - (int16_t)p_9) >= (-5L)) << (uint16_t)13) , l_25) + (uint8_t)p_7) == p_9)))) < g_4) | g_4) >> (uint8_t)4) , g_41) <= l_25) < l_42))
        { 
            uint32_t l_49[4][4] = {{4294967295UL,8UL,8UL,4294967295UL},{0xB1F8487BL,8UL,0xE33A9025L,8UL},{8UL,4294967295UL,0xE33A9025L,0xE33A9025L},{0xB1F8487BL,0xB1F8487BL,8UL,0xE33A9025L}};
            int i, j;
            g_41 = (((g_41 || ((uint8_t)((uint8_t)((l_49[2][1] = (0UL & ((((int16_t)((-1L) && 0x02870B1BL) * (int16_t)g_4) >= l_42) | p_9))) | l_25) >> (uint8_t)5) / (uint8_t)p_7)) ^ g_41) < 0x72L);
        }
        else
        { 
            uint64_t l_57 = 0xB7283D345464CD02LL;
            if (p_8)
                break;
            l_69 &= (((int64_t)(((int8_t)((((uint16_t)((+g_41) >= (0UL != ((g_60 = (--l_57)) >= ((uint64_t)((uint8_t)(l_67 = ((int64_t)(0x3D25L > p_8) / (int64_t)18446744073709551610UL)) >> (uint8_t)4) / (uint64_t)p_8)))) * (uint16_t)p_7) == l_68) | 0x3F3BL) << (int8_t)g_4) != p_8) + (int64_t)0x630673EEFD7F9B64LL) || p_9);
            l_69 = ((int8_t)0xE2L >> (int8_t)5);
        }
        l_30 = ((g_4 < l_67) && (0xE74CL || l_72));
    }
    for (g_41 = 16; (g_41 <= 3); g_41--)
    { 
        if (l_72)
            break;
        g_4 = g_4;
    }
    for (p_9 = (-17); (p_9 > 1); p_9++)
    { 
        int16_t l_92 = 0L;
        int32_t l_105 = (-6L);
        int32_t l_107 = 1L;
        int32_t l_108 = 1L;
        int32_t l_109[3];
        uint32_t l_110 = 18446744073709551615UL;
        int i;
        for (i = 0; i < 3; i++)
            l_109[i] = 0xFF3B7F0DL;
        for (p_8 = 0; (p_8 <= 3); p_8 += 1)
        { 
            int32_t l_93 = 0L;
            int32_t l_101[1][4] = {{0xD3287B78L,0xD3287B78L,0xD3287B78L,0xD3287B78L}};
            int i, j;
            l_93 = ((uint16_t)(((int32_t)((uint8_t)l_77[p_8] + (uint8_t)((((uint32_t)(((int16_t)((uint8_t)l_77[p_8] >> (uint8_t)(((int64_t)p_9 - (int64_t)0xC5CEC10C1A6FE160LL) < p_7)) % (int16_t)(-3L)) < 0x22DDL) - (uint32_t)p_9) , 3L) < l_92)) / (int32_t)l_77[p_8]) && 0L) % (uint16_t)p_8);
            ++l_110;
        }
        if (((uint8_t)l_108 << (uint8_t)5))
        { 
            int8_t l_117 = 0xEBL;
            for (l_30 = 24; (l_30 == (-12)); l_30 -= 2)
            { 
                l_117 ^= 0xEB866B6FL;
                return l_117;
            }
        }
        else
        { 
            for (g_41 = 0; (g_41 == (-25)); --g_41)
            { 
                int32_t l_122 = 0x9A8E0643L;
                int32_t l_125 = (-1L);
                l_109[0] ^= (((g_104 && 0x22L) && ((int8_t)p_8 << (int8_t)g_104)) <= g_41);
                l_122 &= (-1L);
                g_4 |= (l_126 = ((((l_125 = ((((((p_7 | 0x586B6604L) == ((uint16_t)g_60 >> (uint16_t)p_7)) , l_77[3]) , p_8) | 0x7F353C28L) <= p_7)) < 5L) > g_99) | 0x956DL));
            }
            if (g_96)
                break;
        }
        for (l_110 = 7; (l_110 <= 52); l_110 += 2)
        { 
            int16_t l_150[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_150[i][j] = 0L;
            }
            for (p_7 = 2; (p_7 >= 0); p_7 -= 1)
            { 
                int64_t l_137 = (-1L);
                int i;
                l_106 ^= ((uint16_t)((int32_t)((uint8_t)((int64_t)l_109[p_7] % (int64_t)0xE14FE225A2E691EALL) * (uint8_t)0xC7L) - (int32_t)l_137) % (uint16_t)0x5942L);
            }
            g_4 = (((uint16_t)((~((((((int16_t)((uint32_t)(((-(int64_t)((uint16_t)(((4UL & (((0x3EE10C30L == (((((18446744073709551615UL > 1UL) || p_8) ^ (-1L)) != l_108) , 0L)) < l_150[0][0]) || p_9)) <= p_9) != 1L) - (uint16_t)g_41)) >= l_150[0][1]) ^ l_109[2]) / (uint32_t)p_7) * (int16_t)p_7) == 0x24318C78518540A1LL) == g_97) <= 0xCFL) != 8UL)) == 1L) >> (uint16_t)8) , 1L);
            return l_126;
        }
    }
    return l_98;
}



static uint16_t  func_13(int32_t  p_14, uint8_t  p_15, uint32_t  p_16, const int16_t  p_17)
{ 
    uint32_t l_18 = 1UL;
    l_18--;
    return g_4;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_100[i][j], "g_100[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
