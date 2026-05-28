// SPDX-License-Identifier: MIT
// cctest_csmith_1af96cc3.c --- cctest case csmith_1af96cc3 (csmith seed 452553923)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe2bb8881 */
/* @exp_ticks 0x3eea */

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

// Options:   -s 452553923 -o /tmp/csmith_gen_50ykf_fu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   int8_t  f1;
   struct S0  f2;
   uint64_t  f3;
   int16_t  f4;
   const int16_t  f5;
};
#pragma pack(pop)

union U2 {
   const int64_t  f0;
   int32_t  f1;
   int64_t  f2;
   const struct S0  f3;
};


static int32_t g_3 = 0xED8F6EFBL;
static int32_t g_30 = 0xD57638FFL;
static int8_t g_31 = 1L;
static uint32_t g_33 = 0x7DBC8B69L;
static int64_t g_40[4] = {0x06AB81D4B4EA65D3LL,0x06AB81D4B4EA65D3LL,0x06AB81D4B4EA65D3LL,0x06AB81D4B4EA65D3LL};
static uint32_t g_42[1][2] = {{0UL,0UL}};
static struct S1 g_44 = {{0x36E219E4L,0x412C2192B58EFE57LL,0xDBE4212CL},-4L,{1UL,4UL,0x5C9E2F09L},18446744073709551610UL,-3L,0xEB95L};
static uint16_t g_45 = 0xF72EL;
static uint8_t g_54 = 0x89L;
static int8_t g_80[3] = {0L,0L,0L};
static int32_t g_82[3][1] = {{0L},{0L},{0L}};
static uint16_t g_107 = 0x0344L;
static uint8_t g_231 = 1UL;
static union U2 g_250 = {-3L};
static uint8_t g_299 = 0UL;



static struct S0  func_1(void);
static struct S1  func_4(struct S0  p_5, uint16_t  p_6, int32_t  p_7, int8_t  p_8);
static struct S0  func_9(int8_t  p_10);
static uint32_t  func_13(int16_t  p_14, int32_t  p_15, struct S0  p_16, int32_t  p_17, struct S1  p_18);




static struct S0  func_1(void)
{ 
    int32_t l_2[2];
    int32_t l_41 = 1L;
    struct S0 l_43 = {0xCA380790L,18446744073709551611UL,0xDB596534L};
    int64_t l_282[5] = {0xADB63AA83157B272LL,0xADB63AA83157B272LL,0xADB63AA83157B272LL,0xADB63AA83157B272LL,0xADB63AA83157B272LL};
    uint32_t l_283 = 8UL;
    int32_t l_293[5][5][5] = {{{0xBF3A690FL,(-1L),(-7L),0xCB063AD0L,(-7L)},{7L,7L,0xEB7112F1L,0L,7L},{(-1L),0xCB063AD0L,(-1L),(-1L),0xEABB476BL},{7L,(-1L),(-1L),7L,0x26ABD109L},{0xBF3A690FL,0xCB063AD0L,0xDC7E6054L,0xCB063AD0L,0xBF3A690FL}},{{0x26ABD109L,7L,(-1L),(-1L),0x26ABD109L},{(-1L),0xA9AC5DE7L,0xAB3579C4L,(-1L),0xAB3579C4L},{0x26ABD109L,(-1L),0L,0x26ABD109L,0x26ABD109L},{0xDC7E6054L,(-1L),0xDC7E6054L,0xA9AC5DE7L,(-7L)},{0x26ABD109L,0L,0xEB7112F1L,(-1L),0L}},{{(-1L),(-1L),0xEABB476BL,(-1L),(-1L)},{0L,(-1L),0xEB7112F1L,0L,0x26ABD109L},{(-7L),0xA9AC5DE7L,0xDC7E6054L,(-1L),0xDC7E6054L},{0x26ABD109L,0x26ABD109L,0L,(-1L),0x26ABD109L},{0xAB3579C4L,(-1L),0xAB3579C4L,0xA9AC5DE7L,(-1L)}},{{0x26ABD109L,0xEB7112F1L,0xEB7112F1L,0x26ABD109L,0L},{(-7L),(-1L),0xBF3A690FL,(-1L),(-7L)},{0L,0x26ABD109L,0xEB7112F1L,0xEB7112F1L,0x26ABD109L},{(-1L),0xA9AC5DE7L,0xAB3579C4L,(-1L),0xAB3579C4L},{0x26ABD109L,(-1L),0L,0x26ABD109L,0x26ABD109L}},{{0xDC7E6054L,(-1L),0xDC7E6054L,0xA9AC5DE7L,(-7L)},{0x26ABD109L,0L,0xEB7112F1L,(-1L),0L},{(-1L),(-1L),0xEABB476BL,(-1L),(-1L)},{0L,(-1L),0xEB7112F1L,0L,0x26ABD109L},{(-7L),0xA9AC5DE7L,0xDC7E6054L,(-1L),0xDC7E6054L}}};
    uint32_t l_310[1][2];
    int32_t l_319[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2[i] = 0x7909B792L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_310[i][j] = 0xB66BD2A7L;
    }
    for (i = 0; i < 2; i++)
        l_319[i] = 0x3EE06602L;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t l_32 = 1L;
        int32_t l_291[1][4][4] = {{{0x47CABF47L,0x47CABF47L,0x3186A5EAL,0x47CABF47L},{0x47CABF47L,0x91710C86L,0x91710C86L,0x47CABF47L},{0x91710C86L,0x47CABF47L,0x91710C86L,0x91710C86L},{0x47CABF47L,0x47CABF47L,0x3186A5EAL,0x47CABF47L}}};
        uint16_t l_296[2][5][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_296[i][j][k] = 5UL;
            }
        }
        g_82[1][0] = (func_4(func_9((g_31 = (safe_add_func_int32_t_s_s(l_2[g_3], func_13((g_42[0][0] = ((~(safe_add_func_int64_t_s_s(0x3019C36C1D66BD5DLL, (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((++g_33), (safe_add_func_int16_t_s_s((g_40[3] = (safe_lshift_func_uint16_t_u_u(65535UL, 11))), (l_41 |= l_32))))) , l_32), 0L)) != l_2[g_3]), (-1L))) , 252UL), 5))))) <= l_2[g_3])), g_31, l_43, g_30, g_44))))), l_282[1], l_32, l_283) , 0xC83A24B7L);
        for (g_44.f0.f2 = 0; (g_44.f0.f2 <= 1); g_44.f0.f2 += 1)
        { 
            int16_t l_292 = 0xF848L;
            int32_t l_294 = (-1L);
            int32_t l_295[2];
            int i;
            for (i = 0; i < 2; i++)
                l_295[i] = (-1L);
            l_296[0][4][0]++;
        }
        l_291[0][0][0] |= (g_299 , (g_54 > ((safe_div_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((g_231 = l_43.f0) || (safe_rshift_func_int8_t_s_u((-1L), g_231))), g_44.f2.f1)), l_41)), g_42[0][0])) ^ l_2[g_3]) == 0UL), l_310[0][0])) || 1UL)));
    }
    l_41 |= (((((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((0x3DL != (~(safe_rshift_func_uint16_t_u_s(l_319[1], (l_293[3][0][0] = (safe_div_func_uint64_t_u_u(((l_282[1] > (g_299 == g_44.f2.f2)) , l_319[0]), g_30))))))) != 0x848DF2F150483217LL), (-5L))), 5)))) == l_282[3]) | 0xE45C02AAL) && 0x83CFL) == g_80[2]);
    return g_44.f2;
}



static struct S1  func_4(struct S0  p_5, uint16_t  p_6, int32_t  p_7, int8_t  p_8)
{ 
    union U2 l_284 = {1L};
    struct S0 l_287 = {4294967286UL,18446744073709551608UL,0x7AD21391L};
    struct S1 l_290 = {{0xFD500BA4L,0x9AEBDD5C616B5F81LL,0x0A819CEEL},-10L,{0x3A2BE24FL,0x4196A91D9EB6B44ALL,0L},0x758533D8CC824D22LL,-6L,0x7C45L};
    l_284.f1 = ((l_284 , (-1L)) && ((((safe_add_func_int8_t_s_s(((p_5 = l_287) , (safe_rshift_func_uint16_t_u_u(g_44.f3, 1))), g_250.f0)) >= 254UL) | 65535UL) || l_287.f2));
    return l_290;
}



static struct S0  func_9(int8_t  p_10)
{ 
    int8_t l_60[5][1][4];
    int32_t l_67 = 1L;
    struct S0 l_68 = {0x2B73F0FFL,0UL,0xF61EE9EDL};
    int32_t l_89[1][5][1];
    int16_t l_93 = (-10L);
    uint8_t l_139 = 0x76L;
    struct S1 l_142 = {{0xB7ECD135L,1UL,0x21C504DFL},0x34L,{0x57E9770FL,0xF8A80EA506B42480LL,0xCA476E1AL},1UL,0L,-4L};
    int16_t l_162[2];
    uint64_t l_281 = 18446744073709551612UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_60[i][j][k] = 0x2CL;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_89[i][j][k] = 3L;
        }
    }
    for (i = 0; i < 2; i++)
        l_162[i] = (-1L);
    for (g_44.f3 = 0; (g_44.f3 > 37); ++g_44.f3)
    { 
        int32_t l_71 = (-1L);
        uint32_t l_79 = 4UL;
        int32_t l_83 = (-1L);
        int32_t l_84 = 6L;
        int32_t l_85 = 0x3C6C1BF4L;
        int32_t l_86[1];
        int16_t l_90 = 0L;
        int64_t l_97[2][2][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_86[i] = 0x2CFB6CEFL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_97[i][j][k] = 0L;
            }
        }
        for (g_30 = 0; (g_30 <= 0); g_30 += 1)
        { 
            struct S0 l_55 = {3UL,18446744073709551612UL,0xD0DC5042L};
            int i, j;
            if (g_42[g_30][(g_30 + 1)])
            { 
                struct S0 l_51[4][5][5] = {{{{0UL,18446744073709551609UL,3L},{0xE5337C48L,18446744073709551615UL,0x02DE648FL},{0xA88BB409L,18446744073709551615UL,0xD9ACC98CL},{0x1DA982E5L,7UL,-1L},{4294967288UL,18446744073709551608UL,3L}},{{0x2CAB94E7L,0x8FE0BD880D91824DLL,0x47CC04BEL},{0UL,0xA5DE3B0BAB1DDA34LL,0xD5C8807CL},{0UL,18446744073709551613UL,0xC631A1BBL},{0xC16D211AL,18446744073709551609UL,-1L},{0x513F0F01L,0x95A7F279EC88C485LL,0x2798E9ECL}},{{1UL,18446744073709551615UL,0xA3864406L},{4294967295UL,0x728A6F30DCE90FC2LL,-1L},{0xFD65E783L,0xFB6AB9C1A6072D4BLL,9L},{0xFD65E783L,0xFB6AB9C1A6072D4BLL,9L},{4294967295UL,0x728A6F30DCE90FC2LL,-1L}},{{0xC98F2C16L,0x9A65E11ED7A4D755LL,-1L},{1UL,0xE5C3E0E7A75E415BLL,0L},{9UL,2UL,0L},{0x39995E3EL,0xF21D7ACA13C84519LL,0x63DFDF94L},{5UL,0UL,0L}},{{1UL,18446744073709551614UL,0L},{0xF02481C6L,8UL,0x022C981DL},{4294967290UL,7UL,0L},{0UL,18446744073709551609UL,3L},{5UL,0x07B36282DC260345LL,0xE53ADD1EL}}},{{{0UL,18446744073709551613UL,0xC631A1BBL},{4294967292UL,18446744073709551610UL,0xEDFBC0B8L},{1UL,2UL,0x6C7C9CA9L},{0x2CAB94E7L,0x8FE0BD880D91824DLL,0x47CC04BEL},{4294967295UL,0x0BB767B376A3B401LL,0x7A30E593L}},{{1UL,18446744073709551614UL,0L},{0xF58CCD7FL,1UL,0L},{0x1DA982E5L,7UL,-1L},{1UL,18446744073709551615UL,0xA3864406L},{0xD07FB140L,18446744073709551613UL,0x619A7386L}},{{0xC98F2C16L,0x9A65E11ED7A4D755LL,-1L},{4294967294UL,18446744073709551615UL,0xFB0CE4C8L},{4294967294UL,18446744073709551615UL,0xFB0CE4C8L},{0xC98F2C16L,0x9A65E11ED7A4D755LL,-1L},{9UL,2UL,0L}},{{1UL,18446744073709551615UL,0xA3864406L},{0x1DA982E5L,7UL,-1L},{0xF58CCD7FL,1UL,0L},{1UL,18446744073709551614UL,0L},{0UL,18446744073709551609UL,-1L}},{{0x2CAB94E7L,0x8FE0BD880D91824DLL,0x47CC04BEL},{1UL,2UL,0x6C7C9CA9L},{4294967292UL,18446744073709551610UL,0xEDFBC0B8L},{0UL,18446744073709551613UL,0xC631A1BBL},{0x81EE239CL,0UL,0xD8942C1FL}}},{{{0UL,18446744073709551609UL,3L},{4294967290UL,7UL,0L},{0xF02481C6L,8UL,0x022C981DL},{1UL,18446744073709551614UL,0L},{0x5BA07B4DL,0x34B0E876F31F8A02LL,-8L}},{{0x39995E3EL,0xF21D7ACA13C84519LL,0x63DFDF94L},{9UL,2UL,0L},{1UL,0xE5C3E0E7A75E415BLL,0L},{0xC98F2C16L,0x9A65E11ED7A4D755LL,-1L},{1UL,0xE5C3E0E7A75E415BLL,0L}},{{0xFD65E783L,0xFB6AB9C1A6072D4BLL,9L},{0xFD65E783L,0xFB6AB9C1A6072D4BLL,9L},{4294967295UL,0x728A6F30DCE90FC2LL,-1L},{1UL,18446744073709551615UL,0xA3864406L},{4294967290UL,7UL,0L}},{{0xC16D211AL,18446744073709551609UL,-1L},{0UL,18446744073709551613UL,0xC631A1BBL},{0UL,0xA5DE3B0BAB1DDA34LL,0xD5C8807CL},{0x2CAB94E7L,0x8FE0BD880D91824DLL,0x47CC04BEL},{0xC98F2C16L,0x9A65E11ED7A4D755LL,-1L}},{{0x1DA982E5L,7UL,-1L},{0xA88BB409L,18446744073709551615UL,0xD9ACC98CL},{0xE5337C48L,18446744073709551615UL,0x02DE648FL},{0UL,18446744073709551609UL,3L},{0x20859F89L,0xB2EF126ED30483F3LL,0x624665F0L}}},{{{9UL,2UL,0L},{0UL,18446744073709551613UL,0xC631A1BBL},{0x5F7E1E51L,0xD861344E0D2C3DA8LL,-1L},{0x39995E3EL,0xF21D7ACA13C84519LL,0x63DFDF94L},{1UL,0xE5C3E0E7A75E415BLL,0L}},{{4294967294UL,8UL,1L},{0x5BA07B4DL,0x34B0E876F31F8A02LL,-8L},{1UL,18446744073709551607UL,-10L},{0x5BA07B4DL,0x34B0E876F31F8A02LL,-8L},{4294967294UL,8UL,1L}},{{0UL,18446744073709551613UL,0xC631A1BBL},{4294967294UL,18446744073709551615UL,0xFB0CE4C8L},{4294967295UL,0xE11E7DC6E2FE0F9CLL,-10L},{0x399958B7L,0x26C73D51CD1B9B51LL,0x9DC45D42L},{5UL,0UL,0L}},{{0UL,18446744073709551609UL,3L},{1UL,18446744073709551615UL,0xA3864406L},{0x20859F89L,0xB2EF126ED30483F3LL,0x624665F0L},{4294967293UL,0x43A6B221C00E8DF1LL,-7L},{1UL,18446744073709551607UL,-10L}},{{4294967295UL,0xE11E7DC6E2FE0F9CLL,-10L},{0xC16D211AL,18446744073709551609UL,-1L},{0x480AB10EL,0x2AF6034A10173A06LL,1L},{4294967294UL,18446744073709551615UL,0xFB0CE4C8L},{5UL,0UL,0L}}}};
                int i, j, k;
                return l_51[3][4][1];
            }
            else
            { 
                g_54 = ((((g_44.f2.f1 >= ((safe_add_func_uint16_t_u_u(p_10, p_10)) , g_44.f2.f1)) ^ 0L) ^ g_44.f1) && g_44.f4);
                g_44.f2 = l_55;
                if (p_10)
                    break;
            }
            l_67 = (safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((((4294967295UL >= l_60[1][0][1]) <= ((safe_lshift_func_int16_t_s_u((g_3 , (safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((-6L) && 6L), 248UL)) ^ p_10), l_55.f2))), 8)) , l_60[1][0][1])) ^ p_10), 65532UL)) == l_60[1][0][1]), 0));
            return l_68;
        }
        if ((safe_mul_func_int16_t_s_s(l_71, (safe_div_func_int16_t_s_s((0x9DL != (safe_unary_minus_func_uint8_t_u((l_71 , (((g_44.f4 = (((safe_rshift_func_int16_t_s_u((((safe_div_func_int16_t_s_s(((g_44.f2 , g_44.f0.f0) || 0x1865L), (-1L))) && p_10) , (-1L)), 2)) , g_44.f4) , p_10)) | l_79) || 0x08E4DAEFL))))), g_44.f0.f2)))))
        { 
            int64_t l_81 = 0x033D0BF8AE0A268BLL;
            int32_t l_87 = 0x70F10FCCL;
            int32_t l_88 = (-3L);
            int32_t l_91 = 0x2C957D00L;
            int32_t l_92[2];
            uint16_t l_94 = 0x974BL;
            int i;
            for (i = 0; i < 2; i++)
                l_92[i] = 6L;
            l_68 = l_68;
            l_94++;
            if (l_97[1][1][0])
                break;
        }
        else
        { 
            struct S0 l_98 = {0UL,0x998005E257605C23LL,0x66CE57EEL};
            uint16_t l_103 = 0x3B03L;
            int32_t l_126 = 0x151E09FDL;
            int32_t l_131[5];
            int i;
            for (i = 0; i < 5; i++)
                l_131[i] = (-3L);
            if (g_33)
            { 
                return l_98;
            }
            else
            { 
                g_107 &= (((safe_sub_func_int16_t_s_s(0x4877L, (safe_mod_func_uint32_t_u_u(((((((g_44.f2.f1 = (l_103 && (g_82[0][0] &= (~(safe_add_func_uint8_t_u_u(g_45, (g_42[0][1] , p_10))))))) > p_10) , g_40[2]) , (-2L)) | g_44.f4) != 0x74L), 6L)))) && p_10) & g_44.f4);
            }
            g_82[1][0] |= (l_89[0][4][0] && ((!(l_97[1][1][0] , (safe_mod_func_uint16_t_u_u(((((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(0x3EL, (p_10 & g_80[0]))), (-1L))) != g_44.f4) != g_44.f5) ^ p_10), 1UL)))) , 2UL));
            if ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((!(((g_44 , 0x38DBA4FD995B201DLL) != 0xDBA4BFDF757B935ALL) <= 8UL)), g_44.f2.f1)), p_10)), g_44.f2.f0)))
            { 
                uint16_t l_129 = 0x84F3L;
                int64_t l_130 = 7L;
                int32_t l_132 = 0L;
                int32_t l_133 = 0x5C898DBEL;
                int32_t l_134 = 1L;
                int32_t l_135 = (-6L);
                int32_t l_136 = (-1L);
                int32_t l_137 = 0x830B3060L;
                int32_t l_138 = 0L;
                struct S0 l_143 = {1UL,0xBF42A532686C91CCLL,0x83393A02L};
                g_44.f0 = ((l_129 = (0UL <= ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(((l_126 = l_90) <= 4294967287UL), ((safe_lshift_func_uint8_t_u_u((g_54 ^= 3UL), 3)) , 0x00L))) <= 0x10810DBFEEEC8347LL) == g_82[1][0]), (-5L))) || 0xB175L))) , l_98);
                ++l_139;
                l_143 = (l_142 , l_98);
            }
            else
            { 
                l_131[2] &= l_142.f0.f2;
            }
        }
    }
    if ((safe_lshift_func_uint8_t_u_u((((l_67 ^= ((((l_89[0][0][0] = ((safe_sub_func_uint64_t_u_u(l_68.f0, (g_44.f2 , (safe_div_func_uint16_t_u_u((g_3 , (l_142.f2.f0 != g_44.f0.f1)), l_68.f2))))) == (-1L))) != g_44.f5) | g_44.f5) | g_30)) >= 0x5642L) == p_10), l_142.f2.f2)))
    { 
        struct S1 l_163 = {{0xA6D0FD37L,18446744073709551613UL,-2L},0x3BL,{0xCEF9BD9DL,1UL,0x95BC61E9L},0x9F9731A4E5B9BD4ELL,0xE22FL,0x319FL};
        int32_t l_165 = 0xF21F2F86L;
        int32_t l_166[3][3][1] = {{{0x913A345DL},{1L},{1L}},{{0x913A345DL},{1L},{1L}},{{0x913A345DL},{1L},{1L}}};
        int i, j, k;
        if ((((safe_div_func_int16_t_s_s(p_10, (safe_add_func_uint16_t_u_u(((((~((255UL && 0x7CL) >= (p_10 >= 0x8E3D9C56D7985451LL))) > p_10) | l_60[1][0][0]) <= g_44.f4), g_82[1][0])))) ^ p_10) <= p_10))
        { 
            int32_t l_161[4][4][4] = {{{1L,9L,(-1L),1L},{0x32B75B0DL,9L,0x25444CFCL,9L},{9L,(-5L),0x535500DBL,0x06EE1C27L},{1L,0x32B75B0DL,(-1L),0x535500DBL}},{{1L,0xDDC82113L,(-1L),9L},{1L,(-1L),(-1L),1L},{1L,9L,0x535500DBL,(-1L)},{9L,0xDDC82113L,0x25444CFCL,0x06EE1C27L}},{{0x32B75B0DL,1L,(-1L),0x06EE1C27L},{1L,0xDDC82113L,1L,(-1L)},{1L,9L,0xE80A38D9L,1L},{0x32B75B0DL,(-1L),0x535500DBL,9L}},{{(-1L),0xDDC82113L,0x535500DBL,0x535500DBL},{0x32B75B0DL,0x32B75B0DL,0xE80A38D9L,0x06EE1C27L},{1L,(-5L),1L,9L},{1L,9L,(-1L),1L}}};
            int i, j, k;
            for (l_142.f3 = 0; (l_142.f3 <= 2); l_142.f3 += 1)
            { 
                int i;
                l_161[3][2][3] |= ((safe_mod_func_int16_t_s_s(((g_40[2] = (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0x8F5AF2D6737CD069LL, g_80[l_142.f3])), g_44.f0.f1))) != 1L), 0x55B0L)) >= g_44.f4);
            }
            l_161[2][3][0] = l_162[1];
        }
        else
        { 
            int16_t l_164 = 8L;
            int32_t l_167 = 0x69EA1156L;
            int32_t l_168 = 0xFCEFBF10L;
            uint32_t l_169[5][3][3] = {{{0xC07AC505L,0xC07AC505L,0xFF88ED9EL},{0x5B23408CL,0x368ACE75L,0UL},{0xD4496F3EL,0xC07AC505L,0xD4496F3EL}},{{0x30F2670DL,0x5B23408CL,9UL},{0x65C340BFL,0xD4496F3EL,0xD4496F3EL},{9UL,0x30F2670DL,0UL}},{{0xAD0A9A31L,0x65C340BFL,0xFF88ED9EL},{9UL,9UL,4294967295UL},{0x65C340BFL,0xAD0A9A31L,4294967290UL}},{{0x30F2670DL,9UL,0x30F2670DL},{0xD4496F3EL,0x65C340BFL,0xC07AC505L},{0x5B23408CL,0x30F2670DL,0x30F2670DL}},{{0xC07AC505L,0xD4496F3EL,4294967290UL},{0x368ACE75L,0x5B23408CL,4294967295UL},{0xC07AC505L,0xC07AC505L,0xFF88ED9EL}}};
            int i, j, k;
            l_67 = (((g_44.f1 != (p_10 && 0x13D5L)) && (l_163 , l_164)) > 0x55B03BA4L);
            ++l_169[0][1][1];
            for (l_163.f4 = 26; (l_163.f4 <= (-11)); l_163.f4--)
            { 
                uint64_t l_180 = 18446744073709551613UL;
                g_82[1][0] &= ((safe_add_func_uint16_t_u_u(g_33, (g_80[2] | (safe_mod_func_uint16_t_u_u(p_10, (safe_sub_func_uint16_t_u_u(((l_180 = 0x2FL) != l_168), l_162[1]))))))) | 0x2DEA6EFF20B687CDLL);
            }
        }
        g_82[1][0] = (((1L > (safe_mod_func_uint16_t_u_u(0x8476L, 65535UL))) == (safe_rshift_func_uint16_t_u_s(g_44.f2.f2, 11))) && l_142.f0.f0);
    }
    else
    { 
        const uint8_t l_194 = 0xEFL;
        int32_t l_251 = (-1L);
lbl_252:
        for (l_139 = 27; (l_139 == 13); l_139--)
        { 
            int16_t l_189 = 0x2182L;
            l_189 = (safe_sub_func_uint64_t_u_u(g_42[0][0], 0x257EC42770DCDAA2LL));
        }
        if (((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(0xFB4CL, 11)) | ((g_107 = ((g_82[1][0] = (l_194 == ((safe_div_func_uint16_t_u_u(g_42[0][0], (((0UL <= g_107) & l_142.f0.f0) & g_44.f5))) != p_10))) && g_31)) , g_31)), l_194)) >= g_44.f3))
        { 
            int16_t l_220[2][2][2] = {{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}}};
            int i, j, k;
            l_67 ^= p_10;
            l_220[0][0][1] = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_u((!(safe_mul_func_int16_t_s_s((l_89[0][1][0] ^= (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_82[1][0], (safe_lshift_func_int8_t_s_u(0x08L, 3)))), (safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(p_10, 10)) <= (safe_rshift_func_int8_t_s_u((p_10 <= g_44.f0.f2), l_162[1]))), p_10)))), 1UL))), 0UL))), p_10)) & 0L) > g_44.f2.f2), p_10)), g_80[0]));
            if ((g_44.f2 , (g_82[1][0] = ((safe_lshift_func_int8_t_s_s(p_10, (4294967295UL != (!(safe_add_func_uint16_t_u_u((g_45--), (safe_unary_minus_func_int32_t_s((safe_mul_func_uint16_t_u_u(((g_231 = p_10) & 0x53L), 0x088EL)))))))))) >= g_82[1][0]))))
            { 
                uint8_t l_240 = 4UL;
                int32_t l_257 = 0xCB51733BL;
                g_82[1][0] ^= (((l_251 = (((safe_lshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((((l_240 < (safe_unary_minus_func_int16_t_s((safe_div_func_int16_t_s_s(l_220[0][0][1], 0x1C7DL))))) , ((safe_mod_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_250 , 0x3B32L), 3)), 0x0DL)) | p_10) > l_142.f0.f2), l_194)) == g_54)) & l_194) < 18446744073709551608UL) && l_194) <= g_54), l_220[0][1][0])), l_194)), (-4L))) , l_93), 3)) == (-3L)) != l_194)) | l_220[1][0][0]) , l_220[1][1][0]);
                if (g_44.f2.f0)
                    goto lbl_252;
                l_257 &= (safe_mod_func_int32_t_s_s(((l_142.f2.f0 != (safe_sub_func_uint16_t_u_u((p_10 , 65527UL), g_31))) ^ p_10), 0x84B2CCAAL));
            }
            else
            { 
                g_82[1][0] = l_194;
            }
        }
        else
        { 
            for (g_231 = (-18); (g_231 > 49); g_231 = safe_add_func_uint32_t_u_u(g_231, 1))
            { 
                g_82[0][0] &= ((safe_lshift_func_uint8_t_u_u(0xE8L, 0)) <= (safe_lshift_func_int16_t_s_s(1L, 8)));
            }
            l_251 |= (safe_mod_func_int64_t_s_s(l_194, (g_250 , 0xF900EB878589A203LL)));
        }
    }
    l_89[0][4][0] = (safe_sub_func_uint32_t_u_u(((((g_44.f2.f0 = l_60[0][0][1]) , ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_int64_t_s_s((l_68 , (safe_add_func_uint16_t_u_u(65535UL, (((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(p_10)) == p_10), 0xCB90L)), l_142.f0.f2)) >= 255UL) > l_68.f2)))), p_10)), l_142.f0.f0)), l_89[0][3][0])) | l_281)) || (-8L)) , g_33), l_142.f2.f0));
    return l_68;
}



static uint32_t  func_13(int16_t  p_14, int32_t  p_15, struct S0  p_16, int32_t  p_17, struct S1  p_18)
{ 
    int32_t l_48 = 0x25638444L;
    --g_45;
    return l_48;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_42[i][j], "g_42[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_44.f0.f0, "g_44.f0.f0", print_hash_value);
    transparent_crc(g_44.f0.f1, "g_44.f0.f1", print_hash_value);
    transparent_crc(g_44.f0.f2, "g_44.f0.f2", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_44.f2.f0, "g_44.f2.f0", print_hash_value);
    transparent_crc(g_44.f2.f1, "g_44.f2.f1", print_hash_value);
    transparent_crc(g_44.f2.f2, "g_44.f2.f2", print_hash_value);
    transparent_crc(g_44.f3, "g_44.f3", print_hash_value);
    transparent_crc(g_44.f4, "g_44.f4", print_hash_value);
    transparent_crc(g_44.f5, "g_44.f5", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_82[i][j], "g_82[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_250.f0, "g_250.f0", print_hash_value);
    transparent_crc(g_250.f1, "g_250.f1", print_hash_value);
    transparent_crc(g_250.f2, "g_250.f2", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
