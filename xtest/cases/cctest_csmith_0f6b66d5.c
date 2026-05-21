// SPDX-License-Identifier: MIT
// cctest_csmith_0f6b66d5.c --- cctest case csmith_0f6b66d5 (csmith seed 258696917)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd1b91595 */

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

// Options:   -s 258696917 -o /tmp/csmith_gen_tbi6_jm7/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   int64_t  f1;
   int32_t  f2;
   uint64_t  f3;
};


static int64_t g_31 = 0L;
static struct S0 g_32[1] = {{18446744073709551615UL,-7L,0xE81DE9829CBC21B0LL,0L}};
static int64_t g_33 = 0x2589D38951FE511BLL;
static uint32_t g_38[3] = {0x1C25C539L,0x1C25C539L,0x1C25C539L};
static int32_t g_69 = 0xE583C6DDL;
static int32_t g_70 = 1L;
static int64_t g_73 = (-1L);
static int64_t g_74 = 0x4CF7123672E3E38FLL;
static int32_t g_77 = 3L;
static int64_t g_78 = 1L;
static uint32_t g_79 = 0x1D1A269FL;
static uint16_t g_115[3] = {0x3445L,0x3445L,0x3445L};
static int8_t g_119 = 0xEDL;
static uint8_t g_121 = 254UL;
static int32_t g_141 = 0x2B1E0E4FL;
static uint32_t g_219 = 0x6B1452D1L;
static uint16_t g_226 = 65535UL;
static union U1 g_262 = {-1L};
static uint64_t g_271 = 0UL;
static int32_t g_284[1] = {0x384D55E0L};
static int16_t g_305[3][3] = {{0L,0x5B5DL,0x5B5DL},{0L,0x5B5DL,0x5B5DL},{0L,0x5B5DL,0x5B5DL}};
static const int32_t g_319 = 1L;



static uint64_t  func_1(void);
static union U1  func_6(int64_t  p_7);
static uint32_t  func_10(int64_t  p_11, uint32_t  p_12, uint32_t  p_13, int16_t  p_14);
static uint16_t  func_19(uint16_t  p_20, uint64_t  p_21, struct S0  p_22, int64_t  p_23);




static uint64_t  func_1(void)
{ 
    int32_t l_26 = (-1L);
    uint8_t l_34[2];
    int32_t l_387 = 0x5801A4F6L;
    int32_t l_398 = 0x20D192F7L;
    uint64_t l_399 = 0x9D2DDE317A01B2F9LL;
    int i;
    for (i = 0; i < 2; i++)
        l_34[i] = 0x32L;
    if ((safe_sub_func_int32_t_s_s((((g_115[2] = (safe_mod_func_int64_t_s_s((func_6(((safe_mul_func_int8_t_s_s((func_10((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(func_19(((safe_div_func_uint16_t_u_u((l_26 != (safe_mul_func_int8_t_s_s(0x44L, (((0xCC099A56L != (safe_rshift_func_int8_t_s_u(l_26, 2))) || l_26) , 0x3BL)))), 1L)) | g_31), g_31, g_32[0], g_33), l_26)), g_32[0].f0)), l_34[1], l_34[1], l_34[1]) , l_26), g_69)) && g_115[1])) , l_34[0]), g_32[0].f1))) != g_31) & 18446744073709551615UL), 0x0239D9E9L)))
    { 
        int16_t l_385[5][1][5] = {{{0x7F52L,0xA123L,(-1L),0L,0L}},{{0xA123L,0x7F52L,0xA123L,(-1L),0L}},{{0L,(-7L),0L,(-7L),0L}},{{0xA123L,(-7L),0x7F52L,0L,0x7F52L}},{{0x7F52L,0x7F52L,0L,0L,0x84FAL}}};
        int32_t l_386 = 0x68F0A984L;
        int i, j, k;
        l_398 ^= ((l_386 ^= (safe_lshift_func_uint16_t_u_s(l_385[2][0][0], 6))) | ((l_387 &= l_26) < (safe_rshift_func_int16_t_s_u((((g_262.f0 <= (safe_div_func_uint16_t_u_u((g_226 = (g_115[0]--)), (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_34[1], g_32[0].f3)), 4)) , g_262.f0) , 0xD5FDL)))) , l_385[2][0][0]) && l_385[4][0][4]), 9))));
        return l_399;
    }
    else
    { 
        return g_115[0];
    }
}



static union U1  func_6(int64_t  p_7)
{ 
    struct S0 l_237[3] = {{0UL,0x08B6909FL,0x56803DAA861DA3FALL,1L},{0UL,0x08B6909FL,0x56803DAA861DA3FALL,1L},{0UL,0x08B6909FL,0x56803DAA861DA3FALL,1L}};
    int16_t l_240 = (-8L);
    int32_t l_241 = 0L;
    int32_t l_242 = 0xFD7926D9L;
    uint32_t l_272 = 0UL;
    int32_t l_296 = 1L;
    int32_t l_297 = 6L;
    int32_t l_302[4][5][1] = {{{0x52A07147L},{0xBBAC08D4L},{(-1L)},{0L},{(-1L)}},{{0xBBAC08D4L},{0xB1DBA8B5L},{0xB1DBA8B5L},{0xBBAC08D4L},{(-1L)}},{{0L},{(-1L)},{0xBBAC08D4L},{0xB1DBA8B5L},{0xB1DBA8B5L}},{{0xBBAC08D4L},{(-1L)},{0L},{(-1L)},{0xBBAC08D4L}}};
    const uint32_t l_338 = 1UL;
    const uint8_t l_353 = 0x9CL;
    union U1 l_382 = {0xF051L};
    int i, j, k;
    l_242 &= (safe_div_func_int8_t_s_s((l_241 = ((safe_mul_func_uint8_t_u_u(g_119, (safe_rshift_func_int16_t_s_u(p_7, 1)))) <= (safe_sub_func_int64_t_s_s((l_237[0] , (g_78 = (safe_mul_func_uint16_t_u_u((((g_77 > 0x923EL) > l_240) == p_7), l_237[0].f0)))), l_237[0].f3)))), p_7));
    for (g_226 = 0; (g_226 == 17); g_226++)
    { 
        int32_t l_257 = (-10L);
        int32_t l_285 = 0x02628081L;
        int32_t l_287 = (-4L);
        int32_t l_288 = 0x529A5E11L;
        int32_t l_291 = (-4L);
        int32_t l_299 = 2L;
        int32_t l_300[4][5][5] = {{{1L,0x00725069L,0L,(-1L),(-1L)},{1L,0x8C8D9B6EL,1L,1L,0x299CB9E5L},{0x99910E70L,0x03A7F7B8L,(-1L),1L,0x2A81AA82L},{0xB8FD3D11L,(-1L),0xD1844186L,0L,(-2L)},{(-8L),0x2A81AA82L,(-1L),0x2A81AA82L,(-8L)}},{{0xF529D454L,1L,1L,0x0B69C918L,0L},{0x8687C02BL,0xB0A8AD9AL,0L,0x27886430L,1L},{0x18D6AC7DL,1L,0L,1L,0L},{0x27886430L,0x27886430L,0x03A7F7B8L,0L,(-8L)},{0L,0x5211CC2DL,1L,0xD1844186L,(-2L)}},{{(-1L),0x59963E90L,1L,0x00725069L,0x2A81AA82L},{1L,0x5211CC2DL,0x5211CC2DL,1L,0x299CB9E5L},{0xB0A8AD9AL,0x27886430L,0xEDBF87B3L,(-8L),(-1L)},{1L,1L,0x4D16431FL,0x18D6AC7DL,0x5211CC2DL},{0x59963E90L,0xB0A8AD9AL,(-8L),(-8L),0xB0A8AD9AL}},{{(-2L),1L,0x8C8D9B6EL,1L,0xF529D454L},{(-10L),0x2A81AA82L,0x27886430L,0x00725069L,0xEDBF87B3L},{1L,(-1L),1L,0xD1844186L,0xD1844186L},{(-10L),0x03A7F7B8L,(-10L),0L,(-1L)},{(-2L),0x8C8D9B6EL,0x18D6AC7DL,1L,0x0B69C918L}}};
        const union U1 l_311 = {0xC7B1L};
        int i, j, k;
        for (g_79 = 0; (g_79 > 11); g_79++)
        { 
            int64_t l_261 = 0x20035BCD4861A759LL;
            uint16_t l_282 = 65528UL;
            int32_t l_292 = (-1L);
            int32_t l_293[1];
            int32_t l_303 = 0x80E61474L;
            int32_t l_304 = 0x05DE9894L;
            int i;
            for (i = 0; i < 1; i++)
                l_293[i] = 1L;
            if ((p_7 | (safe_mod_func_uint16_t_u_u((g_31 < (l_241 = g_79)), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((l_242 = 0x60C5L), g_77)) != p_7) > l_237[0].f2), l_257)) != p_7), 7)), l_257))))))
            { 
                uint32_t l_260[3][4][5] = {{{0xC13FCDF0L,0UL,8UL,0xF2861A52L,0x7C7BFAAAL},{0x49015C69L,0x910730F0L,0x974614B0L,0x974614B0L,0x910730F0L},{0xC13FCDF0L,0UL,8UL,0xF2861A52L,0x7C7BFAAAL},{0x49015C69L,0x910730F0L,0x974614B0L,0x974614B0L,0x910730F0L}},{{0xC13FCDF0L,0UL,8UL,0xF2861A52L,0x7C7BFAAAL},{0x49015C69L,0x910730F0L,0x974614B0L,0x974614B0L,0x910730F0L},{0xC13FCDF0L,0UL,8UL,0xF2861A52L,0x7C7BFAAAL},{0x49015C69L,0x910730F0L,0x974614B0L,0x974614B0L,0x910730F0L}},{{0xC13FCDF0L,0UL,8UL,0xF2861A52L,0x7C7BFAAAL},{0x49015C69L,0x910730F0L,0x974614B0L,0x974614B0L,0x910730F0L},{0xC13FCDF0L,0UL,8UL,0xF2861A52L,0x7C7BFAAAL},{0x49015C69L,0x910730F0L,0x974614B0L,0x974614B0L,0x910730F0L}}};
                int i, j, k;
                l_261 &= (safe_sub_func_int16_t_s_s((1L > ((g_32[0].f0 || g_219) && l_260[0][3][3])), 0x9684L));
                return g_262;
            }
            else
            { 
                uint8_t l_266 = 4UL;
                l_266 = (+(safe_mul_func_int8_t_s_s(g_121, 0x89L)));
                if (p_7)
                    break;
                l_257 = (g_32[0].f2 || ((safe_rshift_func_uint8_t_u_s((0x68921B15B012A372LL ^ (g_74 = ((safe_sub_func_uint32_t_u_u(4294967295UL, l_237[0].f2)) > p_7))), p_7)) | g_79));
            }
            if ((l_272 = (g_271 = (g_77 = l_261))))
            { 
                uint32_t l_281 = 0xECE8B494L;
                int32_t l_283 = 1L;
                int32_t l_286 = 1L;
                int32_t l_289 = 0L;
                int32_t l_290 = 0xC1BD2060L;
                int32_t l_294 = 0L;
                int32_t l_295 = 0x30E0CC0CL;
                int32_t l_298 = 0xC160B9ACL;
                int32_t l_301[3];
                uint32_t l_306[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_301[i] = 5L;
                for (i = 0; i < 1; i++)
                    l_306[i] = 0xAD2BFC73L;
                l_257 |= (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(((((safe_div_func_uint32_t_u_u(p_7, g_70)) & p_7) , ((g_77 = ((2L & 0x417E7E36L) > g_31)) || (-2L))) , l_237[0].f1), l_281)) & l_282) >= 0xC9L), 2)), p_7));
                ++l_306[0];
            }
            else
            { 
                uint8_t l_309 = 0x3FL;
                struct S0 l_310 = {0x7E2BE1D8L,3L,0x42A59A297C537019LL,0x65447481L};
                int32_t l_316 = 4L;
                l_309 = 0L;
                l_316 = ((l_310 , (l_311 , (safe_sub_func_uint16_t_u_u(0UL, (safe_rshift_func_uint16_t_u_u(l_304, g_78)))))) & 7UL);
            }
        }
        if (((l_297 = p_7) || l_242))
        { 
            uint16_t l_320[5][2] = {{65527UL,65535UL},{0x9C34L,65527UL},{0x8AC2L,0x8AC2L},{0x8AC2L,65527UL},{0x9C34L,65535UL}};
            int32_t l_325 = 0xF726C207L;
            int32_t l_355 = 1L;
            int32_t l_356 = 0x801BBB9AL;
            int32_t l_359[3][5][1] = {{{0xD033237FL},{0xD033237FL},{0L},{(-8L)},{(-8L)}},{{0L},{(-8L)},{(-8L)},{0L},{(-8L)}},{{(-8L)},{0L},{(-8L)},{(-8L)},{0L}}};
            int i, j, k;
            for (l_296 = (-16); (l_296 < (-13)); l_296++)
            { 
                l_300[0][0][4] |= (((0xEE3DL || (g_319 <= ((l_320[3][1]--) || p_7))) , (p_7 , g_119)) > 0x75L);
            }
            if ((l_302[2][3][0] < (safe_lshift_func_int8_t_s_u(((l_325 = 0L) && (safe_lshift_func_uint8_t_u_s(0xB9L, 3))), ((safe_sub_func_int64_t_s_s((g_73 = (safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0L, g_119)), 0x1AL)) || l_287) , p_7) >= 0UL) > l_338), 0xBDFEL)), 3))), l_338)) || 0xF5L)))))
            { 
                int16_t l_341 = (-3L);
                int32_t l_354 = 0L;
                g_77 ^= (safe_mod_func_uint64_t_u_u(l_296, (l_288 = g_78)));
                l_341 = g_115[0];
                l_354 ^= (safe_rshift_func_int8_t_s_u((g_78 != ((safe_add_func_int8_t_s_s(((+7L) | ((~((safe_lshift_func_int8_t_s_s((l_325 = (safe_mul_func_int16_t_s_s((0x70E8L ^ ((~(((0xC824L && l_353) | l_341) | g_121)) , 0x2EFCL)), 1UL))), 6)) >= p_7)) ^ 0xC921EBF98C910E48LL)), l_296)) && 0x27CBL)), 4));
            }
            else
            { 
                int8_t l_357 = 0x20L;
                int32_t l_358 = 0x8BC7CD58L;
                int32_t l_360[5] = {7L,7L,7L,7L,7L};
                uint16_t l_361[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_361[i] = 0xC664L;
                if (g_262.f0)
                    break;
                ++l_361[1];
                return g_262;
            }
            g_77 ^= ((safe_add_func_uint64_t_u_u((~l_288), (((safe_div_func_uint64_t_u_u((l_359[2][0][0] = (((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0xFAL, 0)), ((safe_mul_func_int8_t_s_s((l_237[0].f0 & (safe_mul_func_int8_t_s_s((l_291 = (-1L)), l_320[4][0]))), g_141)) , l_297))), l_356)) , 0UL) != g_69)), l_237[0].f3)) >= l_355) || l_311.f0))) != l_297);
        }
        else
        { 
            for (g_77 = 0; (g_77 <= 0); g_77 += 1)
            { 
                uint32_t l_379 = 0x5C3926FFL;
                l_300[1][1][1] = 1L;
                --l_379;
            }
        }
    }
    return l_382;
}



static uint32_t  func_10(int64_t  p_11, uint32_t  p_12, uint32_t  p_13, int16_t  p_14)
{ 
    uint64_t l_37 = 4UL;
    int32_t l_54[5];
    uint32_t l_87 = 0xDBDBA9F0L;
    int32_t l_163 = (-7L);
    uint32_t l_164 = 2UL;
    int32_t l_185 = (-1L);
    const int32_t l_186 = 0xE2B6F6ADL;
    int i;
    for (i = 0; i < 5; i++)
        l_54[i] = 0xCBFFAEF1L;
    if ((safe_add_func_int16_t_s_s(0L, ((((-8L) > p_14) <= (((l_37 < l_37) >= l_37) != 0xFBL)) | l_37))))
    { 
        uint32_t l_55 = 0UL;
        for (g_33 = 2; (g_33 >= 0); g_33 -= 1)
        { 
            int8_t l_53 = 0xA0L;
            int32_t l_56 = 0x616E91F1L;
            l_56 = (safe_sub_func_uint32_t_u_u((((safe_mul_func_int64_t_s_s(0x8E20B4584502E46ALL, ((((l_37 && (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_54[4] ^= ((((safe_rshift_func_int8_t_s_u((0xC80D6736L == (((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((g_31 < p_12) , l_53), 7)), g_33)) < l_37) || 18446744073709551615UL)), 7)) , 0xE72C95C8F381C4EDLL) && (-1L)) == p_13)), 0x4FL)), g_32[0].f3))) >= 0xB5BC6833E1ABB416LL) ^ g_32[0].f0) == 0x3A1A91F1L))) , p_12) , l_54[3]), l_55));
        }
        return p_11;
    }
    else
    { 
        uint32_t l_57 = 18446744073709551615UL;
        int32_t l_71 = 0x8EB26348L;
        int32_t l_75[4];
        int32_t l_88 = 0x04CED5A6L;
        const int32_t l_167 = 0L;
        int i;
        for (i = 0; i < 4; i++)
            l_75[i] = 0x617F2E32L;
        if (p_13)
        { 
            union U1 l_64 = {-1L};
            struct S0 l_67 = {9UL,-1L,0x5C3C0652A1FB9D33LL,0xF8626BADL};
            int8_t l_68 = 0x16L;
            int32_t l_89 = 0xD5359122L;
            ++l_57;
            if (((safe_add_func_int64_t_s_s((g_32[0].f1 | ((safe_div_func_int32_t_s_s((((l_64 , (safe_mul_func_int16_t_s_s(((1UL != (l_67 , l_57)) , 7L), g_32[0].f0))) ^ 0L) ^ g_32[0].f0), p_13)) >= l_68)), g_33)) <= p_12))
            { 
                int32_t l_72 = 6L;
                int32_t l_76[5][3][4] = {{{(-3L),1L,(-3L),0L},{0x513AA7A4L,1L,0xC48247ADL,1L},{0x513AA7A4L,0L,(-3L),1L}},{{(-3L),1L,(-3L),0L},{0x513AA7A4L,1L,0xC48247ADL,1L},{0x513AA7A4L,0L,(-3L),1L}},{{(-3L),1L,(-3L),0L},{0x513AA7A4L,1L,0xC48247ADL,1L},{0x513AA7A4L,0L,(-3L),1L}},{{(-3L),1L,(-3L),0L},{0x513AA7A4L,1L,0xC48247ADL,1L},{0x513AA7A4L,0L,(-3L),1L}},{{(-3L),1L,(-3L),0L},{0x513AA7A4L,1L,0xC48247ADL,1L},{0x513AA7A4L,0L,(-3L),1L}}};
                const struct S0 l_82 = {0UL,-1L,0x4EAF162BBD67DEC9LL,1L};
                int i, j, k;
                g_79++;
                g_77 ^= ((((l_75[1] &= (l_82 , 251UL)) ^ (safe_add_func_uint64_t_u_u((((p_11 = (safe_lshift_func_int16_t_s_s((0L <= p_13), 11))) && g_32[0].f2) >= l_87), 18446744073709551610UL))) > l_88) && l_68);
                l_89 ^= 3L;
            }
            else
            { 
                uint32_t l_90[4] = {0x263B4A82L,0x263B4A82L,0x263B4A82L,0x263B4A82L};
                struct S0 l_97 = {0x8A62A980L,1L,0UL,0xE6DAA0A8L};
                int32_t l_98 = 4L;
                int i;
                l_89 = ((l_90[0] = g_32[0].f0) , (l_98 = ((safe_lshift_func_int16_t_s_s(l_67.f3, (safe_mul_func_int16_t_s_s((((safe_add_func_int32_t_s_s((-1L), ((l_97 , p_12) == 7UL))) != g_78) ^ g_69), p_12)))) > 0xB24BL)));
                g_77 |= (((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(0xE1A5471C440229A8LL, (safe_rshift_func_uint8_t_u_u((l_37 != p_11), 1)))), l_71)), 0x9366L)) & (-1L)) , g_32[0].f0);
            }
        }
        else
        { 
            int16_t l_114 = 2L;
            int32_t l_118[4];
            uint64_t l_140 = 0xFA1A8EB3B5FD3493LL;
            int i;
            for (i = 0; i < 4; i++)
                l_118[i] = 0x6B27AEC3L;
            if (p_13)
            { 
                g_77 |= (+(safe_rshift_func_uint16_t_u_s((((((1UL >= p_14) , (l_54[0] = 65528UL)) , (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_78, 0xA9L)), 1UL))) & 65535UL) && 0xD4C7A7D0L), 15)));
            }
            else
            { 
                l_114 = (-5L);
                --g_115[0];
            }
            if (l_114)
            { 
                int8_t l_120 = 8L;
                g_119 = (g_77 = ((l_118[0] = l_75[3]) != 7L));
                ++g_121;
            }
            else
            { 
                uint64_t l_124 = 0x9EE1F0013D6AA347LL;
                int8_t l_139 = (-1L);
                int32_t l_146 = 0x90085843L;
                l_124++;
                l_54[1] |= (p_11 , (((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((g_33 = ((safe_mul_func_int16_t_s_s(l_37, (safe_add_func_int16_t_s_s(g_32[0].f1, (safe_div_func_uint8_t_u_u((g_79 ^ g_79), g_38[2])))))) >= l_118[3])) >= 1UL), l_139)), l_71)), 1L)) != l_140) , 0xCB42A345L));
                l_146 = (0x29L || (((g_141 , ((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((p_13 && (0xBCB6AF07L != g_32[0].f0)), p_13)), l_71)) < l_118[3])) ^ l_124) || l_139));
            }
            if (((safe_rshift_func_int8_t_s_s((l_54[4] &= (safe_mod_func_uint32_t_u_u((0x9A1337086DD7F687LL <= p_11), (safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s((g_119 = (((((0xDAD6L ^ (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((g_115[1] ^= (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s((g_70 , 0xCA509578L), 0x26304C60L)), g_74))) , 0x95L), l_163)), p_13))) & 1L) == p_12) <= g_73) & l_114)), (-1L))), l_164))))), 0)) && l_75[2]))
            { 
                l_75[2] = ((l_118[0] = g_121) < l_88);
                l_71 |= ((l_118[2] |= (l_75[0] = (((safe_mod_func_uint64_t_u_u((g_32[0].f2 && ((((((p_11 > g_32[0].f0) | p_13) <= 2L) | g_115[0]) && g_141) >= l_167)), g_119)) , g_74) && 0x1AL))) || 0x5CL);
            }
            else
            { 
                const uint64_t l_197 = 0x8CDE8390A2E68B52LL;
                l_118[2] = (safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u(((l_88 |= ((((safe_rshift_func_uint16_t_u_s((p_11 < ((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((g_115[0] , (g_119 &= (0x103C393CL < ((((safe_div_func_int32_t_s_s((g_73 , g_141), l_140)) && p_11) & l_118[0]) & l_75[0])))), 4L)) || l_185), l_167)), g_32[0].f2)) > l_186)), l_75[3])) > 0UL) && g_79) < p_12)) || l_118[1]), 7)))), g_69)), 3));
                l_75[0] = (((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(g_115[0], (safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(0xC95AA9AFL, (g_77 = (safe_sub_func_int16_t_s_s((p_12 , 0x112FL), p_12))))) , p_14), l_54[4])))), 4294967295UL)) , 255UL) == l_197);
                l_88 = (safe_mul_func_int8_t_s_s((-3L), (g_31 | ((safe_mul_func_uint8_t_u_u(g_33, (!((g_32[0] , 18446744073709551615UL) ^ 0xE5C4715A4822E14ALL)))) != p_12))));
            }
        }
        for (l_185 = 3; (l_185 >= 1); l_185 -= 1)
        { 
            uint64_t l_222 = 0xF604398A8AD46713LL;
            int i;
            if ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_54[(l_185 + 1)], l_54[(l_185 + 1)])), (safe_div_func_int32_t_s_s((((((((safe_sub_func_int32_t_s_s((l_163 ^= (+((l_54[(l_185 + 1)] ^ (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_13, (-10L))), g_115[2])), l_54[(l_185 + 1)]))) > p_13))), p_13)) < (-6L)) == p_12) | 0xFFL) , g_115[0]) && g_74) != 0xC3L), g_79)))))
            { 
                int32_t l_218[5][3][1] = {{{0xCD90D8D9L},{0xCD90D8D9L},{(-1L)}},{{0xCD90D8D9L},{0xCD90D8D9L},{(-1L)}},{{0xCD90D8D9L},{0xCD90D8D9L},{(-1L)}},{{0xCD90D8D9L},{0xCD90D8D9L},{(-1L)}},{{0xCD90D8D9L},{0xCD90D8D9L},{(-1L)}}};
                int i, j, k;
                g_219++;
                l_222--;
            }
            else
            { 
                int32_t l_225[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_225[i] = (-1L);
                g_226++;
            }
            return l_54[4];
        }
    }
    return p_14;
}



static uint16_t  func_19(uint16_t  p_20, uint64_t  p_21, struct S0  p_22, int64_t  p_23)
{ 
    return g_33;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_32[i].f0, "g_32[i].f0", print_hash_value);
        transparent_crc(g_32[i].f1, "g_32[i].f1", print_hash_value);
        transparent_crc(g_32[i].f2, "g_32[i].f2", print_hash_value);
        transparent_crc(g_32[i].f3, "g_32[i].f3", print_hash_value);

    }
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_284[i], "g_284[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_305[i][j], "g_305[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_319, "g_319", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
