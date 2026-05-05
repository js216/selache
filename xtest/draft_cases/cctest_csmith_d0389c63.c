// SPDX-License-Identifier: MIT
// cctest_csmith_d0389c63.c --- cctest case csmith_d0389c63 (csmith seed 3493370979)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x592e507d */

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

// Options:   -s 3493370979 -o /tmp/csmith_gen__7pg6by5/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int16_t g_2 = 1L;
static int32_t g_20[2] = {0xA07C694AL,0xA07C694AL};
static uint16_t g_21 = 0x3F9BL;
static int32_t g_31 = (-1L);
static uint32_t g_42[1] = {1UL};
static uint16_t g_43 = 2UL;
static int8_t g_52 = 0xCFL;
static int32_t g_54 = (-9L);



static int32_t  func_1(void);
static uint8_t  func_10(int64_t  p_11, int32_t  p_12, uint32_t  p_13, int32_t  p_14);
static int64_t  func_15(const int8_t  p_16);




static int32_t  func_1(void)
{ 
    uint32_t l_3 = 0xFEBAEEF2L;
    int32_t l_53 = (-9L);
    uint32_t l_56[1];
    int i;
    for (i = 0; i < 1; i++)
        l_56[i] = 0x24C99FFFL;
    l_3 = g_2;
    for (g_2 = 0; (g_2 == (-20)); --g_2)
    { 
        int32_t l_19 = 0x41A62A96L;
        int32_t l_55 = 0L;
        for (l_3 = 0; (l_3 == 59); l_3 += 3)
        { 
            const uint8_t l_17 = 6UL;
            if (g_2)
                break;
            l_19 = ((uint8_t)func_10(((0UL || func_15(l_17)) , l_3), l_19, g_2, g_20[1]) * (uint8_t)g_2);
        }
        for (l_3 = 0; (l_3 != 0); l_3 += 7)
        { 
            int32_t l_51[3];
            int i;
            for (i = 0; i < 3; i++)
                l_51[i] = 0xC8B69768L;
            l_56[0]++;
        }
    }
    return g_42[0];
}



static uint8_t  func_10(int64_t  p_11, int32_t  p_12, uint32_t  p_13, int32_t  p_14)
{ 
    int64_t l_22 = 0xA56C37FC0549EC71LL;
    int32_t l_41[4];
    int32_t l_46 = 4L;
    int i;
    for (i = 0; i < 4; i++)
        l_41[i] = 0xE07AD46DL;
    if ((l_22 = (g_21 &= 0x495231FBL)))
    { 
        g_31 = ((0x2E819D33L ^ l_22) < ((int8_t)(((uint8_t)((uint16_t)((int64_t)(((l_22 == g_2) != g_21) , g_20[1]) - (int64_t)g_2) << (uint16_t)l_22) % (uint8_t)p_14) < 2UL) << (int8_t)l_22));
    }
    else
    { 
        int32_t l_40 = 0x4B664FB7L;
        for (p_12 = 1; (p_12 <= 25); p_12++)
        { 
            g_43 = ((int8_t)((uint64_t)((uint16_t)(g_21 = l_40) >> (uint16_t)(l_40 <= ((g_42[0] = (l_41[0] = g_20[0])) && 18446744073709551615UL))) % (uint64_t)p_12) << (int8_t)5);
        }
        for (g_21 = (-7); (g_21 == 13); g_21 += 2)
        { 
            if (l_46)
                break;
        }
    }
    for (g_43 = 22; (g_43 < 27); ++g_43)
    { 
        return l_22;
    }
    return p_14;
}



static int64_t  func_15(const int8_t  p_16)
{ 
    int64_t l_18 = 0xB3895196EE4E9120LL;
    return l_18;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);

    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_42[i], "g_42[i]", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
