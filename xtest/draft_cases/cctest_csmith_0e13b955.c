// SPDX-License-Identifier: MIT
// cctest_csmith_0e13b955.c --- cctest case csmith_0e13b955 (csmith seed 236173653)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x66e2d201 */

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

// Options:   -s 236173653 -o /tmp/csmith_gen_hvq2tc_q/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 1L;
static int16_t g_39 = (-3L);
static uint32_t g_40 = 0xAED0F12AL;
static uint16_t g_62 = 0x909FL;
static int32_t g_119 = 0x1DA04F93L;
static uint8_t g_130 = 255UL;
static int16_t g_132[1] = {0x9AF7L};
static int32_t g_133 = 0x480F4B2DL;
static uint8_t g_135[2][1] = {{0x03L},{0x03L}};
static uint8_t g_154 = 1UL;
static uint8_t g_157 = 0x42L;
static uint32_t g_163 = 0x0722DCAAL;
static uint16_t g_176 = 1UL;



static uint8_t  func_1(void);
static int32_t  func_7(int64_t  p_8, int16_t  p_9, int64_t  p_10, uint8_t  p_11, uint8_t  p_12);
static const int32_t  func_43(uint64_t  p_44);




static uint8_t  func_1(void)
{ 
    int64_t l_6 = 0xE52D8CB4C23AFC37LL;
    int32_t l_27 = 8L;
    for (g_2 = 0; (g_2 < 12); g_2 = safe_add_func_uint8_t_u_u(g_2, 6))
    { 
        const int8_t l_25 = 0xA2L;
        int64_t l_28[4][4];
        uint32_t l_188 = 0xAB71BD0EL;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_28[i][j] = 0xE81DE9829CBC21B0LL;
        }
        if (g_2)
        { 
            uint64_t l_5 = 0x42A43D9532BB11ACLL;
            l_6 = l_5;
        }
        else
        { 
            int64_t l_16 = 2L;
            const int32_t l_26[2][3] = {{(-9L),1L,(-9L)},{(-9L),1L,(-9L)}};
            int i, j;
            g_176 = func_7((+(safe_mul_func_int16_t_s_s((l_16 ^= 1L), ((safe_mod_func_uint32_t_u_u((((safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((l_25 != (l_6 <= (-1L))), l_26[0][0])) & l_25), 4)) == g_2), g_2)) & l_6) , g_2), g_2)) , 0x5341L)))), l_26[1][2], l_27, l_28[3][1], l_28[3][1]);
            l_188 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((((safe_mul_func_uint16_t_u_u((l_16 & ((g_132[0] = g_154) ^ (safe_unary_minus_func_int8_t_s(((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_135[1][0], l_28[3][1])), l_26[0][0])) > 3UL))))), l_28[3][1])) < g_39) & l_27) != g_176), g_135[0][0])), l_16));
        }
    }
    return l_27;
}



static int32_t  func_7(int64_t  p_8, int16_t  p_9, int64_t  p_10, uint8_t  p_11, uint8_t  p_12)
{ 
    int8_t l_31 = 0x3EL;
    int32_t l_34[3][3] = {{(-1L),(-2L),(-1L)},{(-1L),(-2L),(-1L)},{(-1L),(-2L),(-1L)}};
    int64_t l_38 = 1L;
    int i, j;
    for (p_8 = 22; (p_8 < 25); p_8 = safe_add_func_uint16_t_u_u(p_8, 2))
    { 
        int32_t l_32 = 1L;
        int32_t l_33 = 0x511BD77DL;
        int32_t l_35 = 1L;
        int32_t l_36 = 0xD14B7180L;
        int32_t l_37[1];
        int i;
        for (i = 0; i < 1; i++)
            l_37[i] = 0x5BE734E2L;
        g_40--;
        if (func_43((safe_mod_func_uint16_t_u_u(((!(safe_div_func_int16_t_s_s((((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s(((g_39 | (safe_add_func_int32_t_s_s((g_40 >= (safe_lshift_func_int8_t_s_u((g_62 = (l_33 = (safe_sub_func_int32_t_s_s((-1L), l_38)))), 0))), l_35))) | l_38), p_10)) || p_8) & 1UL), 4)), g_40)) || l_31) ^ 0x8F38L) | l_37[0]) < g_39), l_32))) | l_37[0]), g_40))))
        { 
            int16_t l_140 = 0xCB97L;
            for (p_9 = 0; (p_9 <= (-28)); p_9--)
            { 
                l_140 = (0L != 0xDFL);
            }
            g_133 ^= (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(l_34[1][2], l_36)), (((safe_div_func_int32_t_s_s(0x0BE236C4L, l_140)) > g_132[0]) & 0UL))), g_135[0][0]));
        }
        else
        { 
            int64_t l_149[2][3] = {{0x911E249038C88683LL,0x911E249038C88683LL,0x911E249038C88683LL},{0xE4A58405453576D6LL,0xE4A58405453576D6LL,0xE4A58405453576D6LL}};
            int32_t l_159[1][4] = {{0x38E44D0BL,0x38E44D0BL,0x38E44D0BL,0x38E44D0BL}};
            int i, j;
            if ((g_133 = ((g_135[1][0] = (g_130 &= (g_132[0] , g_62))) < 0xE2L)))
            { 
                l_149[1][1] = 0L;
                l_34[1][0] = (safe_add_func_uint8_t_u_u(0UL, (safe_add_func_uint8_t_u_u(249UL, (g_154 |= l_36)))));
            }
            else
            { 
                int16_t l_158 = 1L;
                int32_t l_160 = 4L;
                int32_t l_161 = (-1L);
                int32_t l_162[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_162[i] = 0L;
                g_133 &= ((safe_sub_func_uint8_t_u_u((p_9 < 0xB23EE19FA1A8EB3BLL), (g_157 = g_39))) , (-1L));
                ++g_163;
            }
            for (l_35 = 0; l_35 < 3; l_35 += 1)
            {
                for (l_32 = 0; l_32 < 3; l_32 += 1)
                {
                    l_34[l_35][l_32] = 0xD58A4AD7L;
                }
            }
            if (p_12)
                break;
        }
        l_32 = (p_12 || ((((g_132[0] == ((safe_mul_func_int8_t_s_s((l_37[0] = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(g_133, p_8)), 13)) , 0xA36DL), 10))), g_135[0][0])) > 0x71L)) <= 0xADL) ^ p_12) > p_10));
    }
    return l_34[0][2];
}



static const int32_t  func_43(uint64_t  p_44)
{ 
    uint32_t l_66 = 0x653D3A1AL;
    int16_t l_98[2][1];
    int32_t l_116[3][3] = {{0L,0L,0L},{(-9L),(-9L),(-9L)},{0L,0L,0L}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_98[i][j] = (-1L);
    }
    for (g_39 = 0; (g_39 >= (-19)); g_39--)
    { 
        uint8_t l_114 = 0x7CL;
        int32_t l_131[2][4] = {{0x5FABF039L,0x5FABF039L,0x24CF1313L,0x5FABF039L},{0x5FABF039L,0xA82727C9L,0xA82727C9L,0x5FABF039L}};
        int i, j;
        l_66 = (safe_unary_minus_func_uint16_t_u(g_62));
        for (g_62 = 0; (g_62 == 14); ++g_62)
        { 
            uint32_t l_92 = 0x890B8A2EL;
            int32_t l_93 = 0x24E13FEAL;
            int32_t l_95 = 0x13AA7A40L;
            if ((!g_39))
            { 
                int8_t l_75 = 1L;
                int32_t l_94[1][4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_94[i][j] = 0x21D01231L;
                }
                l_95 |= ((((safe_sub_func_int16_t_s_s((l_94[0][2] ^= ((l_93 = (safe_mul_func_int16_t_s_s((((~l_75) , 0xC1L) & ((safe_div_func_uint8_t_u_u((((((((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((~(((safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(g_39, l_66)) == g_40), p_44)) , 0xB2L), g_40)))) != (-8L)), (-2L))) != g_39) >= p_44)), 4)) | p_44), g_39)) && l_92) == g_40) == g_39) == p_44) | 1UL) <= 0x672E3E38L), 0xDAL)) ^ p_44)), p_44))) | 0xA5BFL)), p_44)) , 0xE7A216D7L) < (-5L)) , l_93);
                l_95 = ((safe_lshift_func_int8_t_s_u((-4L), 0)) <= l_75);
            }
            else
            { 
                if (g_40)
                    break;
                return g_40;
            }
            for (p_44 = 0; (p_44 <= 0); p_44 += 1)
            { 
                int32_t l_115 = 1L;
                int i, j;
                l_116[0][1] = (~((l_115 = (((safe_mul_func_int16_t_s_s((l_98[p_44][p_44] ^ (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_93 = ((safe_mod_func_int32_t_s_s((p_44 , (((((((((safe_rshift_func_int16_t_s_s(((p_44 >= p_44) >= 0L), 13)) <= g_40) != l_66) || g_39) ^ p_44) > p_44) != g_62) != g_39) || 0xB3L)), 0x95A02EA2L)) >= 0xFB872A0FL)), 5)), p_44)) ^ g_62) , l_95), l_114)), g_40))), 0x204FL)) && l_98[0][0]) < p_44)) ^ 0L));
                l_93 = (p_44 & ((safe_lshift_func_int16_t_s_s((l_116[0][1] || 0x99L), g_2)) , l_93));
                g_119 = g_2;
            }
            for (g_40 = 5; (g_40 <= 57); g_40 = safe_add_func_int16_t_s_s(g_40, 7))
            { 
                uint8_t l_128 = 1UL;
                int32_t l_134[3][3] = {{0L,(-2L),0L},{(-10L),(-10L),(-10L)},{0L,(-2L),0L}};
                int i, j;
                g_130 = (((safe_lshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s(((4294967295UL >= (safe_rshift_func_int16_t_s_u((l_128 & (+(0x93L == 1L))), 15))) > g_2), l_92)) < p_44), 13)) < 1L) | g_62);
                ++g_135[1][0];
            }
        }
    }
    return l_116[0][1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_132[i], "g_132[i]", print_hash_value);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_135[i][j], "g_135[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
