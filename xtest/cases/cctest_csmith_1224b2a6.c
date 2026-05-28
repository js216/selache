// SPDX-License-Identifier: MIT
// cctest_csmith_1224b2a6.c --- cctest case csmith_1224b2a6 (csmith seed 304394918)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x74c589e0 */
/* @exp_ticks 0x32e9 */

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

// Options:   -s 304394918 -o /tmp/csmith_gen_ah0izkuj/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_3 = 0x4801897AL;
static int32_t g_13 = (-9L);
static int16_t g_14[3][1] = {{0L},{0L},{0L}};
static uint32_t g_16 = 0xBB8BFFBEL;
static int16_t g_61[2] = {(-1L),(-1L)};
static int32_t g_101 = 6L;
static uint32_t g_117 = 4294967292UL;
static uint8_t g_118 = 0xE3L;
static int8_t g_119 = 0x71L;
static int16_t g_130 = 0x29BAL;
static uint64_t g_131 = 18446744073709551612UL;
static uint32_t g_155 = 0xB8F1E77BL;
static int8_t g_182 = (-1L);
static uint32_t g_188 = 0x4C6000C4L;
static int64_t g_192 = 0x551306FF47357561LL;
static uint32_t g_193 = 1UL;
static int64_t g_204 = 8L;



static int16_t  func_1(void);
static uint8_t  func_25(const int8_t  p_26, uint16_t  p_27, int64_t  p_28, uint64_t  p_29, int64_t  p_30);
static uint64_t  func_33(uint32_t  p_34, int8_t  p_35, uint8_t  p_36);




static int16_t  func_1(void)
{ 
    int64_t l_2[4] = {6L,6L,6L,6L};
    int32_t l_15 = 0L;
    int32_t l_129 = 0x9CD64B8FL;
    int32_t l_167 = 1L;
    uint16_t l_172 = 65532UL;
    int32_t l_181 = (-9L);
    int i;
    for (g_3 = 0; g_3 < 4; g_3 += 1)
    {
        l_2[g_3] = 8L;
    }
    for (g_3 = 0; (g_3 > 17); g_3 = safe_add_func_int16_t_s_s(g_3, 1))
    { 
        uint64_t l_37 = 0xA88AF16DE6EAB3AELL;
        if (l_2[3])
            break;
        g_119 |= ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(0x08872FA4AD744D02LL, (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s(((++g_16) | 0x9CL))), (((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(func_25((((l_15 = (safe_mul_func_int8_t_s_s((func_33(g_13, g_13, g_14[2][0]) & g_14[0][0]), 0xB7L))) < g_14[2][0]) || l_15), l_37, l_2[0], l_37, l_37), g_14[2][0])), 1L)), 11)) ^ 0x56L) & l_37))))) <= l_2[3]), l_2[2])) != g_3);
        g_101 = (safe_unary_minus_func_uint16_t_u((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(g_61[0], (safe_sub_func_int32_t_s_s(0xF78960E8L, 3UL)))) && (-5L)) <= 0xB1128C18L), 3UL)), 4UL))));
    }
    if (((((g_13 , g_101) < ((l_15 ^= (g_16 & g_13)) && 0x01L)) >= 1UL) == 65533UL))
    { 
        uint32_t l_153 = 0x66D203B3L;
        for (l_15 = 0; (l_15 >= 0); l_15 -= 1)
        { 
            return g_61[0];
        }
        for (g_13 = 0; (g_13 <= 1); g_13 += 1)
        { 
            uint32_t l_154 = 0x657CAC61L;
            uint16_t l_173 = 0x442DL;
            g_131++;
            for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
            { 
                int i, j;
                return g_14[(g_13 + 1)][g_3];
            }
            for (g_130 = 0; (g_130 >= 0); g_130 -= 1)
            { 
                g_101 = (-1L);
            }
            for (g_16 = 0; (g_16 <= 0); g_16 += 1)
            { 
                int32_t l_156 = (-1L);
                int i, j;
                l_156 = ((safe_lshift_func_uint8_t_u_s((g_155 ^= (l_154 = (g_118 = (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((+(safe_lshift_func_uint16_t_u_s(g_14[(g_13 + 1)][g_16], 10))), ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(g_61[g_13], 0xDAC6L)), g_130)) == 1UL))), 6)), l_153)), 4)), g_13))))), g_14[0][0])) && g_3);
                l_15 = ((~(safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((g_155 = (g_130 , (+l_167))), (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(2L, 0x4A31L)), 0x52A0AEB1L)))) != l_2[3]), g_16)) > g_14[2][0]) <= l_172), (-10L))), g_14[2][0]))) != g_61[0]);
                l_173 &= g_117;
            }
        }
        return g_155;
    }
    else
    { 
        uint16_t l_178 = 0x208AL;
        uint32_t l_189 = 0xCC7407BCL;
        int32_t l_191 = (-10L);
        g_3 = ((((safe_add_func_uint8_t_u_u((g_118 = (((g_61[0] , (g_155 > (((safe_lshift_func_uint8_t_u_u((l_178 > 0x7460F080F8944229LL), g_61[0])) >= l_2[1]) & g_130))) & l_167) >= l_178)), g_16)) , 18446744073709551608UL) , g_61[0]) < g_14[2][0]);
        for (l_167 = 0; (l_167 != (-16)); l_167 = safe_sub_func_int16_t_s_s(l_167, 8))
        { 
            uint32_t l_183 = 0x38425995L;
            int32_t l_203[1];
            int i;
            for (i = 0; i < 1; i++)
                l_203[i] = 0x5E2C04EAL;
            if (l_2[3])
            { 
                --l_183;
                return l_15;
            }
            else
            { 
                uint64_t l_190 = 0UL;
                g_188 = ((g_119 , (safe_rshift_func_int16_t_s_s((l_129 && 0x995CB7F8L), g_61[0]))) == l_178);
                g_13 &= ((((g_131 = ((l_189 <= l_181) == ((l_190 == g_14[2][0]) , 0x2DB0L))) == g_119) <= g_61[1]) , 0xCB42118BL);
                --g_193;
            }
            for (g_118 = 0; (g_118 <= 6); g_118++)
            { 
                uint32_t l_205 = 0UL;
                const int64_t l_210 = 0x9D6885C31BE52F0DLL;
                g_13 = g_61[0];
                g_3 &= (((safe_rshift_func_uint8_t_u_u((~(safe_rshift_func_int16_t_s_s(0x6AC7L, 9))), (l_205++))) > (safe_mul_func_uint16_t_u_u(l_210, (!(safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((g_130 < l_167) >= g_117) && g_13), 0x0AFCBF960FFDD9DDLL)), g_61[0])))))) , 0x1BE58EEBL);
            }
        }
    }
    return l_2[3];
}



static uint8_t  func_25(const int8_t  p_26, uint16_t  p_27, int64_t  p_28, uint64_t  p_29, int64_t  p_30)
{ 
    int8_t l_47[1][1];
    int32_t l_48 = 0xF0945772L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_47[i][j] = (-1L);
    }
    if (p_26)
    { 
        const int64_t l_46[3][1] = {{0x20EEB4983CA30775LL},{0x20EEB4983CA30775LL},{0x20EEB4983CA30775LL}};
        int i, j;
        l_48 = (safe_mod_func_uint8_t_u_u(((g_3 || (p_30 >= (safe_mul_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((-1L) < 2L), g_14[2][0])), p_30)) >= p_29) != l_46[0][0]), 0x7F44L)))) ^ l_47[0][0]), p_27));
    }
    else
    { 
        int32_t l_73 = 9L;
        for (l_48 = 0; (l_48 < 9); l_48 = safe_add_func_int64_t_s_s(l_48, 8))
        { 
            uint32_t l_78 = 0xCBD95D60L;
            g_13 |= ((safe_mul_func_int16_t_s_s(((-8L) | g_3), ((p_30 | 0x07L) != l_48))) || (-4L));
            for (p_29 = 0; (p_29 <= 0); p_29 += 1)
            { 
                int32_t l_62 = 0L;
                int i, j;
                l_62 = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(g_14[p_29][p_29], ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_48, (g_61[0] = 247UL))), 0x96L)) , 0xC09CL))), 7)) , 1L);
                g_13 &= ((((safe_mul_func_uint16_t_u_u((l_78 ^= (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_73 & (((safe_add_func_uint64_t_u_u(p_27, (safe_sub_func_uint16_t_u_u(0xD45AL, 0x0A95L)))) | p_28) , g_61[0])), l_47[0][0])), 0x70L)), l_62)), l_73))), 0x11A6L)) == g_14[2][0]) == 4294967293UL) , p_28);
            }
        }
        g_13 = (safe_rshift_func_int8_t_s_s(l_47[0][0], 6));
    }
    for (p_27 = 0; (p_27 == 41); ++p_27)
    { 
        int32_t l_92 = 0x799115BAL;
        int32_t l_100 = 0xCF288C1BL;
        for (g_13 = 0; (g_13 >= 0); g_13 -= 1)
        { 
            uint64_t l_91 = 0x292FD4AE77DDBA47LL;
            int32_t l_110[2][2] = {{1L,1L},{1L,1L}};
            int i, j;
            if (((((g_14[(g_13 + 2)][g_13] , 1UL) >= (safe_div_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0xDAEE1FA0L, 0x74738709L)), 0UL)) , l_47[g_13][g_13]) < l_47[g_13][g_13]) , g_61[0]), l_91)) ^ 8UL), l_92))) , p_29) | 1L))
            { 
                uint8_t l_99 = 1UL;
                l_100 = (((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((((p_30 | ((((g_61[0] = (safe_sub_func_uint8_t_u_u((((g_61[0] > p_28) & 0x12L) , l_99), 0x5FL))) == g_14[2][0]) > p_30) , p_29)) | g_13) == g_14[(g_13 + 2)][g_13]) | 65535UL), p_29)) <= 0xE9507407L), p_26)) | g_3) & p_30);
                l_100 |= 0x8B7E04BEL;
                g_101 = 0x8F18CA9AL;
            }
            else
            { 
                int32_t l_109 = 0x9E1CF7F8L;
                g_101 = (safe_rshift_func_int16_t_s_s((+((l_110[0][0] = ((safe_mul_func_uint16_t_u_u(g_61[1], (safe_rshift_func_uint8_t_u_s(l_109, 0)))) < 0x5961L)) < g_14[(g_13 + 2)][g_13])), 2));
            }
            g_118 &= (g_101 = (((((safe_rshift_func_int8_t_s_u(g_61[1], 1)) & (g_117 |= ((g_13 & (((((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0L, g_101)), g_14[2][0])) ^ g_14[2][0]) , l_47[0][0]) != g_14[2][0]) <= 0x7DA897626F057967LL)) || g_61[0]))) ^ 0x6E275997L) , l_92) & p_30));
            if (g_3)
                continue;
        }
    }
    return g_117;
}



static uint64_t  func_33(uint32_t  p_34, int8_t  p_35, uint8_t  p_36)
{ 
    return g_13;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
