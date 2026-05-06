// SPDX-License-Identifier: MIT
// cctest_csmith_285cbfe5.c --- cctest case csmith_285cbfe5 (csmith seed 677167077)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb39491b9 */

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

// Options:   -s 677167077 -o /tmp/csmith_gen_ysc9xwp_/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint8_t g_17 = 1UL;
static uint32_t g_52 = 0xF459CADFL;
static uint8_t g_68 = 0x54L;
static int32_t g_72 = 0x36D0B4E5L;
static int64_t g_73 = 0x2D5FA5676063AEBCLL;
static int8_t g_75 = 0x1CL;
static uint32_t g_76 = 4294967295UL;
static uint64_t g_81 = 0xCFE46DA0476F2A9ELL;
static uint8_t g_82 = 0x92L;
static int64_t g_85 = 0x5641E62B9925C1F9LL;
static uint32_t g_104 = 0UL;
static uint8_t g_109 = 0x54L;
static int16_t g_117 = 1L;
static int32_t g_152 = 0x93BA38B5L;
static int16_t g_186 = 0xB456L;
static int32_t g_187 = 9L;
static int32_t g_190 = 0x4417017BL;
static uint8_t g_191 = 1UL;
static int32_t g_205[2][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
static uint8_t g_254[3][1] = {{0xC5L},{0xC5L},{0xC5L}};
static uint32_t g_299[3][4] = {{0xC7FAE4A8L,1UL,0xC7FAE4A8L,0xC7FAE4A8L},{1UL,1UL,0UL,1UL},{1UL,0xC7FAE4A8L,0xC7FAE4A8L,1UL}};
static uint16_t g_400 = 1UL;



static uint16_t  func_1(void);
static int8_t  func_2(int32_t  p_3, int32_t  p_4);
static int32_t  func_9(const int64_t  p_10, int8_t  p_11, uint8_t  p_12, int8_t  p_13, int64_t  p_14);




static uint16_t  func_1(void)
{ 
    int64_t l_7 = 0x33992443250E6DA5LL;
    int32_t l_8 = 4L;
    int32_t l_153 = 0xA6A51F09L;
    int64_t l_285[1][2];
    int32_t l_316 = 0xF8601DBEL;
    uint16_t l_329 = 0x41CFL;
    uint32_t l_367 = 6UL;
    int32_t l_373 = 0L;
    int32_t l_374[2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_285[i][j] = 0xE24EC49DA8A4F390LL;
    }
    for (i = 0; i < 2; i++)
        l_374[i] = (-6L);
    l_285[0][1] = (func_2((l_8 = (safe_add_func_int32_t_s_s(l_7, 0x3C4AB274L))), (l_153 = func_9(((((((safe_mul_func_int16_t_s_s(((((g_17 != 0x7DL) <= 0x31L) , 1L) > l_7), g_17)) | g_17) | g_17) , 18446744073709551615UL) && l_7) | g_17), l_7, l_7, l_7, l_7))) || 0L);
    g_205[1][2] = (safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((l_153 = ((l_8 = ((safe_add_func_uint16_t_u_u((!(safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(l_8, 6)) <= l_285[0][1]), ((l_8 < l_285[0][0]) > l_8))), g_72))), 65535UL)) | 0x6D647E48L)) ^ g_76)) , (-3L)), g_299[0][2])) & l_285[0][1]), g_205[1][1]));
    if ((safe_rshift_func_int8_t_s_s((((!(safe_mod_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(g_254[2][0], (((g_73 > (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_190, l_7)) , g_109), l_153))) ^ l_153) , l_7))) >= l_153) == l_153), g_104))) , l_7) | g_109), 0)))
    { 
        int16_t l_314 = 0x123DL;
        int32_t l_317[2][2];
        uint64_t l_326 = 1UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_317[i][j] = (-1L);
        }
        for (g_85 = 0; (g_85 <= 13); g_85 = safe_add_func_uint32_t_u_u(g_85, 6))
        { 
            int16_t l_313 = (-4L);
            int32_t l_315 = 5L;
            int64_t l_318 = (-7L);
            int32_t l_319 = 0xF928E1D7L;
            int32_t l_320 = 0x43DC1E37L;
            int32_t l_321 = 0L;
            int32_t l_322 = 0x9C512B72L;
            int32_t l_323 = 0x5A927A8FL;
            int32_t l_324 = 7L;
            int32_t l_325 = 0L;
            --l_326;
        }
        --l_329;
    }
    else
    { 
        int32_t l_342[3];
        int32_t l_369[1][2];
        int32_t l_376[3][3] = {{(-1L),0x897FB165L,(-1L)},{(-1L),(-1L),(-1L)},{(-1L),0x897FB165L,(-1L)}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_342[i] = 0L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_369[i][j] = 0x8E918BFDL;
        }
        g_190 = ((safe_sub_func_uint32_t_u_u(5UL, ((((safe_sub_func_int8_t_s_s((255UL ^ (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_285[0][1], l_329)), 2)), 1UL))), l_342[1])) < l_342[1]) <= 0x7A08B2CF65C6CC01LL) , l_316))) , 0xECDA24C8L);
        if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((g_68 = (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_add_func_int64_t_s_s((g_73 , (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_205[0][1], (safe_div_func_uint8_t_u_u((g_254[2][0] &= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((~((safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((0L != l_153), l_8)) >= l_8), 0x26L)) & g_17)), 8)), g_117))), g_152)))), 0x73F8D645L))), l_367)))), 0L))) <= l_342[2]), l_316)), l_285[0][0])))
        { 
            uint8_t l_368 = 1UL;
            int32_t l_370 = 0x75E4D4F8L;
            int32_t l_371[1][2];
            int64_t l_372[4] = {0xFDA8591A7F807323LL,0xFDA8591A7F807323LL,0xFDA8591A7F807323LL,0xFDA8591A7F807323LL};
            int16_t l_375 = (-9L);
            uint32_t l_377 = 0UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_371[i][j] = 0x3001091EL;
            }
            g_205[0][1] = l_368;
            g_152 ^= l_368;
            l_377++;
        }
        else
        { 
            uint16_t l_389[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_389[i][j] = 7UL;
            }
            g_152 = ((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((g_254[2][0] && ((safe_unary_minus_func_int32_t_s(((safe_sub_func_int32_t_s_s((l_376[1][2] = (safe_div_func_int32_t_s_s(0x1CB40238L, l_389[0][0]))), 0L)) | 0xAD0AL))) || 2L)), 0xBF82D76AL)) & 2UL) <= 4UL) < (-4L)), g_104)) , g_299[1][0]);
            l_369[0][1] = ((safe_add_func_int16_t_s_s((g_75 | (((safe_mul_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((g_400 = l_389[0][0]) || ((-9L) & l_342[2])), 255UL)), g_75)), 6)) , 1L) > 1L) && 0UL), l_389[0][0])) == l_369[0][1]) >= g_82)), l_153)) , (-3L));
        }
        for (l_153 = 25; (l_153 >= (-29)); l_153 = safe_sub_func_int8_t_s_s(l_153, 4))
        { 
            for (g_400 = 0; (g_400 <= 1); g_400 += 1)
            { 
                int i;
                l_374[g_400] = (safe_add_func_int32_t_s_s(l_374[g_400], (2L & ((safe_rshift_func_uint8_t_u_s(0xF3L, 5)) & l_374[g_400]))));
            }
        }
    }
    return g_187;
}



static int8_t  func_2(int32_t  p_3, int32_t  p_4)
{ 
    uint64_t l_159 = 1UL;
    int32_t l_164 = 0L;
    int32_t l_165 = 0x974F8CE8L;
    int32_t l_166[3][3] = {{(-1L),(-1L),0x0227E61DL},{(-1L),(-1L),0x0227E61DL},{(-1L),(-1L),0x0227E61DL}};
    int16_t l_258 = (-1L);
    int i, j;
lbl_278:
    if ((5L <= ((((safe_lshift_func_uint16_t_u_u((l_164 = (((safe_mul_func_int8_t_s_s((l_165 &= ((~((((-10L) > ((l_159++) & (safe_rshift_func_int16_t_s_u(p_4, l_164)))) < g_75) ^ 255UL)) < g_117)), 0UL)) <= g_82) <= 0x942D81DFL)), 14)) < l_166[2][1]) , p_4) != 0x8D0C3C174B8878B8LL)))
    { 
        uint32_t l_174 = 5UL;
        int32_t l_194[4][1];
        int32_t l_202 = 0xDE25B276L;
        const int64_t l_238[4][1] = {{0xE092BE84D80A8361LL},{0x857E4DE94C89D1CELL},{0xE092BE84D80A8361LL},{0x857E4DE94C89D1CELL}};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_194[i][j] = (-1L);
        }
        if (((((g_73 = (-1L)) == (++g_81)) || (!(safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(l_174, ((((safe_sub_func_int64_t_s_s(((0xC435FAD4L <= g_17) , g_85), 0L)) >= p_4) <= 1L) , p_4))) || g_109), 8)))) ^ l_164))
        { 
            uint8_t l_177 = 3UL;
            int32_t l_185 = 0x7B41E479L;
            if ((l_166[2][1] == g_85))
            { 
                uint64_t l_184 = 0xE3A1466A0411C86BLL;
                p_3 |= ((l_177 = 0xB609C629L) ^ (safe_lshift_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(l_166[2][1], 11)) & (((65534UL != 0L) | l_184) <= 0x4F42L)), l_185)) | g_117) <= g_17), 7)));
            }
            else
            { 
                int16_t l_188 = 4L;
                int32_t l_189 = (-4L);
                int32_t l_201 = (-8L);
                ++g_191;
                l_194[1][0] = l_174;
                g_190 = (((((safe_sub_func_int32_t_s_s(g_117, (p_3 != (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_201 |= (((l_165 = l_189) > 0L) && g_191)), l_174)), 0xB001L))))) , l_188) , l_177) == l_177) >= l_202);
            }
            for (l_159 = (-21); (l_159 > 6); l_159 = safe_add_func_uint16_t_u_u(l_159, 3))
            { 
                uint16_t l_206 = 65535UL;
                p_3 |= (1UL != g_117);
                g_205[0][1] = (g_152 |= (l_166[2][1] , (g_190 = l_194[0][0])));
                g_205[0][0] = (g_190 = ((l_206 || (safe_mul_func_int8_t_s_s(((1L > ((0x2E6D4CF9D2C0AA69LL ^ 1UL) >= p_3)) <= g_205[0][1]), g_186))) != l_177));
            }
            if (((safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((p_3 ^ (((g_82 >= ((p_3 >= g_68) >= 0xF7L)) <= p_3) <= g_205[0][2])) >= 65535UL), p_4)) == g_152), p_4)) | p_3))
            { 
                uint16_t l_217 = 0x9CDAL;
                p_3 = (p_3 || ((g_75 |= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(l_174, 0)), p_4))) && l_217));
            }
            else
            { 
                uint16_t l_218[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_218[i][j] = 0x0CCCL;
                }
                l_218[1][0]++;
                g_190 ^= ((g_186 < (g_109 | l_177)) && l_218[1][0]);
                l_185 = (safe_rshift_func_int8_t_s_s((-1L), (g_82 ^ 4294967295UL)));
            }
        }
        else
        { 
            uint32_t l_225 = 0UL;
            int32_t l_239 = 0x86C83C06L;
            int32_t l_245 = 0x01EDFECEL;
            int32_t l_247 = 0L;
            int32_t l_249 = 0L;
            int32_t l_250 = 0xCF030322L;
            int32_t l_251 = 1L;
            int32_t l_252[3][4] = {{0x3650ACC4L,1L,1L,0x3650ACC4L},{(-3L),1L,4L,1L},{1L,0xD58CC530L,4L,4L}};
            int64_t l_253 = 7L;
            int i, j;
lbl_240:
            l_202 = ((((g_76 &= ((g_205[0][1] = (safe_sub_func_int64_t_s_s((g_82 != (((l_164 = ((0x25A9L ^ (l_225 > p_3)) < 0x17L)) <= 0xB729E55A8641CA8BLL) || 0x1349L)), 0x8376B8D06BC6574CLL))) , 0UL)) | 0xB297967EL) , p_4) <= l_166[2][1]);
            if ((safe_mul_func_uint16_t_u_u(l_202, (safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((p_4 && ((l_239 = ((((g_205[0][0] ^= ((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((p_4 , 0x5E6F1A9054024899LL) & p_3), l_238[0][0])) || 0xF7EFL), 0xE5FEL)), 3)) || g_76)) | l_174) != 0x7A3EL) <= 0x3BL)) ^ l_166[1][1])) >= l_225), p_4)) < 0UL), g_152)))))
            { 
                p_3 = l_165;
                if (g_109)
                    goto lbl_240;
            }
            else
            { 
                int8_t l_244 = 1L;
                int32_t l_246 = 0x8E1A808AL;
                int32_t l_248[2][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_248[i][j] = 0x01C1735FL;
                }
                g_152 = (((safe_unary_minus_func_uint64_t_u((0L <= g_205[1][2]))) <= ((l_239 = ((g_186 = (safe_add_func_int16_t_s_s(l_244, l_225))) < l_244)) <= 0x0A88L)) & p_3);
                g_254[2][0]++;
            }
        }
        return g_186;
    }
    else
    { 
        int64_t l_257 = 0L;
        int32_t l_263 = 0xF30CB5C3L;
        int32_t l_274 = 0xC57F3ED9L;
        for (g_191 = 0; (g_191 <= 0); g_191 += 1)
        { 
            int64_t l_264 = 0xEE67ACDC2055BE12LL;
            p_3 = (((l_258 = l_257) , (safe_mul_func_int8_t_s_s(((((-1L) || (l_263 = (g_76 = (safe_mod_func_uint32_t_u_u(((g_205[1][2] , 8L) && g_52), p_4))))) && l_264) >= g_104), l_257))) == l_264);
            for (p_4 = 0; (p_4 <= 1); p_4 += 1)
            { 
                int i, j;
                return g_254[(g_191 + 1)][g_191];
            }
        }
        for (g_152 = 0; (g_152 >= 0); g_152 -= 1)
        { 
            uint16_t l_273 = 65535UL;
            p_3 = (safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u(5UL, (g_75 ^= 0x73L)))));
            for (g_68 = 0; (g_68 <= 0); g_68 += 1)
            { 
                int i, j;
                l_274 |= (((safe_div_func_int8_t_s_s(((((((l_263 ^= ((safe_mod_func_int8_t_s_s(((0x82L ^ (g_254[g_68][g_152] > (+g_205[(g_152 + 1)][(g_68 + 1)]))) & g_152), p_4)) , g_52)) < 9L) < p_3) , 0L) ^ 0x19L) <= g_190), l_273)) , g_85) | 0x2301L);
                g_205[0][0] &= (safe_mul_func_int8_t_s_s(p_3, (g_82 < (((~l_273) & 65534UL) == 0UL))));
                if (l_159)
                    goto lbl_278;
                g_205[(g_152 + 1)][(g_68 + 1)] = 0x93D74D1DL;
            }
        }
    }
    l_165 ^= (5L > (safe_sub_func_int32_t_s_s(l_164, (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((l_159 & 0x59C2F6A3L) & p_4) | l_166[2][1]), p_3)), l_166[2][1])))));
    return g_205[0][1];
}



static int32_t  func_9(const int64_t  p_10, int8_t  p_11, uint8_t  p_12, int8_t  p_13, int64_t  p_14)
{ 
    uint64_t l_20[1];
    int32_t l_21[1][3];
    int32_t l_54[4][1];
    int64_t l_71 = (-6L);
    uint32_t l_98 = 0UL;
    uint8_t l_124 = 255UL;
    int64_t l_151[1][4];
    int i, j;
    for (i = 0; i < 1; i++)
        l_20[i] = 5UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_21[i][j] = (-2L);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_54[i][j] = 4L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_151[i][j] = 0xD62ACC67245343E2LL;
    }
    if (((safe_sub_func_uint32_t_u_u((l_21[0][1] = l_20[0]), (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((p_13 == ((((safe_div_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((g_17 = p_13), 0xD4L)) , l_20[0]), l_20[0])) >= 18446744073709551615UL) ^ 0x0E708BEE6DABAC8ELL) , 0xA885C82F744ED25ELL)), p_10)), 0UL)))) , l_20[0]))
    { 
        const uint64_t l_39 = 0x24D8F3B1AD31FC53LL;
        int32_t l_69 = 0xF2CFEAA3L;
        int32_t l_70[1][4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_70[i][j] = 1L;
        }
        if ((g_17 <= (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(0xAA435C5265879A27LL, (!g_17))), p_14)) , l_39), g_17)), l_39))))
        { 
            uint32_t l_51 = 0UL;
            int32_t l_53 = 0xFA41D407L;
            l_54[1][0] = (safe_mod_func_int8_t_s_s((g_17 <= (l_21[0][1] = (((!(safe_mul_func_int16_t_s_s((g_52 ^= (safe_mul_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((l_39 | ((safe_rshift_func_uint8_t_u_u((l_51 = (g_17 && (-4L))), g_17)) || p_12)), g_17)) , 0xC2L) >= 4UL), 1L))), l_53))) != 0x55EFL) < 0x2125954AL))), 0x79L));
            if ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u(g_52, p_12)) ^ ((1UL < (-1L)) > l_53)), g_17)))
            { 
                uint32_t l_67 = 1UL;
                g_68 = ((p_10 > ((safe_lshift_func_int16_t_s_s((p_13 > ((safe_mod_func_int8_t_s_s((l_53 = ((safe_add_func_int16_t_s_s((((safe_div_func_int8_t_s_s(0x1AL, l_39)) , p_10) || 0xA1248F7C4FBB7F47LL), 1UL)) , l_67)), p_11)) != g_17)), 7)) | p_14)) != g_17);
                l_70[0][2] = (l_69 ^= 1L);
                l_21[0][1] ^= p_14;
            }
            else
            { 
                int32_t l_74[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_74[i] = 0L;
                --g_76;
                g_81 = (safe_rshift_func_int16_t_s_u((g_68 < l_74[0]), (l_74[0] != 18446744073709551615UL)));
                g_82 &= ((((((p_14 && 0x58L) <= l_74[1]) , l_53) < g_52) >= l_39) == 0x611CF5FC6D38C14FLL);
            }
        }
        else
        { 
            return g_17;
        }
        g_85 ^= ((safe_lshift_func_uint16_t_u_s((l_70[0][2] = g_73), 13)) , (p_13 || (g_68 == l_21[0][1])));
        for (g_82 = 0; (g_82 >= 41); g_82++)
        { 
            int8_t l_99 = 1L;
            int32_t l_100 = 0x5F205D52L;
            int32_t l_101 = 0x22496703L;
            l_54[1][0] = p_13;
            l_101 |= ((p_13 | ((safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u((l_99 = ((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((g_75 = g_68), p_11)), l_98)), 65527UL)) != p_14)), l_100)) != 3L) != l_69) && l_70[0][2]), p_14)) > (-1L))) > p_14);
            g_104 ^= ((l_100 = (((g_76 &= (safe_sub_func_int16_t_s_s(8L, l_70[0][2]))) > 4294967295UL) >= 0x46CB947F03FA11D7LL)) > 0xEB45L);
        }
    }
    else
    { 
        int64_t l_108 = (-1L);
        int32_t l_116 = 0L;
        for (g_76 = 0; (g_76 == 37); g_76++)
        { 
            uint16_t l_107 = 8UL;
            g_109 = ((((((l_108 |= ((-1L) >= (l_107 &= (p_11 | (g_81 ^ p_13))))) || 1L) , 0UL) && 0x88338C19L) || l_21[0][1]) , l_107);
            for (p_14 = (-24); (p_14 <= 26); ++p_14)
            { 
                l_21[0][0] = (safe_rshift_func_uint16_t_u_u(g_85, 5));
            }
        }
        g_117 = (l_116 = (safe_lshift_func_int8_t_s_s(p_13, (g_52 > p_13))));
    }
    if ((safe_sub_func_int32_t_s_s(g_82, (+(((safe_mul_func_uint8_t_u_u(p_14, (~((g_104 , l_124) || g_17)))) & l_124) >= p_11)))))
    { 
        uint8_t l_138 = 252UL;
        int8_t l_139 = 0xE9L;
        l_21[0][0] = (safe_rshift_func_uint16_t_u_s(65531UL, (((safe_lshift_func_int16_t_s_s((((g_109--) & (safe_add_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u(((safe_mod_func_int8_t_s_s(g_68, (safe_mul_func_int8_t_s_s(((0xA16697889B5E22BCLL == l_138) , g_17), 255UL)))) || l_71))) <= l_139), p_14))) >= p_13), 9)) & p_12) || l_21[0][1])));
        return p_13;
    }
    else
    { 
        uint8_t l_147 = 0UL;
        for (g_52 = 0; (g_52 <= 0); g_52 += 1)
        { 
            uint64_t l_140 = 0xC8C0895B47B8CDD7LL;
            int32_t l_148 = (-8L);
            ++l_140;
            l_54[1][0] = ((((safe_mul_func_uint16_t_u_u((g_72 , g_82), (safe_lshift_func_uint16_t_u_u((l_147 , l_147), l_98)))) > p_12) || 6L) && p_10);
            l_148 = p_11;
        }
    }
    g_152 &= (safe_sub_func_uint8_t_u_u(l_21[0][0], l_151[0][1]));
    return g_82;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_205[i][j], "g_205[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_254[i][j], "g_254[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_299[i][j], "g_299[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_400, "g_400", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
