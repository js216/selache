// SPDX-License-Identifier: MIT
// cctest_csmith_34071aea.c --- cctest case csmith_34071aea (csmith seed 872880874)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8a0a2e10 */

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

// Options:   -s 872880874 -o /tmp/csmith_gen_383i8laq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint32_t  f1;
   int16_t  f2;
   int16_t  f3;
};
#pragma pack(pop)

union U1 {
   uint64_t  f0;
   int64_t  f1;
   uint16_t  f2;
};

union U2 {
   int32_t  f0;
   const uint32_t  f1;
};

union U3 {
   int64_t  f0;
   uint16_t  f1;
   int16_t  f2;
};


static uint64_t g_2 = 0UL;
static uint16_t g_10 = 0xFB0BL;
static uint32_t g_14 = 3UL;
static int16_t g_21 = 0xED42L;
static const union U1 g_36 = {0x02AD9236F914A126LL};
static struct S0 g_38 = {-1L,18446744073709551609UL,0x6688L,0xCE71L};
static int16_t g_49 = 0L;
static int64_t g_55 = 0xD293E35F2012CB5DLL;
static int64_t g_56 = 3L;
static int16_t g_57 = 4L;
static uint64_t g_58 = 0x8A82FB3486B68646LL;
static int32_t g_61 = 0x78A42286L;
static int64_t g_62 = (-1L);
static int32_t g_65 = (-1L);
static int32_t g_66 = 0L;
static int16_t g_67 = 0x4210L;
static int16_t g_69[4] = {0x221FL,0x221FL,0x221FL,0x221FL};
static uint64_t g_71 = 1UL;
static const int64_t g_84 = 0x91981F0B5F9D9D8ALL;
static uint8_t g_101 = 255UL;
static int32_t g_104 = 0x1B451AF0L;
static int16_t g_105 = 0xA368L;
static uint64_t g_121 = 7UL;
static int32_t g_128[3] = {0L,0L,0L};
static union U2 g_131 = {1L};
static int32_t g_180 = (-10L);
static int32_t g_188 = 0xF3CD2035L;
static int16_t g_207[1] = {0L};



static union U1  func_1(void);
static int32_t  func_25(int8_t  p_26, uint8_t  p_27, uint8_t  p_28);
static uint8_t  func_29(struct S0  p_30);
static struct S0  func_31(const union U1  p_32, struct S0  p_33, struct S0  p_34, uint32_t  p_35);




static union U1  func_1(void)
{ 
    int32_t l_13 = 0L;
    int64_t l_15 = (-6L);
    struct S0 l_16 = {0L,0UL,7L,0x9D9EL};
    uint8_t l_247[2][4] = {{0UL,0xD8L,0xD8L,0UL},{0xD8L,0UL,0xD8L,0xD8L}};
    union U1 l_253 = {18446744073709551608UL};
    int i, j;
    g_2 = 0xBB0CB8CEL;
    if ((l_15 = ((((!(4294967286UL < (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(0x9CF1L, (((g_10 = g_2) <= (((safe_add_func_int32_t_s_s((g_14 = l_13), 4294967288UL)) & 0x1A82E77EL) > l_13)) , (-1L)))) , l_13) & g_2), l_13)), g_2)))) != g_2) <= l_13) < g_2)))
    { 
        l_16 = l_16;
    }
    else
    { 
        union U1 l_37 = {18446744073709551615UL};
        struct S0 l_252 = {0x33A4L,18446744073709551608UL,0x5B41L,-1L};
        for (g_10 = 0; (g_10 == 45); g_10 = safe_add_func_int16_t_s_s(g_10, 7))
        { 
            uint16_t l_39 = 65532UL;
            uint64_t l_246 = 0x6536C698E71E2262LL;
            struct S0 l_248 = {0xD755L,1UL,-1L,0x816DL};
            for (l_16.f1 = 0; (l_16.f1 < 27); l_16.f1 = safe_add_func_int32_t_s_s(l_16.f1, 7))
            { 
                uint8_t l_22 = 0x57L;
                --l_22;
                if (l_22)
                    break;
            }
            g_128[0] = func_25(g_14, func_29(func_31((l_37 = g_36), g_38, g_38, l_39)), g_49);
            if ((l_16.f0 , ((l_247[1][2] ^= (safe_div_func_uint16_t_u_u((!(l_246 |= (g_105 < 0L))), ((g_128[1] || l_39) && 0x17L)))) != l_15)))
            { 
                l_248 = g_38;
            }
            else
            { 
                uint8_t l_249 = 0UL;
                ++l_249;
            }
        }
        l_252 = func_31(g_36, g_38, g_38, g_128[1]);
    }
    return l_253;
}



static int32_t  func_25(int8_t  p_26, uint8_t  p_27, uint8_t  p_28)
{ 
    int64_t l_166 = 0x2158B1AF397C00CBLL;
lbl_225:
    l_166 = g_36.f0;
    for (g_2 = 0; (g_2 <= 2); g_2 += 1)
    { 
        int32_t l_179[5][2] = {{0x02917F3FL,0x02917F3FL},{0x02917F3FL,0x02917F3FL},{0x02917F3FL,0x02917F3FL},{0x02917F3FL,0x02917F3FL},{0x02917F3FL,0x02917F3FL}};
        int32_t l_185 = (-7L);
        uint32_t l_200 = 0xE694F7BBL;
        const union U1 l_209 = {0x9EE059EF32C18788LL};
        union U1 l_210 = {0UL};
        struct S0 l_226[4][5] = {{{1L,0x45E9411AL,0xA22FL,0xD754L},{-8L,18446744073709551613UL,0L,2L},{-1L,0UL,0L,0x52DCL},{-8L,18446744073709551613UL,0L,2L},{1L,0x45E9411AL,0xA22FL,0xD754L}},{{0x5B6CL,0xE20C9473L,0L,-2L},{-1L,18446744073709551615UL,1L,0xF9B1L},{0L,2UL,0xC167L,0x5BB6L},{-1L,18446744073709551615UL,1L,0xF9B1L},{0x5B6CL,0xE20C9473L,0L,-2L}},{{1L,0x45E9411AL,0xA22FL,0xD754L},{-8L,18446744073709551613UL,0L,2L},{-1L,0UL,0L,0x52DCL},{-8L,18446744073709551613UL,0L,2L},{1L,0x45E9411AL,0xA22FL,0xD754L}},{{0x5B6CL,0xE20C9473L,0L,-2L},{-1L,18446744073709551615UL,1L,0xF9B1L},{0L,2UL,0xC167L,0x5BB6L},{-1L,18446744073709551615UL,1L,0xF9B1L},{0x5B6CL,0xE20C9473L,0L,-2L}}};
        int i, j;
        if ((((((safe_sub_func_uint8_t_u_u((g_128[g_2] ^ ((((((((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int64_t_s(0x03F9351E36C2B630LL)), 1)) > (254UL < ((safe_mod_func_int8_t_s_s((g_55 <= l_166), 0xFEL)) == l_166))) || g_121) && 6L) , p_26) < 2L) ^ p_28) && 7UL)), g_38.f0)) ^ 1L) <= g_55) && g_36.f0) ^ l_166))
        { 
            uint64_t l_178 = 0x3AA76F27FDA64624LL;
            int32_t l_187[2];
            int i;
            for (i = 0; i < 2; i++)
                l_187[i] = (-4L);
            for (g_38.f0 = 2; (g_38.f0 >= 0); g_38.f0 -= 1)
            { 
                int32_t l_186[4][1][5] = {{{0L,0L,0x0242F93AL,0x0242F93AL,0L}},{{(-5L),0xF5407840L,(-5L),0xF5407840L,(-5L)}},{{0L,0x0242F93AL,0x0242F93AL,0L,0L}},{{(-1L),0xF5407840L,(-1L),0xF5407840L,(-1L)}}};
                int i, j, k;
                g_128[g_38.f0] = ((g_128[g_38.f0] , p_28) < ((g_180 = (l_179[3][1] |= l_178)) != (safe_mul_func_uint16_t_u_u((l_187[1] = (safe_mod_func_uint8_t_u_u((l_186[3][0][4] = (l_185 |= (g_101 &= (g_104 != p_27)))), g_128[g_2]))), g_188))));
                l_185 = l_186[3][0][4];
                return g_61;
            }
            for (g_49 = 0; (g_49 <= 2); g_49 += 1)
            { 
                struct S0 l_189 = {0xD205L,0x445193B0L,1L,0x0CD5L};
                l_189 = l_189;
            }
        }
        else
        { 
            struct S0 l_212[1][5][1] = {{{{0x2A44L,0UL,1L,0x8ABBL}},{{4L,0xA3D3629FL,0x3BD3L,-5L}},{{0x2A44L,0UL,1L,0x8ABBL}},{{4L,0xA3D3629FL,0x3BD3L,-5L}},{{0x2A44L,0UL,1L,0x8ABBL}}}};
            int i, j, k;
            if (((safe_mul_func_uint16_t_u_u(g_128[g_2], (((p_28 , (p_28 == ((((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(g_36.f1, p_28)) > l_185), 13)) <= g_57), p_27)), l_166)) < 255UL) < p_27) > g_56))) ^ l_179[3][1]) & l_200))) || p_27))
            { 
                int i;
                g_128[g_2] = (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(0xFC75L)) < (!((safe_mul_func_uint16_t_u_u((g_207[0] = (g_38.f1 == 1L)), (+(p_26 <= p_28)))) >= g_104))), g_36.f1));
            }
            else
            { 
                struct S0 l_211 = {0x29CAL,0xE6A2B58DL,0xA975L,-1L};
                g_38 = func_31((l_210 = l_209), l_211, l_212[0][1][0], l_179[3][1]);
            }
            if (((safe_sub_func_uint8_t_u_u(((g_58 = (safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(g_67, ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((p_27 >= (safe_sub_func_int16_t_s_s((l_179[3][1] &= (p_26 | ((p_28 && (-1L)) || l_212[0][1][0].f1))), 0x1BACL))), 7)) && l_166), p_27)) , 0xA1L))) > l_212[0][1][0].f2), 4294967292UL))) | 0xE52D58216C10DF51LL), 0L)) != p_27))
            { 
                struct S0 l_227[3] = {{0x2489L,0x28E19375L,-1L,8L},{0x2489L,0x28E19375L,-1L,8L},{0x2489L,0x28E19375L,-1L,8L}};
                int i;
                if (g_101)
                    goto lbl_225;
                l_227[0] = (g_38 = l_226[1][1]);
                g_128[g_2] = (-2L);
            }
            else
            { 
                uint32_t l_234[3][5] = {{0xA06586DAL,0x6BC43A74L,0x6BC43A74L,0xA06586DAL,0x6BC43A74L},{0xA06586DAL,0xA06586DAL,3UL,0xA06586DAL,0xA06586DAL},{0x6BC43A74L,0xA06586DAL,0x6BC43A74L,0x6BC43A74L,0xA06586DAL}};
                int i, j;
                l_179[3][1] &= (safe_sub_func_int16_t_s_s(l_200, (safe_div_func_int32_t_s_s((g_128[g_2] |= (safe_lshift_func_int8_t_s_s(l_234[2][4], (safe_div_func_int32_t_s_s(0x652BE244L, ((((((safe_add_func_uint64_t_u_u(l_166, g_10)) & 0L) < l_166) != l_226[1][1].f0) != p_28) , p_26)))))), p_26))));
                if (l_212[0][1][0].f0)
                    break;
            }
            for (g_57 = (-8); (g_57 >= 14); g_57++)
            { 
                if (p_26)
                    break;
            }
        }
    }
    for (g_180 = 0; (g_180 <= (-29)); g_180 = safe_sub_func_uint8_t_u_u(g_180, 2))
    { 
        if (g_36.f0)
            goto lbl_225;
    }
    return g_56;
}



static uint8_t  func_29(struct S0  p_30)
{ 
    int32_t l_142 = 6L;
    if ((g_69[1] | (safe_mul_func_uint8_t_u_u(l_142, (safe_div_func_int64_t_s_s(((4294967295UL <= (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((~((safe_div_func_int64_t_s_s(0xBB04AF86A2F89F94LL, 8L)) != 0xB0L)) & l_142), 65535UL)), 1))) | 8UL), l_142))))))
    { 
        uint64_t l_154 = 1UL;
        int32_t l_155[1];
        int i;
        for (i = 0; i < 1; i++)
            l_155[i] = 7L;
        l_155[0] = ((((g_38.f0 != (g_38.f1 && g_71)) == (safe_mod_func_uint64_t_u_u(l_154, g_131.f1))) & g_62) & p_30.f3);
        return g_67;
    }
    else
    { 
        union U1 l_158[1] = {{0x60E50EEE4F3F7408LL}};
        int32_t l_161 = (-1L);
        int i;
        for (g_38.f0 = 0; (g_38.f0 <= 2); g_38.f0 += 1)
        { 
            int i;
            l_161 = (g_128[g_38.f0] < ((safe_lshift_func_uint8_t_u_u((l_158[0] , g_128[g_38.f0]), (safe_sub_func_uint32_t_u_u(g_66, 0xB37E2C82L)))) | g_38.f3));
        }
        g_128[1] = (g_36.f0 >= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((-1L), ((p_30.f2 & (g_38.f1 , g_38.f2)) | g_55))), p_30.f2)));
    }
    return g_21;
}



static struct S0  func_31(const union U1  p_32, struct S0  p_33, struct S0  p_34, uint32_t  p_35)
{ 
    struct S0 l_44 = {0x8B29L,0xC34F9703L,0x802EL,0xDA7DL};
    int32_t l_46 = (-3L);
    uint32_t l_52 = 0x484A8630L;
    int32_t l_64[3];
    int32_t l_88 = 1L;
    uint8_t l_116 = 0x73L;
    int i;
    for (i = 0; i < 3; i++)
        l_64[i] = 0x87A760F2L;
    for (p_35 = 0; (p_35 <= 27); p_35 = safe_add_func_uint64_t_u_u(p_35, 8))
    { 
        int16_t l_45[4][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
        int32_t l_63 = 0xB986AF20L;
        int32_t l_68 = 0x468F5B79L;
        int32_t l_70 = 0x2D29C614L;
        const int32_t l_90[2] = {0x78D6BFD6L,0x78D6BFD6L};
        uint8_t l_100 = 0xD6L;
        int i, j;
        for (p_33.f0 = 0; (p_33.f0 < 15); ++p_33.f0)
        { 
            p_34 = l_44;
            for (p_34.f3 = 0; (p_34.f3 <= 0); p_34.f3 += 1)
            { 
                return g_38;
            }
            l_46 |= (g_38.f1 == g_2);
        }
        if ((0UL && l_44.f0))
        { 
            int64_t l_50[4][2];
            int32_t l_85 = 4L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_50[i][j] = (-10L);
            }
            for (g_21 = 0; (g_21 <= 0); g_21 += 1)
            { 
                int32_t l_51 = 0x63D476FCL;
                int i, j;
                g_55 ^= (safe_add_func_int16_t_s_s(l_45[(g_21 + 2)][g_21], (--l_52)));
                ++g_58;
                ++g_71;
            }
            if (((safe_mul_func_int16_t_s_s((0x7AL & (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0xAD7CBC17L, (safe_sub_func_int64_t_s_s((-1L), (((safe_lshift_func_int16_t_s_s(0xB9BEL, 5)) | g_56) || l_50[2][1]))))), 0xB728L))), l_64[1])) & g_84))
            { 
                int16_t l_86 = 1L;
                p_34 = l_44;
                l_64[1] = l_44.f0;
                l_86 = (l_85 = 0x4EB764FAL);
            }
            else
            { 
                uint8_t l_87[4][4] = {{6UL,249UL,0x69L,249UL},{249UL,0x82L,0x69L,0x69L},{6UL,6UL,249UL,0x69L},{9UL,0x82L,9UL,249UL}};
                int i, j;
                l_87[2][3] = p_34.f2;
            }
            if (l_88)
                continue;
        }
        else
        { 
            int32_t l_89 = 0xC0BD7895L;
            int32_t l_97 = 0x0F0864F5L;
            if (p_34.f2)
            { 
                uint64_t l_98 = 0x1537C3E802F2280FLL;
                int32_t l_99 = 0x07C5320BL;
                l_99 ^= ((l_89 != ((l_90[0] | l_44.f0) , (safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((l_98 = (safe_div_func_int32_t_s_s(((((((l_97 = 0L) > 0xE080F988L) & g_36.f1) & p_35) && (-1L)) && p_33.f0), p_32.f0))), 0x08L)) < l_90[1]), 2)))) | 0x86D4L);
            }
            else
            { 
                g_101 &= l_100;
                p_34 = p_34;
                if (l_89)
                    break;
            }
            for (l_52 = 0; (l_52 <= 2); l_52 += 1)
            { 
                return p_33;
            }
        }
    }
    for (g_65 = 2; (g_65 >= 0); g_65 -= 1)
    { 
        struct S0 l_102 = {0x6675L,0UL,0xD3DEL,0x848AL};
        int32_t l_108 = 0xB028A4BDL;
        int16_t l_109 = 0x4D15L;
        for (g_56 = 0; (g_56 <= 2); g_56 += 1)
        { 
            int64_t l_106 = 0L;
            uint32_t l_110 = 3UL;
            for (l_44.f0 = 0; (l_44.f0 <= 3); l_44.f0 += 1)
            { 
                struct S0 l_103 = {0xFBCEL,0x5470A06CL,-2L,0x0DA5L};
                int32_t l_107 = 0x8E40FFFFL;
                int i;
                l_103 = l_102;
                if (g_69[(g_56 + 1)])
                    continue;
                --l_110;
            }
        }
        if (l_88)
            continue;
    }
    for (l_44.f2 = 0; (l_44.f2 <= 25); ++l_44.f2)
    { 
        int16_t l_129 = 0L;
        for (l_46 = 0; (l_46 <= 3); l_46 += 1)
        { 
            int8_t l_115 = 0x1CL;
            const union U3 l_136 = {0xC3ECA65C328A76B0LL};
            l_116 |= l_115;
            for (g_21 = 3; (g_21 >= 0); g_21 -= 1)
            { 
                int32_t l_130[2][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_130[i][j] = 5L;
                }
                if (g_36.f1)
                    break;
                g_104 = (safe_add_func_uint8_t_u_u(p_33.f2, 0x55L));
                l_64[1] = (((g_55 |= (((((safe_rshift_func_int8_t_s_s(((g_121 = 4294967291UL) <= (((g_71 < (((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_115, 2)), ((safe_div_func_uint32_t_u_u((g_128[1] = p_33.f1), 0x4380B9C8L)) != 0xB285FCF45A8FD6DDLL))) & l_115) < l_129)) ^ 1L) > g_62)), 1)) >= 0xFBF5F8E9B1403B77LL) & l_130[1][1]) > 0xB4B7F8BE070EAEF0LL) >= 4294967291UL)) && 0L) == 1UL);
            }
            for (l_129 = 2; (l_129 >= 0); l_129 -= 1)
            { 
                uint16_t l_137 = 0UL;
                int i;
                l_64[l_129] = (g_131 , (safe_rshift_func_int16_t_s_s((p_34.f3 & (safe_mod_func_int8_t_s_s(((l_136 , (l_137 ^ l_44.f3)) | g_10), g_36.f0))), l_64[0])));
                return g_38;
            }
        }
        for (g_56 = 0; (g_56 > 0); g_56 = safe_add_func_uint8_t_u_u(g_56, 8))
        { 
            p_34 = g_38;
            if (g_131.f1)
                continue;
        }
    }
    return g_38;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_38.f3, "g_38.f3", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_128[i], "g_128[i]", print_hash_value);

    }
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_207[i], "g_207[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
