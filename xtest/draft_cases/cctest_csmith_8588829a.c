// SPDX-License-Identifier: MIT
// cctest_csmith_8588829a.c --- cctest case csmith_8588829a (csmith seed 2240316058)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x91847acb */

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

// Options:   -s 2240316058 -o /tmp/csmith_gen_upsff09v/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 1L;
static int32_t g_5 = 0xCECB4571L;
static int16_t g_10 = (-1L);
static uint32_t g_15 = 0UL;
static uint16_t g_18 = 0x20EAL;
static uint32_t g_26[1] = {18446744073709551606UL};
static int64_t g_31[4] = {7L,7L,7L,7L};
static int16_t g_32 = 4L;
static uint32_t g_44 = 18446744073709551609UL;
static int32_t g_61[3] = {0xED0F2FE8L,0xED0F2FE8L,0xED0F2FE8L};
static int8_t g_66 = 0xFCL;
static uint32_t g_90 = 8UL;



static uint8_t  func_1(void);
static int32_t  func_8(int16_t  p_9);
static uint16_t  func_11(uint16_t  p_12);




static uint8_t  func_1(void)
{ 
    uint32_t l_140 = 0xE923EB6BL;
    int8_t l_141 = (-1L);
    for (g_2 = (-26); (g_2 != (-6)); g_2 += 1)
    { 
        for (g_5 = 0; (g_5 <= (-4)); g_5 -= 1)
        { 
            int32_t l_138 = 0L;
            if (func_8((g_10 |= (-6L))))
            { 
                int32_t l_139 = 0xE9350E5CL;
                if (l_138)
                    break;
                g_61[1] |= ((0x3AL >= ((l_139 == g_44) <= g_15)) , 0xEE972AE7L);
                l_139 = 0L;
            }
            else
            { 
                return l_140;
            }
        }
    }
    return l_141;
}



static int32_t  func_8(int16_t  p_9)
{ 
    uint16_t l_21 = 65526UL;
    int32_t l_59 = 0xC0E3E0ECL;
    int8_t l_65 = 7L;
    int32_t l_67 = 0xC80B142BL;
    int32_t l_68 = 0xEFF69E9DL;
    int32_t l_70 = (-5L);
    int32_t l_73 = 9L;
    int32_t l_75 = 0x77DABF26L;
    uint16_t l_76 = 9UL;
    uint16_t l_97[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
    uint8_t l_117 = 1UL;
    int i, j;
    if ((0UL != (p_9 , (func_11(((int64_t)g_5 % (int64_t)g_5)) <= 0x6EC7L))))
    { 
        l_21 = 0xF20920A6L;
    }
    else
    { 
        int64_t l_45 = 0xE719C29AEDA1E1CFLL;
        int32_t l_51 = 0x6275F98AL;
        if (((int8_t)0x96L << (int8_t)0))
        { 
            uint64_t l_33 = 0xFEDEDC87A9B65CABLL;
            for (g_18 = (-4); (g_18 < 49); ++g_18)
            { 
                ++g_26[0];
                if (p_9)
                    continue;
            }
            if ((g_15 & ((int8_t)((1L || p_9) , 1L) >> (int8_t)g_26[0])))
            { 
                l_33--;
                l_45 ^= ((uint32_t)((int16_t)(((((uint8_t)(g_44 = (((uint8_t)((p_9 > (l_33 > l_21)) ^ 1UL) >> (uint8_t)g_32) & p_9)) >> (uint8_t)4) , l_33) == p_9) < 1UL) << (int16_t)10) + (uint32_t)g_26[0]);
            }
            else
            { 
                return l_33;
            }
            return l_33;
        }
        else
        { 
            uint8_t l_48 = 0x11L;
            int32_t l_58[4][4] = {{1L,0x9989A98EL,0x9989A98EL,1L},{1L,0x9989A98EL,0x9989A98EL,1L},{1L,0x9989A98EL,0x9989A98EL,1L},{1L,0x9989A98EL,0x9989A98EL,1L}};
            int64_t l_60 = 4L;
            int i, j;
            if (((int8_t)l_48 + (int8_t)(((((l_51 = 0xDEA90CFFAE3C77D9LL) | ((((g_31[3] < 0x08A6652F52174D4ALL) , 5UL) | 0xFD593B88L) != 0UL)) >= g_31[3]) , (-8L)) > l_45)))
            { 
                uint32_t l_62 = 0xD5900A0DL;
                int32_t l_63 = (-2L);
                int32_t l_64 = 2L;
                int32_t l_69 = 8L;
                int32_t l_71 = (-3L);
                int32_t l_72 = 0x61CFA8ABL;
                int32_t l_74 = (-1L);
                l_60 &= ((uint32_t)((uint16_t)l_21 >> (uint16_t)15) / (uint32_t)((((((int8_t)(((l_58[1][3] = 0x2CDF274C111BE169LL) <= 0UL) , l_21) * (int8_t)p_9) == l_59) | p_9) < 9L) | p_9));
                l_62 = (g_61[1] = p_9);
                l_76++;
            }
            else
            { 
                int32_t l_83[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_83[i] = (-7L);
                l_83[0] = ((int8_t)g_31[3] + (int8_t)((int16_t)(0L == p_9) / (int16_t)0x79C0L));
                if (g_5)
                    goto lbl_84;
lbl_84:
                l_51 = (-1L);
                l_83[0] ^= ((uint16_t)(((l_58[1][3] = (g_26[0] < (((p_9 || ((((g_31[3] , p_9) || l_65) , 0x1C18E2D0L) , (-6L))) , 0xF01DA63D7FDF8BF2LL) , g_26[0]))) >= p_9) ^ l_68) >> (uint16_t)8);
            }
            l_58[1][3] = ((-(uint16_t)(((uint8_t)((l_67 ^= p_9) == 0x13E184A1L) + (uint8_t)((l_51 = ((g_90++) == p_9)) , 0x2EL)) <= l_65)) || l_59);
        }
    }
lbl_129:
    for (l_21 = 0; (l_21 == 13); ++l_21)
    { 
        uint64_t l_100 = 8UL;
        int32_t l_118 = 0L;
        for (l_68 = 0; (l_68 != (-15)); l_68 -= 3)
        { 
            l_97[0][1] = 4L;
            for (l_75 = 0; (l_75 != 4); l_75 += 2)
            { 
                uint16_t l_103 = 0x3983L;
                int32_t l_104 = 0x2618A8B4L;
                ++l_100;
                g_61[1] = ((l_103 , (l_104 = g_61[1])) || 0x40BDL);
            }
            l_70 ^= ((int8_t)0x7EL + (int8_t)(-(uint16_t)((uint64_t)((uint8_t)8UL << (uint8_t)g_32) - (uint64_t)1L)));
        }
        l_118 &= ((((g_66 = ((int8_t)((p_9 , ((int32_t)(l_65 < (-(int32_t)0x7056167BL)) - (int32_t)l_117)) > g_18) << (int8_t)l_97[3][0])) == p_9) == g_90) >= l_97[0][1]);
        if (p_9)
            break;
    }
    if (((int8_t)(((((int32_t)(g_61[1] ^ ((((uint16_t)(((uint64_t)((0L < 1UL) , 0xB6A2D83E4BC4670FLL) - (uint64_t)l_70) || g_5) * (uint16_t)l_68) < l_76) <= g_61[0])) - (int32_t)0xE885CFE2L) ^ (-9L)) <= 2L) && 9L) << (int8_t)5))
    { 
        for (l_70 = 0; (l_70 > 1); l_70++)
        { 
            if (g_10)
                goto lbl_129;
            return g_26[0];
        }
    }
    else
    { 
        int64_t l_134[1];
        int i;
        for (i = 0; i < 1; i++)
            l_134[i] = 3L;
        g_61[1] &= ((int8_t)(((uint8_t)(p_9 , (l_134[0] == ((+((((uint16_t)p_9 >> (uint16_t)1) , l_97[0][1]) != p_9)) || g_66))) >> (uint8_t)g_18) || (-1L)) << (int8_t)0);
    }
    return g_61[1];
}



static uint16_t  func_11(uint16_t  p_12)
{ 
    uint8_t l_16 = 0x40L;
    int32_t l_17 = 0x652065C8L;
    if (((l_16 = (g_15 |= 6L)) ^ ((0L && ((g_10 | p_12) < 1L)) ^ l_17)))
    { 
        ++g_18;
    }
    else
    { 
        return g_10;
    }
    return p_12;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_31[i], "g_31[i]", print_hash_value);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
