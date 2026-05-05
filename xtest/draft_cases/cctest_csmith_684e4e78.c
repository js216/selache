// SPDX-License-Identifier: MIT
// cctest_csmith_684e4e78.c --- cctest case csmith_684e4e78 (csmith seed 1749962360)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4a15c6d3 */

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

// Options:   -s 1749962360 -o /tmp/csmith_gen_s6z_yruv/csmith.c --concise --safe-math-wrappers 0 --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint16_t g_12 = 0UL;
static uint16_t g_25 = 65535UL;
static int32_t g_40 = 9L;
static int32_t g_101 = 0x60B33856L;
static uint64_t g_107 = 0x51DBEEE9A1886388LL;
static uint32_t g_110[2] = {0x17BD2F3BL,0x17BD2F3BL};



static uint32_t  func_1(void);
static uint32_t  func_3(int32_t  p_4);
static uint16_t  func_7(const int16_t  p_8, int64_t  p_9, uint32_t  p_10, uint16_t  p_11);




static uint32_t  func_1(void)
{ 
    uint16_t l_2 = 0UL;
    uint32_t l_13 = 0x20B95AE6L;
    if (((l_2 | func_3(((uint16_t)func_7(((0L == l_2) | l_2), g_12, g_12, l_13) >> (uint16_t)l_2))) , g_101))
    { 
        uint32_t l_111 = 0xBF0B25D9L;
        return l_111;
    }
    else
    { 
        int32_t l_112 = 0xEE726552L;
        l_112 = (((((l_112 != (-(uint16_t)0xDB4EL)) >= ((1UL || l_2) == 9L)) ^ 5UL) == 4294967295UL) ^ 0x31L);
    }
    g_101 &= (-5L);
    return g_110[0];
}



static uint32_t  func_3(int32_t  p_4)
{ 
    int32_t l_94 = 0x6FA9739AL;
    uint16_t l_95 = 0UL;
    if (g_40)
    { 
        g_40 = g_40;
    }
    else
    { 
        uint32_t l_89 = 0xD4F06586L;
        int32_t l_90 = 0x33379BBDL;
        l_90 ^= ((-2L) <= ((uint32_t)0x4C4DC475L - (uint32_t)l_89));
        if ((((int16_t)(l_89 > ((-(int16_t)((l_95 = ((0x676DC049D9BB22B2LL != (l_94 == 0x73L)) != g_12)) || g_12)) | 0x50B76A7FFA302576LL)) + (int16_t)p_4) && (-1L)))
        { 
            int8_t l_100 = 8L;
            g_101 &= ((uint16_t)((((int8_t)0xA1L % (int8_t)(((l_90 = p_4) != l_95) , l_100)) & 0xCE843D8BAA40D6DDLL) && g_40) % (uint16_t)p_4);
        }
        else
        { 
            if ((l_94 ^ p_4))
            { 
                uint64_t l_102 = 0UL;
                return l_102;
            }
            else
            { 
                return p_4;
            }
        }
        g_110[1] ^= (g_40 = ((((((uint8_t)(((((((uint8_t)(g_107 = 0xCEL) << (uint8_t)(((uint32_t)((l_90 & l_94) && p_4) + (uint32_t)g_101) < p_4)) != 0x5696F087L) ^ 0UL) || 1L) <= p_4) <= 0x1954L) / (uint8_t)l_95) >= g_40) , g_107) && p_4) && p_4));
    }
    return p_4;
}



static uint16_t  func_7(const int16_t  p_8, int64_t  p_9, uint32_t  p_10, uint16_t  p_11)
{ 
    uint32_t l_16[4] = {7UL,7UL,7UL,7UL};
    int i;
    if (((int16_t)(l_16[3] != p_8) >> (int16_t)l_16[3]))
    { 
        int32_t l_24 = 0xE936BE85L;
        int32_t l_63 = 0xB8F5B6EFL;
        int32_t l_64 = 0xDEEAF792L;
        int32_t l_65 = (-9L);
        if (((((((uint64_t)((g_12 , ((int8_t)((int8_t)(-(uint16_t)(((g_12 == l_24) , p_11) >= 0x96L)) - (int8_t)p_11) + (int8_t)0xE4L)) && g_12) / (uint64_t)0x07DDBF4DF7B1466ALL) >= g_12) , 1UL) > p_9) && g_12))
        { 
            uint16_t l_61[1];
            int32_t l_62 = 0x351F4A1AL;
            int32_t l_66 = 0x97A12B2FL;
            int i;
            for (i = 0; i < 1; i++)
                l_61[i] = 1UL;
            --g_25;
            for (p_9 = (-27); (p_9 < 22); p_9 += 1)
            { 
                uint8_t l_32 = 0x82L;
                int32_t l_39 = 0xFF74F57BL;
                g_40 = (((int8_t)l_32 - (int8_t)((int8_t)((int64_t)(((uint16_t)(p_10 != (((((l_39 = p_11) | 0xB4L) | g_12) < l_16[3]) <= 0xE4L)) / (uint16_t)65527UL) || 0xB4L) % (int64_t)l_32) >> (int8_t)1)) || p_8);
            }
            l_66 &= (((l_24 = p_9) , ((((uint8_t)0x01L % (uint8_t)(((((int8_t)((uint32_t)(l_64 = (((int8_t)((uint64_t)((((uint16_t)((((l_63 ^= ((((((uint8_t)((int64_t)(l_61[0] = (((uint64_t)(l_24 = (((0x1890L && l_24) && p_8) <= 0L)) / (uint64_t)0x24264A3A207B8A5FLL) >= g_12)) - (int64_t)l_62) << (uint8_t)g_25) , p_8) > g_12) , g_40) != g_12)) & l_16[3]) < g_25) , g_40) * (uint16_t)l_16[1]) & g_40) != l_62) / (uint64_t)g_25) / (int8_t)p_8) , 0x3A6950E6L)) % (uint32_t)3L) << (int8_t)p_10) > l_65) <= 1L) ^ 0x918CD8B1L)) != 3L) > p_9)) & l_65);
        }
        else
        { 
            uint64_t l_71 = 18446744073709551615UL;
            for (p_11 = 0; (p_11 > 37); p_11 += 3)
            { 
                int16_t l_72 = 0x4BDAL;
                l_72 = ((((uint8_t)(g_25 || (l_71 = 0x88L)) >> (uint8_t)1) == l_16[3]) < 65535UL);
            }
            l_63 ^= (g_40 = ((uint16_t)(g_25 = l_16[3]) * (uint16_t)((int32_t)((((p_8 , (((int32_t)(((int8_t)p_10 - (int8_t)p_9) & 0x1705L) / (int32_t)p_10) && 0x2910E9FBL)) & 0L) , g_40) > 0xCA7AF0C8B8AFECA8LL) % (int32_t)p_11)));
        }
        g_40 &= p_10;
    }
    else
    { 
        uint16_t l_85 = 0x6EC2L;
        int32_t l_86[3];
        int i;
        for (i = 0; i < 3; i++)
            l_86[i] = 0xF9F05BB7L;
        g_40 = (((int8_t)((int16_t)(l_85 = (-10L)) - (int16_t)(((0xDBC33063L >= (-10L)) == g_12) , 65535UL)) * (int8_t)3L) || g_25);
        l_86[1] = g_12;
    }
    return l_16[3];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
