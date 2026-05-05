// SPDX-License-Identifier: MIT
// cctest_csmith_800bf6a9.c --- cctest case csmith_800bf6a9 (csmith seed 2148267689)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x909f7c9 */

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

// Options:   -s 2148267689 -o /tmp/csmith_gen_zzinp270/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = (-1L);
static int32_t g_5 = (-1L);
static int32_t g_20[2][1] = {{0x51EBF0DDL},{0x51EBF0DDL}};
static uint16_t g_28 = 1UL;
static int64_t g_40 = (-6L);
static int32_t g_66 = (-6L);



static uint32_t  func_1(void);
static int32_t  func_9(uint16_t  p_10, int8_t  p_11);
static uint8_t  func_12(uint32_t  p_13, uint32_t  p_14);




static uint32_t  func_1(void)
{ 
    int8_t l_19 = 1L;
    int32_t l_25 = 0L;
    int32_t l_26 = 0x299E885DL;
    int16_t l_27 = 0x43E2L;
    uint32_t l_100[4][4] = {{0x66D8DA35L,1UL,1UL,0x66D8DA35L},{1UL,0x66D8DA35L,1UL,1UL},{0x66D8DA35L,0x66D8DA35L,1UL,0x66D8DA35L},{0x66D8DA35L,1UL,1UL,0x66D8DA35L}};
    int i, j;
    for (g_2 = 12; (g_2 < 10); g_2--)
    { 
        int8_t l_8 = 0xE5L;
        int32_t l_99 = (-7L);
        for (g_5 = 0; (g_5 >= 0); g_5 += 2)
        { 
            if (l_8)
                break;
        }
        l_99 = func_9(((g_40 = func_12((((int16_t)(g_5 , ((((l_25 ^= ((uint32_t)(g_20[0][0] = (l_19 = 0x01D1B984L)) / (uint32_t)((uint8_t)((int32_t)l_8 - (int32_t)g_5) * (uint8_t)g_5))) != l_26) > g_5) , l_25)) % (int16_t)l_27) , l_8), g_28)) < l_26), l_27);
    }
    l_26 ^= (-5L);
    return l_100[1][1];
}



static int32_t  func_9(uint16_t  p_10, int8_t  p_11)
{ 
    int32_t l_65[3];
    int32_t l_67[4][2] = {{0xB862B336L,0x1BD053A6L},{0x1BD053A6L,0xB862B336L},{0x1BD053A6L,0x1BD053A6L},{0xB862B336L,0x1BD053A6L}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_65[i] = (-6L);
    l_67[3][1] |= (l_65[1] = ((uint8_t)(g_66 = (~((int16_t)(((uint64_t)((((18446744073709551611UL | ((((((int64_t)(((uint8_t)(((int8_t)((uint16_t)p_10 << (uint16_t)7) * (int8_t)(((uint32_t)(~((int64_t)(((int64_t)((int16_t)p_10 << (int16_t)10) + (int64_t)l_65[0]) < 65527UL) % (int64_t)p_11)) - (uint32_t)p_10) , 1L)) , g_28) << (uint8_t)5) != 0x0138D7EFL) / (int64_t)g_28) && 0x1CL) & p_10) && l_65[0]) != l_65[0])) ^ g_28) & p_11) , p_10) / (uint64_t)g_20[1][0]) & l_65[0]) - (int16_t)l_65[0]))) / (uint8_t)p_10));
    for (p_10 = (-2); (p_10 == 29); p_10++)
    { 
        int8_t l_72 = 0x4BL;
        g_5 = (l_67[3][1] = (((((uint32_t)(l_65[0] = ((9UL != l_72) < (0xB0D72699L <= g_5))) - (uint32_t)g_20[0][0]) > 0UL) , p_11) >= g_5));
        g_20[0][0] = ((((int16_t)g_66 >> (int16_t)(l_72 & ((int16_t)g_40 << (int16_t)p_10))) && p_10) , l_67[3][1]);
    }
    for (g_28 = (-7); (g_28 > 46); ++g_28)
    { 
        int16_t l_97 = (-1L);
        int32_t l_98 = 0x4AAF27CEL;
        for (p_10 = 0; (p_10 <= 1); p_10 += 1)
        { 
            for (g_66 = 0; (g_66 <= 1); g_66 += 1)
            { 
                int i, j;
                if (l_65[(g_66 + 1)])
                    break;
                l_67[(g_66 + 1)][g_66] = (((uint64_t)(0x3403L != ((((9L == (l_65[(g_66 + 1)] = (0x25A44896L & 1L))) & l_67[g_66][p_10]) , l_67[(g_66 + 1)][g_66]) > 0UL)) % (uint64_t)p_10) | p_11);
            }
        }
        for (p_11 = (-6); (p_11 <= 5); p_11 += 2)
        { 
            l_98 = (0x6186L < ((uint8_t)(((((int8_t)(((int16_t)p_11 * (int16_t)((uint16_t)((int32_t)((uint8_t)(((int32_t)((0xE9L | l_97) != l_97) / (int32_t)4294967295UL) , 255UL) - (uint8_t)1UL) / (int32_t)g_20[0][0]) * (uint16_t)l_97)) <= p_11) << (int8_t)p_11) ^ g_5) , g_20[0][0]) == p_10) * (uint8_t)(-1L)));
        }
    }
    return l_65[0];
}



static uint8_t  func_12(uint32_t  p_13, uint32_t  p_14)
{ 
    uint32_t l_29 = 1UL;
    if (l_29)
    { 
        int32_t l_30 = 0x8B243E5EL;
        l_30 = (l_30 & ((uint16_t)((int16_t)g_28 >> (int16_t)12) * (uint16_t)g_28));
    }
    else
    { 
        uint16_t l_35[2][2];
        int32_t l_36 = 2L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_35[i][j] = 0x5C6AL;
        }
lbl_39:
        l_36 |= ((g_20[0][0] && p_14) || ((0x35L >= l_35[0][0]) | p_13));
        for (l_36 = (-22); (l_36 == 28); l_36 += 8)
        { 
            if (l_29)
                goto lbl_39;
        }
    }
    return l_29;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
