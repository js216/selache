// SPDX-License-Identifier: MIT
// cctest_csmith_e8114f11.c --- cctest case csmith_e8114f11 (csmith seed 3893448465)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x18405e3 */

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

// Options:   -s 3893448465 -o /tmp/csmith_gen_rw_sxyvt/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 0xAC204E2DL;
static uint8_t g_32 = 0x81L;
static uint32_t g_36 = 0UL;
static int32_t g_45 = (-1L);
static int64_t g_46 = 0xE360ABED9978317DLL;
static int8_t g_47 = 0x4AL;
static uint8_t g_51 = 0UL;
static int64_t g_68 = 2L;
static uint32_t g_74 = 0x960BD9B7L;
static uint64_t g_88 = 1UL;
static uint32_t g_99 = 0x137E2FFCL;
static int16_t g_101 = 0x0C75L;
static int64_t g_102 = (-1L);
static int32_t g_120 = 0xB757F9C6L;
static int32_t g_141[3] = {4L,4L,4L};
static uint8_t g_151[3][1] = {{1UL},{1UL},{1UL}};
static uint32_t g_154 = 0xAEC32A7DL;



static uint64_t  func_1(void);
static int32_t  func_5(int16_t  p_6, uint64_t  p_7, int32_t  p_8, int8_t  p_9);
static const uint8_t  func_18(uint32_t  p_19, int16_t  p_20, int32_t  p_21);




static uint64_t  func_1(void)
{ 
    uint64_t l_12 = 0x3E95AAD8530DE9BFLL;
    int32_t l_130 = 8L;
    for (g_2 = 0; (g_2 == (-1)); --g_2)
    { 
        uint8_t l_13 = 247UL;
        int32_t l_26 = 4L;
        l_130 = (l_26 = func_5(((((uint64_t)((l_13 = l_12) <= ((uint8_t)(((uint8_t)func_18(g_2, (((int16_t)((uint16_t)l_26 >> (uint16_t)9) / (int16_t)0xE3E4L) <= g_2), l_12) << (uint8_t)0) > l_26) % (uint8_t)0xCAL)) / (uint64_t)0xAF9D66DE6B933888LL) < 0L) < 0xCEF3CF6872920796LL), g_2, g_2, l_26));
        g_120 = ((((int16_t)(((((((((((uint8_t)((int16_t)g_2 * (int16_t)((g_88 = ((int8_t)((((g_74 , l_12) != 0x9FB00B4203E263A3LL) <= l_13) ^ g_32) / (int8_t)l_12)) > g_101)) % (uint8_t)(-7L)) ^ g_99) < 4294967286UL) > l_13) > l_12) | 18446744073709551615UL) & g_36) || l_130) >= 1UL) , g_68) << (int16_t)1) | g_46) && l_12);
    }
    l_130 = g_74;
    for (g_102 = (-4); (g_102 != 4); g_102++)
    { 
        uint32_t l_155 = 0xBC54FA01L;
        int32_t l_159[4];
        int i;
        for (i = 0; i < 4; i++)
            l_159[i] = 0xF34DD4F9L;
        for (g_36 = 0; (g_36 <= 2); g_36 += 1)
        { 
            int16_t l_156 = 0x6FC0L;
            for (g_68 = 0; (g_68 <= 2); g_68 += 1)
            { 
                int32_t l_149 = 5L;
                int8_t l_150[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_150[i][j] = 0xD5L;
                }
                g_120 = ((~((((((int8_t)((-(uint64_t)(~((uint64_t)g_141[g_68] + (uint64_t)((++g_151[0][0]) | ((g_154 &= g_141[g_68]) ^ ((l_155 , g_68) | l_12)))))) && g_45) - (int8_t)g_120) > 2L) != l_156) | g_141[g_68]) != l_156)) ^ l_155);
                l_130 = (g_141[0] , g_68);
            }
        }
        g_45 |= (g_2 < (l_159[2] ^= ((((int8_t)g_46 % (int8_t)(l_130 ^= (((((((((g_47 = (((((l_155 , g_141[0]) != l_12) , g_47) & l_155) || l_12)) <= g_99) , 7L) <= 0x263B0CC831229358LL) , g_99) ^ g_120) && l_155) , g_154) ^ g_74))) , l_155) != g_120)));
    }
    return l_130;
}



static int32_t  func_5(int16_t  p_6, uint64_t  p_7, int32_t  p_8, int8_t  p_9)
{ 
    int16_t l_33 = 0xBF79L;
    int32_t l_44 = 4L;
    int32_t l_48 = 0x8393131EL;
    int32_t l_49 = 0L;
    int32_t l_50[1];
    uint64_t l_109[3];
    uint64_t l_110 = 2UL;
    const uint32_t l_129 = 0x0D768DB5L;
    int i;
    for (i = 0; i < 1; i++)
        l_50[i] = 0L;
    for (i = 0; i < 3; i++)
        l_109[i] = 0xF80110037B860488LL;
    if ((p_6 , (((((l_33 <= ((uint8_t)255UL << (uint8_t)p_8)) != g_32) , g_2) <= 4294967292UL) <= 0xBCA0BECC33BAB721LL)))
    { 
        int32_t l_56[2];
        uint16_t l_100 = 0x47F2L;
        int i;
        for (i = 0; i < 2; i++)
            l_56[i] = 0x458D81C9L;
lbl_69:
        l_56[0] |= (l_50[0] = (g_45 ^= (((g_36 &= l_33) > ((-(uint16_t)((uint8_t)((uint8_t)((int16_t)g_2 / (int16_t)(++g_51)) * (uint8_t)((int8_t)(0L != 0xC76E8D2CA8E1F916LL) - (int8_t)g_47)) << (uint8_t)5)) <= p_8)) > 0xDAL)));
        for (g_45 = 0; (g_45 < (-7)); g_45 -= 1)
        { 
            int32_t l_83 = (-1L);
            uint64_t l_84[3][1];
            int32_t l_85 = 0xCB69ACB3L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_84[i][j] = 0UL;
            }
            if ((((((((uint64_t)(!((uint8_t)p_9 + (uint8_t)(((g_51 = ((int32_t)(0x4DL | (g_47 = ((uint8_t)((-2L) >= 0xB5ADL) << (uint8_t)l_56[0]))) / (int32_t)l_50[0])) && g_45) != 0L))) - (uint64_t)1L) , g_36) , g_47) ^ g_68) != 4L) >= (-1L)))
            { 
                if (g_32)
                    goto lbl_69;
            }
            else
            { 
                int8_t l_70 = 0xE4L;
                int32_t l_71 = 0xECEA67F4L;
                l_71 = ((-10L) ^ l_70);
                l_85 &= ((int8_t)(((g_74 = (-1L)) && (((l_56[0] || (l_71 = ((uint64_t)((int32_t)((((uint16_t)((uint32_t)p_6 + (uint32_t)1UL) % (uint16_t)l_83) || p_7) >= 0x4B50L) - (int32_t)0x2CFB7918L) / (uint64_t)p_7))) >= l_84[2][0]) <= p_9)) <= p_9) << (int8_t)p_7);
                if (l_71)
                    break;
            }
            for (g_74 = (-25); (g_74 < 53); g_74 += 9)
            { 
                if (l_50[0])
                    break;
                g_88 = p_9;
            }
            g_102 = ((uint16_t)(((uint8_t)((uint8_t)(g_47 || ((((int16_t)(((g_101 = ((p_7 &= (((int8_t)(p_9 = p_9) << (int8_t)((g_99 = l_84[0][0]) & l_100)) <= g_46)) & l_56[0])) <= g_47) >= p_6) % (int16_t)p_6) <= (-1L)) >= p_6)) / (uint8_t)g_47) << (uint8_t)0) , p_7) + (uint16_t)g_36);
        }
    }
    else
    { 
        uint32_t l_107 = 0xF55BD23AL;
        int32_t l_108 = 0x3015D2C3L;
        uint8_t l_111 = 0xE4L;
        l_111 ^= (l_49 ^= ((int64_t)(((((g_51--) <= ((((l_107 > (((g_88 = (((l_108 = 65535UL) && g_88) ^ l_33)) != g_47) || l_109[1])) == 0xD8EBL) , g_99) , g_101)) | 0x39L) | g_74) , l_110) % (int64_t)0xAD42751BA34BD091LL));
        g_45 = (g_51 ^ (((((uint8_t)(l_108 = ((0x4F12CA17A55E9D0FLL || (((g_46 = ((((((((int16_t)(((uint16_t)(g_120 = g_32) << (uint16_t)p_9) || 2L) << (int16_t)p_6) != 0xF969C76AL) > 0x6EL) , l_110) | g_45) & 0xCA015B29D1CA74A0LL) & p_9)) != 0x5C28DFD1F3BD0260LL) > 0x36L)) , 252UL)) * (uint8_t)l_44) || l_44) , 0x5F9F9906L) & l_107));
    }
    for (g_68 = (-21); (g_68 == (-17)); g_68++)
    { 
        l_44 = g_99;
    }
    g_45 = (p_7 | ((((uint32_t)((uint16_t)g_47 + (uint16_t)((uint64_t)8UL - (uint64_t)g_45)) % (uint32_t)4UL) | l_129) , l_50[0]));
    return p_6;
}



static const uint8_t  func_18(uint32_t  p_19, int16_t  p_20, int32_t  p_21)
{ 
    for (p_20 = 0; (p_20 == 28); ++p_20)
    { 
        for (p_19 = 0; (p_19 != 6); p_19 += 1)
        { 
            int32_t l_31 = 0L;
            l_31 = g_2;
        }
    }
    g_32 &= 9L;
    return g_32;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_151[i][j], "g_151[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
