// SPDX-License-Identifier: MIT
// cctest_csmith_93c95b70.c --- cctest case csmith_93c95b70 (csmith seed 2479446896)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4741bc4 */

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

// Options:   -s 2479446896 -o /tmp/csmith_gen_plu9ryv0/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_10 = 4294967295UL;
static int8_t g_12 = 0x8FL;
static int8_t g_60[4] = {0L,0L,0L,0L};
static uint16_t g_62 = 8UL;
static int32_t g_65 = 0xE39B9AA6L;
static int16_t g_68[1][2] = {{3L,3L}};
static uint16_t g_69 = 0UL;
static int32_t g_75 = (-1L);
static uint64_t g_119 = 9UL;
static int64_t g_129 = 8L;
static int32_t g_131 = 1L;
static uint32_t g_145 = 0xD366BA46L;
static uint32_t g_151[3][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL}};



static uint8_t  func_1(void);
static uint16_t  func_18(const uint64_t  p_19, uint16_t  p_20);
static int32_t  func_23(int32_t  p_24, int32_t  p_25, int32_t  p_26);




static uint8_t  func_1(void)
{ 
    const uint8_t l_11 = 0x3BL;
    int32_t l_15 = 0x5B2906C9L;
    uint64_t l_21 = 3UL;
    uint16_t l_166 = 0x30F5L;
    int32_t l_167 = 0xDB9AC067L;
    int32_t l_168[3][3] = {{(-1L),(-1L),(-1L)},{3L,0x92F19563L,3L},{(-1L),(-1L),(-1L)}};
    uint16_t l_169 = 0x8CF0L;
    int i, j;
    g_12 |= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_10, (0x45307222L && l_11))), g_10)), l_11)), 4));
    g_151[2][0] |= (safe_rshift_func_uint16_t_u_s((l_15 = 1UL), ((safe_rshift_func_uint16_t_u_u(func_18(g_10, (l_21 = l_11)), 3)) > g_68[0][1])));
    g_131 = (g_60[0] <= (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_21 <= (((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_69 | l_166), l_167)), g_12)), g_62)), 1L)) | l_166) != g_75)), l_168[1][0])), g_145)));
    return l_169;
}



static uint16_t  func_18(const uint64_t  p_19, uint16_t  p_20)
{ 
    int64_t l_22[4][3] = {{0x9B58331C587C7AB8LL,1L,0x722BA7B7E80D68F9LL},{0x9B58331C587C7AB8LL,0x9B58331C587C7AB8LL,1L},{1L,1L,1L},{1L,0L,0x722BA7B7E80D68F9LL}};
    uint8_t l_34 = 0x60L;
    int32_t l_48 = 0L;
    int32_t l_49 = 0xDD68647DL;
    int32_t l_72 = 1L;
    uint32_t l_130 = 4294967293UL;
    int i, j;
    for (g_10 = 0; (g_10 <= 2); g_10 += 1)
    { 
        uint32_t l_31 = 1UL;
        int32_t l_40 = 0xBE41B0CEL;
        if (func_23((safe_mul_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(l_31, g_12)) ^ ((0xF118C84BL && g_12) != p_19)) | g_10), g_10)), g_10, p_19))
        { 
            uint32_t l_41 = 0x137D3709L;
            int32_t l_61 = 7L;
            if ((safe_mul_func_uint16_t_u_u(l_34, (safe_mod_func_int16_t_s_s((((+((l_41 = ((l_40 = (safe_sub_func_uint8_t_u_u((l_34 , p_20), p_20))) == 1L)) <= g_10)) , l_34) || g_10), 0x0997L)))))
            { 
                return l_40;
            }
            else
            { 
                l_49 &= ((((l_48 = (safe_div_func_uint16_t_u_u(65535UL, (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((l_40 = ((0x890FL | (g_10 != p_20)) && g_12)) < p_19) , g_10), g_12)), l_34))))) , g_12) == g_12) > 0x88L);
            }
            if ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_41, 7)), (((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((g_10 , (l_49 = (((((6UL & (-1L)) , (-4L)) <= g_12) >= g_12) <= l_48))) ^ l_41) < (-1L)), 0)), p_19)) > p_20), l_48)) ^ l_22[2][0]) ^ l_41))))
            { 
                return p_19;
            }
            else
            { 
                int8_t l_66 = 0L;
                int32_t l_67 = 0xEAF53593L;
                ++g_62;
                g_69++;
                if (p_19)
                    break;
            }
        }
        else
        { 
            if (g_65)
                break;
            if (l_48)
            { 
                l_72 = 0L;
                return p_20;
            }
            else
            { 
                return l_31;
            }
        }
        for (l_40 = 0; (l_40 <= 2); l_40 += 1)
        { 
            uint8_t l_84[2];
            int i;
            for (i = 0; i < 2; i++)
                l_84[i] = 0xC4L;
            for (p_20 = 0; (p_20 <= 2); p_20 += 1)
            { 
                int i, j;
                g_75 &= (18446744073709551615UL || ((~(!(65535UL & (l_22[p_20][p_20] <= g_65)))) , g_60[0]));
                l_84[0] = (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(p_19, (safe_rshift_func_uint16_t_u_s(0x1D26L, 1)))) , (safe_div_func_int16_t_s_s((3UL <= 4294967295UL), p_20))), g_68[0][0]));
                g_75 = g_75;
            }
            l_49 = 0L;
        }
        l_48 |= 1L;
        for (l_49 = 2; (l_49 >= 0); l_49 -= 1)
        { 
            int i, j;
            if (((0UL & (((((!((safe_mul_func_int16_t_s_s(((l_22[(l_49 + 1)][l_49] ^ (((0xA67FE427CCDDECA6LL ^ p_20) <= l_31) , l_22[(l_49 + 1)][l_49])) & l_22[0][2]), 0xA080L)) || 18446744073709551609UL)) & l_22[(l_49 + 1)][l_49]) , 6UL) || 0x16ABE3F1L) && 0x5A17L)) , l_34))
            { 
                uint16_t l_92 = 65535UL;
                int32_t l_93 = 0xFCE132E4L;
                l_48 = (0UL | (safe_div_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(l_92, (g_75 < l_92))) || l_31), l_48)));
                l_93 = p_19;
            }
            else
            { 
                uint32_t l_106 = 0x0E74272AL;
                int32_t l_107 = (-6L);
                l_107 = ((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(g_65, 0x9A6A910B13A75C33LL)) > ((safe_unary_minus_func_uint16_t_u(((+(safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_12, (-10L))), l_106))) || p_19))) && p_20)), g_60[3])), l_106)) , 0x40F3C649L);
            }
        }
    }
    if ((+(safe_div_func_uint8_t_u_u(p_19, p_19))))
    { 
        int8_t l_111 = 0L;
        l_48 &= (l_111 = g_68[0][1]);
    }
    else
    { 
        int16_t l_114 = 0x5296L;
        int32_t l_117 = (-8L);
        for (p_20 = 0; (p_20 != 34); ++p_20)
        { 
            uint32_t l_118 = 3UL;
            int32_t l_143[3][3] = {{0xAB548CD5L,0x5D27DBBCL,0xAB548CD5L},{0xAB548CD5L,0x5D27DBBCL,0xAB548CD5L},{0xAB548CD5L,0x5D27DBBCL,0xAB548CD5L}};
            int i, j;
            if ((l_117 &= ((0x44L != l_114) , (safe_add_func_int16_t_s_s((4294967295UL <= 0xE26BD804L), l_34)))))
            { 
                int8_t l_132[1];
                int32_t l_142 = 0x28A2DDD9L;
                int i;
                for (i = 0; i < 1; i++)
                    l_132[i] = 0xF2L;
                g_75 = (g_119 ^= (p_19 , ((l_117 ^= ((g_75 || (g_12 & l_118)) <= l_72)) & l_118)));
                l_132[0] = (safe_lshift_func_int16_t_s_s((g_68[0][1] || ((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_131 = ((((g_129 |= (safe_sub_func_int16_t_s_s((!g_69), 0x8D53L))) == p_19) , l_130) > g_60[0])), g_10)), 65527UL)) && g_12)), 3));
                l_143[2][0] = (((safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((!g_75), 1)), 0)), ((l_142 = g_68[0][1]) | (g_75 || g_69)))) || 0xC9EDL), g_10)) < l_118) && l_142);
            }
            else
            { 
                int32_t l_144[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_144[i][j] = 0L;
                }
                ++g_145;
                l_117 = (safe_mul_func_uint8_t_u_u(l_117, (safe_unary_minus_func_uint16_t_u(g_69))));
            }
        }
    }
    return p_19;
}



static int32_t  func_23(int32_t  p_24, int32_t  p_25, int32_t  p_26)
{ 
    return p_25;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_151[i][j], "g_151[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
