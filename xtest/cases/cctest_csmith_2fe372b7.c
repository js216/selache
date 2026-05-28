// SPDX-License-Identifier: MIT
// cctest_csmith_2fe372b7.c --- cctest case csmith_2fe372b7 (csmith seed 803435191)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa6f29c43 */
/* @exp_ticks 0x4592 */

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

// Options:   -s 803435191 -o /tmp/csmith_gen_ar451qhx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const uint16_t  f1;
   uint8_t  f2;
   uint16_t  f3;
   uint8_t  f4;
};
#pragma pack(pop)

struct S1 {
   uint16_t  f0;
};

union U2 {
   const uint16_t  f0;
};


static uint32_t g_2[2][1] = {{0xFD94FE5FL},{0xFD94FE5FL}};
static struct S0 g_8 = {1UL,0xCB3AL,246UL,6UL,0xE3L};
static uint64_t g_30 = 1UL;
static int64_t g_42[4] = {7L,7L,7L,7L};
static int8_t g_43 = 0x88L;
static uint32_t g_44 = 4294967292UL;
static uint8_t g_62[3] = {6UL,6UL,6UL};
static int32_t g_81 = 0xBA470062L;
static struct S1 g_90 = {1UL};
static int8_t g_133[2][5][4] = {{{0xA1L,0x30L,0xA1L,0x8FL},{0L,0x30L,(-9L),0L},{0x30L,2L,2L,0x30L},{0xA1L,0L,2L,0x8FL},{0x30L,0L,(-9L),0L}},{{0L,2L,0xA1L,0L},{0xA1L,0L,0x8FL,0x8FL},{0L,0L,(-9L),0x30L},{0L,2L,0x8FL,0L},{0xA1L,2L,0x9DL,0x32L}}};
static uint16_t g_134 = 0xAC9AL;
static uint64_t g_150[3] = {0xAFCFED7C6F009EE3LL,0xAFCFED7C6F009EE3LL,0xAFCFED7C6F009EE3LL};
static int16_t g_158[1][3] = {{(-1L),(-1L),(-1L)}};
static int32_t g_161 = (-1L);
static uint16_t g_162 = 0x581DL;
static struct S1 g_165 = {0x246BL};
static int32_t g_216 = 0x78A96F66L;
static int64_t g_219 = 0x8DE91D9FE2B2F505LL;
static uint8_t g_221 = 255UL;
static int64_t g_274 = 0x257126551609B5F3LL;



static int32_t  func_1(void);
static uint8_t  func_3(uint8_t  p_4, struct S0  p_5, uint32_t  p_6);
static int32_t  func_9(struct S1  p_10, uint32_t  p_11, struct S1  p_12, int64_t  p_13, uint32_t  p_14);
static int16_t  func_20(int16_t  p_21, int32_t  p_22, int16_t  p_23, uint8_t  p_24, struct S0  p_25);




static int32_t  func_1(void)
{ 
    int16_t l_7 = 0xF054L;
    int16_t l_155 = 0x9A1BL;
    int32_t l_156 = 9L;
    int16_t l_159 = 6L;
    int32_t l_160 = 7L;
    struct S1 l_177 = {65535UL};
    int16_t l_281[3];
    int i;
    for (i = 0; i < 3; i++)
        l_281[i] = 0xC695L;
lbl_234:
    if ((g_2[1][0] && func_3(l_7, g_8, (65527UL && g_8.f3))))
    { 
        int64_t l_154 = 0xE9D0E818DDB15D3CLL;
        int32_t l_157 = (-7L);
        uint8_t l_171[2];
        struct S1 l_179 = {0x7989L};
        int i;
        for (i = 0; i < 2; i++)
            l_171[i] = 0x94L;
        g_162++;
        if (g_134)
            goto lbl_180;
lbl_180:
        for (g_90.f0 = 0; (g_90.f0 <= 2); g_90.f0 += 1)
        { 
            int32_t l_172 = 0x538FED00L;
            int i;
            g_165 = g_90;
            g_161 = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((g_62[g_90.f0] &= g_8.f4) && (g_8.f2 = ((!(l_172 ^= l_171[0])) & ((g_62[1] = (g_8.f4 = (safe_lshift_func_uint8_t_u_u((((l_171[1] ^ (((safe_rshift_func_uint8_t_u_s(l_171[1], l_157)) > 0L) ^ 1UL)) >= g_133[0][1][1]) , g_8.f4), 3)))) < g_2[0][0])))) >= g_42[3]) >= l_159), 2)), 0xDB51L));
            l_177 = g_90;
            for (g_43 = 0; (g_43 >= 0); g_43 -= 1)
            { 
                struct S1 l_178 = {65526UL};
                l_177 = l_178;
                l_179 = l_179;
            }
        }
        for (l_155 = 1; (l_155 >= 0); l_155 -= 1)
        { 
            uint32_t l_188 = 1UL;
            g_165 = g_165;
            for (g_8.f3 = 0; (g_8.f3 <= 1); g_8.f3 += 1)
            { 
                uint8_t l_183 = 0UL;
                g_161 = (safe_sub_func_int32_t_s_s(l_183, (((((((l_155 | (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((0L < l_171[1]), l_160)), g_2[0][0]))) && l_188) <= l_183) & l_188) == l_188) >= 65535UL) , 0x548FEC59L)));
            }
            for (g_8.f0 = 0; (g_8.f0 <= 0); g_8.f0 += 1)
            { 
                int32_t l_196[3][2] = {{3L,3L},{(-9L),3L},{3L,(-9L)}};
                int8_t l_197 = 0L;
                int i, j;
                g_90 = g_90;
                l_196[1][0] = (+((safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_158[g_8.f0][(l_155 + 1)], l_188)), 18446744073709551610UL)) ^ (((safe_div_func_uint8_t_u_u(g_90.f0, g_62[1])) != g_158[g_8.f0][(l_155 + 1)]) >= g_62[0])));
                return l_197;
            }
        }
    }
    else
    { 
        int16_t l_200 = 0xDC22L;
        int32_t l_220 = 0x1E7E6F17L;
        for (g_162 = 0; (g_162 <= 1); g_162 += 1)
        { 
            uint32_t l_214 = 0xAE1DC5D4L;
            g_161 ^= (safe_mod_func_int16_t_s_s((l_200 && (4294967292UL | (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s((0x23AF51808E25E921LL < (safe_lshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(l_214, l_214)) , g_44), 4))))) ^ l_200), 1)), l_214)) ^ 1L) < l_214) , l_200) == l_214), g_133[0][1][1])), l_160)))), g_2[1][0]));
            if (g_8.f1)
                goto lbl_235;
            for (g_90.f0 = 0; (g_90.f0 <= 1); g_90.f0 += 1)
            { 
                int32_t l_215[4] = {1L,1L,1L,1L};
                int32_t l_217 = (-2L);
                int32_t l_218 = (-4L);
                int i;
                ++g_221;
            }
        }
    }
lbl_235:
    for (g_81 = (-10); (g_81 != 20); ++g_81)
    { 
        const struct S1 l_228 = {0xB0D8L};
        struct S1 l_229[4] = {{0x964DL},{0x964DL},{0x964DL},{0x964DL}};
        int i;
        for (g_90.f0 = 0; (g_90.f0 <= 14); g_90.f0++)
        { 
            l_229[2] = l_228;
        }
        for (l_177.f0 = (-15); (l_177.f0 <= 3); ++l_177.f0)
        { 
            for (g_30 = 0; (g_30 <= 58); g_30++)
            { 
                return g_221;
            }
            if (g_8.f3)
                goto lbl_234;
            g_165 = g_165;
        }
    }
    for (g_8.f0 = 0; (g_8.f0 <= 0); g_8.f0 += 1)
    { 
        uint32_t l_236[5][5] = {{1UL,0x3912959AL,0xB5F6E7C4L,0x3912959AL,1UL},{0UL,0x3912959AL,4UL,1UL,4UL},{4UL,4UL,0xB5F6E7C4L,1UL,0xAA047A85L},{0x3912959AL,0UL,0UL,0x3912959AL,4UL},{0x3912959AL,1UL,18446744073709551611UL,18446744073709551611UL,1UL}};
        union U2 l_241 = {0xF6D2L};
        int32_t l_255 = 0x5C125225L;
        int i, j;
        g_81 |= l_236[2][2];
        if ((l_159 && (((l_236[1][2] <= l_156) > (((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((l_241 , l_177.f0), 0xFCL)), 0xE447D40A0E336E5ALL)) > l_241.f0) , 5UL)) ^ l_241.f0)))
        { 
            uint32_t l_242 = 0x2F738AECL;
            if (l_242)
            { 
                if (l_159)
                    break;
            }
            else
            { 
                int32_t l_243[3][3] = {{0xBAF386B6L,0xBAF386B6L,0xBAF386B6L},{0x99627D35L,0x99627D35L,0x99627D35L},{0xBAF386B6L,0xBAF386B6L,0xBAF386B6L}};
                int i, j;
                g_81 = l_243[0][1];
            }
            if ((+g_150[1]))
            { 
                int8_t l_256 = 1L;
                g_161 = ((safe_lshift_func_uint16_t_u_u(l_236[2][4], 12)) != ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(l_155, 0x78D5E2C2B438F1E3LL)) || ((((l_236[2][2] >= g_165.f0) | (-1L)) > l_242) == (-1L))), g_161)) != g_150[1]));
                l_256 &= ((((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s(g_62[1], 1UL)), (((g_8.f3 && l_255) > g_62[1]) != g_62[1]))) , g_221) == g_30) | 0xFDL);
                return l_256;
            }
            else
            { 
                return g_62[2];
            }
        }
        else
        { 
            uint32_t l_273 = 0x4559418FL;
            for (g_30 = 0; (g_30 <= 0); g_30 += 1)
            { 
                struct S0 l_268 = {0x3D247329L,4UL,255UL,0xE661L,255UL};
                int32_t l_275 = 0xCD24F5E8L;
                int8_t l_276 = 0xACL;
                l_275 = (safe_mod_func_int16_t_s_s((((g_8.f0 , (((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((!(safe_mul_func_uint8_t_u_u((((l_268 , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_150[0], l_273)), g_162))) | g_162) || l_268.f1), g_44))), g_274)) == g_216) || 0x38L) | l_268.f1), 3)), l_268.f1)) <= g_90.f0) & g_133[1][2][0])) == l_241.f0) == l_273), g_134));
                g_81 ^= l_273;
                l_276 &= l_236[2][2];
            }
        }
        for (l_255 = 0; (l_255 >= 0); l_255 -= 1)
        { 
            g_161 = (safe_mod_func_int16_t_s_s(g_2[1][0], ((l_7 ^ (0x7A7EL > 0xEA36L)) | g_133[0][1][1])));
            if (g_43)
                continue;
            l_160 &= (safe_lshift_func_uint8_t_u_u((g_8.f2 = 0UL), (g_62[1]++)));
        }
    }
    return l_281[2];
}



static uint8_t  func_3(uint8_t  p_4, struct S0  p_5, uint32_t  p_6)
{ 
    struct S1 l_15 = {0x0AE2L};
    int32_t l_95 = 0xF9F9BE49L;
    int32_t l_96 = 0x96B6C30CL;
    int16_t l_101 = 0xA71BL;
    int32_t l_149 = 0xA59923F4L;
    if (func_9(l_15, (p_6 = (safe_lshift_func_int8_t_s_u((g_8.f4 ^ (safe_mul_func_int16_t_s_s(g_8.f3, func_20(((g_2[0][0] == l_15.f0) | 0UL), g_8.f0, l_15.f0, p_6, p_5)))), g_42[1]))), g_90, l_15.f0, l_15.f0))
    { 
        const int16_t l_92 = 0x2A23L;
        int32_t l_102 = (-5L);
        l_96 |= (((0x153E23B9C033C152LL >= p_5.f0) != (((l_92 , ((safe_add_func_uint16_t_u_u((l_95 = 0x6AE7L), 0L)) && p_4)) , l_95) ^ l_15.f0)) < 4294967293UL);
        l_102 = (safe_lshift_func_int16_t_s_u(((g_62[1] >= 0x92L) < (safe_sub_func_uint32_t_u_u(((l_96 <= (g_8.f4 ^ g_90.f0)) , 0UL), l_101))), g_62[0]));
    }
    else
    { 
        uint32_t l_116 = 18446744073709551613UL;
        int32_t l_120 = 0xDA113399L;
        union U2 l_121[4] = {{65535UL},{65535UL},{65535UL},{65535UL}};
        int32_t l_143 = (-4L);
        int32_t l_144 = (-3L);
        int32_t l_146 = (-1L);
        int32_t l_148 = 4L;
        int i;
        g_81 &= 0x6F118E40L;
        if ((l_95 = (safe_div_func_uint32_t_u_u(2UL, p_5.f0))))
        { 
            struct S1 l_105[2] = {{2UL},{2UL}};
            int i;
            if (g_44)
            { 
                struct S1 l_106 = {0x12A4L};
                int32_t l_109 = 1L;
                l_106 = l_105[0];
                l_109 = (safe_add_func_int32_t_s_s((((0xA329L >= p_4) ^ g_8.f1) && 0xC4E9L), 4294967295UL));
            }
            else
            { 
                return p_5.f2;
            }
            l_105[0] = l_15;
            for (p_5.f0 = 0; (p_5.f0 >= 32); ++p_5.f0)
            { 
                uint16_t l_122 = 1UL;
                int32_t l_129 = 0xC2C81858L;
                g_81 |= ((safe_rshift_func_uint8_t_u_s((0x04F9F078L > (safe_sub_func_int8_t_s_s((l_116 = (p_5.f1 || p_5.f1)), (((((g_2[0][0] && 0xE4D7L) & l_105[0].f0) <= p_5.f4) ^ 0x87L) <= (-3L))))), 4)) >= 0xBCAD3CECD0F842D8LL);
                l_120 = ((p_5 , (-9L)) < (!((g_44 &= p_6) || g_90.f0)));
                l_129 = (l_121[3] , ((((l_122 ^ (-3L)) | (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((0xA25EAEA3L > g_43), (-9L))), 2)), 0xFEL))) != 1UL) , g_62[1]));
            }
        }
        else
        { 
            int8_t l_130 = 4L;
            int32_t l_131 = 8L;
            int32_t l_132 = 4L;
            ++g_134;
        }
        if (((((p_5.f1 && (safe_div_func_int16_t_s_s(l_15.f0, (-7L)))) , (((((l_96 = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(p_4, 0)) ^ p_4), p_5.f2))) | g_90.f0) || 4294967295UL) && 1UL) > l_116)) , l_121[3].f0) , l_101))
        { 
            int8_t l_145 = (-1L);
            int32_t l_147 = 0x20CC15F2L;
            g_81 = g_8.f0;
            g_150[1]--;
        }
        else
        { 
            int16_t l_153 = 0x0DE0L;
            l_153 ^= g_44;
        }
    }
    return p_4;
}



static int32_t  func_9(struct S1  p_10, uint32_t  p_11, struct S1  p_12, int64_t  p_13, uint32_t  p_14)
{ 
    uint16_t l_91 = 0UL;
    p_12 = g_90;
    return l_91;
}



static int16_t  func_20(int16_t  p_21, int32_t  p_22, int16_t  p_23, uint8_t  p_24, struct S0  p_25)
{ 
    int16_t l_78 = 0x1225L;
    int32_t l_79[5] = {7L,7L,7L,7L,7L};
    int i;
    for (p_25.f0 = 0; (p_25.f0 != 34); ++p_25.f0)
    { 
        uint32_t l_41 = 0x5B3D925DL;
        ++g_30;
        for (p_21 = (-28); (p_21 == (-12)); ++p_21)
        { 
            struct S0 l_54[3][2] = {{{0xDAAFE497L,0UL,0x83L,0x0A34L,0xA4L},{0xDAAFE497L,0UL,0x83L,0x0A34L,0xA4L}},{{0xDAAFE497L,0UL,0x83L,0x0A34L,0xA4L},{0xDAAFE497L,0UL,0x83L,0x0A34L,0xA4L}},{{0xDAAFE497L,0UL,0x83L,0x0A34L,0xA4L},{0xDAAFE497L,0UL,0x83L,0x0A34L,0xA4L}}};
            const int32_t l_60 = 8L;
            uint8_t l_88 = 246UL;
            int32_t l_89 = 0x1CB4528EL;
            int i, j;
            if ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_41 | 0x095B676BL), 7)), (g_42[0] && p_22))), p_24)))
            { 
                ++g_44;
                return g_42[0];
            }
            else
            { 
                int16_t l_57 = 1L;
                int32_t l_61 = 0xFCA19AB6L;
                int32_t l_63 = 0xF7B6068BL;
                int16_t l_80 = 0x2083L;
                l_63 = (((((safe_unary_minus_func_int16_t_s((safe_mod_func_uint64_t_u_u(((g_62[1] ^= (safe_rshift_func_int8_t_s_u(((l_61 = ((safe_add_func_uint64_t_u_u((l_54[0][1] , ((l_57 = 8L) <= ((g_44 <= (safe_add_func_uint8_t_u_u(255UL, g_42[2]))) != 1L))), l_41)) | l_60)) <= 0xA5L), p_21))) , 18446744073709551610UL), p_22)))) , g_2[0][0]) != l_41) > 0xABDDL) == l_60);
                g_81 |= (((safe_add_func_uint16_t_u_u((p_25.f3 |= ((8UL && ((g_62[1] == (safe_rshift_func_uint16_t_u_s((((p_23 = (((l_80 &= (((((safe_add_func_uint8_t_u_u(g_8.f3, (safe_lshift_func_uint8_t_u_u((l_79[1] = (((((safe_div_func_int8_t_s_s((l_78 = ((((p_25.f2 &= (++g_8.f2)) | (safe_add_func_int16_t_s_s(((g_2[1][0] = g_42[0]) || 1L), l_60))) , p_25.f2) | g_62[0])), 0xD9L)) != l_79[1]) <= g_43) != 9UL) < l_79[1])), g_8.f1)))) || g_42[2]) != l_60) || p_24) != 0xF4B2487FL)) >= 1UL) , g_8.f0)) , p_22) ^ g_8.f4), p_25.f1))) , l_79[1])) || g_42[1])), g_8.f0)) != (-7L)) & (-1L));
            }
            l_89 |= (safe_rshift_func_int16_t_s_u((l_41 && ((((safe_add_func_int8_t_s_s((g_8.f2 ^ (l_79[2] == (safe_rshift_func_int16_t_s_u((((p_23 == g_2[0][0]) < 0x2F92BF7CL) | 0x69A4L), 7)))), p_21)) | p_25.f3) == l_88) < g_62[1])), 0));
        }
    }
    return p_25.f4;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_42[i], "g_42[i]", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_133[i][j][k], "g_133[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_134, "g_134", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_158[i][j], "g_158[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
