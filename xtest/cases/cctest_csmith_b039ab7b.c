// SPDX-License-Identifier: MIT
// cctest_csmith_b039ab7b.c --- cctest case csmith_b039ab7b (csmith seed 2956569467)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1dc1b416 */
/* @exp_ticks 0x48f0 */

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

// Options:   -s 2956569467 -o /tmp/csmith_gen_h39z_24m/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint8_t  f1;
   const uint16_t  f2;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   uint64_t  f1;
   const int32_t  f2;
};


static union U1 g_33 = {{0L,9UL,65535UL}};
static int8_t g_40 = 0x1CL;
static uint64_t g_43 = 0x66B9117A540F8278LL;
static int32_t g_65 = (-1L);
static uint16_t g_71 = 0x846CL;
static uint32_t g_79 = 0xBB70294BL;
static int32_t g_81 = 0x5E72B4CDL;
static int32_t g_101 = (-1L);
static uint32_t *g_107 = &g_79;
static int32_t g_112 = 0xB9B50EBCL;
static union U1 g_127 = {{0x35C36BF40340A1BDLL,0x19L,0x005CL}};
static union U1 g_129 = {{0x5606FA126CF24657LL,0x5EL,0x2913L}};
static union U1 *g_128 = &g_129;
static uint32_t g_175[1][1][1] = {{{4294967295UL}}};
static int32_t **g_178 = (void*)0;
static uint16_t g_253 = 0xEEACL;
static uint32_t g_257 = 0x309FADE2L;
static uint32_t g_259[4][1][1] = {{{0x2CE5BB09L}},{{0xF1E1B7CCL}},{{0x2CE5BB09L}},{{0xF1E1B7CCL}}};
static int8_t g_278 = 0xB4L;
static int8_t g_280 = 0xFDL;
static const uint32_t *g_286 = &g_79;
static const uint32_t **g_285 = &g_286;
static const uint32_t ***g_284 = &g_285;
static int32_t g_301[4] = {0xCABC829AL,0xCABC829AL,0xCABC829AL,0xCABC829AL};
static uint32_t g_303 = 4294967295UL;
static int16_t g_350[3][1] = {{(-1L)},{(-1L)},{(-1L)}};
static uint32_t g_352 = 0xAFB836CFL;
static int32_t g_355 = 0xFD4D0D6DL;
static uint32_t g_358[6] = {0x972F664FL,0x972F664FL,0x972F664FL,0x972F664FL,0x972F664FL,0x972F664FL};
static uint8_t *g_388 = (void*)0;
static const struct S0 *g_392 = &g_127.f0;
static uint16_t g_398 = 65533UL;
static uint32_t *g_403 = &g_259[2][0][0];
static uint32_t **g_402[1][2] = {{&g_403,&g_403}};
static uint8_t g_409 = 0xE8L;
static uint8_t g_430 = 0xFFL;
static uint8_t g_435 = 0x9FL;
static uint32_t g_440 = 4294967287UL;
static int64_t g_443 = 0xE64A78AF4274A601LL;
static int32_t g_444 = 0x7167F8F8L;
static uint64_t g_445 = 1UL;
static int32_t *g_459[1] = {&g_101};
static const int64_t g_466 = (-1L);
static int8_t *g_472 = &g_278;
static int8_t **g_471 = &g_472;
static uint64_t *g_509[1][1][3] = {{{(void*)0,(void*)0,(void*)0}}};
static uint64_t **g_508 = &g_509[0][0][1];
static uint32_t g_511 = 0x6AE00C88L;
static int16_t g_647[5] = {0x1E12L,0x1E12L,0x1E12L,0x1E12L,0x1E12L};
static uint16_t g_667 = 0x9A48L;
static uint16_t * const g_666 = &g_667;
static uint16_t * const *g_665 = &g_666;
static uint16_t * const **g_664 = &g_665;
static uint16_t *g_679 = (void*)0;
static uint16_t ** const g_678[2] = {&g_679,&g_679};
static uint16_t ** const *g_677 = &g_678[0];
static uint16_t ** const **g_676[5] = {&g_677,&g_677,&g_677,&g_677,&g_677};
static int16_t g_730 = 0L;
static uint32_t **g_776 = (void*)0;
static uint32_t ***g_790 = (void*)0;
static const uint64_t g_817[3] = {0x0141AD05D9683D92LL,0x0141AD05D9683D92LL,0x0141AD05D9683D92LL};
static int16_t g_831 = 0xCC2AL;
static int32_t g_874 = 0x0E922DD3L;
static int32_t *g_888 = (void*)0;
static uint64_t g_940 = 18446744073709551611UL;
static uint8_t **g_970 = &g_388;
static uint8_t **g_972 = &g_388;
static uint16_t **g_1005 = &g_679;
static uint16_t *** const g_1004 = &g_1005;
static uint16_t *** const *g_1003 = &g_1004;
static int32_t ** const g_1042[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t ** const *g_1041 = &g_1042[4];
static int16_t g_1301 = 2L;
static int32_t g_1324 = 1L;
static const uint8_t g_1361 = 0x61L;
static int32_t g_1387 = 0x80DC7AC4L;
static uint32_t ****g_1457 = (void*)0;
static int32_t g_1534 = (-1L);
static int32_t g_1537[5] = {0x1C31FADBL,0x1C31FADBL,0x1C31FADBL,0x1C31FADBL,0x1C31FADBL};
static int8_t ***g_1617 = &g_471;
static uint16_t g_1656 = 5UL;
static union U1 g_1671 = {{1L,255UL,0x5868L}};
static uint16_t ****g_1722 = (void*)0;
static uint16_t *****g_1721[1] = {&g_1722};
static int32_t g_1771 = 0x4D251D8DL;
static const int32_t *g_1782 = &g_112;
static const int32_t **g_1781[5] = {&g_1782,&g_1782,&g_1782,&g_1782,&g_1782};
static const int32_t ***g_1780[7] = {&g_1781[0],&g_1781[0],&g_1781[0],&g_1781[0],&g_1781[0],&g_1781[0],&g_1781[0]};
static const int32_t ****g_1779[3] = {&g_1780[3],&g_1780[3],&g_1780[3]};
static union U1 **g_1803 = (void*)0;
static int64_t *g_1863[2][6][5] = {{{&g_1671.f0.f0,&g_1671.f0.f0,&g_443,&g_443,(void*)0},{&g_1671.f0.f0,&g_1671.f0.f0,&g_1671.f0.f0,&g_1671.f0.f0,(void*)0},{&g_443,&g_443,&g_443,&g_443,&g_443},{(void*)0,&g_1671.f0.f0,&g_1671.f0.f0,&g_127.f0.f0,&g_127.f0.f0},{&g_1671.f0.f0,&g_1671.f0.f0,&g_1671.f0.f0,&g_443,&g_443},{(void*)0,&g_1671.f0.f0,&g_127.f0.f0,&g_1671.f0.f0,(void*)0}},{{&g_1671.f0.f0,&g_443,&g_1671.f0.f0,&g_443,&g_1671.f0.f0},{(void*)0,(void*)0,&g_127.f0.f0,(void*)0,&g_1671.f0.f0},{&g_443,&g_1671.f0.f0,&g_1671.f0.f0,&g_443,&g_1671.f0.f0},{&g_1671.f0.f0,(void*)0,&g_1671.f0.f0,&g_1671.f0.f0,(void*)0},{&g_1671.f0.f0,&g_1671.f0.f0,&g_443,&g_443,&g_443},{&g_1671.f0.f0,(void*)0,&g_1671.f0.f0,&g_1671.f0.f0,&g_127.f0.f0}}};
static int32_t **g_1882 = &g_888;
static int32_t ** const *g_1881 = &g_1882;
static int16_t *g_1932[2] = {(void*)0,(void*)0};
static int16_t **g_1931 = &g_1932[0];
static int16_t ***g_1930 = &g_1931;
static int8_t *****g_1963 = (void*)0;
static int32_t *g_1964 = &g_1387;
static uint8_t g_2035 = 0UL;
static int16_t g_2057[3] = {0L,0L,0L};
static int16_t g_2091 = 0L;
static const uint8_t g_2151 = 255UL;
static uint8_t g_2197[1] = {1UL};
static uint8_t g_2352 = 1UL;
static uint16_t ** const ***g_2384[5] = {&g_676[3],&g_676[3],&g_676[3],&g_676[3],&g_676[3]};
static union U1 *g_2510 = (void*)0;



static uint16_t  func_1(void);
static uint64_t  func_4(uint16_t  p_5, const uint32_t  p_6, uint16_t  p_7, union U1  p_8);
static uint32_t  func_10(int16_t  p_11);
static struct S0  func_12(uint32_t  p_13, struct S0  p_14, int16_t  p_15, uint8_t  p_16);
static int32_t  func_21(int16_t  p_22, int64_t  p_23, uint64_t  p_24, int32_t  p_25, int32_t  p_26);
static int16_t  func_27(union U1  p_28, int32_t  p_29, uint32_t  p_30, uint64_t  p_31, uint32_t  p_32);
static uint8_t  func_35(uint64_t  p_36, const int32_t  p_37);
static int32_t * func_45(uint64_t * p_46, uint32_t  p_47, uint64_t  p_48, uint16_t  p_49);




static uint16_t  func_1(void)
{ 
    int16_t l_9 = 0L;
    int64_t l_34 = (-1L);
    const int32_t l_38[6][5] = {{1L,0L,0L,1L,1L},{0x12D29ED7L,0L,0x12D29ED7L,0L,0x12D29ED7L},{1L,1L,0L,0L,1L},{0x07C4E7CCL,0L,0x07C4E7CCL,0L,0x07C4E7CCL},{1L,0L,0L,1L,1L},{0x12D29ED7L,0L,0x12D29ED7L,0L,0x12D29ED7L}};
    int8_t *l_39 = &g_40;
    int32_t l_1669[4];
    const uint32_t l_1670 = 0x1DD62603L;
    int64_t l_2001 = 0x8BA7248150C533DDLL;
    const int16_t l_2007 = 0xE187L;
    int16_t *l_2012 = (void*)0;
    int16_t *l_2013 = &g_730;
    int16_t *l_2014 = &g_647[0];
    int32_t l_2015 = 1L;
    int32_t l_2024[5] = {0xA33036EBL,0xA33036EBL,0xA33036EBL,0xA33036EBL,0xA33036EBL};
    uint8_t l_2025[1];
    int64_t *l_2026[1][1];
    const int16_t l_2027 = 0x681BL;
    uint32_t * const *l_2039 = &g_403;
    uint32_t * const **l_2038 = &l_2039;
    int16_t l_2077 = 0x5F2BL;
    struct S0 l_2090 = {0xBD8A2BAE6B8FB401LL,251UL,65535UL};
    int64_t l_2096 = 0xE67FEBDA085C74F0LL;
    const int32_t *l_2101 = &l_1669[3];
    int8_t *** const l_2177 = (void*)0;
    int8_t *** const *l_2176 = &l_2177;
    int32_t l_2179 = 0x49CCF600L;
    const int32_t *l_2181 = &g_1387;
    uint16_t ***l_2213 = &g_1005;
    uint64_t l_2232[7][4][1] = {{{0x89FFB4759D95BE81LL},{0x12A5C2A87FC8E495LL},{0x12A5C2A87FC8E495LL},{0x89FFB4759D95BE81LL}},{{0x12A5C2A87FC8E495LL},{0x12A5C2A87FC8E495LL},{0x89FFB4759D95BE81LL},{0x12A5C2A87FC8E495LL}},{{0x12A5C2A87FC8E495LL},{0x89FFB4759D95BE81LL},{0x12A5C2A87FC8E495LL},{0x12A5C2A87FC8E495LL}},{{0x89FFB4759D95BE81LL},{0x12A5C2A87FC8E495LL},{0x12A5C2A87FC8E495LL},{0x89FFB4759D95BE81LL}},{{0x12A5C2A87FC8E495LL},{0x12A5C2A87FC8E495LL},{0x89FFB4759D95BE81LL},{0x12A5C2A87FC8E495LL}},{{0x12A5C2A87FC8E495LL},{0x89FFB4759D95BE81LL},{0x12A5C2A87FC8E495LL},{0x12A5C2A87FC8E495LL}},{{0x89FFB4759D95BE81LL},{0x12A5C2A87FC8E495LL},{0x12A5C2A87FC8E495LL},{0x89FFB4759D95BE81LL}}};
    uint64_t l_2333[3][2][1] = {{{0xDC7C5A975881DD57LL},{0UL}},{{0xDC7C5A975881DD57LL},{0UL}},{{0xDC7C5A975881DD57LL},{0UL}}};
    uint8_t l_2389 = 255UL;
    int32_t ** const *l_2441 = &g_1882;
    union U1 l_2452[4] = {{{-1L,3UL,0x2DFEL}},{{-1L,3UL,0x2DFEL}},{{-1L,3UL,0x2DFEL}},{{-1L,3UL,0x2DFEL}}};
    int16_t l_2523 = 0x452CL;
    uint16_t l_2526[5][4][7] = {{{65535UL,0x43FDL,0x3820L,8UL,65535UL,0x147CL,1UL},{0xCFBAL,0UL,0xBB8CL,1UL,2UL,2UL,1UL},{0x3820L,0x7428L,0x3820L,0xD628L,0x716DL,0x32DAL,0x147CL},{0xB21BL,1UL,1UL,0UL,0x5DADL,65535UL,0xCFBAL}},{{8UL,1UL,0x3820L,0x3820L,1UL,8UL,0xD2ECL},{0x5DADL,0xEB3FL,0x33FCL,0xB21BL,8UL,0xBF1BL,65535UL},{0x43FDL,8UL,65535UL,0x32DAL,65535UL,0x32DAL,65535UL},{0xEB3FL,0xEB3FL,0UL,2UL,0xB21BL,1UL,0xBB8CL}},{{0xD2ECL,1UL,65535UL,0x7260L,65535UL,0x7428L,0x7428L},{0xB21BL,1UL,0UL,1UL,0xB21BL,0xEB3FL,2UL},{0xD628L,0x147CL,0x43FDL,65528UL,65535UL,65535UL,8UL},{0x290DL,0xCFBAL,2UL,8UL,8UL,2UL,0xCFBAL}},{{0xD628L,65528UL,0x147CL,0xD2ECL,1UL,65535UL,0x7260L},{0xB21BL,1UL,0xBB8CL,0UL,0x33FCL,8UL,0x33FCL},{0xD2ECL,0x5154L,0x5154L,0xD2ECL,0x7428L,0x7260L,0x43FDL},{0xEB3FL,0x33FCL,0xB21BL,8UL,0xBF1BL,65535UL,1UL}},{{0x43FDL,0x716DL,0x7260L,65528UL,0x7260L,0x716DL,0x43FDL},{0x5DADL,0x290DL,1UL,1UL,0xEB3FL,0xCFBAL,0x33FCL},{8UL,0x32DAL,65535UL,0x7260L,0xD628L,0xD628L,0x7260L},{1UL,0UL,1UL,2UL,65535UL,1UL,0xCFBAL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1669[i] = 7L;
    for (i = 0; i < 1; i++)
        l_2025[i] = 0xF1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2026[i][j] = &g_127.f0.f0;
    }
    return l_2526[3][3][2];
}



static uint64_t  func_4(uint16_t  p_5, const uint32_t  p_6, uint16_t  p_7, union U1  p_8)
{ 
    uint32_t l_1680 = 0x3D180742L;
    int32_t l_1683[6];
    uint32_t ***l_1714 = &g_776;
    uint16_t l_1716 = 1UL;
    int32_t *l_1723[4][1];
    int64_t l_1744 = 0x2A6D568E3794F166LL;
    int32_t l_1784[6];
    int32_t l_1792 = 1L;
    const int32_t l_1798[2][6] = {{0x8D554563L,0x8D554563L,0x8D554563L,0x8D554563L,0x8D554563L,0x8D554563L},{0x8D554563L,0x8D554563L,0x8D554563L,0x8D554563L,0x8D554563L,0x8D554563L}};
    uint64_t l_1832[3][3][5] = {{{0x0BC128812D2EDC1DLL,18446744073709551615UL,0x1E30D3169EC66C02LL,18446744073709551615UL,18446744073709551609UL},{0x81730C6658381D36LL,18446744073709551615UL,0x1130C05F8939EDECLL,0xB5F30DE38E8B5B42LL,1UL},{0xB5F30DE38E8B5B42LL,18446744073709551615UL,0xAF67D425344BF8DBLL,0xAF67D425344BF8DBLL,18446744073709551615UL}},{{18446744073709551609UL,0x1130C05F8939EDECLL,18446744073709551612UL,0xAF67D425344BF8DBLL,0xED1BFE165DE96E70LL},{0x88AD24C4006EA229LL,0xED1BFE165DE96E70LL,6UL,0xB5F30DE38E8B5B42LL,18446744073709551615UL},{18446744073709551615UL,0x1E30D3169EC66C02LL,1UL,18446744073709551615UL,0x0BC128812D2EDC1DLL}},{{0x88AD24C4006EA229LL,18446744073709551615UL,0x0BC128812D2EDC1DLL,18446744073709551615UL,0x88AD24C4006EA229LL},{18446744073709551609UL,0x7A0147C69E2F9890LL,0x0BC128812D2EDC1DLL,1UL,0x1130C05F8939EDECLL},{0xB5F30DE38E8B5B42LL,0x76C1CBD84DD3000FLL,1UL,18446744073709551612UL,0x81730C6658381D36LL}}};
    int32_t ***l_1834 = &g_178;
    int32_t ****l_1833 = &l_1834;
    int8_t ****l_1861 = &g_1617;
    uint64_t l_1937[6][4] = {{18446744073709551615UL,18446744073709551615UL,0xC764CF286ACDF063LL,0xC764CF286ACDF063LL},{18446744073709551615UL,18446744073709551615UL,0xC764CF286ACDF063LL,0xC764CF286ACDF063LL},{18446744073709551615UL,18446744073709551615UL,0xC764CF286ACDF063LL,0xC764CF286ACDF063LL},{18446744073709551615UL,18446744073709551615UL,0xC764CF286ACDF063LL,0xC764CF286ACDF063LL},{18446744073709551615UL,18446744073709551615UL,0xC764CF286ACDF063LL,0xC764CF286ACDF063LL},{18446744073709551615UL,18446744073709551615UL,0xC764CF286ACDF063LL,0xC764CF286ACDF063LL}};
    uint32_t l_1948 = 0x093F4252L;
    uint16_t *** const **l_1979 = &g_1003;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1683[i] = 0xAACF909CL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1723[i][j] = (void*)0;
    }
    for (i = 0; i < 6; i++)
        l_1784[i] = 0xA59D0DEAL;
    for (g_81 = 3; (g_81 >= 1); g_81 -= 1)
    { 
        uint32_t *l_1672 = &g_303;
        struct S0 l_1682[5] = {{3L,252UL,0xD579L},{3L,252UL,0xD579L},{3L,252UL,0xD579L},{3L,252UL,0xD579L},{3L,252UL,0xD579L}};
        int32_t l_1686 = 1L;
        uint64_t l_1696 = 18446744073709551612UL;
        int32_t *l_1725 = &l_1686;
        uint16_t *****l_1728 = &g_1722;
        uint32_t l_1799 = 1UL;
        int16_t l_1805 = 1L;
        int32_t ****l_1809 = (void*)0;
        int32_t ***l_1812 = &g_178;
        int32_t ****l_1811[6] = {&l_1812,&l_1812,&l_1812,&l_1812,&l_1812,&l_1812};
        int16_t *l_1850 = &l_1805;
        int16_t **l_1849[7][6][4] = {{{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,(void*)0,&l_1850,(void*)0},{&l_1850,&l_1850,(void*)0,&l_1850},{(void*)0,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,(void*)0}},{{&l_1850,(void*)0,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,(void*)0},{&l_1850,&l_1850,&l_1850,&l_1850},{(void*)0,&l_1850,(void*)0,(void*)0}},{{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,(void*)0,&l_1850,(void*)0},{&l_1850,&l_1850,(void*)0,&l_1850},{(void*)0,&l_1850,&l_1850,&l_1850}},{{&l_1850,&l_1850,&l_1850,(void*)0},{&l_1850,(void*)0,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,(void*)0},{&l_1850,&l_1850,&l_1850,&l_1850}},{{(void*)0,&l_1850,(void*)0,(void*)0},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,(void*)0,&l_1850,(void*)0},{&l_1850,&l_1850,(void*)0,&l_1850}},{{(void*)0,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,(void*)0},{&l_1850,(void*)0,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,(void*)0}},{{&l_1850,&l_1850,&l_1850,&l_1850},{(void*)0,&l_1850,(void*)0,(void*)0},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,&l_1850,&l_1850,&l_1850},{&l_1850,(void*)0,&l_1850,(void*)0}}};
        int8_t ****l_1859 = (void*)0;
        int64_t *l_1862 = &l_1744;
        const int8_t l_1884 = 0x41L;
        uint32_t l_1901 = 1UL;
        uint64_t l_1913 = 0UL;
        uint16_t l_1919 = 0x0B0DL;
        int64_t l_1920 = (-1L);
        union U1 l_1927[1][1] = {{{{0x4B096E22CF5CCFD5LL,249UL,0xB5E7L}}}};
        uint8_t **l_1928 = (void*)0;
        int16_t l_1934[4] = {0x0445L,0x0445L,0x0445L,0x0445L};
        uint16_t l_1974 = 65535UL;
        int i, j, k;
    }
    for (l_1792 = 27; (l_1792 <= (-13)); l_1792 = safe_sub_func_uint64_t_u_u(l_1792, 8))
    { 
        uint64_t *l_1994 = (void*)0;
        int32_t l_1997 = 0x4E208DC3L;
        int32_t **l_1999[1];
        uint16_t l_2000[4][6] = {{0xFFA6L,0xFFA6L,65535UL,65535UL,65531UL,65535UL},{65531UL,0xFFA6L,65527UL,65527UL,0xFFA6L,65531UL},{65535UL,65531UL,65527UL,65531UL,65535UL,65535UL},{65535UL,65531UL,65531UL,65535UL,0xFFA6L,65535UL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1999[i] = (void*)0;
        l_1723[2][0] = &l_1997;
        l_2000[3][2] = ((*g_1964) = p_7);
    }
    return p_8.f2;
}



static uint32_t  func_10(int16_t  p_11)
{ 
    int32_t l_1326 = 0xBAE1D8E9L;
    int64_t l_1386[3];
    int32_t l_1405 = 0x94EDCCCFL;
    uint16_t *l_1412 = (void*)0;
    int32_t l_1433[5];
    uint32_t *l_1444[7] = {&g_175[0][0][0],&g_175[0][0][0],&g_175[0][0][0],&g_175[0][0][0],&g_175[0][0][0],&g_175[0][0][0],&g_175[0][0][0]};
    int32_t ** const l_1460 = &g_459[0];
    struct S0 *l_1480 = &g_33.f0;
    union U1 l_1512 = {{-1L,3UL,1UL}};
    int32_t **l_1526[3][6][6] = {{{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888}},{{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888}},{{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888},{&g_888,&g_888,&g_888,&g_888,&g_888,&g_888}}};
    int32_t * const l_1536 = &g_1537[2];
    int32_t * const *l_1535 = &l_1536;
    const int64_t l_1558 = 0xB5B6B49D4A02D344LL;
    int32_t *l_1580 = &l_1433[2];
    int32_t *l_1581 = &g_112;
    int32_t *l_1582 = (void*)0;
    int32_t *l_1583 = &l_1405;
    int32_t *l_1584 = &g_1387;
    int32_t *l_1585 = (void*)0;
    int32_t *l_1586 = &g_81;
    int32_t *l_1587 = &g_355;
    int16_t l_1588 = (-1L);
    int32_t *l_1589 = &g_1387;
    int32_t *l_1590 = (void*)0;
    int32_t *l_1591[2];
    int64_t l_1592 = 0x4A02AFCD92F6B38ALL;
    uint32_t l_1593 = 4294967294UL;
    uint16_t ***l_1603 = &g_1005;
    uint16_t ****l_1602[4][1][3] = {{{&l_1603,(void*)0,&l_1603}},{{&l_1603,&l_1603,&l_1603}},{{&l_1603,(void*)0,&l_1603}},{{&l_1603,&l_1603,&l_1603}}};
    uint8_t l_1612 = 0x4CL;
    int32_t l_1624 = (-1L);
    uint32_t **l_1625 = &g_403;
    uint8_t l_1630 = 0xE2L;
    uint64_t l_1631 = 0x6E332F3F59D25F68LL;
    int32_t l_1651 = 0x129568CAL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1386[i] = 0x70ADFC9F42E06147LL;
    for (i = 0; i < 5; i++)
        l_1433[i] = 0xBE9D37D3L;
    for (i = 0; i < 2; i++)
        l_1591[i] = (void*)0;
    if (l_1326)
    { 
        int32_t l_1330 = 5L;
        int32_t l_1331 = (-1L);
        struct S0 l_1360[7] = {{0x62D19325669EB10FLL,255UL,0x181DL},{0x62D19325669EB10FLL,255UL,0x181DL},{0x62D19325669EB10FLL,255UL,0x181DL},{0x62D19325669EB10FLL,255UL,0x181DL},{0x62D19325669EB10FLL,255UL,0x181DL},{0x62D19325669EB10FLL,255UL,0x181DL},{0x62D19325669EB10FLL,255UL,0x181DL}};
        uint32_t **l_1416 = &g_107;
        int32_t l_1429 = 0x363828A6L;
        int32_t l_1431 = 0x740C35CEL;
        int32_t l_1432 = 0x32813264L;
        uint32_t ****l_1458 = &g_790;
        int32_t l_1499 = 1L;
        int32_t l_1500[1][2];
        uint8_t l_1559 = 253UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1500[i][j] = 2L;
        }
        if ((p_11 & (safe_mul_func_uint8_t_u_u((l_1331 ^= (p_11 == (~l_1330))), 0xA8L))))
        { 
            uint8_t *l_1342 = &g_409;
            uint32_t *l_1356 = &g_511;
            int32_t l_1362 = 0x07A3A70AL;
            int32_t l_1363 = 8L;
            const uint32_t **l_1415 = &g_286;
            int32_t l_1419 = 0xF418BF01L;
            int32_t l_1425 = 0x39D7C850L;
            int32_t l_1434 = 0x1781C7ADL;
            int32_t ***l_1438 = &g_178;
            uint32_t ****l_1456 = (void*)0;
            uint32_t *****l_1455[2][2][6] = {{{(void*)0,(void*)0,(void*)0,&l_1456,(void*)0,&l_1456},{&l_1456,(void*)0,&l_1456,&l_1456,(void*)0,(void*)0}},{{&l_1456,&l_1456,&l_1456,&l_1456,(void*)0,&l_1456},{&l_1456,&l_1456,(void*)0,&l_1456,&l_1456,&l_1456}}};
            union U1 l_1459 = {{0x728AD121E4084B59LL,0xEFL,8UL}};
            int i, j, k;
            for (g_443 = 7; (g_443 >= (-26)); g_443 = safe_sub_func_int16_t_s_s(g_443, 5))
            { 
                uint8_t *l_1341 = &g_129.f0.f1;
                int32_t l_1364 = 0xAED4AA90L;
                int32_t *l_1367 = &g_101;
                int32_t l_1390[4][3] = {{0x003FAEBDL,0x003FAEBDL,0x003FAEBDL},{0xF67F4F09L,0x2CD09E59L,0xF67F4F09L},{0x003FAEBDL,0x003FAEBDL,0x003FAEBDL},{0xF67F4F09L,0x2CD09E59L,0xF67F4F09L}};
                int i, j;
                if ((p_11 || (((**g_471) , (*g_107)) || 9UL)))
                { 
                    uint8_t *l_1339 = &g_409;
                    uint8_t **l_1338 = &l_1339;
                    int32_t l_1340[6][4][7] = {{{0x3DB0D44EL,0xF48E25FCL,0x887EAFCEL,(-1L),0x3DD9F718L,0xDAD73624L,0x6DE4A4E1L},{0xF46D561BL,2L,0x4A9653B2L,0L,3L,1L,0L},{0x65744168L,(-1L),1L,0x19CAA9ADL,0L,0xDAD73624L,(-7L)},{0x7264F0D0L,0x2B4CF0CEL,0xC45761EAL,(-9L),0x041B9A79L,0L,0L}},{{0xC59AD20CL,0x887EAFCEL,(-1L),(-5L),0x7264F0D0L,(-5L),0xF48E25FCL},{0x0C20355DL,0x041B9A79L,0x6CE5CE47L,0x7264F0D0L,(-10L),(-5L),0x385F9F8CL},{0xF1AE7B28L,0x77DD0118L,0L,(-5L),0xC59AD20CL,0xB5678776L,0L},{0L,(-7L),(-1L),1L,0x4E2DB072L,(-9L),0x2D6079F6L}},{{0L,(-7L),0xFF201666L,2L,(-1L),(-1L),3L},{(-1L),0x77DD0118L,0x0C20355DL,(-1L),0x31E65850L,1L,0xFF201666L},{(-1L),0x041B9A79L,0x695A6620L,0x3DB0D44EL,0x513DBC06L,0L,0x7260B585L},{0x695A6620L,0x887EAFCEL,0x280AA60BL,0x30D9672FL,0x2D1C2FE2L,0x30D9672FL,0x280AA60BL}},{{0x2B4CF0CEL,0x2B4CF0CEL,1L,0x31E65850L,0xBB44A638L,(-10L),(-5L)},{0x041B9A79L,(-1L),(-10L),0xF1AE7B28L,0x2D6079F6L,0x2D1C2FE2L,0x3DD9F718L},{1L,2L,0x77DD0118L,0xB5678776L,0xBB44A638L,0x75B792CBL,(-1L)},{4L,0xF48E25FCL,0xB5678776L,0L,0x2D1C2FE2L,0x2EDABE45L,(-1L)}},{{3L,0x2D6079F6L,0L,(-7L),0x513DBC06L,(-1L),0x512D3DE8L},{(-10L),(-7L),0L,0x280AA60BL,0x31E65850L,0x4A9653B2L,1L},{(-10L),0L,(-7L),(-9L),(-1L),0x9681B9B0L,0x0C20355DL},{0x8164F1E9L,(-10L),(-1L),0xC59AD20CL,0x4E2DB072L,(-7L),4L}},{{0x8164F1E9L,0xBB44A638L,2L,0L,0xC59AD20CL,0x8883818AL,0x2EDABE45L},{(-10L),0xDAD73624L,0x3DB0D44EL,0x75B792CBL,(-10L),(-7L),0x4E2DB072L},{(-10L),0x8883818AL,(-1L),2L,0x7264F0D0L,(-1L),(-7L)},{3L,(-1L),0x825F1B0AL,0x041B9A79L,0x041B9A79L,0x825F1B0AL,(-1L)}}};
                    int16_t *l_1343 = &g_831;
                    const uint32_t *l_1354 = &g_259[3][0][0];
                    const uint32_t **l_1355 = &l_1354;
                    uint32_t **l_1357 = &g_403;
                    int64_t *l_1358[2];
                    int32_t *l_1359 = &g_101;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1358[i] = &g_129.f0.f0;
                    (*l_1359) = (safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_11, (((*l_1343) = (((*l_1338) = ((*g_970) = (*g_970))) != (l_1340[0][0][2] , (l_1342 = l_1341)))) , (g_33.f0.f0 |= (g_127.f0.f0 = (safe_mul_func_uint16_t_u_u(((1UL < (l_1331 = (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((((*l_1355) = l_1354) == ((*l_1357) = l_1356)), (**g_471))) , (-1L)) && 0x9A62AA53L), l_1340[0][0][2])), (*g_286))), 0xB6DDL)))) >= p_11), p_11))))))), l_1340[1][3][2]));
                    if (l_1331)
                        continue;
                    (*l_1359) = ((0xC813L >= (((p_11 || (l_1360[4] , g_1361)) || l_1326) == p_11)) >= ((0xF90D3B49L == p_11) , 0xA75A50A39CB273F9LL));
                    (*l_1359) = ((*g_107) == ((((249UL == (l_1362 = p_11)) <= p_11) >= l_1363) != (((((p_11 > (-5L)) > l_1364) & g_940) , l_1363) || 0UL)));
                }
                else
                { 
                    int32_t *l_1365 = &g_112;
                    int32_t **l_1366[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1366[i] = &g_459[0];
                    (*l_1365) |= 0x9A997B0AL;
                    l_1367 = &l_1362;
                    l_1331 ^= (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((*l_1367) = (p_11 > (safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(((p_11 == (safe_mod_func_int64_t_s_s(g_350[1][0], 0x150C21BDB089DDB5LL))) , (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_1386[0], (((((g_1387 == (safe_mul_func_int16_t_s_s(g_647[2], 65529UL))) >= p_11) | 0UL) & p_11) , 0x7C20L))), p_11))), 1)) && (*g_286)) && 0L), l_1390[0][1])))), p_11)), p_11)) & p_11), l_1363)) | p_11), 0xAF4CL));
                }
                if (l_1331)
                    continue;
            }
            for (g_40 = 0; (g_40 <= 4); g_40 += 1)
            { 
                union U1 l_1391 = {{0L,8UL,65535UL}};
                struct S0 *l_1407[3][6][6] = {{{&g_129.f0,&g_129.f0,(void*)0,&l_1360[4],&g_129.f0,&l_1360[4]},{&l_1360[3],&l_1360[4],&g_129.f0,(void*)0,&l_1360[4],&l_1360[3]},{&l_1360[3],&l_1360[1],(void*)0,&l_1360[4],&l_1360[4],(void*)0},{&g_129.f0,&g_129.f0,&g_129.f0,(void*)0,&l_1360[4],&g_129.f0},{&l_1360[3],&l_1360[4],&l_1360[1],&l_1360[4],&g_129.f0,(void*)0},{&l_1360[4],&l_1360[3],&l_1360[1],(void*)0,&l_1360[4],&l_1360[4]}},{{&l_1360[4],(void*)0,(void*)0,&l_1360[4],&g_129.f0,(void*)0},{&l_1360[4],&g_129.f0,(void*)0,(void*)0,&l_1360[3],&l_1360[4]},{&l_1360[4],&g_129.f0,(void*)0,&l_1360[4],&l_1360[3],&g_129.f0},{&l_1360[3],&g_129.f0,&l_1360[1],&l_1360[1],&g_129.f0,&l_1360[3]},{&l_1360[4],(void*)0,&l_1360[1],&l_1360[3],&l_1360[4],&g_129.f0},{&l_1360[4],&l_1360[3],(void*)0,(void*)0,&g_129.f0,&l_1360[4]}},{{&l_1360[4],&l_1360[4],(void*)0,&l_1360[3],&l_1360[3],(void*)0},{&l_1360[4],&l_1360[4],(void*)0,&l_1360[1],&l_1360[3],&l_1360[4]},{&l_1360[3],&l_1360[4],&l_1360[1],&l_1360[4],&g_129.f0,(void*)0},{&l_1360[4],&l_1360[3],&l_1360[1],(void*)0,&l_1360[4],&l_1360[4]},{&l_1360[4],(void*)0,(void*)0,&l_1360[4],&g_129.f0,(void*)0},{&l_1360[4],&g_129.f0,(void*)0,(void*)0,&l_1360[3],&l_1360[4]}}};
                struct S0 **l_1406 = &l_1407[0][3][0];
                int32_t l_1420 = (-5L);
                int32_t **l_1421 = &g_459[0];
                int32_t l_1426 = 0L;
                int32_t l_1427 = 0x0E99D38DL;
                int32_t l_1428[2];
                uint32_t l_1435 = 0xC8E48798L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1428[i] = 0x86C187B8L;
                for (g_440 = 0; (g_440 <= 0); g_440 += 1)
                { 
                    int32_t l_1410[5][7][1] = {{{7L},{0x2670F1D8L},{9L},{8L},{0x53D969E9L},{0x53D969E9L},{8L}},{{9L},{0x2670F1D8L},{7L},{8L},{0x24C0DC8EL},{8L},{7L}},{{0x2670F1D8L},{9L},{8L},{0x53D969E9L},{0x53D969E9L},{8L},{9L}},{{0x2670F1D8L},{7L},{8L},{0x24C0DC8EL},{8L},{7L},{0x2670F1D8L}},{{9L},{8L},{0x53D969E9L},{0x53D969E9L},{8L},{9L},{0x2670F1D8L}}};
                    int32_t **l_1411 = &g_459[0];
                    int i, j, k;
                    l_1362 = g_350[(g_440 + 1)][g_440];
                    (*l_1411) = (((l_1391 , (!((safe_lshift_func_uint16_t_u_u(3UL, (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_1405 &= (*g_472)), 6)), ((((void*)0 == l_1406) != p_11) == ((l_1410[0][1][0] = (safe_rshift_func_int8_t_s_s((p_11 , p_11), g_350[(g_440 + 1)][g_440]))) & l_1391.f1)))) != l_1391.f1), (**g_665))) ^ p_11), l_1386[1])), p_11)))) || p_11))) <= p_11) , (void*)0);
                }
                l_1420 ^= (((l_1412 != (*g_1005)) && (safe_mul_func_int64_t_s_s((((0x5A94L & (((l_1415 != l_1416) >= (((-2L) < (l_1363 |= (l_1362 ^= (safe_mul_func_uint16_t_u_u(65534UL, l_1391.f1))))) || p_11)) & l_1419)) , &g_970) == &g_972), 0L))) && 0x09FDF0BE07895B5FLL);
                g_392 = g_392;
                (*l_1421) = &l_1405;
                for (g_398 = 0; (g_398 <= 0); g_398 += 1)
                { 
                    int32_t l_1422 = 0x6409E0AEL;
                    int32_t *l_1423 = &l_1362;
                    int32_t *l_1424[6] = {&g_81,&g_81,&g_81,&g_81,&g_81,&g_81};
                    int32_t l_1430 = 0xC8B564FEL;
                    int32_t ****l_1439 = &l_1438;
                    int i;
                    l_1422 = p_11;
                    --l_1435;
                    (*l_1439) = l_1438;
                }
            }
            l_1432 &= (safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_int64_t_s((((safe_div_func_int8_t_s_s(((void*)0 == l_1444[3]), (safe_add_func_uint8_t_u_u((((p_11 , (*g_284)) != (*g_284)) <= (safe_mod_func_int16_t_s_s(p_11, (safe_add_func_int8_t_s_s((((*g_107) = ((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((g_1457 = (g_112 , &g_790)) != l_1458), 0x55L)), l_1386[2])) , (*g_107))) == 1L), p_11))))), 0x00L)))) | (-1L)) , 1L)))));
            for (g_129.f0.f1 = 0; (g_129.f0.f1 <= 0); g_129.f0.f1 += 1)
            { 
                int32_t **l_1461 = &g_459[0];
                int32_t ***l_1462 = &l_1461;
                l_1429 |= (l_1459 , (l_1460 == ((*l_1462) = l_1461)));
                return (*g_286);
            }
            for (l_1429 = 4; (l_1429 >= 0); l_1429 -= 1)
            { 
                union U1 l_1463[5][5] = {{{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}}},{{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}}},{{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}}},{{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}},{{0x7E1057520BCA479DLL,0x37L,2UL}}},{{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}},{{0x4C9AFF8921C0F0E8LL,0UL,0UL}}}};
                int32_t *l_1477 = &l_1431;
                int i, j;
                if (g_647[l_1429])
                    break;
                for (g_127.f1 = 0; (g_127.f1 <= 0); g_127.f1 += 1)
                { 
                    int32_t l_1474[2];
                    int16_t *l_1475 = &g_350[1][0];
                    int32_t *l_1476 = &g_355;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1474[i] = 0x6CB3A4F8L;
                    (*l_1476) = (g_647[(g_127.f1 + 1)] , (l_1463[0][4] , (((safe_sub_func_int16_t_s_s(1L, (safe_rshift_func_uint8_t_u_s(((*l_1342) = (g_647[l_1429] == (safe_div_func_int16_t_s_s(((*l_1475) = ((l_1463[0][4] , (safe_lshift_func_int8_t_s_s(0xDBL, (safe_rshift_func_int16_t_s_s((l_1463[0][4].f1 != 0UL), l_1474[1]))))) & p_11)), p_11)))), 2)))) ^ 6UL) , 0xC4F18544L)));
                    (*l_1476) = 0xB43B2102L;
                }
                (*l_1477) = (g_647[l_1429] <= g_301[3]);
                if (p_11)
                    continue;
            }
        }
        else
        { 
            int64_t l_1483 = 0x68853FA9B62918EDLL;
            int32_t l_1487 = 0L;
            int32_t l_1493 = 0L;
            int32_t l_1494 = 0x1AD3F652L;
            int32_t l_1495 = 0x5B82B0B4L;
            int32_t l_1496 = 1L;
            int32_t l_1497 = 0x06C5C6E3L;
            int32_t l_1498[5];
            uint32_t l_1501[5];
            uint32_t **l_1519 = &l_1444[3];
            uint64_t *l_1552 = &l_1512.f1;
            int i;
            for (i = 0; i < 5; i++)
                l_1498[i] = 0x6528BA02L;
            for (i = 0; i < 5; i++)
                l_1501[i] = 1UL;
            if (((**g_471) || ((((**g_665) &= (safe_lshift_func_int16_t_s_s((l_1360[4].f0 < (**g_471)), ((l_1480 != l_1480) == ((safe_sub_func_uint32_t_u_u((l_1483 = l_1432), (((safe_sub_func_int8_t_s_s((((~(p_11 == p_11)) != p_11) <= (**g_471)), (-8L))) != (**g_471)) > 0x9EE7L))) >= p_11))))) == 0xB5E6L) , 0x0DL)))
            { 
                return p_11;
            }
            else
            { 
                int32_t *l_1488 = &l_1433[2];
                int32_t *l_1489 = &g_81;
                int32_t *l_1490 = (void*)0;
                int32_t *l_1491 = &l_1433[2];
                int32_t *l_1492[3];
                uint64_t l_1574 = 0xDBBF239DCD6C01AELL;
                int32_t **l_1575 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_1492[i] = &l_1432;
                l_1501[3]++;
                for (l_1494 = 6; (l_1494 >= 1); l_1494 -= 1)
                { 
                    int32_t l_1517[1][6];
                    uint8_t *l_1518 = &g_430;
                    int32_t * const *l_1527 = &g_888;
                    int32_t * const **l_1528 = (void*)0;
                    int32_t * const **l_1529 = &l_1527;
                    int32_t * const **l_1530 = (void*)0;
                    int32_t * const l_1533 = &g_1534;
                    int32_t * const *l_1532 = &l_1533;
                    int32_t * const **l_1531[6][4][4] = {{{&l_1532,(void*)0,&l_1532,&l_1532},{&l_1532,&l_1532,(void*)0,&l_1532},{(void*)0,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532}},{{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,(void*)0,&l_1532,(void*)0}},{{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,(void*)0,&l_1532,&l_1532},{(void*)0,&l_1532,&l_1532,(void*)0},{&l_1532,&l_1532,(void*)0,&l_1532}},{{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,(void*)0}},{{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,(void*)0,&l_1532,&l_1532}},{{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532},{&l_1532,&l_1532,&l_1532,&l_1532}}};
                    int32_t l_1553 = 9L;
                    const int32_t ***l_1556 = (void*)0;
                    const int32_t ****l_1555 = &l_1556;
                    const int32_t *****l_1554 = &l_1555;
                    uint64_t l_1557 = 4UL;
                    uint64_t ***l_1560 = &g_508;
                    union U1 l_1573 = {{0x982D6121C3CEA590LL,1UL,0xF386L}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_1517[i][j] = 1L;
                    }
                    l_1500[0][0] &= ((((safe_mod_func_int64_t_s_s((((p_11 <= ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(g_33.f0.f0, 15)) , (safe_mul_func_uint8_t_u_u(((*l_1518) |= (((l_1512 , g_392) != (void*)0) < (((p_11 ^ (safe_mod_func_uint64_t_u_u(((((((safe_mul_func_uint16_t_u_u((**g_665), g_65)) ^ 0x57C4L) & (-8L)) , 0xBDCDB28C9351434ALL) > g_33.f1) == 0x3848L), (*l_1489)))) == l_1517[0][3]) == (*l_1491)))), p_11))), p_11)) <= (-10L))) , p_11) != l_1497), (-1L))) <= 1UL) | (*g_472)) == p_11);
                    if (l_1517[0][1])
                        continue;
                    (*l_1491) = ((l_1519 == &l_1444[l_1494]) || ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((l_1517[0][5] = ((**g_665) |= (l_1526[1][2][0] == (l_1535 = ((*l_1529) = l_1527))))) < (((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((p_11 <= (safe_div_func_int16_t_s_s(p_11, (safe_sub_func_int64_t_s_s((((0x1BL | 4UL) , (*g_508)) != l_1552), p_11))))), (**g_471))) , p_11), l_1553)) , (void*)0) != l_1554), 5UL)), l_1557)), p_11)) == p_11) <= 0x985DA082F68B8230LL)) <= l_1558), 65532UL)), l_1559)) , l_1559), p_11)) && l_1500[0][0]));
                    (*l_1560) = &g_509[0][0][2];
                    (*l_1489) ^= ((l_1499 = (l_1499 || (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int16_t_s((((((safe_div_func_int64_t_s_s(((-7L) != (safe_sub_func_int8_t_s_s((((((((safe_mul_func_uint16_t_u_u(((((**g_471) |= (~(0x29L ^ (l_1494 | (l_1573 , ((void*)0 == (*g_1003))))))) != l_1574) <= (*l_1488)), (***g_664))) & l_1494) & 1L) && p_11) < p_11) , 0x1538L) == 5L), 0xC6L))), 0x5D4EBCBCF103E4C7LL)) || l_1360[4].f1) , p_11) , (void*)0) == l_1575))) > p_11), l_1431)), 3)))) && p_11);
                }
                if (l_1493)
                { 
                    uint32_t *l_1576 = &l_1501[1];
                    l_1499 ^= (l_1488 != l_1576);
                    (*l_1488) ^= (0x80L == ((void*)0 != &g_402[0][0]));
                    (*l_1460) = &l_1331;
                    (*l_1488) = l_1494;
                    (*l_1488) = (safe_rshift_func_uint16_t_u_s(p_11, 5));
                }
                else
                { 
                    int32_t *l_1579[3][5][1] = {{{&g_112},{&g_355},{&g_355},{&g_112},{&g_101}},{{&g_112},{&g_355},{&g_355},{&g_112},{&g_101}},{{&g_112},{&g_355},{&g_355},{&g_112},{&g_101}}};
                    int i, j, k;
                    (*l_1460) = l_1579[0][3][0];
                    (*l_1489) = l_1431;
                }
            }
            return (*g_107);
        }
    }
    else
    { 
        return p_11;
    }
    --l_1593;
    for (g_443 = (-27); (g_443 != 2); ++g_443)
    { 
        uint64_t *l_1604 = &g_940;
        int32_t l_1606 = 0x76999D91L;
        int32_t l_1607 = (-2L);
        int64_t l_1619 = 0xBD9E9CEB783F5C98LL;
        const uint32_t *l_1627 = (void*)0;
        const uint32_t **l_1626 = &l_1627;
        int32_t l_1647 = 0xEDFA66D5L;
        int32_t l_1649 = 0xEF7482B7L;
        int32_t l_1650 = 1L;
        int32_t l_1652 = (-1L);
        int32_t l_1653 = 4L;
        int32_t l_1655 = (-6L);
        struct S0 l_1668[5][6] = {{{-2L,255UL,65535UL},{0x6E92E92466BF9D19LL,0UL,0x6663L},{0x4B1A9C394FFF8C74LL,0xDCL,0x1535L},{0x6E92E92466BF9D19LL,0UL,0x6663L},{-2L,255UL,65535UL},{-1L,8UL,1UL}},{{-2L,255UL,65535UL},{0x6E92E92466BF9D19LL,0UL,0x6663L},{0x4B1A9C394FFF8C74LL,0xDCL,0x1535L},{0x6E92E92466BF9D19LL,0UL,0x6663L},{-2L,255UL,65535UL},{-1L,8UL,1UL}},{{-2L,255UL,65535UL},{0x6E92E92466BF9D19LL,0UL,0x6663L},{0x4B1A9C394FFF8C74LL,0xDCL,0x1535L},{0x6E92E92466BF9D19LL,0UL,0x6663L},{-2L,255UL,65535UL},{-1L,8UL,1UL}},{{-2L,255UL,65535UL},{0x6E92E92466BF9D19LL,0UL,0x6663L},{0x4B1A9C394FFF8C74LL,0xDCL,0x1535L},{0x6E92E92466BF9D19LL,0UL,0x6663L},{-2L,255UL,65535UL},{-1L,8UL,1UL}},{{-2L,255UL,65535UL},{0x6E92E92466BF9D19LL,0UL,0x6663L},{0x4B1A9C394FFF8C74LL,0xDCL,0x1535L},{0x6E92E92466BF9D19LL,0UL,0x6663L},{-2L,255UL,65535UL},{-1L,8UL,1UL}}};
        int i, j;
        for (g_444 = (-29); (g_444 > (-6)); g_444 = safe_add_func_int64_t_s_s(g_444, 9))
        { 
            int8_t l_1605 = 7L;
            int32_t l_1613 = 1L;
            (*l_1584) = (safe_mod_func_uint16_t_u_u((4UL >= (((p_11 , (l_1602[0][0][0] == &g_677)) & (l_1607 &= ((l_1605 = ((p_11 <= ((((l_1604 == ((*g_508) = (*g_508))) , 0xAD06L) , 0x43L) > (**g_471))) || p_11)) > l_1606))) , 4294967291UL)), 0x1CCBL));
            for (g_1387 = (-20); (g_1387 >= 26); g_1387 = safe_add_func_int64_t_s_s(g_1387, 8))
            { 
                uint8_t l_1614 = 0UL;
                for (g_127.f1 = (-7); (g_127.f1 == 1); g_127.f1 = safe_add_func_uint16_t_u_u(g_127.f1, 2))
                { 
                    if (p_11)
                        break;
                    l_1613 = l_1612;
                }
                ++l_1614;
                g_1617 = &g_471;
                return l_1614;
            }
        }
        for (g_127.f0.f1 = 0; (g_127.f0.f1 <= 2); g_127.f0.f1 += 1)
        { 
            uint64_t *l_1618 = &g_33.f1;
            int32_t l_1628 = (-4L);
            int64_t *l_1629 = &l_1592;
            int32_t *l_1632 = &g_355;
            int32_t l_1645 = 5L;
            int32_t l_1646[2];
            int8_t l_1654 = 1L;
            uint32_t l_1665 = 18446744073709551606UL;
            int i;
            for (i = 0; i < 2; i++)
                l_1646[i] = 1L;
            (*l_1460) = (l_1632 = func_45(l_1618, l_1619, (((***g_664) = (((safe_rshift_func_int8_t_s_u(((((*l_1629) = ((safe_lshift_func_uint8_t_u_s(((p_11 || (l_1606 | l_1624)) & (((l_1625 != (p_11 , l_1626)) <= 0L) , 0xFCL)), (**g_471))) < l_1628)) || g_301[1]) | l_1630), 3)) > l_1628) ^ l_1619)) < l_1619), l_1631));
            if (l_1606)
                continue;
            for (g_430 = 0; (g_430 == 24); g_430 = safe_add_func_uint8_t_u_u(g_430, 6))
            { 
                struct S0 l_1640 = {0x36A5B06DD2B6EF74LL,0x0BL,1UL};
                int8_t l_1643 = 1L;
                int32_t l_1644[5];
                int32_t l_1648[1][4][2];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1644[i] = 0xA9D99D57L;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1648[i][j][k] = 0L;
                    }
                }
                for (g_440 = 0; (g_440 < 47); ++g_440)
                { 
                    int8_t ****l_1641 = &g_1617;
                    int16_t *l_1642 = &g_831;
                    (*l_1632) ^= ((*l_1580) = ((safe_add_func_uint16_t_u_u(((~(((l_1640 , l_1641) != &g_1617) || 0L)) ^ (p_11 ^ (**g_471))), ((*l_1642) = (((p_11 , &l_1627) == (void*)0) != 255UL)))) , l_1643));
                }
                g_1656--;
            }
            (*l_1580) = ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((&g_350[1][0] != &p_11), 11)) || ((l_1665 && 0x3E8F5C97L) == ((((safe_rshift_func_int8_t_s_u(((*g_1004) != (void*)0), ((l_1668[4][4] , p_11) & 1L))) , (-1L)) != p_11) ^ 0xC6L))), p_11)) >= g_444);
        }
        if (p_11)
            break;
    }
    return (**g_285);
}



static struct S0  func_12(uint32_t  p_13, struct S0  p_14, int16_t  p_15, uint8_t  p_16)
{ 
    int64_t l_853[2][5];
    int32_t l_866 = 0x48D9BC8DL;
    int32_t l_873[2][3][4] = {{{0x3CEC6C5CL,5L,0x3CEC6C5CL,5L},{0x3CEC6C5CL,5L,0x3CEC6C5CL,5L},{0x3CEC6C5CL,5L,0x3CEC6C5CL,5L}},{{0x3CEC6C5CL,5L,0x3CEC6C5CL,5L},{0x3CEC6C5CL,5L,0x3CEC6C5CL,5L},{0x3CEC6C5CL,5L,0x3CEC6C5CL,5L}}};
    uint32_t l_876 = 0UL;
    uint64_t *l_885 = &g_445;
    int64_t l_917[2];
    int32_t *l_936 = (void*)0;
    union U1 *l_943 = &g_127;
    const uint16_t * const l_1036 = &g_33.f0.f2;
    const uint16_t * const *l_1035 = &l_1036;
    const uint16_t * const **l_1034 = &l_1035;
    const uint16_t * const ***l_1033[4];
    uint64_t l_1039 = 18446744073709551611UL;
    struct S0 l_1051 = {5L,0UL,0xBDB9L};
    uint8_t l_1085 = 0xDAL;
    uint32_t l_1093 = 0x8F45B692L;
    union U1 *l_1128[6][2][5] = {{{&g_33,&g_127,(void*)0,&g_127,&g_33},{(void*)0,&g_33,&g_33,&g_33,&g_33}},{{&g_129,&g_129,(void*)0,&g_33,&g_33},{&g_33,(void*)0,(void*)0,&g_33,&g_33}},{{&g_127,&g_33,&g_127,&g_127,&g_33},{&g_33,(void*)0,&g_33,&g_129,&g_129}},{{&g_33,&g_129,&g_33,&g_127,(void*)0},{&g_33,&g_33,&g_129,&g_33,&g_33}},{{&g_33,&g_127,&g_129,&g_33,&g_129},{&g_33,&g_33,&g_129,&g_33,&g_129}},{{&g_127,&g_33,&g_33,&g_127,&g_129},{&g_33,&g_33,&g_33,&g_33,&g_33}}};
    int16_t l_1130 = 1L;
    uint32_t l_1135[4] = {0x8E1E6D82L,0x8E1E6D82L,0x8E1E6D82L,0x8E1E6D82L};
    int32_t * const ** const l_1139 = (void*)0;
    int32_t * const ** const * const l_1138 = &l_1139;
    int8_t *l_1153[5][5][7] = {{{&g_278,&g_278,&g_278,&g_278,&g_280,&g_280,&g_278},{&g_280,&g_278,(void*)0,&g_278,&g_278,(void*)0,&g_280},{&g_278,&g_278,(void*)0,&g_278,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_280,&g_278,&g_280,&g_280,&g_278},{&g_280,&g_278,(void*)0,&g_280,&g_278,&g_280,&g_280}},{{&g_280,&g_278,&g_278,&g_278,&g_278,&g_278,&g_278},{(void*)0,&g_278,&g_280,&g_280,&g_280,&g_278,&g_278},{&g_278,&g_278,&g_278,(void*)0,&g_278,(void*)0,&g_280},{&g_278,(void*)0,&g_280,&g_280,(void*)0,&g_280,&g_278},{&g_278,&g_280,(void*)0,&g_278,&g_278,&g_280,(void*)0}},{{&g_280,&g_278,&g_278,&g_280,&g_278,&g_280,&g_280},{&g_278,&g_278,(void*)0,&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_280,&g_280,&g_278,&g_280,(void*)0,&g_280},{&g_280,&g_278,(void*)0,&g_278,&g_278,&g_278,(void*)0},{&g_278,&g_278,&g_278,&g_278,(void*)0,&g_278,&g_278}},{{&g_278,&g_280,&g_280,&g_278,&g_280,(void*)0,(void*)0},{&g_278,&g_278,(void*)0,&g_280,(void*)0,&g_280,&g_278},{(void*)0,&g_278,&g_278,&g_278,&g_278,&g_280,&g_278},{&g_280,&g_280,&g_280,&g_278,&g_280,&g_280,&g_278},{&g_280,&g_278,&g_278,&g_278,&g_278,&g_280,&g_280}},{{&g_278,&g_278,&g_278,&g_278,&g_278,(void*)0,(void*)0},{&g_278,&g_280,&g_280,&g_278,&g_278,&g_278,&g_278},{&g_280,&g_278,&g_280,&g_278,(void*)0,&g_280,&g_278},{&g_278,&g_278,(void*)0,&g_278,&g_278,&g_278,(void*)0},{&g_280,&g_280,&g_280,&g_278,&g_280,&g_280,&g_278}}};
    int8_t l_1163 = 0xB4L;
    uint16_t *l_1191 = &g_71;
    uint8_t l_1203 = 251UL;
    int64_t l_1216 = 0xEA94B411104ABFD7LL;
    int32_t l_1270 = 0xAF1E7D98L;
    int32_t l_1323[3][1][5] = {{{(-9L),0xCC6ABE4AL,(-9L),(-9L),0xCC6ABE4AL}},{{0xCC6ABE4AL,(-9L),(-9L),0xCC6ABE4AL,(-9L)}},{{0xCC6ABE4AL,0xCC6ABE4AL,0L,0xCC6ABE4AL,0xCC6ABE4AL}}};
    int32_t *l_1325 = &l_1270;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_853[i][j] = 0xAE9060097DC034DFLL;
    }
    for (i = 0; i < 2; i++)
        l_917[i] = (-9L);
    for (i = 0; i < 4; i++)
        l_1033[i] = &l_1034;
    for (g_127.f1 = 0; (g_127.f1 < 20); g_127.f1 = safe_add_func_uint16_t_u_u(g_127.f1, 5))
    { 
        int32_t *l_851 = &g_355;
        int64_t *l_852 = &g_443;
        int32_t l_867 = 1L;
        int32_t l_869 = 0xF6A132BFL;
        int32_t l_870 = 0x28470298L;
        int32_t l_872 = 0L;
        int32_t l_875 = (-1L);
        int16_t l_916 = 0x15D8L;
        int32_t l_923 = 0x94B2B8AFL;
        int32_t l_925[7] = {9L,9L,9L,9L,9L,9L,9L};
        uint8_t l_927 = 0xA9L;
        uint64_t **l_996 = (void*)0;
        uint16_t *** const l_1002 = (void*)0;
        uint16_t *** const *l_1001 = &l_1002;
        uint8_t **l_1009 = &g_388;
        uint32_t l_1012 = 0x49A447F7L;
        uint16_t l_1048[2];
        uint32_t **l_1094 = &g_403;
        struct S0 l_1145 = {0x3F07D260D518B8BDLL,0UL,65526UL};
        uint8_t l_1171 = 248UL;
        uint32_t * const *l_1252[5][1][3] = {{{&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107}}};
        uint32_t * const **l_1251 = &l_1252[3][0][1];
        uint64_t l_1271 = 0xB5FFEE66CC0794A9LL;
        int16_t l_1312 = 9L;
        int32_t *l_1321 = (void*)0;
        int32_t *l_1322 = &l_873[1][0][3];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1048[i] = 0x6164L;
        (*l_851) = 0x51E860DFL;
        if ((l_852 != l_852))
        { 
            int64_t l_865 = 0x65B82BAA4D6D1BAELL;
            int32_t l_868 = 0L;
            int32_t l_871[4][4] = {{3L,3L,0L,3L},{3L,(-1L),(-1L),3L},{(-1L),3L,(-1L),(-1L)},{3L,3L,0L,3L}};
            int32_t l_887 = (-1L);
            uint32_t l_893 = 0x79C53E9AL;
            int16_t l_938[4];
            uint8_t **l_971[7][2] = {{(void*)0,&g_388},{&g_388,&g_388},{&g_388,&g_388},{(void*)0,&g_388},{&g_388,&g_388},{(void*)0,&g_388},{&g_388,&g_388}};
            uint32_t ** const l_1066 = &g_107;
            uint16_t *l_1068 = &g_253;
            int32_t l_1091 = (-9L);
            int32_t l_1092 = 1L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_938[i] = 0xE344L;
            if (l_853[0][2])
            { 
                int32_t **l_854[7];
                int32_t ***l_855 = &g_178;
                struct S0 l_856 = {-9L,0x4EL,0xBBC0L};
                uint8_t *l_879 = (void*)0;
                uint8_t *l_880 = (void*)0;
                uint8_t *l_881 = &g_430;
                uint64_t *l_884 = &g_127.f1;
                int16_t *l_918 = (void*)0;
                int16_t *l_919 = &g_647[1];
                int8_t **l_920 = &g_472;
                int i;
                for (i = 0; i < 7; i++)
                    l_854[i] = &l_851;
                (*l_855) = l_854[5];
                l_865 &= ((l_856 , (**g_178)) , ((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((0xECL <= (safe_div_func_int64_t_s_s(g_350[1][0], (safe_rshift_func_int16_t_s_u((((*l_851) | p_14.f0) , p_15), (*l_851)))))) , l_853[0][3]) <= (*l_851)) || (-1L)), p_13)), p_14.f0)) , 9L));
                l_876++;
                if ((((*l_881) = l_871[0][0]) || (safe_lshift_func_int8_t_s_u((g_129.f0.f2 ^ ((((g_127.f1 | (p_15 = 0x6FA3L)) , l_884) != l_885) == ((~l_887) > p_14.f1))), l_868))))
                { 
                    int32_t **l_889 = (void*)0;
                    int32_t **l_890 = &g_888;
                    (*g_178) = (*g_178);
                    (***l_855) = (((*l_890) = (p_14.f0 , g_888)) != (void*)0);
                    if (l_853[1][3])
                        break;
                }
                else
                { 
                    int32_t l_891 = (-4L);
                    int32_t l_892 = 0xEF1D73A8L;
                    --l_893;
                }
                if ((((safe_mul_func_int16_t_s_s(((*l_919) &= (safe_sub_func_int16_t_s_s(((+(!((p_15 > ((safe_sub_func_int32_t_s_s((p_13 | (g_129.f0 , (safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(l_853[0][2], l_853[1][1])) >= ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-7L), 0)), 13)) || (((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((*g_128) , 5UL), 4)), p_16)) < p_14.f0) > p_15))) <= 6UL), 1L)))), (-1L))) , g_730)) != l_916))) , 1L), l_917[1]))), 65526UL)) <= (*l_851)) , (**g_178)))
                { 
                    int8_t ***l_921[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_921[i] = (void*)0;
                    l_871[3][1] = (**g_178);
                    if (p_15)
                        continue;
                    (***l_855) = (p_15 , p_13);
                    (**g_178) = 1L;
                    g_471 = l_920;
                }
                else
                { 
                    int16_t l_922 = (-2L);
                    int32_t l_924 = (-1L);
                    int32_t l_926[3][7][5] = {{{(-1L),7L,(-1L),8L,(-1L)},{(-1L),0L,0x820E6AB5L,0x820E6AB5L,0L},{2L,8L,1L,8L,2L},{0L,0x820E6AB5L,0x820E6AB5L,0L,(-1L)},{(-1L),8L,(-1L),7L,(-1L)},{0L,0L,(-7L),0x820E6AB5L,(-1L)},{2L,7L,1L,7L,2L}},{{(-1L),0x820E6AB5L,(-7L),0L,0L},{(-1L),7L,(-1L),8L,(-1L)},{(-1L),0L,0x820E6AB5L,0x820E6AB5L,0L},{2L,8L,1L,8L,2L},{0L,0x820E6AB5L,0x820E6AB5L,0L,(-1L)},{(-1L),8L,(-1L),7L,(-1L)},{0L,0L,(-7L),0x820E6AB5L,(-1L)}},{{2L,7L,1L,7L,2L},{(-1L),0x820E6AB5L,(-7L),0L,0L},{(-1L),7L,(-1L),8L,(-1L)},{(-1L),0L,0x820E6AB5L,0x820E6AB5L,0L},{2L,8L,1L,8L,2L},{0L,0x820E6AB5L,0x820E6AB5L,0L,(-1L)},{(-1L),8L,(-1L),7L,(-1L)}}};
                    int i, j, k;
                    (**l_855) = &l_868;
                    ++l_927;
                }
            }
            else
            { 
                uint32_t l_933[3][2] = {{3UL,3UL},{0xC9596891L,3UL},{3UL,0xC9596891L}};
                int32_t l_937 = (-1L);
                int32_t l_939[3][1];
                uint8_t *l_957 = &g_409;
                uint8_t ***l_965 = (void*)0;
                uint8_t **l_967 = &g_388;
                uint8_t ***l_966 = &l_967;
                uint8_t **l_969 = (void*)0;
                uint8_t ***l_968[5][6][2] = {{{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969}},{{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969}},{{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969}},{{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969}},{{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969},{&l_969,&l_969}}};
                uint16_t **l_987[4];
                uint16_t *** const l_1007[2] = {(void*)0,(void*)0};
                uint16_t *** const *l_1006[6][7] = {{(void*)0,(void*)0,&l_1007[0],&g_1004,&l_1007[0],(void*)0,(void*)0},{&l_1002,&l_1007[0],&l_1002,&l_1007[0],&l_1002,&l_1007[0],&l_1007[1]},{(void*)0,&g_1004,(void*)0,&l_1007[0],&l_1007[0],(void*)0,&g_1004},{&l_1007[1],&l_1007[1],&l_1002,&l_1002,&l_1002,&l_1007[0],&l_1002},{(void*)0,&l_1007[0],&l_1007[0],(void*)0,&g_1004,(void*)0,&l_1007[0]},{&l_1002,&l_1007[0],&l_1007[1],&l_1002,&l_1007[1],&l_1007[0],&l_1002}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_939[i][j] = 0L;
                }
                for (i = 0; i < 4; i++)
                    l_987[i] = &g_679;
                for (l_867 = 3; (l_867 >= (-1)); l_867 = safe_sub_func_int8_t_s_s(l_867, 6))
                { 
                    int32_t *l_932[3][1][6] = {{{&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1]}},{{&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1]}},{{&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1],&l_871[1][1]}}};
                    int i, j, k;
                    ++l_933[2][0];
                    l_936 = &l_873[1][1][0];
                    --g_940;
                    (*l_851) = (((&g_127 == l_943) <= ((++(*g_107)) > (safe_sub_func_uint64_t_u_u(l_933[2][0], ((void*)0 == &g_831))))) | (g_253 > p_14.f2));
                    return p_14;
                }
                if (((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((&g_459[0] == ((safe_div_func_int32_t_s_s(p_14.f0, (safe_add_func_uint8_t_u_u(((*l_957) = (!4294967295UL)), (safe_sub_func_int8_t_s_s(4L, ((((safe_add_func_uint8_t_u_u(((((((safe_mul_func_uint16_t_u_u(l_933[1][1], (!((g_970 = ((*l_966) = &g_388)) == (l_971[0][1] = (g_972 = l_971[0][1])))))) & l_939[0][0]) != 0L) ^ l_871[3][1]) | p_13) , 1UL), p_14.f1)) || g_940) & (-7L)) ^ (**g_471)))))))) , (void*)0)), (*l_851))), p_13)) >= 0x24FAL))
                { 
                    int32_t l_990 = 0xBC50F7B8L;
                    int16_t *l_991[7] = {&g_831,&l_938[1],&g_831,&g_831,&l_938[1],&g_831,&g_831};
                    uint64_t * const *l_997[6] = {(void*)0,(void*)0,&l_885,(void*)0,(void*)0,&l_885};
                    uint16_t *** const **l_1008[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1008[i][j] = &g_1003;
                    }
                    (*l_851) = ((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u((((((safe_rshift_func_uint8_t_u_s(p_16, 1)) > (~l_868)) , 0xC115L) > 0x43C9L) || (p_15 = (((((**g_471) = (safe_div_func_uint64_t_u_u((((void*)0 != l_987[0]) >= ((safe_sub_func_uint64_t_u_u((1UL & l_933[2][1]), p_16)) < (*g_472))), p_13))) != l_933[0][0]) || l_990) , g_79))))), 7)), p_13)), g_647[1])), 0x23648963864BE970LL)) == 0UL);
                    (*l_851) = (((((void*)0 == (*g_508)) , ((*l_957) &= 250UL)) , (safe_mul_func_uint16_t_u_u(65535UL, (0x54L == (l_996 == l_997[4]))))) , 0x39B958B6L);
                    if (l_990)
                        continue;
                    (*l_851) = ((safe_lshift_func_int16_t_s_u((p_13 , (safe_unary_minus_func_int16_t_s((l_1001 == (g_1003 = (l_1006[0][2] = g_1003)))))), p_14.f2)) || l_893);
                }
                else
                { 
                    uint64_t l_1021 = 0x65A38536D49531D9LL;
                    int32_t **l_1030[6][3] = {{&g_459[0],&g_459[0],&g_459[0]},{&g_459[0],&g_459[0],&g_459[0]},{&g_459[0],&g_459[0],&g_459[0]},{&g_459[0],&g_459[0],&g_459[0]},{&g_459[0],&g_459[0],&g_459[0]},{&g_459[0],&g_459[0],&g_459[0]}};
                    int i, j;
                    l_971[0][1] = l_1009;
                    (*l_851) = (safe_mod_func_uint16_t_u_u(l_1012, (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((0x88A18ED4FB717929LL <= (*l_851)) && (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(1UL, ((p_16 , (((*l_852) &= (l_1021 , ((++(**g_665)) | (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(p_14.f2, l_933[2][0])), 0xEDL)) && l_865), (*l_851)))))) != p_14.f1)) || 18446744073709551610UL))), g_398))) & g_129.f2), p_14.f0)), p_14.f0))));
                    g_459[0] = &l_873[1][1][1];
                }
                if (l_938[2])
                    break;
                (*l_851) = (l_866 = (safe_mul_func_uint16_t_u_u((((p_15 | ((void*)0 != l_1033[0])) > (safe_rshift_func_uint8_t_u_u((l_1039 , (((safe_unary_minus_func_int32_t_s((((g_1041 = &g_178) == (void*)0) && (safe_lshift_func_int16_t_s_u(((((*l_851) , 2L) >= l_887) ^ p_16), 2))))) < 0xCFE8L) & l_933[1][1])), 7))) >= (-1L)), l_937)));
            }
            if ((*l_851))
            { 
                int32_t *l_1047 = &l_867;
                for (g_430 = 29; (g_430 <= 36); g_430 = safe_add_func_uint32_t_u_u(g_430, 1))
                { 
                    l_1047 = (void*)0;
                    (*l_851) = l_1048[1];
                }
            }
            else
            { 
                int16_t *l_1055 = &g_831;
                int32_t l_1060 = 0xAC507FF9L;
                l_936 = &l_871[3][1];
                for (g_101 = 25; (g_101 < (-10)); g_101 = safe_sub_func_int8_t_s_s(g_101, 2))
                { 
                    int8_t ***l_1052 = &g_471;
                    (*l_1052) = (l_1051 , &g_472);
                }
                l_873[0][2][3] ^= (((*l_851) ^ (safe_div_func_uint8_t_u_u(((((-1L) != p_14.f0) <= (p_14.f0 | (((((*l_1055) &= (p_14.f0 != 0L)) | ((((***g_664) = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_444, (*l_936))), p_13)) == (-6L))) && (*l_936)) <= (*l_936))) , (-1L)) <= 1L))) , l_1060), l_887))) >= (*l_851));
            }
            for (g_303 = 0; (g_303 <= 1); g_303 += 1)
            { 
                uint64_t l_1061[5] = {0x06894CBBFF888932LL,0x06894CBBFF888932LL,0x06894CBBFF888932LL,0x06894CBBFF888932LL,0x06894CBBFF888932LL};
                int16_t l_1069 = 0xE10EL;
                int32_t *l_1070 = &l_925[5];
                int i;
                (*l_851) = 0x87502C3AL;
                if (p_16)
                    break;
                l_1061[0] ^= (-10L);
                (*l_1070) |= ((***g_284) && (((++(*l_885)) && l_1061[4]) != ((safe_rshift_func_uint16_t_u_u(((void*)0 == l_1066), ((~((*g_665) != (((*l_851) = (&g_677 != &l_1034)) , l_1068))) || 0x90D9C31AL))) && l_1069)));
            }
            l_936 = (void*)0;
            l_936 = &l_1092;
        }
        else
        { 
            int32_t l_1096 = 0x4F92C039L;
            union U1 **l_1144 = &l_1128[1][1][1];
            int8_t *l_1152 = &g_40;
            int32_t *l_1158 = &l_866;
            int32_t l_1214 = 0L;
            int32_t l_1217 = 1L;
            int32_t l_1222 = 1L;
            int32_t l_1223 = 9L;
            int32_t l_1224 = 0x689FAFF3L;
            int64_t l_1225 = 0x596CA8C0A30E57DALL;
            int32_t l_1226 = 0xE08F9F07L;
            int32_t l_1227[1][7];
            uint32_t l_1228 = 0UL;
            int16_t l_1300 = 0xBBAEL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1227[i][j] = 0x28144002L;
            }
            if (p_14.f1)
            { 
                uint32_t ***l_1095 = &g_402[0][0];
                int32_t *l_1103 = &l_870;
                uint32_t **l_1111 = (void*)0;
                int32_t *l_1134[1][6] = {{&g_355,&g_355,&g_355,&g_355,&g_355,&g_355}};
                int i, j;
                (*l_1095) = (l_1094 = l_1094);
                if (l_1096)
                    continue;
                for (g_440 = 0; (g_440 >= 41); g_440 = safe_add_func_int64_t_s_s(g_440, 7))
                { 
                    uint32_t **l_1109 = &g_107;
                    uint32_t ***l_1110[5] = {&g_776,&g_776,&g_776,&g_776,&g_776};
                    uint8_t *l_1114[6] = {&g_129.f0.f1,&g_129.f0.f1,&g_129.f0.f1,&g_129.f0.f1,&g_129.f0.f1,&g_129.f0.f1};
                    union U1 **l_1127 = &g_128;
                    int32_t l_1129[4] = {(-2L),(-2L),(-2L),(-2L)};
                    int16_t *l_1131 = &l_916;
                    int32_t *l_1132 = (void*)0;
                    int32_t *l_1133 = &g_112;
                    int i;
                    (*l_1103) = (safe_add_func_int64_t_s_s((l_1096 ^ ((void*)0 != l_1103)), (safe_lshift_func_int8_t_s_s(((!(((1UL != ((l_1111 = l_1109) != (*g_284))) | ((safe_add_func_uint64_t_u_u(0x848DBED5FB0ACA50LL, l_1096)) == l_1096)) <= 0x0C5DL)) && 1L), 6))));
                    l_873[0][2][0] |= (((((**g_471) , (((g_33.f0.f1 = (((void*)0 != &g_888) , (p_14.f1 &= ((((&p_14 != &p_14) , (*l_851)) ^ ((*l_1103) , 0x45L)) <= 7UL)))) , 0xC4D48D16F60805DBLL) || l_1096)) > g_127.f2) , p_14.f1) != 0x4419A2C9L);
                    l_867 |= ((((safe_lshift_func_int16_t_s_s(g_398, ((safe_mod_func_int64_t_s_s(((+((*g_472) = ((+(((((*l_851) , (safe_mod_func_int16_t_s_s(((((((*l_1131) ^= (safe_mul_func_uint8_t_u_u(((*l_1103) == (((**g_665) = (safe_mul_func_uint16_t_u_u(9UL, (l_1096 | ((p_15 <= ((*l_851) = ((((*l_1127) = &g_129) == l_1128[1][1][1]) != 18446744073709551614UL))) || l_1129[2]))))) < p_13)), l_1130))) , l_1096) != p_14.f0) , (void*)0) != (*g_471)), 0x0840L))) <= 0x55F35BC3AECF126BLL) != p_14.f0) , (*l_1103))) , (**g_471)))) , g_445), g_101)) && p_14.f0))) <= (*l_1103)) == p_16) >= p_15);
                    (*l_1133) ^= ((*l_1103) > (*l_851));
                }
                l_1135[3]--;
            }
            else
            { 
                for (g_112 = 0; (g_112 <= 1); g_112 += 1)
                { 
                    int32_t * const ** const *l_1141[2][7] = {{&l_1139,(void*)0,&l_1139,(void*)0,&l_1139,(void*)0,&l_1139},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t * const ** const **l_1140 = &l_1141[0][4];
                    int i, j;
                    if (p_16)
                        break;
                    (*l_1140) = l_1138;
                }
                (*l_851) &= (p_16 != (&g_128 != l_1144));
                return l_1145;
            }
            (*l_1158) |= (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((((((*l_1152) ^= (*g_472)) == (((p_13 , ((void*)0 != l_1153[2][1][6])) == (((safe_add_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((p_14.f0 ^ (p_15 & (((0x76422F3B06C237DALL ^ 0UL) || (*l_851)) == p_14.f0))), 9UL)) , g_301[1]), 0UL)) , (*l_851)) == (-5L))) < 1L)) , p_16) >= 250UL) <= 1UL) == p_14.f1), (*l_851))), (*l_851)));
            for (l_867 = 4; (l_867 != (-24)); l_867--)
            { 
                int64_t l_1164 = 0xC8AF9CBB5038D017LL;
                const int8_t *l_1174 = &l_1163;
                const int8_t **l_1175 = (void*)0;
                const int8_t **l_1176 = &l_1174;
                uint32_t l_1205 = 4294967293UL;
                int32_t l_1206 = 0x4B80EBC3L;
                int32_t l_1215 = 0x75F95917L;
                int32_t l_1218 = 4L;
                int32_t l_1219 = 0xC3483BAFL;
                int32_t l_1221[7] = {0xA804C516L,3L,3L,0xA804C516L,3L,3L,0xA804C516L};
                int64_t *l_1239 = &l_1216;
                int i;
                for (g_71 = 14; (g_71 >= 53); g_71 = safe_add_func_int16_t_s_s(g_71, 7))
                { 
                    if (p_13)
                        break;
                    if (l_1163)
                        break;
                    return l_1051;
                }
                if (l_1164)
                    continue;
                if ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((*l_1001) == (((safe_mul_func_int8_t_s_s(((**g_471) &= (l_1171 != (((safe_lshift_func_uint16_t_u_s((*g_666), 15)) < p_15) | (***g_664)))), (((*g_471) == ((*l_1176) = ((*g_128) , l_1174))) > g_81))) , p_14) , (*l_1001))), p_15)) , 1UL), 1)))
                { 
                    uint16_t *l_1204 = &l_1048[1];
                    int16_t *l_1207 = &g_730;
                    int32_t l_1212 = 9L;
                    (*l_851) = ((((*l_1207) = (((**g_665) = 0xCF5CL) ^ (((safe_lshift_func_int16_t_s_s(((((*g_128) , (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_mul_func_int64_t_s_s((((safe_div_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s((l_1191 == ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_14.f1, g_303)) | ((~((*l_852) = ((void*)0 != &g_127))) && 0xE3L)), (*l_1158))), p_14.f1)) , p_16) , p_15), p_13)) , l_1203), p_15)) , l_1204)), 0x0870C6E1896EB8F1LL)), l_1164)) , p_15), p_16)) || g_175[0][0][0]) | p_14.f2), 0L)) && 0x9BA8L) || 0xBA251A9D4DA8F151LL) & p_15), (**g_471))), 6))) | 0UL) ^ l_1205), 0)) && l_1206) , 65529UL))) ^ p_13) && l_1164);
                    (*l_851) = (safe_div_func_int64_t_s_s((safe_div_func_int16_t_s_s((p_14.f0 > (*g_472)), p_16)), l_1212));
                    (*l_1158) = p_14.f2;
                }
                else
                { 
                    int32_t *l_1213[4][2][4];
                    int16_t l_1220 = 0xAA19L;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_1213[i][j][k] = &l_925[5];
                        }
                    }
                    --l_1228;
                }
                if ((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((*l_851) == l_1221[4]), 0x2AL)) == ((*l_1152) = (safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((0xB76FE9E8L & ((0xA6021DC8374EDD98LL & (g_33.f0.f0 = ((*l_1239) = ((*l_852) |= (l_1221[5] == 0xBE18817DL))))) >= (**g_285))), 0xCFC00B10L)) <= l_1221[5]), p_14.f0)))), 0UL)))
                { 
                    uint64_t l_1240 = 0xE0AC03C3BE9C8F05LL;
                    (*l_851) = l_1240;
                }
                else
                { 
                    int32_t **l_1241 = (void*)0;
                    int32_t **l_1242 = &l_936;
                    const int8_t ***l_1246 = &l_1175;
                    const int8_t ****l_1245 = &l_1246;
                    (*l_1242) = (l_1158 = &l_875);
                    l_1245 = ((safe_rshift_func_uint16_t_u_s(l_1215, 14)) , l_1245);
                    (*l_1242) = &l_870;
                    if (p_15)
                        continue;
                }
            }
            for (l_1225 = (-30); (l_1225 <= 7); l_1225++)
            { 
                uint8_t * const l_1253 = &g_430;
                int32_t l_1264 = (-1L);
                int16_t *l_1265 = &g_831;
                int32_t l_1298 = 0xED4820BAL;
                int32_t l_1299 = (-2L);
                int64_t l_1302 = 1L;
                int32_t l_1303 = (-5L);
                int32_t l_1304 = 0xB9CA7C28L;
                int32_t l_1305 = 0L;
                int32_t l_1306[6] = {0x5259B747L,0x6AB59EE0L,0x5259B747L,0x5259B747L,0x6AB59EE0L,0x5259B747L};
                int i;
                if (((safe_mod_func_uint32_t_u_u((((void*)0 == l_1251) > ((*l_1009) != l_1253)), (safe_lshift_func_uint16_t_u_u(((-3L) != ((*l_1265) = ((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((p_14.f1 != (safe_div_func_int64_t_s_s(((0x85L >= l_1264) != p_14.f2), g_259[2][0][0]))), (*l_851))), 8L)) == (-10L)))), 15)))) > p_14.f1))
                { 
                    int32_t l_1266[1];
                    int32_t *l_1267 = &l_1266[0];
                    int32_t *l_1268 = (void*)0;
                    int32_t *l_1269[5][2][3] = {{{&l_1096,&l_1096,&l_1096},{&l_875,(void*)0,&l_875}},{{&l_1096,&l_1096,&l_1096},{&l_875,(void*)0,&l_875}},{{&l_1096,&l_1096,&l_1096},{&l_875,(void*)0,&l_875}},{{&l_1096,&l_1096,&l_1096},{&l_875,(void*)0,&l_875}},{{&l_1096,&l_1096,&l_1096},{&l_875,(void*)0,&l_875}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1266[i] = 0L;
                    l_1271--;
                    (*l_851) = 0x5DC78CCFL;
                    (*l_1158) = (*l_1158);
                }
                else
                { 
                    uint64_t l_1292 = 0xC9A3431E20236C59LL;
                    int32_t l_1293[5][1] = {{0xBDC8DC7CL},{(-8L)},{0xBDC8DC7CL},{(-8L)},{0xBDC8DC7CL}};
                    int i, j;
                    l_1293[4][0] |= (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(g_940, 18446744073709551614UL)), ((safe_mul_func_uint16_t_u_u(((((((~((safe_rshift_func_uint8_t_u_s(p_15, (safe_mul_func_uint16_t_u_u((((*l_851) ^ ((safe_unary_minus_func_uint64_t_u(0UL)) <= (p_16 > ((safe_div_func_uint64_t_u_u(((**g_471) ^ p_14.f2), g_355)) <= l_1292)))) > (**g_471)), 0UL)))) , 0x8FL)) & 65529UL) > 0x976FA96BL) <= p_16) ^ 0UL) <= 0xE49AL), (*l_1158))) <= (*l_851))));
                }
                for (g_112 = 0; (g_112 > (-7)); g_112--)
                { 
                    int32_t *l_1296 = &l_1217;
                    int32_t *l_1297[3];
                    uint32_t l_1307 = 0x40472998L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1297[i] = &l_1226;
                    if (p_15)
                        break;
                    l_1307--;
                }
                if (p_14.f2)
                    continue;
            }
        }
        g_1324 ^= (((((-7L) < ((((void*)0 == &g_402[0][0]) ^ (safe_lshift_func_int16_t_s_u(l_1312, 15))) != (0x27BC5289L ^ (((((*g_128) , ((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((*l_1322) = (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0xCBF6L, p_16)), g_129.f0.f1))) , 0xEDBEE90DL) , (***g_664)), l_1323[0][0][1])), 1L)) && p_15)) | 0x0E06L) | p_15) ^ p_14.f1)))) & (*g_107)) , l_1321) != (void*)0);
    }
    (*l_1325) = 5L;
    return p_14;
}



static int32_t  func_21(int16_t  p_22, int64_t  p_23, uint64_t  p_24, int32_t  p_25, int32_t  p_26)
{ 
    const struct S0 **l_532 = &g_392;
    union U1 * const l_539[2] = {&g_129,&g_129};
    int32_t l_545 = 0L;
    int32_t l_629[5][1][2];
    uint8_t l_645 = 1UL;
    uint16_t l_654 = 0UL;
    const int8_t *l_684 = &g_280;
    const int8_t **l_683 = &l_684;
    uint16_t **l_745 = &g_679;
    uint32_t **l_782 = &g_107;
    uint32_t ***l_791 = &g_776;
    const union U1 l_821[1] = {{{-1L,0UL,65535UL}}};
    struct S0 *l_840 = &g_129.f0;
    struct S0 **l_839 = &l_840;
    int32_t l_846[5][2][5] = {{{0L,0x5F49DA4CL,0x0E8A472EL,0x5F49DA4CL,0L},{6L,0x3AF42D75L,0x3E455860L,0x3AF42D75L,6L}},{{0L,0x5F49DA4CL,0x0E8A472EL,0x5F49DA4CL,0L},{6L,0x3AF42D75L,0x3E455860L,0x3AF42D75L,6L}},{{0L,0x5F49DA4CL,0x0E8A472EL,0x5F49DA4CL,0L},{6L,0x3AF42D75L,0x3E455860L,0x3AF42D75L,6L}},{{0L,0x5F49DA4CL,0x0E8A472EL,0x5F49DA4CL,0L},{6L,0x3AF42D75L,0x3E455860L,0x3AF42D75L,6L}},{{0L,0x5F49DA4CL,0x0E8A472EL,0x5F49DA4CL,0L},{6L,0x3AF42D75L,0x3E455860L,0x3AF42D75L,6L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_629[i][j][k] = 0x6D3BD476L;
        }
    }
    (*l_532) = g_392;
    return l_645;
}



static int16_t  func_27(union U1  p_28, int32_t  p_29, uint32_t  p_30, uint64_t  p_31, uint32_t  p_32)
{ 
    uint64_t *l_41 = &g_33.f1;
    uint64_t *l_42[1];
    const int32_t l_44 = 0xC369029EL;
    int32_t l_68[2][2] = {{0x1521F00BL,0x1521F00BL},{0x1521F00BL,0x1521F00BL}};
    int32_t *l_439[2][4] = {{&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101}};
    int8_t *l_470 = &g_40;
    int8_t **l_469[5] = {&l_470,&l_470,&l_470,&l_470,&l_470};
    int8_t **l_473[7][4] = {{&l_470,(void*)0,&l_470,&g_472},{&l_470,&g_472,&g_472,&l_470},{&g_472,&g_472,&g_472,&g_472},{&g_472,(void*)0,&g_472,&g_472},{&g_472,&g_472,&g_472,&g_472},{&l_470,(void*)0,&l_470,&g_472},{&l_470,&g_472,&g_472,&l_470}};
    int16_t l_482[2];
    uint32_t l_519 = 0x0415C53CL;
    uint32_t l_531 = 6UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_42[i] = &g_43;
    for (i = 0; i < 2; i++)
        l_482[i] = 0x1F85L;
    return l_531;
}



static uint8_t  func_35(uint64_t  p_36, const int32_t  p_37)
{ 
    return p_36;
}



static int32_t * func_45(uint64_t * p_46, uint32_t  p_47, uint64_t  p_48, uint16_t  p_49)
{ 
    int32_t l_69[3];
    int32_t l_82 = 0x501B3ADAL;
    int32_t *l_84[4] = {&l_69[0],&l_69[0],&l_69[0],&l_69[0]};
    const uint8_t l_115 = 0x0FL;
    union U1 *l_126 = &g_127;
    uint32_t **l_232 = (void*)0;
    uint16_t *l_243 = (void*)0;
    uint16_t ** const l_242 = &l_243;
    int32_t l_249[4][1][1];
    uint32_t *l_292 = &g_259[2][0][0];
    uint32_t **l_291[1];
    int8_t *l_295[4][1][7];
    const int8_t l_328 = 1L;
    const uint32_t * const l_376 = &g_259[2][0][0];
    int32_t *l_412 = &g_355;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_69[i] = 9L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_249[i][j][k] = 0x7D315D34L;
        }
    }
    for (i = 0; i < 1; i++)
        l_291[i] = &l_292;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
                l_295[i][j][k] = &g_40;
        }
    }
    for (g_33.f0.f1 = 0; (g_33.f0.f1 <= 2); g_33.f0.f1 += 1)
    { 
        uint16_t *l_70 = &g_71;
        int32_t *l_72 = &l_69[2];
        uint32_t *l_78 = &g_79;
        int32_t l_120 = (-8L);
        int32_t l_121 = 0xBD5DFF90L;
        uint8_t l_122 = 255UL;
        int i;
        (*l_72) = (((*l_70) = l_69[0]) < l_69[0]);
        if (((safe_add_func_int8_t_s_s(((((*l_78) = ((((((safe_sub_func_int8_t_s_s((((1L <= (safe_unary_minus_func_int64_t_s((((((*p_46) , (l_69[0] | (g_65 < ((((*l_72) && (&p_48 == &g_43)) || 4294967290UL) != p_48)))) , (void*)0) == (void*)0) <= 0x8E2CF014A1F699DALL)))) == p_49) <= g_40), l_69[2])) && g_33.f2) & (*p_46)) != p_48) , (*l_72)) | g_71)) >= 4294967286UL) ^ g_40), g_43)) | 0x7C767D996F049184LL))
        { 
            int32_t *l_80[4][6] = {{&g_81,(void*)0,&g_81,&g_81,(void*)0,&g_81},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,(void*)0,&g_81},{&g_81,(void*)0,&g_81,&g_81,&g_81,&g_81}};
            int i, j;
            l_82 = (l_69[2] |= g_33.f2);
        }
        else
        { 
            int32_t **l_83 = &l_72;
            l_84[0] = ((*l_83) = &g_81);
        }
        for (g_43 = 15; (g_43 == 53); ++g_43)
        { 
            uint32_t l_87 = 18446744073709551615UL;
            union U1 l_88 = {{5L,0x86L,0x50A3L}};
            int8_t *l_90 = &g_40;
            uint32_t **l_106 = &l_78;
            int32_t l_119[2][7] = {{0xD436FCA1L,0xD436FCA1L,0xD436FCA1L,0xD436FCA1L,0xD436FCA1L,0xD436FCA1L,0xD436FCA1L},{0x73237F32L,0x73237F32L,0x73237F32L,0x73237F32L,0x73237F32L,0x73237F32L,0x73237F32L}};
            union U1 *l_125 = (void*)0;
            int i, j;
            g_101 ^= (l_87 <= (((l_88 , &g_81) != (((*l_90) = (+0xE096L)) , l_78)) , (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((1L < ((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((l_88.f0.f2 != (*l_72)), l_88.f1)), g_65)) != (*l_72)) == 0UL) != g_33.f2)) & p_48), p_48)), 1L)), g_71))));
            if ((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((-8L), ((*l_70) = ((g_107 = ((*l_106) = &g_79)) != (void*)0)))) == (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((*l_72), (g_112 = l_87))), 0))), ((safe_unary_minus_func_uint32_t_u(((((safe_unary_minus_func_uint32_t_u(g_43)) & (((0xE0221BC3F5551473LL <= 0x83F91D89D7571D75LL) || l_115) > (-4L))) > 0x5B712F41F982FD6DLL) || (*l_72)))) , 0xA2L))))
            { 
                int32_t *l_118 = &l_82;
                for (g_71 = 0; (g_71 != 29); g_71++)
                { 
                    return &g_81;
                }
                l_122--;
            }
            else
            { 
                (*l_72) ^= g_40;
                (*l_72) &= (p_48 , (g_79 != 0UL));
                g_128 = (l_126 = l_125);
            }
        }
    }
    for (g_33.f1 = 0; (g_33.f1 != 35); g_33.f1++)
    { 
        if (p_47)
            break;
    }
    for (g_129.f1 = (-27); (g_129.f1 != 6); g_129.f1 = safe_add_func_int64_t_s_s(g_129.f1, 3))
    { 
        union U1 l_138 = {{0xCFD8255C92AD619FLL,0UL,0xEFA7L}};
        const int32_t *l_153 = &g_101;
        uint8_t l_160 = 255UL;
        int16_t l_200 = 0xB15DL;
        int32_t ***l_245[3][6] = {{&g_178,&g_178,&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178,&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178,&g_178,&g_178,&g_178}};
        uint32_t ***l_283 = (void*)0;
        uint16_t **l_327 = &l_243;
        int64_t *l_338 = &g_127.f0.f0;
        int64_t l_356 = 0x0B7610B732DA343ALL;
        int i, j;
    }
    return l_412;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_33.f0.f0, "g_33.f0.f0", print_hash_value);
    transparent_crc(g_33.f0.f1, "g_33.f0.f1", print_hash_value);
    transparent_crc(g_33.f0.f2, "g_33.f0.f2", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_127.f0.f0, "g_127.f0.f0", print_hash_value);
    transparent_crc(g_127.f0.f1, "g_127.f0.f1", print_hash_value);
    transparent_crc(g_127.f0.f2, "g_127.f0.f2", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_129.f0.f0, "g_129.f0.f0", print_hash_value);
    transparent_crc(g_129.f0.f1, "g_129.f0.f1", print_hash_value);
    transparent_crc(g_129.f0.f2, "g_129.f0.f2", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_175[i][j][k], "g_175[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_259[i][j][k], "g_259[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_301[i], "g_301[i]", print_hash_value);

    }
    transparent_crc(g_303, "g_303", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_350[i][j], "g_350[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_358[i], "g_358[i]", print_hash_value);

    }
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_647[i], "g_647[i]", print_hash_value);

    }
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_817[i], "g_817[i]", print_hash_value);

    }
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1324, "g_1324", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1387, "g_1387", print_hash_value);
    transparent_crc(g_1534, "g_1534", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1537[i], "g_1537[i]", print_hash_value);

    }
    transparent_crc(g_1656, "g_1656", print_hash_value);
    transparent_crc(g_1671.f0.f0, "g_1671.f0.f0", print_hash_value);
    transparent_crc(g_1671.f0.f1, "g_1671.f0.f1", print_hash_value);
    transparent_crc(g_1671.f0.f2, "g_1671.f0.f2", print_hash_value);
    transparent_crc(g_1671.f1, "g_1671.f1", print_hash_value);
    transparent_crc(g_1671.f2, "g_1671.f2", print_hash_value);
    transparent_crc(g_1771, "g_1771", print_hash_value);
    transparent_crc(g_2035, "g_2035", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2057[i], "g_2057[i]", print_hash_value);

    }
    transparent_crc(g_2091, "g_2091", print_hash_value);
    transparent_crc(g_2151, "g_2151", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2197[i], "g_2197[i]", print_hash_value);

    }
    transparent_crc(g_2352, "g_2352", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
