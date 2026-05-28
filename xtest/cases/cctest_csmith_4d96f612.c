// SPDX-License-Identifier: MIT
// cctest_csmith_4d96f612.c --- cctest case csmith_4d96f612 (csmith seed 1301739026)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xad23f2da */
/* @exp_ticks 0x7bc7 */

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

// Options:   -s 1301739026 -o /tmp/csmith_gen_8zmxvln_/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
};


static int32_t g_3 = 4L;
static uint64_t g_82 = 0xD70783DB47DC4622LL;
static int16_t g_106 = 0x7FB9L;
static uint32_t g_118 = 0UL;
static int32_t g_123 = 0L;
static uint16_t g_126 = 0UL;
static int64_t g_134[3][4] = {{0x4845EB5F4D78F30ELL,0x1E07D3A0897D506DLL,0x4845EB5F4D78F30ELL,0x4845EB5F4D78F30ELL},{0x1E07D3A0897D506DLL,0x1E07D3A0897D506DLL,0x0E2D30B1440D3F7DLL,0x1E07D3A0897D506DLL},{0x1E07D3A0897D506DLL,0x4845EB5F4D78F30ELL,0x4845EB5F4D78F30ELL,0x1E07D3A0897D506DLL}};
static int64_t g_137 = (-1L);
static int64_t g_139 = 0x83F02998B4E4A0A6LL;
static struct S0 g_145 = {1L,-7L};
static uint8_t g_169 = 254UL;
static const uint8_t *g_168 = &g_169;
static int32_t g_175[6][3] = {{0x17488B34L,(-7L),(-7L)},{2L,0xF72E784EL,2L},{0x17488B34L,0x17488B34L,(-7L)},{1L,0xF72E784EL,1L},{0x17488B34L,(-7L),(-7L)},{2L,0xF72E784EL,2L}};
static uint8_t g_176 = 0x7BL;
static int64_t g_241 = (-5L);
static const int32_t g_258 = 0x60FB9728L;
static const int32_t *g_257 = &g_258;
static const int32_t **g_256 = &g_257;
static int32_t g_284 = (-1L);
static int64_t g_285 = (-1L);
static uint64_t g_286 = 0x4A9CA1E3233A39EELL;
static int32_t g_300 = 0x14F6FAD5L;
static int16_t g_301 = 0xAB2CL;
static int64_t g_302 = (-1L);
static uint8_t g_303 = 0UL;
static uint16_t g_320[1] = {0xB818L};
static union U1 g_323 = {{0x21F7912FL,0x8CA2ACE5L}};
static union U1 *g_322 = &g_323;
static int16_t *g_328 = (void*)0;
static int16_t **g_327 = &g_328;
static uint16_t g_342 = 4UL;
static struct S0 *g_345 = (void*)0;
static int32_t g_355 = 0xCCD831EBL;
static int8_t g_356 = 0x09L;
static int32_t *g_360 = &g_300;
static uint8_t g_379 = 0x2DL;
static uint64_t g_390 = 0x2F1D17CBE859488BLL;
static struct S0 g_438 = {1L,0x5B90CCFEL};
static int16_t ***g_519[3][2][6] = {{{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327}},{{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327}},{{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327}}};
static int32_t g_564[1][1][7] = {{{0xEA723659L,0xEA723659L,0xEA723659L,0xEA723659L,0xEA723659L,0xEA723659L,0xEA723659L}}};
static uint64_t *g_625 = &g_286;
static uint64_t * const *g_624 = &g_625;
static uint64_t g_628[6][5][4] = {{{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL}},{{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL}},{{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL}},{{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL}},{{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL}},{{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL},{1UL,1UL,0x050D2A1CC46439B7LL,0x050D2A1CC46439B7LL}}};
static uint16_t *g_659 = (void*)0;
static const int32_t g_767 = 0xC0C06F63L;
static struct S0 g_850 = {0x6DC94C58L,1L};
static uint32_t g_892 = 18446744073709551615UL;
static union U1 **g_906 = &g_322;
static struct S0 g_1024[2] = {{0xE22D3E6FL,0L},{0xE22D3E6FL,0L}};
static int16_t g_1035 = 0x4C80L;
static uint32_t *g_1039 = &g_118;
static uint32_t **g_1038 = &g_1039;
static uint8_t g_1107 = 9UL;
static uint32_t g_1175[3][1] = {{0x1D4B40B9L},{0x1D4B40B9L},{0x1D4B40B9L}};
static union U1 g_1234[4][2][1] = {{{{{0xC6C72940L,0L}}},{{{-7L,0x984D1A08L}}}},{{{{0xC6C72940L,0L}}},{{{-7L,0x984D1A08L}}}},{{{{0xC6C72940L,0L}}},{{{-7L,0x984D1A08L}}}},{{{{0xC6C72940L,0L}}},{{{-7L,0x984D1A08L}}}}};
static const struct S0 *g_1290 = (void*)0;
static const struct S0 **g_1289 = &g_1290;
static int32_t g_1316[4] = {0x153CB9F8L,0x153CB9F8L,0x153CB9F8L,0x153CB9F8L};
static int8_t g_1331 = 3L;
static int8_t g_1337 = (-10L);
static int32_t g_1376 = 0L;
static uint32_t g_1443 = 0xFA5F43AEL;
static const int32_t *g_1499 = (void*)0;
static const int32_t **g_1498 = &g_1499;
static int32_t ** const *g_1516 = (void*)0;
static int32_t ** const **g_1515 = &g_1516;
static int32_t ** const ***g_1514 = &g_1515;
static int16_t * const ***g_1593 = (void*)0;
static int16_t * const ****g_1592 = &g_1593;
static int8_t *g_1600 = &g_1331;
static uint64_t **g_1622 = &g_625;
static int32_t *g_1657 = &g_438.f1;
static int8_t g_1658[7] = {0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L};
static int64_t *g_1663 = &g_285;
static int64_t **g_1729 = &g_1663;
static int64_t ***g_1728 = &g_1729;
static int32_t **g_1835 = &g_360;
static int32_t ***g_1834 = &g_1835;
static int32_t ****g_1833[4] = {&g_1834,&g_1834,&g_1834,&g_1834};
static int32_t *****g_1832 = &g_1833[3];
static int16_t ** const *g_1935[6][6] = {{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,&g_327,&g_327,&g_327}};
static int16_t ** const **g_1934 = &g_1935[5][2];
static const int16_t g_1942 = 0x0F71L;
static const int16_t *g_1941 = &g_1942;
static const int16_t **g_1940 = &g_1941;
static const int16_t ***g_1939[1][6][2] = {{{&g_1940,&g_1940},{&g_1940,&g_1940},{&g_1940,&g_1940},{&g_1940,&g_1940},{&g_1940,&g_1940},{&g_1940,&g_1940}}};
static const int16_t ****g_1938[6] = {(void*)0,&g_1939[0][5][1],(void*)0,(void*)0,&g_1939[0][5][1],(void*)0};
static int16_t g_2025 = 4L;
static int32_t g_2133 = (-1L);
static int16_t g_2143 = 0x4D87L;
static union U1 g_2511 = {{0x76BEAB5CL,0x43B78E92L}};
static const int32_t ****g_2576 = (void*)0;
static struct S0 *** const *g_2620 = (void*)0;
static struct S0 *** const **g_2619 = &g_2620;
static uint8_t g_2752 = 0x93L;
static int64_t g_2778 = 0x891B22CA08C62DF7LL;
static int32_t g_2797 = (-8L);
static uint16_t **g_2802 = &g_659;
static uint16_t ***g_2801 = &g_2802;
static uint16_t ****g_2800 = &g_2801;
static int64_t g_2845 = 1L;
static const int16_t g_2847 = 5L;
static uint64_t ***g_2890[6] = {&g_1622,&g_1622,&g_1622,&g_1622,&g_1622,&g_1622};
static uint64_t ****g_2889 = &g_2890[5];
static uint32_t ***g_2898 = (void*)0;
static uint32_t ****g_2897[4][1] = {{&g_2898},{&g_2898},{&g_2898},{&g_2898}};
static uint16_t g_2932 = 65535UL;
static int32_t *g_2933 = &g_2797;
static const uint32_t ***g_3048[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const uint32_t ****g_3047[7][2][1] = {{{(void*)0},{&g_3048[2]}},{{(void*)0},{&g_3048[1]}},{{&g_3048[1]},{&g_3048[1]}},{{&g_3048[1]},{(void*)0}},{{&g_3048[2]},{(void*)0}},{{&g_3048[1]},{&g_3048[1]}},{{&g_3048[1]},{&g_3048[1]}}};
static int32_t ** const g_3110 = (void*)0;
static int32_t ** const *g_3109 = &g_3110;
static uint32_t *g_3121 = &g_892;
static uint32_t **g_3120[6] = {&g_3121,&g_3121,&g_3121,&g_3121,&g_3121,&g_3121};
static struct S0 * const *g_3130 = &g_345;
static struct S0 * const * const *g_3129 = &g_3130;
static struct S0 * const * const **g_3128 = &g_3129;
static struct S0 ***g_3160 = (void*)0;
static int64_t g_3205 = (-1L);
static int32_t ***g_3213 = (void*)0;
static int8_t g_3269 = 0xA4L;
static struct S0 ****g_3331 = &g_3160;
static uint64_t g_3530 = 18446744073709551615UL;
static uint8_t *g_3553 = &g_379;
static uint8_t **g_3552 = &g_3553;
static int64_t g_3556 = (-10L);
static int16_t g_3623 = 0xA6A7L;
static uint16_t g_3638 = 0x75FBL;
static const int32_t *****g_3830 = &g_2576;
static struct S0 g_3848 = {7L,0x7871239BL};
static const uint32_t g_3913 = 1UL;
static uint64_t g_3918[5] = {0UL,0UL,0UL,0UL,0UL};
static uint32_t g_3921 = 0x1CDE3425L;



static int16_t  func_1(void);
static int16_t  func_10(uint16_t  p_11, const uint64_t  p_12, const uint8_t  p_13, int16_t  p_14);
static int16_t  func_17(int8_t  p_18, uint32_t  p_19, uint64_t  p_20, uint64_t  p_21, union U1  p_22);
static uint8_t  func_27(const int8_t  p_28, union U1  p_29);
static uint32_t  func_38(int32_t  p_39, struct S0  p_40, struct S0  p_41);
static int32_t  func_42(int32_t  p_43, int64_t  p_44, const int8_t  p_45);
static uint32_t  func_46(int32_t  p_47, int16_t  p_48, int8_t  p_49);
static uint8_t  func_53(uint64_t  p_54);




static int16_t  func_1(void)
{ 
    int64_t l_2[1][6][3] = {{{0xCE9D05BA772304B2LL,4L,4L},{0xCE9D05BA772304B2LL,4L,4L},{0xCE9D05BA772304B2LL,4L,4L},{0xCE9D05BA772304B2LL,4L,4L},{0xCE9D05BA772304B2LL,4L,4L},{0xCE9D05BA772304B2LL,4L,4L}}};
    uint16_t l_15[4][1];
    int32_t l_16[4];
    int32_t l_587 = 0xF14B37CCL;
    struct S0 l_1177 = {0xB930C8FCL,0L};
    union U1 l_1182 = {{0L,0x649737D8L}};
    uint32_t l_1280 = 4294967289UL;
    int32_t l_3087 = 0L;
    int32_t *l_3111 = (void*)0;
    uint16_t ***l_3149 = (void*)0;
    int16_t ***l_3191[2][5];
    uint16_t l_3283 = 0xE6B0L;
    uint16_t l_3300 = 0x59EEL;
    uint64_t l_3316 = 1UL;
    uint16_t l_3323 = 6UL;
    int32_t * const **l_3417 = (void*)0;
    uint32_t l_3489 = 4294967295UL;
    uint32_t l_3492[4] = {6UL,6UL,6UL,6UL};
    uint64_t l_3499 = 0x9C9B9C835576CEB5LL;
    uint32_t l_3526 = 18446744073709551612UL;
    uint16_t l_3557 = 65534UL;
    uint64_t l_3559 = 7UL;
    uint32_t l_3691 = 0x69F1AC8EL;
    uint64_t **l_3692 = &g_625;
    uint16_t l_3758 = 4UL;
    struct S0 l_3790 = {-4L,0xC8D45F3AL};
    int32_t l_3873 = 5L;
    int32_t **l_3874 = (void*)0;
    int32_t l_3879 = 0x45791C84L;
    int32_t l_3881 = 0xB2A787E5L;
    uint32_t l_3883 = 0xB997ADCAL;
    uint32_t * const *l_3906 = &g_3121;
    uint64_t l_3914 = 18446744073709551607UL;
    const uint32_t **l_3927 = (void*)0;
    const uint32_t ***l_3926 = &l_3927;
    uint8_t ***l_3935 = &g_3552;
    uint32_t l_3937 = 1UL;
    struct S0 *****l_3950 = &g_3331;
    uint16_t *l_3951 = &l_3323;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_15[i][j] = 65529UL;
    }
    for (i = 0; i < 4; i++)
        l_16[i] = 1L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_3191[i][j] = &g_327;
    }
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        uint8_t *l_586[7][4][2] = {{{&g_379,&g_169},{&g_169,&g_379},{&g_169,&g_169},{&g_379,&g_169}},{{&g_169,&g_379},{&g_169,&g_169},{&g_379,&g_169},{&g_169,&g_379}},{{&g_169,&g_169},{&g_379,&g_169},{&g_169,&g_379},{&g_169,&g_169}},{{&g_379,&g_169},{&g_169,&g_379},{&g_169,&g_169},{&g_379,&g_169}},{{&g_169,&g_379},{&g_169,&g_169},{&g_379,&g_169},{&g_169,&g_379}},{{&g_169,&g_169},{&g_379,&g_169},{&g_169,&g_379},{&g_169,&g_169}},{{&g_379,&g_169},{&g_169,&g_379},{&g_169,&g_169},{&g_379,&g_169}}};
        int32_t l_588[1][5];
        struct S0 l_1178 = {0x4C1B435FL,0x2DD89EDDL};
        int64_t *l_1180 = (void*)0;
        int64_t *l_1181 = &g_137;
        int32_t l_2435 = 2L;
        int8_t l_3098[1];
        uint32_t *l_3118 = &g_892;
        uint32_t **l_3117[4][6] = {{&l_3118,&l_3118,&l_3118,(void*)0,(void*)0,&l_3118},{&l_3118,&l_3118,&l_3118,(void*)0,&l_3118,&l_3118},{&l_3118,&l_3118,(void*)0,&l_3118,(void*)0,&l_3118},{(void*)0,&l_3118,(void*)0,(void*)0,&l_3118,&l_3118}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_588[i][j] = 9L;
        }
        for (i = 0; i < 1; i++)
            l_3098[i] = 0xB8L;
    }
    for (g_323.f0.f1 = 0; (g_323.f0.f1 <= 0); g_323.f0.f1 += 1)
    { 
        uint32_t l_3122 = 0x8B87C594L;
        int32_t l_3148 = 0xE34B6C20L;
        uint16_t *l_3175[6] = {&g_342,&g_2932,&g_2932,&g_342,&g_2932,&g_2932};
        int32_t l_3194 = 0x20701184L;
        int32_t l_3208 = 0x2E24BBBDL;
        uint32_t l_3210 = 1UL;
        const int32_t ***l_3215 = &g_1498;
        int8_t l_3224 = 1L;
        int32_t l_3288 = 2L;
        struct S0 l_3289 = {0L,-1L};
        const uint16_t l_3294 = 4UL;
        union U1 l_3328 = {{-10L,0x2FCF05FCL}};
        int16_t *l_3352[5];
        int32_t ***l_3368 = (void*)0;
        int32_t **l_3370 = &g_1657;
        int32_t ***l_3369[7][4] = {{&l_3370,&l_3370,&l_3370,&l_3370},{&l_3370,&l_3370,&l_3370,&l_3370},{&l_3370,&l_3370,&l_3370,&l_3370},{&l_3370,&l_3370,&l_3370,&l_3370},{&l_3370,&l_3370,&l_3370,&l_3370},{&l_3370,&l_3370,&l_3370,&l_3370},{&l_3370,&l_3370,&l_3370,&l_3370}};
        uint8_t l_3376 = 7UL;
        int8_t l_3377 = 0x45L;
        int32_t l_3382 = 3L;
        int32_t l_3383[5] = {9L,9L,9L,9L,9L};
        uint32_t l_3418 = 0x62A4EEBBL;
        int32_t l_3422[5];
        uint8_t l_3438 = 255UL;
        struct S0 l_3449 = {3L,-9L};
        int32_t ****l_3537 = &l_3369[2][1];
        int32_t *****l_3536 = &l_3537;
        int32_t *****l_3538 = &l_3537;
        union U1 l_3547[5] = {{{-1L,0x99FE0C5FL}},{{-1L,0x99FE0C5FL}},{{-1L,0x99FE0C5FL}},{{-1L,0x99FE0C5FL}},{{-1L,0x99FE0C5FL}}};
        uint8_t ***l_3554 = &g_3552;
        int32_t l_3555 = 0xFA0D613EL;
        int32_t l_3558[4][6][4] = {{{1L,0xDC99D506L,0x79141B60L,1L},{0xDC99D506L,2L,1L,0x8D89272AL},{1L,0L,1L,0xDC99D506L},{0xF98AA99EL,0x0B829298L,1L,0x08D15090L},{0L,0x541643AEL,0x0B829298L,1L},{0x528C56EDL,0x3E1CCE9FL,0x22E5D9D4L,1L}},{{0L,0x8D89272AL,0xDE26E602L,0L},{0xCA291F00L,0xF98AA99EL,0x528C56EDL,0x89CAA9C3L},{1L,0L,0x64E681B6L,0L},{0x79141B60L,1L,0L,1L},{0xC1022876L,1L,0L,0xCC31A04FL},{0x6A2AFD6FL,0x3FE90B47L,0L,3L}},{{0x6A2AFD6FL,(-1L),0L,0x64E681B6L},{0xC1022876L,3L,0L,0x22E5D9D4L},{0x79141B60L,1L,0x64E681B6L,0L},{1L,0xA3BDEF7EL,0x528C56EDL,0x0B829298L},{0xCA291F00L,0x79141B60L,0xDE26E602L,0L},{0L,(-4L),0x22E5D9D4L,0xC1022876L}},{{0x528C56EDL,0x8AB1CE88L,0x0B829298L,(-3L)},{0L,0xCA291F00L,1L,(-1L)},{0xF98AA99EL,1L,1L,0xF98AA99EL},{1L,1L,1L,0xA3BDEF7EL},{0xDC99D506L,0x602E3406L,0x79141B60L,(-1L)},{1L,0xDE26E602L,0x8AB1CE88L,(-1L)}}};
        int16_t l_3560 = 0xC238L;
        int64_t *l_3570 = &g_137;
        int32_t l_3586 = 0x7149F94FL;
        int32_t ** const **l_3620 = &g_3109;
        uint64_t l_3669 = 0UL;
        int32_t l_3685 = 0xC2E58709L;
        uint16_t l_3740 = 0UL;
        int32_t l_3798 = 1L;
        uint16_t **l_3876 = (void*)0;
        int16_t l_3882 = 5L;
        int8_t l_3900 = (-1L);
        int8_t l_3920[4];
        uint64_t l_3936[1][7] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_3352[i] = &g_1035;
        for (i = 0; i < 5; i++)
            l_3422[i] = 2L;
        for (i = 0; i < 4; i++)
            l_3920[i] = 0xBDL;
        for (g_303 = 0; (g_303 <= 0); g_303 += 1)
        { 
            l_3122--;
        }
    }
    for (l_3087 = 0; l_3087 < 1; l_3087 += 1)
    {
        for (g_2845 = 0; g_2845 < 1; g_2845 += 1)
        {
            for (l_1182.f0.f1 = 0; l_1182.f0.f1 < 7; l_1182.f0.f1 += 1)
            {
                g_564[l_3087][g_2845][l_1182.f0.f1] = (-1L);
            }
        }
    }
    (*****g_1832) = (safe_div_func_int16_t_s_s(0xF1EDL, (safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((****g_2889) , (void*)0) != ((**g_906) , &g_2890[0])), ((*l_3951) |= (((safe_sub_func_int64_t_s_s(((l_3790 , l_3950) != &g_3128), 0x9CE7F4B8DB84F2A5LL)) == 6L) == 0x47L)))), l_16[2])), (*g_625)))));
    return l_3790.f0;
}



static int16_t  func_10(uint16_t  p_11, const uint64_t  p_12, const uint8_t  p_13, int16_t  p_14)
{ 
    int64_t **l_2437[2];
    int32_t *l_2438[4][3][1] = {{{(void*)0},{&g_123},{&g_123}},{{(void*)0},{&g_284},{(void*)0}},{{&g_123},{&g_123},{(void*)0}},{{&g_284},{(void*)0},{&g_123}}};
    uint8_t l_2439 = 0x9DL;
    uint64_t l_2447 = 8UL;
    const uint64_t l_2476 = 18446744073709551613UL;
    int16_t l_2479 = 0x6EBBL;
    int32_t l_2484 = 0x05B3A972L;
    union U1 *l_2510[7];
    uint64_t l_2514 = 0x51FAF23C2A23CDC2LL;
    uint32_t l_2515 = 0x040A9C77L;
    uint8_t l_2547[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
    uint8_t l_2598[7];
    int32_t ***l_2599 = &g_1835;
    uint32_t l_2637 = 0x69876AE0L;
    const int16_t * const *l_2671 = &g_1941;
    int8_t *l_2676 = (void*)0;
    uint16_t **l_2716 = &g_659;
    uint16_t l_2743 = 0x0612L;
    struct S0 l_2761 = {0x01845D9EL,-6L};
    uint16_t l_2769 = 0x82C3L;
    uint32_t ***l_2776 = (void*)0;
    uint16_t * const **l_2799 = (void*)0;
    uint16_t * const ***l_2798[4] = {&l_2799,&l_2799,&l_2799,&l_2799};
    int16_t l_2909 = 6L;
    int64_t l_2930[7][4] = {{0xC5DE4808E5D989BALL,2L,0xC5DE4808E5D989BALL,0xC5DE4808E5D989BALL},{2L,2L,0x1180DE33CD650434LL,2L},{2L,0xC5DE4808E5D989BALL,0xC5DE4808E5D989BALL,2L},{0xC5DE4808E5D989BALL,2L,0xC5DE4808E5D989BALL,0xC5DE4808E5D989BALL},{2L,2L,0x1180DE33CD650434LL,2L},{2L,0xC5DE4808E5D989BALL,0xC5DE4808E5D989BALL,2L},{0xC5DE4808E5D989BALL,2L,0xC5DE4808E5D989BALL,0xC5DE4808E5D989BALL}};
    int32_t l_2956 = 0x42A28163L;
    int8_t l_2987[5][7] = {{0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L},{0x53L,1L,0x53L,1L,0x53L,1L,0x53L},{0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L},{0x53L,1L,0x53L,1L,0x53L,1L,0x53L},{0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L,0xE1L}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2437[i] = &g_1663;
    for (i = 0; i < 7; i++)
        l_2510[i] = &g_2511;
    for (i = 0; i < 7; i++)
        l_2598[i] = 253UL;
lbl_2440:
    l_2439 &= (9UL == ((*g_1600) <= (safe_unary_minus_func_int32_t_s((l_2437[0] != l_2437[0])))));
lbl_2485:
    (*g_1835) = l_2438[3][0][0];
    for (p_11 = 0; (p_11 <= 0); p_11 += 1)
    { 
        const int32_t l_2443 = (-1L);
        struct S0 l_2444 = {0xAEB6BF86L,0L};
        uint32_t l_2448[6][3][2] = {{{0UL,4294967286UL},{0xBD53C41AL,4294967286UL},{0UL,6UL}},{{0xBD53C41AL,6UL},{0UL,4294967286UL},{0xBD53C41AL,4294967286UL}},{{0UL,6UL},{0xBD53C41AL,6UL},{0UL,4294967286UL}},{{0xBD53C41AL,4294967286UL},{0UL,6UL},{0xBD53C41AL,6UL}},{{0UL,4294967286UL},{0xBD53C41AL,4294967286UL},{0UL,6UL}},{{0xBD53C41AL,6UL},{0UL,4294967286UL},{0xBD53C41AL,4294967286UL}}};
        const uint32_t l_2462 = 0x81AB2F20L;
        uint64_t *l_2469 = &g_628[5][4][1];
        uint64_t l_2480 = 3UL;
        uint16_t l_2496 = 0UL;
        union U1 l_2501 = {{0xBA65CF05L,0x3AA7591CL}};
        int32_t l_2518 = 0L;
        int32_t l_2521 = 0L;
        int32_t l_2522 = 1L;
        int32_t l_2525 = 0x9D461DBDL;
        int32_t l_2526 = 0L;
        int32_t l_2527[3];
        uint8_t l_2531 = 0UL;
        uint32_t l_2568 = 0x56ADB6BDL;
        int64_t l_2571 = 0xBBC9432EB818D143LL;
        uint32_t l_2587 = 0x7EE3CC5BL;
        int16_t l_2596 = 0L;
        uint32_t **l_2661 = &g_1039;
        int16_t l_2679 = 0xF90DL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2527[i] = 0xB9B73764L;
        if (l_2439)
            goto lbl_2440;
        for (g_1443 = 0; (g_1443 <= 3); g_1443 += 1)
        { 
            return p_14;
        }
        l_2447 &= (((*g_1663) = (safe_add_func_int32_t_s_s(l_2443, p_13))) , (l_2444 , (safe_mod_func_int16_t_s_s((p_14 = 9L), p_12))));
        if (l_2448[2][2][1])
            continue;
        for (g_390 = 0; (g_390 <= 0); g_390 += 1)
        { 
            int32_t l_2482[7][6] = {{6L,8L,6L,1L,(-8L),1L},{6L,8L,6L,1L,(-8L),1L},{6L,8L,6L,1L,(-8L),1L},{6L,8L,6L,1L,(-8L),1L},{6L,8L,6L,1L,(-8L),1L},{6L,8L,6L,1L,(-8L),1L},{6L,8L,6L,1L,(-8L),1L}};
            int i, j;
            if (g_1658[(g_390 + 1)])
                break;
            for (g_892 = 0; (g_892 <= 0); g_892 += 1)
            { 
                uint32_t l_2465 = 0xB4F4D485L;
                uint64_t *l_2472[6][5] = {{&g_628[1][1][0],&g_628[3][3][2],&g_628[1][1][0],(void*)0,&g_628[5][2][3]},{&g_628[1][0][3],&g_628[0][4][1],&g_286,&g_628[0][4][1],&g_628[1][0][3]},{&g_628[1][1][0],(void*)0,&g_628[3][3][2],&g_390,&g_628[3][3][2]},{(void*)0,(void*)0,&g_286,&g_628[1][0][3],&g_286},{(void*)0,&g_628[1][1][0],&g_628[1][1][0],(void*)0,&g_628[3][3][2]},{&g_628[0][4][1],&g_628[1][0][3],&g_628[5][4][1],&g_628[5][4][1],&g_628[1][0][3]}};
                int32_t l_2483 = 0x9C43A3C4L;
                int i, j;
                for (g_379 = 0; (g_379 <= 0); g_379 += 1)
                { 
                    int i, j, k;
                    (*g_1835) = &g_564[g_379][p_11][(g_390 + 2)];
                    g_564[g_892][g_390][(p_11 + 4)] = g_1658[(g_379 + 2)];
                    g_564[g_379][p_11][(g_892 + 3)] |= 6L;
                }
                for (g_137 = 4; (g_137 >= 0); g_137 -= 1)
                { 
                    int16_t *l_2466[4][4][7] = {{{&g_301,&g_2143,&g_301,&g_301,&g_106,&g_301,&g_301},{&g_301,&g_301,&g_106,&g_2143,&g_106,&g_2025,&g_2143},{&g_106,&g_1035,(void*)0,&g_2025,&g_301,&g_2143,(void*)0},{&g_2143,&g_301,&g_106,&g_2025,&g_106,(void*)0,&g_2143}},{{&g_106,&g_2143,&g_106,&g_301,&g_106,&g_2025,&g_106},{(void*)0,&g_1035,&g_106,&g_106,&g_2143,&g_2143,&g_2143},{(void*)0,&g_1035,&g_2025,&g_2143,&g_2143,&g_2143,&g_2143},{&g_2143,&g_2143,&g_301,(void*)0,&g_2143,&g_2025,&g_2143}},{{&g_2143,&g_2143,&g_301,&g_106,&g_1035,&g_301,&g_2143},{(void*)0,&g_106,&g_1035,&g_301,&g_1035,&g_2025,&g_2025},{&g_2143,&g_2025,&g_2143,&g_106,&g_106,&g_2143,&g_2143},{&g_106,&g_301,&g_1035,&g_2025,&g_2143,&g_106,&g_2143}},{{&g_2143,&g_2143,&g_1035,(void*)0,&g_301,&g_2143,&g_301},{&g_2143,&g_2143,&g_2143,&g_2143,&g_2025,&g_1035,(void*)0},{&g_2143,&g_1035,&g_1035,&g_2025,(void*)0,&g_2143,&g_2025},{&g_2025,&g_2143,&g_301,&g_106,&g_2025,&g_106,(void*)0}}};
                    uint64_t **l_2470 = (void*)0;
                    uint64_t **l_2471 = &l_2469;
                    uint8_t *l_2473 = (void*)0;
                    uint8_t *l_2474 = &g_1107;
                    int32_t l_2475 = 0xCAB60AABL;
                    int32_t l_2477 = (-1L);
                    int16_t l_2478 = 0xAD19L;
                    uint16_t *l_2481[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_2481[i] = &g_342;
                    l_2483 |= ((g_564[g_390][g_892][(g_892 + 1)] < (l_2482[3][3] &= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(((((safe_unary_minus_func_int8_t_s((g_1658[(g_137 + 2)] ^ 0L))) <= ((safe_mod_func_uint16_t_u_u(0xE2EEL, (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(((l_2477 &= (((l_2475 = (((l_2462 > (safe_mod_func_int16_t_s_s((p_14 = l_2465), (safe_div_func_uint8_t_u_u(((*l_2474) = (((((*l_2471) = ((*g_1622) = l_2469)) == l_2472[0][4]) >= g_1658[(g_390 + 1)]) >= g_564[g_390][g_892][(g_892 + 1)])), (*g_1600)))))) == p_13) ^ p_13)) > l_2476) , 0xDF5241A9L)) < p_12), 7)) < p_12), 3)))) && l_2478)) ^ l_2479) , (*g_1600)), l_2480)), (**g_1729))), 2)))) || p_13);
                }
            }
            l_2484 = (0x81497E93L & g_1658[(p_11 + 3)]);
            for (l_2480 = 0; (l_2480 <= 6); l_2480 += 1)
            { 
                if (g_379)
                    goto lbl_2440;
                if (l_2480)
                    goto lbl_2485;
            }
            for (g_1035 = 6; (g_1035 >= 2); g_1035 -= 1)
            { 
                int i, j, k;
                l_2482[3][3] = (g_564[p_11][g_390][g_1035] = g_564[p_11][p_11][g_1035]);
                return g_564[g_390][g_390][g_1035];
            }
        }
        for (g_126 = 0; (g_126 <= 0); g_126 += 1)
        { 
            const uint32_t l_2486 = 4294967293UL;
            int32_t l_2487 = 0L;
            int32_t l_2519 = 0xB481A3DAL;
            int32_t l_2520 = 0L;
            int32_t l_2523[5][7] = {{0x16C4FE9DL,0xFA79DC02L,0x8F21AF44L,0x211CDAF3L,(-5L),6L,0x0D49C6BBL},{0x89AE4229L,0x15829426L,1L,(-1L),0xCB1533A1L,0x2BD49C3EL,0xCB1533A1L},{0x211CDAF3L,0xCB1533A1L,0xCB1533A1L,0x211CDAF3L,0xFCE4DA61L,0x0D49C6BBL,(-1L)},{0x0D49C6BBL,0xCB1533A1L,0x89AE4229L,0x2BD49C3EL,0x16C4FE9DL,0xFCE4DA61L,0x0974074CL},{(-1L),0x15829426L,0x0D49C6BBL,0xFA79DC02L,0x0D49C6BBL,0x15829426L,(-1L)}};
            uint16_t l_2541 = 0UL;
            uint8_t *l_2597 = &g_1107;
            union U1 l_2601[1][5][3] = {{{{{0x0F9E1789L,0xBEB3D8C8L}},{{1L,-5L}},{{0x0F9E1789L,0xBEB3D8C8L}}},{{{0x3D0F8433L,0x555EC297L}},{{0x571A02CFL,0xEEB3013AL}},{{0x3D0F8433L,0x555EC297L}}},{{{0x0F9E1789L,0xBEB3D8C8L}},{{1L,-5L}},{{0x0F9E1789L,0xBEB3D8C8L}}},{{{0x3D0F8433L,0x555EC297L}},{{0x571A02CFL,0xEEB3013AL}},{{0x3D0F8433L,0x555EC297L}}},{{{0x0F9E1789L,0xBEB3D8C8L}},{{1L,-5L}},{{0x0F9E1789L,0xBEB3D8C8L}}}}};
            struct S0 ** const l_2612[7][7][4] = {{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,(void*)0,&g_345},{&g_345,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,(void*)0,&g_345},{&g_345,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,(void*)0,&g_345},{&g_345,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,(void*)0,&g_345},{&g_345,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}}};
            struct S0 ** const *l_2611 = &l_2612[2][1][1];
            struct S0 ** const ** const l_2610 = &l_2611;
            struct S0 ** const ** const *l_2609 = &l_2610;
            uint32_t l_2684[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2684[i] = 0xB6BADF36L;
            l_2487 ^= l_2486;
            for (g_118 = 0; (g_118 <= 0); g_118 += 1)
            { 
                union U1 * const l_2512 = &g_2511;
                int8_t l_2517[4];
                int32_t l_2528 = 6L;
                int32_t l_2529 = 0xD8BA080EL;
                int32_t l_2530 = 0x020D344FL;
                int32_t l_2535 = 0x77434A4CL;
                int32_t l_2536 = 0x57B750C6L;
                int32_t l_2537 = 0xDC17B691L;
                int32_t l_2538 = 0xCD192F45L;
                int32_t l_2539 = 0xB016A30AL;
                int32_t l_2540 = 0x293F77B8L;
                int32_t l_2558 = 0x2F4A03B4L;
                int32_t l_2559 = 0x55E39217L;
                int32_t l_2560 = (-1L);
                int32_t l_2562 = 0xFFC4EA9AL;
                int32_t l_2564 = 0L;
                int32_t l_2565[2];
                uint16_t **l_2585 = &g_659;
                uint16_t ***l_2584 = &l_2585;
                uint16_t ****l_2583 = &l_2584;
                int16_t *l_2586[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_2517[i] = 0L;
                for (i = 0; i < 2; i++)
                    l_2565[i] = (-1L);
                for (i = 0; i < 4; i++)
                    l_2586[i] = (void*)0;
                if (g_564[g_118][g_118][(g_126 + 6)])
                { 
                    uint32_t l_2493 = 0x5ED89673L;
                    int i, j, k;
                    l_2487 &= (safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s(((*g_1600) ^= ((void*)0 != &g_1728)), ((safe_sub_func_int32_t_s_s(0L, (g_564[g_118][g_118][(g_126 + 6)] < l_2493))) & (p_11 >= (safe_rshift_func_int8_t_s_s(g_628[0][0][2], 7))))))));
                    l_2496 = ((*g_168) <= (-9L));
                }
                else
                { 
                    union U1 **l_2502 = &g_322;
                    union U1 **l_2503 = (void*)0;
                    union U1 **l_2504 = &g_322;
                    union U1 **l_2505 = &g_322;
                    union U1 **l_2506 = &g_322;
                    union U1 **l_2507 = &g_322;
                    union U1 **l_2508 = &g_322;
                    union U1 **l_2509[3][5] = {{&g_322,(void*)0,(void*)0,&g_322,(void*)0},{(void*)0,(void*)0,&g_322,&g_322,&g_322},{(void*)0,&g_322,&g_322,(void*)0,(void*)0}};
                    int32_t l_2513 = 0xD2DE04A9L;
                    int32_t l_2516 = 0x2B120FF7L;
                    int32_t l_2524 = 0L;
                    int32_t l_2534[6] = {7L,7L,2L,7L,7L,2L};
                    int i, j;
                    l_2515 ^= (((((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((l_2514 = ((l_2501 , (((l_2510[2] = &l_2501) == l_2512) | (l_2513 | p_11))) ^ p_11)), 4UL)), (*g_168))) && 0xA610L) > (*g_1600)) < 0L) > l_2513);
                    if (p_14)
                        break;
                    --l_2531;
                    --l_2541;
                }
                for (l_2525 = 0; (l_2525 <= (-13)); l_2525--)
                { 
                    int32_t l_2546 = 0x1170250AL;
                    int32_t l_2550 = 0x4B33D44AL;
                    int32_t l_2551 = 0x251FE756L;
                    int32_t l_2552 = 0xD32288D1L;
                    int32_t l_2553 = 5L;
                    int32_t l_2554 = 1L;
                    int32_t l_2555 = 0x4965885FL;
                    int32_t l_2556 = 0x30997720L;
                    int32_t l_2557 = (-1L);
                    int32_t l_2561 = 0x88C7A71BL;
                    int32_t l_2563 = 7L;
                    int32_t l_2566 = 0xC046DB1CL;
                    int32_t l_2567 = 0x78F7DEA4L;
                    --l_2547[2];
                    --l_2568;
                }
                l_2526 = l_2571;
                l_2523[1][0] ^= (safe_add_func_int64_t_s_s(((((((((((safe_rshift_func_int16_t_s_s((g_2576 != g_2576), (safe_add_func_uint16_t_u_u((l_2565[0] |= ((safe_div_func_int16_t_s_s((l_2537 = (((((p_13 != ((safe_rshift_func_uint16_t_u_u(((p_14 = ((((((*l_2583) = (void*)0) == (void*)0) != (0xB51E0F1CL | (((((*g_625) > (**g_624)) == (-7L)) <= 0x06A1L) && p_11))) , 0x29A8C9A261ED6B67LL) < 0xA7C1892952F0035CLL)) != p_11), 4)) , l_2519)) ^ 0x147A4D8DL) , (**g_1622)) & (*g_1663)) > l_2520)), l_2487)) != (*g_168))), l_2558)))) >= (**g_624)) | l_2587) & 0xBE5DL) || 0UL) ^ 0xEDE2D692L) , 0x5E89717B78FA04E4LL) != 0L) , p_11) > 65526UL), p_12));
            }
            if ((safe_lshift_func_uint8_t_u_u((*g_168), (6UL == (((((safe_add_func_uint16_t_u_u(p_11, (safe_lshift_func_uint16_t_u_s(g_118, ((safe_mul_func_uint8_t_u_u(250UL, ((p_12 , (((*l_2597) = l_2596) | (*g_168))) < p_12))) , l_2598[6]))))) ^ (-4L)) >= (*g_625)) , l_2599) == (**g_1514))))))
            { 
                union U1 l_2600 = {{0x1F40122CL,0x58DEA204L}};
                uint16_t *l_2605 = &g_320[0];
                uint16_t *l_2608 = &l_2541;
                uint32_t *l_2617 = &g_118;
                uint64_t l_2618[2][5][1] = {{{1UL},{0x48627EFB10913816LL},{18446744073709551606UL},{0x48627EFB10913816LL},{1UL}},{{1UL},{0x48627EFB10913816LL},{18446744073709551606UL},{0x48627EFB10913816LL},{1UL}}};
                int32_t l_2621 = (-1L);
                int i, j, k;
                l_2621 = (((l_2600 , (l_2601[0][4][2] , ((((*g_625) = ((((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s((l_2520 = (((p_13 == (((*l_2605)--) != ((*l_2608) = 0xDBA9L))) , ((l_2609 == (((safe_rshift_func_uint8_t_u_s((l_2600.f0.f1 >= (safe_sub_func_uint32_t_u_u(((*l_2617) = 0x2AB7FDDAL), l_2618[0][0][0]))), (*g_1600))) || 0xBC347EEAL) , g_2619)) , p_14)) > p_13)))), p_14)) && 0xEAL) < 1UL) != l_2486)) , &l_2610) != &l_2610))) , p_13) > g_355);
            }
            else
            { 
                uint16_t l_2636 = 0xA695L;
                int32_t l_2639 = 0xE3E95FA2L;
                uint8_t **l_2644 = &l_2597;
                uint32_t *l_2645[1];
                struct S0 **l_2653 = &g_345;
                struct S0 ***l_2652 = &l_2653;
                int16_t *l_2654 = &g_106;
                int32_t l_2655 = 0L;
                uint32_t * const l_2660 = (void*)0;
                int8_t *l_2674 = &g_1658[5];
                int8_t *l_2677 = &g_1658[6];
                int32_t l_2682 = 0x6D57600FL;
                int32_t l_2683[5][1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_2645[i] = &g_1175[1][0];
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2683[i][j] = 2L;
                }
                for (l_2444.f1 = 28; (l_2444.f1 < 4); --l_2444.f1)
                { 
                    uint16_t *l_2627 = &g_342;
                    uint16_t l_2638 = 0x1450L;
                    uint64_t ***l_2641 = &g_1622;
                    uint64_t ****l_2640 = &l_2641;
                    (**g_1834) = (((p_12 , ((((l_2639 ^= (((safe_mod_func_int16_t_s_s((+((*l_2627) = g_2143)), p_12)) || (safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((p_11 & (safe_lshift_func_uint16_t_u_u(((l_2636 = ((safe_sub_func_int64_t_s_s((0L == ((*g_1600) & (*g_1600))), p_11)) & p_13)) != l_2637), l_2638))) | p_11), (-1L))) < p_14), (*g_168)))) & 0x81L)) > p_14) <= 0UL) | p_11)) >= (*g_1600)) , &l_2639);
                    (***g_1834) &= (p_12 > ((l_2501.f0 , 0x3AC171F2ED8F8555LL) | ((***g_1728) = ((void*)0 != l_2640))));
                    if (l_2520)
                        goto lbl_2440;
                }
                if (((l_2655 &= (safe_add_func_uint32_t_u_u((g_1175[1][0] = (&g_379 != ((*l_2644) = &g_1107))), (safe_mod_func_int32_t_s_s((((((l_2639 |= (*g_1600)) && (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((0x43E7476E42BC098FLL > (*g_1663)), ((((*l_2654) |= (l_2652 != (void*)0)) && l_2636) | l_2523[0][1]))) > (**g_1729)), l_2523[1][0]))) && 1L) || l_2519) , 1L), l_2541))))) <= 5L))
                { 
                    int32_t l_2656 = 1L;
                    int32_t l_2657 = (-1L);
                    uint32_t ***l_2662 = &l_2661;
                    struct S0 l_2668[2] = {{-1L,2L},{-1L,2L}};
                    int8_t **l_2675 = &l_2674;
                    int8_t **l_2678 = &g_1600;
                    int i;
                    l_2487 |= (((**l_2644) = ((((p_12 , (l_2656 = l_2486)) <= (l_2657 , (safe_rshift_func_uint8_t_u_u((*g_168), (&l_2637 != l_2660))))) && (((*l_2662) = l_2661) == (void*)0)) > 0L)) > (*g_168));
                    if (l_2601[0][4][2].f0.f1)
                        continue;
                    l_2657 = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((!(((l_2668[1] , (((l_2671 != ((--g_1175[1][0]) , &l_2654)) <= ((l_2676 = ((*l_2675) = l_2674)) != ((*l_2678) = l_2677))) | p_11)) , (l_2679 = (l_2656 = p_11))) >= l_2601[0][4][2].f0.f0)), (**g_1940))), 0xBFL));
                }
                else
                { 
                    int32_t l_2680 = 0xD58F25C7L;
                    int32_t l_2681 = (-1L);
                    l_2523[1][0] = l_2639;
                    l_2684[1]++;
                    return p_14;
                }
                l_2487 |= (l_2682 = p_13);
            }
        }
    }
    for (g_106 = (-23); (g_106 == 28); g_106++)
    { 
        uint16_t *l_2693 = &g_320[0];
        int32_t l_2697 = (-10L);
        uint64_t l_2698 = 8UL;
        uint16_t *l_2699 = (void*)0;
        uint16_t *l_2700 = &g_126;
        int32_t *l_2701 = &l_2697;
        int32_t l_2719 = (-1L);
        int32_t l_2721 = 1L;
        int32_t l_2722[6][3] = {{7L,0x29AA0A4EL,1L},{3L,0x29AA0A4EL,3L},{0x3152AF4FL,7L,1L},{0x3152AF4FL,0x3152AF4FL,7L},{3L,7L,7L},{7L,0x29AA0A4EL,1L}};
        int32_t l_2746 = 1L;
        uint64_t l_2755 = 0UL;
        union U1 l_2768 = {{0xB8F574B7L,0xEBCE39C7L}};
        int16_t ****l_2792[3];
        int16_t *****l_2791 = &l_2792[0];
        uint64_t ***l_2848 = &g_1622;
        uint64_t l_2861 = 1UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_2792[i] = (void*)0;
        if ((g_1234[0][0][0] , (safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((((--(*l_2693)) == ((0L ^ ((safe_unary_minus_func_uint64_t_u((**g_624))) < (l_2697 || ((*l_2700) = (p_11 = (((p_11 < 0x799B012CL) , (3UL && l_2698)) , p_11)))))) & 0x50A82475L)) , 1L) <= l_2698), (*g_1663))), p_14))))
        { 
            int32_t ***l_2709 = (void*)0;
            uint64_t l_2714 = 18446744073709551612UL;
            int32_t l_2720 = 0x6DF913B9L;
            int32_t l_2724 = 0xA2A3E6DFL;
            (**g_1834) = l_2701;
            if (p_12)
            { 
                int32_t **l_2706 = &g_1657;
                int32_t ***l_2705 = &l_2706;
                int32_t ***l_2708 = &l_2706;
                int32_t ****l_2707[7];
                uint8_t *l_2715 = &l_2598[6];
                int i;
                for (i = 0; i < 7; i++)
                    l_2707[i] = &l_2708;
                (*g_360) = (safe_unary_minus_func_int64_t_s((***g_1728)));
                (*****g_1832) = (18446744073709551606UL >= ((***g_1728) = (p_12 < (safe_mul_func_uint16_t_u_u((l_2705 == (l_2709 = (void*)0)), (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_2715) ^= (l_2714 <= ((*l_2700) = ((-1L) == ((*g_625) , p_13))))), (-1L))) ^ p_14), 10)))))));
                if ((*l_2701))
                { 
                    uint16_t ***l_2717 = &l_2716;
                    (*l_2717) = l_2716;
                }
                else
                { 
                    int32_t *l_2718 = &g_284;
                    (**l_2599) = l_2718;
                }
            }
            else
            { 
                int32_t l_2723 = 0x7F64D61EL;
                uint64_t l_2725 = 1UL;
                (*****g_1832) ^= (18446744073709551606UL <= 0x3B62C50B815EC2DFLL);
                l_2725++;
            }
            return p_11;
        }
        else
        { 
            int32_t *l_2736 = &g_284;
            int32_t l_2737 = 4L;
            int32_t l_2747[4][7][4] = {{{0xAE0F31E2L,0x8EC77784L,0xB49B80A7L,0x289AD366L},{0L,0x9BD843A7L,0x8C64FEEDL,0xB49B80A7L},{0x82BB0FFFL,0x9BD843A7L,0x67727AA7L,0x289AD366L},{0x9BD843A7L,0x8EC77784L,(-8L),0xF8DA363EL},{(-8L),0x9EEAACCFL,0xB18AC8A1L,0x0F952704L},{0xB49B80A7L,5L,0xED4827E3L,6L},{(-8L),0xAE0F31E2L,0L,0xED4827E3L}},{{0x8C64FEEDL,0L,0x32E9B9D6L,0xAE0F31E2L},{6L,0x82BB0FFFL,0x32E9B9D6L,0x8EC77784L},{0x8C64FEEDL,0x9BD843A7L,0L,0x9B1A3AD5L},{(-8L),(-8L),0xED4827E3L,0xB49B80A7L},{0xED4827E3L,0xB49B80A7L,0xB49B80A7L,0xED4827E3L},{0x289AD366L,(-1L),0x9B1A3AD5L,0L},{6L,(-4L),0x8EC77784L,0x32E9B9D6L}},{{0x241B23CAL,0x9BD843A7L,0xAE0F31E2L,0x32E9B9D6L},{0x0F952704L,(-4L),0xED4827E3L,0L},{0x67727AA7L,(-1L),6L,0xED4827E3L},{0x9BD843A7L,0xB49B80A7L,5L,0xB49B80A7L},{6L,(-8L),0x1E89E3D9L,0x9B1A3AD5L},{0xB18AC8A1L,0x9BD843A7L,(-1L),0x8EC77784L},{0xF8DA363EL,0x82BB0FFFL,0xED4827E3L,0xAE0F31E2L}},{{0xF8DA363EL,0L,(-1L),0xED4827E3L},{0xB18AC8A1L,0xAE0F31E2L,0x1E89E3D9L,6L},{6L,0x9EEAACCFL,5L,5L},{0x9BD843A7L,0x9BD843A7L,6L,0x1E89E3D9L},{0x67727AA7L,0x431ECDD7L,0xED4827E3L,(-1L)},{0x0F952704L,6L,0xAE0F31E2L,0xED4827E3L},{0x241B23CAL,6L,0x8EC77784L,(-1L)}}};
            int i, j, k;
            for (g_2133 = 20; (g_2133 >= (-13)); g_2133 = safe_sub_func_uint32_t_u_u(g_2133, 9))
            { 
                int16_t *l_2732 = &l_2479;
                int32_t *l_2735 = &l_2697;
                int32_t l_2738 = 8L;
                int32_t l_2741 = (-1L);
                int8_t l_2742 = (-5L);
                int32_t l_2748 = 0x5974058FL;
                int32_t l_2749 = 0xEC0F14B2L;
                int32_t l_2751 = 0xE57DBFDFL;
                if (p_14)
                    break;
                (**g_1834) = ((safe_mul_func_int16_t_s_s(((*l_2732) |= p_13), (safe_lshift_func_uint16_t_u_u(0x6699L, 3)))) , l_2735);
                if (p_13)
                { 
                    if (p_11)
                        break;
                    if ((***g_1834))
                        break;
                    (****g_1832) = l_2736;
                    if (p_13)
                        break;
                    if (p_13)
                        continue;
                }
                else
                { 
                    int32_t l_2739 = 0xDB1562D2L;
                    int32_t l_2740[5][3][3] = {{{(-3L),1L,1L},{(-3L),1L,1L},{(-3L),1L,1L}},{{(-3L),1L,1L},{(-3L),1L,1L},{(-3L),1L,1L}},{{(-3L),1L,1L},{(-3L),1L,1L},{(-3L),1L,1L}},{{(-3L),1L,1L},{(-3L),1L,1L},{(-3L),1L,1L}},{{(-3L),1L,1L},{(-3L),1L,1L},{(-3L),1L,1L}}};
                    int32_t l_2750 = (-5L);
                    int i, j, k;
                    ++l_2743;
                    ++g_2752;
                }
            }
        }
        for (l_2743 = 0; (l_2743 <= 2); l_2743 += 1)
        { 
            if (p_14)
                break;
        }
        if (l_2755)
            continue;
        for (g_1443 = 0; (g_1443 <= 0); g_1443 += 1)
        { 
            uint64_t l_2762 = 18446744073709551615UL;
            struct S0 l_2763 = {0x835286C3L,0L};
            uint8_t l_2770[1][1];
            int16_t *l_2771 = &g_2143;
            uint8_t l_2772 = 1UL;
            int32_t l_2779 = 0x2B6C37A4L;
            int32_t l_2781 = 0x15A01B38L;
            struct S0 **l_2782 = &g_345;
            union U1 *l_2824 = &g_323;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2770[i][j] = 1UL;
            }
            l_2772 &= ((((safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((*l_2771) = ((safe_unary_minus_func_uint32_t_u((((l_2761 , (((l_2762 ^ p_13) & (l_2763 , (safe_div_func_uint32_t_u_u(l_2762, (safe_mod_func_uint8_t_u_u((l_2768 , ((((*g_1663) = (l_2769 < 1UL)) != 18446744073709551610UL) | 0x53BDL)), l_2770[0][0])))))) >= l_2763.f1)) && (*l_2701)) == 0xC08EDE59897FE0DCLL))) ^ 0L)), (*l_2701))) , g_564[0][0][6]), 0xE2C5L)) ^ 9UL) , (*l_2701)) || p_11);
            for (g_118 = 0; (g_118 <= 1); g_118 += 1)
            { 
                struct S0 l_2788 = {-1L,1L};
                int16_t ***** const l_2793 = &l_2792[2];
                uint32_t *l_2796[2][2][2] = {{{&g_1175[1][0],&g_1175[1][0]},{&g_1175[1][0],&g_1175[1][0]}},{{&g_1175[1][0],&g_1175[1][0]},{&g_1175[1][0],&g_1175[1][0]}}};
                int32_t l_2809 = 0L;
                int32_t l_2811 = 0L;
                int32_t l_2812 = 0L;
                int8_t l_2817 = 8L;
                union U1 *l_2833 = &g_2511;
                int16_t l_2849 = 0xE7D8L;
                int i, j, k;
                for (l_2746 = 1; (l_2746 >= 0); l_2746 -= 1)
                { 
                    int i, j, k;
                    (*l_2701) = p_11;
                }
                for (p_14 = 0; (p_14 <= 1); p_14 += 1)
                { 
                    int64_t l_2775 = 1L;
                    uint32_t ****l_2777 = &l_2776;
                    uint8_t *l_2780 = &g_176;
                    struct S0 ***l_2783 = &l_2782;
                    (*g_1835) = &l_2719;
                    l_2781 &= ((*l_2701) = (((*l_2780) = (((safe_mod_func_int8_t_s_s((*g_1600), ((l_2779 |= ((*g_360) &= (((l_2775 = p_11) , ((void*)0 == l_2599)) & (((g_2778 = ((**g_624) ^= (((*l_2777) = l_2776) == &g_1038))) <= 18446744073709551615UL) < l_2763.f1)))) , (*g_1600)))) & 0L) & 18446744073709551615UL)) < l_2770[0][0]));
                    (*l_2783) = l_2782;
                }
                if ((((safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(0x23L, (l_2788 , (safe_mul_func_int16_t_s_s((l_2791 == l_2793), (safe_mod_func_uint32_t_u_u(4294967295UL, (l_2781 = (g_1175[1][0] &= 8UL))))))))) , ((l_2779 |= (((((**g_1729) > l_2772) && (*g_168)) > 252UL) , l_2788.f1)) & p_13)), 0xA67C93D3C0101AFBLL)) , 0UL) > (*g_1663)))
                { 
                    if (g_2797)
                        break;
                }
                else
                { 
                    if (l_2772)
                        goto lbl_2440;
                }
                if ((l_2798[1] != g_2800))
                { 
                    if (p_13)
                        break;
                }
                else
                { 
                    uint16_t l_2807 = 0UL;
                    int32_t l_2808 = 0x4DA72C5AL;
                    int32_t l_2810 = 0x79910DACL;
                    (*l_2701) ^= (((safe_add_func_int16_t_s_s((p_14 = (((-1L) != (safe_rshift_func_uint8_t_u_s((((l_2807 == l_2807) && (++g_1175[0][0])) | (safe_rshift_func_int8_t_s_s((*g_1600), 2))), 7))) > p_14)), l_2817)) , (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(4L, 9)), p_14)), p_13))) > (*g_625));
                    (*l_2701) = (l_2824 == l_2824);
                }
                for (g_126 = 0; (g_126 <= 1); g_126 += 1)
                { 
                    int16_t l_2844 = 0L;
                    int32_t l_2862 = 0L;
                    int32_t l_2863 = 3L;
                    l_2722[5][2] = (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((((*l_2701) ^= (l_2833 != (void*)0)) , ((((*g_1600) = (((p_14 , (((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(p_12, (safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((l_2844 != g_2845) >= (!0xF782EF3DL)), 0xF8DCL)), p_14)) , g_2847) == (-3L)), (*g_1600))))), p_14)) , l_2848) == (void*)0)) == 0x819B79659567B834LL) < 0x54L)) , l_2844) == p_11)), l_2849)) ^ 0xBF9AL), 3)) & 0xDE4F571B5943830DLL), p_13)), 0x8EEDL));
                    l_2863 |= (((*l_2833) , 1L) , ((safe_add_func_uint32_t_u_u((~5L), (((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((**g_624) , (*l_2701)), ((safe_rshift_func_uint16_t_u_u((l_2862 = (((0x343EA34EL >= (safe_sub_func_int16_t_s_s((((*l_2771) = (l_2861 &= 0x23F8L)) | (*l_2701)), p_13))) > 0x54L) == 18446744073709551607UL)), 15)) || l_2817))), (*l_2701))) && (*l_2701)) < 0x085CE63DB39DFFD6LL))) | p_14));
                }
            }
        }
        for (g_2143 = 6; (g_2143 >= 0); g_2143 -= 1)
        { 
            uint32_t l_2868 = 0xF6280E4AL;
            int32_t *l_2899 = &g_1316[1];
            for (l_2769 = 2; (l_2769 <= 6); l_2769 += 1)
            { 
                int32_t *l_2864 = &g_2797;
                for (g_1107 = 1; (g_1107 <= 6); g_1107 += 1)
                { 
                    int i;
                    (**g_1834) = l_2864;
                    (*****g_1832) = ((*g_1934) != &l_2671);
                    return l_2598[l_2769];
                }
            }
            if ((*l_2701))
            { 
                int32_t *l_2865 = &g_2797;
                int32_t l_2866 = 0x8EBD23A0L;
                int32_t l_2867 = (-9L);
                for (g_169 = 0; (g_169 <= 6); g_169 += 1)
                { 
                    int64_t l_2871[7][7] = {{(-7L),0x6680410C2E436439LL,0x5D6FCF5B66BFA526LL,(-5L),0xF554643A4971DAD2LL,(-5L),0xA979BBEDD8A96071LL},{0xF554643A4971DAD2LL,0xA979BBEDD8A96071LL,0xA39BCA90A359C11DLL,0xA39BCA90A359C11DLL,0xA979BBEDD8A96071LL,0xF554643A4971DAD2LL,(-7L)},{1L,0xA39BCA90A359C11DLL,0x5D6FCF5B66BFA526LL,(-7L),0xE7FA9A3267CFF885LL,0xF554643A4971DAD2LL,0xF554643A4971DAD2LL},{(-5L),0xE7FA9A3267CFF885LL,0x598965670A152E9FLL,0xE7FA9A3267CFF885LL,(-5L),(-5L),1L},{0x2276AB4351C74409LL,0xA39BCA90A359C11DLL,0xF554643A4971DAD2LL,0x6680410C2E436439LL,(-5L),1L,(-5L)},{0xDBA12B6F056149D8LL,0xA979BBEDD8A96071LL,0xA979BBEDD8A96071LL,0xDBA12B6F056149D8LL,0xE7FA9A3267CFF885LL,0x6680410C2E436439LL,0x2276AB4351C74409LL},{0x2276AB4351C74409LL,0x6680410C2E436439LL,0xE7FA9A3267CFF885LL,0xDBA12B6F056149D8LL,0xA979BBEDD8A96071LL,0xA979BBEDD8A96071LL,0xF554643A4971DAD2LL}};
                    int i, j;
                    (*g_1835) = (l_2865 = &l_2722[2][1]);
                    if ((***g_1834))
                        continue;
                    l_2868--;
                    return l_2871[2][1];
                }
                return p_12;
            }
            else
            { 
                int64_t l_2883 = 0L;
                uint32_t *l_2893 = &l_2637;
                if ((((**g_1729) = ((safe_lshift_func_int8_t_s_u((g_1337 = ((*g_1600) = (safe_mul_func_int16_t_s_s((65527UL != (safe_div_func_int16_t_s_s(((~(safe_add_func_uint8_t_u_u(((0x306AL & (((safe_sub_func_int16_t_s_s(p_14, (((p_14 | (l_2883 != (18446744073709551610UL <= (***g_1728)))) , 0x3FA5AED540C214A1LL) & p_13))) != 0xCCA93FDDF7D9270CLL) ^ l_2883)) && (*g_1663)), 0xA8L))) != l_2883), p_13))), l_2883)))), 2)) != p_12)) , l_2868))
                { 
                    int32_t l_2884 = 0x60D1D7C5L;
                    if (g_390)
                        goto lbl_2485;
                    return l_2884;
                }
                else
                { 
                    int32_t l_2894 = 0x2DD17C1CL;
                    uint32_t ** const *l_2896 = &g_1038;
                    uint32_t ** const **l_2895 = &l_2896;
                    if (p_12)
                        break;
                    (*l_2701) = ((p_11 && (safe_lshift_func_int8_t_s_s((0xD86BL < ((((safe_mul_func_uint16_t_u_u((((p_12 , g_2889) != ((safe_mul_func_uint8_t_u_u(((0x33057CD0DE6D80DELL && ((l_2893 == l_2701) , 18446744073709551615UL)) , (*g_168)), 0x9CL)) , (void*)0)) , p_12), l_2894)) | p_13) , l_2895) == g_2897[3][0])), l_2868))) | p_13);
                    (*l_2791) = (void*)0;
                }
                (*g_1835) = l_2899;
                (*****g_1832) = ((void*)0 == &g_303);
            }
        }
    }
    for (g_355 = 0; (g_355 <= 5); g_355 += 1)
    { 
        uint32_t l_2906 = 0x5DC0600EL;
        int32_t l_2907[1][3][7] = {{{0L,0x50A7D899L,0x84CEF04CL,0L,0x84CEF04CL,0x50A7D899L,0L},{0x9FB893A4L,0L,0x50A7D899L,0x84CEF04CL,0L,0x84CEF04CL,0x50A7D899L},{0L,0L,0xC50BE1A4L,0x03E335D3L,0x8DDADD24L,0xC50BE1A4L,0x8DDADD24L}}};
        uint16_t l_2908 = 0x1698L;
        uint32_t l_2921[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
        uint8_t l_2940 = 0x3AL;
        int64_t l_2961[5];
        uint32_t l_2962 = 0x96E73C77L;
        const uint32_t *l_2984 = &g_118;
        const uint32_t * const *l_2983 = &l_2984;
        union U1 l_2985 = {{9L,0x8B4F9842L}};
        int32_t l_2990 = 1L;
        uint8_t l_3008 = 0x4FL;
        int32_t l_3015 = 0x0221CCE6L;
        uint16_t **** const l_3020[7][3] = {{&g_2801,&g_2801,&g_2801},{&g_2801,&g_2801,&g_2801},{&g_2801,&g_2801,&g_2801},{&g_2801,&g_2801,&g_2801},{&g_2801,&g_2801,&g_2801},{&g_2801,&g_2801,&g_2801},{&g_2801,&g_2801,&g_2801}};
        uint64_t l_3023 = 18446744073709551607UL;
        int64_t ****l_3031 = &g_1728;
        uint64_t **l_3051 = &g_625;
        int32_t ***l_3076 = &g_1835;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2961[i] = (-1L);
        if ((0x0CF9A8323FF20B26LL < ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((p_14 = ((safe_sub_func_uint64_t_u_u(((l_2906 = p_14) <= p_12), (0x7F43C9EC2A8CF2D1LL < (l_2907[0][2][3] == l_2907[0][2][3])))) != p_14)) != 0x5A5AL), 246UL)), 0L)) != p_13)))
        { 
            int32_t **l_2914 = &g_1657;
            int32_t ***l_2913 = &l_2914;
            int32_t ****l_2912 = &l_2913;
            int32_t *****l_2915 = &l_2912;
            uint8_t *l_2928 = &l_2547[2];
            int16_t *l_2929 = &g_106;
            uint8_t *l_2931 = &g_176;
            l_2908 = ((l_2761 , (void*)0) != (void*)0);
            g_2932 ^= ((l_2909 || ((*l_2931) &= (safe_add_func_int64_t_s_s((((((*l_2915) = l_2912) == (void*)0) , (safe_unary_minus_func_int32_t_s((l_2930[5][1] = (safe_lshift_func_int16_t_s_s((((((*l_2929) = ((((safe_sub_func_uint16_t_u_u(l_2921[5], (((safe_mod_func_uint8_t_u_u((((*l_2928) = (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0x7C97L, ((*g_1600) | 0x97L))), p_13))) == 252UL), 246UL)) || p_14) , p_13))) == 18446744073709551608UL) < 7UL) , 0x8C1BL)) , 0x765A98D9B459D572LL) == 0xE8371F8B363DF76BLL) , (-1L)), 6)))))) == l_2921[5]), 0x3E2574D70D44F2C0LL)))) || l_2921[5]);
            if (p_13)
                break;
            (**l_2599) = g_2933;
        }
        else
        { 
            uint32_t l_2946 = 18446744073709551614UL;
            if (l_2921[2])
            { 
                int32_t **l_2934 = &g_1657;
                int32_t l_2939 = (-7L);
                int32_t *l_2943 = &g_564[0][0][5];
                for (g_169 = 0; (g_169 <= 5); g_169 += 1)
                { 
                    int32_t ***l_2935 = &l_2934;
                    int32_t l_2936 = 0x1DCA5F5BL;
                    (*l_2935) = l_2934;
                    l_2936 &= 0L;
                    (*g_2933) = (safe_sub_func_int32_t_s_s(l_2907[0][2][3], l_2939));
                    (**g_1834) = &l_2907[0][2][3];
                }
                if (p_11)
                { 
                    return l_2939;
                }
                else
                { 
                    ++l_2940;
                    l_2943 = l_2438[3][0][0];
                }
            }
            else
            { 
                int32_t l_2944 = 0xE56F706EL;
                int32_t l_2945[3][5] = {{(-4L),0x2A926141L,0xDB79919EL,0xDB79919EL,0x2A926141L},{(-4L),0x2A926141L,0xDB79919EL,0xDB79919EL,0x2A926141L},{(-4L),0x2A926141L,0xDB79919EL,0xDB79919EL,0x2A926141L}};
                int i, j;
                l_2946++;
            }
        }
        for (g_2143 = 0; (g_2143 <= 0); g_2143 += 1)
        { 
            int8_t l_2949 = 0x66L;
            int32_t l_2950 = 2L;
            int32_t l_2951 = 0L;
            int32_t l_2952 = 0x90A27F74L;
            int32_t l_2953 = 0x271D8CE2L;
            int32_t l_2954 = (-1L);
            int32_t l_2955 = 0x004EFE84L;
            int32_t l_2957 = 0x4E2A52E4L;
            int32_t l_2958 = 1L;
            int32_t l_2959 = 0xE7AA5717L;
            int32_t l_2960[2][4] = {{0x9CBF157BL,0x146A20CBL,0x9CBF157BL,0x146A20CBL},{0x9CBF157BL,0x146A20CBL,0x9CBF157BL,0x146A20CBL}};
            int32_t **l_2970 = &l_2438[3][0][0];
            const uint32_t *l_2980 = &g_1175[2][0];
            const uint32_t **l_2979 = &l_2980;
            int32_t l_2986 = 0x8F2F3E1BL;
            int16_t *l_2988 = &l_2479;
            uint64_t *l_2989 = &g_390;
            const int32_t l_2991 = 1L;
            int16_t ****l_2995 = &g_519[2][1][2];
            int16_t **** const *l_2994 = &l_2995;
            uint16_t l_3006 = 0UL;
            uint16_t l_3012 = 0x30BDL;
            int i, j;
            l_2962--;
            l_2956 &= (safe_lshift_func_uint8_t_u_u((((((*l_2989) = ((**g_624) = (!((((safe_mul_func_int16_t_s_s(((((((*g_1600) , ((*l_2970) = &l_2907[0][2][0])) == &l_2907[0][2][3]) || ((***g_1728) = l_2940)) , &l_2761) == (((*l_2988) = (p_14 = (l_2987[4][5] = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint16_t_u_u((l_2907[0][1][2] = (l_2979 == ((p_11 |= (g_320[0] = (((safe_rshift_func_int16_t_s_s(p_13, 6)) , 0x7C060893L) || p_13))) , l_2983))), 0L)) , p_14) & 0x80534D42L) , 0x9899L), p_13)) , l_2985) , &g_168) != (void*)0) ^ l_2986), 0xBAA3L)) && 0L), 15))))) , (void*)0)), p_12)) , (*g_168)) , p_13) <= p_13)))) == 6UL) & l_2990) , l_2991), l_2985.f0.f0));
            if ((safe_rshift_func_uint8_t_u_s((l_2994 == (void*)0), (*g_1600))))
            { 
                (*g_2933) = p_14;
                (*g_906) = &l_2985;
            }
            else
            { 
                int32_t l_3004[6] = {0x416BFB52L,0x416BFB52L,0x416BFB52L,0x416BFB52L,0x416BFB52L,0x416BFB52L};
                union U1 l_3005[2][2] = {{{{0xD58A405FL,-3L}},{{0xD58A405FL,-3L}}},{{{0xD58A405FL,-3L}},{{0xD58A405FL,-3L}}}};
                uint8_t *l_3007 = &l_2598[6];
                int32_t l_3009 = (-4L);
                uint32_t **l_3024[4][3] = {{&g_1039,(void*)0,&g_1039},{&g_1039,&g_1039,&g_1039},{&g_1039,&g_1039,&g_1039},{&g_1039,&g_1039,&g_1039}};
                int i, j;
                l_3009 = ((((p_12 , (((***g_1728) = ((((*l_3007) = ((((-7L) != (safe_mul_func_uint16_t_u_u(p_11, (((*g_625) = (safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_3004[5], (p_13 > (l_3005[0][1] , (*g_1941))))), 255UL)), 0xA9086107L))) , l_3006)))) , l_3004[4]) >= p_12)) ^ p_14) , p_14)) , l_3008)) <= p_12) == p_13) < p_14);
                l_3009 = p_12;
                (*g_2933) = ((((safe_add_func_uint16_t_u_u(l_3012, ((safe_mul_func_uint16_t_u_u(l_3015, (p_13 , (safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s(((((p_14 && ((l_3020[4][0] == (void*)0) , (((safe_sub_func_uint64_t_u_u(((*g_625) == l_2940), l_3023)) || 0xDC6BL) >= p_12))) <= 1L) ^ l_3009) || l_2921[5]), l_2921[2])), (*g_1600)))))) ^ p_11))) , l_3024[1][0]) != &l_2984) | l_3009);
            }
            l_2986 |= (((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(0x37112C41F30ED95ELL, (l_2940 >= (**g_1940)))), (*g_168))), (((p_14 &= (p_13 > ((l_3031 != (((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0x4BL, 2)) ^ p_11), p_11)) , p_12) , l_3031)) <= l_2961[1]))) | 9UL) >= 65529UL))) < 0xC9726703L) <= 0x81E03460C27416C9LL);
            for (g_390 = 0; (g_390 <= 0); g_390 += 1)
            { 
                const union U1 l_3039[1][3][5] = {{{{{1L,-1L}},{{0x2D02FBC7L,0x90DC9342L}},{{0x2D02FBC7L,0x90DC9342L}},{{1L,-1L}},{{0x2D02FBC7L,0x90DC9342L}}},{{{1L,0x88CCB9F8L}},{{1L,0x88CCB9F8L}},{{0x37E142DAL,0xFD0917F1L}},{{1L,0x88CCB9F8L}},{{1L,0x88CCB9F8L}}},{{{0x2D02FBC7L,0x90DC9342L}},{{1L,-1L}},{{0x2D02FBC7L,0x90DC9342L}},{{0x2D02FBC7L,0x90DC9342L}},{{1L,-1L}}}}};
                union U1 ***l_3040 = (void*)0;
                union U1 ***l_3041 = &g_906;
                const uint32_t *****l_3049 = &g_3047[5][1][0];
                int64_t *l_3050 = &g_2845;
                int32_t l_3053 = 7L;
                int32_t l_3054 = 0L;
                int64_t l_3056 = (-9L);
                int32_t l_3057 = (-1L);
                int32_t l_3058 = 0x6A8B7343L;
                int32_t l_3059 = 0x32E8E64BL;
                int32_t l_3060 = (-6L);
                int32_t l_3065 = (-4L);
                uint64_t l_3066 = 0xD1D43762AE6CF2EBLL;
                uint16_t * const *l_3073 = &g_659;
                int i, j, k;
                if (((safe_unary_minus_func_int16_t_s(((((safe_mul_func_uint8_t_u_u((((***g_2889) = &l_3023) != &l_2514), (p_11 < (l_3039[0][0][0] , (((*l_3041) = &g_322) != ((~(safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((((*l_3049) = g_3047[5][1][0]) != (void*)0) ^ p_12) | 0L), 0x9E384158ABC03340LL)), 0))) , &g_322)))))) , g_1234[0][0][0].f0.f0) , l_3050) == (void*)0))) >= l_2906))
                { 
                    int32_t l_3052 = 0x68314BFBL;
                    int32_t l_3055 = 0x70B26A0CL;
                    int32_t l_3061[5][4][1] = {{{(-1L)},{0x5AE18A30L},{(-1L)},{(-1L)}},{{0x5AE18A30L},{(-1L)},{(-1L)},{0x5AE18A30L}},{{(-1L)},{(-1L)},{0x5AE18A30L},{(-1L)}},{{(-1L)},{0x5AE18A30L},{(-1L)},{(-1L)}},{{0x5AE18A30L},{(-1L)},{(-1L)},{0x5AE18A30L}}};
                    uint16_t l_3062 = 7UL;
                    int i, j, k;
                    (**g_2889) = l_3051;
                    (*g_2933) |= ((0x63739D16L | p_12) != 2UL);
                    l_3062++;
                    l_3066++;
                    l_2907[0][2][3] = (safe_mul_func_uint8_t_u_u(((0x7824373BL ^ 0xF47B5365L) ^ (safe_add_func_uint64_t_u_u(l_2921[3], 0xF62EAD3CF90AA720LL))), (1UL <= p_12)));
                }
                else
                { 
                    uint32_t *l_3077[7][3][4] = {{{(void*)0,&l_2906,&l_2921[5],&g_118},{&g_118,&l_2921[5],(void*)0,&l_2906},{&g_1175[1][0],(void*)0,(void*)0,&g_118}},{{&g_118,&l_2921[5],&l_2921[5],&g_1175[1][0]},{(void*)0,&g_1175[1][0],&g_1175[1][0],(void*)0},{&g_1175[1][0],(void*)0,&l_2921[5],&g_1175[1][0]}},{{&l_2921[5],&g_118,&l_2921[5],&g_118},{(void*)0,&g_1175[1][0],&l_2921[5],&g_118},{&l_2921[5],&g_118,(void*)0,&g_1175[1][0]}},{{&l_2906,(void*)0,&g_1175[0][0],(void*)0},{&g_118,&g_1175[1][0],&l_2921[5],&g_1175[1][0]},{&g_118,&l_2921[5],&g_1175[1][0],&g_118}},{{&l_2921[5],(void*)0,(void*)0,&l_2906},{&l_2921[5],&l_2921[5],&g_1175[1][0],&g_118},{&g_118,&l_2906,&l_2921[5],&l_2921[5]}},{{&g_118,&g_118,&g_118,&l_2921[5]},{&l_2921[5],&l_2921[5],(void*)0,&g_1175[1][0]},{(void*)0,&g_1175[1][0],&g_1175[0][0],(void*)0}},{{&g_1175[1][0],&g_1175[1][0],&l_2906,&g_1175[1][0]},{&g_1175[1][0],&l_2921[5],(void*)0,&l_2921[5]},{&l_2637,&g_1175[2][0],&l_2637,&g_1175[0][0]}}};
                    int32_t l_3078 = (-1L);
                    int32_t l_3079 = 0L;
                    int i, j, k;
                    l_3079 &= (((((**g_2800) != l_3073) >= 0x04L) , (((-1L) ^ (5L == (l_3078 |= (safe_mod_func_uint8_t_u_u(((*g_168) , (((((void*)0 == l_3076) , p_13) < 247UL) , 0x3FL)), (-1L)))))) >= p_14)) && l_3078);
                    (*g_2933) = (p_11 >= ((*l_2988) = (0xA4B82D4AFC1B0085LL && ((**l_3051) = (safe_rshift_func_uint16_t_u_s((((l_3058 <= (-1L)) & 5UL) ^ ((!(safe_mod_func_uint32_t_u_u((l_3057 ^= (safe_mul_func_int16_t_s_s(1L, 0xFD60L))), (-1L)))) ^ (-1L))), 2))))));
                }
                return p_12;
            }
        }
        return p_12;
    }
    return p_13;
}



static int16_t  func_17(int8_t  p_18, uint32_t  p_19, uint64_t  p_20, uint64_t  p_21, union U1  p_22)
{ 
    uint64_t **l_1283[5] = {&g_625,&g_625,&g_625,&g_625,&g_625};
    const int32_t *l_1307 = &g_123;
    int32_t l_1315 = 0L;
    int32_t l_1319 = 0x742615FAL;
    int32_t l_1320 = 0L;
    int32_t l_1322 = 7L;
    int32_t l_1323 = 0xD002607BL;
    int32_t l_1327[4][3][3] = {{{(-4L),0x3140C5FCL,(-4L)},{0xE8DE95B5L,(-1L),0x6DF2C578L},{9L,1L,0x6DF2C578L}},{{0L,9L,(-4L)},{0L,0L,0xE8DE95B5L},{0L,0xE8DE95B5L,9L}},{{9L,0xE8DE95B5L,0L},{0xE8DE95B5L,0L,0L},{(-4L),9L,0L}},{{0x6DF2C578L,1L,9L},{0x6DF2C578L,(-1L),0xE8DE95B5L},{(-4L),0x3140C5FCL,(-4L)}}};
    int32_t l_1329[3];
    int8_t l_1332 = 0xC1L;
    uint64_t l_1334[5][3] = {{3UL,0x3AE400E667136E80LL,2UL},{18446744073709551611UL,0x3AE400E667136E80LL,18446744073709551611UL},{0x91FA5AE6DDEE5CE5LL,3UL,2UL},{0x91FA5AE6DDEE5CE5LL,0x91FA5AE6DDEE5CE5LL,3UL},{18446744073709551611UL,3UL,3UL}};
    uint32_t l_1341 = 0x6DE2AEDCL;
    int32_t l_1409 = 5L;
    int16_t ***l_1543 = &g_327;
    uint16_t * const l_1548 = &g_126;
    int8_t l_1555 = 0x15L;
    int32_t l_1567[4];
    uint32_t l_1574 = 0xC2B24C64L;
    uint32_t * const *l_1582 = &g_1039;
    uint32_t * const **l_1581 = &l_1582;
    union U1 ***l_1632 = &g_906;
    int64_t * const l_1664 = &g_302;
    const int32_t ***l_1678 = &g_256;
    const int32_t ****l_1677 = &l_1678;
    const int32_t *****l_1676 = &l_1677;
    uint64_t l_1701 = 0UL;
    uint8_t l_1714 = 252UL;
    uint32_t l_1737 = 0UL;
    int16_t **l_1756 = &g_328;
    uint32_t l_1759 = 0xFF712CDBL;
    uint64_t l_1773 = 1UL;
    uint8_t l_1807 = 0x5DL;
    int32_t *l_1812 = &l_1409;
    int32_t **l_1824 = &g_360;
    struct S0 *****l_1825 = (void*)0;
    uint32_t l_1969 = 0x82C957D0L;
    int16_t *l_2018 = &g_106;
    int16_t * const *l_2021 = &l_2018;
    int16_t * const **l_2022 = &l_2021;
    int16_t * const l_2024 = &g_2025;
    int16_t * const *l_2023[6] = {&l_2024,&l_2024,&l_2024,&l_2024,&l_2024,&l_2024};
    uint64_t l_2026 = 0xA90B82205B7ECD13LL;
    int64_t l_2050 = 1L;
    int16_t l_2055 = 0L;
    int32_t *l_2071 = (void*)0;
    int8_t l_2198 = (-6L);
    int32_t ****l_2315 = (void*)0;
    union U1 l_2319 = {{1L,0xC2053022L}};
    uint64_t l_2320 = 4UL;
    uint32_t l_2378 = 0x37B369E4L;
    int32_t l_2418 = 0x09D13723L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1329[i] = 0xA39D9BA7L;
    for (i = 0; i < 4; i++)
        l_1567[i] = 1L;
    return (*l_1307);
}



static uint8_t  func_27(const int8_t  p_28, union U1  p_29)
{ 
    uint64_t l_1194[3];
    struct S0 *l_1197 = (void*)0;
    union U1 l_1209[3][2] = {{{{5L,0xE3FC4CA5L}},{{5L,0xE3FC4CA5L}}},{{{5L,0xE3FC4CA5L}},{{5L,0xE3FC4CA5L}}},{{{5L,0xE3FC4CA5L}},{{5L,0xE3FC4CA5L}}}};
    int32_t l_1210[2];
    uint16_t *l_1211[2];
    int32_t l_1212 = 0x54AABBFEL;
    int32_t l_1213 = 0x9A180F46L;
    int64_t l_1214 = 5L;
    int8_t *l_1215 = (void*)0;
    int32_t l_1216 = 0L;
    union U1 *l_1233 = &g_1234[0][0][0];
    uint32_t l_1253[1];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1194[i] = 18446744073709551607UL;
    for (i = 0; i < 2; i++)
        l_1210[i] = 1L;
    for (i = 0; i < 2; i++)
        l_1211[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1253[i] = 18446744073709551611UL;
    for (g_123 = (-19); (g_123 != 22); g_123++)
    { 
        int32_t *l_1185 = &g_300;
        int32_t *l_1186 = &g_564[0][0][0];
        int32_t *l_1187 = &g_564[0][0][2];
        int32_t *l_1188 = &g_284;
        int32_t l_1189[1];
        int32_t *l_1190 = &g_564[0][0][5];
        int32_t *l_1191 = (void*)0;
        int32_t *l_1192 = &g_564[0][0][5];
        int32_t *l_1193[4][7] = {{&g_123,&g_564[0][0][5],&g_123,&g_123,&g_564[0][0][5],&g_123,(void*)0},{(void*)0,&g_123,&g_284,(void*)0,&l_1189[0],&l_1189[0],(void*)0},{&l_1189[0],&g_564[0][0][1],&l_1189[0],&g_300,(void*)0,(void*)0,&g_123},{&g_284,&g_123,(void*)0,&g_300,(void*)0,&g_123,&g_284}};
        struct S0 **l_1198 = &g_345;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1189[i] = (-1L);
        l_1194[2]++;
        (*l_1198) = l_1197;
    }
    if ((safe_add_func_uint32_t_u_u(l_1194[0], (l_1194[2] | ((((safe_sub_func_uint32_t_u_u(((p_29.f0.f1 < (*g_168)) < (l_1216 &= (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_1213 ^= (l_1212 = (0L < ((safe_sub_func_uint64_t_u_u((l_1210[1] |= ((((*g_168) != (((l_1209[1][0] , l_1209[1][0].f0.f1) && (-1L)) | (**g_624))) || 0x95L) , (*g_625))), g_320[0])) != l_1194[2])))) == l_1194[2]), l_1214)), p_29.f0.f1)))), p_29.f0.f1)) == 0x9BL) ^ p_28) || p_29.f0.f0)))))
    { 
        int32_t *l_1217 = &g_123;
        int32_t *l_1218[1][6];
        uint8_t l_1219 = 252UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1218[i][j] = &l_1210[1];
        }
        l_1219++;
        (*l_1217) = (*g_360);
    }
    else
    { 
        uint16_t l_1244 = 65531UL;
        int32_t l_1248 = (-6L);
        int32_t l_1249 = (-3L);
        int32_t l_1250[5];
        int32_t l_1251 = (-9L);
        uint32_t *l_1271 = &g_1175[1][0];
        const int32_t l_1272[6] = {0x6A552367L,0x6A552367L,0x6A552367L,0x6A552367L,0x6A552367L,0x6A552367L};
        int32_t *l_1278 = &l_1212;
        int32_t **l_1279 = &g_360;
        int i;
        for (i = 0; i < 5; i++)
            l_1250[i] = 7L;
        for (l_1213 = 0; (l_1213 >= (-19)); l_1213 = safe_sub_func_int32_t_s_s(l_1213, 9))
        { 
            union U1 **l_1231 = &g_322;
            union U1 **l_1232 = &g_322;
            struct S0 **l_1242 = (void*)0;
            struct S0 ***l_1241[1];
            int32_t l_1243[1];
            int32_t l_1245 = 0x88E84206L;
            int8_t l_1252 = (-1L);
            uint8_t l_1275 = 0x6DL;
            int i;
            for (i = 0; i < 1; i++)
                l_1241[i] = &l_1242;
            for (i = 0; i < 1; i++)
                l_1243[i] = 0L;
            (*g_360) = (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((p_28 == (safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s((-1L), ((l_1233 = &l_1209[2][1]) == &l_1209[1][0]))) & ((safe_div_func_int8_t_s_s((l_1210[1] <= ((safe_lshift_func_uint16_t_u_s((l_1243[0] = (safe_mod_func_uint8_t_u_u(((l_1241[0] = (void*)0) == (void*)0), p_28))), l_1244)) , (-2L))), g_134[1][1])) , l_1194[0])) >= p_29.f0.f0), l_1245))))), p_28));
            for (p_29.f0.f1 = 0; (p_29.f0.f1 <= 2); p_29.f0.f1 += 1)
            { 
                int32_t *l_1246 = &l_1210[1];
                int32_t *l_1247[4][7][4] = {{{(void*)0,&g_300,(void*)0,&g_300},{&l_1245,&l_1243[0],&l_1210[1],&l_1243[0]},{&g_564[0][0][5],&g_300,&l_1243[0],(void*)0},{&g_564[0][0][4],&g_564[0][0][3],(void*)0,(void*)0},{&g_564[0][0][4],&g_564[0][0][4],&l_1243[0],&l_1216},{&l_1213,&g_123,&g_300,&l_1210[1]},{&g_300,(void*)0,&g_564[0][0][3],&g_300}},{{&g_300,(void*)0,&g_564[0][0][4],&l_1210[1]},{(void*)0,&g_123,&g_284,&l_1216},{&g_300,&g_564[0][0][4],&g_3,(void*)0},{(void*)0,&g_564[0][0][3],&l_1212,(void*)0},{(void*)0,&g_300,&g_564[0][0][5],&l_1243[0]},{&l_1212,&l_1243[0],&g_123,&g_300},{(void*)0,&g_300,&l_1210[1],&g_3}},{{(void*)0,&g_564[0][0][5],&g_564[0][0][4],&g_564[0][0][5]},{&g_123,&g_564[0][0][4],(void*)0,&l_1243[0]},{&g_3,(void*)0,&g_300,(void*)0},{(void*)0,&l_1213,&g_123,&l_1212},{(void*)0,&g_123,&g_300,&g_564[0][0][4]},{&g_3,&l_1212,&l_1213,(void*)0},{(void*)0,(void*)0,&g_300,&g_284}},{{&l_1213,&l_1213,&g_300,(void*)0},{&g_284,(void*)0,(void*)0,&l_1210[1]},{&g_300,&g_564[0][0][5],&g_564[0][0][3],&g_123},{&l_1213,(void*)0,&g_300,&g_123},{(void*)0,&g_3,&g_3,(void*)0},{(void*)0,&g_300,&g_123,(void*)0},{&g_300,&l_1210[1],&l_1210[1],&g_123}}};
                uint32_t *l_1258 = &g_118;
                uint8_t *l_1263 = &g_379;
                int64_t *l_1268 = &g_134[1][2];
                int16_t *l_1269 = &g_301;
                int16_t *l_1270 = &g_106;
                int i, j, k;
                ++l_1253[0];
                (*l_1246) ^= (((p_29.f0.f1 & 0x7AB708579859AD94LL) , (((safe_add_func_int32_t_s_s((((*l_1258) |= 0xFF1EC0FBL) || (((l_1250[0] && ((*l_1270) = ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((++(*l_1263)), ((safe_mod_func_uint16_t_u_u((((*l_1268) = p_29.f0.f0) ^ g_300), ((*l_1269) = l_1252))) ^ 0x5791L))), g_302)) <= l_1253[0]))) , p_29.f0.f0) && p_28)), (*g_360))) <= 0x1846268E2B809EC1LL) | (-1L))) >= p_28);
                (*l_1246) |= ((*g_1038) == l_1271);
                (*g_360) &= (l_1272[1] >= ((*l_1258)--));
                --l_1275;
            }
            return l_1253[0];
        }
        l_1278 = &g_564[0][0][0];
        (*l_1279) = &l_1216;
    }
    return (*g_168);
}



static uint32_t  func_38(int32_t  p_39, struct S0  p_40, struct S0  p_41)
{ 
    uint64_t l_1179 = 1UL;
    return l_1179;
}



static int32_t  func_42(int32_t  p_43, int64_t  p_44, const int8_t  p_45)
{ 
    uint64_t *l_621[2][4][7] = {{{&g_82,&g_82,&g_82,(void*)0,&g_286,(void*)0,&g_82},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82,(void*)0,&g_286,(void*)0,&g_82},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82}},{{&g_82,&g_82,&g_82,(void*)0,&g_286,(void*)0,&g_82},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82,(void*)0,&g_286,(void*)0,&g_82},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82}}};
    uint64_t * const l_627 = &g_628[5][4][1];
    uint64_t * const *l_626 = &l_627;
    uint16_t *l_629 = &g_320[0];
    int32_t l_630 = 1L;
    int8_t *l_631 = &g_356;
    int32_t *l_632[6][7] = {{&g_3,&g_3,&g_3,&g_284,&g_3,&g_564[0][0][5],&g_564[0][0][5]},{&g_3,&g_3,&g_564[0][0][3],&g_284,&g_564[0][0][0],&l_630,&g_564[0][0][5]},{&g_3,&g_3,&g_564[0][0][3],&l_630,&g_3,&l_630,&g_564[0][0][3]},{&g_3,&g_3,&g_3,&g_284,&g_3,&g_564[0][0][5],&g_564[0][0][5]},{&g_3,&g_3,&g_564[0][0][3],&g_284,&g_564[0][0][0],&l_630,&g_564[0][0][5]},{&g_3,&g_3,&g_564[0][0][3],&l_630,&g_3,&l_630,&g_564[0][0][3]}};
    int32_t **l_633 = (void*)0;
    int32_t **l_634 = &l_632[5][6];
    struct S0 l_647[3][4] = {{{1L,0x39CEDA2DL},{1L,0x39CEDA2DL},{1L,0x39CEDA2DL},{1L,0x39CEDA2DL}},{{1L,0x39CEDA2DL},{1L,0x39CEDA2DL},{1L,0x39CEDA2DL},{1L,0x39CEDA2DL}},{{1L,0x39CEDA2DL},{1L,0x39CEDA2DL},{1L,0x39CEDA2DL},{1L,0x39CEDA2DL}}};
    int16_t ***l_648 = &g_327;
    int32_t l_649 = (-1L);
    int64_t l_678 = (-3L);
    uint64_t l_732 = 0x1DF0044B4B174412LL;
    int32_t *l_765[7];
    int64_t *l_772 = &g_285;
    int64_t ** const l_771 = &l_772;
    int64_t ** const *l_770[5][6] = {{&l_771,&l_771,&l_771,&l_771,&l_771,&l_771},{&l_771,&l_771,(void*)0,&l_771,&l_771,&l_771},{&l_771,&l_771,&l_771,&l_771,&l_771,&l_771},{&l_771,&l_771,&l_771,&l_771,&l_771,&l_771},{&l_771,&l_771,&l_771,(void*)0,(void*)0,&l_771}};
    const uint32_t l_786 = 7UL;
    uint16_t l_847 = 1UL;
    struct S0 *l_849 = &g_850;
    int64_t l_958 = 0L;
    int32_t l_973 = 0xCA82A60FL;
    uint32_t l_974[7][6][6] = {{{4294967294UL,0x084129ABL,0xC5B31194L,0xB9A0BCC5L,0xEF1EFE59L,4294967295UL},{4294967295UL,9UL,4294967294UL,0x8EBEE012L,4294967290UL,1UL},{0x585F5C30L,1UL,4294967293UL,0x084129ABL,1UL,0x391DACCAL},{0UL,0x355A06C3L,0x1D3BDDC4L,0UL,0x1355CC1DL,4294967295UL},{0xC68D43EFL,0xD089834FL,0x8CE22E61L,4294967295UL,4294967292UL,4294967295UL},{0UL,0x6A332FBEL,0UL,0x391DACCAL,0x355A06C3L,0x3660F0D4L}},{{0x5186774DL,0xA33BDF9DL,4294967295UL,7UL,4294967295UL,0xA33BDF9DL},{0x224C1AF2L,0xAD641A8EL,4294967293UL,1UL,4UL,0x119724EFL},{0xA33BDF9DL,0x8CE22E61L,0x6BCA407EL,0x6D767763L,0UL,1UL},{4294967295UL,0x8CE22E61L,0xD089834FL,0xC68D43EFL,4UL,0xEC7F2702L},{0x9352231FL,0xAD641A8EL,0x32C73915L,0x355A06C3L,4294967295UL,0x9352231FL},{1UL,0xA33BDF9DL,0x6D767763L,1UL,0x355A06C3L,0x5186774DL}},{{0x70FDE31AL,0x6A332FBEL,4294967295UL,4294967290UL,4294967292UL,0xD089834FL},{0xDB9BDF31L,0xD089834FL,4294967290UL,0x585F5C30L,0x1355CC1DL,0UL},{0xDF0835F4L,0x355A06C3L,0UL,0x32C73915L,1UL,4294967293UL},{0x9352231FL,1UL,4294967295UL,4294967294UL,4294967290UL,1UL},{0UL,9UL,0xFD3849CBL,1UL,0x224C1AF2L,0UL},{0x391DACCAL,0UL,4294967294UL,1UL,4294967295UL,0xD64483DAL}},{{7UL,0UL,0UL,0x224C1AF2L,0xA33BDF9DL,0UL},{0x46A4CC45L,4294967290UL,1UL,0x9C78BBB5L,4294967295UL,0x3471C37DL},{0UL,4294967290UL,4294967293UL,0UL,0x585F5C30L,0x46A4CC45L},{0UL,1UL,0x6D767763L,0x73780924L,0x391DACCAL,0xF761F657L},{0x355A06C3L,0xE8871458L,0UL,0x084129ABL,4294967295UL,0x585F5C30L},{4294967295UL,1UL,4294967295UL,0x70FDE31AL,7UL,1UL}},{{0x3660F0D4L,0xD64483DAL,4294967294UL,0xBD1F8CEEL,0xA55AD2FDL,0xDF0835F4L},{0xEC7F2702L,1UL,0x9C78BBB5L,0x119724EFL,0x119724EFL,0x9C78BBB5L},{0UL,0UL,4294967295UL,0x73780924L,0x8CE22E61L,4294967295UL},{4294967294UL,4294967293UL,4294967295UL,0UL,4294967292UL,4294967295UL},{0UL,4294967294UL,4294967295UL,0x391DACCAL,0UL,4294967295UL},{0x46A4CC45L,0x391DACCAL,4294967295UL,4294967287UL,0xAD641A8EL,0x9C78BBB5L}},{{4294967287UL,0xAD641A8EL,0x9C78BBB5L,0xC5B31194L,1UL,0xDF0835F4L},{0xA33BDF9DL,0x1355CC1DL,4294967294UL,1UL,0UL,1UL},{0UL,0xBDCB70D6L,4294967295UL,0x6BCA407EL,0UL,0UL},{0x355A06C3L,1UL,4UL,9UL,0xFD3849CBL,0x355A06C3L},{4294967290UL,4294967295UL,0xDF0835F4L,1UL,4294967286UL,4294967295UL},{6UL,4294967295UL,0x1D3BDDC4L,4294967295UL,0x9C78BBB5L,0x6BCA407EL}},{{4294967290UL,4294967294UL,4294967295UL,1UL,0x9352231FL,0x391DACCAL},{0x3660F0D4L,4294967286UL,0xC464374CL,4UL,4294967295UL,4294967295UL},{0x355A06C3L,0xDF0835F4L,4294967295UL,0xEC7F2702L,0x224C1AF2L,0x8CE22E61L},{0UL,4294967295UL,0xBD1F8CEEL,0x084129ABL,0UL,4294967295UL},{0UL,1UL,4294967295UL,0x3471C37DL,4294967295UL,0x1D3BDDC4L},{4294967289UL,0xE0490D08L,0UL,4294967291UL,4294967295UL,0x391DACCAL}}};
    uint64_t l_989 = 18446744073709551607UL;
    uint32_t ***l_1124[2];
    struct S0 **l_1143 = (void*)0;
    struct S0 ** const *l_1142 = &l_1143;
    struct S0 ** const **l_1141 = &l_1142;
    int8_t l_1155[7];
    int16_t l_1164 = (-2L);
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_765[i] = &g_355;
    for (i = 0; i < 2; i++)
        l_1124[i] = &g_1038;
    for (i = 0; i < 7; i++)
        l_1155[i] = 0L;
    g_564[0][0][6] = ((((*l_631) = (g_285 <= ((g_390 = 0UL) && (safe_mul_func_uint16_t_u_u(((*l_629) = ((0x6AL > (1UL | ((g_624 == (l_626 = &g_625)) || (p_43 ^= ((*g_360) = ((void*)0 == &g_303)))))) >= g_3)), l_630))))) && l_630) && 0x1EL);
lbl_725:
    (*l_634) = &p_43;
    if ((((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((g_139 & (g_564[0][0][5] < (safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((p_44 , (((0x20CCL <= ((l_647[0][0] , l_648) == l_648)) == 0x8A0C6F67F7D67678LL) == p_43)), p_44)) < (*g_360)), 11)))) , p_44), g_320[0])), g_320[0])), g_438.f0)) & l_649), 0x5BL)) , 0xCD31L) <= g_323.f0.f1))
    { 
        const uint32_t l_668 = 4294967295UL;
        int32_t l_669 = 0x9854DCCCL;
        int32_t l_671 = 0L;
        int32_t l_672 = 7L;
        int32_t l_674 = 0x3F890E0FL;
        int32_t l_675 = 1L;
        int32_t l_676 = 7L;
        int32_t l_677 = 0xEB67C4AAL;
        int16_t l_704 = 0x1BC5L;
        int32_t *l_707 = (void*)0;
        for (g_355 = (-24); (g_355 > (-24)); g_355++)
        { 
            int16_t **l_656 = &g_328;
            int32_t l_666[1][2][3] = {{{(-3L),(-3L),(-3L)},{6L,6L,6L}}};
            uint32_t *l_667 = &g_118;
            int16_t *l_685[7][2] = {{&g_106,&g_106},{&g_106,&g_106},{&g_106,&g_106},{&g_106,&g_106},{&g_106,&g_106},{&g_106,&g_106},{&g_106,&g_106}};
            int32_t l_701[1][4] = {{0xFA0F8008L,0xFA0F8008L,0xFA0F8008L,0xFA0F8008L}};
            int32_t *l_702 = (void*)0;
            int32_t *l_703[7][3][4] = {{{(void*)0,(void*)0,&g_323.f0.f1,&g_355},{(void*)0,&g_323.f0.f1,&g_175[4][1],(void*)0},{&g_145.f1,&g_355,&g_145.f1,&g_175[4][1]}},{{&g_145.f1,&g_355,&g_323.f0.f1,(void*)0},{&g_355,&g_323.f0.f1,&g_323.f0.f1,&g_355},{&g_145.f1,(void*)0,&g_323.f0.f1,&g_175[4][1]}},{{&g_355,&g_145.f1,&g_323.f0.f1,&g_145.f1},{&g_145.f1,&g_323.f0.f1,&g_145.f1,&g_145.f1},{&g_145.f1,&g_145.f1,&g_175[4][1],&g_175[4][1]}},{{(void*)0,(void*)0,&g_323.f0.f1,&g_355},{(void*)0,&g_323.f0.f1,&g_175[4][1],(void*)0},{&g_145.f1,&g_355,&g_145.f1,&g_175[4][1]}},{{&g_145.f1,&g_355,&g_323.f0.f1,(void*)0},{&g_355,&g_323.f0.f1,&g_323.f0.f1,&g_355},{&g_145.f1,(void*)0,&g_323.f0.f1,&g_175[4][1]}},{{&g_355,&g_145.f1,&g_323.f0.f1,&g_145.f1},{&g_145.f1,&g_323.f0.f1,&g_145.f1,&g_145.f1},{&g_145.f1,&g_145.f1,&g_175[4][1],&g_175[4][1]}},{{(void*)0,(void*)0,&g_323.f0.f1,&g_355},{(void*)0,&g_323.f0.f1,&g_175[4][1],(void*)0},{&g_145.f1,&g_355,&g_145.f1,&g_175[4][1]}}};
            int32_t l_705 = 1L;
            int32_t l_706 = (-5L);
            int i, j, k;
            if (((safe_sub_func_uint8_t_u_u(p_44, (safe_rshift_func_uint8_t_u_s((((l_656 != (void*)0) & (safe_add_func_int32_t_s_s(((void*)0 == g_659), (safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((*g_360) = (((*l_667) = (((*l_629) = (7UL != ((safe_sub_func_uint16_t_u_u(g_258, l_666[0][0][0])) || l_666[0][0][1]))) , 6UL)) | g_134[1][1])), l_668)) && (*g_360)), (-5L)))))) & (*g_168)), l_666[0][0][0])))) || p_45))
            { 
                int32_t l_670 = (-8L);
                int32_t l_673[1];
                uint64_t l_679 = 0UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_673[i] = 0xC7431E75L;
                l_679--;
            }
            else
            { 
                (*l_634) = &g_3;
                return g_284;
            }
            l_706 &= ((((safe_div_func_uint8_t_u_u((g_123 | (safe_unary_minus_func_int16_t_s((l_666[0][0][0] &= p_45)))), ((l_677 = ((((l_705 ^= ((safe_div_func_uint32_t_u_u((p_43 > ((((safe_mul_func_uint16_t_u_u(((--(*l_667)) <= (safe_div_func_int32_t_s_s(((+((((g_323.f0.f1 = (l_704 = (g_175[5][1] = (safe_mul_func_int8_t_s_s((((*l_631) = p_43) && ((((void*)0 == &l_678) > (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(p_45, l_701[0][3])) , l_701[0][3]) , 1UL), 3))) | (*g_168))), l_701[0][2]))))) , (-1L)) > p_43) != 0x92L)) , l_701[0][1]), (*g_360)))), p_43)) | p_43) <= p_43) & g_320[0])), l_701[0][3])) , p_43)) == 0x9098L) , (**g_624)) == 0x13E7C6AD54E3216CLL)) | l_676))) || 0x12L) >= (*g_360)) && 0x6D10EA2F1D54BE62LL);
            l_707 = &p_43;
        }
        (*g_360) ^= p_44;
    }
    else
    { 
        int32_t l_710 = 0x6FD5780BL;
        int16_t **l_711 = &g_328;
        uint8_t *l_720 = &g_379;
        int32_t l_739[3];
        const int32_t *l_766 = &g_767;
        int32_t l_769 = 0xB97B95EAL;
        uint16_t l_779 = 9UL;
        uint16_t l_835 = 0xD4F1L;
        uint64_t *l_838 = &g_82;
        int16_t ****l_890 = &l_648;
        int8_t l_962 = (-1L);
        int32_t **l_979 = &g_360;
        int8_t l_984[6][6] = {{1L,(-6L),(-6L),1L,0x89L,0xE0L},{0x89L,1L,(-6L),(-6L),1L,0x89L},{0x89L,(-6L),0xE0L,1L,1L,0xE0L},{1L,1L,0xE0L,(-6L),0x89L,0x89L},{1L,(-6L),(-6L),1L,0x89L,0xE0L},{0x89L,1L,(-6L),(-6L),1L,0x89L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_739[i] = 4L;
        (*g_360) &= ((safe_mod_func_uint64_t_u_u(((**g_624) = p_43), l_710)) > (l_711 == ((safe_add_func_uint16_t_u_u(g_355, ((safe_add_func_int8_t_s_s((p_45 | (((*l_627)++) != (safe_rshift_func_int8_t_s_s((((*l_720) = (((((*l_626) == (void*)0) && p_43) | 0UL) ^ g_118)) >= p_43), 2)))), p_45)) ^ (*g_168)))) , l_711)));
        for (g_390 = 24; (g_390 != 59); ++g_390)
        { 
            int16_t l_743 = 9L;
            int16_t **l_744[7][1][2] = {{{&g_328,&g_328}},{{&g_328,&g_328}},{{&g_328,&g_328}},{{&g_328,&g_328}},{{&g_328,&g_328}},{{&g_328,&g_328}},{{&g_328,&g_328}}};
            int32_t *l_764 = (void*)0;
            int64_t *l_768[3];
            int64_t ** const l_774 = &l_768[0];
            int64_t ** const *l_773 = &l_774;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_768[i] = &l_678;
            for (g_118 = 24; (g_118 == 41); ++g_118)
            { 
                (*g_360) |= (-1L);
                for (l_710 = 4; (l_710 >= 0); l_710 -= 1)
                { 
                    int16_t **l_745 = &g_328;
                    int i, j;
                    p_43 = (*g_360);
                    if (g_355)
                        goto lbl_725;
                    (*g_360) |= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(p_45, ((*l_627) ^= (**g_624)))), 10));
                    p_43 = (((((safe_lshift_func_uint8_t_u_s(((((*l_627) = l_732) > ((1UL | ((l_743 = (((((0xEF917AC5L > ((((4294967295UL < (safe_sub_func_uint16_t_u_u(0xB995L, (safe_add_func_uint16_t_u_u((l_739[0] ^= ((*l_629)--)), (safe_rshift_func_uint8_t_u_s((+(&g_327 == (void*)0)), g_134[2][1]))))))) | g_139) || 0x55L) >= l_710)) , 1UL) , l_720) == (void*)0) & g_285)) ^ p_44)) != p_44)) >= 1UL), 3)) >= 0x1394FFB606069F31LL) > p_45) , l_744[0][0][0]) != l_745);
                }
            }
            l_769 |= (safe_add_func_uint8_t_u_u((*g_168), ((safe_rshift_func_uint16_t_u_s((g_82 && (safe_div_func_int32_t_s_s((!((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((g_134[1][2] = (g_302 = ((*g_625) | ((p_45 | ((((safe_sub_func_uint8_t_u_u(0x74L, ((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s(((l_765[3] = l_764) != (l_766 = (void*)0)), p_43)))) || l_739[0]), 14)) , (*g_168)))) , g_300) < (-9L)) && g_139)) | 252UL)))) != g_300), 0x5404B8ADL)), 3)) == p_43)), p_43))), 7)) > (-1L))));
            l_773 = l_770[3][4];
        }
    }
    for (g_137 = 5; (g_137 >= 2); g_137 -= 1)
    { 
        uint32_t *l_990 = &g_118;
        int16_t * const *l_1004 = &g_328;
        int16_t * const **l_1003 = &l_1004;
        int16_t * const ***l_1005 = (void*)0;
        uint8_t *l_1008[2];
        int32_t l_1009 = 5L;
        int32_t l_1012 = 2L;
        uint32_t l_1013[2][2];
        int32_t l_1016 = 0L;
        int32_t l_1017 = (-1L);
        int32_t l_1018 = (-1L);
        int32_t l_1019[4] = {0L,0L,0L,0L};
        uint64_t l_1020 = 0xE68635F83483A0D9LL;
        int8_t l_1085 = (-7L);
        struct S0 l_1102 = {5L,0x7F4AEBADL};
        uint32_t * const *l_1123 = &g_1039;
        uint32_t * const **l_1122 = &l_1123;
        uint8_t l_1134 = 0xE5L;
        union U1 **l_1137 = &g_322;
        struct S0 ***l_1145 = (void*)0;
        struct S0 ****l_1144[5][4][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1008[i] = &g_379;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_1013[i][j] = 18446744073709551615UL;
        }
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1144[i][j][k] = &l_1145;
            }
        }
        if (l_989)
            break;
        if (((++(*l_990)) < ((safe_sub_func_int64_t_s_s((((g_123 && (safe_mod_func_uint32_t_u_u(p_43, ((safe_lshift_func_uint16_t_u_u((((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_1003 = l_1003) == &g_327), 0)), (l_1009 |= ((g_241 == (++(*g_625))) & p_44)))) || ((p_45 <= 0UL) == 255UL)) , l_1009) , (void*)0) != l_765[g_137]), 15)) & (*g_360))))) | (*g_360)) , g_390), g_438.f1)) , p_43)))
        { 
            int32_t l_1010 = 0xE8D92C64L;
            int32_t l_1011[3][3] = {{0x56D23721L,0x56D23721L,0x8FAAC4B8L},{0x56D23721L,0x56D23721L,0x8FAAC4B8L},{0x56D23721L,0x56D23721L,0x8FAAC4B8L}};
            struct S0 *l_1023[6] = {&g_1024[1],&g_1024[1],&g_1024[1],&g_1024[1],&g_1024[1],&g_1024[1]};
            int i, j;
            l_1013[1][0]--;
            l_1020--;
            l_1023[4] = &l_647[0][0];
            for (g_390 = 0; (g_390 <= 3); g_390 += 1)
            { 
                struct S0 * const *l_1025 = &g_345;
                struct S0 * const **l_1026 = &l_1025;
                uint32_t ***l_1040 = (void*)0;
                uint32_t ***l_1041 = &g_1038;
                (*l_1041) = ((((&g_345 == ((*l_1026) = l_1025)) && (l_1019[0] = (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((1UL ^ (g_303 &= p_44)), 7)), (safe_div_func_uint32_t_u_u(((g_1035 <= (0xDA3E891AL && (safe_add_func_uint32_t_u_u((((-1L) || (-1L)) | (-1L)), p_45)))) && 0x9D0A534B75BF375BLL), 1UL)))), 1L)))) >= 1L) , g_1038);
                for (g_301 = 0; (g_301 <= 3); g_301 += 1)
                { 
                    int i, j, k;
                    (*g_360) = (((safe_unary_minus_func_uint16_t_u(((safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((-2L), p_43)), 0xB942AF3C6F14BA4DLL)) > 0xC900L))) | ((safe_mod_func_int64_t_s_s(g_302, ((g_628[(g_301 + 1)][(g_301 + 1)][g_390] = l_1017) && (l_1011[1][1] <= 0x18L)))) == 6L)) | (*g_168));
                }
            }
        }
        else
        { 
            int32_t l_1067 = 1L;
            int32_t l_1069 = 0xF67E4AEDL;
            int32_t l_1086 = (-7L);
            int32_t l_1087 = 0x9611CAF2L;
            uint32_t l_1099 = 4294967293UL;
            struct S0 **l_1127 = (void*)0;
            struct S0 ***l_1126 = &l_1127;
            struct S0 ****l_1125 = &l_1126;
            int32_t l_1133 = 0xA73D39A0L;
            (*l_634) = &l_1012;
            if (((safe_lshift_func_int8_t_s_s((g_139 , ((l_1019[3] &= (*g_360)) , (safe_rshift_func_uint8_t_u_u(0xFCL, 5)))), 4)) ^ ((*g_1039) ^ l_1012)))
            { 
                int32_t ** const l_1065 = (void*)0;
                int32_t l_1066[1][4] = {{0x4B3602B2L,0x4B3602B2L,0x4B3602B2L,0x4B3602B2L}};
                uint32_t *l_1074 = &g_118;
                uint8_t l_1088 = 0UL;
                int32_t *l_1093[1][2];
                int16_t *l_1121 = &g_301;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1093[i][j] = &l_630;
                }
                for (g_301 = 2; (g_301 <= 6); g_301 += 1)
                { 
                    union U1 l_1068 = {{-1L,0x9DADCDFEL}};
                    l_1069 &= (safe_lshift_func_uint8_t_u_s(8UL, ((((safe_sub_func_uint64_t_u_u((((((((!(safe_add_func_uint8_t_u_u((*g_168), (+(((&l_765[3] != ((safe_div_func_int8_t_s_s((&g_257 != (void*)0), g_302)) , l_1065)) , (*g_625)) & g_323.f0.f0))))) <= l_1066[0][3]) & 251UL) , l_1067) != 0xB44FL) , l_1068) , (**g_624)), 9L)) != (-5L)) < p_44) > 0x1AL)));
                }
                if ((p_43 = 0x65F35973L))
                { 
                    struct S0 **l_1079 = &l_849;
                    int32_t l_1084[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1084[i] = (-1L);
                    (*g_360) = ((safe_div_func_int64_t_s_s(g_241, (safe_mul_func_int8_t_s_s((l_1074 != ((*g_1038) = l_765[g_137])), ((*g_168) && (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((l_1079 == &l_849) & (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(0x7E5BL, 8)), p_43))), 65528UL)), l_1019[1]))))))) | 0xE1L);
                    l_1088--;
                    l_1093[0][0] = ((safe_mod_func_int8_t_s_s(g_564[0][0][5], (p_45 | 1UL))) , &l_1012);
                }
                else
                { 
                    uint8_t l_1094 = 0xDCL;
                    l_1094 &= ((*g_360) |= p_45);
                    if (p_44)
                        continue;
                    if (p_44)
                        break;
                    p_43 = (safe_div_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((((*g_360) = l_1067) != ((l_1099 | (safe_rshift_func_int8_t_s_u(((l_1102 , &g_625) == ((p_45 , ((safe_add_func_uint8_t_u_u(l_1094, (g_303 ^= ((safe_div_func_uint8_t_u_u(p_45, l_1094)) < g_258)))) , (**g_624))) , &g_625)), 4))) , l_1094)), p_43)) | l_1102.f1), (*g_625)));
                    (*l_634) = &p_43;
                }
                l_1086 = ((*g_360) = (g_1107 & (safe_mul_func_int8_t_s_s(l_1086, (safe_mul_func_int8_t_s_s(((*l_631) = p_44), ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((*l_629) = (((((((((*l_990) &= ((p_44 & (p_44 && ((((((((~((*l_1121) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((((l_1087 &= 0xEA1AA4F3L) ^ l_1099) , p_44) || (-9L)), p_43)), g_390)))) ^ 5L) , g_379) >= p_44) < (*g_625)) | p_44) >= 0xFCD7AB7D57B48716LL) , p_44))) != p_43)) ^ 0x3CB194D1L) , l_1122) != l_1124[1]) | 0x5E3DL) , 0xC2L) <= g_123) != g_134[0][0])) ^ 65530UL), 0UL)), p_43)) & 0x10L)))))));
                for (l_847 = 0; (l_847 <= 4); l_847 += 1)
                { 
                    struct S0 *****l_1128 = &l_1125;
                    (*l_1128) = l_1125;
                    if (p_43)
                        continue;
                }
                return p_44;
            }
            else
            { 
                int8_t l_1129 = 0L;
                int32_t l_1130 = 5L;
                int32_t l_1131 = 0L;
                int32_t l_1132 = 0x2BCD86A3L;
                union U1 ***l_1138[2][3][6] = {{{&g_906,&l_1137,&l_1137,&g_906,&l_1137,&g_906},{&g_906,(void*)0,&l_1137,&l_1137,&g_906,&g_906},{&l_1137,&l_1137,&l_1137,(void*)0,&g_906,(void*)0}},{{&g_906,(void*)0,&g_906,&l_1137,&l_1137,&l_1137},{&g_906,&l_1137,&g_906,&g_906,&g_906,&l_1137},{&l_1137,(void*)0,&l_1137,&g_906,&g_906,&l_1137}}};
                int i, j, k;
                ++l_1134;
                g_906 = l_1137;
                for (l_1009 = 6; (l_1009 >= 0); l_1009 -= 1)
                { 
                    (*g_360) = l_1018;
                    (*l_634) = (void*)0;
                }
            }
        }
    }
    g_284 = ((*g_360) = (p_43 >= ((void*)0 == &l_621[1][0][4])));
    return p_43;
}



static uint32_t  func_46(int32_t  p_47, int16_t  p_48, int8_t  p_49)
{ 
    struct S0 l_593 = {0x1646DAE7L,0L};
    int32_t *l_594[5] = {&g_284,&g_284,&g_284,&g_284,&g_284};
    uint16_t *l_597[1];
    int8_t *l_614 = (void*)0;
    int8_t *l_615 = &g_356;
    uint32_t l_616 = 0x9263C01EL;
    uint8_t *l_617 = (void*)0;
    uint8_t *l_618 = &g_379;
    int16_t **l_619 = (void*)0;
    int32_t l_620[5][5] = {{0x4FBDB784L,0x56CEA97AL,0x437FA1A6L,0x56CEA97AL,0x4FBDB784L},{0xEF8A76C9L,0x24F08A8BL,(-1L),0xFAFB1A69L,0x370E5B0CL},{(-1L),0x24F08A8BL,0xEF8A76C9L,0xEF8A76C9L,0x24F08A8BL},{0x437FA1A6L,0x56CEA97AL,0x4FBDB784L,0x24F08A8BL,0x370E5B0CL},{0x56CEA97AL,0xEF8A76C9L,0x4FBDB784L,(-1L),0x4FBDB784L}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_597[i] = &g_320[0];
    g_564[0][0][4] = (safe_add_func_uint32_t_u_u(0xD5236A81L, ((*g_360) = (safe_rshift_func_uint16_t_u_u((g_379 != (l_593 , l_593.f1)), l_593.f0)))));
    (*g_360) = (*g_360);
    (*g_360) = (((((safe_div_func_uint8_t_u_u(((((g_118 = p_47) , (g_126 = (p_47 || p_49))) > (safe_mul_func_uint8_t_u_u(((g_390 || g_390) , (safe_add_func_uint8_t_u_u(((*l_618) = (9UL > (safe_div_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_615) = ((*g_168) | 0x15L)), g_300)), g_302)) < 1L), p_49)) && 1UL), l_616)), p_48)) > p_49), 4L)))), p_47))), 1L))) > g_134[1][1]), 0xE9L)) , l_619) == (void*)0) > p_47) & p_49);
    return l_620[2][0];
}



static uint8_t  func_53(uint64_t  p_54)
{ 
    uint8_t l_58 = 0x43L;
    int32_t l_64 = 0x43DEE6EEL;
    int32_t l_86 = (-6L);
    int32_t l_87 = (-1L);
    int32_t l_90[7][6] = {{0xACA8A51DL,1L,(-6L),0L,(-6L),1L},{0xACA8A51DL,1L,(-6L),0L,(-6L),1L},{0xACA8A51DL,1L,(-6L),0L,(-6L),1L},{0xACA8A51DL,1L,(-6L),0L,(-6L),1L},{0xACA8A51DL,1L,(-6L),0L,(-6L),1L},{0xACA8A51DL,1L,(-6L),0L,(-6L),1L},{0xACA8A51DL,1L,(-6L),0L,(-6L),1L}};
    int32_t *l_163 = &l_86;
    int32_t **l_162 = &l_163;
    int64_t * const l_171 = &g_134[1][1];
    struct S0 l_228 = {0x6E159C15L,2L};
    uint64_t l_231[5];
    uint32_t l_278 = 0UL;
    uint32_t *l_340 = &l_278;
    int64_t *l_362 = &g_137;
    int32_t l_388 = 0L;
    int32_t l_389 = 0x15E9AC74L;
    int16_t * const *l_521 = &g_328;
    int16_t * const **l_520 = &l_521;
    int16_t ****l_559 = (void*)0;
    int64_t l_568 = 0x599ED79E98B80AD4LL;
    int32_t l_569 = 0x61177807L;
    int32_t l_570 = (-5L);
    int32_t l_571 = 8L;
    int32_t l_572 = 0x7360E75EL;
    int32_t l_573[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_574[2][5][1] = {{{0L},{0x63D20D3FL},{0x63D20D3FL},{0L},{0xEF9DEC1DL}},{{0L},{0x63D20D3FL},{0x63D20D3FL},{0L},{0xEF9DEC1DL}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_231[i] = 0UL;
    for (p_54 = 0; (p_54 == 43); p_54++)
    { 
        int32_t l_57 = 0L;
        if (l_57)
            break;
        if (g_3)
            continue;
        return l_58;
    }
    if ((safe_add_func_uint32_t_u_u(l_58, l_58)))
    { 
        int8_t l_78 = 1L;
        int32_t **l_95 = (void*)0;
        int32_t *l_97 = &l_64;
        int32_t **l_96 = &l_97;
        int16_t *l_105 = &g_106;
        uint8_t *l_107[4][3][7] = {{{&l_58,&l_58,&l_58,(void*)0,&l_58,(void*)0,&l_58},{&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,(void*)0,&l_58,&l_58,(void*)0,&l_58,&l_58}},{{&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{(void*)0,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}},{{&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,&l_58,&l_58,(void*)0,&l_58,&l_58},{&l_58,&l_58,&l_58,(void*)0,(void*)0,&l_58,&l_58}},{{(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}}};
        uint8_t l_108 = 0x58L;
        uint8_t l_115[4][7] = {{251UL,251UL,0x31L,0x31L,251UL,251UL,251UL},{252UL,251UL,251UL,252UL,251UL,252UL,251UL},{0x4FL,0x4FL,251UL,0x31L,251UL,0x4FL,0x4FL},{0x4FL,251UL,0x31L,251UL,0x4FL,0x4FL,251UL}};
        union U1 l_117 = {{1L,6L}};
        int32_t l_192 = 0x55A46D66L;
        uint32_t l_290[3][7][2] = {{{18446744073709551609UL,1UL},{18446744073709551609UL,1UL},{18446744073709551609UL,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551609UL},{18446744073709551609UL,1UL},{18446744073709551609UL,1UL}},{{18446744073709551609UL,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551609UL},{18446744073709551609UL,1UL},{18446744073709551609UL,1UL},{18446744073709551609UL,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551609UL},{18446744073709551609UL,1UL},{18446744073709551609UL,1UL},{18446744073709551609UL,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551609UL},{18446744073709551609UL,1UL}}};
        struct S0 *l_343 = &l_117.f0;
        int32_t l_354 = 1L;
        uint64_t l_357 = 0UL;
        int i, j, k;
        for (p_54 = (-8); (p_54 >= 46); ++p_54)
        { 
            int32_t *l_63 = (void*)0;
            l_64 = g_3;
            for (l_64 = 0; (l_64 < (-15)); l_64 = safe_sub_func_int32_t_s_s(l_64, 8))
            { 
                uint64_t *l_80 = (void*)0;
                uint64_t *l_81 = &g_82;
                union U1 l_85 = {{-8L,0x285B5F73L}};
                l_87 = (safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((((safe_mod_func_uint16_t_u_u((((!(l_78 || 1L)) , &g_3) == (void*)0), (safe_unary_minus_func_uint64_t_u(((*l_81)++))))) , ((l_86 &= (g_3 , ((((l_85 , &g_3) != (void*)0) && l_85.f0.f1) != g_82))) >= 0x9BD8L)) == g_3) >= 0xAB81L), g_3)), 4)), 0xE89BE308L)), l_85.f0.f1));
                if (p_54)
                    continue;
                for (l_87 = 18; (l_87 == (-20)); l_87 = safe_sub_func_int32_t_s_s(l_87, 9))
                { 
                    return p_54;
                }
                return p_54;
            }
            for (g_82 = 0; (g_82 <= 5); g_82 += 1)
            { 
                int i, j;
                return l_90[g_82][g_82];
            }
        }
        if ((((0x49E8EE08L | (((safe_rshift_func_uint16_t_u_u((((0xE68AC39FBD058558LL | ((((*l_96) = &g_3) != &g_3) , (((safe_add_func_uint32_t_u_u(((g_3 <= (safe_rshift_func_uint8_t_u_u((l_86 = (safe_add_func_int16_t_s_s(((**l_96) , ((*l_105) &= (~(&l_87 == &l_87)))), p_54))), 5))) < l_108), p_54)) | g_3) <= p_54))) <= 18446744073709551611UL) & l_90[1][3]), 6)) >= g_3) | 0xB57B06E2L)) > g_3) , g_106))
        { 
            int8_t l_116 = 0x5CL;
            int32_t l_120 = (-1L);
            int16_t *l_185[4] = {&g_106,&g_106,&g_106,&g_106};
            uint32_t l_198[1][6][7] = {{{0UL,3UL,0UL,0UL,3UL,0UL,0UL},{3UL,3UL,0x79336F86L,3UL,3UL,0x79336F86L,3UL},{3UL,0UL,0UL,3UL,0UL,0UL,3UL},{0UL,3UL,0UL,0UL,3UL,0UL,0UL},{3UL,3UL,0x79336F86L,3UL,3UL,0x79336F86L,3UL},{3UL,0UL,0UL,3UL,0UL,0UL,3UL}}};
            int16_t l_221[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            union U1 l_226 = {{0xFA74B5D4L,0L}};
            uint32_t *l_227 = &g_118;
            int i, j, k;
            for (l_108 = (-2); (l_108 == 23); l_108++)
            { 
                int32_t *l_119 = (void*)0;
                int32_t *l_121 = &l_64;
                int32_t *l_122 = (void*)0;
                int32_t *l_124 = &l_86;
                int32_t l_125[1];
                int64_t *l_133 = &g_134[1][1];
                int64_t *l_135 = (void*)0;
                int64_t *l_136 = &g_137;
                int64_t *l_138 = &g_139;
                uint32_t *l_140 = &g_118;
                int16_t *l_150 = &g_106;
                int i;
                for (i = 0; i < 1; i++)
                    l_125[i] = 0x597B072CL;
                g_118 = (safe_rshift_func_uint16_t_u_u(((((g_3 != (safe_lshift_func_int16_t_s_u(p_54, 1))) , ((l_115[2][3] |= 0xD9L) || ((((g_3 | l_116) , l_117) , l_58) != 0xFAD406D4L))) < p_54) , 0x3A63L), p_54));
                --g_126;
                (*l_96) = &l_125[0];
                if (((((((((((p_54 | ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((((*l_133) = g_106) | ((*l_138) = ((*l_136) = p_54))), (((--(*l_140)) < ((0x63695F895E34458FLL > ((g_145 , ((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_54, g_145.f0)), 0x40L)) > g_145.f1)) <= p_54)) , p_54)) < p_54))), p_54)) ^ g_126)) <= l_120) , 0UL) , 0x24ABL) < 65534UL) | 0x36F93E04930E3A44LL) , &g_106) != l_150) , p_54) >= g_123))
                { 
                    int16_t l_160 = 2L;
                    int32_t l_161 = (-1L);
                    const uint8_t **l_170 = &g_168;
                    int8_t *l_174[2][2][1] = {{{&l_116},{&l_78}},{{&l_116},{&l_78}}};
                    int i, j, k;
                    (*l_124) = g_134[1][1];
                    (*l_97) |= (((((((g_118 |= 0xFFA34A9EL) || 1UL) , ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((0x44L && ((*l_124) &= (safe_mul_func_uint8_t_u_u(l_90[6][3], (((((+g_123) , (-1L)) | (safe_mod_func_uint16_t_u_u(g_145.f1, p_54))) <= g_126) && p_54))))), l_160)), 0xF1L)) < p_54)) == p_54) >= l_161) , l_162) == (void*)0);
                    (**l_96) = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((((*l_170) = g_168) == (void*)0) > ((((void*)0 == l_171) < g_118) != (g_175[3][2] = (((*l_163) &= 0xF57036DBL) & (safe_mul_func_int16_t_s_s((0x0720L || p_54), l_160)))))), g_137)), 0));
                    --g_176;
                }
                else
                { 
                    return (*g_168);
                }
            }
            for (g_82 = 0; (g_82 <= 2); g_82 += 1)
            { 
                int16_t **l_180 = (void*)0;
                int16_t ***l_179 = &l_180;
                int32_t *l_186 = &l_64;
                int32_t *l_187 = &l_120;
                int32_t *l_188 = &l_64;
                int32_t *l_189 = &l_87;
                int32_t *l_190 = &l_64;
                int32_t *l_191 = &l_64;
                int32_t *l_193 = &l_192;
                int32_t *l_194 = &l_64;
                int32_t *l_195 = (void*)0;
                int32_t *l_196 = &l_87;
                int32_t *l_197[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_201 = 1L;
                uint16_t *l_216 = &g_126;
                int i;
                (*l_179) = &l_105;
            }
        }
        else
        { 
            int64_t *l_238 = &g_139;
            const int32_t l_239 = 0xC09CC95DL;
            int64_t *l_240 = &g_241;
            int64_t l_259 = 0x6A7B672675DE231ELL;
            int32_t l_299[6][2] = {{0x4315BE17L,0L},{0x4315BE17L,0L},{0x4315BE17L,0L},{0x4315BE17L,0L},{0x4315BE17L,0L},{0x4315BE17L,0L}};
            struct S0 l_308 = {-1L,4L};
            union U1 *l_321 = &l_117;
            int32_t *l_380 = &l_87;
            int32_t *l_381 = (void*)0;
            int32_t *l_382 = &l_299[0][1];
            int32_t *l_383 = (void*)0;
            int32_t *l_384 = (void*)0;
            int32_t *l_385 = &l_192;
            int32_t *l_386 = &l_87;
            int32_t *l_387[5] = {&g_284,&g_284,&g_284,&g_284,&g_284};
            int i, j;
            if ((g_137 >= (safe_add_func_int64_t_s_s(l_231[2], ((**l_162) == ((safe_rshift_func_int16_t_s_u(((((*l_240) = (safe_mod_func_uint8_t_u_u((0x53018A909A0BA19ALL != ((*l_238) = ((*l_171) ^= (safe_mul_func_int16_t_s_s(p_54, ((1L ^ 0x01L) & g_145.f0)))))), l_239))) ^ 0L) > (*g_168)), 6)) != 0x4E79L))))))
            { 
                int32_t l_242 = 0x1DB9036FL;
                int32_t l_289 = 0x007F3C8AL;
                if ((((void*)0 != &l_97) >= (l_242 , l_239)))
                { 
                    return p_54;
                }
                else
                { 
                    int8_t *l_253[7] = {(void*)0,(void*)0,&l_78,(void*)0,(void*)0,&l_78,(void*)0};
                    uint64_t *l_254 = &l_231[2];
                    int32_t l_255 = 4L;
                    int i;
                    l_259 = (g_3 >= (((p_54 || (safe_mul_func_int16_t_s_s(((**l_162) , (((safe_mod_func_int8_t_s_s(((((g_256 = ((((((0xE8L == ((safe_mod_func_int16_t_s_s(((((*l_254) = (((((*l_163) ^ g_175[3][2]) == ((((((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((l_253[3] != (void*)0), 1L)) & (*g_168)), 0xCCL)) | g_118) <= g_169) | p_54) == 18446744073709551606UL) == l_239)) || g_134[1][1]) > p_54)) , &g_82) != (void*)0), l_255)) || g_145.f1)) >= (**l_162)) <= g_3) < p_54) , 247UL) , (void*)0)) != &l_163) && g_137) | p_54), (*g_168))) <= 0xF17199E99429188FLL) & l_255)), p_54))) >= g_258) == g_3));
                }
                for (g_139 = 25; (g_139 == (-7)); g_139 = safe_sub_func_int16_t_s_s(g_139, 2))
                { 
                    (*l_162) = (*l_162);
                }
                if (((safe_add_func_uint16_t_u_u(65532UL, (safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0UL, (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((*l_105) = 0xEF5FL) | ((safe_mul_func_int8_t_s_s((p_54 | (safe_sub_func_int8_t_s_s(((((p_54 < ((((safe_mod_func_uint32_t_u_u((((0xCCFE4F01166651E2LL ^ l_278) | 0x28AA00DFFD0FE097LL) , (*l_163)), g_82)) < g_241) != g_126) && l_242)) != p_54) , p_54) == (-10L)), l_259))), 1UL)) , p_54)), 255UL)) <= p_54), 15)))), 0x43DFL)))) < (**l_162)))
                { 
                    return (*g_168);
                }
                else
                { 
                    int32_t *l_279 = &l_64;
                    int32_t *l_280 = &l_192;
                    int32_t *l_281 = &l_86;
                    int32_t *l_282 = &g_123;
                    int32_t *l_283[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_283[i] = &l_87;
                    g_286++;
                    l_290[0][2][0]++;
                }
                for (g_126 = 0; (g_126 <= 5); g_126 += 1)
                { 
                    int32_t *l_293 = &l_64;
                    int32_t *l_294 = (void*)0;
                    int32_t *l_295 = (void*)0;
                    int32_t l_296 = 0xA609B5DDL;
                    int32_t *l_297 = &l_87;
                    int32_t *l_298[4];
                    uint16_t *l_319 = &g_320[0];
                    uint16_t *l_341 = &g_342;
                    struct S0 **l_344[7][5][3] = {{{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0},{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0},{(void*)0,&l_343,&l_343}},{{&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0},{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0}},{{&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343},{(void*)0,&l_343,&l_343},{&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343}},{{&l_343,&l_343,(void*)0},{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0},{(void*)0,&l_343,&l_343},{&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0},{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0},{&l_343,&l_343,&l_343}},{{&l_343,&l_343,&l_343},{(void*)0,&l_343,&l_343},{&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0}},{{&l_343,&l_343,&l_343},{&l_343,&l_343,(void*)0},{(void*)0,&l_343,&l_343},{&l_343,&l_343,&l_343},{&l_343,&l_343,&l_343}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_298[i] = &l_242;
                    ++g_303;
                    g_284 = ((((((((*l_163) |= ((*l_297) = (safe_div_func_uint8_t_u_u((g_176 &= (l_308 , (safe_mul_func_int8_t_s_s(p_54, ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((*l_319) = (safe_lshift_func_uint16_t_u_s(g_126, (((((&l_296 == &l_239) || p_54) | (7L | p_54)) , 0xDF2345B2L) != g_285)))), p_54)) != g_285), 9)), g_134[1][0])) > l_242))))), l_299[0][1])))) || 0x91C9AC6BL) && p_54) || 255UL) == 0xD3E3130C64E29DA9LL) & p_54) != p_54);
                    g_322 = l_321;
                    g_300 = ((safe_add_func_uint8_t_u_u(253UL, (((!((void*)0 != g_327)) , ((safe_rshift_func_int8_t_s_u(((g_320[0] < ((*l_341) = ((safe_mul_func_int8_t_s_s(0x2FL, (safe_rshift_func_int8_t_s_s((~(safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((void*)0 != l_340), g_286)), (*g_257)))), 6)))) && l_289))) != (*l_297)), (*l_97))) < (-9L))) ^ p_54))) < 0xECL);
                    g_345 = l_343;
                }
                for (l_192 = 0; (l_192 < (-11)); l_192 = safe_sub_func_uint64_t_u_u(l_192, 6))
                { 
                    struct S0 **l_348 = (void*)0;
                    (*l_163) &= ((void*)0 != l_348);
                    if ((*g_257))
                        break;
                }
            }
            else
            { 
                int32_t *l_351[1][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int64_t l_352[5][1] = {{0xFC0D30A4E550D270LL},{0xCE27E5E9984260BFLL},{0xFC0D30A4E550D270LL},{0xCE27E5E9984260BFLL},{0xFC0D30A4E550D270LL}};
                int32_t l_353[6][7] = {{(-5L),(-5L),0xA52E5F91L,0x0525E157L,0x5111280EL,0xFF649526L,(-7L)},{0x0525E157L,(-5L),0xDC91545BL,0xFF649526L,0xFF649526L,0xDC91545BL,(-5L)},{0xDC91545BL,1L,(-5L),0x2699EA8DL,0x5111280EL,8L,0x0525E157L},{0xDC91545BL,(-7L),0x1EDED3D2L,(-5L),0x1EDED3D2L,(-7L),0xDC91545BL},{0x0525E157L,8L,0x5111280EL,0x2699EA8DL,(-5L),1L,0xDC91545BL},{(-5L),0xDC91545BL,0xFF649526L,0xFF649526L,0xDC91545BL,(-5L),0x0525E157L}};
                int64_t **l_363 = &l_362;
                int i, j, k;
                for (g_241 = 0; (g_241 > 19); g_241 = safe_add_func_uint32_t_u_u(g_241, 7))
                { 
                    (*g_256) = l_351[0][0][2];
                    if (p_54)
                        continue;
                }
                ++l_357;
                for (l_357 = 0; (l_357 <= 4); l_357 += 1)
                { 
                    int32_t *l_361[6][1][7] = {{{&l_64,&l_64,&l_64,&l_64,&l_64,&l_64,&l_64}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_64,&l_64,&l_64,&l_64,&l_64,&l_64,&l_64}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}},{{&l_64,&l_64,&l_64,&l_64,&l_64,&l_64,&l_64}},{{&l_192,&l_192,&l_192,&l_192,&l_192,&l_192,&l_192}}};
                    int i, j, k;
                    (**l_162) |= l_231[l_357];
                    l_361[2][0][0] = (g_360 = ((*l_96) = &g_123));
                }
                (**l_162) = ((((((*l_363) = l_362) != (void*)0) || ((g_303 = (safe_mod_func_uint16_t_u_u(p_54, 0x61FFL))) == g_301)) >= (safe_rshift_func_uint16_t_u_u((p_54 == (safe_mod_func_uint32_t_u_u(((g_320[0] >= g_169) != p_54), 2L))), p_54))) | 4294967295UL);
            }
            (**l_162) = ((*g_360) = (~(safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(g_241, (safe_add_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((((*l_105) |= p_54) != 65535UL), g_323.f0.f0)) , ((p_54 , (l_308 , 65535UL)) < g_379)) ^ p_54), (*g_168))))) > 4294967295UL), p_54))));
            (**l_162) = p_54;
            (*g_360) = (*l_97);
            ++g_390;
        }
    }
    else
    { 
        int16_t l_423 = 0x8748L;
        int32_t *l_488 = &l_388;
        struct S0 *l_541 = &l_228;
        int32_t *l_546[7] = {&l_388,&l_388,&l_388,&l_388,&l_388,&l_388,&l_388};
        const int32_t *l_553 = (void*)0;
        int64_t l_575 = 0xF6C65BC99672B6EELL;
        uint32_t l_576 = 0xBF8DA135L;
        int i;
        for (g_284 = 0; (g_284 == 20); g_284 = safe_add_func_uint8_t_u_u(g_284, 3))
        { 
            int16_t *l_406[4][2] = {{&g_106,&g_106},{&g_106,&g_106},{&g_106,&g_106},{&g_106,&g_106}};
            int32_t l_413[6][7][3] = {{{0x98E76D83L,0xC0247A35L,0L},{0x80B881E3L,0x80B881E3L,0xF17AE8C2L},{0L,0xB363DE1AL,0x98E76D83L},{(-1L),0x90226CD2L,0xBF9C05F7L},{0xDDF09781L,0x98E76D83L,(-6L)},{0L,(-1L),0xBF9C05F7L},{0xC0247A35L,0x17FE3D77L,0x98E76D83L}},{{(-8L),8L,0xF17AE8C2L},{0xD96208DFL,0xEEB050B7L,0L},{0xBF9C05F7L,0L,0x90226CD2L},{0xBF9C05F7L,(-8L),(-8L)},{0xD96208DFL,(-6L),0x0537382CL},{(-8L),0L,0x584C7EC1L},{0xC0247A35L,0L,0x068BC98FL}},{{0L,0x0537382CL,0xC0247A35L},{0xDDF09781L,0L,0xA984F8ADL},{(-1L),0L,0L},{0L,(-6L),0L},{0x80B881E3L,(-8L),6L},{0x98E76D83L,0L,6L},{0L,0xEEB050B7L,0L}},{{0xB376C7A0L,8L,0L},{0x236270ADL,0x17FE3D77L,0xA984F8ADL},{0xF17AE8C2L,(-1L),0xC0247A35L},{1L,0x98E76D83L,0x068BC98FL},{0xF17AE8C2L,0x90226CD2L,0x584C7EC1L},{0x236270ADL,0xB363DE1AL,0x0537382CL},{0xB376C7A0L,0x80B881E3L,(-8L)}},{{0L,0xC0247A35L,0x90226CD2L},{0x98E76D83L,0xC0247A35L,0L},{0x80B881E3L,0x80B881E3L,0xF17AE8C2L},{0L,0xB363DE1AL,0x98E76D83L},{(-1L),0x90226CD2L,0xBF9C05F7L},{0xDDF09781L,0x98E76D83L,(-6L)},{0L,(-1L),0xBF9C05F7L}},{{0xC0247A35L,0x17FE3D77L,0x98E76D83L},{(-8L),8L,0xF17AE8C2L},{0xD96208DFL,0xEEB050B7L,0L},{0xBF9C05F7L,0L,0x90226CD2L},{0xBF9C05F7L,(-8L),(-8L)},{0xD96208DFL,(-6L),0x0537382CL},{(-8L),0L,0x584C7EC1L}}};
            int32_t l_416 = 1L;
            int32_t *l_465[6][4];
            uint16_t l_484 = 65528UL;
            uint32_t l_544 = 18446744073709551615UL;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                    l_465[i][j] = &g_175[1][1];
            }
            for (g_176 = 0; (g_176 != 6); g_176 = safe_add_func_int64_t_s_s(g_176, 6))
            { 
                uint64_t *l_433 = &g_286;
                uint64_t **l_432 = &l_433;
                int32_t l_434 = 0x1BD32AECL;
                struct S0 *l_436 = &l_228;
            }
        }
lbl_585:
        for (g_285 = 0; (g_285 < (-20)); --g_285)
        { 
            int64_t l_556 = (-1L);
            for (l_228.f1 = (-29); (l_228.f1 <= (-1)); l_228.f1 = safe_add_func_int64_t_s_s(l_228.f1, 5))
            { 
                uint32_t l_565 = 18446744073709551614UL;
                for (g_139 = 0; (g_139 < (-11)); g_139 = safe_sub_func_int16_t_s_s(g_139, 2))
                { 
                    return (*g_168);
                }
                l_553 = (*g_256);
                for (g_137 = 5; (g_137 >= 14); ++g_137)
                { 
                    if (l_556)
                        break;
                    g_284 = ((*g_360) = (((safe_add_func_uint64_t_u_u(((void*)0 == l_559), (safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u((!g_303))), l_556)))) ^ (65526UL || 1L)) , ((**l_162) = l_556)));
                    l_565++;
                    (**l_162) = p_54;
                }
                if (p_54)
                    break;
            }
            (**l_162) &= 4L;
            if ((**g_256))
                break;
        }
        l_576++;
        for (g_379 = 0; (g_379 <= 4); g_379 += 1)
        { 
            uint16_t *l_583 = &g_342;
            int16_t l_584[6][3][5] = {{{0xD768L,0xC478L,0L,0L,0xC478L},{0x1CA0L,(-1L),0x3A59L,(-1L),0x1CA0L},{0xC478L,0L,0L,0xC478L,0xD768L}},{{0x4797L,(-1L),0x4797L,1L,0x4797L},{0xC478L,0xC478L,0L,0L,0xD768L},{0x1CA0L,1L,0x3A59L,1L,0x1CA0L}},{{0xD768L,0L,0L,0xC478L,0xC478L},{0x4797L,1L,0x4797L,(-1L),0x4797L},{0xD768L,0xC478L,0L,0L,0xC478L}},{{0x1CA0L,(-1L),0x3A59L,(-1L),0x1CA0L},{0xC478L,0L,0L,0xC478L,0xD768L},{0x4797L,(-1L),0x4797L,1L,0x4797L}},{{0xC478L,0xC478L,0L,0L,0xD768L},{0x1CA0L,1L,0x3A59L,1L,0x1CA0L},{0xD768L,0L,0L,0xC478L,0xC478L}},{{0x4797L,1L,0x4797L,(-1L),0x4797L},{0xD768L,0xC478L,0L,0L,0xC478L},{0x1CA0L,(-1L),0x3A59L,(-1L),0x1CA0L}}};
            int i, j, k;
            g_564[0][0][5] &= ((*l_163) &= (safe_div_func_int16_t_s_s((l_231[g_379] & ((((safe_mul_func_int16_t_s_s((((*l_340) = p_54) , ((((*l_583) = (((*g_360) && p_54) > 0xF938L)) == (((((void*)0 == &l_568) ^ (-1L)) && 0x7CCBL) == p_54)) >= p_54)), (*l_488))) , l_584[3][1][0]) , g_300) >= g_145.f0)), 1UL)));
        }
        if (g_126)
            goto lbl_585;
    }
    return p_54;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_134[i][j], "g_134[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_175[i][j], "g_175[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_320[i], "g_320[i]", print_hash_value);

    }
    transparent_crc(g_323.f0.f0, "g_323.f0.f0", print_hash_value);
    transparent_crc(g_323.f0.f1, "g_323.f0.f1", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_438.f0, "g_438.f0", print_hash_value);
    transparent_crc(g_438.f1, "g_438.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_564[i][j][k], "g_564[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_628[i][j][k], "g_628[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_850.f0, "g_850.f0", print_hash_value);
    transparent_crc(g_850.f1, "g_850.f1", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1024[i].f0, "g_1024[i].f0", print_hash_value);
        transparent_crc(g_1024[i].f1, "g_1024[i].f1", print_hash_value);

    }
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1107, "g_1107", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1175[i][j], "g_1175[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1234[i][j][k].f0.f0, "g_1234[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_1234[i][j][k].f0.f1, "g_1234[i][j][k].f0.f1", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1316[i], "g_1316[i]", print_hash_value);

    }
    transparent_crc(g_1331, "g_1331", print_hash_value);
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1376, "g_1376", print_hash_value);
    transparent_crc(g_1443, "g_1443", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1658[i], "g_1658[i]", print_hash_value);

    }
    transparent_crc(g_1942, "g_1942", print_hash_value);
    transparent_crc(g_2025, "g_2025", print_hash_value);
    transparent_crc(g_2133, "g_2133", print_hash_value);
    transparent_crc(g_2143, "g_2143", print_hash_value);
    transparent_crc(g_2511.f0.f0, "g_2511.f0.f0", print_hash_value);
    transparent_crc(g_2511.f0.f1, "g_2511.f0.f1", print_hash_value);
    transparent_crc(g_2752, "g_2752", print_hash_value);
    transparent_crc(g_2778, "g_2778", print_hash_value);
    transparent_crc(g_2797, "g_2797", print_hash_value);
    transparent_crc(g_2845, "g_2845", print_hash_value);
    transparent_crc(g_2847, "g_2847", print_hash_value);
    transparent_crc(g_2932, "g_2932", print_hash_value);
    transparent_crc(g_3205, "g_3205", print_hash_value);
    transparent_crc(g_3269, "g_3269", print_hash_value);
    transparent_crc(g_3530, "g_3530", print_hash_value);
    transparent_crc(g_3556, "g_3556", print_hash_value);
    transparent_crc(g_3623, "g_3623", print_hash_value);
    transparent_crc(g_3638, "g_3638", print_hash_value);
    transparent_crc(g_3848.f0, "g_3848.f0", print_hash_value);
    transparent_crc(g_3848.f1, "g_3848.f1", print_hash_value);
    transparent_crc(g_3913, "g_3913", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3918[i], "g_3918[i]", print_hash_value);

    }
    transparent_crc(g_3921, "g_3921", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
