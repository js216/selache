// SPDX-License-Identifier: MIT
// cctest_csmith_2ee92cf5.c --- cctest case csmith_2ee92cf5 (csmith seed 787033333)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6b2a2479 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
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

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 787033333 -o /tmp/csmith_gen_0z1y0mjc/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_3 = 0x3C7730F9L;
static int8_t g_12 = 0xB1L;
static uint16_t g_18 = 65529UL;
static int8_t g_32 = 0x24L;
static int32_t g_37 = 0xBCAE26E1L;
static int16_t g_53 = 0xF179L;
static uint8_t g_75 = 0x3CL;
static int16_t g_111[3][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
static int32_t g_112 = 0x0B690C4FL;
static int64_t g_114 = 0x524CF1313BA82727LL;
static int32_t g_115 = 0x777C7316L;
static int8_t g_119[2] = {0xC2L,0xC2L};
static uint8_t g_122 = 255UL;
static uint32_t g_133 = 1UL;
static int64_t g_136 = 0x6CF4C4C9405672CFLL;
static uint16_t g_138 = 0x98EAL;
static int64_t g_156 = 1L;
static uint64_t g_197 = 0xFF6FCCE82B33C22ALL;



static int8_t  func_1(void);
static uint8_t  func_8(int32_t  p_9);
static uint32_t  func_13(uint32_t  p_14);
static int32_t  func_19(int32_t  p_20, int16_t  p_21, int8_t  p_22, uint32_t  p_23);




static int8_t  func_1(void)
{ 
    const uint8_t l_2 = 0xCFL;
    int32_t l_17 = 0x9A2B82C4L;
    int32_t l_211 = 7L;
    int32_t l_212[3];
    int i;
    for (i = 0; i < 3; i++)
        l_212[i] = 0xB3161228L;
    g_3 = l_2;
    for (g_3 = 0; (g_3 <= (-7)); g_3 = safe_sub_func_uint64_t_u_u(g_3, 7))
    { 
        if (g_3)
            break;
    }
    l_212[1] = ((l_211 = (safe_mul_func_uint8_t_u_u(func_8((g_3 = (((((((((g_12 == (g_12 < func_13((safe_div_func_int64_t_s_s((g_18 ^= ((g_12 , (l_17 = g_12)) , 0x46E33A79CC099A56LL)), 18446744073709551615UL))))) || 0x8E44D0B2L) < l_2) < 0x1E0E4F97B649564ALL) <= g_119[0]) > 0xBF0FL) && 18446744073709551612UL) == 0xA244EFACDBCB6AF0LL) < l_2))), g_136))) != l_2);
    return g_112;
}



static uint8_t  func_8(int32_t  p_9)
{ 
    uint16_t l_175 = 0xA1AEL;
    int32_t l_199 = 0x3F918541L;
    for (g_37 = 0; (g_37 <= 1); g_37 += 1)
    { 
        int32_t l_155 = 0xD1AA54D7L;
        int32_t l_161 = 0x8FB60584L;
        int32_t l_174 = 0xB29CEE28L;
        int i;
        if ((safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(g_119[g_37], (safe_add_func_int32_t_s_s((g_119[g_37] == ((l_155 ^= (safe_mod_func_int64_t_s_s(g_119[g_37], (safe_add_func_int32_t_s_s((-1L), 0x5EF69CA3L))))) != 65535UL)), g_156)))) <= 18446744073709551608UL) == g_133), 12)) ^ p_9) , (-6L)), g_138)), p_9)))
        { 
            uint32_t l_160 = 0xAB2ABFE3L;
            l_161 = (safe_lshift_func_int8_t_s_s((p_9 , (+(l_160 || 8L))), 3));
            g_112 = ((-1L) & (safe_add_func_int32_t_s_s(((((+((p_9 != p_9) > ((((safe_lshift_func_int8_t_s_s((l_155 = 0xCCL), g_18)) , 0x11784055L) , p_9) < 6L))) < 0x725CL) & g_53) ^ g_18), 0xB771C4A6L)));
            l_175 = (p_9 ^ ((+(l_174 = (((safe_mod_func_int16_t_s_s((g_53 = (safe_rshift_func_int16_t_s_s(((l_155 = l_160) & g_122), 6))), (safe_lshift_func_int8_t_s_u((((p_9 || 0x332266F017B851E1LL) || p_9) != p_9), 5)))) != g_119[0]) , g_111[1][2]))) <= 0x40E3EB90L));
        }
        else
        { 
            int8_t l_176 = (-1L);
            uint32_t l_196 = 18446744073709551615UL;
            int32_t l_198 = 4L;
            l_176 = l_175;
            g_112 = (l_199 = ((((l_198 = (!(safe_mod_func_uint32_t_u_u((l_155 , ((l_174 = p_9) | ((safe_add_func_uint64_t_u_u((g_197 = (((((((safe_sub_func_uint32_t_u_u(((((((((((safe_mul_func_int16_t_s_s(0xD18CL, ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((1L && 0xFEE91EC5L) , p_9), 0x12FE6111B435A66DLL)), p_9)), g_53)) >= p_9), p_9)) ^ 0x6F44L), 0)) >= 0x799408CDE8390A2ELL))) & l_155) > 4294967290UL) , l_176) || g_115) ^ p_9) || p_9) < 4UL) && g_115) ^ l_175), g_119[0])) || l_175) ^ l_175) <= l_176) & l_175) , l_196) != g_111[1][2])), 18446744073709551606UL)) , g_119[0]))), l_176)))) , p_9) || l_175) | p_9));
            l_155 = g_133;
        }
        l_155 = ((safe_lshift_func_int8_t_s_s((g_18 || (g_197 = p_9)), (((((safe_mod_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u((g_75 , l_199), g_119[g_37])) != 0x3EL) != g_136) || l_174), 4294967289UL)) >= g_119[g_37]) , g_114) != p_9) > p_9))) <= p_9);
    }
    for (g_156 = 5; (g_156 == (-29)); g_156 = safe_sub_func_uint8_t_u_u(g_156, 1))
    { 
        uint64_t l_208 = 0x2558545B0B498444LL;
        l_208++;
        l_199 = g_119[0];
    }
    return p_9;
}



static uint32_t  func_13(uint32_t  p_14)
{ 
    uint8_t l_130 = 0UL;
    int32_t l_131 = 0x5C9911E2L;
    int32_t l_132[2];
    int32_t l_137 = 0x3B5FD349L;
    int i;
    for (i = 0; i < 2; i++)
        l_132[i] = 0L;
    l_130 = func_19(g_18, (safe_div_func_int64_t_s_s(g_18, p_14)), p_14, g_12);
    ++g_133;
    g_138--;
    return l_132[1];
}



static int32_t  func_19(int32_t  p_20, int16_t  p_21, int8_t  p_22, uint32_t  p_23)
{ 
    uint8_t l_26 = 0x81L;
    int64_t l_44 = 0x46C20B13309E69C1LL;
    int32_t l_67[3][2];
    uint32_t l_74 = 0x841AE9ECL;
    int32_t l_90[1][2][5] = {{{0x52C2AB48L,0L,0L,0x52C2AB48L,0L},{0x52C2AB48L,0x52C2AB48L,(-9L),0x52C2AB48L,0x52C2AB48L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_67[i][j] = 7L;
    }
    if (l_26)
    { 
        int16_t l_35 = 0xAD6CL;
        if (p_22)
        { 
            uint32_t l_36 = 1UL;
            int32_t l_38 = (-6L);
            g_32 = ((((1UL >= (+g_12)) > (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(p_21, g_18)), g_3))) | l_26) && p_23);
            l_38 = (safe_rshift_func_int8_t_s_u(l_35, (l_36 , ((g_37 &= ((l_35 , (((g_12 , l_35) , g_32) == p_21)) ^ 0xBD4DAED0L)) & p_23))));
        }
        else
        { 
            const int32_t l_43 = 0xA4FDAF0DL;
            int32_t l_76[2][2][5] = {{{(-3L),0L,0xE326E24EL,0L,(-3L)},{(-3L),0L,0xE326E24EL,0L,(-3L)}},{{(-3L),0L,0xE326E24EL,0L,(-3L)},{(-3L),0L,0xE326E24EL,0L,(-3L)}}};
            int i, j, k;
lbl_66:
            for (g_18 = (-15); (g_18 != 9); g_18 = safe_add_func_int64_t_s_s(g_18, 6))
            { 
                p_20 = (safe_add_func_int16_t_s_s((-1L), (((0UL || (l_43 , 8UL)) || l_35) > l_44)));
                if (l_43)
                    break;
                if (g_3)
                    break;
            }
            if ((safe_rshift_func_uint16_t_u_s(((0xE3335A02A909F00FLL < (p_20 , ((safe_rshift_func_uint8_t_u_s((g_53 = (((safe_add_func_int32_t_s_s(l_43, (((p_22 , g_12) , 1UL) , 4294967295UL))) , p_20) , 0x2CL)), 7)) | 0L))) != l_26), p_23)))
            { 
                uint8_t l_54 = 0x41L;
                int32_t l_65 = 0x0F592B02L;
                g_37 = (g_18 , l_54);
                p_20 = (safe_rshift_func_uint8_t_u_s(0xE6L, (l_65 ^= ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_3, (65531UL ^ (safe_sub_func_int64_t_s_s(((l_35 , l_43) || 0x6A8E8C09L), g_12))))), 0x23L)), g_3)) | g_32))));
            }
            else
            { 
                if (l_44)
                    goto lbl_66;
            }
            for (g_37 = 1; (g_37 >= 0); g_37 -= 1)
            { 
                l_76[0][0][0] = ((safe_add_func_int8_t_s_s((((l_35 & (((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((g_75 = (l_67[0][0] = (l_74 = (((g_3 , (1UL && (g_18 | p_21))) , p_20) , g_32)))), 0x95A5D72DEFE8EB26LL)), p_22)) || l_35) > l_35)) & 0x49L) , p_20), g_18)) > l_35);
                if (g_53)
                    continue;
                if (g_53)
                    continue;
            }
        }
    }
    else
    { 
        int64_t l_87[3];
        int32_t l_106 = 0x0BF87F31L;
        int32_t l_117 = 0x265A930EL;
        int i;
        for (i = 0; i < 3; i++)
            l_87[i] = 0x947D74E5B049C75CLL;
        g_37 = (+(safe_unary_minus_func_int8_t_s((safe_div_func_int16_t_s_s((l_44 , (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((l_90[0][1][3] = ((l_67[1][0] |= ((safe_mul_func_uint8_t_u_u(((g_53 >= (3L || ((++g_75) >= ((p_22 , g_18) | p_23)))) , p_23), l_87[0])) , g_53)) > 0x1AD49712L)) , p_23), (-1L))), l_87[2]))), 0xB75EL)))));
        if (((-1L) <= 0x44E8L))
        { 
            g_37 = (+(p_21 < (g_3 > (safe_rshift_func_int16_t_s_u(l_87[0], 14)))));
        }
        else
        { 
            const uint32_t l_94 = 0x4CD53591L;
            int32_t l_104 = 0x063CD606L;
            int64_t l_105 = 6L;
            int32_t l_116 = 0x006628F0L;
            int32_t l_118[3][4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_118[i][j] = 0x445DC917L;
            }
            l_90[0][0][2] ^= l_94;
            for (l_26 = 0; (l_26 <= 1); l_26 += 1)
            { 
                int32_t l_113 = 1L;
                int32_t l_120 = (-7L);
                int32_t l_121 = 0L;
                int i;
                l_67[0][0] = (g_114 &= (((((g_37 = ((safe_add_func_uint32_t_u_u((((~((safe_lshift_func_uint8_t_u_u(1UL, 2)) >= l_87[(l_26 + 1)])) || ((safe_sub_func_uint8_t_u_u(l_87[l_26], ((g_112 = ((safe_lshift_func_uint16_t_u_s((++g_18), (safe_lshift_func_int8_t_s_s(((l_87[(l_26 + 1)] != l_105) ^ g_3), l_104)))) >= g_111[2][0])) != l_113))) == g_111[0][0])) >= 0xFDL), p_21)) != 1L)) > p_21) >= 0x9FB1L) == 0xC8AEE2D86AEC8E11LL) || 0x8A5FABF0L));
                if (p_21)
                    continue;
                ++g_122;
            }
            for (g_122 = (-10); (g_122 > 42); g_122++)
            { 
                uint32_t l_129 = 0x9B18AFF3L;
                p_20 = g_18;
                l_118[0][0] = 0x5480BE89L;
                p_20 &= ((l_90[0][1][3] = ((safe_rshift_func_uint8_t_u_u(g_112, (g_111[2][0] , p_22))) != l_94)) <= l_129);
            }
        }
        return l_26;
    }
    return l_74;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_111[i][j], "g_111[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);

    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
