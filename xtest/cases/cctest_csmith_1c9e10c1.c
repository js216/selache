// SPDX-License-Identifier: MIT
// cctest_csmith_1c9e10c1.c --- cctest case csmith_1c9e10c1 (csmith seed 480121025)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1afa928d */
/* @exp_ticks 0x4245 */

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

// Options:   -s 480121025 -o /tmp/csmith_gen_b4zabgzs/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   const uint32_t  f1;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
};


static uint8_t g_2 = 0UL;
static uint8_t g_22 = 0xD3L;
static int8_t g_45 = 0x75L;
static int32_t g_47 = (-2L);
static int32_t g_48[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
static int16_t g_50 = 0x1274L;
static uint32_t g_75 = 4UL;
static int8_t g_76 = 0x52L;
static uint64_t g_98 = 0xB4B622C3304EDDC8LL;
static struct S0 g_103 = {0UL,18446744073709551615UL};
static int32_t g_114 = 0xE070DDB6L;
static int32_t g_115[5][4] = {{8L,8L,8L,8L},{8L,8L,8L,8L},{8L,8L,8L,8L},{8L,8L,8L,8L},{8L,8L,8L,8L}};
static int64_t g_116 = 0x46C7292A33AFFD86LL;
static uint8_t g_130 = 253UL;
static uint16_t g_133 = 0xC111L;
static int32_t g_251 = 0x0FCB306CL;
static int32_t g_257 = 6L;
static uint32_t g_280 = 0x2A225A8CL;
static uint8_t g_427 = 0UL;



static struct S0  func_1(void);
static uint32_t  func_3(int8_t  p_4, const uint16_t  p_5, uint32_t  p_6, int8_t  p_7, struct S0  p_8);
static int8_t  func_9(int32_t  p_10, const uint8_t  p_11);
static int8_t  func_13(int32_t  p_14, int32_t  p_15);




static struct S0  func_1(void)
{ 
    int32_t l_21 = 0x33356370L;
    struct S0 l_325 = {5UL,0xD1DC50AAL};
    int64_t l_439 = 0x72D38E3FF0556659LL;
    if (g_2)
    { 
        int16_t l_12 = 0xFB1CL;
        struct S0 l_18 = {6UL,18446744073709551615UL};
        int8_t l_384 = 0x98L;
        int16_t l_393 = 0x5AEEL;
        int32_t l_413 = 0xC9EA2264L;
        l_21 = (func_3(func_9(((l_12 &= 0x13L) <= func_13(g_2, (g_22 = (safe_rshift_func_uint16_t_u_s(((l_18 , (safe_sub_func_uint16_t_u_u(l_18.f1, (-7L)))) == l_21), 1))))), g_103.f0), l_18.f0, l_18.f1, l_21, l_325) | 0x85053092L);
        for (g_116 = 6; (g_116 <= 0); g_116--)
        { 
            uint32_t l_377[2];
            int16_t l_394 = 0x1DD6L;
            uint8_t l_395 = 255UL;
            int32_t l_396 = 0xE27E4D43L;
            struct S0 l_418 = {0x10L,1UL};
            int8_t l_424 = 4L;
            int32_t l_426 = (-1L);
            int i;
            for (i = 0; i < 2; i++)
                l_377[i] = 0xD7EF94F6L;
            if ((l_21 == g_2))
            { 
                uint8_t l_383 = 0xF7L;
                l_384 |= (safe_sub_func_uint16_t_u_u(65535UL, ((safe_lshift_func_uint8_t_u_u(l_377[0], (~((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((g_133 = ((g_114 & ((5UL > 0x07F9L) ^ 0xAC1CL)) && 0xB897L)), 8)), l_383)) < g_103.f1)))) , g_103.f0)));
                l_396 = ((((safe_lshift_func_uint8_t_u_u((l_377[0] , ((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((0x01584056L < (g_251 || ((safe_sub_func_int16_t_s_s(((g_114 != l_393) | l_394), 0x4F83L)) <= g_115[0][1]))), g_115[0][2])) | 0x2D127F73L) & g_251), l_325.f0)) != l_377[0])), 3)) & l_325.f1) == g_50) >= l_395);
                l_396 = ((g_257 < (safe_mul_func_int8_t_s_s((-8L), (safe_mul_func_uint8_t_u_u((l_383 & (g_130 >= 0x4950L)), l_393))))) & g_257);
            }
            else
            { 
                l_413 &= (safe_sub_func_int16_t_s_s(g_75, (safe_add_func_int32_t_s_s((g_114 = (g_257 = (l_21 = (safe_div_func_int8_t_s_s(g_116, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((-1L), 7)), ((safe_add_func_int32_t_s_s(l_394, l_21)) && l_394))) || l_394)))))), 1L))));
            }
            if ((((l_424 |= (safe_mod_func_int8_t_s_s(g_75, (safe_rshift_func_int16_t_s_s((l_418 , 0x8F59L), (!(safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s((+(g_2 && g_115[0][1])))), g_47)))))))) || 0xE828C609L) , 1L))
            { 
                int32_t l_425 = 0L;
                --g_427;
                l_426 &= g_48[1][1];
            }
            else
            { 
                uint64_t l_440[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_440[i] = 18446744073709551612UL;
                l_413 = ((((((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((0L && (!l_18.f1)), (safe_rshift_func_int16_t_s_s((l_21 >= 0x915AC8203335BD54LL), 15)))) > l_439), 1UL)) , l_440[1]) | 9UL), 0x7BL)) <= 0x81L) < (-10L)) || 0xA82AL) || g_133) | l_325.f1);
            }
            l_413 = (safe_mul_func_uint16_t_u_u(0UL, 0x4BE4L));
        }
        g_257 |= 8L;
    }
    else
    { 
        uint8_t l_463 = 0xB6L;
        int32_t l_464 = 0xB9520D26L;
        int32_t l_485 = 0x4E60344EL;
        int32_t l_488 = 0L;
        int32_t l_490[3];
        int i;
        for (i = 0; i < 3; i++)
            l_490[i] = 1L;
        for (g_114 = 0; (g_114 <= 3); g_114 += 1)
        { 
            struct S0 l_454[5] = {{0xFAL,18446744073709551606UL},{0xFAL,18446744073709551606UL},{0xFAL,18446744073709551606UL},{0xFAL,18446744073709551606UL},{0xFAL,18446744073709551606UL}};
            union U1 l_455 = {1L};
            uint8_t l_491[4] = {9UL,9UL,9UL,9UL};
            int i;
            g_47 |= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((-1L), 5)), (g_45 = (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((l_454[4] , 0x435C927A8550386DLL))) ^ l_325.f0), g_257)), l_454[4].f1))))), 11));
            g_47 |= ((((g_257 = ((l_455 , (safe_rshift_func_int8_t_s_s(g_115[0][1], 2))) >= g_427)) >= (safe_unary_minus_func_int64_t_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(0x096AL, g_114)) , l_463), (-7L)))))) > 0xD1A09568BD40B221LL) , l_325.f0);
            for (g_75 = 0; (g_75 <= 3); g_75 += 1)
            { 
                g_257 = 1L;
                if (g_47)
                    continue;
            }
            for (g_257 = 0; (g_257 <= 3); g_257 += 1)
            { 
                int64_t l_484 = 0xF515F2E32F6B114ELL;
                int16_t l_486 = (-1L);
                uint32_t l_487[4];
                int32_t l_489 = 9L;
                int i;
                for (i = 0; i < 4; i++)
                    l_487[i] = 0x6B34B1CFL;
                l_490[2] = (l_489 = (l_488 &= ((l_464 &= l_463) & (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_133 = (l_485 = ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((g_76 = (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((((!((safe_rshift_func_int16_t_s_u(l_484, 10)) || g_48[0][1])) == l_463) != l_21), l_325.f0)), 1UL))), 5)) < 0xA0D21EE898A727F9LL), g_48[0][0])), g_130)), g_257)) >= g_50) ^ 0x363FL) , 0x59FFL))), l_486)), l_487[1])))));
                l_491[1]--;
                if (l_463)
                    continue;
            }
        }
    }
    g_114 = ((0x40A48A95L == ((((safe_mul_func_int16_t_s_s((+((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_103.f0 = g_114), ((safe_lshift_func_uint8_t_u_u(g_48[0][0], g_22)) || l_21))), 6L)) ^ g_133)), 0UL)) , l_325.f1) >= g_22) != l_325.f0)) >= (-1L));
    return g_103;
}



static uint32_t  func_3(int8_t  p_4, const uint16_t  p_5, uint32_t  p_6, int8_t  p_7, struct S0  p_8)
{ 
    int8_t l_329[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_333 = 0x4DD2A000L;
    int32_t l_334 = 7L;
    int32_t l_369 = 0xA9512A3EL;
    int32_t l_370[3];
    int i;
    for (i = 0; i < 3; i++)
        l_370[i] = 0xCCFEC035L;
    for (g_2 = 0; (g_2 <= 3); g_2 += 1)
    { 
        uint8_t l_330 = 0x7EL;
        for (g_22 = 0; (g_22 <= 1); g_22 += 1)
        { 
            int32_t l_328 = 0xE9B7E83AL;
            int i, j;
            for (p_8.f0 = 0; (p_8.f0 <= 3); p_8.f0 += 1)
            { 
                int i, j;
                return g_115[g_22][g_2];
            }
            for (g_130 = 0; (g_130 <= 1); g_130 += 1)
            { 
                int i, j;
                return g_48[g_130][g_130];
            }
            l_328 = (safe_add_func_uint64_t_u_u(g_48[(g_22 + 1)][g_22], g_76));
        }
        for (g_103.f0 = 0; (g_103.f0 <= 3); g_103.f0 += 1)
        { 
            l_330++;
        }
    }
    for (g_257 = 4; (g_257 >= 0); g_257 -= 1)
    { 
        l_334 = (l_333 &= 0xC90968EFL);
    }
    for (g_280 = 10; (g_280 < 28); g_280 = safe_add_func_int32_t_s_s(g_280, 2))
    { 
        uint32_t l_366 = 0UL;
        const int32_t l_367 = 0L;
        int32_t l_368 = 0xACBA4C37L;
        l_370[2] = (~(l_369 = ((l_333 &= (safe_div_func_uint64_t_u_u(((3UL | ((l_334 &= (safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_368 = ((((safe_div_func_uint8_t_u_u((safe_div_func_int64_t_s_s(g_47, ((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((((l_366 = ((((0x419264914E0829E4LL > ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(l_329[2], 1L)) & 2L), 1L)), 0x1CCD87E3L)) < 0x6D460A8BL)) | g_115[0][1]) > (-1L)) <= 0x587BL)) , 4294967295UL) && 0UL) , 0x434AL), 65535UL)), (-1L))), l_367)) | g_98))), l_329[2])) , g_22) , p_8.f1) & g_130)), l_367)), 15)) & l_367), 4)), g_2)) <= g_257), g_50))) , g_103.f1)) > p_8.f0), 0x420ABC9676B62B17LL))) == p_5)));
        if (p_8.f0)
            continue;
    }
    return p_8.f0;
}



static int8_t  func_9(int32_t  p_10, const uint8_t  p_11)
{ 
    uint8_t l_164[4][1] = {{0xE8L},{0x22L},{0xE8L},{0x22L}};
    int32_t l_171 = 0x1DE43199L;
    int32_t l_186 = (-5L);
    int32_t l_214 = 0L;
    int32_t l_215[1];
    union U1 l_321 = {0x06780686C5DAC841LL};
    int64_t l_324 = 0xF439E3F63190A663LL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_215[i] = 0x7FD88394L;
lbl_252:
    l_164[0][0]++;
lbl_309:
    if ((safe_mul_func_uint8_t_u_u((g_103.f0 = (l_171 &= (++g_2))), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_164[1][0], 14)), (l_186 = (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(g_48[2][0], (safe_mul_func_int16_t_s_s(g_116, ((safe_mul_func_uint16_t_u_u((++g_133), (g_50 = g_45))) | l_164[0][0]))))), g_22))))))))
    { 
        int32_t l_192 = 0L;
        int32_t l_202 = (-2L);
        union U1 l_211[5][2][4] = {{{{0L},{0L},{1L},{0x8DFEB7701912ACE4LL}},{{0L},{0L},{0L},{1L}}},{{{0L},{1L},{1L},{0L}},{{0x982C83C74014540BLL},{1L},{0x8DFEB7701912ACE4LL},{1L}}},{{{1L},{0L},{0x8DFEB7701912ACE4LL},{0x8DFEB7701912ACE4LL}},{{0x982C83C74014540BLL},{0x982C83C74014540BLL},{1L},{0x8DFEB7701912ACE4LL}}},{{{0L},{0L},{0L},{1L}},{{0L},{1L},{1L},{0L}}},{{{0x982C83C74014540BLL},{1L},{0x8DFEB7701912ACE4LL},{1L}},{{1L},{0L},{0x8DFEB7701912ACE4LL},{0x8DFEB7701912ACE4LL}}}};
        int i, j, k;
        if ((((safe_add_func_uint16_t_u_u(((l_192 = (safe_sub_func_uint32_t_u_u((~0x05F1L), l_192))) && p_10), ((g_98 > g_130) == p_11))) <= p_11) >= g_45))
        { 
            uint32_t l_201 = 0x4CD6FD9EL;
            l_202 = (safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((246UL & (safe_add_func_uint8_t_u_u((l_201 || l_192), ((((g_103 , p_10) >= 1UL) | p_11) , 0x92L)))) || p_10), g_75)), g_114)), 0x298EL));
            g_114 = (safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((g_2 && (safe_rshift_func_uint8_t_u_u(0x8CL, l_171))) ^ g_115[0][1]), g_133)), p_11));
        }
        else
        { 
            for (g_50 = 0; (g_50 <= 25); g_50 = safe_add_func_int32_t_s_s(g_50, 1))
            { 
                if (l_164[0][0])
                    break;
                if (p_11)
                    continue;
            }
        }
        l_186 = (l_211[0][1][3] , l_202);
        g_47 = ((p_11 , (((((((safe_sub_func_int64_t_s_s((((p_11 != l_202) | 255UL) > 0x1B8C437238D2D0EFLL), l_202)) ^ g_50) != g_130) <= 0x59L) && g_22) | (-1L)) | 0x97688CC61388AF46LL)) > p_10);
    }
    else
    { 
        uint32_t l_216 = 0x2D1DE3E9L;
        int32_t l_221 = 3L;
        int32_t l_277[1][3][5] = {{{(-6L),4L,4L,(-6L),0L},{(-6L),(-1L),8L,8L,(-1L)},{0L,4L,8L,1L,1L}}};
        int i, j, k;
lbl_308:
        l_216++;
        for (g_2 = (-10); (g_2 != 10); ++g_2)
        { 
            l_221 = g_130;
        }
        if ((safe_sub_func_int64_t_s_s(p_10, (safe_sub_func_int16_t_s_s(((g_133 = 65533UL) <= ((l_164[0][0] >= (2L > (-1L))) , l_215[0])), g_103.f1)))))
        { 
            uint32_t l_230 = 6UL;
            struct S0 l_231 = {0x73L,1UL};
            int32_t l_232 = 2L;
            l_215[0] &= (safe_lshift_func_uint16_t_u_s((l_232 ^= ((safe_mod_func_uint8_t_u_u(((l_230 = (0xFB097C18L > l_221)) >= ((l_221 , l_231) , g_2)), 0x2EL)) != 0x2D120FEEL)), g_133));
            if (l_221)
                goto lbl_309;
        }
        else
        { 
            int32_t l_250 = (-4L);
            int32_t l_259 = 1L;
            const int32_t l_276 = 0x82952BEEL;
            int16_t l_278 = 4L;
            int32_t l_301 = (-1L);
            if (l_216)
            { 
                uint16_t l_249 = 0xA4D6L;
                g_47 = (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(0xF7L, ((safe_mul_func_uint16_t_u_u((((1L == ((((g_251 |= ((g_116 ^ (safe_mul_func_uint8_t_u_u((((((((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((g_133 < 0x91L), 3)) | g_76), p_11)) & p_11) && g_103.f0) & l_249) | g_75) | 0x06L) || l_250), 0x13L))) | l_250)) & l_250) > l_221) , 7UL)) & g_22) > l_249), 0xAC3DL)) | p_11))), 1UL)), p_11)) >= g_103.f1), p_11));
            }
            else
            { 
                int32_t l_258 = (-1L);
                int32_t l_260[1][2];
                uint8_t l_261 = 0x60L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_260[i][j] = 0x92DE4622L;
                }
                if (g_76)
                    goto lbl_252;
                l_259 = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_11, (0UL || (((l_260[0][1] = ((((--l_261) != p_10) ^ l_250) && g_133)) < 0x7AAE73F2C4129FC6LL) >= (-1L))))), 1));
            }
            if ((safe_sub_func_int32_t_s_s((l_277[0][0][4] &= ((((safe_lshift_func_uint8_t_u_s((g_2 = (safe_sub_func_uint16_t_u_u(l_216, (safe_unary_minus_func_uint32_t_u((((!255UL) & (g_257 == (safe_add_func_int8_t_s_s((((l_221 = (safe_sub_func_int16_t_s_s(l_276, l_215[0]))) | g_48[0][1]) , l_164[0][0]), g_257)))) >= 0xECC3050EL)))))), 0)) , p_11) | g_115[0][0]) < 1UL)), p_11)))
            { 
                int16_t l_279 = 1L;
                --g_280;
                g_257 = ((safe_add_func_uint32_t_u_u((4294967286UL & (g_280 |= 9UL)), p_10)) == (safe_unary_minus_func_int16_t_s(l_277[0][1][0])));
                g_257 = g_257;
            }
            else
            { 
                const uint32_t l_298 = 0x0C0EEEFFL;
                int32_t l_304[4] = {0L,0L,0L,0L};
                int32_t l_307 = 0x7B0BA2C0L;
                int i;
                l_277[0][1][3] = ((safe_sub_func_uint32_t_u_u(0x80BE7D7AL, ((((safe_add_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((g_76 |= (l_259 = (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((0xD8L <= (0x94BE0A22320633EALL == p_11)), p_10)) || l_278), p_10)))))), 0x6CL)) ^ g_75) < g_257), g_50)) , l_277[0][2][3]) & p_10) && p_10))) <= (-1L));
                l_301 |= ((((l_259 = ((g_76 & (~p_11)) & (l_298 , (safe_rshift_func_int16_t_s_u(l_276, g_114))))) <= 0UL) ^ l_215[0]) <= l_298);
                l_214 |= (((p_11 < (safe_rshift_func_int16_t_s_u((((l_304[3] = 0x2406L) || ((p_11 <= (safe_mul_func_int8_t_s_s((-8L), 0xEEL))) , p_11)) == g_2), 12))) >= 2L) , l_307);
            }
            if (g_116)
                goto lbl_308;
        }
    }
    l_324 &= ((g_116 = ((((safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((((l_186 = (!((l_171 &= (safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((l_321 , (safe_add_func_int8_t_s_s((g_76 = (-7L)), g_114))), (g_103 , p_10))), g_45))) | 1UL))) | g_22) != p_10) && p_10) | (-3L)), l_215[0])), 1UL)), l_321.f0)) == 0L) || 0x90L) , p_11)) ^ g_114);
    return l_324;
}



static int8_t  func_13(int32_t  p_14, int32_t  p_15)
{ 
    const int32_t l_23 = 0x8D72A67FL;
    uint64_t l_24[2];
    const uint64_t l_25 = 4UL;
    int32_t l_30 = (-1L);
    int32_t l_129 = 0x3B8C42DAL;
    int i;
    for (i = 0; i < 2; i++)
        l_24[i] = 0xBE92E3F9150FAEB3LL;
lbl_58:
    l_24[1] = l_23;
    if (((((l_25 < (safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((((0xBE2D3D47L <= (l_24[1] != ((l_30 = g_2) , g_22))) , g_22) || 2L), l_23)), 6))) >= 7L) == g_2) && p_14))
    { 
        uint64_t l_46 = 0xA10B913A861D8D48LL;
        uint32_t l_49 = 18446744073709551608UL;
        int32_t l_57 = 0x3B115E53L;
        if (((g_2 , ((g_50 ^= ((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0L, (l_49 = (g_48[0][0] = ((safe_add_func_int8_t_s_s((l_30 = (g_47 |= (((g_22 < (((g_45 = (((safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(g_22, p_14)) == 1UL), g_2)) != g_2) != 0UL), p_14)) & 0UL) > g_2)) && p_15) ^ l_46)) ^ 65535UL) <= 0x3D345464CD027BAELL))), 5UL)) , l_46))))), l_24[1])), p_15)) != 18446744073709551611UL)) == p_14)) > g_2))
        { 
            l_57 &= (safe_lshift_func_uint16_t_u_s((~g_48[0][0]), (((safe_div_func_int32_t_s_s((((9UL & (~l_24[1])) ^ p_14) <= l_24[0]), g_48[0][0])) || p_15) > g_22)));
            if (g_22)
                goto lbl_58;
        }
        else
        { 
            const int32_t l_74 = (-4L);
            int32_t l_86 = 0xD83ED352L;
            g_47 = ((safe_div_func_uint8_t_u_u((!(g_75 ^= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((-4L), 8)), 3)) > (((((safe_mul_func_int16_t_s_s(p_15, 0x5DB2L)) >= ((l_57 = ((safe_sub_func_uint8_t_u_u(g_22, g_45)) || p_14)) , l_74)) , g_50) == g_22) , g_50)), l_74)), 5)))), g_76)) && 0xFBB2L);
            for (l_49 = 13; (l_49 >= 37); l_49 = safe_add_func_int16_t_s_s(l_49, 5))
            { 
                int8_t l_79 = 0x01L;
                l_86 ^= ((l_57 ^= (g_50 = l_79)) & (g_76 | (safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(l_74, (safe_lshift_func_uint8_t_u_s(p_15, g_45)))) & g_76), p_15))));
            }
        }
        l_57 = (((l_46 < g_48[0][1]) ^ ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((0x2FF03E53L & (safe_mod_func_uint8_t_u_u((((l_24[1] == l_57) <= p_14) > g_50), g_45))) ^ l_46) == g_48[0][0]), 1)), 15)) , p_15)) & g_76);
    }
    else
    { 
        int8_t l_105 = 0xC2L;
        int64_t l_113[3][5] = {{0x822D717118E0D0DALL,0x822D717118E0D0DALL,1L,0x822D717118E0D0DALL,0x822D717118E0D0DALL},{0x31603581D61F6B50LL,0xB358AE84C8BE40C2LL,0x31603581D61F6B50LL,0x31603581D61F6B50LL,0xB358AE84C8BE40C2LL},{0x822D717118E0D0DALL,(-1L),(-1L),0x822D717118E0D0DALL,(-1L)}};
        int32_t l_121 = 0xF9BC801AL;
        uint32_t l_147 = 18446744073709551615UL;
        const int64_t l_163 = 5L;
        int i, j;
        if (g_47)
        { 
            int32_t l_93 = (-1L);
            int32_t l_124 = 0x18C78518L;
            l_93 &= g_2;
            for (g_45 = 0; (g_45 < 12); ++g_45)
            { 
                int32_t l_104[1];
                struct S0 l_110[3] = {{0x14L,0x35B4FB63L},{0x14L,0x35B4FB63L},{0x14L,0x35B4FB63L}};
                int i;
                for (i = 0; i < 1; i++)
                    l_104[i] = 0xBAA84438L;
                l_104[0] = (g_47 &= ((p_15 != g_98) != (((((safe_sub_func_int32_t_s_s((((((safe_rshift_func_int8_t_s_u(p_15, ((g_103 , (-1L)) == 0UL))) >= p_14) || 0x586BL) != p_14) , l_104[0]), 0xCFB0C79AL)) <= g_48[0][0]) || 0x353CL) , g_48[2][0]) > p_15)));
                g_47 = ((l_105 , (safe_mod_func_uint16_t_u_u(g_50, (g_116 = ((g_115[0][1] = (safe_lshift_func_int8_t_s_u((l_110[0] , ((g_114 = ((safe_add_func_int8_t_s_s(p_15, g_48[0][0])) || l_113[2][3])) >= (-1L))), l_110[0].f0))) ^ p_15))))) , g_76);
                g_47 ^= p_15;
            }
            if ((safe_lshift_func_int8_t_s_s(((l_93 , (((g_22 = (l_24[1] , 0xCAL)) == g_103.f1) && 0x6946F2ECL)) , (-1L)), 1)))
            { 
                l_121 = (safe_rshift_func_uint16_t_u_s(65535UL, 12));
            }
            else
            { 
                p_15 = (((l_124 = g_116) != (safe_rshift_func_int16_t_s_s(g_45, 2))) && (((g_45 < (p_15 , l_24[1])) , l_93) < l_121));
                if (p_15)
                    goto lbl_136;
            }
        }
        else
        { 
            p_15 = (safe_add_func_uint32_t_u_u((g_45 && (p_14 > l_121)), (g_130--)));
lbl_136:
            --g_133;
            for (p_14 = (-5); (p_14 < 4); p_14++)
            { 
                int8_t l_148[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_148[i] = 0xD6L;
                g_47 = (safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((l_30 && ((l_147 , p_15) | g_114)), l_148[2])), g_48[0][0])), p_14)), g_116));
                p_15 |= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(g_103.f1, (safe_sub_func_int16_t_s_s(((!(safe_div_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(((+l_147) <= ((l_148[2] >= (safe_lshift_func_uint16_t_u_s(0x1D5BL, 2))) | 0x894340C1L)), l_163)) > l_148[2]), 9UL))) == 0x0BCF91A75F86E748LL), g_130)))), l_163));
                g_47 = p_14;
            }
        }
    }
    return g_115[0][1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_48[i][j], "g_48[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_115[i][j], "g_115[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
