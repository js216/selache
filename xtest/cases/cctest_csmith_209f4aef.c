// SPDX-License-Identifier: MIT
// cctest_csmith_209f4aef.c --- cctest case csmith_209f4aef (csmith seed 547310319)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb87e3aab */
/* @exp_ticks 0x86a0 */

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

// Options:   -s 547310319 -o /tmp/csmith_gen_c5okckn0/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int16_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   const int32_t  f1;
   const int8_t  f2;
   int64_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

struct S2 {
   uint64_t  f0;
   uint16_t  f1;
   int32_t  f2;
};

union U3 {
   int8_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   const uint8_t  f4;
};


static uint16_t g_5 = 0x25F5L;
static int32_t g_17 = 1L;
static union U3 g_43 = {-10L};
static struct S0 g_73[2] = {{0x9D9FC0A4L,0x35ED1F7FL,0xE9DA8425L,0xBBF2L,0x79L},{0x9D9FC0A4L,0x35ED1F7FL,0xE9DA8425L,0xBBF2L,0x79L}};
static int32_t g_78[3] = {0x5A8EECE7L,0x5A8EECE7L,0x5A8EECE7L};
static uint16_t g_80[2] = {0x82FEL,0x82FEL};
static struct S2 g_84 = {0x3684A2D252A4F93CLL,65530UL,-8L};
static int32_t *g_106 = (void*)0;
static int32_t **g_105 = &g_106;
static uint8_t g_139 = 0x41L;
static uint8_t g_148[7] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL};
static uint32_t g_173 = 1UL;
static int32_t **g_212[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t g_245 = 1L;
static int16_t g_262[4] = {0xE44FL,0xE44FL,0xE44FL,0xE44FL};
static struct S1 g_291[6][1][2] = {{{{{18446744073709551608UL,0xFF8343CEL,4294967291UL,0xA714L,1L},-2L,0x8EL,0xF7C797FE84C65A41LL,0x3B34144847109510LL},{{0xAE935578L,0L,0x88113450L,0L,0xCCL},0x93499C1FL,-1L,0xD99563AFE0E653EDLL,0xA7C4BBB492963F9ELL}}},{{{{0x132F4C1BL,0xE60F4A2CL,0x3EA8AC74L,0x170FL,0x0AL},0x02329175L,1L,-10L,0xB6214BE4D71671EELL},{{18446744073709551608UL,0xFF8343CEL,4294967291UL,0xA714L,1L},-2L,0x8EL,0xF7C797FE84C65A41LL,0x3B34144847109510LL}}},{{{{0xDA0C82F1L,0x67278714L,0x5A0B546CL,0x3810L,0L},7L,0xABL,0x9B819D66F257D210LL,0x7448582A176321C2LL},{{0xDA0C82F1L,0x67278714L,0x5A0B546CL,0x3810L,0L},7L,0xABL,0x9B819D66F257D210LL,0x7448582A176321C2LL}}},{{{{0xDA0C82F1L,0x67278714L,0x5A0B546CL,0x3810L,0L},7L,0xABL,0x9B819D66F257D210LL,0x7448582A176321C2LL},{{18446744073709551608UL,0xFF8343CEL,4294967291UL,0xA714L,1L},-2L,0x8EL,0xF7C797FE84C65A41LL,0x3B34144847109510LL}}},{{{{0x132F4C1BL,0xE60F4A2CL,0x3EA8AC74L,0x170FL,0x0AL},0x02329175L,1L,-10L,0xB6214BE4D71671EELL},{{0xAE935578L,0L,0x88113450L,0L,0xCCL},0x93499C1FL,-1L,0xD99563AFE0E653EDLL,0xA7C4BBB492963F9ELL}}},{{{{18446744073709551608UL,0xFF8343CEL,4294967291UL,0xA714L,1L},-2L,0x8EL,0xF7C797FE84C65A41LL,0x3B34144847109510LL},{{0xAE935578L,0L,0x88113450L,0L,0xCCL},0x93499C1FL,-1L,0xD99563AFE0E653EDLL,0xA7C4BBB492963F9ELL}}}};
static int16_t **g_388 = (void*)0;
static int16_t *g_390 = (void*)0;
static int16_t * const *g_389 = &g_390;
static uint64_t *g_410[7] = {&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0};
static uint64_t *g_413[6][2][1] = {{{&g_84.f0},{&g_84.f0}},{{&g_84.f0},{&g_84.f0}},{{&g_84.f0},{&g_84.f0}},{{&g_84.f0},{&g_84.f0}},{{&g_84.f0},{&g_84.f0}},{{&g_84.f0},{&g_84.f0}}};
static uint64_t *g_414 = (void*)0;
static struct S2 *g_433[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static struct S2 **g_432 = &g_433[0][5];
static struct S0 g_445 = {7UL,0x9AF17718L,0xA7CE775CL,-5L,0L};
static int8_t g_531 = 0x18L;
static uint16_t g_552[4][3] = {{0x8131L,0xA330L,0xA330L},{0xA330L,65535UL,0x025DL},{0x8131L,65535UL,0x8131L},{65535UL,0xA330L,0x025DL}};
static struct S0 *g_576 = &g_73[1];
static struct S0 **g_575 = &g_576;
static union U3 *g_598 = &g_43;
static union U3 * const *g_597[5] = {&g_598,&g_598,&g_598,&g_598,&g_598};
static uint8_t *g_608 = (void*)0;
static uint8_t **g_607 = &g_608;
static int8_t g_652 = (-8L);
static uint16_t *g_656[1] = {&g_552[2][1]};
static uint16_t **g_655[2][4] = {{&g_656[0],&g_656[0],&g_656[0],&g_656[0]},{&g_656[0],&g_656[0],&g_656[0],&g_656[0]}};
static uint16_t g_782[6][4] = {{65535UL,0x07DBL,0x2890L,1UL},{8UL,65535UL,8UL,1UL},{0x2890L,0x07DBL,65535UL,2UL},{3UL,7UL,0x07DBL,0x07DBL},{65535UL,65535UL,0x07DBL,8UL},{3UL,0x54E9L,65535UL,7UL}};
static uint16_t * const g_781 = &g_782[3][2];
static uint16_t * const *g_780 = &g_781;
static uint16_t g_785 = 0UL;
static uint16_t * const g_784 = &g_785;
static uint16_t * const *g_783[6][6][7] = {{{&g_781,&g_781,(void*)0,(void*)0,&g_784,&g_781,&g_781},{&g_781,&g_781,&g_784,&g_784,&g_784,&g_784,&g_781},{&g_784,&g_781,&g_784,&g_784,&g_781,&g_781,&g_781},{&g_781,&g_781,&g_781,&g_784,&g_781,&g_784,&g_784},{&g_781,(void*)0,&g_781,&g_784,&g_781,&g_784,&g_781},{&g_781,&g_784,&g_781,&g_784,&g_784,&g_784,&g_781}},{{&g_781,&g_781,&g_781,(void*)0,&g_784,&g_781,&g_784},{&g_781,&g_781,(void*)0,&g_781,&g_781,&g_781,&g_781},{&g_781,&g_784,&g_784,(void*)0,&g_784,&g_781,&g_781},{&g_784,&g_781,&g_784,(void*)0,&g_784,&g_784,(void*)0},{&g_781,&g_781,&g_781,&g_781,&g_781,&g_784,(void*)0},{&g_781,&g_784,&g_781,&g_781,&g_781,&g_781,&g_781}},{{&g_784,&g_781,&g_784,&g_784,&g_781,&g_784,(void*)0},{&g_784,&g_781,&g_784,&g_781,&g_784,&g_784,&g_784},{&g_781,&g_784,&g_784,&g_781,&g_784,&g_781,&g_784},{&g_784,(void*)0,&g_784,&g_784,&g_784,&g_781,&g_784},{&g_781,&g_781,&g_781,&g_781,&g_781,&g_781,&g_784},{(void*)0,&g_781,&g_781,&g_781,&g_784,&g_784,(void*)0}},{{(void*)0,&g_784,&g_781,&g_784,(void*)0,&g_781,&g_781},{&g_784,&g_781,&g_781,&g_784,&g_784,&g_781,&g_781},{&g_784,(void*)0,&g_784,&g_784,&g_781,(void*)0,&g_784},{&g_784,&g_784,&g_781,&g_784,&g_781,&g_784,(void*)0},{(void*)0,&g_781,&g_784,&g_784,&g_781,(void*)0,(void*)0},{(void*)0,&g_781,(void*)0,&g_784,&g_781,&g_784,&g_781}},{{&g_784,&g_781,&g_784,&g_781,&g_784,&g_781,&g_784},{&g_784,&g_781,&g_781,(void*)0,(void*)0,&g_781,&g_784},{&g_784,&g_781,&g_784,(void*)0,&g_784,&g_781,&g_784},{&g_784,&g_784,(void*)0,&g_784,(void*)0,&g_781,&g_784},{(void*)0,(void*)0,&g_781,&g_781,&g_781,&g_784,&g_784},{&g_781,&g_781,(void*)0,&g_781,&g_781,(void*)0,&g_784}},{{&g_781,&g_784,&g_784,(void*)0,(void*)0,&g_784,&g_784},{&g_781,&g_781,&g_781,&g_781,&g_784,(void*)0,&g_784},{&g_781,&g_781,&g_784,&g_781,&g_784,&g_781,&g_784},{&g_784,&g_781,(void*)0,&g_781,&g_781,&g_781,&g_784},{(void*)0,&g_784,&g_784,(void*)0,&g_781,(void*)0,&g_784},{(void*)0,(void*)0,&g_781,&g_781,&g_784,&g_784,&g_784}}};
static int32_t *g_794 = &g_445.f1;
static uint32_t *g_800[6] = {&g_291[1][0][0].f0.f2,&g_291[1][0][0].f0.f2,&g_291[1][0][0].f0.f2,&g_291[1][0][0].f0.f2,&g_291[1][0][0].f0.f2,&g_291[1][0][0].f0.f2};
static uint32_t **g_799 = &g_800[2];
static uint32_t g_807 = 0xB48AD77EL;
static uint32_t * const g_809 = (void*)0;
static uint32_t * const *g_808 = &g_809;
static int64_t *g_835[4] = {&g_291[1][0][0].f4,&g_291[1][0][0].f4,&g_291[1][0][0].f4,&g_291[1][0][0].f4};
static int64_t **g_834 = &g_835[0];
static int64_t ***g_833[6] = {&g_834,&g_834,&g_834,&g_834,&g_834,&g_834};
static int32_t g_916 = 0x765F2921L;
static uint32_t g_917 = 0UL;
static const struct S0 g_922 = {8UL,0x59822C4CL,0x433D46E5L,0x5D5BL,0L};
static const int16_t *g_985 = &g_262[2];
static const int16_t **g_984 = &g_985;
static struct S0 ***g_1049[4][5][3] = {{{&g_575,(void*)0,&g_575},{&g_575,(void*)0,&g_575},{&g_575,(void*)0,(void*)0},{&g_575,(void*)0,&g_575},{&g_575,(void*)0,&g_575}},{{&g_575,(void*)0,(void*)0},{&g_575,(void*)0,&g_575},{&g_575,(void*)0,&g_575},{&g_575,(void*)0,(void*)0},{&g_575,(void*)0,&g_575}},{{&g_575,(void*)0,&g_575},{&g_575,(void*)0,(void*)0},{&g_575,(void*)0,&g_575},{&g_575,(void*)0,&g_575},{&g_575,(void*)0,(void*)0}},{{&g_575,(void*)0,&g_575},{&g_575,(void*)0,&g_575},{(void*)0,(void*)0,(void*)0},{&g_575,(void*)0,&g_575},{&g_575,(void*)0,&g_575}}};
static struct S0 *** const *g_1048 = &g_1049[0][0][0];
static uint8_t g_1244 = 0x0CL;
static uint16_t g_1318 = 0x7804L;
static struct S0 **g_1335 = (void*)0;
static struct S2 g_1347 = {5UL,0UL,-8L};
static struct S2 g_1350 = {0UL,0x0D5DL,-1L};
static struct S2 g_1351 = {1UL,65535UL,0L};
static struct S2 g_1352 = {0x26551FE0CA9B09EELL,0xA20FL,0L};
static struct S2 g_1353 = {18446744073709551608UL,6UL,0L};
static struct S2 g_1354 = {0UL,9UL,1L};
static struct S2 g_1355 = {1UL,65531UL,0x7418DD19L};
static struct S2 g_1356 = {18446744073709551615UL,0x2F18L,0x39D42130L};
static struct S2 g_1357 = {0x4A571B7F837CF9D8LL,0xEEF4L,0x26CD34B6L};
static struct S2 g_1358 = {0xDDDCC45356841128LL,0UL,0xF73CC554L};
static struct S2 ***g_1392 = &g_432;
static struct S2 **** const g_1391 = &g_1392;
static struct S2 **** const * const g_1390[1] = {&g_1391};
static int32_t g_1397 = 0x52DDFF15L;
static uint8_t g_1441[4][2] = {{246UL,246UL},{246UL,246UL},{246UL,246UL},{246UL,246UL}};
static struct S1 g_1461[7] = {{{0x3046C470L,0x28C428A5L,0x8CFBF331L,0L,1L},0x029929D6L,0x89L,0L,0x8929ACD361621ADALL},{{0x3046C470L,0x28C428A5L,0x8CFBF331L,0L,1L},0x029929D6L,0x89L,0L,0x8929ACD361621ADALL},{{0x3046C470L,0x28C428A5L,0x8CFBF331L,0L,1L},0x029929D6L,0x89L,0L,0x8929ACD361621ADALL},{{0x3046C470L,0x28C428A5L,0x8CFBF331L,0L,1L},0x029929D6L,0x89L,0L,0x8929ACD361621ADALL},{{0x3046C470L,0x28C428A5L,0x8CFBF331L,0L,1L},0x029929D6L,0x89L,0L,0x8929ACD361621ADALL},{{0x3046C470L,0x28C428A5L,0x8CFBF331L,0L,1L},0x029929D6L,0x89L,0L,0x8929ACD361621ADALL},{{0x3046C470L,0x28C428A5L,0x8CFBF331L,0L,1L},0x029929D6L,0x89L,0L,0x8929ACD361621ADALL}};
static union U3 *g_1496[6][3][4] = {{{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43}},{{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43}},{{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43}},{{&g_43,(void*)0,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43},{&g_43,(void*)0,&g_43,&g_43}},{{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43}},{{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43},{&g_43,&g_43,&g_43,&g_43}}};
static int16_t g_1517[5] = {0xF922L,0xF922L,0xF922L,0xF922L,0xF922L};
static int32_t g_1518 = (-2L);



static uint16_t  func_1(void);
static int8_t  func_6(int32_t  p_7, int32_t  p_8);
static uint16_t  func_9(uint8_t  p_10, uint16_t  p_11);
static struct S2  func_19(int32_t * p_20, int64_t  p_21, struct S1  p_22);
static uint16_t  func_36(struct S2  p_37, int32_t * const  p_38, int32_t  p_39, uint32_t  p_40, union U3  p_41);
static int32_t * func_44(uint32_t  p_45, int32_t  p_46, int32_t  p_47, int32_t * p_48, int32_t * p_49);
static uint64_t  func_55(int32_t  p_56, int32_t * p_57, uint64_t  p_58, uint64_t  p_59);
static int32_t * func_60(int32_t ** p_61, struct S2  p_62, int32_t ** p_63, uint16_t  p_64);




static uint16_t  func_1(void)
{ 
    int32_t l_2 = 0x44D1878AL;
    struct S0 l_14 = {18446744073709551615UL,-6L,4294967295UL,0xDF94L,0x1FL};
    int32_t l_1443 = 0xB495546DL;
    int32_t l_1444 = (-6L);
    int32_t l_1447[5] = {5L,5L,5L,5L,5L};
    int8_t l_1448 = (-5L);
    uint32_t l_1450 = 0UL;
    int8_t l_1459[4][3][4] = {{{0xAEL,0xD0L,(-1L),0xD0L},{0x54L,0x73L,(-7L),(-1L)},{0xD0L,0x73L,0x73L,0xD0L}},{{0x73L,0xD0L,0x54L,0xAEL},{0x73L,0x54L,0x73L,(-7L)},{0xD0L,0xAEL,(-7L),(-7L)}},{{0x54L,0x54L,(-1L),0xAEL},{0xAEL,0xD0L,(-1L),0xD0L},{0x54L,0x73L,(-7L),(-1L)}},{{0xD0L,0x73L,0x73L,0xD0L},{0x73L,0xD0L,0x54L,0xAEL},{0x73L,0x54L,0x73L,(-7L)}}};
    int32_t **l_1462 = &g_106;
    int32_t *l_1463 = &l_2;
    const uint32_t l_1465 = 0x9C240A22L;
    struct S0 ** const l_1502[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint8_t ***l_1509 = &g_607;
    int i, j, k;
    l_1443 |= (l_2 & ((safe_mul_func_uint8_t_u_u(g_5, func_6((func_9(g_5, (g_5 > ((safe_rshift_func_int16_t_s_s(g_5, (l_2 >= (l_14 , l_14.f2)))) , g_5))) | l_14.f2), g_1441[1][0]))) || l_2));
    for (g_1347.f1 = 0; (g_1347.f1 <= 3); g_1347.f1 += 1)
    { 
        int32_t *l_1445 = &g_291[1][0][0].f0.f1;
        int32_t *l_1446[1][6] = {{&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2],&g_78[2]}};
        int32_t l_1449 = 0xF0E1D13DL;
        int32_t l_1460 = 0x9C573687L;
        const int32_t l_1501[3][3][7] = {{{0x393F40D2L,(-6L),0x344BED0DL,(-1L),5L,(-5L),(-1L)},{(-6L),5L,0L,7L,0x5EDF0AF5L,(-7L),0x5EDF0AF5L},{7L,(-1L),(-1L),7L,(-5L),0x393F40D2L,(-9L)}},{{0L,(-1L),0L,0x5EB52657L,(-1L),0xE31BA787L,(-7L)},{(-10L),(-1L),5L,1L,0xFB9421FCL,5L,0x344BED0DL},{(-5L),(-7L),0L,(-10L),0x5EB52657L,0x5EB52657L,(-10L)}},{{0L,0L,0L,0x625BDE50L,(-1L),0L,2L},{(-1L),(-5L),5L,(-1L),0x344BED0DL,(-6L),0x393F40D2L},{1L,2L,0L,0xFB9421FCL,0x5EB52657L,0L,1L}}};
        uint8_t ***l_1507 = (void*)0;
        int i, j, k;
        l_1450--;
        if (l_2)
            break;
        (*g_105) = l_1463;
        for (g_84.f0 = 0; (g_84.f0 <= 3); g_84.f0 += 1)
        { 
            uint32_t l_1472 = 0x8277DF3FL;
            int32_t l_1519[3][5][3] = {{{(-7L),(-7L),(-7L)},{0x13E6B558L,7L,0x13E6B558L},{(-7L),(-7L),(-7L)},{0x13E6B558L,7L,0x13E6B558L},{(-7L),(-7L),(-7L)}},{{0x13E6B558L,7L,0x13E6B558L},{(-7L),(-7L),(-7L)},{0x13E6B558L,7L,0x13E6B558L},{(-7L),(-7L),(-7L)},{0x13E6B558L,7L,0x13E6B558L}},{{(-7L),(-7L),(-7L)},{0x13E6B558L,7L,0x13E6B558L},{(-7L),(-7L),(-7L)},{0x13E6B558L,7L,0x13E6B558L},{(-7L),(-7L),(-7L)}}};
            int i, j, k;
            for (g_1355.f0 = 1; (g_1355.f0 <= 5); g_1355.f0 += 1)
            { 
                int8_t l_1464 = 0x10L;
                uint64_t **l_1466 = &g_414;
                (**l_1462) = (l_1464 < (**g_834));
                if (l_1465)
                    break;
                for (l_2 = 3; (l_2 >= 0); l_2 -= 1)
                { 
                    uint64_t ***l_1467 = &l_1466;
                    (*l_1467) = l_1466;
                }
            }
            for (g_1351.f0 = 0; (g_1351.f0 <= 5); g_1351.f0 += 1)
            { 
                int32_t l_1469[2][4] = {{0x2F258C36L,0x2F258C36L,0x2F258C36L,0x2F258C36L},{0x2F258C36L,0x2F258C36L,0x2F258C36L,0x2F258C36L}};
                int32_t l_1497[2];
                uint8_t ****l_1508 = &l_1507;
                uint64_t *l_1510 = &g_1347.f0;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1497[i] = (-5L);
                for (l_1444 = 3; (l_1444 >= 0); l_1444 -= 1)
                { 
                    int i;
                    (*g_105) = g_800[(g_1347.f1 + 1)];
                }
                if (((**l_1462) = g_262[g_1347.f1]))
                { 
                    int64_t l_1468 = 0L;
                    int32_t l_1470 = 0L;
                    int32_t l_1471[1];
                    int16_t **l_1479 = &g_390;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1471[i] = 0xB654C69EL;
                    ++l_1472;
                    l_1471[0] |= (safe_div_func_int16_t_s_s((*g_985), (safe_sub_func_uint16_t_u_u(((0xFF0375A774F6A3ADLL | ((void*)0 == l_1479)) | l_1469[1][2]), (safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((((safe_sub_func_int32_t_s_s(((*l_1463) & (safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_1496[0][0][0] != (void*)0), (**g_984))), (**g_780))), l_1472)), (*l_1445)))), 0x4C7DDB89L)) || 0xBE20C89AL) != (*l_1445)) && g_1244), l_1497[1])), 1L)) | l_1468), 1L))))));
                    (**g_105) |= 3L;
                    l_1469[1][1] |= l_1472;
                }
                else
                { 
                    struct S0 ***l_1503[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    struct S0 ***l_1504 = &g_1335;
                    int i, j;
                    (*g_794) ^= (**g_105);
                    (*l_1504) = ((safe_sub_func_int8_t_s_s((!l_1501[0][0][5]), 0x8BL)) , l_1502[0]);
                }
                (**l_1462) = (safe_mul_func_int16_t_s_s((*l_1463), (((*l_1510) = (((*l_1508) = l_1507) != l_1509)) >= (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0x3022L, ((*g_598) , ((**g_780) = ((*l_1463) > (g_1517[1] = (*l_1463))))))), l_1469[1][2])), 1L)))));
                if ((**l_1462))
                    break;
            }
            for (g_531 = 0; (g_531 <= 3); g_531 += 1)
            { 
                uint32_t l_1520 = 0xA02E4B60L;
                int32_t l_1523 = 0xD58DC323L;
                for (g_1244 = 0; (g_1244 <= 3); g_1244 += 1)
                { 
                    uint32_t l_1524 = 0xF2021590L;
                    l_1520++;
                    l_1524--;
                    (*l_1445) ^= (*g_106);
                }
                if (l_1519[2][0][0])
                    break;
            }
        }
    }
    return (*g_784);
}



static int8_t  func_6(int32_t  p_7, int32_t  p_8)
{ 
    uint32_t l_1442 = 1UL;
    return l_1442;
}



static uint16_t  func_9(uint8_t  p_10, uint16_t  p_11)
{ 
    int32_t l_15[5][2] = {{0x790660D6L,0x790660D6L},{0x790660D6L,0x790660D6L},{0x790660D6L,0x790660D6L},{0x790660D6L,0x790660D6L},{0x790660D6L,0x790660D6L}};
    int32_t l_18[1][1];
    struct S1 l_23 = {{18446744073709551610UL,0x50BA4309L,4294967295UL,-8L,0x7DL},7L,-1L,0x1CA7BC41BBBBFEFALL,1L};
    uint32_t l_1173[7] = {0xAA96EC6FL,0xAA96EC6FL,0xAA96EC6FL,0xAA96EC6FL,0xAA96EC6FL,0xAA96EC6FL,0xAA96EC6FL};
    const struct S0 *l_1206 = &g_445;
    const struct S0 **l_1213 = &l_1206;
    const struct S0 ***l_1212[1];
    uint64_t *l_1216 = &g_84.f0;
    int16_t l_1224 = (-1L);
    struct S2 ** const *l_1260 = &g_432;
    int32_t *l_1277[7][4] = {{(void*)0,(void*)0,&g_17,(void*)0},{&g_291[1][0][0].f0.f1,&g_73[1].f1,&g_291[1][0][0].f0.f1,&g_17},{&g_17,&g_73[1].f1,&g_73[1].f1,(void*)0},{&g_73[1].f1,(void*)0,(void*)0,&g_73[1].f1},{&g_291[1][0][0].f0.f1,(void*)0,(void*)0,&g_17},{&g_73[1].f1,&g_17,&g_73[1].f1,&g_17},{&g_17,(void*)0,&g_291[1][0][0].f0.f1,&g_17}};
    int16_t l_1308 = 0L;
    uint64_t l_1309 = 1UL;
    uint16_t ***l_1326 = &g_655[0][0];
    uint32_t **l_1380 = (void*)0;
    union U3 **l_1395[2];
    union U3 ***l_1394 = &l_1395[0];
    union U3 *** const *l_1393 = &l_1394;
    uint32_t l_1399 = 0x8B6DC105L;
    const int64_t *l_1417 = &l_23.f4;
    const int64_t ** const l_1416 = &l_1417;
    struct S2 l_1430[4][5] = {{{5UL,1UL,7L},{0UL,0UL,0x262F12BDL},{0x1FEF2DF1D270DA8ALL,0x756CL,0x2315AE08L},{0UL,0UL,0x262F12BDL},{5UL,1UL,7L}},{{0x37FCF5A2C74EEE2ALL,0x8CC4L,0xE51DC648L},{0UL,0UL,0x262F12BDL},{0x10976C7D6ED9A7D4LL,0x82D7L,0xDA39DCE3L},{5UL,1UL,7L},{0x10976C7D6ED9A7D4LL,0x82D7L,0xDA39DCE3L}},{{0x10976C7D6ED9A7D4LL,0x82D7L,0xDA39DCE3L},{0x10976C7D6ED9A7D4LL,0x82D7L,0xDA39DCE3L},{0x1FEF2DF1D270DA8ALL,0x756CL,0x2315AE08L},{5UL,1UL,7L},{0x8F8E290EBE5F267FLL,65532UL,0x996A03A3L}},{{0UL,0UL,0x262F12BDL},{0x37FCF5A2C74EEE2ALL,0x8CC4L,0xE51DC648L},{0x37FCF5A2C74EEE2ALL,0x8CC4L,0xE51DC648L},{0UL,0UL,0x262F12BDL},{0x10976C7D6ED9A7D4LL,0x82D7L,0xDA39DCE3L}}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_18[i][j] = 0xE6D54EC7L;
    }
    for (i = 0; i < 1; i++)
        l_1212[i] = &l_1213;
    for (i = 0; i < 2; i++)
        l_1395[i] = &g_598;
    for (p_10 = 0; (p_10 <= 1); p_10 += 1)
    { 
        struct S2 *l_1153 = (void*)0;
        struct S2 *l_1154 = &g_84;
        int32_t l_1170 = 0xE759E798L;
        int16_t **l_1201 = &g_390;
        struct S0 ****l_1231[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{&g_1049[0][0][0],&g_1049[3][1][1],(void*)0,&g_1049[0][0][0]},{(void*)0,&g_1049[3][0][1],&g_1049[1][3][0],&g_1049[3][0][1]},{&g_1049[3][0][1],(void*)0,&g_1049[0][0][0],&g_1049[3][0][1]},{&g_1049[0][0][0],&g_1049[3][0][1],&g_1049[0][0][0],&g_1049[0][0][0]},{&g_1049[3][1][1],&g_1049[3][1][1],&g_1049[1][3][0],(void*)0}};
        int32_t l_1239 = 0x06D85D6CL;
        int32_t l_1240 = 9L;
        int32_t l_1241 = (-4L);
        int32_t l_1242 = 3L;
        uint32_t l_1276 = 0xA55461D0L;
        uint8_t l_1296 = 1UL;
        int32_t l_1301[3];
        int32_t l_1302 = 0xC56A46A5L;
        int64_t l_1303[1][6] = {{1L,1L,1L,1L,1L,1L}};
        uint8_t l_1304 = 0x27L;
        uint16_t ***l_1323 = &g_655[1][3];
        struct S2 * const l_1349[5][6] = {{&g_1353,&g_1350,&g_1350,&g_1353,&g_1350,&g_1350},{&g_1353,&g_1350,&g_1350,&g_1353,&g_1350,&g_1350},{&g_1353,&g_1350,&g_1350,&g_1353,&g_1350,&g_1350},{&g_1353,&g_1350,&g_1350,&g_1353,&g_1350,&g_1350},{&g_1353,&g_1350,&g_1350,&g_1353,&g_1350,&g_1350}};
        struct S2 * const *l_1348[4][5][4] = {{{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]}},{{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]}},{{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]}},{{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]},{&l_1349[0][4],&l_1349[0][4],&l_1349[0][4],&l_1349[0][4]}}};
        uint16_t **l_1360[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t **l_1361 = &g_656[0];
        uint64_t l_1367 = 0x52765B293C552D65LL;
        uint32_t l_1402 = 0x31276B4CL;
        int32_t ***l_1427 = &g_105;
        int32_t **l_1431 = &l_1277[3][0];
        union U3 *l_1438 = &g_43;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1301[i] = 0xAB77B6CEL;
        for (p_11 = 0; (p_11 <= 1); p_11 += 1)
        { 
            int32_t *l_16[5] = {&g_17,&g_17,&g_17,&g_17,&g_17};
            int i;
            l_18[0][0] &= g_5;
        }
        if (p_11)
            continue;
        (*l_1154) = func_19(&l_18[0][0], g_17, (p_11 , l_23));
        if (((safe_mul_func_uint8_t_u_u(p_10, (&l_18[0][0] != ((*g_105) = &l_18[0][0])))) && (safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((((**g_834) &= (!(l_1170 < ((safe_lshift_func_int16_t_s_s(l_23.f0.f2, 6)) ^ l_1173[6])))) < ((((((safe_div_func_int64_t_s_s(0x1E3577CEEBCD2403LL, p_10)) , p_11) >= l_23.f2) ^ p_10) != p_10) == 1L)) & (-3L)) | (*g_985)), p_10)), 65531UL)) < l_23.f0.f4), p_11)), p_11)), 0xF8L)) && l_1170), l_1170))))
        { 
            uint16_t l_1189 = 0x2F9FL;
            uint64_t *l_1215 = &g_84.f0;
            int32_t l_1223 = 4L;
            if (((((**g_105) ^= 0xC28354D9L) <= ((((l_23.f2 , (safe_rshift_func_int8_t_s_u(g_291[1][0][0].f1, 2))) && (g_291[1][0][0] , (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(255UL, g_922.f2)), 0xD71C042F532F0A2ALL)))) || 0xDAF5E92964A6C237LL) == (**g_799))) & l_1170))
            { 
                int8_t l_1188[7][4][1] = {{{0x07L},{0x5CL},{0xA3L},{0x73L}},{{0x46L},{0x98L},{(-4L)},{0x98L}},{{0x46L},{0x73L},{0xA3L},{0x5CL}},{{0x07L},{1L},{0x07L},{0x5CL}},{{0xA3L},{0x73L},{0x46L},{0x98L}},{{(-4L)},{0x98L},{0x46L},{0x73L}},{{0xA3L},{0x5CL},{0x07L},{1L}}};
                struct S1 l_1194 = {{0x6BA2502EL,0x3BAB4F39L,0x77FCC4C4L,9L,0x1EL},0xB530C658L,-10L,-1L,0xAAB00EC36CECE696LL};
                struct S2 ***l_1196 = (void*)0;
                struct S2 ****l_1195[3];
                struct S0 *l_1207 = &g_445;
                int32_t l_1218 = 1L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1195[i] = &l_1196;
                if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_23.f1 , (((safe_lshift_func_uint8_t_u_s(p_10, l_1188[0][1][0])) && l_1189) , (safe_mod_func_int16_t_s_s(l_1188[0][1][0], ((((((safe_lshift_func_uint16_t_u_u(((l_1194 , l_1189) >= l_1189), l_1170)) != p_11) != p_10) || p_10) != p_10) || 0xD10FE722L))))), 65535UL)), 0UL)))
                { 
                    struct S2 *****l_1197 = &l_1195[2];
                    int16_t ***l_1200[6][2] = {{&g_388,&g_388},{&g_388,&g_388},{&g_388,&g_388},{&g_388,&g_388},{&g_388,&g_388},{&g_388,&g_388}};
                    int i, j;
                    (*l_1197) = l_1195[0];
                    (*g_106) |= ((((((safe_div_func_uint64_t_u_u(((l_1201 = &g_390) == &g_985), 0xE20A74549B52C871LL)) == (safe_lshift_func_uint8_t_u_s((l_1170 ^= l_1194.f0.f4), 2))) ^ 0x6566F664L) , ((safe_rshift_func_uint8_t_u_u((l_1194.f0.f4 < (l_1206 != l_1207)), l_1188[5][2][0])) , 0L)) & p_11) > 0x39CD13CBL);
                }
                else
                { 
                    uint64_t **l_1214[7] = {&g_413[2][1][0],&g_413[2][1][0],&g_413[2][1][0],&g_413[2][1][0],&g_413[2][1][0],&g_413[2][1][0],&g_413[2][1][0]};
                    int32_t l_1217 = 0x6DD2E860L;
                    struct S2 ***l_1221[2][1];
                    int8_t *l_1222 = &g_73[1].f4;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1221[i][j] = &g_432;
                    }
                    l_1218 |= (safe_rshift_func_int8_t_s_u(0xF7L, (((safe_add_func_uint64_t_u_u((((*g_1048) != l_1212[0]) || (p_11 & (-5L))), ((((l_1215 = g_413[1][1][0]) != l_1216) || p_11) , l_1217))) >= g_922.f4) ^ 0xE96402AF90D09114LL)));
                    l_1223 |= (((*l_1222) = ((-10L) ^ (safe_lshift_func_int8_t_s_s((&g_432 == (((void*)0 != &l_1213) , l_1221[1][0])), 3)))) == ((p_11 <= (l_1189 > l_1217)) == (-1L)));
                }
            }
            else
            { 
                return l_1224;
            }
        }
        else
        { 
            struct S1 l_1226 = {{8UL,0x22F75413L,0UL,0x62CEL,-1L},-4L,0x8AL,1L,0xDC4C4ECA8BED2C9DLL};
            int32_t l_1236 = (-2L);
            int32_t l_1237 = 0x8486641CL;
            int32_t l_1238[2];
            const union U3 *l_1257 = &g_43;
            const union U3 **l_1256 = &l_1257;
            const union U3 ***l_1255 = &l_1256;
            int i;
            for (i = 0; i < 2; i++)
                l_1238[i] = 0L;
            for (l_23.f3 = 1; (l_23.f3 >= 0); l_23.f3 -= 1)
            { 
                int8_t l_1232 = 0x60L;
                int32_t l_1243 = (-1L);
                struct S2 ***l_1259 = (void*)0;
                struct S2 ****l_1258 = &l_1259;
                if (p_10)
                { 
                    int16_t *l_1225 = &l_1224;
                    l_1232 |= ((((*l_1225) = p_10) , (l_1226 , ((0x396A3EA2B8B89B12LL <= ((**g_834) = 1L)) | (safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((void*)0 == l_1231[3][0]), 7)) >= (0x91L && 0x83L)), 65535UL))))) , p_10);
                    return p_10;
                }
                else
                { 
                    int32_t *l_1233 = &l_18[0][0];
                    int32_t *l_1234 = &g_78[2];
                    int32_t *l_1235[4][5][2] = {{{&g_78[2],&g_291[1][0][0].f0.f1},{&l_18[0][0],&g_445.f1},{&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1},{&g_78[2],&g_291[1][0][0].f0.f1},{&g_291[1][0][0].f0.f1,&g_445.f1}},{{&l_18[0][0],&g_291[1][0][0].f0.f1},{&g_78[2],&l_18[0][0]},{&g_291[1][0][0].f0.f1,&g_445.f1},{&g_291[1][0][0].f0.f1,&l_18[0][0]},{&g_78[2],&g_291[1][0][0].f0.f1}},{{&l_18[0][0],&g_445.f1},{&g_78[2],&g_78[2]},{&g_84.f2,&g_78[2]},{&g_78[2],&g_78[0]},{&g_445.f1,&g_78[1]}},{{&g_84.f2,&g_445.f1},{&g_78[1],&g_78[0]},{&g_78[1],&g_445.f1},{&g_84.f2,&g_78[1]},{&g_445.f1,&g_78[0]}}};
                    int i, j, k;
                    if ((*g_106))
                        break;
                    if (p_10)
                        break;
                    if (l_23.f0.f2)
                        break;
                    g_1244--;
                }
                if (((l_1224 != (((safe_sub_func_int32_t_s_s(((*g_106) = (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_10, ((*g_781) = (safe_mul_func_int8_t_s_s((((void*)0 != l_1255) | l_1232), (((*l_1258) = &g_432) != l_1260)))))), p_10))), l_15[0][1])) <= 3L) || l_1232)) == l_1232))
                { 
                    if (p_10)
                        break;
                    (*g_106) = l_1226.f1;
                    return p_10;
                }
                else
                { 
                    uint32_t l_1261 = 18446744073709551615UL;
                    return l_1261;
                }
            }
            for (l_1226.f0.f3 = 1; (l_1226.f0.f3 >= 0); l_1226.f0.f3 -= 1)
            { 
                int16_t l_1266 = (-8L);
                for (g_139 = 0; (g_139 <= 1); g_139 += 1)
                { 
                    int8_t l_1275[5][5][2] = {{{8L,8L},{0xB5L,8L},{8L,(-1L)},{0x85L,1L},{0xB5L,0x85L}},{{1L,(-1L)},{1L,0x85L},{0xB5L,1L},{0x85L,(-1L)},{8L,8L}},{{0xB5L,8L},{8L,(-1L)},{0x85L,1L},{0xB5L,0x85L},{1L,(-1L)}},{{1L,0x85L},{0xB5L,1L},{0x85L,(-1L)},{8L,8L},{0xB5L,8L}},{{8L,(-1L)},{0x85L,1L},{0xB5L,0x85L},{1L,(-1L)},{1L,0x85L}}};
                    uint8_t *l_1294[4][3] = {{&g_148[3],&g_148[3],&g_148[3]},{(void*)0,(void*)0,(void*)0},{&g_148[3],&g_148[3],&g_148[3]},{(void*)0,(void*)0,(void*)0}};
                    int32_t *l_1295 = &g_17;
                    const uint16_t *l_1300 = &g_552[1][2];
                    const uint16_t **l_1299 = &l_1300;
                    int i, j, k;
                    (*l_1154) = func_19((g_84.f1 , (*g_105)), l_1226.f0.f4, l_1226);
                }
                if ((**g_105))
                    break;
            }
            l_1304++;
            for (g_917 = 0; (g_917 <= 1); g_917 += 1)
            { 
                int32_t *l_1307 = &l_1240;
                (*g_105) = l_1307;
            }
        }
        ++l_1309;
        for (g_445.f3 = 0; (g_445.f3 <= 1); g_445.f3 += 1)
        { 
            uint64_t *l_1316[1];
            int32_t l_1317[7][7] = {{0x7C7273EAL,1L,1L,1L,1L,0x7C7273EAL,1L},{0L,0x7C7273EAL,0x7C7273EAL,0L,1L,0L,0x7C7273EAL},{(-1L),(-1L),0x7C7273EAL,1L,0x7C7273EAL,(-1L),(-1L)},{(-1L),0x7C7273EAL,1L,0x7C7273EAL,(-1L),(-1L),0x7C7273EAL},{0L,1L,0L,0x7C7273EAL,0x7C7273EAL,0L,1L},{0x7C7273EAL,1L,1L,1L,1L,0x7C7273EAL,1L},{0L,0x7C7273EAL,0x7C7273EAL,0L,1L,0L,0x7C7273EAL}};
            uint16_t ****l_1324 = (void*)0;
            uint16_t ****l_1325 = &l_1323;
            int32_t * const l_1341 = &l_23.f0.f1;
            struct S2 * const *l_1359 = &g_433[0][5];
            union U3 *l_1387 = &g_43;
            union U3 ****l_1396 = &l_1394;
            struct S1 l_1406 = {{18446744073709551608UL,0xD14A4C03L,3UL,-8L,0x74L},0xED5BD92AL,0xE6L,0x69C115FAFDC32F9DLL,0L};
            int8_t *l_1434 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1316[i] = &l_1309;
        }
    }
    return p_11;
}



static struct S2  func_19(int32_t * p_20, int64_t  p_21, struct S1  p_22)
{ 
    struct S1 l_30 = {{0x84235372L,0xAC950041L,0xC573C098L,0x3027L,3L},0x7C2B42D2L,0x5DL,8L,1L};
    int32_t *l_1050 = &g_17;
    uint32_t l_1052 = 8UL;
    uint64_t l_1055 = 0xAD3E496422F93799LL;
    int32_t ** const * const l_1081 = &g_212[3];
    struct S0 *l_1087 = &g_73[0];
    int32_t l_1088 = 0xCEC130ADL;
    int32_t l_1093 = (-1L);
    int32_t l_1094 = (-7L);
    int32_t l_1097 = 0x4FC26619L;
    int32_t l_1098 = 9L;
    int32_t l_1100 = 0x019620C7L;
    int32_t l_1101 = 0x5FD21458L;
    int16_t l_1106[5] = {0xE581L,0xE581L,0xE581L,0xE581L,0xE581L};
    int8_t l_1107 = 0x21L;
    int32_t l_1108[3][4];
    uint64_t l_1109 = 0x6DA677CBEF317298LL;
    struct S2 *** const l_1124 = &g_432;
    int64_t l_1151 = 0x958D723B5CD3547ALL;
    struct S2 l_1152[2][6][1] = {{{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}}},{{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}},{{0xD123C78EC3B75C85LL,0x95F4L,1L}}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_1108[i][j] = 0x8B7FDCD8L;
    }
    for (p_22.f0.f3 = 0; (p_22.f0.f3 >= (-22)); p_22.f0.f3--)
    { 
        int32_t *l_29 = &g_17;
        int32_t **l_28 = &l_29;
        struct S2 l_42[6][6] = {{{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL},{0UL,0x3498L,0x969C113EL},{4UL,65528UL,0x0EC62D7FL},{4UL,65528UL,0x0EC62D7FL},{0UL,0x3498L,0x969C113EL},{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL}},{{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL},{4UL,65528UL,0x0EC62D7FL},{18446744073709551615UL,0x1550L,0x957630D1L},{0UL,0x3498L,0x969C113EL},{0UL,0x3498L,0x969C113EL},{18446744073709551615UL,0x1550L,0x957630D1L}},{{0UL,0x3498L,0x969C113EL},{0UL,0x3498L,0x969C113EL},{18446744073709551615UL,0x1550L,0x957630D1L},{4UL,65528UL,0x0EC62D7FL},{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL},{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL}},{{0UL,0x3498L,0x969C113EL},{4UL,65528UL,0x0EC62D7FL},{4UL,65528UL,0x0EC62D7FL},{0UL,0x3498L,0x969C113EL},{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL},{18446744073709551615UL,0x1550L,0x957630D1L}},{{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL},{0UL,0x3498L,0x969C113EL},{4UL,65528UL,0x0EC62D7FL},{4UL,65528UL,0x0EC62D7FL},{0UL,0x3498L,0x969C113EL},{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL}},{{0x3C9969097B3892EBLL,0xAE66L,0x2566A56DL},{4UL,65528UL,0x0EC62D7FL},{18446744073709551615UL,0x1550L,0x957630D1L},{0UL,0x3498L,0x969C113EL},{0UL,0x3498L,0x969C113EL},{18446744073709551615UL,0x1550L,0x957630D1L}}};
        union U3 **l_1040 = &g_598;
        union U3 ***l_1039 = &l_1040;
        union U3 ****l_1038[3];
        struct S0 ***l_1046 = &g_575;
        struct S0 ****l_1045 = &l_1046;
        int32_t *l_1051[5][4] = {{&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1},{&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1},{&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1},{&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1},{&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1,&g_291[1][0][0].f0.f1}};
        int64_t **l_1059[1][3][2];
        uint16_t **l_1077[5][3] = {{&g_656[0],&g_656[0],&g_656[0]},{&g_656[0],&g_656[0],&g_656[0]},{&g_656[0],&g_656[0],&g_656[0]},{&g_656[0],&g_656[0],&g_656[0]},{&g_656[0],&g_656[0],&g_656[0]}};
        int32_t l_1092 = 0x68920D81L;
        uint8_t l_1102 = 0xE1L;
        uint8_t **l_1117 = &g_608;
        int16_t *l_1150 = &g_262[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1038[i] = &l_1039;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1059[i][j][k] = &g_835[1];
            }
        }
    }
    return l_1152[0][4][0];
}



static uint16_t  func_36(struct S2  p_37, int32_t * const  p_38, int32_t  p_39, uint32_t  p_40, union U3  p_41)
{ 
    const uint8_t l_52[4] = {0xC3L,0xC3L,0xC3L,0xC3L};
    int32_t *l_66 = &g_17;
    int32_t **l_65 = &l_66;
    struct S2 l_67 = {18446744073709551611UL,0x0E83L,0x0D67C409L};
    uint8_t *l_792 = &g_139;
    int32_t *l_793 = &g_291[1][0][0].f0.f1;
    int32_t l_1027 = 0L;
    uint32_t *l_1030[6];
    int i;
    for (i = 0; i < 6; i++)
        l_1030[i] = &g_445.f2;
    (*l_65) = func_44((((safe_rshift_func_int16_t_s_s((l_52[0] & (p_37.f1 ^= ((safe_rshift_func_uint8_t_u_s(((*l_792) = (func_55(g_43.f0, func_60(l_65, l_67, (((((safe_div_func_int8_t_s_s(0xE6L, (**l_65))) == p_41.f4) , (**l_65)) <= (*p_38)) , &l_66), (*l_66)), g_5, p_41.f4) != l_52[1])), g_43.f4)) ^ g_43.f0))), p_41.f0)) ^ 0xA67147CBL) && (-2L)), p_37.f0, g_73[1].f0, l_793, g_794);
    (*g_794) ^= ((safe_unary_minus_func_int32_t_s((((**g_575) , (safe_unary_minus_func_uint8_t_u((*l_793)))) && (+(safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((*g_781) = (!(safe_mod_func_uint64_t_u_u((((*p_38) == (p_40 = (safe_lshift_func_int16_t_s_u((l_1027 , ((((*l_792) = (safe_mul_func_uint16_t_u_u((*l_793), ((**g_834) >= p_37.f1)))) <= 4UL) , p_37.f2)), 15)))) >= 0UL), 18446744073709551612UL)))), 9)), 1UL)))))) <= (*l_793));
    return (*l_793);
}



static int32_t * func_44(uint32_t  p_45, int32_t  p_46, int32_t  p_47, int32_t * p_48, int32_t * p_49)
{ 
    int32_t *l_798 = &g_445.f1;
    struct S0 **l_810[4];
    uint32_t **l_813[7][7][3] = {{{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]}},{{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]}},{{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]}},{{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]}},{{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0}},{{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]}},{{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]},{(void*)0,&g_800[2],(void*)0},{(void*)0,&g_800[2],&g_800[0]},{(void*)0,(void*)0,&g_800[2]},{(void*)0,&g_800[2],&g_800[2]},{&g_800[2],&g_800[2],&g_800[0]}}};
    int32_t l_839 = 0x8025B63CL;
    int32_t l_842 = 7L;
    int64_t l_843 = (-1L);
    int32_t l_845 = 0L;
    int32_t l_847 = 0xCE4AE7E7L;
    const uint16_t *l_871 = (void*)0;
    const uint16_t **l_870 = &l_871;
    const uint16_t *** const l_869 = &l_870;
    uint8_t *l_896 = &g_148[6];
    struct S2 **l_913 = (void*)0;
    union U3 l_969 = {0L};
    int32_t l_971 = 0x598CFCE0L;
    struct S0 ***l_988 = &l_810[0];
    struct S0 ****l_987 = &l_988;
    struct S0 *****l_989 = &l_987;
    uint8_t * const *l_997[6];
    uint8_t * const **l_996[1][3];
    uint8_t * const ***l_995 = &l_996[0][1];
    int32_t l_1000 = 1L;
    struct S2 l_1002 = {0x9D1D9198726780DELL,7UL,0xAD59FC2CL};
    int8_t *l_1009 = &g_43.f0;
    int32_t *l_1013 = &l_845;
    int32_t *l_1014 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_810[i] = &g_576;
    for (i = 0; i < 6; i++)
        l_997[i] = &g_608;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_996[i][j] = &l_997[2];
    }
lbl_986:
    for (g_785 = 5; (g_785 < 23); ++g_785)
    { 
        int32_t **l_797[5] = {&g_106,&g_106,&g_106,&g_106,&g_106};
        uint32_t ***l_801 = &g_799;
        uint16_t l_849[6];
        int32_t *l_853 = &g_17;
        struct S2 l_874 = {0xCC89615EB64D02C7LL,65535UL,0x8C97CAFCL};
        int64_t **l_893[1];
        int64_t **l_894 = &g_835[1];
        const uint8_t * const l_899 = (void*)0;
        union U3 **l_905[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U3 ***l_904[7] = {&l_905[6],&l_905[6],&l_905[6],&l_905[6],&l_905[6],&l_905[6],&l_905[6]};
        union U3 ****l_903 = &l_904[3];
        const struct S0 *l_921 = &g_922;
        struct S2 *l_923 = &l_874;
        uint32_t l_928[2][5][5];
        uint64_t l_929[2][3][2] = {{{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_849[i] = 65527UL;
        for (i = 0; i < 1; i++)
            l_893[i] = &g_835[2];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 5; k++)
                    l_928[i][j][k] = 0xAA6467D4L;
            }
        }
        l_798 = (void*)0;
        (*l_801) = g_799;
        if ((*p_49))
            continue;
        for (g_245 = 16; (g_245 <= 26); g_245 = safe_add_func_int64_t_s_s(g_245, 3))
        { 
            uint32_t * const l_806 = &g_807;
            uint32_t * const *l_805[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t * const **l_804[2][7][7] = {{{&l_805[0],&l_805[0],&l_805[0],&l_805[0],(void*)0,&l_805[0],&l_805[0]},{&l_805[0],&l_805[0],(void*)0,&l_805[0],&l_805[0],&l_805[4],&l_805[0]},{&l_805[0],&l_805[0],(void*)0,(void*)0,&l_805[0],&l_805[0],(void*)0},{&l_805[2],(void*)0,&l_805[0],(void*)0,&l_805[0],&l_805[0],(void*)0},{&l_805[0],(void*)0,&l_805[0],&l_805[4],(void*)0,&l_805[2],&l_805[0]},{&l_805[0],(void*)0,&l_805[2],&l_805[4],&l_805[2],(void*)0,&l_805[0]},{(void*)0,&l_805[0],&l_805[0],(void*)0,&l_805[0],&l_805[2],&l_805[0]}},{{(void*)0,&l_805[0],&l_805[0],(void*)0,&l_805[0],&l_805[0],&l_805[4]},{&l_805[0],&l_805[0],&l_805[0],&l_805[0],&l_805[0],&l_805[0],&l_805[0]},{&l_805[0],&l_805[0],&l_805[2],&l_805[0],&l_805[0],&l_805[4],&l_805[4]},{&l_805[2],&l_805[0],&l_805[0],&l_805[0],&l_805[2],&l_805[0],&l_805[0]},{&l_805[0],&l_805[0],&l_805[0],&l_805[0],(void*)0,&l_805[0],&l_805[0]},{&l_805[0],&l_805[0],(void*)0,&l_805[0],&l_805[0],&l_805[4],&l_805[0]},{&l_805[0],&l_805[0],(void*)0,(void*)0,&l_805[0],&l_805[0],(void*)0}}};
            struct S0 ***l_811 = (void*)0;
            struct S0 ***l_812 = &g_575;
            int32_t l_824 = 0x626DA7FBL;
            int32_t l_829[4] = {0x8E137C6DL,0x8E137C6DL,0x8E137C6DL,0x8E137C6DL};
            int32_t *l_830 = &g_43.f1;
            int32_t l_838[4][6][5] = {{{0L,0xB0860404L,0x9A231C86L,0xBCE7DFD9L,(-2L)},{(-8L),0x31F6FFD7L,4L,0x9A231C86L,0x723856C9L},{1L,0x42C6BE1DL,0x7D8498BAL,0L,1L},{0x128F10BEL,(-1L),0xC1D6FD52L,1L,0L},{0xC1D6FD52L,0x2143F5AAL,(-1L),0x6242A274L,0x2FC6C8DFL},{(-1L),4L,0xA4D3C74CL,0xB8E1CBB9L,1L}},{{(-1L),1L,9L,0x725C596EL,0x6242A274L},{0xC1D6FD52L,0xA4D3C74CL,7L,0xBCE7DFD9L,0xBCE7DFD9L},{0x128F10BEL,0xC1D6FD52L,0x128F10BEL,9L,(-1L)},{1L,0xB8E1CBB9L,0xBCE7DFD9L,0x42C6BE1DL,0xEDD68679L},{(-8L),0L,0xC1D6FD52L,1L,0x2143F5AAL},{0L,1L,0xBCE7DFD9L,0xEDD68679L,0x2FC6C8DFL}},{{0xA33CF372L,(-8L),0x128F10BEL,(-1L),0x58403C8EL},{0xA4D3C74CL,0x6F18B1A9L,0x723856C9L,0x2E94133FL,9L},{1L,1L,(-1L),0x31F6FFD7L,0x2143F5AAL},{1L,0x89EB11B7L,(-1L),0xBCE7DFD9L,0x2143F5AAL},{0xFE3A2221L,(-3L),0x80E6EF86L,4L,9L},{1L,4L,0x58403C8EL,9L,0x58403C8EL}},{{0L,0L,1L,0x9A231C86L,0xB8E1CBB9L},{0x128F10BEL,0xEDD68679L,1L,(-3L),0x14988A4BL},{4L,0x6F18B1A9L,0xDE41C9BEL,0x723856C9L,0L},{(-3L),0xEDD68679L,0x2E94133FL,0x31F6FFD7L,0x80E6EF86L},{(-1L),0L,0x6242A274L,0x7D8498BAL,0x31F6FFD7L},{0xFE3A2221L,4L,0x034F0FBDL,0xB0860404L,0x725C596EL}}};
            uint64_t *l_865[7] = {&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0,&g_84.f0};
            int64_t **l_895 = &g_835[0];
            struct S2 l_948 = {0x3C81E84E1376F0F1LL,65535UL,0x8295A013L};
            uint16_t l_949 = 8UL;
            int64_t ***l_955 = &l_893[0];
            int i, j, k;
            if (((g_808 = &g_800[2]) == ((((*l_812) = l_810[3]) != (void*)0) , ((*l_801) = l_813[3][4][2]))))
            { 
                int16_t l_828 = 0x5FDFL;
                int32_t l_840[2];
                int8_t l_846 = 0xE0L;
                int32_t *l_852 = &l_824;
                int i;
                for (i = 0; i < 2; i++)
                    l_840[i] = 0x98B3AF13L;
                l_829[2] ^= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((++(*l_806)) ^ l_824), 13)), ((p_46 , g_291[1][0][0]) , (p_45 , ((((safe_unary_minus_func_uint32_t_u(0x824AFCF0L)) , (((((safe_sub_func_int16_t_s_s(p_47, 0x5A5FL)) <= 0x07AAL) > p_46) || 0xAFL) == 1L)) > l_828) , (-4L)))))), (*p_49))), 3));
                l_830 = &p_47;
                (*p_49) = 6L;
                for (g_445.f1 = 1; (g_445.f1 <= 22); g_445.f1 = safe_add_func_int8_t_s_s(g_445.f1, 3))
                { 
                    struct S2 l_836 = {0x50236352DDDACE4ELL,65532UL,0x1F6C8DB1L};
                    struct S2 *l_837 = &g_84;
                    int32_t l_841 = 0x56A191B3L;
                    int32_t l_844 = 0x18FF02B0L;
                    int32_t l_848 = (-1L);
                    g_833[5] = g_833[5];
                    (*l_837) = l_836;
                    ++l_849[2];
                }
                return l_853;
            }
            else
            { 
                union U3 l_864 = {-9L};
                int8_t *l_866 = &l_864.f0;
                int8_t *l_872 = &g_652;
                int16_t l_873[4][1][4];
                int32_t l_880 = 0x7AF18E62L;
                int32_t l_881 = (-1L);
                int32_t l_884 = 0x64A49B91L;
                int64_t **l_891 = &g_835[3];
                union U3 *** const *l_906[2];
                uint8_t ***l_907 = &g_607;
                const struct S0 *l_920 = &g_73[1];
                int16_t l_946 = 0x007AL;
                int16_t *l_947[4][6][3] = {{{&l_873[1][0][0],&g_262[0],&l_946},{&l_873[1][0][0],&g_73[1].f3,&l_946},{&g_262[3],(void*)0,(void*)0},{&l_946,&l_946,&l_873[0][0][0]},{&l_946,&l_873[1][0][0],&l_946},{&g_262[0],&l_946,&l_873[1][0][0]}},{{&l_946,&l_873[1][0][2],&g_262[3]},{&g_262[0],&l_946,&g_73[1].f3},{&g_445.f3,&l_873[1][0][0],&g_73[1].f3},{(void*)0,&l_946,&l_873[1][0][0]},{(void*)0,(void*)0,&l_873[1][0][0]},{(void*)0,&g_73[1].f3,&l_873[1][0][2]}},{{(void*)0,&g_262[0],(void*)0},{(void*)0,(void*)0,&l_946},{(void*)0,&l_873[1][0][0],&l_946},{&g_445.f3,&l_873[0][0][2],&l_873[1][0][0]},{&g_262[0],&l_873[1][0][0],&g_291[1][0][0].f0.f3},{&l_946,&g_445.f3,&l_873[1][0][0]}},{{&g_262[0],&l_873[0][0][0],&l_946},{&l_946,&l_946,&l_946},{&l_946,&l_946,(void*)0},{&g_262[3],&g_73[1].f3,&l_873[1][0][2]},{&l_873[1][0][0],&g_73[1].f3,&l_873[1][0][0]},{&l_873[1][0][0],&l_946,&l_873[1][0][0]}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_873[i][j][k] = 0L;
                    }
                }
                for (i = 0; i < 2; i++)
                    l_906[i] = &l_904[1];
                (*l_830) = (safe_div_func_uint64_t_u_u((l_845 = (((safe_lshift_func_uint8_t_u_u(p_47, 4)) >= ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((*l_872) |= (safe_div_func_int8_t_s_s(((*l_866) = ((l_864 , l_865[0]) != g_410[3])), (safe_add_func_int32_t_s_s(0xB1813858L, ((l_869 != (void*)0) > 0UL)))))), 4)), l_873[1][0][0])) && g_531)) || p_46)), (-3L)));
                (*p_48) = 0x45AFAEFBL;
                if (l_864.f4)
                    continue;
                if ((((l_874 , (((**g_575) , 0x64L) > (p_46 && 0x73L))) ^ ((safe_rshift_func_int16_t_s_s(l_864.f0, 9)) <= (safe_div_func_uint8_t_u_u((((g_531 != p_47) , (-1L)) , p_47), (*l_853))))) , (*p_48)))
                { 
                    int8_t l_879 = (-1L);
                    int32_t l_882 = 1L;
                    int32_t l_883 = (-8L);
                    int32_t l_885 = 8L;
                    int32_t l_886 = (-5L);
                    int32_t l_887[2];
                    uint8_t l_888 = 0x25L;
                    int64_t ***l_892[2][1];
                    union U3 **l_902 = &g_598;
                    union U3 ***l_901 = &l_902;
                    union U3 ****l_900[1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_887[i] = 1L;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_892[i][j] = &l_891;
                    }
                    for (i = 0; i < 1; i++)
                        l_900[i] = &l_901;
                    --l_888;
                    (*l_830) = ((l_894 = (l_893[0] = l_891)) == (l_895 = l_891));
                    (*l_853) &= ((*p_48) || ((l_903 = (((((l_896 != (void*)0) < ((0x3818A2550A0270BCLL <= (safe_mul_func_uint8_t_u_u(p_46, (l_899 != l_866)))) || l_873[1][0][0])) , (-10L)) ^ 8L) , l_900[0])) == l_906[1]));
                    p_48 = &p_47;
                }
                else
                { 
                    uint8_t ***l_909 = &g_607;
                    uint8_t ****l_908 = &l_909;
                    struct S2 ***l_914 = &g_432;
                    int16_t *l_915 = &g_262[3];
                    struct S2 **l_924 = (void*)0;
                    struct S2 **l_925 = &g_433[0][5];
                    (*l_830) = (((p_46 , l_907) != ((*l_908) = &g_607)) | (((~((*l_915) |= (safe_sub_func_uint8_t_u_u((0xD108676BL <= (((*l_914) = l_913) == &g_433[0][4])), (((0UL && p_46) != 0L) <= 0xC9L))))) , 2UL) >= p_47));
                    g_917++;
                    l_921 = l_920;
                    (*l_925) = l_923;
                }
                (*p_49) = (safe_add_func_int64_t_s_s((-1L), ((l_929[0][2][1] = l_928[1][2][0]) != (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_46, 6)), (((safe_rshift_func_uint8_t_u_s(251UL, 7)) ^ (safe_mod_func_int32_t_s_s(((*l_830) = (-6L)), p_47))) <= (((*l_872) ^= (safe_mul_func_int16_t_s_s((g_445.f3 = (safe_lshift_func_int8_t_s_s((((*g_781)++) == (safe_div_func_int64_t_s_s(p_47, l_946))), 4))), p_45))) , (*l_853))))))));
            }
            (*l_923) = l_948;
            l_949--;
            for (p_47 = 0; (p_47 <= (-5)); p_47 = safe_sub_func_uint8_t_u_u(p_47, 7))
            { 
                int64_t ****l_954[2][1];
                int32_t *l_960 = (void*)0;
                const int16_t *l_983 = (void*)0;
                const int16_t **l_982 = &l_983;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_954[i][j] = &g_833[5];
                }
                if (((((((p_46 > (&g_834 != (l_955 = &l_894))) , (l_948 , (&g_597[1] == (void*)0))) != ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((p_45 ^ p_47) == 18446744073709551609UL), 0xFFA1L)), 4)) >= p_47)) == (*p_49)) | p_45) & p_45))
                { 
                    uint16_t l_970 = 1UL;
                    const uint32_t *l_973 = &g_73[1].f0;
                    const uint32_t **l_972 = &l_973;
                    uint32_t *l_975 = &g_43.f3;
                    uint32_t **l_974 = &l_975;
                    uint32_t *l_977 = &g_173;
                    uint32_t **l_976 = &l_977;
                    l_960 = (void*)0;
                    (*l_830) &= (safe_sub_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(((l_971 = (l_970 &= (safe_rshift_func_uint8_t_u_s((p_45 || 0x5EL), (safe_rshift_func_uint16_t_u_u((l_969 , p_47), 13)))))) < (((*l_972) = (void*)0) == ((*l_976) = ((*l_974) = l_798)))), (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((*l_853), p_45)), p_46)))) , l_970) <= p_47), (**g_780)));
                    (*g_794) ^= ((**g_834) , (*p_48));
                }
                else
                { 
                    (*g_794) = 0x2892E480L;
                    g_984 = l_982;
                    p_49 = &p_47;
                }
            }
        }
        if (p_47)
            goto lbl_986;
    }
    (*l_989) = l_987;
    for (l_969.f2 = 0; (l_969.f2 > 36); l_969.f2 = safe_add_func_uint32_t_u_u(l_969.f2, 9))
    { 
        uint64_t l_992[4][5] = {{0xDC0E265887475A21LL,2UL,0xDC0E265887475A21LL,2UL,0xDC0E265887475A21LL},{1UL,1UL,1UL,1UL,1UL},{0xDC0E265887475A21LL,2UL,0xDC0E265887475A21LL,2UL,0xDC0E265887475A21LL},{1UL,1UL,1UL,1UL,1UL}};
        uint8_t ***l_999[4];
        uint8_t ****l_998 = &l_999[1];
        struct S2 l_1001 = {0x5271AFF34274E617LL,0x5C33L,-1L};
        int i, j;
        for (i = 0; i < 4; i++)
            l_999[i] = (void*)0;
        l_992[0][4]++;
        l_1000 &= (l_995 == l_998);
        l_1002 = l_1001;
    }
    (*g_794) |= (p_47 , ((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((*l_1009) = g_17), (--(*l_896)))), 0x7022L)) & (((void*)0 != &g_575) & (!((void*)0 == p_48)))), (*g_985))) ^ p_45));
    return l_1014;
}



static uint64_t  func_55(int32_t  p_56, int32_t * p_57, uint64_t  p_58, uint64_t  p_59)
{ 
    int8_t l_396[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
    uint64_t *l_412 = (void*)0;
    uint64_t **l_411[2][1][4];
    int32_t l_415 = 0x0CCC0D73L;
    int32_t **l_420 = &g_106;
    int32_t l_421 = 0xF76DA6CBL;
    int16_t *l_449[6] = {&g_262[1],&g_262[1],&g_73[1].f3,&g_262[1],&g_262[1],&g_73[1].f3};
    int32_t l_454 = 0xFC00396AL;
    int32_t l_456 = 0x42BE219BL;
    int32_t l_458 = 0x906271DFL;
    int32_t l_459 = 0xFBAF6D04L;
    int32_t l_460 = 0L;
    uint64_t l_461 = 0xC85D777556B75C52LL;
    struct S2 l_483 = {0x1850E32A68C8D256LL,6UL,0xF2BE39F0L};
    union U3 *l_511 = &g_43;
    int32_t l_533 = 0L;
    struct S0 *l_574 = (void*)0;
    struct S0 **l_573 = &l_574;
    int32_t l_577[5][5] = {{0x91CCA99FL,0x91CCA99FL,0xFE9D8DE6L,0x91CCA99FL,0x91CCA99FL},{(-1L),0x02415A31L,(-1L),(-1L),0x02415A31L},{0x91CCA99FL,(-8L),(-8L),0x91CCA99FL,(-8L)},{0x02415A31L,0x02415A31L,0x6FEBEF5EL,0x02415A31L,0x02415A31L},{(-8L),0x91CCA99FL,(-8L),(-8L),(-8L)}};
    uint8_t *l_591[4];
    uint64_t l_638 = 0xFBC98C0820A0FF9CLL;
    int8_t l_651 = 0L;
    int8_t l_676 = 0x64L;
    int8_t l_689 = 0L;
    union U3 ***l_745 = (void*)0;
    int64_t *l_767[4][7][1] = {{{&g_291[1][0][0].f3},{&g_291[1][0][0].f4},{(void*)0},{&g_291[1][0][0].f4},{&g_291[1][0][0].f3},{&g_245},{&g_291[1][0][0].f3}},{{&g_291[1][0][0].f3},{&g_291[1][0][0].f3},{&g_245},{&g_291[1][0][0].f3},{&g_291[1][0][0].f4},{(void*)0},{&g_291[1][0][0].f4}},{{&g_291[1][0][0].f3},{&g_245},{&g_291[1][0][0].f3},{&g_291[1][0][0].f3},{&g_291[1][0][0].f3},{&g_245},{&g_291[1][0][0].f3}},{{&g_291[1][0][0].f4},{(void*)0},{&g_291[1][0][0].f4},{&g_291[1][0][0].f3},{&g_245},{&g_291[1][0][0].f3},{&g_291[1][0][0].f3}}};
    int64_t **l_766 = &l_767[1][2][0];
    int64_t *l_769 = (void*)0;
    int64_t **l_768 = &l_769;
    uint16_t * const *l_778 = &g_656[0];
    uint16_t * const **l_779[3];
    uint32_t l_786 = 0x4A1BBF70L;
    int64_t *l_787 = &g_291[1][0][0].f3;
    int64_t *l_788 = &g_291[1][0][0].f4;
    int32_t *l_789 = &g_78[2];
    struct S0 l_790 = {0x7F938DEDL,0L,4294967295UL,-1L,0x6FL};
    struct S2 *l_791 = &g_84;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_411[i][j][k] = &l_412;
        }
    }
    for (i = 0; i < 4; i++)
        l_591[i] = &g_139;
    for (i = 0; i < 3; i++)
        l_779[i] = &l_778;
    for (p_59 = 23; (p_59 >= 15); --p_59)
    { 
        int32_t **l_393 = &g_106;
        struct S2 l_394 = {18446744073709551612UL,65534UL,0L};
        struct S2 *l_395 = &l_394;
        (*l_393) = p_57;
        g_84 = ((*l_395) = l_394);
        if (p_56)
            break;
        if (l_396[4])
            break;
    }
    return p_56;
}



static int32_t * func_60(int32_t ** p_61, struct S2  p_62, int32_t ** p_63, uint16_t  p_64)
{ 
    uint32_t l_70[6];
    int32_t * const l_77[3] = {&g_78[2],&g_78[2],&g_78[2]};
    int32_t * const *l_76 = &l_77[2];
    uint16_t *l_79 = &g_80[0];
    const int32_t *l_124 = &g_17;
    int8_t l_150[3][1];
    int8_t l_151[4] = {(-4L),(-4L),(-4L),(-4L)};
    int32_t *l_164[4] = {&g_73[1].f1,&g_73[1].f1,&g_73[1].f1,&g_73[1].f1};
    struct S2 *l_180[6][6] = {{&g_84,&g_84,(void*)0,(void*)0,&g_84,&g_84},{&g_84,(void*)0,(void*)0,&g_84,&g_84,(void*)0},{&g_84,&g_84,(void*)0,(void*)0,&g_84,&g_84},{&g_84,(void*)0,(void*)0,&g_84,&g_84,(void*)0},{&g_84,&g_84,(void*)0,(void*)0,&g_84,&g_84},{&g_84,(void*)0,(void*)0,&g_84,&g_84,(void*)0}};
    int16_t *l_234 = &g_73[1].f3;
    int16_t *l_235 = &g_73[1].f3;
    const struct S0 *l_250 = &g_73[0];
    int32_t **l_378 = &l_164[3];
    int32_t ***l_379 = (void*)0;
    int32_t ***l_380 = &g_105;
    uint32_t *l_381[3];
    int i, j;
    for (i = 0; i < 6; i++)
        l_70[i] = 0xAF67B55CL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_150[i][j] = 5L;
    }
    for (i = 0; i < 3; i++)
        l_381[i] = &g_73[1].f2;
    ++l_70[2];
    if ((p_62.f2 <= (((g_73[1] , ((void*)0 == (*p_61))) , g_73[1].f1) ^ ((safe_mul_func_uint16_t_u_u(((*l_79) |= ((l_76 = p_61) == (void*)0)), 3L)) , g_73[1].f2))))
    { 
        uint16_t *l_83 = &g_5;
        int16_t l_87 = 0x8A89L;
        int64_t l_107[5];
        int64_t *l_108 = &l_107[4];
        int8_t l_119[5][7] = {{8L,1L,1L,1L,1L,8L,0x5AL},{4L,1L,0L,0x5AL,0xBAL,0xBAL,0x5AL},{(-1L),(-1L),(-1L),(-1L),0x5AL,4L,8L},{0L,1L,4L,(-1L),4L,1L,0L},{1L,1L,8L,0x5AL,0xFBL,4L,0xFBL}};
        int32_t *l_120 = &g_78[0];
        int i, j;
        for (i = 0; i < 5; i++)
            l_107[i] = (-1L);
        (**p_63) &= (((safe_mul_func_int16_t_s_s((((l_83 != &g_80[0]) , g_84) , ((-1L) && ((&g_78[2] != (void*)0) != ((((safe_sub_func_int32_t_s_s(((*p_63) != (void*)0), 0x340CD4C6L)) > p_62.f2) & p_62.f1) > g_84.f1)))), 7L)) > p_62.f1) , l_87);
        if ((g_43 , (((safe_add_func_int32_t_s_s((((*l_108) = (safe_add_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(((&g_78[2] == (*l_76)) != ((*l_79) = ((g_105 == &g_106) < ((g_43 , g_17) && (**p_63))))), p_64)) > 0UL), (-1L))), g_84.f0)) < 0xEEL))), g_43.f0)), p_62.f0)) , l_87) , l_107[0]), 1L))) & 0x856C2794937C9633LL), p_62.f0)) ^ g_73[1].f4) != p_62.f0)))
        { 
            for (g_84.f0 = 0; (g_84.f0 <= 4); g_84.f0 += 1)
            { 
                for (g_84.f2 = 4; (g_84.f2 >= 1); g_84.f2 -= 1)
                { 
                    int i;
                    if (l_107[g_84.f2])
                        break;
                }
            }
        }
        else
        { 
            uint32_t *l_118[5];
            int32_t l_149[7];
            int i;
            for (i = 0; i < 5; i++)
                l_118[i] = &g_73[1].f2;
            for (i = 0; i < 7; i++)
                l_149[i] = 1L;
            if (((*g_105) == ((g_84.f0 != 0xC31E85077858FB2DLL) , ((safe_rshift_func_uint8_t_u_u(p_62.f1, (((&g_106 != (void*)0) != (l_119[1][3] = (~(safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((&g_106 != (void*)0), 1UL)), 0x84FEBEC8L)), 0xA0L))))) ^ 0UL))) , l_120))))
            { 
                struct S2 *l_121 = (void*)0;
                struct S2 *l_122 = (void*)0;
                struct S2 *l_123[4][5][2] = {{{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,(void*)0},{&g_84,&g_84}},{{(void*)0,&g_84},{(void*)0,&g_84},{&g_84,(void*)0},{&g_84,&g_84},{&g_84,&g_84}},{{&g_84,&g_84},{&g_84,&g_84},{&g_84,(void*)0},{&g_84,&g_84},{(void*)0,&g_84}},{{(void*)0,&g_84},{&g_84,(void*)0},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84}}};
                const int32_t **l_125 = &l_124;
                const int32_t *l_127 = &g_17;
                const int32_t **l_126 = &l_127;
                uint8_t *l_138 = &g_139;
                uint8_t *l_146 = (void*)0;
                uint8_t *l_147 = &g_148[3];
                int16_t *l_152 = &g_73[1].f3;
                uint32_t *l_157 = &g_73[1].f2;
                int32_t l_162 = 0x9E805CA6L;
                uint16_t *l_163 = &g_84.f1;
                int i, j, k;
                g_84 = g_84;
                (*l_126) = ((*l_125) = l_124);
                if ((safe_lshift_func_int16_t_s_u((p_62.f2 , (safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_152) = (safe_sub_func_uint16_t_u_u((p_64 ^ ((*l_138) = (safe_lshift_func_int8_t_s_s(((*l_124) != g_84.f1), 2)))), (((((((*l_108) = ((safe_mul_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((void*)0 != &g_106) >= ((((*l_147) = ((0x191EB41DL ^ 0x7F66EBC8L) , 255UL)) && p_62.f1) && l_149[1])), g_43.f4)), g_73[1].f0)) >= 0xDB77992EL) == l_150[2][0]) == l_151[0]), l_149[2])) <= 0x6DDA51A47E80D524LL)) , (*l_120)) , p_62.f1) >= l_149[6]) >= g_73[1].f4) != (**l_125))))), p_62.f2)) >= 3L), p_62.f1))), p_62.f1)))
                { 
                    uint16_t l_158 = 65531UL;
                    (**l_76) = (safe_rshift_func_int16_t_s_u(((&p_64 != ((safe_sub_func_int16_t_s_s((l_162 &= ((g_106 == l_157) <= (((*l_152) = (&l_120 == (l_158 , p_63))) <= ((((safe_add_func_int32_t_s_s((~0x49423B7AL), p_62.f1)) >= l_149[1]) == 1L) < (**p_61))))), g_43.f4)) , l_163)) == p_62.f2), 11));
                    (*l_126) = (*g_105);
                    return (*p_63);
                }
                else
                { 
                    return (*p_61);
                }
            }
            else
            { 
                return l_164[3];
            }
        }
    }
    else
    { 
        uint8_t *l_174 = (void*)0;
        uint8_t *l_175 = &g_148[3];
        int32_t l_176[5][2][2] = {{{(-1L),(-1L)},{(-1L),0x989E628FL}},{{0L,0x989E628FL},{(-1L),(-1L)}},{{(-1L),(-1L)},{0x989E628FL,0L}},{{0x989E628FL,(-1L)},{(-1L),(-1L)}},{{(-1L),0x989E628FL},{0L,0x989E628FL}}};
        struct S1 l_179 = {{4UL,0x9CEE7FFBL,0x6713FB8FL,-4L,0x55L},7L,1L,0x69D0CB17AFCDE767LL,0xA599C36F569C0FF0LL};
        int i, j, k;
        p_62.f2 ^= (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_u((g_73[1].f2 , (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_175) &= g_173), 5)), ((l_176[3][0][0] == (l_176[3][0][0] > ((g_43 , (((safe_add_func_int32_t_s_s((7L != (l_179 , (*l_124))), g_78[2])) , l_180[2][3]) != (void*)0)) == p_62.f1))) || 0UL)))), 0)) && 0xB7L) | g_43.f4), p_64));
    }
    for (p_62.f1 = 0; (p_62.f1 == 56); p_62.f1 = safe_add_func_uint64_t_u_u(p_62.f1, 9))
    { 
        const int32_t l_194 = (-5L);
        int8_t *l_204[3];
        int32_t l_215 = 1L;
        int32_t l_216 = 0L;
        int32_t l_217 = 0L;
        uint32_t l_218[1];
        int32_t **l_288 = &l_164[2];
        int64_t *l_320 = &g_245;
        int16_t **l_329 = (void*)0;
        uint32_t l_375 = 0x3A95CA0FL;
        int i;
        for (i = 0; i < 3; i++)
            l_204[i] = &l_150[2][0];
        for (i = 0; i < 1; i++)
            l_218[i] = 0x8DFBB1B3L;
        (**p_61) &= (g_173 | 0xEE1699ECE875DABCLL);
        if ((*l_124))
        { 
            int8_t *l_205 = (void*)0;
            int32_t *l_221 = &g_78[0];
            int16_t *l_233[2][1];
            int16_t **l_232[5] = {&l_233[1][0],&l_233[1][0],&l_233[1][0],&l_233[1][0],&l_233[1][0]};
            int16_t *l_236 = &g_73[1].f3;
            int32_t l_239 = 0x226F6AAEL;
            uint32_t *l_240 = &l_218[0];
            const uint32_t l_241 = 0x2D8175E3L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_233[i][j] = &g_73[1].f3;
            }
            for (g_84.f0 = (-3); (g_84.f0 != 55); ++g_84.f0)
            { 
                const uint64_t l_206 = 0x730C7DF3491AE8E7LL;
                for (p_62.f0 = 11; (p_62.f0 == 53); p_62.f0 = safe_add_func_uint64_t_u_u(p_62.f0, 3))
                { 
                    int8_t *l_187[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_188[3];
                    int32_t l_207 = 0x210CA2A5L;
                    int32_t **l_210[5][6] = {{&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3]},{&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3]},{&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3]},{&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3]},{&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3],&l_164[3]}};
                    int32_t ***l_211 = &g_105;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_188[i] = 1L;
                    l_207 &= (((0xABL || (l_188[1] = p_62.f0)) , ((safe_sub_func_int32_t_s_s(((((*l_79) = (+(safe_mod_func_int8_t_s_s(l_194, (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((-1L), (safe_add_func_uint16_t_u_u((((+(g_73[1].f0 != ((((((safe_rshift_func_int8_t_s_u((g_173 , 1L), 1)) == 0L) < (-10L)) & p_62.f0) , l_204[0]) == l_205))) <= g_148[0]) <= p_62.f0), 0x7D5AL)))) ^ 0UL), 0UL)))))) == (**l_76)) ^ 0x75L), l_206)) | p_62.f2)) ^ 0xF0L);
                    (**l_76) = (((safe_mul_func_uint16_t_u_u(((*l_79) = ((p_64 || ((void*)0 != l_204[0])) , ((g_73[1] , l_210[0][4]) != (g_212[3] = ((*l_211) = (void*)0))))), (safe_sub_func_uint16_t_u_u(g_139, g_78[2])))) | 18446744073709551608UL) < l_215);
                }
                l_218[0]++;
                return l_221;
            }
            (**p_63) &= ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0x10L, (safe_sub_func_uint64_t_u_u((+(safe_unary_minus_func_int16_t_s((l_217 ^= ((l_235 = (l_234 = l_79)) != (l_236 = l_79)))))), (safe_sub_func_uint32_t_u_u((((*l_79) &= (((-1L) > l_239) || 0xDBB359D2699899C4LL)) , ((g_73[1].f4 = ((((*l_240) &= (0UL != p_62.f0)) != p_62.f0) ^ 5L)) >= g_84.f1)), p_64)))))), 0x3CL)), l_241)) >= p_62.f2);
        }
        else
        { 
            int64_t *l_244[6];
            const struct S2 *l_247[3][6] = {{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84},{&g_84,&g_84,&g_84,&g_84,&g_84,&g_84}};
            int32_t *l_248 = &g_78[0];
            struct S2 *l_284[6] = {&g_84,(void*)0,&g_84,&g_84,(void*)0,&g_84};
            int i, j;
            for (i = 0; i < 6; i++)
                l_244[i] = &g_245;
            if ((p_64 , ((safe_mod_func_uint64_t_u_u(g_84.f2, (g_84 , (l_217 = g_17)))) , 0L)))
            { 
                const struct S0 **l_251 = &l_250;
                int32_t l_254 = 0xB9977A37L;
                uint8_t *l_261[7][2][2];
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_261[i][j][k] = &g_148[3];
                    }
                }
                for (l_217 = 0; (l_217 <= 5); l_217 += 1)
                { 
                    int32_t *l_246 = &g_84.f2;
                    union U3 l_249 = {0x71L};
                    if ((**p_61))
                        break;
                    (*g_105) = (l_246 = ((*p_61) = (*p_63)));
                    (*l_246) &= ((void*)0 != l_247[1][3]);
                    (*g_105) = l_248;
                    (*g_105) = (l_249 , l_246);
                }
                (*l_251) = l_250;
                (*l_248) |= (safe_add_func_int64_t_s_s(((l_254 , (0L == g_84.f2)) < (((--g_80[0]) <= (safe_add_func_int32_t_s_s((**p_61), (safe_rshift_func_uint8_t_u_s((g_139 &= p_62.f2), (((7L || (((l_216 |= p_62.f1) && g_84.f0) , l_217)) , &l_254) != &l_254)))))) & 0x98CE9402L)), 3L));
                if ((**p_61))
                    continue;
                if (g_262[3])
                    continue;
            }
            else
            { 
                uint8_t l_263[2][2][1] = {{{0x38L},{0xFCL}},{{0x38L},{0xFCL}}};
                int i, j, k;
                if (l_263[1][0][0])
                { 
                    uint8_t *l_264 = &g_148[3];
                    int32_t l_273[6][1][7];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 7; k++)
                                l_273[i][j][k] = (-1L);
                        }
                    }
                    l_217 ^= ((++(*l_264)) , ((p_62.f2 == (**p_63)) > (((safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s((**p_63), (((safe_rshift_func_uint8_t_u_u(l_273[2][0][6], 0)) ^ (*l_248)) && p_62.f0))), (g_173 > g_73[1].f4))) , 0x0DFA0F36B3F3D901LL) == g_80[0])));
                }
                else
                { 
                    uint32_t *l_274 = &g_73[1].f2;
                    uint32_t l_275 = 0x0D85813EL;
                    struct S2 **l_285 = &l_180[2][3];
                    (**p_61) ^= (((*l_274) = 0x16005261L) && (l_275 , (p_62.f1 >= (l_194 >= (safe_lshift_func_uint8_t_u_u(g_80[1], 2))))));
                    if ((**p_61))
                        continue;
                    l_216 &= (((-1L) <= (safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((((*l_274) = (3UL >= (safe_sub_func_int8_t_s_s(((((*l_285) = l_284[4]) == l_247[1][3]) | 0x9035L), ((*l_248) ^ (safe_add_func_uint8_t_u_u((g_148[2] = (p_62.f2 <= l_263[1][0][0])), 0xE3L))))))) || (*l_124)), g_78[0])), 5))) < g_173);
                }
                if (l_194)
                    break;
            }
            (**l_76) ^= 0xF2B936B7L;
            (**p_63) = (&g_106 != l_288);
        }
        for (l_215 = 0; (l_215 <= 1); l_215 += 1)
        { 
            int16_t **l_296 = &l_235;
            int16_t **l_297 = &l_234;
            int64_t *l_308 = (void*)0;
            int64_t *l_309[2];
            int32_t l_310 = 0x1D19BCE1L;
            int32_t l_313 = 0x7E410B65L;
            uint8_t l_349 = 9UL;
            int8_t l_374 = 0xBDL;
            int i;
            for (i = 0; i < 2; i++)
                l_309[i] = &g_245;
            if (((safe_sub_func_int16_t_s_s(((g_291[1][0][0] , (((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((*l_296) = &g_262[0]) == ((*l_297) = l_79)), 2)), ((safe_rshift_func_int8_t_s_s(((l_313 |= (g_245 = ((safe_add_func_int64_t_s_s((g_80[l_215] & (((**p_61) ^= (safe_sub_func_int16_t_s_s(g_148[6], (((safe_mul_func_uint16_t_u_u(((l_310 = g_73[1].f0) == ((safe_add_func_uint64_t_u_u((&g_84 == (void*)0), 0x670C1B3324741356LL)) >= 0xFA4CL)), p_62.f0)) && g_173) , 0x8FF3L)))) <= g_80[l_215])), p_62.f1)) , g_245))) != g_148[3]), g_84.f1)) , g_73[1].f4))) <= g_43.f4) == g_80[l_215])) | 0xD5EAB3F58FC13AE1LL), g_148[3])) ^ p_62.f1))
            { 
                uint16_t *l_321 = (void*)0;
                for (g_245 = 0; (g_245 <= 1); g_245 += 1)
                { 
                    int32_t *l_322 = &l_310;
                    int i;
                    (**p_61) = (((g_80[g_245] = (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(p_64, (safe_lshift_func_uint16_t_u_s((((g_73[1].f4 = ((0x8AL < (&g_245 != l_320)) || p_62.f0)) == (((l_321 != (void*)0) & p_62.f0) | p_62.f0)) ^ 0x0993D722L), 14)))), 0))) , (void*)0) != (void*)0);
                    (*p_63) = l_322;
                    (*p_61) = (*p_61);
                    return (*g_105);
                }
                for (l_313 = 5; (l_313 >= 0); l_313 -= 1)
                { 
                    int i;
                    l_310 &= (**p_63);
                }
                (*g_105) = (*p_63);
            }
            else
            { 
                struct S2 l_323 = {0x9281EB3C0B517CF0LL,65535UL,0xB0F39E67L};
                struct S2 l_351 = {0x401D6E4C45B6543DLL,0UL,0x7B5CE9ABL};
                if ((&l_76 == &g_105))
                { 
                    uint32_t *l_330 = &g_173;
                    l_323 = p_62;
                    (**l_76) = (safe_unary_minus_func_int16_t_s(0xF1A1L));
                    (**l_76) |= (safe_lshift_func_uint16_t_u_u(0x4EF6L, ((0x80D6L | (safe_add_func_uint32_t_u_u(p_62.f0, ((((void*)0 == l_164[1]) , (void*)0) != (((*l_330) = ((l_329 != (void*)0) < l_310)) , &g_245))))) ^ p_64)));
                    if ((**p_61))
                        break;
                }
                else
                { 
                    int32_t l_331 = 0xC7BAEC8BL;
                    struct S0 l_348 = {0x72004A12L,1L,0x2C4E2E24L,0x8FD9L,0xE3L};
                    uint64_t *l_350 = &g_84.f0;
                    int i;
                    if (l_331)
                        break;
                    (**p_61) = ((((*l_350) = ((p_62.f2 ^ 0x51FFDDDA756A63D8LL) >= ((&g_262[3] == (void*)0) , (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_s((g_80[l_215] = (safe_div_func_int16_t_s_s(((**l_296) |= ((l_348 , p_64) , g_291[1][0][0].f0.f0)), p_64))), 6)) < (-7L)) , g_43.f4) < l_313), p_64)) > l_323.f2) , 0x1EL) || g_43.f4), 0xF7D0080CL)) <= p_62.f0), l_349)), 0x65L)), g_73[1].f4)), g_291[1][0][0].f0.f2))))) & p_64) && g_291[1][0][0].f0.f4);
                }
                l_351 = (g_84 = p_62);
                for (l_351.f0 = (-20); (l_351.f0 != 15); l_351.f0 = safe_add_func_int8_t_s_s(l_351.f0, 1))
                { 
                    uint8_t l_358 = 5UL;
                    uint8_t *l_359 = (void*)0;
                    uint8_t *l_360 = (void*)0;
                    uint8_t *l_361 = &g_139;
                    l_351.f2 &= (((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((l_358 > ((*l_361)--)) || (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((&g_5 != (void*)0) & (g_84.f0 > ((g_80[l_215] < (((safe_sub_func_uint16_t_u_u(((g_291[1][0][0].f0.f4 = ((safe_mul_func_uint8_t_u_u(l_313, (safe_add_func_int16_t_s_s((l_358 | g_262[3]), 0x9102L)))) <= l_374)) == 0x0BL), p_62.f0)) , 0x8FF619E6L) | (-1L))) < 1L))), 1L)), p_62.f2)) && 0x204EFEECC22FE35CLL) | 0xB8L)), 65529UL)), 0)) & l_375) >= g_291[1][0][0].f0.f2);
                }
                if ((**p_63))
                    continue;
            }
            l_310 &= (**p_61);
        }
    }
    (**p_63) = (safe_mul_func_uint16_t_u_u(((((*l_380) = l_378) == (void*)0) ^ ((--g_73[1].f2) ^ (**l_76))), ((safe_rshift_func_uint8_t_u_u(((**p_63) & 0x22D1E0E3L), 1)) ^ (((safe_mod_func_uint8_t_u_u((((g_388 = &l_234) != g_389) < 1UL), g_80[0])) > (**p_63)) > 0x0C7AB0E0188DD18ELL))));
    return (*p_61);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f4, "g_43.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_73[i].f0, "g_73[i].f0", print_hash_value);
        transparent_crc(g_73[i].f1, "g_73[i].f1", print_hash_value);
        transparent_crc(g_73[i].f2, "g_73[i].f2", print_hash_value);
        transparent_crc(g_73[i].f3, "g_73[i].f3", print_hash_value);
        transparent_crc(g_73[i].f4, "g_73[i].f4", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);

    }
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_262[i], "g_262[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_291[i][j][k].f0.f0, "g_291[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_291[i][j][k].f0.f1, "g_291[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_291[i][j][k].f0.f2, "g_291[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_291[i][j][k].f0.f3, "g_291[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_291[i][j][k].f0.f4, "g_291[i][j][k].f0.f4", print_hash_value);
                transparent_crc(g_291[i][j][k].f1, "g_291[i][j][k].f1", print_hash_value);
                transparent_crc(g_291[i][j][k].f2, "g_291[i][j][k].f2", print_hash_value);
                transparent_crc(g_291[i][j][k].f3, "g_291[i][j][k].f3", print_hash_value);
                transparent_crc(g_291[i][j][k].f4, "g_291[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_445.f0, "g_445.f0", print_hash_value);
    transparent_crc(g_445.f1, "g_445.f1", print_hash_value);
    transparent_crc(g_445.f2, "g_445.f2", print_hash_value);
    transparent_crc(g_445.f3, "g_445.f3", print_hash_value);
    transparent_crc(g_445.f4, "g_445.f4", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_552[i][j], "g_552[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_652, "g_652", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_782[i][j], "g_782[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_922.f0, "g_922.f0", print_hash_value);
    transparent_crc(g_922.f1, "g_922.f1", print_hash_value);
    transparent_crc(g_922.f2, "g_922.f2", print_hash_value);
    transparent_crc(g_922.f3, "g_922.f3", print_hash_value);
    transparent_crc(g_922.f4, "g_922.f4", print_hash_value);
    transparent_crc(g_1244, "g_1244", print_hash_value);
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1347.f0, "g_1347.f0", print_hash_value);
    transparent_crc(g_1347.f1, "g_1347.f1", print_hash_value);
    transparent_crc(g_1347.f2, "g_1347.f2", print_hash_value);
    transparent_crc(g_1350.f0, "g_1350.f0", print_hash_value);
    transparent_crc(g_1350.f1, "g_1350.f1", print_hash_value);
    transparent_crc(g_1350.f2, "g_1350.f2", print_hash_value);
    transparent_crc(g_1351.f0, "g_1351.f0", print_hash_value);
    transparent_crc(g_1351.f1, "g_1351.f1", print_hash_value);
    transparent_crc(g_1351.f2, "g_1351.f2", print_hash_value);
    transparent_crc(g_1352.f0, "g_1352.f0", print_hash_value);
    transparent_crc(g_1352.f1, "g_1352.f1", print_hash_value);
    transparent_crc(g_1352.f2, "g_1352.f2", print_hash_value);
    transparent_crc(g_1353.f0, "g_1353.f0", print_hash_value);
    transparent_crc(g_1353.f1, "g_1353.f1", print_hash_value);
    transparent_crc(g_1353.f2, "g_1353.f2", print_hash_value);
    transparent_crc(g_1354.f0, "g_1354.f0", print_hash_value);
    transparent_crc(g_1354.f1, "g_1354.f1", print_hash_value);
    transparent_crc(g_1354.f2, "g_1354.f2", print_hash_value);
    transparent_crc(g_1355.f0, "g_1355.f0", print_hash_value);
    transparent_crc(g_1355.f1, "g_1355.f1", print_hash_value);
    transparent_crc(g_1355.f2, "g_1355.f2", print_hash_value);
    transparent_crc(g_1356.f0, "g_1356.f0", print_hash_value);
    transparent_crc(g_1356.f1, "g_1356.f1", print_hash_value);
    transparent_crc(g_1356.f2, "g_1356.f2", print_hash_value);
    transparent_crc(g_1357.f0, "g_1357.f0", print_hash_value);
    transparent_crc(g_1357.f1, "g_1357.f1", print_hash_value);
    transparent_crc(g_1357.f2, "g_1357.f2", print_hash_value);
    transparent_crc(g_1358.f0, "g_1358.f0", print_hash_value);
    transparent_crc(g_1358.f1, "g_1358.f1", print_hash_value);
    transparent_crc(g_1358.f2, "g_1358.f2", print_hash_value);
    transparent_crc(g_1397, "g_1397", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1441[i][j], "g_1441[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1461[i].f0.f0, "g_1461[i].f0.f0", print_hash_value);
        transparent_crc(g_1461[i].f0.f1, "g_1461[i].f0.f1", print_hash_value);
        transparent_crc(g_1461[i].f0.f2, "g_1461[i].f0.f2", print_hash_value);
        transparent_crc(g_1461[i].f0.f3, "g_1461[i].f0.f3", print_hash_value);
        transparent_crc(g_1461[i].f0.f4, "g_1461[i].f0.f4", print_hash_value);
        transparent_crc(g_1461[i].f1, "g_1461[i].f1", print_hash_value);
        transparent_crc(g_1461[i].f2, "g_1461[i].f2", print_hash_value);
        transparent_crc(g_1461[i].f3, "g_1461[i].f3", print_hash_value);
        transparent_crc(g_1461[i].f4, "g_1461[i].f4", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1517[i], "g_1517[i]", print_hash_value);

    }
    transparent_crc(g_1518, "g_1518", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
