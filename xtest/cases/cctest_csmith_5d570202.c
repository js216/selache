// SPDX-License-Identifier: MIT
// cctest_csmith_5d570202.c --- cctest case csmith_5d570202 (csmith seed 1565983234)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6b112c10 */
/* @exp_ticks 0x3c85 */

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

// Options:   -s 1565983234 -o /tmp/csmith_gen_apctvs7c/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   int16_t  f1;
   int64_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

struct S1 {
   const uint32_t  f0;
   const uint16_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   const uint32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint64_t  f0;
   struct S1  f1;
   uint32_t  f2;
   const int8_t  f3;
   const uint64_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

union U3 {
   struct S1  f0;
   uint16_t  f1;
};

union U4 {
   int16_t  f0;
};


static int32_t g_20[5] = {0x1540EE1DL,0x1540EE1DL,0x1540EE1DL,0x1540EE1DL,0x1540EE1DL};
static int8_t g_23 = 0xF7L;
static uint16_t g_39 = 65527UL;
static union U4 g_50 = {0xA276L};
static struct S0 g_56 = {-1L,0xAC8BL,1L,-6L};
static struct S2 g_80 = {18446744073709551615UL,{0x0D5298B4L,0xA5ABL,0xD0B78A11L,65530UL,4294967295UL},0UL,0xBCL,0x617CC220CDAAD4FDLL,0x33FCDF6E60FB7EBELL};
static struct S0 g_129 = {1L,0xF538L,0xC87C9332BA1A25AELL,-1L};
static union U4 g_144[4][3] = {{{8L},{0xD311L},{0xD311L}},{{0L},{1L},{1L}},{{8L},{0xD311L},{0xD311L}},{{0L},{1L},{1L}}};
static union U4 g_145 = {0x441DL};
static uint32_t g_150[5] = {4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL};
static union U3 g_157 = {{0xF64A250BL,1UL,0xB1AF0680L,65528UL,0xCE9E46C9L}};



static const uint16_t  func_1(void);
static uint32_t  func_6(int8_t  p_7, union U4  p_8, const struct S1  p_9, uint8_t  p_10, uint8_t  p_11);
static int8_t  func_12(uint32_t  p_13, uint32_t  p_14, struct S0  p_15, uint8_t  p_16);
static int8_t  func_17(struct S1  p_18);




static const uint16_t  func_1(void)
{ 
    int8_t l_2[4] = {4L,4L,4L,4L};
    union U4 l_35 = {0L};
    int32_t l_103[4][3] = {{1L,0x073B47ACL,(-1L)},{1L,1L,0x073B47ACL},{0xBCE84173L,0x073B47ACL,0x073B47ACL},{0x073B47ACL,(-2L),(-1L)}};
    struct S0 l_130 = {6L,3L,-8L,0x7FE9BFACL};
    int32_t l_148[1][3][1];
    int32_t l_149 = (-6L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_148[i][j][k] = 0x1320EAB8L;
        }
    }
    if (l_2[2])
    { 
        int8_t l_5 = 0x9BL;
        struct S1 l_19 = {4294967295UL,0UL,0x2DA3C3D2L,0x462CL,0xD2044653L};
        struct S0 l_24 = {0x90EFL,-1L,0L,1L};
        uint16_t l_104 = 0x0ACFL;
        const struct S2 l_107 = {0x218ACB78397DF8BELL,{0x35D5B940L,0x1E8EL,9UL,0xBE18L,0xDEA65F88L},0xA86218FEL,-3L,0x7CABE74A42B1B449LL,0x2533209CDE0C07D6LL};
        if (((safe_sub_func_uint32_t_u_u(l_5, func_6(func_12(((func_17(l_19) > (safe_add_func_uint16_t_u_u((((g_23 = l_2[3]) && l_19.f1) , 65535UL), l_2[3]))) ^ g_20[4]), l_19.f1, l_24, l_5), l_35, l_19, g_20[1], l_35.f0))) < g_50.f0))
        { 
            int32_t l_90[5];
            int32_t l_102 = 0L;
            int i;
            for (i = 0; i < 5; i++)
                l_90[i] = 0x6BC1F71CL;
            if ((safe_mul_func_int16_t_s_s(((g_80 , g_80.f1.f3) & (!((safe_mul_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_50 , l_2[2]), 0x6BL)), 65532UL)), 0x1AL)) != l_90[1]) ^ g_56.f3), g_56.f1)) , g_20[1]))), l_90[3])))
            { 
                g_56.f3 = (safe_mul_func_int8_t_s_s(g_80.f1.f3, (l_24.f3 |= (safe_add_func_int16_t_s_s(0L, (g_80.f4 != (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_23 |= ((g_20[1] = (+((safe_div_func_uint8_t_u_u(((g_50.f0 == (-1L)) <= l_35.f0), l_90[1])) <= 1L))) | 0x299A07EFL)), l_19.f3)), 0x2EA2L))))))));
                g_56.f3 = g_80.f1.f0;
                l_104++;
            }
            else
            { 
                int32_t l_108[4][3][2] = {{{0xF318A4EBL,(-1L)},{0xF318A4EBL,(-1L)},{1L,0xF318A4EBL}},{{(-1L),(-1L)},{1L,1L},{8L,1L}},{{1L,0xEA743E71L},{(-1L),1L},{8L,(-1L)}},{{1L,0xEA743E71L},{1L,(-1L)},{8L,1L}}};
                int i, j, k;
                l_108[1][1][0] ^= (l_107 , 3L);
                g_20[1] |= (l_102 = 4L);
            }
            g_20[1] ^= (g_56.f3 = (safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0L, l_90[1])), 0xF6L)));
            for (l_24.f1 = (-28); (l_24.f1 <= 4); l_24.f1 = safe_add_func_uint16_t_u_u(l_24.f1, 9))
            { 
                if (l_103[3][2])
                    break;
            }
        }
        else
        { 
            return l_2[2];
        }
    }
    else
    { 
        int8_t l_126 = 0L;
        int32_t l_137 = 0L;
        union U4 l_143 = {0x4435L};
        int32_t l_147 = 0xE65B2953L;
        g_56.f3 = (g_56.f2 <= ((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((g_80.f1.f2--), g_56.f1)), ((safe_rshift_func_int8_t_s_s(0x37L, ((~((safe_add_func_int64_t_s_s((g_56.f1 & l_103[2][1]), (-1L))) & (-7L))) > l_126))) | 0x352AL))) != l_126));
        for (g_50.f0 = 0; (g_50.f0 <= 4); g_50.f0 += 1)
        { 
            struct S0 l_128 = {0x1B44L,9L,-1L,-4L};
            int i;
            for (g_56.f1 = 0; (g_56.f1 <= 4); g_56.f1 += 1)
            { 
                struct S0 l_127 = {-5L,4L,-7L,1L};
                l_128 = l_127;
                g_129 = g_56;
            }
            for (g_80.f1.f3 = 0; (g_80.f1.f3 <= 2); g_80.f1.f3 += 1)
            { 
                struct S0 l_131[3][4] = {{{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL}},{{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL}},{{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL},{0x3716L,0x5DA5L,0x3D3CFB5F1DAF28E7LL,0xFC3D5CCCL}}};
                int i, j;
                l_131[1][1] = l_130;
                if (l_103[(g_80.f1.f3 + 1)][g_80.f1.f3])
                    continue;
            }
            if (g_20[g_50.f0])
            { 
                int i;
                g_20[g_50.f0] = (((~((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint64_t_u_u((l_137 |= (g_129 , l_130.f3)), 1L)) && (-3L)), 9)) , l_130.f3) && l_128.f1) <= g_129.f1)) , l_126) && 0UL);
                if (l_2[2])
                    continue;
            }
            else
            { 
                if (l_103[1][0])
                    break;
            }
            for (l_130.f0 = 0; (l_130.f0 <= 2); l_130.f0 += 1)
            { 
                uint8_t l_146 = 255UL;
                int i, j;
                l_103[(l_130.f0 + 1)][l_130.f0] |= ((g_129.f3 > (l_148[0][1][0] = (l_128.f3 = (7L | (((g_80.f2 ^ ((!((((g_145 = (g_144[1][0] = l_143)) , g_80.f2) , l_137) < g_80.f2)) >= l_146)) && g_20[4]) != l_147))))) || 1L);
                if (g_23)
                    continue;
                g_150[4]--;
            }
        }
        l_148[0][1][0] = ((safe_mul_func_uint16_t_u_u(g_23, (((l_137 |= (safe_sub_func_int16_t_s_s(((l_147 &= (g_157 , l_126)) >= ((l_130 = g_129) , 0x13L)), 0L))) == g_80.f2) != g_20[1]))) && (-1L));
    }
    return g_20[1];
}



static uint32_t  func_6(int8_t  p_7, union U4  p_8, const struct S1  p_9, uint8_t  p_10, uint8_t  p_11)
{ 
    int32_t l_43 = 0x073E42CDL;
    int32_t l_51 = 0x8584DF83L;
    int32_t l_53 = (-5L);
    int16_t l_75 = 0xC85BL;
    for (p_7 = 0; (p_7 >= 2); ++p_7)
    { 
        uint64_t l_38 = 0UL;
        int32_t l_52 = 1L;
        union U4 l_73[1][3] = {{{0x7579L},{0x7579L},{0x7579L}}};
        uint16_t l_74 = 0UL;
        int i, j;
        for (g_23 = 0; (g_23 <= 4); g_23 += 1)
        { 
            int16_t l_40[2][2][4] = {{{0x3098L,0x350DL,0x3098L,0x350DL},{0x3098L,0x350DL,0x3098L,0x350DL}},{{0x3098L,0x350DL,0x3098L,0x350DL},{0x3098L,0x350DL,0x3098L,0x350DL}}};
            struct S2 l_41[4] = {{18446744073709551608UL,{6UL,1UL,0x58D0DD08L,65533UL,0UL},1UL,0xB0L,0x1D9D30CD947E9E58LL,1UL},{18446744073709551608UL,{6UL,1UL,0x58D0DD08L,65533UL,0UL},1UL,0xB0L,0x1D9D30CD947E9E58LL,1UL},{18446744073709551608UL,{6UL,1UL,0x58D0DD08L,65533UL,0UL},1UL,0xB0L,0x1D9D30CD947E9E58LL,1UL},{18446744073709551608UL,{6UL,1UL,0x58D0DD08L,65533UL,0UL},1UL,0xB0L,0x1D9D30CD947E9E58LL,1UL}};
            uint16_t l_59 = 65531UL;
            int32_t l_70 = (-10L);
            int i, j, k;
            g_20[g_23] &= (p_9 , ((g_39 = l_38) <= (p_9.f1 & l_40[0][0][1])));
            if (((l_40[0][0][1] >= (l_41[1] , (+p_9.f3))) > ((p_10 != l_38) | l_43)))
            { 
                return l_43;
            }
            else
            { 
                int i;
                g_20[g_23] = (((p_9.f2 && ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((((g_50 , l_43) < (++g_39)) , g_56) , p_11), p_9.f2)) && g_20[3]), l_38)), 0)) ^ g_20[1])) || p_11) , p_10);
            }
            l_70 ^= (safe_rshift_func_int16_t_s_u(((l_59 , ((safe_mod_func_uint8_t_u_u(((g_20[g_23] = p_9.f3) != g_56.f2), (safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_41[1].f5, p_11)) && 8L), 12)), p_9.f0)) , l_59), g_39)))) > g_56.f2)) ^ g_56.f0), g_56.f3));
        }
        l_74 = ((safe_div_func_int32_t_s_s((((l_73[0][0] = l_73[0][0]) , g_56.f0) || l_51), (p_9.f4 , g_56.f1))) <= l_51);
        g_20[1] = (g_56.f3 >= l_43);
    }
    l_75 = ((l_53 >= l_43) | l_43);
    return p_9.f4;
}



static int8_t  func_12(uint32_t  p_13, uint32_t  p_14, struct S0  p_15, uint8_t  p_16)
{ 
    uint32_t l_25[3][4][5] = {{{0UL,0x84CBF776L,4294967290UL,0xE1289ED5L,0x2CB566E6L},{0x9E8BFA08L,0x84CBF776L,0xE1289ED5L,9UL,4294967295UL},{4UL,0UL,0UL,4UL,9UL},{0x9E8BFA08L,0x7E7C0CE6L,0x2CB566E6L,4294967295UL,9UL}},{{0UL,0x9E8BFA08L,4294967295UL,4294967290UL,4294967295UL},{4294967290UL,4294967290UL,9UL,4294967295UL,0x2CB566E6L},{8UL,0x52AD14CAL,9UL,4UL,0UL},{0xE1289ED5L,9UL,4294967295UL,9UL,0xE1289ED5L}},{{4294967295UL,0x52AD14CAL,0x2CB566E6L,0xE1289ED5L,4294967290UL},{4294967295UL,4294967290UL,0UL,0x7E7C0CE6L,0x7E7C0CE6L},{0xE1289ED5L,0x9E8BFA08L,0xE1289ED5L,0x52AD14CAL,4294967290UL},{8UL,0x7E7C0CE6L,4294967290UL,0x52AD14CAL,0xE1289ED5L}}};
    int32_t l_28 = (-4L);
    int32_t l_31 = 0x512ED403L;
    uint8_t l_32 = 0UL;
    int i, j, k;
    for (p_15.f0 = 0; (p_15.f0 <= 4); p_15.f0 += 1)
    { 
        int32_t l_29 = 0L;
        int32_t l_30[4] = {0xD5DF5B04L,0xD5DF5B04L,0xD5DF5B04L,0xD5DF5B04L};
        int i;
        for (p_14 = 1; (p_14 <= 4); p_14 += 1)
        { 
            int i;
            l_25[0][1][4]++;
        }
        ++l_32;
    }
    return p_15.f1;
}



static int8_t  func_17(struct S1  p_18)
{ 
    return g_20[1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);

    }
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1.f0, "g_80.f1.f0", print_hash_value);
    transparent_crc(g_80.f1.f1, "g_80.f1.f1", print_hash_value);
    transparent_crc(g_80.f1.f2, "g_80.f1.f2", print_hash_value);
    transparent_crc(g_80.f1.f3, "g_80.f1.f3", print_hash_value);
    transparent_crc(g_80.f1.f4, "g_80.f1.f4", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    transparent_crc(g_80.f4, "g_80.f4", print_hash_value);
    transparent_crc(g_80.f5, "g_80.f5", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_129.f3, "g_129.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_144[i][j].f0, "g_144[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);

    }
    transparent_crc(g_157.f0.f0, "g_157.f0.f0", print_hash_value);
    transparent_crc(g_157.f0.f1, "g_157.f0.f1", print_hash_value);
    transparent_crc(g_157.f0.f2, "g_157.f0.f2", print_hash_value);
    transparent_crc(g_157.f0.f3, "g_157.f0.f3", print_hash_value);
    transparent_crc(g_157.f0.f4, "g_157.f0.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
