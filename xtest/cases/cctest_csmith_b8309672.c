// SPDX-License-Identifier: MIT
// cctest_csmith_b8309672.c --- cctest case csmith_b8309672 (csmith seed 3090191986)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x49749472 */

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

// Options:   -s 3090191986 -o /tmp/csmith_gen_naikpa01/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   const uint16_t  f1;
   const uint32_t  f2;
   const uint32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   struct S0  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U2 {
   const struct S1  f0;
   int16_t  f1;
   uint32_t  f2;
};

union U4 {
   const struct S0  f0;
};

union U5 {
   uint64_t  f0;
   const int64_t  f1;
   int16_t  f2;
   uint16_t  f3;
};


static union U5 g_21 = {1UL};
static uint32_t g_25 = 18446744073709551609UL;
static uint32_t g_60 = 0x75E1209EL;
static uint64_t g_65 = 0x8023CB4EFB57A512LL;
static uint16_t g_77[3][1] = {{0x7960L},{0x7960L},{0x7960L}};
static uint8_t g_101[2][1] = {{246UL},{246UL}};
static struct S0 g_117 = {0x8424657F329DDE60LL,0x98F6L,0xB93CCABFL,0x6CFF212BL};
static int16_t g_123[1][1][4] = {{{(-10L),(-10L),(-10L),(-10L)}}};
static uint8_t g_128[2][5] = {{0x6DL,0x6DL,0x6DL,0x6DL,0x6DL},{251UL,251UL,251UL,251UL,251UL}};
static const struct S1 g_138 = {0x1539L,{0x4BC84205C7445301LL,65535UL,0x9A0BA19AL,0xB30A8829L},0x22D08AE7L};



static uint16_t  func_1(void);
static int32_t  func_7(const struct S1  p_8, const struct S1  p_9, uint16_t  p_10, union U2  p_11, uint32_t  p_12);
static struct S1  func_14(union U5  p_15);
static union U5  func_16(union U5  p_17, union U5  p_18, const union U4  p_19);




static uint16_t  func_1(void)
{ 
    int16_t l_2[1];
    int32_t l_3 = 0x77B568BEL;
    union U5 l_20 = {0UL};
    union U2 l_47 = {{1L,{0L,1UL,4294967287UL,0x6DC7391AL},0x2E2092B2L}};
    int32_t l_125 = 0L;
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0x60E7L;
    l_3 = l_2[0];
    return l_47.f0.f1.f1;
}



static int32_t  func_7(const struct S1  p_8, const struct S1  p_9, uint16_t  p_10, union U2  p_11, uint32_t  p_12)
{ 
    int32_t l_58 = 0x9F44AA84L;
    uint8_t l_59 = 0xF6L;
    int32_t l_95 = (-1L);
    int64_t l_96 = 0L;
    struct S1 l_99 = {0L,{-8L,65535UL,0xD90515F4L,0UL},1UL};
    union U4 l_121 = {{-1L,0UL,4294967287UL,0x818B1E2CL}};
    if (((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(g_25, ((((g_60 &= (safe_lshift_func_int8_t_s_u(0x71L, (((safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0xE4L, l_58)) | 251UL), l_59)) > l_59) <= 0xF4L)))) || 0x77L) > 0x4333L) != p_8.f2))) , p_9.f0), 14)) , l_59))
    { 
        int64_t l_71 = (-2L);
        const uint8_t l_76 = 0x89L;
        for (g_60 = (-4); (g_60 >= 4); g_60 = safe_add_func_int32_t_s_s(g_60, 5))
        { 
            return p_9.f1.f2;
        }
        for (g_60 = 0; (g_60 == 44); ++g_60)
        { 
            g_65 &= 0x7262726EL;
            g_77[1][0] = (safe_div_func_int32_t_s_s((((((g_25 = (+(safe_add_func_uint16_t_u_u(((1L < l_71) || ((((-7L) == ((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(p_9.f1.f1, l_59)), p_9.f0)) ^ l_59)) & l_58) , l_76)), p_11.f2)))) , 1L) , 0xDEL) ^ 0x86L) < l_76), (-8L)));
        }
    }
    else
    { 
        int8_t l_93[3];
        int32_t l_94[1][5][4] = {{{0L,0L,1L,0L},{0L,1L,1L,0L},{1L,0L,1L,1L},{0L,0L,1L,0L},{0L,1L,1L,0L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_93[i] = 0x16L;
        for (p_10 = (-17); (p_10 >= 40); ++p_10)
        { 
            uint64_t l_82 = 0x8E9A5F1CA18E4F1FLL;
            int32_t l_87 = (-1L);
            int32_t l_92[3];
            int i;
            for (i = 0; i < 3; i++)
                l_92[i] = 0x73AC0290L;
            l_95 = (safe_mod_func_int16_t_s_s((l_82 = g_25), (p_11.f1 &= (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((l_87 ^= 0xE0L), (safe_sub_func_int8_t_s_s(((l_94[0][1][1] = ((safe_add_func_int64_t_s_s((-4L), (l_92[1] != p_8.f1.f2))) != l_93[2])) != g_21.f1), 1UL)))) ^ 0x72L), g_60)))));
        }
    }
    l_96 = (l_59 || (0L > (l_95 ^= ((0x784E7BDFF3717488LL ^ g_21.f1) && 9UL))));
    for (p_12 = 12; (p_12 > 43); p_12++)
    { 
        uint16_t l_100[4][3][3] = {{{0UL,7UL,0x955AL},{1UL,2UL,0x331FL},{0x67D3L,0xDE7AL,0x67D3L}},{{1UL,0x331FL,0x6D66L},{0UL,0xDE7AL,0x955AL},{2UL,2UL,0x6D66L}},{{0x67D3L,7UL,0x67D3L},{2UL,0x331FL,0x331FL},{0UL,7UL,0x955AL}},{{1UL,2UL,0x331FL},{0x67D3L,0xDE7AL,0x67D3L},{1UL,0x331FL,0x6D66L}}};
        int32_t l_122[1][5] = {{0x724E75D9L,0x724E75D9L,0x724E75D9L,0x724E75D9L,0x724E75D9L}};
        const uint16_t l_124 = 0xA6C0L;
        int i, j, k;
        g_101[0][0] = (((g_77[1][0] = p_9.f0) , (((l_95 ^= (p_9.f2 , ((l_99 , p_9.f1) , l_100[3][2][2]))) != p_8.f1.f2) <= l_99.f1.f3)) || p_9.f1.f3);
        l_95 = (safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((p_8.f2 , (((safe_add_func_int32_t_s_s(((+0x5FA97D6553E7E880LL) , (g_117 , (g_123[0][0][1] = ((safe_lshift_func_uint16_t_u_s((+(((g_60 = (l_122[0][2] ^= ((p_10 = (l_121 , 65533UL)) || 1L))) != p_8.f0) | p_8.f1.f1)), 7)) ^ l_100[1][2][2])))), l_100[3][2][2])) , p_8.f1.f0) >= l_124)), 1UL)), 0xA1D1L)) && 0x840AD8F8F40BAC05LL) <= (-8L)), p_9.f1.f2)), 0UL)) && l_122[0][2]), 1UL)), l_95));
    }
    return g_21.f0;
}



static struct S1  func_14(union U5  p_15)
{ 
    int64_t l_30 = (-1L);
    int32_t l_35 = (-1L);
    struct S1 l_46[3][5][3] = {{{{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L},{7L,{0x654EFD0E68AC39FBLL,0UL,3UL,18446744073709551615UL},0UL},{0x77FBL,{0x0EFDF249A233967BLL,0x2D7EL,1UL,0x9178FB6CL},0x454D88F4L}},{{0x05BAL,{1L,65529UL,0x02D8B646L,0UL},0x29A0C815L},{0L,{0x70F0D5DC534F93D1LL,0x1CE1L,0x5E042358L,0xEDF6E77AL},0x80BBC097L},{0x05BAL,{1L,65529UL,0x02D8B646L,0UL},0x29A0C815L}},{{0xA137L,{0L,1UL,4294967295UL,18446744073709551615UL},0xE07B88C8L},{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L},{0x77FBL,{0x0EFDF249A233967BLL,0x2D7EL,1UL,0x9178FB6CL},0x454D88F4L}},{{6L,{0x25C9B65FEA07040CLL,0UL,4294967287UL,3UL},0x06D4EB3EL},{0x1A66L,{0x3869515B8451CF61LL,0UL,0x58DE384CL,0xD0E75FCAL},0x6ABB25A5L},{1L,{0L,0x2AFEL,0x88526770L,0x60D0C570L},0UL}},{{5L,{0xADCC66F1EAAC298BLL,65530UL,0xC31E9240L,18446744073709551615UL},7UL},{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L},{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L}}},{{{1L,{0L,0x2AFEL,0x88526770L,0x60D0C570L},0UL},{0L,{0x70F0D5DC534F93D1LL,0x1CE1L,0x5E042358L,0xEDF6E77AL},0x80BBC097L},{0xA436L,{1L,0xFD08L,4294967291UL,0xC6C9DB45L},0UL}},{{5L,{0xADCC66F1EAAC298BLL,65530UL,0xC31E9240L,18446744073709551615UL},7UL},{7L,{0x654EFD0E68AC39FBLL,0UL,3UL,18446744073709551615UL},0UL},{5L,{0xADCC66F1EAAC298BLL,65530UL,0xC31E9240L,18446744073709551615UL},7UL}},{{6L,{0x25C9B65FEA07040CLL,0UL,4294967287UL,3UL},0x06D4EB3EL},{6L,{0xC63F78CAFACA8A51LL,65529UL,0x0D13BCE8L,0x6CA241E2L},7UL},{0xA436L,{1L,0xFD08L,4294967291UL,0xC6C9DB45L},0UL}},{{0xA137L,{0L,1UL,4294967295UL,18446744073709551615UL},0xE07B88C8L},{0xA137L,{0L,1UL,4294967295UL,18446744073709551615UL},0xE07B88C8L},{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L}},{{0x05BAL,{1L,65529UL,0x02D8B646L,0UL},0x29A0C815L},{6L,{0xC63F78CAFACA8A51LL,65529UL,0x0D13BCE8L,0x6CA241E2L},7UL},{1L,{0L,0x2AFEL,0x88526770L,0x60D0C570L},0UL}}},{{{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L},{7L,{0x654EFD0E68AC39FBLL,0UL,3UL,18446744073709551615UL},0UL},{0x77FBL,{0x0EFDF249A233967BLL,0x2D7EL,1UL,0x9178FB6CL},0x454D88F4L}},{{0x05BAL,{1L,65529UL,0x02D8B646L,0UL},0x29A0C815L},{0L,{0x70F0D5DC534F93D1LL,0x1CE1L,0x5E042358L,0xEDF6E77AL},0x80BBC097L},{0x05BAL,{1L,65529UL,0x02D8B646L,0UL},0x29A0C815L}},{{0xA137L,{0L,1UL,4294967295UL,18446744073709551615UL},0xE07B88C8L},{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L},{0x77FBL,{0x0EFDF249A233967BLL,0x2D7EL,1UL,0x9178FB6CL},0x454D88F4L}},{{6L,{0x25C9B65FEA07040CLL,0UL,4294967287UL,3UL},0x06D4EB3EL},{0x1A66L,{0x3869515B8451CF61LL,0UL,0x58DE384CL,0xD0E75FCAL},0x6ABB25A5L},{1L,{0L,0x2AFEL,0x88526770L,0x60D0C570L},0UL}},{{5L,{0xADCC66F1EAAC298BLL,65530UL,0xC31E9240L,18446744073709551615UL},7UL},{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L},{5L,{0xCE3A63A677434CA8LL,1UL,0x24C43DCCL,0x53FEA944L},0x68BD6B81L}}}};
    int i, j, k;
    l_35 = ((safe_mul_func_uint8_t_u_u((l_30 = g_21.f2), ((((((safe_unary_minus_func_uint16_t_u((safe_sub_func_int64_t_s_s(g_21.f2, ((((!l_35) || (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_s((-6L), g_25)) > l_35) && l_35) , g_21.f1), 0UL)), 1UL)), g_21.f1)) > l_35), 15))) , g_21.f0) , g_21.f2))))) ^ g_21.f0) > l_35) , 0x1002A956L) | l_35) < 0xE89BL))) , g_25);
    return l_46[1][0][2];
}



static union U5  func_16(union U5  p_17, union U5  p_18, const union U4  p_19)
{ 
    g_25--;
    return g_21;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_21.f3, "g_21.f3", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_77[i][j], "g_77[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_101[i][j], "g_101[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_123[i][j][k], "g_123[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_128[i][j], "g_128[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1.f0, "g_138.f1.f0", print_hash_value);
    transparent_crc(g_138.f1.f1, "g_138.f1.f1", print_hash_value);
    transparent_crc(g_138.f1.f2, "g_138.f1.f2", print_hash_value);
    transparent_crc(g_138.f1.f3, "g_138.f1.f3", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
