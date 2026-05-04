// SPDX-License-Identifier: MIT
// cctest_csmith_b16797ed.c --- cctest case csmith_b16797ed (csmith seed 2976356333)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xca112e91 */

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

// Options:   -s 2976356333 -o /tmp/csmith_gen_m8pfjex0/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int64_t g_8 = (-1L);
static uint32_t g_9 = 4294967295UL;
static int8_t g_23 = 0xE1L;
static uint32_t g_39 = 18446744073709551607UL;
static uint8_t g_45 = 0xD6L;
static int64_t g_60 = 0L;
static int8_t g_82 = (-9L);
static int64_t g_91[2] = {1L,1L};
static uint16_t g_92 = 1UL;
static uint64_t g_106 = 18446744073709551613UL;
static int64_t g_110[3] = {0xFAC931259C1DB3DALL,0xFAC931259C1DB3DALL,0xFAC931259C1DB3DALL};
static uint32_t g_132 = 4294967292UL;
static int8_t g_137 = 0x82L;
static int64_t g_139 = (-1L);
static uint16_t g_140[2] = {0xFD1EL,0xFD1EL};
static uint32_t g_161 = 0x311E7969L;
static int8_t g_163 = 0x62L;
static int16_t g_168 = 0x1407L;
static uint32_t g_169 = 0xCBCFC55BL;
static int16_t g_178 = 0xD806L;
static int64_t g_217[1][3] = {{0x6CDD36E1F2821DCCLL,0x6CDD36E1F2821DCCLL,0x6CDD36E1F2821DCCLL}};
static int64_t g_219 = (-1L);



static int8_t  func_1(void);
static uint8_t  func_2(uint32_t  p_3, uint16_t  p_4, int8_t  p_5, int16_t  p_6, int16_t  p_7);
static uint64_t  func_11(uint32_t  p_12, const uint64_t  p_13, const uint32_t  p_14, uint16_t  p_15, int32_t  p_16);




static int8_t  func_1(void)
{ 
    uint16_t l_10 = 65527UL;
    const int32_t l_17[1] = {0x5E790E86L};
    int32_t l_202 = (-2L);
    int32_t l_215[3];
    int16_t l_216 = (-7L);
    int i;
    for (i = 0; i < 3; i++)
        l_215[i] = (-10L);
    l_202 = (func_2((l_10 = ((g_8 ^= 0x6942L) <= g_9)), (func_11(g_9, l_17[0], g_9, g_9, g_9) | 0xCC9F196E6C8CAC31LL), g_9, l_17[0], l_17[0]) != l_17[0]);
    if (g_8)
        goto lbl_218;
lbl_218:
    g_217[0][1] = ((((int64_t)(((uint16_t)(l_202 = (g_169 <= (g_137 ^= ((l_215[1] = ((uint16_t)((((uint32_t)((uint8_t)((int32_t)0x2DDD70F1L % (int32_t)g_23) - (uint8_t)0L) % (uint32_t)(-8L)) < l_215[1]) <= l_17[0]) >> (uint16_t)0)) < g_169)))) << (uint16_t)7) <= g_110[2]) / (int64_t)18446744073709551614UL) < l_10) > l_216);
    g_219 = l_215[2];
    return l_10;
}



static uint8_t  func_2(uint32_t  p_3, uint16_t  p_4, int8_t  p_5, int16_t  p_6, int16_t  p_7)
{ 
    uint16_t l_22 = 0x8D51L;
    int32_t l_38[2][3] = {{0x5309757AL,0x5309757AL,0x5309757AL},{5L,5L,5L}};
    uint32_t l_113 = 0x73F28D20L;
    int i, j;
    g_23 ^= ((p_4 , g_8) == (l_22 || l_22));
    if (((((int16_t)g_9 << (int16_t)(g_39 = ((uint8_t)(l_38[0][0] = ((p_6 ^ (+((int8_t)(+((uint8_t)((int64_t)((int16_t)(p_4 , g_8) * (int16_t)0L) - (int64_t)0x5EE879096A9CBDE6LL) % (uint8_t)0xDDL)) - (int8_t)p_7))) != 65527UL)) >> (uint8_t)0))) ^ 65535UL) , g_23))
    { 
        const int64_t l_44[1][2] = {{(-4L),(-4L)}};
        int32_t l_61[4][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
        int i, j;
        g_45 = (((int64_t)(((((int8_t)l_44[0][1] * (int8_t)(l_22 != g_23)) & 0x84C923F2L) || 0xAFFFL) > (-2L)) - (int64_t)l_44[0][1]) ^ l_38[1][0]);
        if (g_23)
        { 
            int64_t l_52 = 0x87BB6ABD35EB13E2LL;
            int32_t l_53 = 0x0BEC3A43L;
            int32_t l_56 = 0xA48C5527L;
            l_56 = ((((g_39 = (((uint8_t)(((uint8_t)(g_45 = (g_45 ^ (l_38[0][0] = ((uint8_t)(l_53 = l_52) - (uint8_t)(p_5 = ((int64_t)(1L | l_44[0][0]) % (int64_t)l_52)))))) >> (uint8_t)3) == 1L) << (uint8_t)l_22) != (-1L))) , g_45) , p_7) | g_8);
            for (p_6 = 0; (p_6 != 25); ++p_6)
            { 
                int16_t l_59[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_59[i] = 7L;
                return l_59[1];
            }
        }
        else
        { 
            uint64_t l_62 = 0xA7019510DDF4F35DLL;
            --l_62;
        }
        if (l_22)
        { 
            uint32_t l_65 = 0UL;
            --l_65;
        }
        else
        { 
            return l_61[2][0];
        }
    }
    else
    { 
        uint16_t l_88 = 0x4342L;
        int8_t l_89 = (-3L);
        int32_t l_90 = (-1L);
        int32_t l_109[3];
        const int32_t l_149[2] = {(-1L),(-1L)};
        int32_t l_150 = (-1L);
        int32_t l_151 = 0x0AB68978L;
        int i;
        for (i = 0; i < 3; i++)
            l_109[i] = 0L;
        for (p_7 = (-24); (p_7 == (-15)); p_7 += 1)
        { 
            uint64_t l_81 = 0xC31B0F8279224A3ALL;
            int32_t l_99 = 1L;
            int32_t l_111 = (-1L);
            int32_t l_112 = 0xA657C725L;
            if (((int16_t)(p_7 || (((p_7 , (((uint32_t)(!(((g_8 , 0x99L) <= g_60) > 0x93L)) * (uint32_t)0UL) < p_7)) == g_39) != 0x0508B3DEL)) - (int16_t)g_60))
            { 
                uint32_t l_87[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_87[i][j] = 4294967293UL;
                }
                g_92 = (((uint32_t)(((int8_t)((g_91[1] ^= ((int16_t)((((l_38[0][0] = (((l_90 = ((g_82 = (l_81 = g_60)) <= (((((((int16_t)((7L ^ ((uint16_t)l_87[0][0] << (uint16_t)2)) >= g_60) << (int16_t)l_88) ^ p_5) > l_87[2][0]) ^ g_60) > 0x80F2L) != l_89))) | g_8) , (-1L))) >= l_22) >= g_60) <= g_45) - (int16_t)0x3302L)) && g_23) >> (int8_t)g_9) || l_90) - (uint32_t)l_87[0][0]) | p_5);
                l_99 = (((uint64_t)(((int16_t)((int8_t)((p_5 > (p_6 > p_5)) ^ (-1L)) * (int8_t)g_60) << (int16_t)1) != p_5) + (uint64_t)l_81) >= g_8);
            }
            else
            { 
                g_106 = ((int8_t)0x82L * (int8_t)(g_45 || ((((int8_t)((uint8_t)g_91[1] % (uint8_t)0x6BL) - (int8_t)7UL) & p_7) , g_91[1])));
            }
            for (g_9 = 11; (g_9 > 6); --g_9)
            { 
                return l_90;
            }
            ++l_113;
        }
        if (g_91[1])
        { 
            int32_t l_130 = 0x3956958EL;
            int32_t l_134 = 0xA12FBA81L;
            int32_t l_136 = 0xBFE3AE0FL;
            int32_t l_138 = 0L;
            for (g_106 = 0; (g_106 <= 1); g_106 += 1)
            { 
                uint64_t l_131 = 0x8458067933A92D29LL;
                int32_t l_133 = 0x6F03D6BEL;
                int32_t l_135[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_135[i] = 0L;
                g_132 &= (((int16_t)((int32_t)(((int16_t)(l_109[0] &= ((int16_t)((g_91[g_106] ^ ((uint16_t)g_91[g_106] << (uint16_t)((((int16_t)((int64_t)(g_92 && l_38[0][0]) + (int64_t)l_38[0][0]) << (int16_t)p_4) <= l_130) < g_8))) , 0L) * (int16_t)g_92)) / (int16_t)p_6) > l_131) % (int32_t)g_91[0]) + (int16_t)l_130) , 0x01E7C2DCL);
                ++g_140[0];
            }
            l_151 = ((int32_t)(((uint8_t)((p_5 = ((uint64_t)(l_38[1][2] = (l_109[0] ^= ((l_130 < ((((g_9 != ((-2L) > g_45)) || g_106) > 4L) , p_6)) != l_149[0]))) - (uint64_t)l_22)) == g_82) + (uint8_t)1L) >= g_139) - (int32_t)l_150);
            for (l_134 = 2; (l_134 >= 0); l_134 -= 1)
            { 
                int i;
                l_109[l_134] = (0xDB89L <= ((uint16_t)9UL >> (uint16_t)3));
            }
        }
        else
        { 
            int32_t l_160 = 0x26A71AB2L;
            int32_t l_165 = 0x6B2A51B1L;
            if ((((-(int64_t)(p_3 , (((uint8_t)(~((l_38[1][0] = p_5) != (g_161 = ((uint64_t)((l_160 , g_23) , l_160) + (uint64_t)g_23)))) * (uint8_t)p_4) & 0xDEL))) | g_23) <= p_5))
            { 
                int8_t l_162 = (-10L);
                int32_t l_164 = 2L;
                int32_t l_166 = (-1L);
                int32_t l_167 = 1L;
                --g_169;
                l_166 = ((int16_t)((int64_t)((g_168 ^= ((l_38[0][0] = (g_110[2] = (2L & ((uint8_t)p_3 << (uint8_t)((2L > 0x67L) != g_8))))) , p_4)) , p_4) - (int64_t)4L) % (int16_t)65535UL);
            }
            else
            { 
                g_178 ^= g_161;
            }
            l_165 = ((((uint64_t)l_22 - (uint64_t)((((((uint8_t)((int32_t)(((int16_t)((int8_t)((((int8_t)((uint8_t)g_110[0] << (uint8_t)((g_139 <= 0xF2L) != 0xE5L)) << (int8_t)2) >= 250UL) != 0L) >> (int8_t)0) << (int16_t)8) ^ p_6) / (int32_t)l_160) >> (uint8_t)g_9) < g_178) , 0xA1B9E14AL) , p_6) > p_6)) && g_137) >= 65535UL);
        }
    }
    for (g_23 = (-19); (g_23 >= (-12)); g_23++)
    { 
        uint32_t l_201 = 0UL;
        l_201 ^= (((p_5 & ((uint8_t)((uint16_t)((int32_t)g_92 + (int32_t)(0x95L <= 0x76L)) << (uint16_t)p_7) % (uint8_t)1UL)) > 0UL) | 1UL);
    }
    return l_38[0][0];
}



static uint64_t  func_11(uint32_t  p_12, const uint64_t  p_13, const uint32_t  p_14, uint16_t  p_15, int32_t  p_16)
{ 
    int32_t l_20 = 0x0031AA08L;
    int32_t l_21 = 1L;
    l_21 ^= (((((int16_t)0x7F3EL << (int16_t)((-9L) ^ ((((l_20 ^ 0xFFL) <= p_15) | l_20) , g_9))) ^ g_9) , p_13) >= p_13);
    return g_9;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);

    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);

    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_217[i][j], "g_217[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_219, "g_219", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
