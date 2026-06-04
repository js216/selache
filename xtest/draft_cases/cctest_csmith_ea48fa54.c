// SPDX-License-Identifier: MIT
// cctest_csmith_ea48fa54.c --- cctest case csmith_ea48fa54 (csmith seed 3930651220)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4ed457dd */
/* @exp_ticks 0x710 */

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

// Options:   -s 3930651220 -o /home/agent1/fast_data/tmp/csmith_gen_doqy9q2_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   uint64_t  f1;
   const uint16_t  f2;
   int16_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
};


static int32_t g_2[5] = {1L,1L,1L,1L,1L};
static uint32_t g_21 = 1UL;
static uint8_t g_41 = 0x7DL;
static int32_t g_54 = 0xB4B1C2FBL;
static int64_t g_85 = 0L;
static int32_t g_106 = 0L;
static int64_t g_107 = (-1L);
static int32_t g_163[2][4][3] = {{{(-1L),0xB55DA1D3L,0L},{0x459F139CL,1L,0x459F139CL},{9L,(-1L),0L},{0L,0L,0L}},{{0x02E5D801L,(-1L),(-1L)},{0L,1L,5L},{0x02E5D801L,0xB55DA1D3L,0x02E5D801L},{0L,0L,5L}}};
static union U1 g_165 = {18446744073709551615UL};
static int16_t g_256 = (-4L);
static uint16_t g_257[2] = {1UL,1UL};
static uint32_t g_272 = 1UL;
static int64_t g_278 = 0xEC4C8C8FA0C0818CLL;
static int64_t g_279 = (-10L);
static uint32_t g_345 = 6UL;
static uint32_t g_347 = 0UL;
static uint8_t g_388 = 9UL;
static int32_t g_424 = (-10L);
static uint64_t g_426 = 0xC61DE7B98AA17036LL;
static struct S0 g_457 = {0xDDL,8UL,0xA831L,0x9E5FL,0x33B10EE1L};
static uint32_t g_460 = 4294967295UL;



static int8_t  func_1(void);
static int16_t  func_8(uint32_t  p_9);
static uint16_t  func_13(uint64_t  p_14, int32_t  p_15, uint32_t  p_16, uint16_t  p_17);
static uint16_t  func_29(int32_t  p_30, int32_t  p_31, int64_t  p_32, uint32_t  p_33);




static int8_t  func_1(void)
{ 
    uint64_t l_7[1];
    int32_t l_421 = 4L;
    int32_t l_422 = (-4L);
    int32_t l_423[4] = {0L,0L,0L,0L};
    int16_t l_449[3][2][1] = {{{(-1L)},{(-10L)}},{{(-1L)},{(-10L)}},{{(-1L)},{(-10L)}}};
    struct S0 l_471[4] = {{1UL,0xFC4F5A4C17077844LL,1UL,0x4D54L,18446744073709551612UL},{1UL,0xFC4F5A4C17077844LL,1UL,0x4D54L,18446744073709551612UL},{1UL,0xFC4F5A4C17077844LL,1UL,0x4D54L,18446744073709551612UL},{1UL,0xFC4F5A4C17077844LL,1UL,0x4D54L,18446744073709551612UL}};
    uint32_t l_474 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_7[i] = 0xBF2121F90EF307D7LL;
    for (g_2[1] = 18; (g_2[1] == 13); --g_2[1])
    { 
        int32_t l_418 = 0x76735B96L;
        union U1 l_440 = {6UL};
        int32_t l_441 = 0L;
        union U1 l_446 = {0xD1A025D2L};
        if ((safe_rshift_func_int8_t_s_s(((l_7[0] = 1UL) || func_8(g_2[1])), (l_418 = (safe_div_func_int32_t_s_s((-7L), 0x048BA431L))))))
        { 
            const int32_t l_433 = (-1L);
            for (g_107 = (-11); (g_107 < 6); g_107++)
            { 
                int8_t l_425 = 0x2EL;
                ++g_426;
            }
            for (g_256 = (-5); (g_256 > 27); g_256 = safe_add_func_int64_t_s_s(g_256, 4))
            { 
                uint32_t l_442 = 0x2EE368F0L;
                int32_t l_443 = 0xF358D3A4L;
                l_443 &= (l_421 &= ((safe_add_func_int64_t_s_s((-4L), l_433)) && ((((l_442 ^= (safe_div_func_int64_t_s_s((l_441 = (safe_mul_func_int8_t_s_s(g_388, ((safe_div_func_int64_t_s_s((((l_440 , l_440.f0) ^ l_418) & g_41), (-7L))) ^ g_388)))), l_7[0]))) >= g_256) & 0xD7L) , 0xC9L)));
                l_449[1][0][0] = (safe_sub_func_int16_t_s_s((l_446 , g_272), (((l_433 & ((safe_add_func_int32_t_s_s(((g_278 > l_433) <= l_443), g_257[1])) , l_440.f0)) != l_443) > g_388)));
            }
            g_54 = ((+(safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(6L, 10)), (g_256 = (safe_mod_func_uint64_t_u_u(((g_457 , ((g_460 = (++g_257[0])) | (((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((l_7[0] , l_433), g_278)), (-1L))) == 0x6B134243L) != l_440.f0))) | g_278), 6L)))))) | g_41);
        }
        else
        { 
            uint32_t l_469 = 4UL;
            int32_t l_470 = 0xC17667CBL;
            l_470 = (safe_sub_func_int32_t_s_s(7L, (safe_div_func_uint16_t_u_u(l_469, 0x9DECL))));
        }
        g_106 = (g_54 ^= l_7[0]);
        g_54 ^= ((l_471[3] , l_423[1]) || ((g_457.f3 > (safe_lshift_func_uint16_t_u_u((((g_21 == 4294967290UL) ^ g_457.f2) != g_85), g_2[1]))) | l_441));
    }
    --l_474;
    for (g_272 = 0; (g_272 >= 20); g_272 = safe_add_func_uint64_t_u_u(g_272, 1))
    { 
        int32_t l_481 = 0x3E1E1306L;
        int32_t l_482 = 0xEFB1E424L;
        int32_t l_483 = 0L;
        int32_t l_484[4];
        int64_t l_485[5] = {0L,0L,0L,0L,0L};
        uint64_t l_486 = 0UL;
        int i;
        for (i = 0; i < 4; i++)
            l_484[i] = 0x0FAA6907L;
        for (g_21 = (-5); (g_21 > 4); g_21 = safe_add_func_uint64_t_u_u(g_21, 1))
        { 
            return g_457.f4;
        }
        ++l_486;
        for (g_426 = 0; (g_426 <= 3); g_426 += 1)
        { 
            int i;
            g_2[1] = ((l_484[g_426] | ((safe_unary_minus_func_int16_t_s(l_7[0])) & (g_106 != ((0x6CFFL && l_484[g_426]) | l_484[0])))) < 18446744073709551614UL);
            return g_457.f0;
        }
    }
    return l_423[3];
}



static int16_t  func_8(uint32_t  p_9)
{ 
    uint8_t l_10[1];
    int32_t l_18 = (-1L);
    int32_t l_19 = 0x8108531DL;
    int32_t l_20 = 0x9598AAF0L;
    uint32_t l_26[1];
    const uint16_t l_387[1] = {0xBC72L};
    int i;
    for (i = 0; i < 1; i++)
        l_10[i] = 0xB6L;
    for (i = 0; i < 1; i++)
        l_26[i] = 18446744073709551610UL;
lbl_415:
    if (((l_10[0]++) == func_13((++g_21), (((safe_sub_func_int64_t_s_s(l_26[0], ((safe_add_func_uint64_t_u_u(((l_18 = p_9) && (func_29(g_2[1], l_26[0], l_20, p_9) || l_20)), p_9)) || 0L))) == g_2[1]) , 0xDF8105A1L), g_2[0], l_26[0])))
    { 
        struct S0 l_324 = {0UL,7UL,6UL,0x5579L,8UL};
        int32_t l_327 = 0L;
        int32_t l_328 = 0x2224D514L;
        int32_t l_329 = 0xB54FB1B3L;
        l_329 = (l_324 , (1L & ((safe_lshift_func_int8_t_s_u((((((l_328 = (l_327 = (-1L))) <= p_9) > l_18) | 1L) , 0xABL), g_279)) == 0L)));
    }
    else
    { 
        int16_t l_344 = 0x3D86L;
        uint32_t l_346[5][4][1] = {{{1UL},{0xF58F806DL},{3UL},{0UL}},{{0xDF00F45FL},{0UL},{3UL},{0xF58F806DL}},{{1UL},{8UL},{1UL},{0xF58F806DL}},{{3UL},{0UL},{0xDF00F45FL},{0UL}},{{3UL},{0xF58F806DL},{1UL},{8UL}}};
        int32_t l_358[3];
        uint16_t l_374 = 0x131EL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_358[i] = 6L;
lbl_406:
        if (((((l_18 = p_9) < (safe_div_func_int16_t_s_s((((l_20 = (safe_sub_func_int16_t_s_s(((((((safe_mod_func_int64_t_s_s(((l_19 ^= (((safe_sub_func_uint64_t_u_u(0x23D4C4BB440DB710LL, (((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((l_344 <= 1UL), 5L)) & g_257[1]), l_20)), 4)) >= 2UL) <= 0UL))) , 0x0511937CL) | g_85)) , 0x5C67197F0C942405LL), 0xB88C50BE3B6334DFLL)) <= g_345) | 0x952FBA135BB748ACLL) , l_26[0]) > 0L) ^ p_9), g_272))) > 6L) || 0x5BL), l_346[2][1][0]))) || 18446744073709551609UL) ^ g_163[1][3][0]))
        { 
            uint16_t l_357 = 1UL;
            if (l_346[1][1][0])
            { 
                return g_347;
            }
            else
            { 
                uint16_t l_348 = 0x1A83L;
                int32_t l_356 = 1L;
                int32_t l_359 = (-1L);
                l_358[1] = ((((l_348 = 0x17L) != (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((~g_163[0][1][2]), (safe_div_func_int32_t_s_s(1L, ((l_357 |= ((((g_41 |= 0x0CL) , l_356) , p_9) ^ p_9)) , 4294967295UL))))), 3))) , p_9) ^ 18446744073709551610UL);
                l_359 = (l_356 = 1L);
                return g_41;
            }
        }
        else
        { 
            for (g_347 = 0; (g_347 <= 35); ++g_347)
            { 
                int16_t l_366 = 1L;
                int32_t l_369[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_369[i] = 0x7DEBA7D9L;
                l_369[3] = (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((g_2[3] & g_345) == l_366), 3)), ((safe_rshift_func_uint16_t_u_s(l_26[0], l_346[2][1][0])) ^ p_9))) == (-9L)) || (-1L));
            }
            if (g_21)
                goto lbl_415;
        }
        if ((((safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((l_374 = p_9) == ((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((-5L) > 0L) <= p_9), 2)), g_257[1])), 0)), l_346[2][1][0])), l_10[0])), 0x8533CA28L)) && g_21)), g_107)) == g_106), 0x1B588C21DECECB74LL)) != 1L) && l_387[0]))
        { 
            uint32_t l_403[5] = {0xD40C0448L,0xD40C0448L,0xD40C0448L,0xD40C0448L,0xD40C0448L};
            int i;
            g_54 = 1L;
            l_358[2] = (((g_388--) | (0x365AD23FL || (safe_mod_func_uint16_t_u_u((l_18 = ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s(p_9, (safe_sub_func_uint16_t_u_u(0xF30DL, ((safe_mul_func_uint16_t_u_u(l_10[0], 0L)) > 0UL))))) >= l_20) != g_85), 13)), 4294967294UL)) != l_403[0])), 0x27DBL)))) , p_9);
        }
        else
        { 
            uint16_t l_410 = 65533UL;
            int32_t l_414 = 1L;
            for (p_9 = (-20); (p_9 == 27); p_9++)
            { 
                if (g_347)
                    goto lbl_406;
                l_20 |= (+(safe_lshift_func_int8_t_s_u(l_410, ((safe_unary_minus_func_uint64_t_u((l_414 = (safe_sub_func_uint8_t_u_u(0x29L, (0xAF75AB8D4A8BD848LL >= 0x556329EA367607D2LL)))))) > 7UL))));
                if (l_374)
                    continue;
            }
        }
    }
    l_18 &= l_10[0];
    return g_279;
}



static uint16_t  func_13(uint64_t  p_14, int32_t  p_15, uint32_t  p_16, uint16_t  p_17)
{ 
    int64_t l_132[4];
    int32_t l_160 = 0x05F7132EL;
    union U1 l_164 = {18446744073709551615UL};
    int8_t l_183[1][5][2];
    int32_t l_184 = (-1L);
    struct S0 l_207 = {255UL,0UL,0xC976L,1L,18446744073709551611UL};
    int32_t l_208[1];
    int32_t l_209 = 0x88FD3826L;
    uint8_t l_210[4][3][1] = {{{1UL},{0x58L},{255UL}},{{0x58L},{1UL},{0xBDL}},{{1UL},{0x58L},{255UL}},{{0x58L},{1UL},{0xBDL}}};
    union U1 l_251 = {0x22433CC3L};
    int16_t l_284 = (-4L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_132[i] = 0xB2332F7F6FD02479LL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_183[i][j][k] = 2L;
        }
    }
    for (i = 0; i < 1; i++)
        l_208[i] = 0x04C19E56L;
    for (p_14 = 1; (p_14 > 13); p_14 = safe_add_func_uint16_t_u_u(p_14, 1))
    { 
        uint32_t l_133 = 5UL;
        int32_t l_150 = 0x5C6BA716L;
        union U1 l_168[5][5] = {{{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL}},{{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL},{18446744073709551606UL}}};
        int i, j;
        for (g_85 = 0; (g_85 <= 3); g_85 += 1)
        { 
            --l_133;
            return g_2[1];
        }
        p_15 = ((safe_mul_func_uint16_t_u_u(l_132[0], (0xCE29F52EL >= (safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_41, 9)), (safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((l_150 = (safe_div_func_uint32_t_u_u((((0xBF39L != l_133) && g_106) ^ p_14), g_85))) , p_14), l_132[0])) & p_17), l_132[2])))), p_14))))) || 1L);
        for (p_15 = 7; (p_15 < (-16)); --p_15)
        { 
            union U1 l_156 = {0x8D994F87L};
            for (g_85 = 0; (g_85 != 16); ++g_85)
            { 
                uint32_t l_159 = 18446744073709551611UL;
                g_163[1][3][1] = ((((~((l_156 , ((safe_mod_func_int16_t_s_s((l_159 = 0x782EL), (l_160 = g_2[1]))) ^ (safe_lshift_func_int8_t_s_s(0x8FL, g_54)))) || g_107)) || 0xB12407C9L) >= 2L) , p_14);
            }
            g_106 = p_14;
            g_54 = (((g_165 = l_164) , (((l_160 = 255UL) > (0xF6CAL < ((l_168[1][4] , g_2[1]) >= g_163[0][1][1]))) <= g_85)) , g_107);
        }
    }
    if (((safe_lshift_func_uint16_t_u_s((((l_160 <= ((l_184 = ((safe_mod_func_uint8_t_u_u(g_2[0], (safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((l_164.f0 && ((((((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((((((safe_mul_func_int16_t_s_s(((0xF24D48F7L == 0x17CCA844L) ^ 0x6570L), g_107)) || g_165.f0) , l_183[0][2][1]) | p_17) == 0xFFL), p_17)), 0x62L)) , 0x6BL) == p_16) , g_2[0]) <= (-1L)) ^ 4294967292UL)), g_163[1][1][1])), l_164.f0)))) > l_164.f0)) || g_106)) , 0x9337L) && l_183[0][3][0]), l_183[0][0][1])) && 0x2FE2L))
    { 
        p_15 = (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(p_17, (l_160 |= (safe_mul_func_uint8_t_u_u(l_183[0][1][1], 0xFFL))))), g_54));
lbl_239:
        p_15 = (safe_mul_func_int16_t_s_s(0x3024L, (18446744073709551606UL <= ((g_107 = ((safe_sub_func_int8_t_s_s(l_183[0][2][1], (-6L))) ^ 0x3B2C2567L)) != g_21))));
    }
    else
    { 
        p_15 = g_163[1][2][1];
        for (l_160 = 1; (l_160 >= 0); l_160 -= 1)
        { 
            return g_106;
        }
    }
    if (((p_16 = (((safe_mul_func_int16_t_s_s(((p_16 , ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((l_209 &= ((l_160 ^= g_21) == (1UL && (safe_div_func_int32_t_s_s((l_184 |= (safe_sub_func_int64_t_s_s((l_207 , 0x2AFA6F6173B26784LL), g_163[1][3][1]))), l_208[0]))))) , p_16) || p_17), p_14)), l_207.f3)), 0)) == l_210[2][2][0])) || p_17), 0x4D6DL)) & 0L) & 0x32EFL)) && l_207.f3))
    { 
        uint32_t l_225 = 4UL;
        int32_t l_226 = 0xEBC73C5DL;
        int8_t l_244[5][2] = {{0x82L,0xE1L},{0x82L,0xE1L},{0x82L,0xE1L},{0x82L,0xE1L},{0x82L,0xE1L}};
        int32_t l_275 = (-7L);
        uint64_t l_299[1];
        int16_t l_300[1];
        uint64_t l_307 = 18446744073709551610UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_299[i] = 9UL;
        for (i = 0; i < 1; i++)
            l_300[i] = 0x798BL;
        if ((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s(((g_2[1] >= (safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((1UL <= (0UL < (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_107, 5)), g_54)) , p_15) <= p_14))) < l_225), 1)) >= p_14), g_85)), l_225))) , p_15), g_54)), l_208[0])))
        { 
            uint8_t l_227 = 0x4BL;
            ++l_227;
            for (l_207.f0 = (-29); (l_207.f0 >= 50); l_207.f0 = safe_add_func_int32_t_s_s(l_207.f0, 2))
            { 
                p_15 = ((-3L) < (l_226 = ((l_225 ^ p_15) <= (((65529UL <= g_54) && 2UL) ^ g_163[1][3][1]))));
            }
        }
        else
        { 
            uint8_t l_247 = 251UL;
            struct S0 l_250[2][5][1] = {{{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}}},{{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}},{{255UL,18446744073709551611UL,65529UL,0x824FL,2UL}}}};
            int i, j, k;
            if ((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(7L, ((safe_div_func_int32_t_s_s(((0L <= (p_16 && (((g_165.f0 <= p_17) <= (-5L)) ^ 0xE0L))) != 0xBE60L), p_15)) , 0xA0E9L))), p_14)))
            { 
                return p_15;
            }
            else
            { 
                uint8_t l_238[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_238[i] = 0x1EL;
                l_226 = l_238[1];
                if (l_164.f0)
                    goto lbl_239;
                g_54 = (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((p_14 & (p_14 < ((0xF0966B1CL && (p_16 = (((g_21 == 0x2904L) && p_16) > l_244[3][0]))) , 0xB6B91A3FCEC19F97LL))), g_41)) == g_41), 0x31L));
            }
            g_54 &= (((((safe_mul_func_uint8_t_u_u(((l_247 || ((l_164 = g_165) , (safe_lshift_func_uint8_t_u_u(((l_207.f2 < (l_250[0][1][0] , 0x267738E0F7AC18CALL)) != g_2[1]), l_247)))) | p_14), 0xB0L)) && l_207.f2) && p_14) , l_251) , p_17);
        }
        if (((((g_21 ^ (((safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((g_163[0][1][0] || ((l_251 , (--g_257[1])) > (g_256 >= l_184))) & 0xA70736F6L), g_165.f0)), 0UL)) ^ l_209) > p_16)) || 0x6BC98A1C93EE8434LL) , g_106) , 0x41510BD4L))
        { 
            uint16_t l_269 = 0x5ADAL;
            if (p_17)
            { 
                uint64_t l_260 = 18446744073709551615UL;
                l_260 = g_257[1];
            }
            else
            { 
                p_15 = p_14;
                g_54 = (safe_sub_func_uint32_t_u_u(g_256, (safe_mul_func_int16_t_s_s((0x53925E94L < ((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((l_269 & (~(~(g_272 = g_163[1][3][1])))), l_207.f3)), 0L)) ^ g_107)), g_106))));
            }
        }
        else
        { 
            int32_t l_276 = 1L;
            int32_t l_277[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_277[i][j] = 2L;
            }
            for (g_256 = 0; (g_256 != (-7)); --g_256)
            { 
                uint16_t l_280 = 0xB699L;
                l_280++;
            }
            if (g_107)
                goto lbl_283;
lbl_283:
            l_184 &= 0x21FC2793L;
            if (p_15)
            { 
                p_15 = (9UL < (g_41--));
                l_275 = 0x1CF811F1L;
            }
            else
            { 
                p_15 |= (((g_257[1] ^= (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((7L > g_54), (safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((g_279 &= (safe_add_func_int32_t_s_s(8L, (safe_mod_func_uint16_t_u_u((g_107 < l_299[0]), l_300[0]))))), 18446744073709551613UL)), p_16)))), 5))) || g_107) >= 0x37B5L);
            }
        }
        l_209 &= (safe_add_func_int32_t_s_s((((safe_sub_func_int64_t_s_s(((((safe_mod_func_uint32_t_u_u(g_41, 0x77FA435BL)) | (l_307 & p_15)) & p_15) & p_17), l_226)) >= l_299[0]) >= l_307), p_14));
    }
    else
    { 
        uint64_t l_321 = 0xC896D3C327D79662LL;
        if ((safe_sub_func_int64_t_s_s(g_2[0], (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((p_14 >= (safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((((safe_unary_minus_func_int64_t_s(l_132[3])) >= ((l_184 = (g_163[1][3][1] <= 0UL)) >= l_284)) , l_321), 0xC5ECF491655B2EAFLL)), g_21))), g_106)) >= 1L), g_165.f0)))))
        { 
            p_15 = l_321;
            return l_251.f0;
        }
        else
        { 
            for (l_184 = 27; (l_184 < 2); l_184 = safe_sub_func_uint8_t_u_u(l_184, 5))
            { 
                if (g_279)
                    break;
            }
            return l_321;
        }
    }
    return l_207.f4;
}



static uint16_t  func_29(int32_t  p_30, int32_t  p_31, int64_t  p_32, uint32_t  p_33)
{ 
    int16_t l_46 = (-8L);
    const int32_t l_49 = (-6L);
    int32_t l_55 = 0xA10F40BFL;
    int32_t l_94 = 0x0F898D4EL;
    int32_t l_108 = 0x9D40DD2CL;
    int32_t l_109 = 0L;
    int32_t l_110 = 0x75B4C718L;
    int8_t l_129 = 0xD4L;
    g_41 ^= (safe_add_func_int16_t_s_s((!(p_31 ^ ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_2[1], p_31)), 8)) < (((p_32 &= 0x74FA72D50FA8FAD7LL) || 18446744073709551615UL) || 1UL)))), 0UL));
    if ((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((l_46 |= g_2[1]), (safe_sub_func_uint16_t_u_u(l_49, 0x418EL)))) , (((safe_sub_func_uint64_t_u_u((g_54 = (safe_add_func_uint32_t_u_u(l_46, 0x10079D62L))), l_46)) ^ 0x99L) < p_32)), l_49)))
    { 
        uint64_t l_56 = 0UL;
        l_56++;
    }
    else
    { 
        uint64_t l_75 = 0x6F1AC28C4F412F3ALL;
        int32_t l_84 = 0xBECC425FL;
        if ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(0x61L, (((safe_mod_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((l_75 != ((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_75, 5)), (l_94 |= (safe_lshift_func_uint8_t_u_s(((((g_54 = ((++p_33) || (((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((g_41 < l_46), g_2[3])) <= p_32), g_54)), (-1L))) == g_54) >= p_33))) == g_2[1]) ^ 0x82D77871L) , p_33), l_55))))) < l_55), 1)) | l_49)), 0x780CE5FAL)) != g_2[1]) > p_31), 4)) || p_32) , g_41) && p_30) > 1L), g_2[4])) >= (-1L)) || 0x9F65L))) > l_49) && l_84), p_30)), l_84)), 0x438CF835L)), p_30)))
        { 
            int64_t l_105 = 0x91F928D85E26160DLL;
            for (g_54 = 13; (g_54 > (-28)); g_54 = safe_sub_func_int64_t_s_s(g_54, 2))
            { 
                uint32_t l_111 = 0xD7EEACC2L;
                int16_t l_114 = (-1L);
                uint8_t l_119 = 0UL;
                l_109 ^= ((1L && (safe_rshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(g_54, (++l_111))) != l_114), (safe_div_func_uint16_t_u_u(((l_119 = ((safe_mul_func_int16_t_s_s(l_75, (-1L))) ^ p_31)) <= 0x90L), 0xCCB6L)))), (-1L))) , 4L), l_75))) >= l_84);
            }
            return g_107;
        }
        else
        { 
            l_108 = ((((safe_lshift_func_int16_t_s_s(((!g_107) || ((g_41 = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_32 >= 0xF729L), (safe_div_func_uint64_t_u_u(l_84, 0xEA737198010E05D1LL)))), l_75))) <= g_106)), 8)) ^ g_106) != g_2[1]) && p_33);
        }
    }
    g_106 = l_129;
    return p_30;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_163[i][j][k], "g_163[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_257[i], "g_257[i]", print_hash_value);

    }
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_457.f0, "g_457.f0", print_hash_value);
    transparent_crc(g_457.f1, "g_457.f1", print_hash_value);
    transparent_crc(g_457.f2, "g_457.f2", print_hash_value);
    transparent_crc(g_457.f3, "g_457.f3", print_hash_value);
    transparent_crc(g_457.f4, "g_457.f4", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
