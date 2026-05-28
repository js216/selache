// SPDX-License-Identifier: MIT
// cctest_csmith_a26821e9.c --- cctest case csmith_a26821e9 (csmith seed 2724733417)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x16d2b753 */
/* @exp_ticks 0x3271 */

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

// Options:   -s 2724733417 -o /tmp/csmith_gen_tddkb_0t/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const int32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
   uint8_t  f1;
};


static int32_t g_2 = (-4L);
static uint32_t g_25 = 0xA275FF44L;
static struct S0 g_46 = {0UL,0xEF5B5069L};
static int8_t g_47[4] = {(-6L),(-6L),(-6L),(-6L)};
static uint8_t g_50 = 1UL;
static uint16_t g_61 = 7UL;
static union U2 g_71 = {0L};
static int8_t g_97[3] = {1L,1L,1L};
static struct S1 g_99 = {9UL};
static uint64_t g_127 = 0x4048DEE870590676LL;



static int32_t  func_1(void);
static int16_t  func_12(int32_t  p_13, struct S1  p_14, union U2  p_15, const struct S0  p_16, int16_t  p_17);
static struct S1  func_18(struct S1  p_19);
static int64_t  func_32(uint32_t  p_33, int32_t  p_34);




static int32_t  func_1(void)
{ 
    uint8_t l_6 = 0x74L;
    union U2 l_74[4][5][1] = {{{{-6L}},{{8L}},{{-6L}},{{8L}},{{-6L}}},{{{8L}},{{-6L}},{{8L}},{{-6L}},{{8L}}},{{{-6L}},{{8L}},{{-6L}},{{8L}},{{-6L}}},{{{8L}},{{-6L}},{{8L}},{{-6L}},{{8L}}}};
    const struct S0 l_75 = {0x52CFD912L,0xBEC372B4L};
    int32_t l_92[2];
    int32_t l_94 = (-10L);
    struct S1 l_100[5][3] = {{{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL}}};
    uint16_t l_106 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_92[i] = 1L;
    for (g_2 = 9; (g_2 < (-26)); g_2--)
    { 
        int32_t l_5 = 0xF47A6DEEL;
        if (l_5)
            break;
        if (g_2)
            continue;
    }
    if (l_6)
    { 
        int8_t l_7[2];
        int32_t l_8 = 9L;
        int i;
        for (i = 0; i < 2; i++)
            l_7[i] = (-1L);
        for (l_6 = 0; l_6 < 2; l_6 += 1)
        {
            l_7[l_6] = (-5L);
        }
        l_8 = l_7[1];
    }
    else
    { 
        uint8_t l_11 = 0x06L;
        for (l_6 = 0; (l_6 >= 9); ++l_6)
        { 
            struct S1 l_20[5] = {{0xEAB3CF81L},{0xEAB3CF81L},{0xEAB3CF81L},{0xEAB3CF81L},{0xEAB3CF81L}};
            uint8_t l_96[3];
            struct S1 l_98 = {0x31241CAEL};
            int i;
            for (i = 0; i < 3; i++)
                l_96[i] = 8UL;
            if ((l_11 & func_12((g_2 = g_2), func_18(l_20[2]), l_74[0][3][0], l_75, g_46.f0)))
            { 
                int32_t l_93[1][5] = {{0xFA660774L,0xFA660774L,0xFA660774L,0xFA660774L,0xFA660774L}};
                int32_t l_95 = 0xFBB4CDDCL;
                int i, j;
                g_97[2] |= ((((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(((g_71.f1 = (((l_20[2].f0 <= ((l_11 & (((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((l_95 = (l_94 = (g_47[1] = (+(safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((g_46 , (l_92[1] = (((((!l_20[2].f0) && l_6) >= (-7L)) ^ 0UL) >= 0xE02FL))), l_93[0][2])), l_11)))))) > 0x04L), g_25)) < 0x4A777CC8DDEC24A8LL), g_46.f1)) == l_6), 6)) <= 0L) > l_74[0][3][0].f1)) , (-6L))) | g_46.f1) ^ g_25)) <= g_50), g_2)) <= l_96[0]), g_50)) & l_93[0][2]) , l_11) , 1L);
                g_99 = l_98;
            }
            else
            { 
                if (l_20[2].f0)
                    break;
            }
            g_99 = func_18(l_100[4][2]);
            for (g_99.f0 = (-29); (g_99.f0 >= 32); g_99.f0 = safe_add_func_int64_t_s_s(g_99.f0, 8))
            { 
                int32_t l_103 = 0L;
                l_103 = g_99.f0;
            }
        }
    }
    l_94 = (((safe_lshift_func_uint8_t_u_u(l_106, 5)) & (l_92[1] = (safe_add_func_uint64_t_u_u(((((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((l_74[0][3][0] , l_94), 7)) , (safe_div_func_uint64_t_u_u(((g_71.f1 = (g_127 |= ((((safe_div_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((g_50--), (((((safe_rshift_func_int8_t_s_s(((g_99.f0 , g_61) | g_71.f1), l_75.f0)) == g_99.f0) || l_75.f1) > l_100[4][2].f0) && g_46.f1))), 0x8A36L)) > g_46.f0) <= g_71.f1), l_92[0])) , (-10L)) && 0xA3L) && l_74[0][3][0].f0))) || g_47[1]), l_74[0][3][0].f1))), 4)), g_25)) > g_46.f1) && l_74[0][3][0].f0) > l_92[1]), l_75.f0)))) >= g_47[3]);
    return l_75.f1;
}



static int16_t  func_12(int32_t  p_13, struct S1  p_14, union U2  p_15, const struct S0  p_16, int16_t  p_17)
{ 
    p_13 = (0x7B54C1CEL & p_17);
    return g_50;
}



static struct S1  func_18(struct S1  p_19)
{ 
    const int32_t l_39[4] = {0L,0L,0L,0L};
    uint16_t l_40 = 0x673EL;
    int32_t l_41 = (-7L);
    int32_t l_60[3][4] = {{5L,5L,5L,5L},{5L,5L,5L,5L},{5L,5L,5L,5L}};
    int i, j;
    l_60[1][1] ^= (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((g_25 ^ (g_25 & (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_19.f0, 11)), ((func_32((((((l_41 = (((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_39[0], g_25)), l_40)) < p_19.f0) && p_19.f0)) && 0x7EED050B7F45B6D4LL) , g_25) & (-1L)) | 1L), g_25) , p_19) , p_19.f0))), 5)))), 3)), l_39[1]));
    if (p_19.f0)
        goto lbl_62;
lbl_62:
    l_60[1][1] = (g_61 ^= g_46.f1);
    l_41 = (safe_mod_func_uint8_t_u_u((p_19.f0 ^ (safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((((g_71 , l_60[1][1]) | (safe_add_func_int8_t_s_s(g_50, p_19.f0))) >= l_60[1][0]) <= g_50) != 0UL), g_71.f1)), l_39[3])), p_19.f0))), p_19.f0));
    return p_19;
}



static int64_t  func_32(uint32_t  p_33, int32_t  p_34)
{ 
    uint32_t l_48 = 0x300B6311L;
    struct S1 l_57[1][4] = {{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}};
    struct S0 l_58 = {0x506F5737L,8L};
    int32_t l_59 = 1L;
    int i, j;
    for (p_33 = 11; (p_33 == 47); p_33 = safe_add_func_uint64_t_u_u(p_33, 6))
    { 
        int8_t l_49 = 0xC0L;
        struct S1 l_51[2][4][5] = {{{{0UL},{0UL},{0UL},{0UL},{0UL}},{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}}},{{{0UL},{0UL},{0UL},{0UL},{0UL}},{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}}}};
        int i, j, k;
        g_50 &= ((safe_rshift_func_int8_t_s_s((g_46 , ((0L != (l_49 = ((((g_47[1] |= g_46.f1) | (p_33 < l_48)) > l_48) > p_34))) | p_34)), p_33)) && 1UL);
        l_51[0][2][2] = l_51[1][2][2];
    }
    l_59 = (safe_rshift_func_int8_t_s_s(l_48, (p_34 <= (p_34 && (((((+((safe_mod_func_int32_t_s_s(((((l_57[0][0] , l_58) , g_46.f1) | 0xFA8EL) , l_58.f1), 0x3A04BB84L)) , g_46.f1)) && l_57[0][0].f0) && g_47[1]) ^ g_50) && l_58.f0)))));
    return g_46.f1;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);

    }
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
