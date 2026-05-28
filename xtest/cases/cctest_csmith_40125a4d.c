// SPDX-License-Identifier: MIT
// cctest_csmith_40125a4d.c --- cctest case csmith_40125a4d (csmith seed 1074944589)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3169d1a0 */
/* @exp_ticks 0xa2c5 */

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

// Options:   -s 1074944589 -o /tmp/csmith_gen_cn5htmg5/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const uint32_t  f1;
   int32_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   const uint32_t  f1;
   int8_t  f2;
   int32_t  f3;
};

union U2 {
   uint32_t  f0;
   const uint8_t  f1;
   int8_t * const  f2;
   const int64_t  f3;
};

union U3 {
   uint8_t  f0;
};


static union U2 g_10 = {0UL};
static struct S0 g_20 = {0x08ECB302L,0xFF63588CL,0x56123D4AL,1L};
static union U1 g_51 = {-3L};
static uint32_t *g_69 = &g_20.f0;
static int32_t g_75 = 0x55279C83L;
static uint64_t g_101 = 1UL;
static uint32_t g_104[1][3] = {{9UL,9UL,9UL}};
static int32_t g_126 = 0x40DCEDD9L;
static int64_t g_140 = 0x87C5F2286FB9873FLL;
static uint32_t g_142[3] = {1UL,1UL,1UL};
static uint16_t g_157 = 65535UL;
static uint32_t g_175 = 0UL;
static union U3 g_239 = {0xC6L};
static uint32_t **g_261 = &g_69;
static uint32_t ***g_260 = &g_261;
static uint8_t g_308 = 8UL;
static uint64_t *g_330 = &g_101;
static uint64_t **g_329 = &g_330;
static union U1 g_334[7] = {{0x974CCA55430AC928LL},{0x974CCA55430AC928LL},{0x974CCA55430AC928LL},{0x974CCA55430AC928LL},{0x974CCA55430AC928LL},{0x974CCA55430AC928LL},{0x974CCA55430AC928LL}};
static int16_t g_356 = 0L;
static int64_t g_379 = 0x9E8291654FE5E0AELL;
static int32_t g_380 = 0xAFE7A2BEL;
static uint8_t g_384 = 0x79L;
static uint8_t g_407 = 255UL;
static uint64_t g_421 = 2UL;
static int32_t g_441 = 0x85CEA285L;
static uint64_t g_447[4] = {18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL};
static const int16_t g_468 = 9L;
static uint16_t g_505 = 65533UL;
static uint32_t g_527 = 4294967291UL;
static uint32_t g_532 = 0xFF8AF2F0L;
static union U2 *g_547 = (void*)0;
static union U2 * const *g_546[7] = {&g_547,&g_547,&g_547,&g_547,&g_547,&g_547,&g_547};
static uint16_t *g_569 = &g_505;
static uint16_t **g_568 = &g_569;
static union U2 g_580 = {0x6C8784A2L};
static uint8_t g_592 = 0UL;
static int32_t g_621 = 0xEBE22240L;
static uint32_t g_622 = 0xF9586F99L;
static const union U2 g_644 = {0UL};
static const union U2 *g_643 = &g_644;
static const union U2 **g_642[3][1][1] = {{{&g_643}},{{&g_643}},{{&g_643}}};
static uint64_t g_657 = 18446744073709551613UL;
static int32_t *g_669 = &g_621;
static int32_t ** const g_668 = &g_669;
static int32_t ** const *g_667 = &g_668;
static union U3 *g_690 = &g_239;
static uint8_t g_739[1] = {0xD0L};
static int8_t *g_789 = &g_334[5].f2;
static int8_t **g_788 = &g_789;
static const uint64_t *g_852[3] = {&g_421,&g_421,&g_421};
static const uint64_t **g_851 = &g_852[1];
static const uint64_t ***g_850[3] = {&g_851,&g_851,&g_851};
static const uint64_t ****g_849 = &g_850[0];
static uint8_t g_866 = 0xFEL;
static union U2 g_938[2] = {{0xD1BB8AA0L},{0xD1BB8AA0L}};
static uint64_t g_951 = 0xE4E11323197C7C86LL;
static const union U3 g_1050[2][7][4] = {{{{0xC5L},{249UL},{0UL},{0xC5L}},{{0UL},{249UL},{255UL},{0UL}},{{0UL},{0UL},{255UL},{0xC5L}},{{0x62L},{0UL},{255UL},{0x62L}},{{0xC5L},{0UL},{249UL},{0xC5L}},{{0xC5L},{255UL},{255UL},{0xC5L}},{{0x62L},{0UL},{255UL},{0x62L}}},{{{0xC5L},{0UL},{249UL},{0xC5L}},{{0xC5L},{255UL},{255UL},{0xC5L}},{{0x62L},{0UL},{255UL},{0x62L}},{{0xC5L},{0UL},{249UL},{0xC5L}},{{0xC5L},{255UL},{255UL},{0xC5L}},{{0x62L},{0UL},{255UL},{0x62L}},{{0xC5L},{0UL},{249UL},{0xC5L}}}};
static union U2 **g_1096 = &g_547;
static union U2 ***g_1095[7] = {&g_1096,&g_1096,&g_1096,&g_1096,&g_1096,&g_1096,&g_1096};
static const int16_t *g_1100 = (void*)0;
static const int16_t **g_1099 = &g_1100;
static uint16_t g_1107[6][5] = {{0x20ECL,0x4545L,0x9384L,0xFF2EL,1UL},{0x4545L,0x20ECL,0x9384L,65528UL,0x9384L},{0x4545L,0x4545L,65527UL,65528UL,1UL},{0x20ECL,0x4545L,0x9384L,0xFF2EL,1UL},{0x4545L,0x20ECL,0x9384L,65528UL,0x9384L},{0x4545L,0x4545L,65527UL,65528UL,1UL}};
static uint32_t g_1220 = 4294967295UL;
static union U1 *g_1228 = &g_334[5];
static union U1 **g_1227 = &g_1228;
static int64_t g_1282 = (-1L);
static uint64_t g_1283[5][4] = {{0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL,0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL},{0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL,0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL},{0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL,0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL},{0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL,0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL},{0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL,0xC19F93AC917F906ELL,0x648671DE85CA5AD0LL}};
static uint32_t g_1327 = 0xBD3444F1L;
static uint64_t ***g_1388 = &g_329;
static uint64_t g_1439 = 0UL;
static int8_t *g_1562 = &g_334[5].f2;
static int16_t g_1570 = 1L;
static union U1 g_1626 = {0x3D57C9E4EBEAB029LL};
static uint16_t g_1643[1] = {65535UL};
static uint32_t *g_1671[3][1] = {{&g_142[0]},{&g_142[0]},{&g_142[0]}};
static int64_t g_1692 = 0x33BF27ED5485E9D9LL;
static uint64_t g_1693 = 0x3A1DB7E02022E81FLL;
static uint64_t ****g_1740 = &g_1388;
static uint64_t *****g_1739[4] = {&g_1740,&g_1740,&g_1740,&g_1740};
static int32_t g_1807 = 1L;
static int32_t g_1808 = (-1L);
static uint32_t g_1809 = 0xC3B624E5L;
static uint64_t ** const **g_1835 = (void*)0;
static uint64_t ** const ***g_1834 = &g_1835;
static struct S0 *g_1838[4][4] = {{&g_20,(void*)0,&g_20,&g_20},{&g_20,(void*)0,(void*)0,&g_20},{(void*)0,&g_20,&g_20,&g_20},{(void*)0,&g_20,(void*)0,&g_20}};
static struct S0 **g_1837[7] = {&g_1838[0][3],&g_1838[0][3],&g_1838[0][3],&g_1838[0][3],&g_1838[0][3],&g_1838[0][3],&g_1838[0][3]};
static const union U3 *g_1928 = &g_239;
static uint16_t ***g_1965[7][1][2] = {{{&g_568,&g_568}},{{&g_568,&g_568}},{{&g_568,&g_568}},{{&g_568,&g_568}},{{&g_568,&g_568}},{{&g_568,&g_568}},{{&g_568,&g_568}}};
static int64_t g_1967 = 0xBF9EE2A939BE9A24LL;
static uint64_t g_2029 = 0xCEE02C542B9845FCLL;
static const uint8_t g_2102 = 253UL;
static union U2 ****g_2105 = &g_1095[3];
static uint64_t g_2110 = 0x401C569133B9B205LL;
static int64_t g_2186 = (-1L);
static uint64_t g_2190 = 18446744073709551606UL;
static uint16_t g_2225 = 3UL;
static int16_t *g_2237 = &g_1570;
static int16_t **g_2236 = &g_2237;
static int16_t ***g_2235 = &g_2236;
static union U3 **g_2239 = &g_690;
static union U3 ***g_2238 = &g_2239;
static uint32_t g_2272 = 0UL;
static union U2 g_2275 = {0x6EDFF1EEL};
static int64_t g_2295 = 0x4BC44846C618E470LL;
static uint64_t g_2296[7] = {0xD0CB0FF3BCEBB5B3LL,0xD0CB0FF3BCEBB5B3LL,0xD0CB0FF3BCEBB5B3LL,0xD0CB0FF3BCEBB5B3LL,0xD0CB0FF3BCEBB5B3LL,0xD0CB0FF3BCEBB5B3LL,0xD0CB0FF3BCEBB5B3LL};
static union U1 g_2316 = {-2L};
static uint64_t g_2351[6][1] = {{0xA16C5634FB279008LL},{0xC8449E4DF8F0F9CFLL},{0xC8449E4DF8F0F9CFLL},{0xA16C5634FB279008LL},{0xC8449E4DF8F0F9CFLL},{0xC8449E4DF8F0F9CFLL}};
static int16_t g_2356 = 0xFFDEL;
static uint32_t g_2358 = 0UL;
static const struct S0 *g_2364 = &g_20;
static const struct S0 **g_2363[7][6] = {{&g_2364,&g_2364,&g_2364,&g_2364,&g_2364,&g_2364},{&g_2364,&g_2364,&g_2364,&g_2364,&g_2364,&g_2364},{&g_2364,&g_2364,&g_2364,&g_2364,&g_2364,&g_2364},{&g_2364,&g_2364,&g_2364,&g_2364,&g_2364,&g_2364},{&g_2364,&g_2364,&g_2364,&g_2364,&g_2364,&g_2364},{&g_2364,&g_2364,&g_2364,&g_2364,&g_2364,&g_2364},{&g_2364,&g_2364,&g_2364,&g_2364,&g_2364,&g_2364}};
static int32_t g_2407 = (-2L);
static int32_t g_2431[7][3][1] = {{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}},{{1L},{1L},{1L}}};
static int32_t g_2436 = (-1L);
static const struct S0 ***g_2452[1][1][4] = {{{&g_2363[3][2],&g_2363[3][2],&g_2363[3][2],&g_2363[3][2]}}};
static struct S0 g_2632 = {0UL,0x2A7DA1C8L,6L,-1L};
static const int8_t g_2685[4][4][5] = {{{0xDCL,0L,0xF8L,0xA9L,0xCAL},{(-6L),1L,0xC8L,0xDCL,0L},{0L,0L,0xA3L,0xC7L,0L},{0xC7L,0x36L,4L,0x4DL,0xA3L}},{{1L,(-6L),0xA9L,0x43L,0xEEL},{0x4DL,0x9AL,0xA9L,0xDCL,0L},{1L,4L,4L,1L,0x2CL},{(-1L),0L,0xA3L,0xE4L,(-6L)}},{{0L,0x43L,0xC8L,0x07L,0xF8L},{0xA9L,2L,0xF8L,0xE4L,1L},{0L,1L,0x9AL,1L,0x07L},{0L,0xCDL,8L,0xDCL,(-8L)}},{{2L,0L,0xDCL,0x43L,(-8L)},{0x01L,0x07L,0x4DL,0x4DL,0x07L},{0xCAL,0x4DL,0x41L,0xC7L,1L},{0x43L,0xF8L,0L,0xDCL,0xF8L}}};
static const int8_t g_2687 = 1L;
static const int8_t *g_2686[7][1] = {{&g_2687},{&g_2685[0][1][0]},{&g_2685[0][1][0]},{&g_2687},{&g_2685[0][1][0]},{&g_2685[0][1][0]},{&g_2687}};
static uint16_t ** const *g_2776 = (void*)0;
static struct S0 g_2835 = {3UL,4294967294UL,0x589B8435L,-9L};
static int8_t g_2914 = 1L;
static int16_t ****g_2931 = &g_2235;
static int16_t *****g_2930 = &g_2931;
static uint64_t **g_2968 = (void*)0;
static const int32_t *g_2980 = &g_2431[4][2][0];
static int32_t g_3009 = (-1L);
static int64_t g_3017 = 0xA836A33717EBFC53LL;
static int8_t ***g_3026 = &g_788;
static int8_t ****g_3025 = &g_3026;
static const int8_t **g_3036[4][3][2] = {{{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]}},{{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]}},{{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]}},{{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]},{&g_2686[0][0],&g_2686[0][0]}}};
static const int8_t ***g_3035 = &g_3036[2][2][1];
static uint8_t g_3041 = 1UL;
static uint64_t g_3068[7] = {0xC5522A0E662965D9LL,0xC5522A0E662965D9LL,0xCDE99173535C5688LL,0xC5522A0E662965D9LL,0xC5522A0E662965D9LL,0xCDE99173535C5688LL,0xC5522A0E662965D9LL};
static struct S0 g_3151 = {3UL,0xC87DF121L,-1L,0x2BL};
static int16_t g_3204 = 0xB78CL;
static uint8_t *g_3234 = &g_739[0];
static uint8_t g_3334 = 0xC4L;
static const int32_t *g_3448 = (void*)0;
static const int32_t **g_3447 = &g_3448;
static struct S0 g_3452 = {18446744073709551608UL,0x1089A15BL,-7L,-1L};
static uint16_t g_3454[1] = {0xA919L};



static const int8_t  func_1(void);
static const int64_t  func_4(int8_t * p_5, union U3  p_6, int8_t * p_7, int8_t * p_8, int32_t  p_9);
static int8_t * func_18(struct S0  p_19);
static const int32_t  func_22(int64_t  p_23);
static int8_t  func_24(int8_t  p_25, int8_t * p_26, int8_t * p_27, int32_t  p_28, int8_t * p_29);
static int8_t * func_32(uint32_t  p_33, union U3  p_34, int8_t * p_35, uint32_t  p_36, int8_t * p_37);
static union U3  func_40(int16_t  p_41, int8_t * p_42, int8_t * p_43, int8_t * p_44);
static const uint32_t * func_46(struct S0  p_47, union U1  p_48, union U2  p_49, int32_t  p_50);




static const int8_t  func_1(void)
{ 
    int8_t *l_17 = (void*)0;
    const int8_t *l_2684 = &g_2685[0][1][0];
    const int8_t **l_2683[2];
    int32_t l_3453 = 0x417B81A9L;
    int i;
    for (i = 0; i < 2; i++)
        l_2683[i] = &l_2684;
    g_3454[0] &= (3L <= (safe_div_func_int64_t_s_s(func_4(((g_10 , ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((l_17 != (g_2686[0][0] = func_18(g_20))), ((void*)0 == (*g_667)))), 14)) || 0L)) , (void*)0), (*g_1928), l_17, g_1562, g_239.f0), l_3453)));
    for (g_3009 = 0; (g_3009 > (-9)); g_3009--)
    { 
        const int16_t l_3460[7] = {1L,2L,1L,1L,2L,1L,1L};
        int i;
        for (g_3017 = 0; (g_3017 <= (-30)); g_3017--)
        { 
            int16_t l_3459[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            if (l_3459[3])
                break;
        }
        (*g_668) = (void*)0;
        return l_3460[0];
    }
    return l_3453;
}



static const int64_t  func_4(int8_t * p_5, union U3  p_6, int8_t * p_7, int8_t * p_8, int32_t  p_9)
{ 
    uint32_t l_2692 = 18446744073709551606UL;
    int32_t l_2706 = 0L;
    int32_t l_2707 = 0x3BFB73C0L;
    int32_t l_2713 = 0x4B560A20L;
    int32_t l_2714 = 0x7D7C8BB7L;
    int32_t l_2715 = (-2L);
    int32_t l_2716 = 0x58DC03B0L;
    int32_t l_2717 = (-1L);
    int32_t l_2718 = (-2L);
    int32_t l_2719 = 0L;
    int32_t l_2720[1][2];
    int32_t l_2721[6][6][2] = {{{0x4CD612E5L,0xF1DB21A5L},{9L,(-7L)},{0x396A8562L,9L},{1L,0xDC647071L},{1L,9L},{0x396A8562L,(-7L)}},{{9L,0xF1DB21A5L},{0x4CD612E5L,0L},{0xF0A1DBB8L,0x6C03970EL},{0x6C03970EL,0x65A8674BL},{9L,0xDC647071L},{0x6C03970EL,0xF0A1DBB8L}},{{1L,0xF1DB21A5L},{0x65A8674BL,0xADF3730EL},{8L,0x8D18D2AAL},{0xF1DB21A5L,0x8D18D2AAL},{8L,0xADF3730EL},{0x65A8674BL,0xF1DB21A5L}},{{1L,0xF0A1DBB8L},{0x6C03970EL,0xDC647071L},{0x340CFA88L,8L},{0xCD25FA04L,0xCD25FA04L},{(-3L),0x65A8674BL},{(-7L),1L}},{{0x863BBFDDL,9L},{0L,0x863BBFDDL},{0xF0A1DBB8L,0x396A8562L},{0xF0A1DBB8L,0x863BBFDDL},{0L,9L},{0x863BBFDDL,1L}},{{(-7L),0x65A8674BL},{(-3L),0xCD25FA04L},{0xCD25FA04L,8L},{0x340CFA88L,0xDC647071L},{0x6C03970EL,0xF0A1DBB8L},{1L,0xF1DB21A5L}}};
    int32_t l_2722 = 0x2C12B5A2L;
    uint8_t l_2723 = 247UL;
    int64_t l_2732[7][5] = {{(-4L),(-4L),3L,8L,0x6489CBF9183FCDDBLL},{0x069A464892E55497LL,5L,(-4L),5L,0x069A464892E55497LL},{0x6489CBF9183FCDDBLL,8L,3L,(-4L),(-4L)},{1L,5L,1L,0xA432B1466FDFBBCBLL,1L},{0x6489CBF9183FCDDBLL,(-4L),8L,8L,(-4L)},{0x069A464892E55497LL,0xA432B1466FDFBBCBLL,(-4L),0xA432B1466FDFBBCBLL,0x069A464892E55497LL},{(-4L),8L,8L,(-4L),0x6489CBF9183FCDDBLL}};
    union U3 ***l_2751 = &g_2239;
    union U3 ****l_2750 = &l_2751;
    union U1 l_2782[5] = {{0xB0546FA7DECE7341LL},{0xB0546FA7DECE7341LL},{0xB0546FA7DECE7341LL},{0xB0546FA7DECE7341LL},{0xB0546FA7DECE7341LL}};
    int16_t ****l_2809 = &g_2235;
    int8_t *l_2850[4][5][4] = {{{&g_1626.f2,&g_2835.f3,&g_2835.f3,&g_2632.f3},{&g_2835.f3,&g_2316.f2,&g_2835.f3,&g_2835.f3},{&g_1626.f2,&g_2632.f3,&g_2835.f3,&g_20.f3},{&l_2782[2].f2,&g_1626.f2,&g_2835.f3,(void*)0},{&g_2835.f3,(void*)0,&g_2316.f2,&g_2835.f3}},{{(void*)0,&g_2632.f3,&g_20.f3,&g_2632.f3},{&g_2632.f3,&g_2835.f3,&g_2835.f3,&g_2632.f3},{&g_2835.f3,&g_20.f3,&g_1626.f2,&g_51.f2},{(void*)0,&g_2632.f3,(void*)0,&g_2835.f3},{&g_2632.f3,&g_2316.f2,&g_2835.f3,&g_2835.f3}},{{&g_2316.f2,&g_2632.f3,&g_1626.f2,&g_51.f2},{&g_1626.f2,&g_20.f3,(void*)0,&g_2632.f3},{&g_2316.f2,&g_2835.f3,&g_2835.f3,&g_2632.f3},{&g_1626.f2,&g_2632.f3,&g_1626.f2,&g_2835.f3},{&l_2782[2].f2,(void*)0,&l_2782[2].f2,(void*)0}},{{&g_2632.f3,&g_1626.f2,&g_2316.f2,&g_20.f3},{&g_1626.f2,&g_2632.f3,&g_1626.f2,&g_2835.f3},{&g_2632.f3,&g_2316.f2,&g_2316.f2,&g_2632.f3},{&g_2632.f3,&g_2835.f3,&g_1626.f2,&g_2835.f3},{&g_1626.f2,&g_2632.f3,&g_2316.f2,&g_2316.f2}}};
    int16_t *****l_2929 = &l_2809;
    int32_t l_2955 = 0x1ED80AE4L;
    uint64_t **l_2966 = (void*)0;
    int8_t ***l_2972 = (void*)0;
    uint64_t *****l_2994 = &g_1740;
    union U2 l_3021 = {6UL};
    int32_t l_3028 = 0x4F150657L;
    uint64_t ****l_3032 = &g_1388;
    int32_t *l_3103 = &l_2717;
    uint32_t l_3143 = 0x6FF31C4AL;
    struct S0 *l_3150 = &g_3151;
    union U1 ****l_3189 = (void*)0;
    uint32_t l_3228 = 0xF8E3EFDAL;
    int64_t l_3269 = (-1L);
    uint32_t l_3294 = 0x0C67EDCEL;
    int32_t l_3333 = 8L;
    uint32_t ***l_3349 = &g_261;
    int32_t ***l_3391 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_2720[i][j] = 1L;
    }
    for (g_1570 = 0; (g_1570 != 12); ++g_1570)
    { 
        int16_t l_2699 = 0xB5E8L;
        int32_t l_2708[6];
        int32_t *l_2709 = &g_2431[5][0][0];
        int32_t *l_2710 = &g_380;
        int32_t *l_2711 = &g_441;
        int32_t *l_2712[2];
        int i;
        for (i = 0; i < 6; i++)
            l_2708[i] = 0L;
        for (i = 0; i < 2; i++)
            l_2712[i] = &l_2706;
        (**g_668) = (*g_669);
        (*l_2709) ^= ((safe_lshift_func_uint8_t_u_u(l_2692, (safe_add_func_uint8_t_u_u(p_9, (((((safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((l_2699 || (((void*)0 == (*g_668)) ^ (l_2708[0] = (l_2707 = (l_2706 ^= ((*g_1562) |= (0xB079L <= (safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((safe_div_func_int8_t_s_s((p_9 , l_2692), 0xA8L)) , (*g_669)), 0x34A08426L)) & 0x5FAFL), 65535UL))))))))), l_2692)) == 0x588F3B4CL), l_2699)) <= l_2692) && 0x72L) , g_1693) && 0x437A67CDFD64A169LL))))) , l_2708[5]);
        ++l_2723;
    }
    for (g_20.f2 = 0; (g_20.f2 <= 0); g_20.f2 += 1)
    { 
        uint32_t l_2731[1];
        union U1 * const * const *l_2734 = (void*)0;
        union U1 * const * const **l_2733 = &l_2734;
        int32_t l_2779[6][3] = {{(-1L),1L,0xB446232BL},{0x87C17B2CL,0x0D758E27L,1L},{(-1L),(-1L),1L},{0x0D758E27L,0x87C17B2CL,0xB446232BL},{1L,(-1L),1L},{1L,0x0D758E27L,(-1L)}};
        union U3 ****l_2783 = &g_2238;
        struct S0 *l_2819[6][6][6] = {{{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632}},{{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632}},{{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632}},{{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632}},{{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632}},{{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632},{&g_2632,&g_2632,&g_2632,&g_2632,&g_2632,&g_2632}}};
        int64_t l_2836 = 0xD14E576ABB3E6A65LL;
        uint8_t *l_2898[3];
        uint8_t **l_2897 = &l_2898[2];
        int16_t *****l_2928 = &l_2809;
        int8_t l_2954 = 0x1FL;
        uint8_t l_2956 = 0x28L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2731[i] = 0x341E2D07L;
        for (i = 0; i < 3; i++)
            l_2898[i] = &g_384;
        (*g_669) |= ((((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(0x026FA84C46D43E91LL, 0x7877BCC62090393FLL)), ((g_1643[g_20.f2] | ((g_938[0].f1 >= (!3L)) == l_2731[0])) && l_2732[3][2]))) , p_6.f0) ^ l_2731[0]) > p_6.f0);
        (*l_2733) = (void*)0;
        for (g_2632.f3 = 0; (g_2632.f3 <= 0); g_2632.f3 += 1)
        { 
            int32_t l_2788 = 0xA6C42262L;
            int32_t l_2789[1][3];
            uint32_t l_2790 = 18446744073709551609UL;
            int16_t ****l_2810 = &g_2235;
            uint8_t l_2844 = 2UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2789[i][j] = (-4L);
            }
        }
        for (g_1327 = 0; (g_1327 <= 0); g_1327 += 1)
        { 
            int16_t ****l_2875[6][5][4] = {{{&g_2235,&g_2235,&g_2235,(void*)0},{(void*)0,&g_2235,&g_2235,&g_2235},{&g_2235,(void*)0,&g_2235,&g_2235},{(void*)0,(void*)0,&g_2235,&g_2235},{&g_2235,(void*)0,(void*)0,&g_2235}},{{(void*)0,&g_2235,&g_2235,(void*)0},{&g_2235,&g_2235,&g_2235,&g_2235},{&g_2235,(void*)0,&g_2235,&g_2235},{&g_2235,(void*)0,&g_2235,&g_2235},{&g_2235,&g_2235,(void*)0,&g_2235}},{{(void*)0,&g_2235,&g_2235,(void*)0},{&g_2235,&g_2235,&g_2235,&g_2235},{&g_2235,&g_2235,&g_2235,&g_2235},{(void*)0,(void*)0,&g_2235,&g_2235},{(void*)0,&g_2235,(void*)0,&g_2235}},{{(void*)0,&g_2235,&g_2235,(void*)0},{&g_2235,&g_2235,&g_2235,&g_2235},{&g_2235,&g_2235,(void*)0,&g_2235},{(void*)0,(void*)0,&g_2235,&g_2235},{(void*)0,(void*)0,&g_2235,&g_2235}},{{(void*)0,&g_2235,&g_2235,(void*)0},{(void*)0,&g_2235,&g_2235,&g_2235},{&g_2235,(void*)0,(void*)0,&g_2235},{&g_2235,(void*)0,&g_2235,&g_2235},{(void*)0,(void*)0,(void*)0,&g_2235}},{{(void*)0,&g_2235,&g_2235,(void*)0},{&g_2235,&g_2235,(void*)0,&g_2235},{&g_2235,&g_2235,&g_2235,&g_2235},{(void*)0,(void*)0,&g_2235,&g_2235},{(void*)0,(void*)0,&g_2235,&g_2235}}};
            int16_t *****l_2876 = &l_2875[2][1][0];
            uint8_t *l_2877 = &g_407;
            int32_t *l_2878 = &l_2717;
            int32_t l_2882[2];
            int64_t l_2913 = 0xDCE3149756BE5B37LL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2882[i] = 0xC25DAE8DL;
            (*l_2878) = ((*g_669) = ((((*l_2877) = (~(safe_sub_func_int32_t_s_s(((((((*g_569) ^= (l_2707 , (g_1643[g_20.f2] &= (safe_mul_func_uint16_t_u_u((&l_2734 == (void*)0), p_9))))) , (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((!((safe_lshift_func_uint16_t_u_u((*g_569), (safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_uint8_t_u_u(g_140, ((((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((((*l_2876) = l_2875[2][1][0]) == &g_2235), 0xF6E3992C773C3FA5LL)) <= p_9), 6)) , 0x0187L) || 0x30C3L) && 249UL))) , (void*)0) != &g_261) & 249UL) <= (**g_568)), p_6.f0)), 0x7C8AD55D9A899DE2LL)))) , g_1643[g_20.f2])), l_2836)), g_1643[g_20.f2])) | 0xD3375787EC679D41LL), 1))) == 0xDFL) < l_2718) > l_2836), (**g_668))))) < (*p_8)) && l_2731[0]));
            for (g_157 = 0; (g_157 <= 0); g_157 += 1)
            { 
                uint16_t l_2883 = 65532UL;
                union U1 l_2893 = {-1L};
                int32_t l_2908 = 0L;
                int32_t l_2909 = 0x1A8F9379L;
                int32_t l_2910 = 0x80978246L;
                int32_t l_2911 = 1L;
                int32_t l_2912 = 1L;
                int32_t l_2915 = 0xD27AE381L;
                int32_t l_2916 = (-8L);
                int32_t l_2917[7][4][6] = {{{(-9L),0x3FC2EA9AL,8L,0xDB131245L,0xD468399CL,2L},{0xD9BFF026L,0xDB131245L,3L,3L,0xDB131245L,0xD9BFF026L},{3L,0xDB131245L,0xD9BFF026L,0x86674992L,0xD468399CL,8L},{8L,0x3FC2EA9AL,(-9L),0x3FC2EA9AL,8L,0xDB131245L}},{{8L,3L,0x3FC2EA9AL,0x86674992L,0x243BE30DL,0x243BE30DL},{3L,0xD468399CL,0xD468399CL,3L,(-9L),0x243BE30DL},{0xD9BFF026L,0x243BE30DL,0x3FC2EA9AL,0xDB131245L,0x86674992L,0xDB131245L},{(-9L),0xA7BF0661L,(-9L),2L,0x86674992L,8L}},{{0xA7BF0661L,8L,(-9L),0xDB131245L,0xDB131245L,(-9L)},{2L,2L,0xD468399CL,0xDB131245L,8L,0x3FC2EA9AL},{0xA7BF0661L,0xD468399CL,0xD9BFF026L,0x3FC2EA9AL,0xD9BFF026L,0xD468399CL},{0xDB131245L,0xA7BF0661L,0xD9BFF026L,3L,2L,0x3FC2EA9AL}},{{(-9L),3L,0xD468399CL,0xD468399CL,3L,(-9L)},{0xD468399CL,3L,(-9L),0x243BE30DL,2L,0xD9BFF026L},{0xD9BFF026L,0xA7BF0661L,0xDB131245L,0xA7BF0661L,0xD9BFF026L,3L},{0xD9BFF026L,0xD468399CL,0xA7BF0661L,0x243BE30DL,8L,8L}},{{0xD468399CL,2L,2L,0xD468399CL,0xDB131245L,8L},{(-9L),8L,0xA7BF0661L,3L,0x243BE30DL,3L},{0xDB131245L,0x86674992L,0xDB131245L,0x3FC2EA9AL,0x243BE30DL,0xD9BFF026L},{0xA7BF0661L,8L,(-9L),0xDB131245L,0xDB131245L,(-9L)}},{{2L,2L,0xD468399CL,0xDB131245L,8L,0x3FC2EA9AL},{0xA7BF0661L,0xD468399CL,0xD9BFF026L,0x3FC2EA9AL,0xD9BFF026L,0xD468399CL},{0xDB131245L,0xA7BF0661L,0xD9BFF026L,3L,2L,0x3FC2EA9AL},{(-9L),3L,0xD468399CL,0xD468399CL,3L,(-9L)}},{{0xD468399CL,3L,(-9L),0x243BE30DL,2L,0xD9BFF026L},{0xD9BFF026L,0xA7BF0661L,0xDB131245L,0xA7BF0661L,0xD9BFF026L,3L},{0xD9BFF026L,0xD468399CL,0xA7BF0661L,0x243BE30DL,8L,8L},{0xD468399CL,2L,2L,0xD468399CL,0xDB131245L,8L}}};
                uint32_t l_2918 = 7UL;
                int32_t *l_2934 = (void*)0;
                int32_t *l_2935 = &l_2715;
                int32_t *l_2936 = (void*)0;
                int32_t *l_2937 = &l_2718;
                int32_t *l_2938 = &l_2917[0][0][0];
                int32_t *l_2939 = (void*)0;
                int32_t *l_2940 = &l_2882[1];
                int32_t *l_2941 = (void*)0;
                int32_t *l_2942 = &g_441;
                int32_t *l_2943 = &l_2908;
                int32_t *l_2944 = &l_2911;
                int32_t *l_2945 = &l_2715;
                int32_t *l_2946 = &l_2909;
                int32_t *l_2947 = (void*)0;
                int32_t *l_2948 = &l_2779[1][2];
                int32_t *l_2949 = (void*)0;
                int32_t *l_2950[1][2][6] = {{{&g_380,(void*)0,(void*)0,(void*)0,(void*)0,&g_380},{&g_2431[0][0][0],&g_380,(void*)0,&g_380,&g_2431[0][0][0],&g_2431[0][0][0]}}};
                uint64_t l_2951 = 0x852BC7AE79C7F147LL;
                int i, j, k;
            }
        }
    }
    for (g_1809 = 0; (g_1809 <= 0); g_1809 += 1)
    { 
        int8_t ***l_2969 = &g_788;
        int32_t l_2992 = (-6L);
        int32_t l_3011 = (-1L);
        int32_t l_3013 = 0x53FDE5F4L;
        int32_t l_3014 = 0x3247902FL;
        int32_t l_3015 = (-1L);
        int32_t l_3016[2];
        uint64_t ****l_3031 = &g_1388;
        struct S0 l_3124[1] = {{0x352E30B2L,4294967288UL,0x9E2FB103L,0xC0L}};
        union U3 l_3129 = {247UL};
        union U2 l_3157 = {4294967295UL};
        union U3 ***l_3183 = (void*)0;
        union U3 ***l_3184[4][1] = {{&g_2239},{&g_2239},{&g_2239},{&g_2239}};
        const union U1 ***l_3188 = (void*)0;
        const union U1 ****l_3187 = &l_3188;
        struct S0 ** const * const l_3197 = &g_1837[3];
        int i, j;
        for (i = 0; i < 2; i++)
            l_3016[i] = 5L;
    }
    for (l_2955 = 11; (l_2955 >= 7); l_2955 = safe_sub_func_int32_t_s_s(l_2955, 5))
    { 
        int16_t l_3227[2];
        uint64_t ***l_3229 = &g_2968;
        struct S0 l_3232 = {6UL,0UL,-1L,1L};
        uint8_t *l_3233[7][7] = {{&g_592,&g_384,&g_407,(void*)0,&g_407,&g_384,&g_592},{&l_2723,(void*)0,&g_384,&g_384,&g_407,&g_239.f0,&g_866},{&g_592,&g_239.f0,(void*)0,&g_407,&g_308,&g_308,&g_407},{&g_384,&g_3041,&g_384,(void*)0,&g_3041,&g_592,&g_239.f0},{&g_384,&g_384,&g_407,&g_239.f0,&g_866,&g_3041,&g_592},{&g_592,&l_2723,&g_739[0],&g_739[0],&l_2723,&g_592,&g_239.f0},{&l_2723,&g_407,&g_866,&g_739[0],(void*)0,&g_308,&g_3041}};
        int32_t l_3247[4][2] = {{0x0FBE5C13L,0x0FBE5C13L},{0x0FBE5C13L,0x0FBE5C13L},{0x0FBE5C13L,0x0FBE5C13L},{0x0FBE5C13L,0x0FBE5C13L}};
        uint64_t *****l_3266 = &g_1740;
        const int32_t *l_3271 = &g_2431[1][2][0];
        int32_t l_3285 = 0x5E5DF508L;
        int32_t l_3314 = 0x9BB91A0DL;
        int32_t l_3316[3];
        uint16_t *l_3348[1][5][7] = {{{&g_1107[1][4],&g_1107[1][4],&g_157,&g_1643[0],&g_157,&g_1107[1][4],&g_1107[1][4]},{&g_1107[1][4],&g_1107[1][4],&g_157,&g_1643[0],&g_157,&g_1107[1][4],&g_1107[1][4]},{&g_1107[1][4],&g_1107[1][4],&g_157,&g_1643[0],&g_157,&g_1107[1][4],&g_1107[1][4]},{&g_1107[1][4],&g_1107[1][4],&g_157,&g_1643[0],&g_157,&g_1107[1][4],&g_1107[1][4]},{&g_1107[1][4],&g_1107[1][4],&g_157,&g_1643[0],&g_157,&g_1107[1][4],&g_1107[1][4]}}};
        struct S0 ** const **l_3367 = (void*)0;
        union U3 *l_3415 = &g_239;
        struct S0 *l_3451 = &g_3452;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_3227[i] = 0xA2BDL;
        for (i = 0; i < 3; i++)
            l_3316[i] = 0L;
        for (l_2715 = 2; (l_2715 <= (-18)); --l_2715)
        { 
            (*g_668) = (void*)0;
            l_3228 = l_3227[1];
        }
    }
    return p_9;
}



static int8_t * func_18(struct S0  p_19)
{ 
    uint64_t l_21[1];
    const union U2 l_2603 = {0xF65625C8L};
    int32_t l_2609[6][7][3] = {{{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L}},{{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L}},{{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L}},{{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L}},{{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L}},{{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L},{0xA1A97A33L,0xA1A97A33L,0xA1A97A33L},{8L,8L,8L}}};
    struct S0 *l_2629[4][7] = {{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}};
    union U1 *l_2635[4][2] = {{&g_2316,&g_2316},{&g_2316,&g_2316},{&g_2316,&g_2316},{&g_2316,&g_2316}};
    const uint64_t ****l_2652 = &g_850[0];
    int8_t *l_2654 = &g_2632.f3;
    int64_t l_2673 = 0x7C53EA380608DA2ELL;
    uint32_t ***l_2674[6][7] = {{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261,&g_261}};
    uint8_t *l_2681[5][5][1] = {{{&g_239.f0},{&g_592},{&g_239.f0},{&g_239.f0},{&g_592}},{{&g_239.f0},{&g_239.f0},{&g_592},{&g_239.f0},{&g_239.f0}},{{&g_592},{&g_239.f0},{&g_239.f0},{&g_592},{&g_239.f0}},{{&g_239.f0},{&g_592},{&g_239.f0},{&g_239.f0},{&g_592}},{{&g_239.f0},{&g_239.f0},{&g_592},{&g_239.f0},{&g_239.f0}}};
    int8_t *l_2682 = &g_20.f3;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_21[i] = 0x83D1F0DFBC43CC9FLL;
    for (p_19.f2 = 0; (p_19.f2 <= 0); p_19.f2 += 1)
    { 
        int i;
        (**g_668) = func_22(l_21[p_19.f2]);
        if (l_21[0])
            break;
    }
    for (g_1439 = 5; (g_1439 != 5); g_1439 = safe_add_func_uint32_t_u_u(g_1439, 5))
    { 
        return (*g_788);
    }
    if ((+(--(**g_568))))
    { 
        int64_t l_2605 = 0L;
        const uint64_t l_2606 = 0xE79D69090D0DECEDLL;
        int32_t *l_2610 = &l_2609[5][2][0];
        int32_t *l_2611 = &g_2431[0][0][0];
        int32_t *l_2612 = &g_2431[0][0][0];
        int32_t *l_2613 = &g_441;
        int32_t *l_2614 = &g_2431[5][1][0];
        int32_t *l_2615[3][5] = {{&g_621,&l_2609[5][3][1],&g_621,&g_621,&g_621},{&g_621,&l_2609[5][3][1],&g_621,&g_621,&g_621},{&g_621,&l_2609[5][3][1],&g_621,&g_621,&g_621}};
        uint16_t l_2616[1];
        union U3 *l_2621 = &g_239;
        struct S0 *l_2631[3][6] = {{&g_20,&g_2632,&g_20,&g_20,&g_2632,&g_20},{&g_20,&g_2632,&g_20,&g_20,&g_2632,&g_20},{&g_20,&g_2632,&g_20,&g_20,&g_2632,&g_20}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_2616[i] = 0UL;
        (***g_667) = ((((-5L) != ((safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s((g_1809 , (((void*)0 != (**g_2105)) , (((l_2603 , (~g_1439)) < l_2605) && 0xE5311849L))), 12)) | l_2605), l_2606)) > p_19.f1)) , p_19.f2) ^ (****g_849));
        (**g_668) ^= (safe_rshift_func_int16_t_s_s(0xA31DL, 14));
        l_2616[0]++;
        for (p_19.f0 = 0; (p_19.f0 > 46); p_19.f0++)
        { 
            int16_t l_2627 = (-3L);
            int32_t l_2628 = 3L;
            struct S0 **l_2630 = &l_2629[1][2];
            if (p_19.f1)
            { 
                (*l_2612) = 0x0668B9E8L;
                (***g_667) ^= ((p_19.f1 <= (*l_2612)) || (l_2609[0][2][1] = ((*g_330) , (l_2621 == l_2621))));
            }
            else
            { 
                uint32_t **l_2624[2][2][4] = {{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}},{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}}};
                int i, j, k;
                if ((**g_668))
                    break;
                l_2628 = (((safe_mul_func_int8_t_s_s((((*g_260) = (*g_260)) != l_2624[0][1][3]), (safe_mul_func_uint16_t_u_u(l_2627, (-8L))))) || ((((***g_667) >= ((((l_2627 == (*g_569)) > g_1327) || (*g_2237)) ^ g_2351[0][0])) == (*l_2614)) ^ l_2609[4][6][1])) ^ (*g_1562));
            }
            (*l_2610) = (((*g_788) = (void*)0) != (void*)0);
            if ((*g_669))
                continue;
            l_2631[2][1] = ((*l_2630) = l_2629[3][2]);
        }
        (***g_2105) = ((*g_1228) , (void*)0);
    }
    else
    { 
        union U2 l_2633 = {0UL};
        int32_t l_2634 = 0L;
        uint32_t *l_2638 = (void*)0;
        uint32_t *l_2639 = &g_2275.f0;
        union U1 l_2651 = {0x4B29A29946BC4B48LL};
        int8_t *l_2655 = &l_2651.f2;
        union U3 *l_2658 = &g_239;
        union U1 ***l_2662 = &g_1227;
        union U1 ****l_2661 = &l_2662;
        (***g_667) = (l_2633 , l_2634);
        (*g_1227) = l_2635[3][1];
        (***g_667) = (safe_add_func_uint32_t_u_u(p_19.f0, ((--(*l_2639)) < ((((l_2633.f1 && ((~g_739[0]) , (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((!p_19.f1))), (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((p_19 , (l_2651 , l_2652)) != (*g_1834)), l_2609[3][3][2])), (**g_788))))))) & 0x33B2L) , (void*)0) == l_2635[3][1]))));
        for (l_2651.f2 = 2; (l_2651.f2 >= 0); l_2651.f2 -= 1)
        { 
            for (g_1626.f0 = 0; (g_1626.f0 <= 0); g_1626.f0 += 1)
            { 
                int i, j;
                for (g_1809 = 0; (g_1809 <= 0); g_1809 += 1)
                { 
                    int8_t *l_2653[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2653[i] = &l_2651.f2;
                    return (*g_788);
                }
                (*g_669) |= 0x5BC2B6DDL;
                if (g_104[g_1626.f0][l_2651.f2])
                    break;
                return l_2654;
            }
            return l_2654;
        }
        if ((safe_rshift_func_int16_t_s_u(((**g_2238) != l_2658), 12)))
        { 
            union U1 ***l_2660 = &g_1227;
            union U1 ****l_2659[2];
            int i;
            for (i = 0; i < 2; i++)
                l_2659[i] = &l_2660;
            for (g_126 = 2; (g_126 >= 0); g_126 -= 1)
            { 
                int i;
                l_2609[5][2][0] ^= ((*g_669) = g_142[g_126]);
            }
            l_2661 = l_2659[1];
            (**g_668) |= l_2609[5][2][0];
            return (*g_788);
        }
        else
        { 
            int32_t *l_2663 = &g_2431[0][0][0];
            l_2663 = l_2663;
            return (*g_788);
        }
    }
    (*g_669) = (safe_sub_func_int16_t_s_s(((***g_2235) = ((!((safe_rshift_func_uint8_t_u_u((((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(p_19.f1, 0)), ((((l_2673 | ((void*)0 != l_2674[3][2])) > 0L) , (safe_mul_func_uint8_t_u_u((g_384 |= (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_2673, 251UL)), 255UL))), 1L))) != 0xFCL))) > l_2609[5][2][0]) ^ g_1283[0][3]), 4)) & l_2609[3][6][1])) == p_19.f3)), (**g_568)));
    return l_2682;
}



static const int32_t  func_22(int64_t  p_23)
{ 
    uint8_t l_30 = 255UL;
    int8_t *l_31 = &g_20.f3;
    uint32_t *l_38[7];
    int32_t l_39 = (-1L);
    union U2 l_45 = {0x6FD0FE1FL};
    union U3 l_1683 = {0x24L};
    uint64_t l_2581 = 18446744073709551610UL;
    const int64_t l_2582 = 5L;
    int64_t *l_2583 = &g_1626.f0;
    uint8_t l_2584 = 247UL;
    uint32_t l_2585 = 3UL;
    int32_t *l_2586 = &g_441;
    union U1 *l_2589 = &g_334[4];
    int16_t *l_2593 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_38[i] = &g_20.f0;
    (**g_668) = (func_24(l_30, l_31, ((*g_788) = func_32((l_39 |= g_10.f0), (l_1683 = func_40(((l_45 , func_46(g_20, g_51, l_45, l_30)) != (**g_260)), (*g_788), (*g_788), l_31)), (*g_788), p_23, l_31)), l_30, l_31) > 9UL);
    for (g_951 = 0; (g_951 != 3); g_951++)
    { 
        for (g_20.f0 = (-23); (g_20.f0 == 53); g_20.f0 = safe_add_func_uint32_t_u_u(g_20.f0, 7))
        { 
            int32_t *l_2545[4];
            int i;
            for (i = 0; i < 4; i++)
                l_2545[i] = &l_39;
            g_2436 |= (**g_668);
        }
        (*g_669) = 0x1F3C0134L;
    }
    for (g_2436 = (-18); (g_2436 < 2); ++g_2436)
    { 
        uint32_t l_2554 = 0x40E21A07L;
        (***g_667) &= 0x49DF6ECFL;
        for (g_2190 = 0; (g_2190 <= 6); g_2190 += 1)
        { 
            int32_t l_2548[6][7][6] = {{{0x831D0EE5L,0x66BFD9B9L,2L,0x9CFBEFFEL,(-6L),1L},{0x23A084FAL,0xE39CAB90L,(-2L),0xAD0DD8DCL,0xAD0DD8DCL,(-2L)},{1L,1L,2L,0x66BFD9B9L,(-2L),1L},{0x3DCE3076L,1L,(-1L),0xD4EB6DD5L,0x9CFBEFFEL,2L},{2L,0x3DCE3076L,(-1L),(-6L),1L,1L},{1L,(-6L),2L,(-8L),1L,(-2L)},{(-8L),1L,(-2L),1L,0L,1L}},{{2L,1L,2L,(-1L),0x993B4711L,0L},{0x993B4711L,1L,0xE39CAB90L,0L,0x5EEC6D16L,0x831D0EE5L},{1L,(-1L),0xAD0DD8DCL,0L,0L,(-1L)},{0x993B4711L,(-8L),1L,(-1L),0x23A084FAL,0x3DCE3076L},{0L,1L,0L,0xD4EB6DD5L,0x5EEC6D16L,0x5EEC6D16L},{0x23A084FAL,1L,1L,0x23A084FAL,1L,0x34AC59DBL},{(-8L),(-1L),0x979AC6FAL,0L,(-8L),2L}},{{1L,0xAD0DD8DCL,0x23A084FAL,0x5EEC6D16L,(-8L),0L},{(-2L),(-1L),4L,0x993B4711L,1L,0x9CFBEFFEL},{1L,1L,(-6L),0L,0x5EEC6D16L,0x993B4711L},{1L,1L,0xE39CAB90L,1L,1L,0L},{0xE39CAB90L,0x9CFBEFFEL,(-8L),1L,1L,1L},{1L,1L,0x66BFD9B9L,0x9CFBEFFEL,0x979AC6FAL,1L},{0L,0xD4EB6DD5L,(-8L),(-2L),2L,0L}},{{0x979AC6FAL,(-8L),0xE39CAB90L,0xAD0DD8DCL,0x66BFD9B9L,0x993B4711L},{0x9CFBEFFEL,4L,(-6L),(-6L),4L,0x9CFBEFFEL},{1L,0L,4L,(-8L),1L,0L},{0x993B4711L,(-2L),0x23A084FAL,0x979AC6FAL,1L,2L},{0x993B4711L,0x831D0EE5L,0x979AC6FAL,(-8L),0xAD0DD8DCL,0x34AC59DBL},{1L,1L,1L,(-6L),0L,0x5EEC6D16L},{0x9CFBEFFEL,0x3DCE3076L,0L,0xAD0DD8DCL,0L,0x3DCE3076L}},{{0x979AC6FAL,0x993B4711L,0xD4EB6DD5L,(-2L),0x9CFBEFFEL,(-1L)},{0L,(-1L),0L,0x9CFBEFFEL,0x34AC59DBL,0xE39CAB90L},{1L,(-1L),0x3DCE3076L,1L,0x9CFBEFFEL,1L},{0xE39CAB90L,0x993B4711L,0L,1L,0L,0xD4EB6DD5L},{1L,0x3DCE3076L,0xAD0DD8DCL,0L,0L,0xAD0DD8DCL},{1L,1L,1L,0x993B4711L,0xAD0DD8DCL,0x831D0EE5L},{(-2L),0x831D0EE5L,1L,0x5EEC6D16L,1L,1L}},{{1L,(-2L),1L,0L,1L,0x831D0EE5L},{(-8L),0L,1L,0x23A084FAL,4L,0xAD0DD8DCL},{0x23A084FAL,4L,0xAD0DD8DCL,0xD4EB6DD5L,0x66BFD9B9L,0xD4EB6DD5L},{0L,(-8L),0L,(-1L),2L,1L},{2L,0xD4EB6DD5L,0x3DCE3076L,0L,0x979AC6FAL,0xE39CAB90L},{4L,1L,0L,0L,1L,(-1L)},{2L,0x9CFBEFFEL,0xD4EB6DD5L,(-1L),1L,0x3DCE3076L}}};
            int32_t *l_2549 = &g_2431[0][0][0];
            int32_t *l_2550 = (void*)0;
            int32_t *l_2551 = &g_441;
            int32_t *l_2552 = &g_621;
            int32_t *l_2553 = (void*)0;
            int i, j, k;
            if (g_2296[g_2190])
                break;
            l_2554++;
        }
    }
    (*l_2586) = (0x8EL > (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((**g_1227) , ((!(l_1683.f0 ^ (((*l_2583) = (safe_rshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_s(0UL, 13)) || (((((****g_1740) = ((safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s((l_39 |= (safe_mul_func_int16_t_s_s((!(((l_45.f1 , (safe_sub_func_uint16_t_u_u(((((g_380 = ((***g_667) ^= ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((**g_568) ^ (l_30 && 0xCD2AL)), p_23)), 15)) == g_580.f0))) , p_23) && p_23) != p_23), l_1683.f0))) , p_23) ^ l_1683.f0)), 0x2D17L))), 9L)), l_2581)) | (*g_569))) | g_2186) <= (-1L)) >= l_45.f0)) == (*g_569)) <= l_2582) < l_2581), 3))) >= l_45.f1))) && l_45.f1)), l_45.f1)) >= l_45.f0) ^ l_30), l_2584)), l_2585)));
    (*l_2586) = ((g_2356 |= ((safe_lshift_func_int16_t_s_s((**g_2236), 4)) , ((l_2589 == l_2589) & ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((*l_2586))), (2UL < (&g_788 != &g_788)))) != (*l_2586))))) & 65535UL);
    return (*l_2586);
}



static int8_t  func_24(int8_t  p_25, int8_t * p_26, int8_t * p_27, int32_t  p_28, int8_t * p_29)
{ 
    int32_t * const l_1686[5] = {&g_51.f3,&g_51.f3,&g_51.f3,&g_51.f3,&g_51.f3};
    int32_t *l_1687[5];
    int32_t l_1702 = 0L;
    const uint32_t *l_1716 = &g_20.f0;
    const uint32_t **l_1715 = &l_1716;
    const uint32_t ***l_1714[1];
    int64_t *l_1727 = &g_379;
    int32_t l_1793 = (-1L);
    union U3 l_1852 = {0x2DL};
    const struct S0 l_1853 = {0x3045F1E4L,0x5AF2C8DEL,-1L,-1L};
    int64_t l_1880 = 0x7B6ECDE2C8ED2D88LL;
    union U1 l_1882[4] = {{1L},{1L},{1L},{1L}};
    uint8_t l_1891[5][3] = {{0x1DL,0xA5L,0xABL},{0xA5L,0x1DL,0x1DL},{0xABL,0x1DL,0UL},{1UL,0xA5L,1UL},{0xABL,0xABL,1UL}};
    int16_t l_1898 = 0L;
    union U1 **l_1970 = &g_1228;
    int16_t **l_1973 = (void*)0;
    uint32_t l_1978 = 0xAC64813DL;
    struct S0 *l_1983 = &g_20;
    int8_t l_2016 = (-1L);
    uint8_t l_2068 = 0xC5L;
    union U3 **l_2080 = &g_690;
    int64_t l_2169 = 0L;
    union U3 ***l_2170 = &l_2080;
    int32_t l_2187 = 0L;
    int8_t l_2188 = 1L;
    int32_t l_2344 = 0x89338F22L;
    int32_t l_2348 = 0x23F95054L;
    uint16_t **l_2361 = &g_569;
    int32_t *l_2386 = &l_1793;
    int32_t **l_2385 = &l_2386;
    int32_t l_2437 = 0xF0CF3590L;
    int32_t l_2438 = 3L;
    int32_t l_2440[4][3][2] = {{{0x159284F6L,0L},{(-6L),0L},{0x159284F6L,0L}},{{(-6L),0L},{0x159284F6L,0L},{(-6L),0L}},{{0x159284F6L,0L},{(-6L),0L},{0x159284F6L,0L}},{{(-6L),0L},{0x159284F6L,0L},{(-6L),0L}}};
    int16_t l_2448 = 0xA6F8L;
    union U2 l_2487 = {0xF2541073L};
    uint32_t l_2538 = 0x4FD5A033L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1687[i] = &g_126;
    for (i = 0; i < 1; i++)
        l_1714[i] = &l_1715;
    if ((l_1686[2] == (l_1687[0] = &g_126)))
    { 
        struct S0 *l_1698 = &g_20;
        for (g_140 = (-14); (g_140 != 18); g_140 = safe_add_func_uint64_t_u_u(g_140, 4))
        { 
            int32_t *l_1690 = (void*)0;
            int32_t *l_1691[4] = {&g_441,&g_441,&g_441,&g_441};
            int i;
            g_1693++;
        }
        for (g_51.f0 = (-20); (g_51.f0 > 27); ++g_51.f0)
        { 
            struct S0 **l_1699 = &l_1698;
            (*l_1699) = l_1698;
            for (g_101 = 17; (g_101 <= 41); g_101 = safe_add_func_int32_t_s_s(g_101, 1))
            { 
                for (g_441 = 1; (g_441 <= 6); g_441 += 1)
                { 
                    if (p_28)
                        break;
                }
            }
        }
        return (*g_789);
    }
    else
    { 
        int32_t *l_1703 = (void*)0;
        int32_t *l_1704 = &g_75;
        int32_t *l_1705 = &l_1702;
        int32_t *l_1706 = &g_75;
        int32_t *l_1707 = &g_380;
        int32_t *l_1708 = (void*)0;
        int32_t *l_1709 = &g_75;
        int32_t *l_1710[3][3][5] = {{{&g_75,&g_621,(void*)0,(void*)0,&g_621},{(void*)0,&g_621,(void*)0,&g_441,&g_441},{&g_621,(void*)0,&g_621,(void*)0,&g_441}},{{&g_621,&g_75,&g_441,&g_75,&g_621},{&g_621,&g_75,(void*)0,&g_621,(void*)0},{(void*)0,(void*)0,&g_441,&g_621,&g_441}},{{&g_75,&g_621,&g_621,&g_75,(void*)0},{&g_75,&g_621,(void*)0,(void*)0,&g_621},{(void*)0,&g_621,(void*)0,&g_441,&g_441}}};
        uint64_t l_1711 = 0x1E7209405919F63ALL;
        int i, j, k;
        --l_1711;
    }
    return (*p_27);
}



static int8_t * func_32(uint32_t  p_33, union U3  p_34, int8_t * p_35, uint32_t  p_36, int8_t * p_37)
{ 
    int32_t *l_1684 = (void*)0;
    int32_t *l_1685 = &g_441;
    (*l_1685) |= (***g_667);
    return (*g_788);
}



static union U3  func_40(int16_t  p_41, int8_t * p_42, int8_t * p_43, int8_t * p_44)
{ 
    uint32_t l_1338 = 0UL;
    union U2 l_1350 = {0UL};
    uint8_t *l_1351 = (void*)0;
    int32_t l_1352 = (-1L);
    int8_t ***l_1357 = &g_788;
    uint64_t l_1365[6][4][6] = {{{9UL,0UL,7UL,0x02C4AB945271C966LL,0UL,0xB53E15B4EC0B0A03LL},{0x1FBBDFCDBADDD331LL,1UL,1UL,0x189EBA39DB101501LL,0x01BB22684D088DE8LL,0xE287A0287F05C05DLL},{0x80FAFB48C6573CE2LL,0x37612EEC885B2E56LL,0UL,1UL,0xB033D9C1AE51E6FDLL,0UL},{0x4561FE3C3617A378LL,0x02C4AB945271C966LL,0UL,18446744073709551608UL,0x189EBA39DB101501LL,1UL}},{{1UL,0UL,0x4561FE3C3617A378LL,18446744073709551612UL,0x4561FE3C3617A378LL,0UL},{0x8AD7034AFB18ACDBLL,0xAFFC86186F2183B2LL,4UL,0x4561FE3C3617A378LL,0x9B53C2405B6C0191LL,0xF7B5F9AA1FD11AF5LL},{0x72EECBFF749E0C73LL,0x5B8E73CD6D1198CCLL,1UL,7UL,0x02C4AB945271C966LL,1UL},{1UL,0x5B8E73CD6D1198CCLL,0x9AB5EAB222E4D35DLL,0x78334736AA46276ELL,0x9B53C2405B6C0191LL,0x80FAFB48C6573CE2LL}},{{18446744073709551608UL,0xAFFC86186F2183B2LL,18446744073709551615UL,18446744073709551615UL,0x4561FE3C3617A378LL,0UL},{0x7D3C5AEB2740B3B9LL,0UL,18446744073709551615UL,0UL,0x189EBA39DB101501LL,0UL},{0x7E5C9CF8749F9754LL,0x02C4AB945271C966LL,0xDE5AC8224574F0D8LL,0UL,0xB033D9C1AE51E6FDLL,0x37612EEC885B2E56LL},{0x89FCF4EB651FDFD6LL,0x37612EEC885B2E56LL,0x02C4AB945271C966LL,18446744073709551615UL,0x01BB22684D088DE8LL,0UL}},{{1UL,1UL,0xAFFC86186F2183B2LL,0x7D3C5AEB2740B3B9LL,0UL,0x5B8E73CD6D1198CCLL},{0xAFFC86186F2183B2LL,0UL,0x1FBBDFCDBADDD331LL,0x47ABAC36323FE5D1LL,0x5B8E73CD6D1198CCLL,18446744073709551615UL},{1UL,0x78334736AA46276ELL,0xF35432C3AB6E6D6CLL,6UL,6UL,0xF35432C3AB6E6D6CLL},{0x9AB5EAB222E4D35DLL,0x9AB5EAB222E4D35DLL,18446744073709551608UL,0x7D2B8395C0FD7D63LL,1UL,0x8AD7034AFB18ACDBLL}},{{0xF35432C3AB6E6D6CLL,0xAFFC86186F2183B2LL,0x4561FE3C3617A378LL,0x72EECBFF749E0C73LL,0xDE5AC8224574F0D8LL,18446744073709551615UL},{0x89FCF4EB651FDFD6LL,0xCAF02F2296B4DB9CLL,0x4561FE3C3617A378LL,0xF7B5F9AA1FD11AF5LL,18446744073709551608UL,0xFAD01A43D115A23CLL},{0UL,0xF7B5F9AA1FD11AF5LL,18446744073709551615UL,0xE287A0287F05C05DLL,1UL,0xCAF02F2296B4DB9CLL},{0xE287A0287F05C05DLL,1UL,0xCAF02F2296B4DB9CLL,7UL,1UL,1UL}},{{0x9AB5EAB222E4D35DLL,0UL,0xB033D9C1AE51E6FDLL,0xB53E15B4EC0B0A03LL,1UL,0x7E5C9CF8749F9754LL},{1UL,0x5B8E73CD6D1198CCLL,1UL,18446744073709551608UL,1UL,0UL},{0UL,1UL,0x8AD7034AFB18ACDBLL,7UL,0UL,18446744073709551615UL},{1UL,0x89FCF4EB651FDFD6LL,0UL,1UL,1UL,0UL}}};
    uint64_t ***l_1386[2][3] = {{&g_329,&g_329,&g_329},{(void*)0,(void*)0,(void*)0}};
    union U1 l_1419[3] = {{0x54DD902D640BC073LL},{0x54DD902D640BC073LL},{0x54DD902D640BC073LL}};
    union U1 l_1424 = {0xC30DF60FFF95F206LL};
    int32_t l_1482 = 1L;
    uint32_t l_1483 = 0xC64291CFL;
    union U1 l_1487[2] = {{-1L},{-1L}};
    uint32_t *l_1587 = &g_104[0][1];
    int32_t l_1606[5][3] = {{0x58B3F19DL,0x58B3F19DL,0x58B3F19DL},{0x83FED521L,0x83FED521L,0x83FED521L},{0x58B3F19DL,0x58B3F19DL,0x58B3F19DL},{0x83FED521L,0x83FED521L,0x83FED521L},{0x58B3F19DL,0x58B3F19DL,0x58B3F19DL}};
    struct S0 l_1610 = {0xCEF670EBL,0xBFB2CFFEL,0xF29DBCEFL,1L};
    union U2 **l_1628 = &g_547;
    int8_t l_1677 = 4L;
    int i, j, k;
    return (*g_690);
}



static const uint32_t * func_46(struct S0  p_47, union U1  p_48, union U2  p_49, int32_t  p_50)
{ 
    uint32_t *l_60 = &g_20.f0;
    uint32_t *l_70 = &g_20.f0;
    uint64_t l_71 = 0x35EB13E27C2130BELL;
    uint8_t l_72[7] = {247UL,247UL,247UL,247UL,247UL,247UL,247UL};
    int32_t l_73 = 0xC5BDDF9CL;
    int32_t *l_74 = &g_75;
    uint64_t *l_78 = &l_71;
    int32_t *l_79 = &l_73;
    int8_t l_90 = 0xFEL;
    uint8_t *l_97 = &l_72[6];
    uint32_t l_98 = 18446744073709551615UL;
    int32_t l_210[6][3][5] = {{{0x9E97E82FL,0xD3741DADL,0xD3741DADL,0x9E97E82FL,0x3FFEE22BL},{4L,0xAFA75C30L,0xF8528BDEL,0x36AC27E5L,0x2E68FD62L},{(-1L),0x36AC27E5L,0x087EC753L,1L,0L}},{{0xD3741DADL,0x4012F00CL,0x7ECBFEF2L,0x36AC27E5L,0x569B843FL},{0x9C5E52C1L,0x3FFEE22BL,0x5C064C4BL,0x9E97E82FL,0x5C064C4BL},{0x15127764L,0x15127764L,0x5C064C4BL,4L,0x4012F00CL}},{{0xAAE48550L,1L,0x7ECBFEF2L,(-1L),0x9E97E82FL},{0xAFA75C30L,0x47FA4D0AL,0x087EC753L,0xD3741DADL,0xAAE48550L},{0x3FFEE22BL,1L,0xF8528BDEL,0x9C5E52C1L,0x087EC753L}},{{0x8386D6A5L,0x15127764L,0xD3741DADL,0x15127764L,0x8386D6A5L},{0x8386D6A5L,0x3FFEE22BL,0xAFA75C30L,0xAAE48550L,0x15127764L},{0x3FFEE22BL,0x4012F00CL,0x36AC27E5L,0xAFA75C30L,0xD3741DADL}},{{0xAFA75C30L,0x36AC27E5L,0x4012F00CL,0x3FFEE22BL,0x15127764L},{0xAAE48550L,0xAFA75C30L,0x3FFEE22BL,0x8386D6A5L,0x8386D6A5L},{0x15127764L,0xD3741DADL,0x15127764L,0x8386D6A5L,0x087EC753L}},{{0x9C5E52C1L,0xF8528BDEL,1L,0x3FFEE22BL,0xAAE48550L},{0xD3741DADL,0x087EC753L,0x47FA4D0AL,0xAFA75C30L,0x9E97E82FL},{(-1L),0x7ECBFEF2L,1L,0xAAE48550L,0x4012F00CL}}};
    uint16_t *l_233 = &g_157;
    union U3 l_247 = {255UL};
    const uint16_t *l_374 = &g_157;
    const uint16_t **l_373[3][5];
    int32_t l_383[4][7][1] = {{{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)}},{{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL}},{{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)}},{{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL},{(-10L)},{0xC01FD62CL}}};
    int64_t l_425 = 1L;
    union U2 *l_456[6][2];
    union U2 *l_579 = &g_580;
    int32_t *l_663 = &l_383[2][6][0];
    struct S0 l_727[5][7] = {{{1UL,0xF0585653L,0x31D7ECC6L,0xA4L},{0xF98FCFC2L,0x667661D0L,4L,0x3DL},{1UL,0xF0585653L,0x31D7ECC6L,0xA4L},{0xFD434F69L,4294967295UL,0x8EE89652L,0x07L},{0xF98FCFC2L,0x667661D0L,4L,0x3DL},{18446744073709551615UL,0UL,-1L,-6L},{18446744073709551615UL,0UL,-1L,-6L}},{{0xF98FCFC2L,0x667661D0L,4L,0x3DL},{18446744073709551608UL,4294967295UL,-10L,3L},{18446744073709551612UL,0x7503B107L,-10L,0L},{18446744073709551608UL,4294967295UL,-10L,3L},{0xF98FCFC2L,0x667661D0L,4L,0x3DL},{18446744073709551612UL,0x7503B107L,-10L,0L},{0x1DC9B052L,0UL,-9L,0x87L}},{{0x1DC9B052L,0UL,-9L,0x87L},{18446744073709551615UL,0UL,-1L,-6L},{0xFD434F69L,4294967295UL,0x8EE89652L,0x07L},{0x1DC9B052L,0UL,-9L,0x87L},{0xFD434F69L,4294967295UL,0x8EE89652L,0x07L},{18446744073709551615UL,0UL,-1L,-6L},{0x1DC9B052L,0UL,-9L,0x87L}},{{1UL,0xF0585653L,0x31D7ECC6L,0xA4L},{0x1DC9B052L,0UL,-9L,0x87L},{18446744073709551615UL,0UL,-1L,-6L},{0xFD434F69L,4294967295UL,0x8EE89652L,0x07L},{0x1DC9B052L,0UL,-9L,0x87L},{0xFD434F69L,4294967295UL,0x8EE89652L,0x07L},{18446744073709551615UL,0UL,-1L,-6L}},{{0x1DC9B052L,0UL,-9L,0x87L},{0x1DC9B052L,0UL,-9L,0x87L},{18446744073709551612UL,0x7503B107L,-10L,0L},{0xF98FCFC2L,0x667661D0L,4L,0x3DL},{18446744073709551608UL,4294967295UL,-10L,3L},{18446744073709551612UL,0x7503B107L,-10L,0L},{18446744073709551608UL,4294967295UL,-10L,3L}}};
    union U3 l_742 = {0x32L};
    int16_t l_748 = 1L;
    uint32_t l_760[1];
    uint64_t ***l_796 = (void*)0;
    uint64_t ****l_795 = &l_796;
    int8_t **l_797 = &g_789;
    union U1 *l_807 = (void*)0;
    uint16_t l_873 = 0UL;
    uint32_t ** const *l_990 = (void*)0;
    int8_t l_1044 = 1L;
    int16_t l_1045 = 1L;
    union U2 **l_1094 = &g_547;
    union U2 ***l_1093 = &l_1094;
    int16_t l_1141[6][4][5] = {{{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L},{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L}},{{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L},{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L}},{{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L},{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L}},{{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L},{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L}},{{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L},{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L}},{{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L},{9L,(-1L),0x44D2L,(-1L),9L},{0x11B6L,(-6L),0x3D68L,(-6L),0x11B6L}}};
    uint64_t ** const *l_1198 = (void*)0;
    uint64_t ** const **l_1197[4][1];
    uint64_t ** const ***l_1196[7][2] = {{&l_1197[2][0],&l_1197[2][0]},{&l_1197[2][0],&l_1197[2][0]},{&l_1197[2][0],&l_1197[2][0]},{&l_1197[2][0],&l_1197[2][0]},{&l_1197[2][0],&l_1197[2][0]},{&l_1197[2][0],&l_1197[2][0]},{&l_1197[2][0],&l_1197[2][0]}};
    uint64_t l_1199 = 0UL;
    int16_t *l_1303[4][6] = {{&l_748,&l_1141[2][2][1],&l_1141[2][2][1],&l_1141[2][2][1],&l_1141[2][2][1],&l_748},{(void*)0,&l_748,&l_1141[2][2][1],&l_748,(void*)0,(void*)0},{&g_356,&l_748,&g_356,&l_1141[2][2][1],(void*)0,&l_1141[2][2][1]},{&l_1141[2][2][1],(void*)0,&l_1141[2][2][1],&g_356,&g_356,&l_1141[2][2][1]}};
    int16_t **l_1302 = &l_1303[1][3];
    int16_t ***l_1301 = &l_1302;
    uint32_t l_1323 = 0x2645AB90L;
    int8_t l_1335 = (-9L);
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_373[i][j] = &l_374;
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_456[i][j] = &g_10;
    }
    for (i = 0; i < 1; i++)
        l_760[i] = 0xA76985ACL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1197[i][j] = &l_1198;
    }
    (*l_74) &= ((g_51.f3 || ((p_48.f1 & ((safe_rshift_func_uint16_t_u_u((g_51.f3 <= (safe_lshift_func_uint16_t_u_s(p_49.f0, (0x8EC7DFFC5A258D3BLL || (((safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((l_60 != ((safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((g_69 != l_70), l_71)), 0xA435L)) == l_71), l_71)), g_51.f0)) , (void*)0)), 2L)) , l_71) & l_72[6]), l_71)) | l_72[0]) , l_73))))), 0)) >= g_51.f0)) != l_72[6])) , p_47.f2);
    return (*g_261);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_20.f3, "g_20.f3", print_hash_value);
    transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
    transparent_crc(g_51.f1, "g_51.f1", print_hash_value);
    transparent_crc(g_51.f2, "g_51.f2", print_hash_value);
    transparent_crc(g_51.f3, "g_51.f3", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_142[i], "g_142[i]", print_hash_value);

    }
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_334[i].f2, "g_334[i].f2", print_hash_value);

    }
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_447[i], "g_447[i]", print_hash_value);

    }
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_580.f0, "g_580.f0", print_hash_value);
    transparent_crc(g_580.f1, "g_580.f1", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_644.f0, "g_644.f0", print_hash_value);
    transparent_crc(g_644.f1, "g_644.f1", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_739[i], "g_739[i]", print_hash_value);

    }
    transparent_crc(g_866, "g_866", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_938[i].f0, "g_938[i].f0", print_hash_value);
        transparent_crc(g_938[i].f1, "g_938[i].f1", print_hash_value);

    }
    transparent_crc(g_951, "g_951", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1050[i][j][k].f0, "g_1050[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1107[i][j], "g_1107[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1283[i][j], "g_1283[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1439, "g_1439", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1626.f0, "g_1626.f0", print_hash_value);
    transparent_crc(g_1626.f1, "g_1626.f1", print_hash_value);
    transparent_crc(g_1626.f2, "g_1626.f2", print_hash_value);
    transparent_crc(g_1626.f3, "g_1626.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1643[i], "g_1643[i]", print_hash_value);

    }
    transparent_crc(g_1692, "g_1692", print_hash_value);
    transparent_crc(g_1693, "g_1693", print_hash_value);
    transparent_crc(g_1807, "g_1807", print_hash_value);
    transparent_crc(g_1808, "g_1808", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    transparent_crc(g_1967, "g_1967", print_hash_value);
    transparent_crc(g_2029, "g_2029", print_hash_value);
    transparent_crc(g_2102, "g_2102", print_hash_value);
    transparent_crc(g_2110, "g_2110", print_hash_value);
    transparent_crc(g_2186, "g_2186", print_hash_value);
    transparent_crc(g_2190, "g_2190", print_hash_value);
    transparent_crc(g_2225, "g_2225", print_hash_value);
    transparent_crc(g_2272, "g_2272", print_hash_value);
    transparent_crc(g_2275.f0, "g_2275.f0", print_hash_value);
    transparent_crc(g_2275.f1, "g_2275.f1", print_hash_value);
    transparent_crc(g_2295, "g_2295", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2296[i], "g_2296[i]", print_hash_value);

    }
    transparent_crc(g_2316.f0, "g_2316.f0", print_hash_value);
    transparent_crc(g_2316.f1, "g_2316.f1", print_hash_value);
    transparent_crc(g_2316.f2, "g_2316.f2", print_hash_value);
    transparent_crc(g_2316.f3, "g_2316.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2351[i][j], "g_2351[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2356, "g_2356", print_hash_value);
    transparent_crc(g_2358, "g_2358", print_hash_value);
    transparent_crc(g_2407, "g_2407", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2431[i][j][k], "g_2431[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2436, "g_2436", print_hash_value);
    transparent_crc(g_2632.f0, "g_2632.f0", print_hash_value);
    transparent_crc(g_2632.f1, "g_2632.f1", print_hash_value);
    transparent_crc(g_2632.f2, "g_2632.f2", print_hash_value);
    transparent_crc(g_2632.f3, "g_2632.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2685[i][j][k], "g_2685[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2687, "g_2687", print_hash_value);
    transparent_crc(g_2835.f0, "g_2835.f0", print_hash_value);
    transparent_crc(g_2835.f1, "g_2835.f1", print_hash_value);
    transparent_crc(g_2835.f2, "g_2835.f2", print_hash_value);
    transparent_crc(g_2835.f3, "g_2835.f3", print_hash_value);
    transparent_crc(g_2914, "g_2914", print_hash_value);
    transparent_crc(g_3009, "g_3009", print_hash_value);
    transparent_crc(g_3017, "g_3017", print_hash_value);
    transparent_crc(g_3041, "g_3041", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3068[i], "g_3068[i]", print_hash_value);

    }
    transparent_crc(g_3151.f0, "g_3151.f0", print_hash_value);
    transparent_crc(g_3151.f1, "g_3151.f1", print_hash_value);
    transparent_crc(g_3151.f2, "g_3151.f2", print_hash_value);
    transparent_crc(g_3151.f3, "g_3151.f3", print_hash_value);
    transparent_crc(g_3204, "g_3204", print_hash_value);
    transparent_crc(g_3334, "g_3334", print_hash_value);
    transparent_crc(g_3452.f0, "g_3452.f0", print_hash_value);
    transparent_crc(g_3452.f1, "g_3452.f1", print_hash_value);
    transparent_crc(g_3452.f2, "g_3452.f2", print_hash_value);
    transparent_crc(g_3452.f3, "g_3452.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3454[i], "g_3454[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
