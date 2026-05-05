// SPDX-License-Identifier: MIT
// cctest_csmith_09a5b68e.c --- cctest case csmith_09a5b68e (csmith seed 161855118)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa007be0b */

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

// Options:   -s 161855118 -o /tmp/csmith_gen_ru0k2i12/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_30 = (-1L);
static uint32_t g_44 = 0x46552DEDL;
static int16_t g_46 = 0x9AE8L;
static int8_t g_47[1][4] = {{(-8L),(-8L),(-8L),(-8L)}};
static uint64_t g_77 = 8UL;



static const int32_t  func_1(void);
static uint16_t  func_12(uint64_t  p_13, uint32_t  p_14, int32_t  p_15, uint8_t  p_16);
static uint32_t  func_24(uint8_t  p_25, uint32_t  p_26, int32_t  p_27);




static const int32_t  func_1(void)
{ 
    int64_t l_2 = 0xBDDE0BCD8C45CDBELL;
    uint8_t l_48 = 0UL;
    int8_t l_87[2][4] = {{0x9FL,0x9FL,0x9FL,0x9FL},{0x9FL,0x9FL,0x9FL,0x9FL}};
    uint16_t l_89 = 1UL;
    int i, j;
    if (l_2)
    { 
        uint16_t l_9 = 0x8E1BL;
        for (l_2 = 0; (l_2 != 0); l_2 += 1)
        { 
            int64_t l_21 = 1L;
            int32_t l_49 = 6L;
            uint16_t l_50 = 0xCCFDL;
            int64_t l_80 = 3L;
            g_77 = (((int16_t)(g_46 = (((int8_t)l_9 << (int8_t)0) || (((uint16_t)func_12((l_49 |= ((int8_t)((int16_t)((g_47[0][0] = (((l_21 >= (((uint32_t)func_24(l_21, l_2, l_21) % (uint32_t)g_46) | 0x74DB503B5B0D69B4LL)) > 0x22955D48L) == g_46)) >= l_21) * (int16_t)l_48) % (int8_t)1L)), l_48, l_50, g_46) * (uint16_t)0x659CL) ^ l_2))) - (int16_t)65535UL) > l_50);
            for (l_9 = 0; (l_9 == 56); ++l_9)
            { 
                if (g_44)
                    break;
                if (l_80)
                    continue;
            }
            g_30 = ((g_47[0][0] | (l_49 = (((~((uint8_t)0x3EL - (uint8_t)((int16_t)((0x0FL >= g_77) == 4294967288UL) * (int16_t)0xC1CAL))) & l_9) == l_80))) ^ l_9);
        }
    }
    else
    { 
        int16_t l_86 = 3L;
        int16_t l_88 = 0xFB24L;
        g_30 = l_86;
        g_30 &= l_87[1][0];
        l_89--;
    }
    return l_2;
}



static uint16_t  func_12(uint64_t  p_13, uint32_t  p_14, int32_t  p_15, uint8_t  p_16)
{ 
    int16_t l_59 = 0x7840L;
    int32_t l_68[3][2] = {{0x1C2B46DFL,0x1C2B46DFL},{0x1C2B46DFL,0x1C2B46DFL},{0x1C2B46DFL,0x1C2B46DFL}};
    int i, j;
    for (p_14 = 18; (p_14 > 57); ++p_14)
    { 
        uint16_t l_58[1];
        int32_t l_62 = 5L;
        int32_t l_67 = 0xEE2B4074L;
        int32_t l_69 = 0L;
        int i;
        for (i = 0; i < 1; i++)
            l_58[i] = 0x2C5AL;
        for (p_16 = 0; (p_16 <= 0); p_16 += 1)
        { 
            int32_t l_60 = 0x386B9BDDL;
            int16_t l_61 = (-9L);
            int i, j;
            l_60 = (((int8_t)(((int32_t)((((-(int8_t)0x8BL) | (g_47[p_16][(p_16 + 2)] & (g_30 ^= p_15))) , 5L) <= l_58[0]) - (int32_t)g_47[p_16][(p_16 + 2)]) && 0UL) - (int8_t)l_59) , g_30);
            for (l_59 = 0; (l_59 <= 0); l_59 += 1)
            { 
                l_62 = l_61;
            }
            for (g_44 = 0; (g_44 <= 0); g_44 += 1)
            { 
                uint16_t l_72 = 0UL;
                int32_t l_75 = 0L;
                l_69 |= ((uint16_t)(l_68[2][1] = (l_67 &= ((((uint8_t)p_13 * (uint8_t)p_14) | (8UL <= l_62)) != l_59))) * (uint16_t)0x91A4L);
                l_60 &= (l_68[2][1] = (((uint8_t)(l_75 = (((l_72 = p_14) && (((((((uint8_t)(l_68[2][1] , (g_46 && 0xB1E4F37316A37A54LL)) * (uint8_t)g_47[p_16][(p_16 + 2)]) & 0x0409L) != 0L) || 0xD62422819455490ELL) != g_30) || l_72)) < l_58[0])) << (uint8_t)p_14) & p_13));
            }
        }
        g_30 = (-(int32_t)(p_14 > g_47[0][1]));
        if (l_68[2][1])
            break;
    }
    return l_59;
}



static uint32_t  func_24(uint8_t  p_25, uint32_t  p_26, int32_t  p_27)
{ 
    uint64_t l_39[3];
    int i;
    for (i = 0; i < 3; i++)
        l_39[i] = 0xF5ECCE35A12A2EF7LL;
    g_30 = (p_27 = ((uint64_t)g_30 + (uint64_t)g_30));
lbl_45:
    p_27 = (((int8_t)g_30 >> (int8_t)4) , ((int16_t)((((uint32_t)(p_26 = (((int8_t)l_39[1] << (int8_t)2) != (-2L))) % (uint32_t)l_39[1]) != g_30) <= g_30) - (int16_t)g_30));
    for (g_30 = 0; (g_30 == (-24)); g_30 -= 1)
    { 
        g_44 = ((uint16_t)g_30 / (uint16_t)g_30);
        if (g_30)
            goto lbl_45;
        if (g_30)
            break;
    }
    return p_27;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_47[i][j], "g_47[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_77, "g_77", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
