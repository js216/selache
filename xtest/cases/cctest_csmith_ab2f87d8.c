// SPDX-License-Identifier: MIT
// cctest_csmith_ab2f87d8.c --- cctest case csmith_ab2f87d8 (csmith seed 2872018904)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf1ee2114 */
/* @exp_ticks 0x3ba7 */

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

// Options:   -s 2872018904 -o /tmp/csmith_gen_6a5lhx2d/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   int64_t  f1;
   const struct S0  f2;
   int8_t * const  f3;
   struct S0  f4;
};


static int32_t g_2 = 0x08974B66L;
static union U1 g_15 = {0L};
static uint64_t g_17[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static int32_t *g_20 = &g_15.f4.f1;
static uint32_t g_22 = 4294967295UL;
static uint16_t g_70 = 65530UL;
static int64_t g_95 = 0xBCA7AF0C8B8AFECALL;
static int32_t *g_99 = (void*)0;
static int32_t g_109[2][3] = {{0L,0L,0L},{1L,1L,1L}};
static uint32_t g_111 = 0UL;
static struct S0 g_116[1][1] = {{{65527UL,-9L,0x9346F960B3385642LL,0x86B6EF14L,0x2E79L}}};
static int32_t **g_118 = &g_99;
static int32_t g_120 = 0x7FD266E8L;
static int8_t g_157 = 8L;
static int8_t *g_251 = &g_157;
static int8_t ** const g_250 = &g_251;
static uint64_t **g_252 = (void*)0;
static int64_t g_398[1] = {0x18D152B5915266BBLL};
static uint64_t *** const g_400 = (void*)0;
static uint64_t *** const * const g_399 = &g_400;
static const struct S0 g_414 = {0UL,0L,0x2B3B63CF339AC66ELL,0xC14EAA1EL,65526UL};
static uint32_t g_494[2] = {0xE325C8DBL,0xE325C8DBL};
static uint32_t *g_493 = &g_494[0];
static int8_t **g_514[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t ***g_513 = &g_514[3];
static int16_t g_517 = 0xEF44L;
static int16_t *g_516[7] = {&g_517,&g_517,&g_517,&g_517,&g_517,&g_517,&g_517};
static int64_t *g_596 = &g_95;
static int64_t **g_595 = &g_596;
static int64_t **g_597 = &g_596;
static int32_t g_626[3][3] = {{0x0DC87C6EL,0x0DC87C6EL,0x0DC87C6EL},{0x0DC87C6EL,0x0DC87C6EL,0x0DC87C6EL},{0x0DC87C6EL,0x0DC87C6EL,0x0DC87C6EL}};
static int8_t ****g_640[5][2] = {{&g_513,&g_513},{(void*)0,&g_513},{&g_513,(void*)0},{&g_513,&g_513},{(void*)0,&g_513}};
static int8_t ***** const g_639 = &g_640[0][0];
static uint8_t g_680 = 254UL;
static const int32_t g_710 = 0xB5C41FEDL;
static uint32_t g_736 = 0xA527D56EL;
static int8_t g_842 = 0L;
static int16_t g_843 = 0xBAA4L;
static struct S0 * const *g_917[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
static int64_t g_968[1] = {0L};
static int64_t * const g_967 = &g_968[0];
static int64_t * const *g_966[7] = {&g_967,&g_967,&g_967,&g_967,&g_967,&g_967,&g_967};
static int8_t g_1079 = 0x98L;



static int16_t  func_1(void);
static struct S0  func_5(uint16_t  p_6, struct S0  p_7, int32_t  p_8);
static uint32_t  func_9(int8_t ** p_10);
static int8_t ** func_11(union U1  p_12, uint64_t  p_13, int8_t * p_14);
static union U1  func_31(uint8_t  p_32, int32_t * p_33, int32_t  p_34);
static int32_t * func_35(uint64_t * p_36, int16_t  p_37);
static uint64_t * func_38(int32_t * p_39, int32_t  p_40, const int8_t  p_41, const union U1  p_42);
static int32_t * func_43(uint64_t * p_44, struct S0  p_45, const uint64_t * p_46, int8_t ** p_47);




static int16_t  func_1(void)
{ 
    uint8_t l_944 = 0x16L;
    int32_t l_1135 = 0xF66A2E83L;
    int32_t l_1136[6];
    int i;
    for (i = 0; i < 6; i++)
        l_1136[i] = 0x8018A84CL;
    for (g_2 = 20; (g_2 <= 17); --g_2)
    { 
        uint64_t *l_16 = &g_17[0];
        int32_t l_942 = 0x98470FACL;
        struct S0 l_943 = {0xDDE7L,0xC2E0AE23L,1UL,1L,0x6628L};
        int32_t *l_1131 = (void*)0;
        int32_t *l_1132 = &g_109[0][1];
        int32_t *l_1133 = (void*)0;
        int32_t *l_1134[1];
        int8_t l_1137[2][7][2];
        uint64_t l_1138[3][7][5] = {{{0x8B8733BEE573BDBCLL,0x3274693C422BC983LL,0x3274693C422BC983LL,0x8B8733BEE573BDBCLL,4UL},{0x6FFCEA89EB9B7F07LL,0xAE9FFDC3B20E58F9LL,0xFEC848DBAB9E747FLL,0x6452FFAD50D5C190LL,4UL},{0x3274693C422BC983LL,0x6FFCEA89EB9B7F07LL,18446744073709551606UL,18446744073709551615UL,18446744073709551606UL},{18446744073709551615UL,18446744073709551615UL,4UL,0x6452FFAD50D5C190LL,0xFEC848DBAB9E747FLL},{0x41A3D9429A4D69F8LL,0x65CCF75125789AD6LL,4UL,0x8B8733BEE573BDBCLL,0x3274693C422BC983LL},{0x7E1F26448C11F0B6LL,4UL,18446744073709551606UL,4UL,0x7E1F26448C11F0B6LL},{0x6452FFAD50D5C190LL,0x65CCF75125789AD6LL,0xFEC848DBAB9E747FLL,0x7E1F26448C11F0B6LL,18446744073709551615UL}},{{0x6452FFAD50D5C190LL,18446744073709551615UL,0x3274693C422BC983LL,0xAE9FFDC3B20E58F9LL,0xAE9FFDC3B20E58F9LL},{0x7E1F26448C11F0B6LL,0x6FFCEA89EB9B7F07LL,0x7E1F26448C11F0B6LL,0x65CCF75125789AD6LL,18446744073709551615UL},{0x41A3D9429A4D69F8LL,0xAE9FFDC3B20E58F9LL,18446744073709551615UL,0x65CCF75125789AD6LL,0x7E1F26448C11F0B6LL},{18446744073709551615UL,0x3274693C422BC983LL,0xAE9FFDC3B20E58F9LL,0xAE9FFDC3B20E58F9LL,0x3274693C422BC983LL},{0x3274693C422BC983LL,0x9E27B5F5CF7186C3LL,18446744073709551615UL,0x7E1F26448C11F0B6LL,0xFEC848DBAB9E747FLL},{0x6FFCEA89EB9B7F07LL,0x9E27B5F5CF7186C3LL,0x7E1F26448C11F0B6LL,4UL,18446744073709551606UL},{0x8B8733BEE573BDBCLL,0x3274693C422BC983LL,0x3274693C422BC983LL,0x8B8733BEE573BDBCLL,4UL}},{{0x6FFCEA89EB9B7F07LL,0xAE9FFDC3B20E58F9LL,0xFEC848DBAB9E747FLL,0x6452FFAD50D5C190LL,4UL},{0x3274693C422BC983LL,0x6FFCEA89EB9B7F07LL,18446744073709551606UL,18446744073709551615UL,18446744073709551606UL},{18446744073709551615UL,18446744073709551615UL,4UL,0x6452FFAD50D5C190LL,0xFEC848DBAB9E747FLL},{0x41A3D9429A4D69F8LL,0x65CCF75125789AD6LL,4UL,0x8B8733BEE573BDBCLL,0x3274693C422BC983LL},{0x7E1F26448C11F0B6LL,4UL,18446744073709551606UL,4UL,0x7E1F26448C11F0B6LL},{0x6452FFAD50D5C190LL,0x65CCF75125789AD6LL,0xFEC848DBAB9E747FLL,0x7E1F26448C11F0B6LL,18446744073709551615UL},{0x6452FFAD50D5C190LL,18446744073709551615UL,0x3274693C422BC983LL,0xAE9FFDC3B20E58F9LL,0xAE9FFDC3B20E58F9LL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1134[i] = &g_109[1][1];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1137[i][j][k] = 3L;
            }
        }
        (*g_513) = (func_5((func_9(func_11(g_15, ((*l_16) = g_15.f0), (g_15.f0 , (void*)0))) == ((l_942 > l_942) | l_942)), l_943, l_944) , (*g_513));
        ++l_1138[1][0][4];
    }
    return l_944;
}



static struct S0  func_5(uint16_t  p_6, struct S0  p_7, int32_t  p_8)
{ 
    int32_t *l_945 = &g_626[1][0];
    int32_t *l_946[6] = {&g_109[1][1],&g_120,&g_120,&g_109[1][1],&g_120,&g_120};
    int32_t l_947 = 6L;
    uint32_t l_948[2];
    int64_t ** const l_965 = &g_596;
    int8_t * const *l_993 = &g_251;
    int8_t * const **l_992[4];
    int16_t l_1018 = 0xB25AL;
    struct S0 l_1022[2][4] = {{{0x32C0L,8L,18446744073709551608UL,-1L,0x3BAEL},{65535UL,-5L,18446744073709551615UL,-6L,0xA569L},{65535UL,-5L,18446744073709551615UL,-6L,0xA569L},{0x32C0L,8L,18446744073709551608UL,-1L,0x3BAEL}},{{65535UL,-5L,18446744073709551615UL,-6L,0xA569L},{0x32C0L,8L,18446744073709551608UL,-1L,0x3BAEL},{65535UL,-5L,18446744073709551615UL,-6L,0xA569L},{65535UL,-5L,18446744073709551615UL,-6L,0xA569L}}};
    uint32_t l_1028 = 0x2A34EEA0L;
    int32_t l_1065[7];
    union U1 **l_1096[1];
    int32_t l_1122 = 2L;
    int8_t l_1124 = 2L;
    int8_t l_1125 = 0L;
    struct S0 l_1130 = {65535UL,0xB37F1464L,0x2E799EC55ACD1E81LL,4L,0x21ABL};
    int i, j;
    for (i = 0; i < 2; i++)
        l_948[i] = 4294967286UL;
    for (i = 0; i < 4; i++)
        l_992[i] = &l_993;
    for (i = 0; i < 7; i++)
        l_1065[i] = 0xCFA03042L;
    for (i = 0; i < 1; i++)
        l_1096[i] = (void*)0;
    ++l_948[0];
lbl_1023:
    for (g_22 = 0; (g_22 <= 16); ++g_22)
    { 
        struct S0 l_955 = {65526UL,1L,0xA2B3C4E78CA92EFBLL,-3L,1UL};
        for (g_842 = (-21); (g_842 == 1); g_842 = safe_add_func_int16_t_s_s(g_842, 7))
        { 
            return p_7;
        }
        return l_955;
    }
    for (g_22 = 0; (g_22 < 60); ++g_22)
    { 
        int32_t *l_958 = (void*)0;
        const uint64_t *l_975 = &g_17[0];
        int16_t l_977 = 0L;
        int32_t l_1002 = 0x1C055B57L;
        int32_t l_1005 = (-1L);
        int32_t l_1010[6] = {(-1L),(-1L),0L,(-1L),(-1L),0L};
        uint8_t l_1011[3];
        uint64_t ***l_1080 = &g_252;
        int32_t ***l_1087 = &g_118;
        uint16_t **l_1099 = (void*)0;
        int32_t l_1126 = 0x34DA6F4BL;
        uint8_t l_1127[2][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1011[i] = 0xBBL;
        (*g_118) = l_958;
        for (l_947 = (-23); (l_947 <= 18); ++l_947)
        { 
            int32_t *l_976 = &g_120;
            uint8_t l_978 = 5UL;
            int32_t l_1001 = 0x6BC8776BL;
            int32_t l_1003 = 1L;
            int32_t l_1006[1];
            int64_t l_1007[7];
            uint16_t l_1067[4] = {0UL,0UL,0UL,0UL};
            const union U1 *l_1076 = (void*)0;
            uint32_t l_1111 = 18446744073709551610UL;
            uint16_t *l_1123[5];
            int i;
            for (i = 0; i < 1; i++)
                l_1006[i] = 0xB4BCE60CL;
            for (i = 0; i < 7; i++)
                l_1007[i] = (-6L);
            for (i = 0; i < 5; i++)
                l_1123[i] = &g_116[0][0].f4;
            if ((((safe_sub_func_uint8_t_u_u(((((safe_div_func_int16_t_s_s(p_6, ((((4294967295UL || (l_965 == (g_966[5] = &g_596))) & ((*l_945) & p_7.f4)) > ((((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((func_31((l_975 != l_975), l_976, p_7.f0) , g_968[0]), g_968[0])) < (*g_493)), (*g_493))) | p_7.f2) > p_7.f3), l_977)) , p_7.f4) , &p_7) != (void*)0)) , l_978))) | p_6) == p_7.f4) & p_7.f1), l_977)) | p_8) <= 1UL))
            { 
                uint32_t * const l_982[2][6][1] = {{{&g_736},{&g_736},{&g_736},{&g_736},{&g_736},{&g_736}},{{&g_736},{&g_736},{&g_736},{&g_736},{&g_736},{&g_736}}};
                int i, j, k;
                for (g_70 = 0; (g_70 > 36); g_70 = safe_add_func_uint8_t_u_u(g_70, 1))
                { 
                    (*l_945) = (~(&g_736 != l_982[1][5][0]));
                }
            }
            else
            { 
                struct S0 l_983[1] = {{0x9E66L,0xD1568EDFL,0UL,0x72FFE04BL,0UL}};
                int i;
                return l_983[0];
            }
            if (((*l_976) = p_6))
            { 
                uint64_t ***l_994 = &g_252;
                struct S0 l_999 = {1UL,0xD5F0B2D5L,1UL,0x96CC305FL,0x950AL};
                int8_t l_1000 = 0x54L;
                for (p_7.f3 = 5; (p_7.f3 >= 1); p_7.f3 -= 1)
                { 
                    struct S0 l_997 = {65532UL,0L,2UL,0xCD24D0A1L,0UL};
                    struct S0 *l_998[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_998[i] = &g_15.f4;
                    if (p_6)
                        break;
                    l_999 = (((((!((safe_lshift_func_int16_t_s_u(p_7.f1, 1)) != ((((safe_unary_minus_func_int8_t_s((safe_mul_func_uint8_t_u_u(((void*)0 != l_992[1]), ((void*)0 != l_994))))) != (((*l_976) ^ (safe_add_func_uint64_t_u_u(0x309686777231D872LL, (*l_976)))) == p_7.f2)) , 1UL) <= p_6))) , (void*)0) != (void*)0) != (*g_493)) , l_997);
                    if (l_1000)
                        break;
                }
            }
            else
            { 
                int32_t l_1004 = (-1L);
                int32_t l_1008 = (-8L);
                int32_t l_1009[1];
                struct S0 *l_1014 = (void*)0;
                struct S0 *l_1015 = &g_15.f4;
                int i;
                for (i = 0; i < 1; i++)
                    l_1009[i] = 0L;
                l_1011[0]--;
                (*l_1015) = p_7;
                for (g_111 = 0; (g_111 != 4); ++g_111)
                { 
                    uint8_t l_1019[4] = {255UL,255UL,255UL,255UL};
                    int i;
                    if (p_7.f0)
                        break;
                    ++l_1019[3];
                    return l_1022[0][3];
                }
                for (g_111 = 0; (g_111 <= 0); g_111 += 1)
                { 
                    int i;
                    if (p_8)
                        goto lbl_1023;
                    l_1009[g_111] = (((**g_250) = ((safe_mul_func_int8_t_s_s(l_948[g_111], g_157)) , (safe_lshift_func_uint16_t_u_u((((*l_976) <= (*g_493)) , (((func_31(((*g_596) > ((*g_967) >= 1UL)), &l_1001, g_15.f2.f3) , l_1028) < 0x46L) , 0x1AC4L)), g_517)))) || 0xFBL);
                    l_1009[g_111] ^= ((p_7.f3 || g_736) & (*l_976));
                    l_1009[g_111] &= ((((p_8 < (safe_mod_func_uint64_t_u_u(0x9A4E7CA9068C2603LL, (safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s(0L, (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*g_493) & (safe_sub_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((((p_8 == ((**l_993) = (p_7.f4 == (*l_976)))) > (*g_493)) | (*l_976)) == p_7.f2), 0xCB1CL)) , (*g_399)) != (void*)0), 0x97A7L))), 12)), 0xC061L)))), (*l_945)))))) ^ p_7.f1) & p_7.f2) < p_7.f3);
                }
                if (((*l_976) = (*l_976)))
                { 
                    int64_t l_1060 = 0L;
                    uint16_t *l_1061 = &l_1022[0][3].f0;
                    const uint32_t *l_1062 = &g_494[0];
                    int32_t l_1063 = (-1L);
                    int32_t l_1064 = 0x8830F6E2L;
                    int32_t l_1066[6][4][3] = {{{0x14F5E1CEL,0xFDB0E3ECL,6L},{(-9L),0xBCF2BF26L,(-9L)},{6L,0L,0xEC0D9B66L},{0xA89CC137L,0L,5L}},{{0xFDB0E3ECL,0xBCF2BF26L,0xE4987F9EL},{0x14F5E1CEL,0xCB47528EL,0xCB47528EL},{0xCB47528EL,0xEC0D9B66L,5L},{(-9L),0xFDB0E3ECL,5L}},{{0L,5L,0xCB47528EL},{6L,0xBCF2BF26L,0xA89CC137L},{5L,5L,0xBCF2BF26L},{6L,0xFDB0E3ECL,0xE4987F9EL}},{{6L,0xEC0D9B66L,6L},{5L,0xCB47528EL,0xFDB0E3ECL},{6L,6L,6L},{0L,0L,0xE4987F9EL}},{{(-9L),0L,0xBCF2BF26L},{0xCB47528EL,6L,0xA89CC137L},{0x14F5E1CEL,0xCB47528EL,0xCB47528EL},{0xCB47528EL,0xEC0D9B66L,5L}},{{(-9L),0xFDB0E3ECL,5L},{0L,5L,0xCB47528EL},{6L,0xBCF2BF26L,0xA89CC137L},{5L,5L,0xBCF2BF26L}}};
                    const union U1 **l_1077 = &l_1076;
                    int i, j, k;
                    (*l_976) = (safe_mod_func_int16_t_s_s((~((l_1009[0] <= ((*l_1061) = (((safe_rshift_func_uint8_t_u_s((l_1022[0][3] , ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(0x9FDAL, 8)) != (l_1009[0] == ((safe_sub_func_uint16_t_u_u((safe_mul_func_int64_t_s_s(5L, ((**l_965) = (p_7.f2 <= (safe_mod_func_uint8_t_u_u(((((((l_1008 | l_1009[0]) > 1UL) >= l_1010[4]) <= 1UL) & (*l_976)) > (*l_976)), 1UL)))))), 0xE312L)) >= (*l_976)))), 8L)) & l_1004)), (**g_250))) ^ l_1060) >= 0xBE1F43A949A9F579LL))) , p_7.f4)), p_7.f1));
                    (*l_976) = (g_116[0][0].f1 != ((void*)0 != l_1062));
                    l_1067[3]--;
                    (*l_976) = (((*g_493) &= (p_7.f2 | p_7.f1)) <= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((((p_7.f0 , (((safe_mul_func_int16_t_s_s(p_7.f2, p_8)) != (l_1009[0] ^ ((((p_7.f1 || p_7.f1) | (*l_976)) , 0xE08A7767415A9DDALL) , p_7.f4))) , p_8)) != (*l_976)) , 0UL), 0x3F2BL)), (**g_597))));
                    (*l_1077) = l_1076;
                }
                else
                { 
                    uint64_t ****l_1081 = &l_1080;
                    uint16_t *l_1093[5][1][2] = {{{&g_116[0][0].f4,&g_116[0][0].f4}},{{&g_116[0][0].f4,&l_1022[0][3].f0}},{{&l_1067[3],&l_1022[0][3].f0}},{{&l_1022[0][3].f0,&l_1022[0][3].f0}},{{&l_1067[3],&l_1022[0][3].f0}}};
                    uint16_t **l_1092 = &l_1093[3][0][1];
                    union U1 *l_1098 = &g_15;
                    union U1 **l_1097 = &l_1098;
                    int32_t l_1112[3][7] = {{0x2646A107L,1L,0x7640C7BEL,1L,0x2646A107L,0x7640C7BEL,0x291A1571L},{0x291A1571L,0x0BD66312L,0xA987B7DCL,0x291A1571L,0xA987B7DCL,0x0BD66312L,0x291A1571L},{0L,0x291A1571L,0x0BD66312L,0xA987B7DCL,0x291A1571L,0xA987B7DCL,0x0BD66312L}};
                    int i, j, k;
                    (*g_118) = (*g_118);
                    p_7.f1 |= (((*l_1081) = (((+(-1L)) & ((**g_250) = g_1079)) , l_1080)) != (void*)0);
                    (*l_976) = (!(safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((l_1087 != l_1087) == (safe_sub_func_uint8_t_u_u((p_7.f1 < (((safe_rshift_func_uint16_t_u_s(((l_1092 != ((!((safe_unary_minus_func_uint32_t_u((l_1096[0] != l_1097))) <= ((0xCDAAL >= p_6) ^ 0x0AL))) , l_1099)) != 1L), p_7.f4)) , p_7.f3) != 7L)), 0xACL))) >= (*l_976)), g_15.f2.f3)) > p_7.f2), (*l_976))));
                    l_1112[1][4] &= ((safe_div_func_int8_t_s_s((g_15 , p_7.f1), ((((p_7.f3 ^ ((((*g_596) = ((((((safe_add_func_uint16_t_u_u((!(safe_mul_func_int16_t_s_s((p_7 , 0xD860L), (((((*g_493)--) ^ (safe_sub_func_uint8_t_u_u((p_7.f3 <= p_8), (*g_251)))) && (*g_493)) && l_1111)))), (*l_976))) > 0x0BL) , p_6) , &p_7) != (void*)0) < p_7.f4)) | p_6) , (*l_976))) > (*g_967)) && 1UL) || l_1004))) , 0x728FFC72L);
                    (*l_976) = ((safe_unary_minus_func_uint64_t_u((--p_7.f2))) >= (safe_sub_func_int8_t_s_s((**g_250), (((safe_lshift_func_int8_t_s_u(((((--(*g_493)) == (((l_1122 ^ p_6) ^ (((18446744073709551607UL & ((void*)0 == l_1123[2])) , 0xCF559246L) ^ p_7.f3)) , p_7.f3)) , 0xF423243BL) , (*l_976)), p_8)) == p_8) , p_7.f4))));
                }
            }
            l_1127[0][2]--;
        }
    }
    return l_1130;
}



static uint32_t  func_9(int8_t ** p_10)
{ 
    uint32_t l_908 = 4294967291UL;
    int32_t *l_910 = &g_120;
    struct S0 * const *l_915[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 * const **l_916[3];
    struct S0 l_925[1] = {{9UL,0L,0xA7C6E55C8C565E21LL,0xF3A89B13L,65535UL}};
    uint16_t *l_930 = (void*)0;
    int32_t l_931 = 0x74C8437FL;
    int16_t *l_936 = (void*)0;
    int16_t *l_937 = &g_517;
    int32_t *l_940 = (void*)0;
    int32_t *l_941 = &g_626[0][1];
    int i;
    for (i = 0; i < 3; i++)
        l_916[i] = (void*)0;
    (*l_910) = ((safe_sub_func_int8_t_s_s((l_908 ^ (!((((func_31(g_95, l_910, (*l_910)) , (safe_sub_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(((g_917[1][0] = l_915[0]) != (void*)0), g_2)) , (*l_910)) , (*l_910)), 0x4DL))) > 0UL) != (*g_493)) ^ (*g_493)))), 0xFAL)) > 0xD0E857878602B690LL);
    (*l_941) ^= ((*l_910) = (safe_add_func_uint64_t_u_u(((*l_910) < (safe_div_func_uint64_t_u_u(((!((((safe_rshift_func_int16_t_s_s((l_925[0] , (*l_910)), 1)) <= ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((l_931 = (*l_910)), 4)), (safe_unary_minus_func_int8_t_s((~(safe_rshift_func_int16_t_s_u((*l_910), 2))))))) >= ((*l_937) &= (*l_910)))) == ((safe_mul_func_uint8_t_u_u(((*l_910) && 5UL), (*l_910))) && (*l_910))) & (*l_910))) >= (*l_910)), 4L))), (*l_910))));
    return (*g_493);
}



static int8_t ** func_11(union U1  p_12, uint64_t  p_13, int8_t * p_14)
{ 
    int32_t *l_21[2][7] = {{&g_15.f4.f1,&g_2,&g_15.f4.f1,&g_15.f4.f1,&g_2,&g_15.f4.f1,&g_15.f4.f1},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}};
    uint64_t *l_48 = &g_17[0];
    const union U1 l_659 = {0xF887FDADL};
    struct S0 l_684[7][6][4] = {{{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}}},{{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}}},{{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}}},{{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}}},{{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}}},{{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}}},{{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}},{{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L},{65534UL,0xD1AA6BDBL,0xF4F16D787712D33CLL,-1L,0xC567L}},{{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL},{0x79FDL,2L,18446744073709551608UL,0x7CA6D7C8L,0x79F9L},{3UL,0x5AD33E85L,0x6E0DBC773C18E3A3LL,0x34461E47L,0xEF8DL}}}};
    int16_t l_714 = 0xCAE0L;
    uint16_t *l_722 = &g_116[0][0].f4;
    int8_t **l_767 = &g_251;
    int32_t l_771 = 0L;
    int16_t l_814 = 0L;
    uint32_t l_861 = 0xE349B42BL;
    int i, j, k;
    for (p_13 = 0; (p_13 > 14); p_13++)
    { 
        g_20 = (void*)0;
    }
    ++g_22;
    for (p_13 = 20; (p_13 == 9); p_13 = safe_sub_func_uint32_t_u_u(p_13, 7))
    { 
        struct S0 l_49 = {0x32DAL,0xBB1D4416L,18446744073709551615UL,0xB505D01CL,65535UL};
        int64_t l_664 = 0xFFB7FD8DCC05D92CLL;
        uint64_t *l_683 = (void*)0;
        int32_t l_716[2];
        uint16_t *l_725 = &g_70;
        uint8_t l_729 = 0x76L;
        int64_t l_734 = 0x2A8F8D134B84797BLL;
        uint16_t l_737 = 0xEDFFL;
        int16_t l_766 = 0x2775L;
        uint32_t l_794 = 0x9F835AD0L;
        int8_t **l_803 = &g_251;
        uint64_t **l_806 = &l_683;
        uint8_t l_815 = 0x50L;
        int32_t *l_905[5] = {&g_626[1][0],&g_626[1][0],&g_626[1][0],&g_626[1][0],&g_626[1][0]};
        int i;
        for (i = 0; i < 2; i++)
            l_716[i] = 1L;
        (*g_118) = ((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u(0xEF9FL, (p_12.f0 , (func_31(g_22, func_35(func_38(func_43(l_48, l_49, &g_17[4], &p_14), g_398[0], l_49.f1, l_659), l_49.f0), l_49.f4) , p_12.f0)))), p_12.f0)) , (void*)0);
        for (g_120 = 21; (g_120 >= 0); --g_120)
        { 
            int16_t l_665 = 0x19A6L;
            uint64_t *l_673 = &g_17[0];
            int32_t l_675 = 0L;
            const uint64_t *l_686 = (void*)0;
            int8_t **l_687 = &g_251;
            uint64_t l_713 = 2UL;
            int32_t l_715 = 0x65680B0EL;
            int32_t l_717 = 0x396452B2L;
            int32_t l_718 = 0xDB6A2B3EL;
            uint32_t l_719 = 4294967287UL;
            uint16_t *l_726[5][7][1];
            struct S0 l_830 = {0x86F5L,0L,0xC0D98E6264F1C45FLL,0x966A00A3L,0x47C6L};
            int32_t ** const *l_845[3][4] = {{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118}};
            int32_t ** const **l_844 = &l_845[0][3];
            int32_t l_851 = 0xBC550896L;
            int32_t l_854 = 9L;
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_726[i][j][k] = (void*)0;
                }
            }
            if (((**g_595) && (((((l_664 > l_665) , (0x7C5425DF67ECCC3FLL ^ ((l_665 >= (*g_493)) == (safe_mul_func_uint8_t_u_u(g_398[0], g_414.f3))))) , 0UL) < l_665) | 0x44L)))
            { 
                int32_t l_672[5][6][5] = {{{0xA263F151L,1L,2L,0x0CC2544AL,0x68F7CAEAL},{0xFC38DDB4L,0x8D1EB14AL,(-2L),0x6128E423L,0xC475A5C4L},{1L,1L,1L,1L,0x071FC149L},{0xDF638672L,0xF9E0F24BL,0L,0x34340118L,0xF9E0F24BL},{0x071FC149L,0xA263F151L,3L,0x24210D6AL,(-1L)},{0L,0xFC38DDB4L,6L,0x34340118L,(-2L)}},{{0x0CC2544AL,1L,0xE716BF5BL,1L,0x0CC2544AL},{6L,0xDF638672L,0xFC38DDB4L,0x6128E423L,0x8D1EB14AL},{0x68F7CAEAL,0x071FC149L,0x24210D6AL,0x0CC2544AL,0xD6B111BBL},{0xDF638672L,0L,1L,0xDF638672L,0x8D1EB14AL},{(-6L),0x0CC2544AL,3L,3L,0x0CC2544AL},{0x8D1EB14AL,6L,0L,0x75B3917BL,(-2L)}},{{0xA263F151L,0x68F7CAEAL,0x54AA0CBFL,(-1L),(-1L)},{0x6128E423L,0xDF638672L,(-2L),(-1L),0xF9E0F24BL},{0xA263F151L,(-6L),0x071FC149L,0x0CC2544AL,0x071FC149L},{0x8D1EB14AL,0x8D1EB14AL,0x7962160CL,0xF9E0F24BL,0xC475A5C4L},{(-6L),0xA263F151L,1L,(-6L),0x68F7CAEAL},{0xDF638672L,0x6128E423L,0L,0x34340118L,0L}},{{0xD6B111BBL,0xBE0A0EEBL,(-1L),0x071FC149L,0x071FC149L},{(-8L),0x1E17F072L,(-8L),0x7962160CL,0xFC38DDB4L},{3L,0x54AA0CBFL,2L,1L,0x2A1FEC76L},{0x6128E423L,6L,0xC475A5C4L,0L,0x1E17F072L},{(-1L),0xD6B111BBL,2L,0x2A1FEC76L,(-6L)},{6L,(-8L),(-8L),6L,0L}},{{1L,3L,(-1L),0x24210D6AL,3L},{0L,0x6128E423L,0x7962160CL,0xBFDE528BL,0xFC38DDB4L},{0xBE0A0EEBL,(-1L),9L,0x24210D6AL,2L},{0L,6L,0x8D1EB14AL,6L,0L},{9L,1L,(-1L),0x2A1FEC76L,0xD6B111BBL},{0x1E17F072L,0L,0xBFDE528BL,0L,0L}}};
                int64_t *l_757 = (void*)0;
                int64_t l_793 = 2L;
                int8_t **l_804 = &g_251;
                int i, j, k;
                for (l_49.f3 = (-28); (l_49.f3 != (-1)); l_49.f3 = safe_add_func_uint64_t_u_u(l_49.f3, 9))
                { 
                    int16_t *l_674[7][7][5] = {{{(void*)0,(void*)0,&g_517,(void*)0,&l_665},{(void*)0,&l_665,&g_517,&g_517,&l_665},{&l_665,&l_665,&g_517,&g_517,(void*)0},{(void*)0,&l_665,&g_517,(void*)0,&g_517},{(void*)0,(void*)0,(void*)0,(void*)0,&l_665},{(void*)0,(void*)0,&l_665,&l_665,&l_665},{&l_665,&l_665,&g_517,&l_665,&l_665}},{{(void*)0,(void*)0,&l_665,(void*)0,&l_665},{(void*)0,(void*)0,&g_517,(void*)0,(void*)0},{&l_665,(void*)0,&l_665,&g_517,&g_517},{&l_665,&l_665,&l_665,&g_517,&g_517},{&l_665,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_517,&l_665,&l_665},{&l_665,&l_665,(void*)0,(void*)0,&l_665}},{{(void*)0,&l_665,&l_665,(void*)0,&l_665},{(void*)0,&l_665,&l_665,(void*)0,&l_665},{&l_665,(void*)0,&g_517,(void*)0,&g_517},{(void*)0,&l_665,&l_665,(void*)0,(void*)0},{&l_665,(void*)0,&g_517,(void*)0,&l_665},{&l_665,(void*)0,&l_665,(void*)0,&l_665},{&l_665,&l_665,(void*)0,&l_665,&l_665}},{{(void*)0,(void*)0,&g_517,(void*)0,&l_665},{(void*)0,&l_665,&g_517,&g_517,&l_665},{&l_665,&l_665,&g_517,&g_517,(void*)0},{(void*)0,&l_665,&g_517,(void*)0,&g_517},{(void*)0,(void*)0,(void*)0,(void*)0,&l_665},{(void*)0,&g_517,&l_665,&g_517,&l_665},{&l_665,&l_665,&l_665,&g_517,(void*)0}},{{&g_517,(void*)0,(void*)0,&g_517,&l_665},{&l_665,&l_665,&g_517,(void*)0,&l_665},{&l_665,(void*)0,&g_517,&l_665,&l_665},{(void*)0,&l_665,(void*)0,&g_517,&l_665},{&g_517,&g_517,&g_517,&l_665,&l_665},{(void*)0,&l_665,&l_665,&g_517,&l_665},{&l_665,&l_665,&g_517,&l_665,(void*)0}},{{&l_665,(void*)0,(void*)0,&l_665,&l_665},{&l_665,&g_517,&g_517,(void*)0,&g_517},{&l_665,(void*)0,&g_517,&g_517,&l_665},{(void*)0,&l_665,(void*)0,(void*)0,&g_517},{&g_517,&l_665,&l_665,&l_665,&g_517},{(void*)0,&l_665,&l_665,&l_665,&l_665},{&l_665,&l_665,&g_517,&g_517,&g_517}},{{&l_665,(void*)0,&l_665,&l_665,&l_665},{&g_517,&g_517,&g_517,&g_517,&g_517},{&l_665,(void*)0,&g_517,&l_665,&g_517},{(void*)0,&l_665,&l_665,(void*)0,&l_665},{&l_665,&l_665,&g_517,&g_517,&g_517},{(void*)0,&g_517,&l_665,&g_517,&l_665},{&l_665,&l_665,&l_665,&g_517,(void*)0}}};
                    uint8_t *l_679[5][7][1] = {{{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680}},{{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680}},{{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680}},{{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680}},{{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680},{&g_680}}};
                    const uint64_t *l_685 = (void*)0;
                    uint16_t *l_698[5] = {&g_116[0][0].f4,&g_116[0][0].f4,&g_116[0][0].f4,&g_116[0][0].f4,&g_116[0][0].f4};
                    int32_t l_711 = 0xA51F2F26L;
                    int32_t l_712[7][3][7] = {{{(-3L),0L,0L,(-3L),0x6C8E2228L,1L,1L},{(-7L),(-7L),0x2BDE26AFL,(-7L),(-7L),(-7L),0x2BDE26AFL},{0x6C8E2228L,(-3L),0L,0L,(-3L),0x6C8E2228L,1L}},{{0x635F1D40L,0x2A33BD91L,0x635F1D40L,(-7L),0x635F1D40L,0x2A33BD91L,0x635F1D40L},{0x6C8E2228L,0L,1L,(-3L),(-3L),1L,0L},{(-7L),0x2A33BD91L,0x2BDE26AFL,0x2A33BD91L,(-7L),0x2A33BD91L,0x2BDE26AFL}},{{(-3L),(-3L),1L,0L,0x6C8E2228L,0x6C8E2228L,0L},{0x635F1D40L,(-7L),0x635F1D40L,0x2A33BD91L,0x635F1D40L,(-7L),0x635F1D40L},{(-3L),0L,0L,(-3L),0x6C8E2228L,1L,1L}},{{(-7L),(-7L),0x2BDE26AFL,(-7L),(-7L),(-7L),0x2BDE26AFL},{0x6C8E2228L,(-3L),0L,0L,(-3L),0x6C8E2228L,1L},{0x635F1D40L,0x2A33BD91L,0x635F1D40L,(-7L),0x635F1D40L,0x2A33BD91L,0x635F1D40L}},{{0x6C8E2228L,0L,1L,(-3L),(-3L),1L,0L},{(-7L),0x2A33BD91L,0x2BDE26AFL,0x2A33BD91L,(-7L),0x2A33BD91L,0x2BDE26AFL},{(-3L),(-3L),1L,0L,0x6C8E2228L,0x6C8E2228L,0L}},{{0x635F1D40L,(-7L),0x635F1D40L,0x2A33BD91L,0x635F1D40L,(-7L),0x635F1D40L},{(-3L),0L,0L,(-3L),0x6C8E2228L,1L,1L},{(-7L),(-7L),0x2BDE26AFL,(-7L),(-7L),(-7L),0x2BDE26AFL}},{{0x6C8E2228L,(-3L),0L,0L,(-3L),0x6C8E2228L,1L},{0x635F1D40L,0x2A33BD91L,0x635F1D40L,(-7L),0x635F1D40L,0x2A33BD91L,0x635F1D40L},{0x6C8E2228L,0L,1L,(-3L),(-3L),1L,0L}}};
                    uint16_t **l_723 = &l_698[2];
                    uint16_t **l_724[3];
                    uint32_t *l_735 = &g_736;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_724[i] = &l_722;
                    (*g_118) = func_35((((safe_rshift_func_int16_t_s_u(0xBE74L, 15)) > l_672[3][2][0]) , l_673), (l_675 = l_664));
                    p_12.f4.f1 = (+(((((*g_493)--) , (g_626[2][2] , (&p_12 != (p_12 , (func_31((g_680++), func_43((l_683 = &p_13), l_684[0][2][3], ((*g_493) , (l_686 = l_685)), l_687), l_672[1][2][0]) , &p_12))))) && 9L) & (*g_251)));
                    g_116[0][0].f1 |= ((g_15 , (safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((l_665 & (safe_mod_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_s(l_672[3][2][0], 2)) , (p_12.f4.f0 = 0UL)) & (l_711 |= (safe_mul_func_int8_t_s_s(((!((safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_116[0][0].f4 &= 0x6663L) , (-3L)), (((((((((*g_596) , (*g_513)) == (void*)0) < (*g_493)) > g_398[0]) , g_626[0][1]) , l_675) != p_13) & p_13))), l_672[3][2][0])), 0x446DL)) <= 0x8471523BDE412BAFLL), g_710)) != l_672[4][5][1])) ^ 0UL), g_109[0][0])))) > l_665) == l_712[2][2][5]), p_13))), l_713)), g_17[0])) < l_712[2][2][5]), p_13))) , l_49.f0);
                    ++l_719;
                    (*g_118) = ((((l_726[0][3][0] = (l_725 = ((*l_723) = l_722))) == l_722) <= (safe_add_func_uint64_t_u_u(p_13, (p_13 && ((((l_672[3][2][0] |= (((*l_735) = (l_711 & ((((**g_595) = l_729) >= (safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((0x3DL | l_734), p_13)), g_494[0]))) && 0x6167L))) , 4294967287UL)) != l_737) & (-8L)) != 18446744073709551615UL))))) , (void*)0);
                }
                for (l_675 = 0; (l_675 > 15); l_675 = safe_add_func_uint64_t_u_u(l_675, 1))
                { 
                    uint32_t l_746[3][3][4] = {{{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL},{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL},{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL}},{{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL},{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL},{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL}},{{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL},{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL},{0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL,0x6AAE2E1FL}}};
                    int16_t *l_747[3][4] = {{&l_714,&l_714,(void*)0,&l_714},{&l_714,(void*)0,(void*)0,&l_714},{(void*)0,&l_714,(void*)0,(void*)0}};
                    int32_t l_748 = 0x742D5B1DL;
                    uint64_t *l_758 = &g_116[0][0].f2;
                    uint8_t *l_759[6][2][2] = {{{&g_680,&g_680},{&g_680,&g_680}},{{&l_729,&g_680},{&g_680,&g_680}},{{&l_729,&g_680},{&g_680,&g_680}},{{&g_680,&g_680},{&l_729,&g_680}},{{&g_680,&g_680},{&l_729,&g_680}},{{&g_680,&g_680},{&g_680,&g_680}}};
                    int i, j, k;
                    g_15.f4.f1 = (safe_lshift_func_uint16_t_u_s(((((safe_lshift_func_uint8_t_u_u(((l_748 = (safe_rshift_func_uint8_t_u_u(l_746[2][0][1], g_116[0][0].f2))) > 65532UL), (safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s(l_49.f1, (0UL || ((safe_div_func_uint32_t_u_u((((((safe_lshift_func_uint8_t_u_u(l_664, l_49.f2)) , g_2) > 0xC3L) >= (*g_493)) || p_12.f0), 0xC479E040L)) || 0x91L)))) | (*g_251)), p_12.f0)))) , (void*)0) != l_757) & 0x629BE057L), l_715));
                    if (p_13)
                        continue;
                    (*g_118) = func_43(l_758, g_116[0][0], &p_13, ((((l_717 |= (p_12.f0 >= ((**g_595) ^= l_748))) | ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(l_675, ((&g_736 != (void*)0) , g_116[0][0].f0))) , l_746[0][2][2]) > l_766), 0xF2L)), 6)) < p_13)) != l_675) , l_767));
                }
                for (l_713 = 0; (l_713 <= 0); l_713 += 1)
                { 
                    int32_t l_768 = 1L;
                    int32_t l_769 = 0x9768E1D9L;
                    int32_t l_770[3][3][6];
                    uint32_t l_772 = 2UL;
                    uint8_t *l_790 = &g_680;
                    union U1 *l_792 = &g_15;
                    union U1 **l_791 = &l_792;
                    int16_t *l_801 = &g_517;
                    const uint64_t *l_802 = &g_116[0][0].f2;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_770[i][j][k] = (-7L);
                        }
                    }
                    ++l_772;
                    l_769 |= (safe_mul_func_uint8_t_u_u((+(safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((((+((safe_rshift_func_uint16_t_u_u(((((*l_48) |= l_672[l_713][(l_713 + 3)][(l_713 + 2)]) | (p_12.f4.f2 = (p_12 , (safe_rshift_func_uint16_t_u_s(((((+(0UL && (((p_13 <= ((safe_mul_func_uint8_t_u_u(((*l_790) = 246UL), ((*g_596) | ((p_13 , (void*)0) == (void*)0)))) , 0x60AEB4DFL)) , 0x0F05L) >= 0x68E9L))) & p_13) , 0xA3L) >= (**g_250)), l_768))))) , p_12.f0), 11)) | l_713)) & p_13) , (void*)0) != &l_686), 3)) != l_715), (*g_493)))), (-1L)));
                    (*l_791) = &p_12;
                    l_794++;
                    (*g_118) = ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_665, 6)), ((g_15 , ((*l_801) = 0L)) <= ((void*)0 == &g_111)))) , func_43(func_38((*g_118), l_766, p_12.f0, g_15), g_116[l_713][l_713], l_802, l_803));
                }
                return l_804;
            }
            else
            { 
                uint32_t l_813 = 0xD995B195L;
                int32_t ***l_817 = (void*)0;
                int32_t ****l_816 = &l_817;
                int32_t l_847 = 0x979DB54DL;
                int32_t l_848 = 0xC1F3287CL;
                int32_t l_850 = 1L;
                int32_t l_853 = 0L;
                int32_t l_855 = 1L;
                int32_t l_856 = (-7L);
                int32_t l_857 = 0x2204CFFAL;
                int32_t l_858 = 0L;
                int32_t l_859 = 9L;
                int32_t l_860[6][5] = {{(-6L),0xE1E64FE6L,0xD52BFF94L,0xE1E64FE6L,(-6L)},{0x18DF92C2L,0x81DE644DL,0x5DC7F8D6L,0x5DC7F8D6L,0x18DF92C2L},{7L,0L,0xD52BFF94L,0x5BB888F7L,0xD52BFF94L},{0x18DF92C2L,0x18DF92C2L,0x81DE644DL,0x18DF92C2L,0x18DF92C2L},{0xD52BFF94L,0x5BB888F7L,0xD52BFF94L,0L,7L},{0x18DF92C2L,0x5DC7F8D6L,0x5DC7F8D6L,0x18DF92C2L,0x5DC7F8D6L}};
                uint64_t l_869 = 6UL;
                uint64_t *l_872 = (void*)0;
                uint8_t * const l_890[6][7][1] = {{{(void*)0},{(void*)0},{&l_729},{&g_680},{&l_729},{&g_680},{&l_729}},{{(void*)0},{&l_815},{&l_729},{&g_680},{&g_680},{&g_680},{&l_729}},{{&l_815},{(void*)0},{&l_729},{&g_680},{&l_729},{&g_680},{&l_729}},{{(void*)0},{(void*)0},{&l_729},{&g_680},{&l_729},{&g_680},{&l_729}},{{(void*)0},{&l_815},{&l_729},{&g_680},{&g_680},{&g_680},{&l_729}},{{&l_815},{(void*)0},{&l_729},{&g_680},{&l_729},{&g_680},{&l_729}}};
                int i, j, k;
                for (l_729 = 0; (l_729 <= 5); l_729 += 1)
                { 
                    uint64_t ***l_805[4] = {&g_252,&g_252,&g_252,&g_252};
                    int i;
                    if (g_17[l_729])
                        break;
                    l_806 = &l_683;
                    l_716[0] = (((p_12.f1 = (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((l_49.f1 = g_17[l_729]), l_716[1])), ((safe_mul_func_uint8_t_u_u((((l_813 <= (l_814 , ((((l_813 != 0x39L) || l_813) > (**g_595)) < 7L))) <= g_17[l_729]) ^ l_815), 0UL)) ^ p_12.f0)))) < p_13) || l_49.f1);
                }
                if (p_12.f0)
                    continue;
                if (p_13)
                { 
                    uint16_t l_827 = 0xCFFBL;
                    struct S0 *l_832[5] = {&l_49,&l_49,&l_49,&l_49,&l_49};
                    struct S0 **l_831 = &l_832[3];
                    uint8_t *l_841 = &g_680;
                    int32_t l_846 = 0x1A911B64L;
                    int16_t l_849[6];
                    int32_t l_852[2];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_849[i] = 0x0090L;
                    for (i = 0; i < 2; i++)
                        l_852[i] = 0x97434D7BL;
                    l_49.f1 &= (l_846 = ((l_816 == ((safe_mul_func_uint16_t_u_u((65531UL == (safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((!((((g_842 = (((safe_div_func_int16_t_s_s(l_827, (safe_sub_func_int32_t_s_s((l_675 = (((*l_831) = (l_830 , &l_830)) == ((safe_rshift_func_int16_t_s_u((p_13 <= ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((((*l_841) = (!(((((safe_unary_minus_func_int32_t_s((g_626[0][1] = l_827))) & 0x7476L) < p_12.f0) || 1L) , 0UL))) && 8UL), 15)), 1L)) > p_12.f0)), 1)) , (void*)0))), (*g_493))))) , (*g_251)) >= l_719)) > (**g_250)) | p_13) ^ g_843)), 0xFB7EL)) == l_49.f4), 7))), 0UL)) , l_844)) < 0x26B8EE42L));
                    --l_861;
                    return l_767;
                }
                else
                { 
                    struct S0 *l_864 = &l_830;
                    struct S0 **l_865 = &l_864;
                    (*l_865) = l_864;
                    p_12.f4 = l_49;
                }
                for (l_737 = (-27); (l_737 != 32); l_737++)
                { 
                    int32_t l_868[6][3][5] = {{{0xDBCB71A3L,1L,(-1L),0x1D3D1601L,0x1D3D1601L},{(-10L),0x971A1491L,(-10L),7L,0xDB16356DL},{(-1L),1L,0xDBCB71A3L,(-9L),1L}},{{0x844377D9L,(-1L),(-1L),0x844377D9L,(-10L)},{(-1L),(-1L),0xDBCB71A3L,1L,1L},{0x347CA7C1L,1L,(-10L),1L,0x347CA7C1L}},{{(-1L),(-9L),(-1L),1L,0xA5C33DFEL},{0xD7CE32A4L,1L,0x844377D9L,0x844377D9L,1L},{0x1D3D1601L,0xDBCB71A3L,(-1L),(-9L),0xA5C33DFEL}},{{1L,0x844377D9L,0x347CA7C1L,7L,0x347CA7C1L},{0xA5C33DFEL,0xA5C33DFEL,(-1L),0x1D3D1601L,1L},{1L,0x713A5F4CL,0xD7CE32A4L,(-10L),(-10L)}},{{0x1D3D1601L,0x6575A9D0L,0x1D3D1601L,(-4L),1L},{0xD7CE32A4L,0x713A5F4CL,1L,1L,0xDB16356DL},{(-1L),0xA5C33DFEL,0xA5C33DFEL,(-1L),0x1D3D1601L}},{{0x347CA7C1L,0x844377D9L,1L,0xDB16356DL,0x713A5F4CL},{(-1L),0xDBCB71A3L,0x1D3D1601L,0xDBCB71A3L,(-1L)},{0x844377D9L,1L,0xD7CE32A4L,0xDB16356DL,(-1L)}}};
                    int i, j, k;
                    if (p_13)
                        break;
                    l_869--;
                    if (p_12.f2.f0)
                        break;
                }
                if (((p_12.f4.f0 | (l_48 == (l_872 = (void*)0))) == p_12.f0))
                { 
                    uint64_t *l_873 = &g_17[0];
                    int32_t l_878 = (-7L);
                    int16_t *l_880 = (void*)0;
                    int16_t *l_881 = &l_766;
                    (*g_118) = func_35(l_873, p_12.f2.f0);
                    if (g_414.f3)
                        break;
                    l_860[5][4] |= (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(0L, ((((func_31(l_878, func_35(((~0xE9L) , &l_713), ((*l_881) = p_12.f4.f3)), ((((((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((l_716[0] = (((((safe_div_func_uint64_t_u_u(p_12.f4.f4, (-1L))) , p_14) == l_890[4][3][0]) < g_70) , p_12.f2.f4)), l_49.f4)), 11)) || p_12.f2.f0) || 0x161418550D1FE618LL), p_12.f2.f0)) == p_12.f4.f3) != p_12.f4.f2) == g_22) , l_716[1]) | p_12.f4.f3)) , p_12.f2.f4) , 0x4570L) <= 0UL) , l_49.f2))), 2L));
                }
                else
                { 
                    const uint16_t l_897 = 3UL;
                    uint32_t l_904 = 0xB470588CL;
                    l_905[3] = func_35(func_38(func_35((*l_806), p_12.f2.f3), p_12.f0, ((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_897 , (((((((*g_493) = ((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(1UL, 2)), ((((((l_904 & p_12.f2.f2) | l_897) || 0x1B43351F60DD491ELL) & g_494[0]) || 0L) & (*g_493)))) ^ g_109[1][1])) && 0xC0A1F591L) | p_12.f2.f4) ^ l_904) != p_12.f2.f4) , (*g_493))), (-1L))), 255UL)), 0x2AL)) , (**g_250)), g_15), p_12.f2.f4);
                    if (p_12.f2.f2)
                        break;
                }
            }
            g_109[0][2] &= p_12.f4.f0;
        }
        (*g_118) = func_35(l_48, p_12.f0);
        (*g_118) = (*g_118);
    }
    return l_767;
}



static union U1  func_31(uint8_t  p_32, int32_t * p_33, int32_t  p_34)
{ 
    return g_15;
}



static int32_t * func_35(uint64_t * p_36, int16_t  p_37)
{ 
    int32_t *l_661 = (void*)0;
    return l_661;
}



static uint64_t * func_38(int32_t * p_39, int32_t  p_40, const int8_t  p_41, const union U1  p_42)
{ 
    uint64_t *l_660 = &g_116[0][0].f2;
    return l_660;
}



static int32_t * func_43(uint64_t * p_44, struct S0  p_45, const uint64_t * p_46, int8_t ** p_47)
{ 
    uint32_t l_58[6];
    uint16_t *l_61 = &g_15.f4.f0;
    uint16_t *l_62 = &g_15.f4.f0;
    uint16_t *l_63 = (void*)0;
    uint16_t *l_64 = &g_15.f4.f0;
    uint16_t *l_65 = &g_15.f4.f0;
    uint16_t *l_66 = &g_15.f4.f4;
    uint16_t *l_67 = &g_15.f4.f4;
    uint16_t *l_68 = &g_15.f4.f0;
    uint16_t *l_69[2][4][3] = {{{&g_70,&g_70,&g_15.f4.f4},{&g_70,&g_70,&g_70},{&g_70,&g_70,&g_15.f4.f4},{&g_70,&g_70,&g_70}},{{&g_70,&g_70,&g_15.f4.f4},{&g_70,&g_70,&g_70},{&g_70,&g_70,&g_15.f4.f4},{&g_70,&g_70,&g_70}}};
    int8_t l_71 = (-3L);
    int32_t *l_72 = (void*)0;
    int32_t *l_73 = &g_15.f4.f1;
    int32_t *l_74 = (void*)0;
    int32_t *l_75 = (void*)0;
    int32_t *l_76 = &g_15.f4.f1;
    uint8_t l_96[3][7][6] = {{{0UL,0x3DL,255UL,252UL,0xF0L,0x32L},{8UL,1UL,252UL,0x9EL,255UL,0x85L},{0x1DL,252UL,8UL,0UL,0UL,8UL},{252UL,252UL,0x3DL,0x1DL,255UL,0UL},{0x32L,1UL,0x9EL,0x3DL,0xF0L,0x3DL},{0x9EL,0x32L,0x9EL,0x85L,252UL,0UL},{6UL,0x85L,0x3DL,0xC2L,8UL,8UL}},{{0xC2L,8UL,8UL,0xC2L,0x3DL,0x85L},{6UL,0UL,252UL,0x85L,0x9EL,0x32L},{0x9EL,0x3DL,0xF0L,0x3DL,0x9EL,1UL},{0x32L,0UL,255UL,0x1DL,0x3DL,252UL},{252UL,8UL,0UL,0UL,8UL,252UL},{0x1DL,0x85L,255UL,0x9EL,252UL,1UL},{8UL,0x32L,0xF0L,252UL,0xF0L,0x32L}},{{8UL,1UL,252UL,0x9EL,255UL,0x85L},{0x1DL,252UL,8UL,0UL,0UL,8UL},{252UL,252UL,0x3DL,0x1DL,255UL,0UL},{0x32L,1UL,0x9EL,0x3DL,0xF0L,0x3DL},{0x9EL,0x32L,0x9EL,0x85L,252UL,0UL},{6UL,0x85L,0x3DL,0xC2L,8UL,8UL},{0xC2L,8UL,8UL,0xC2L,0x3DL,0x85L}}};
    int32_t l_141 = (-1L);
    int32_t l_144 = 6L;
    int32_t l_145[6][4][5] = {{{0x819CC9C0L,(-1L),0L,1L,6L},{(-1L),1L,0x0DB83A45L,(-1L),(-1L)},{1L,0x819CC9C0L,1L,(-9L),(-9L)},{1L,0x2E390C49L,1L,0x819CC9C0L,1L}},{{(-1L),0x0DB83A45L,(-1L),0x03155409L,0x86ADAD85L},{0x819CC9C0L,(-1L),1L,1L,1L},{0L,0L,1L,0x2E390C49L,1L},{(-9L),(-9L),0x0DB83A45L,6L,0x86ADAD85L}},{{0L,6L,0L,9L,1L},{9L,(-9L),(-1L),(-1L),(-9L)},{0x86ADAD85L,0L,0x03155409L,(-1L),(-1L)},{(-1L),(-1L),(-1L),9L,6L}},{{0x2E390C49L,0x0DB83A45L,1L,6L,(-9L)},{(-1L),0x2E390C49L,(-9L),0x03155409L,0x2E390C49L},{(-1L),0x0DB83A45L,1L,(-1L),0L},{1L,0x86ADAD85L,(-1L),0L,6L}},{{6L,0x2E390C49L,0x819CC9C0L,0x0DB83A45L,0L},{1L,0L,0L,1L,0x2E390C49L},{0L,0L,(-9L),1L,1L},{0x0DB83A45L,0x2E390C49L,0L,(-1L),(-1L)}},{{(-9L),0x86ADAD85L,9L,1L,1L},{0x86ADAD85L,0x0DB83A45L,0x86ADAD85L,1L,6L},{0x86ADAD85L,0x03155409L,(-1L),0x0DB83A45L,(-1L)},{(-9L),9L,0x2E390C49L,0L,(-1L)}}};
    int32_t l_147[1][4][5] = {{{0x78E13ECEL,0x78E13ECEL,0x592EE31DL,2L,0x592EE31DL},{0x78E13ECEL,0x78E13ECEL,0x592EE31DL,2L,0x592EE31DL},{0x78E13ECEL,0x78E13ECEL,0x592EE31DL,2L,0x592EE31DL},{0x78E13ECEL,0x78E13ECEL,0x592EE31DL,2L,0x592EE31DL}}};
    uint32_t l_151[4] = {8UL,8UL,8UL,8UL};
    const int64_t l_154 = 0x0EBA9AE2DBC6560ALL;
    int64_t l_218 = 1L;
    int16_t l_219 = 0xBA3CL;
    uint32_t l_233 = 0UL;
    struct S0 l_242 = {0xAD10L,0x603B3050L,1UL,0x730CD26FL,0x0D8CL};
    int32_t **l_247 = &g_99;
    int64_t l_334 = (-2L);
    uint32_t l_339[5] = {0xAEAA0C25L,0xAEAA0C25L,0xAEAA0C25L,0xAEAA0C25L,0xAEAA0C25L};
    int8_t * const *l_360 = &g_251;
    int8_t * const **l_359 = &l_360;
    uint64_t l_392[1];
    int8_t **l_418 = (void*)0;
    uint8_t l_433 = 1UL;
    const uint16_t l_589 = 0x5E26L;
    int64_t **l_598[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t l_635 = 0x69BAL;
    uint64_t l_658 = 0x57BBF119F23C4F11LL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_58[i] = 18446744073709551610UL;
    for (i = 0; i < 1; i++)
        l_392[i] = 1UL;
    (*l_73) = (safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(g_17[0], (((l_58[1] == ((safe_div_func_uint16_t_u_u(65528UL, (((0L > 0L) || g_17[0]) , (p_45.f4 ^= g_17[4])))) != l_71)) > p_45.f1) > l_71))) >= g_70) & p_45.f3), 5)) > l_71) <= p_45.f1), 0xF4L));
    p_45.f1 |= ((void*)0 != l_72);
    for (g_70 = 26; (g_70 == 29); g_70 = safe_add_func_int16_t_s_s(g_70, 1))
    { 
        int32_t l_86[6] = {0x6F18880AL,8L,0x6F18880AL,0x6F18880AL,8L,0x6F18880AL};
        int64_t *l_93 = (void*)0;
        int64_t *l_94 = &g_95;
        int32_t l_97 = 1L;
        int64_t *l_98 = &g_15.f1;
        int32_t *l_102 = &g_15.f4.f1;
        int64_t l_121 = 0x54321B6B7D2F2FD2LL;
        uint32_t l_123[1][2];
        int32_t l_142 = (-4L);
        int32_t l_143 = 0x8B2AD579L;
        int32_t l_146 = 0x8B5B8669L;
        int32_t l_148[6] = {(-5L),0x6EEA41B1L,(-5L),(-5L),0x6EEA41B1L,(-5L)};
        int64_t l_167 = (-5L);
        int8_t l_168[1];
        struct S0 l_240 = {1UL,0xF067BEC6L,18446744073709551615UL,1L,5UL};
        const uint64_t *l_245 = &g_116[0][0].f2;
        const uint64_t **l_244 = &l_245;
        uint32_t l_304 = 0x32849392L;
        int32_t *l_305 = &g_109[1][1];
        uint32_t l_353 = 0x60DB36DFL;
        int8_t * const **l_361 = &l_360;
        uint32_t l_376 = 4294967289UL;
        uint64_t ***l_396[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t ****l_395 = &l_396[2];
        uint64_t l_447[2];
        union U1 *l_533 = &g_15;
        uint16_t l_636 = 0x3980L;
        int8_t *****l_641 = &g_640[0][0];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_123[i][j] = 18446744073709551609UL;
        }
        for (i = 0; i < 1; i++)
            l_168[i] = 0x2FL;
        for (i = 0; i < 2; i++)
            l_447[i] = 18446744073709551615UL;
        if (g_22)
            break;
    }
    return (*l_247);
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);

    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_109[i][j], "g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_116[i][j].f0, "g_116[i][j].f0", print_hash_value);
            transparent_crc(g_116[i][j].f1, "g_116[i][j].f1", print_hash_value);
            transparent_crc(g_116[i][j].f2, "g_116[i][j].f2", print_hash_value);
            transparent_crc(g_116[i][j].f3, "g_116[i][j].f3", print_hash_value);
            transparent_crc(g_116[i][j].f4, "g_116[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_398[i], "g_398[i]", print_hash_value);

    }
    transparent_crc(g_414.f0, "g_414.f0", print_hash_value);
    transparent_crc(g_414.f1, "g_414.f1", print_hash_value);
    transparent_crc(g_414.f2, "g_414.f2", print_hash_value);
    transparent_crc(g_414.f3, "g_414.f3", print_hash_value);
    transparent_crc(g_414.f4, "g_414.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_494[i], "g_494[i]", print_hash_value);

    }
    transparent_crc(g_517, "g_517", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_626[i][j], "g_626[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_968[i], "g_968[i]", print_hash_value);

    }
    transparent_crc(g_1079, "g_1079", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
