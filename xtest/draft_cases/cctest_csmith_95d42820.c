// SPDX-License-Identifier: MIT
// cctest_csmith_95d42820.c --- cctest case csmith_95d42820 (csmith seed 2513709088)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x298c9077 */

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

// Options:   -s 2513709088 -o /tmp/csmith_gen_gi3r_xjt/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const unsigned f0 : 22;
   int64_t  f1;
   signed f2 : 13;
   unsigned f3 : 27;
   signed f4 : 20;
};
#pragma pack(pop)

union U2 {
   int16_t  f0;
};


static struct S1 g_11 = {1451,0L,-31,11287,401};
static uint32_t g_35 = 18446744073709551610UL;
static uint32_t g_36 = 0UL;
static struct S0 g_41 = {0x9F88DD0BL};
static uint32_t g_56 = 1UL;
static uint8_t g_70 = 0x35L;
static uint16_t g_73 = 0x5B17L;
static uint64_t g_79 = 18446744073709551615UL;
static int64_t g_152[4][2] = {{0xC8DDD0EBFA9BDD0BLL,0xC8DDD0EBFA9BDD0BLL},{0xC8DDD0EBFA9BDD0BLL,0xC8DDD0EBFA9BDD0BLL},{0xC8DDD0EBFA9BDD0BLL,0xC8DDD0EBFA9BDD0BLL},{0xC8DDD0EBFA9BDD0BLL,0xC8DDD0EBFA9BDD0BLL}};
static int8_t g_163 = 0xD8L;
static uint8_t g_165 = 255UL;
static union U2 g_174 = {0xBB92L};
static uint16_t g_176[5] = {0UL,0UL,0UL,0UL,0UL};
static int16_t g_202 = 0x0461L;
static int64_t g_279 = 0xD3FBD4D54A4C857ALL;
static uint8_t g_376 = 248UL;
static uint64_t g_456 = 0UL;
static uint8_t g_489 = 1UL;
static int32_t g_496[3] = {0x26CF543EL,0x26CF543EL,0x26CF543EL};
static struct S0 g_583 = {1L};
static uint64_t g_586 = 0x66547D1C427DAAF3LL;



static struct S0  func_1(void);
static struct S0  func_2(union U2  p_3, uint32_t  p_4, const struct S0  p_5, int32_t  p_6);
static union U2  func_7(struct S1  p_8, uint32_t  p_9, uint32_t  p_10);
static int32_t  func_21(int16_t  p_22);




static struct S0  func_1(void)
{ 
    uint8_t l_12 = 0xF6L;
    uint32_t l_77 = 0x8FDC3C1AL;
    const struct S0 l_317 = {0xDB64655AL};
    struct S0 l_551 = {-1L};
    int32_t l_566 = (-1L);
    uint32_t l_578[3];
    int32_t l_584[3][2][4] = {{{0L,0L,2L,0L},{0L,2L,2L,0L}},{{2L,0L,2L,2L},{0L,0L,2L,0L}},{{0L,2L,2L,0L},{2L,0L,2L,2L}}};
    int32_t l_585 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_578[i] = 0xD3EAD75AL;
    l_551 = func_2(func_7(g_11, l_12, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s(func_21(l_12), l_77)) ^ (-7L)), g_11.f0)), 13)), 6))), g_11.f1, l_317, l_317.f0);
    for (g_165 = 0; (g_165 != 18); ++g_165)
    { 
        uint8_t l_561[5][3] = {{2UL,2UL,2UL},{255UL,255UL,255UL},{2UL,2UL,2UL},{255UL,255UL,255UL},{2UL,2UL,2UL}};
        int32_t l_563 = (-2L);
        int32_t l_565 = 0x07B3F76FL;
        int i, j;
        for (g_35 = 0; (g_35 <= 1); g_35 += 1)
        { 
            int32_t l_554 = (-8L);
            uint64_t l_567[1];
            int i;
            for (i = 0; i < 1; i++)
                l_567[i] = 18446744073709551615UL;
            for (g_174.f0 = 1; (g_174.f0 >= 0); g_174.f0 -= 1)
            { 
                int i, j;
                if (g_152[(g_35 + 2)][g_35])
                    break;
                l_554 &= g_176[3];
            }
            l_561[0][2] ^= (((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((6UL | ((safe_sub_func_uint64_t_u_u(0x5CA382A8CA7491A2LL, l_317.f0)) <= ((0UL ^ g_70) , l_554))), l_551.f0)), 1L)) <= 0xBED4L) == g_376);
            for (g_56 = 0; (g_56 <= 1); g_56 += 1)
            { 
                int64_t l_562 = 0L;
                int32_t l_564 = (-10L);
                --l_567[0];
                l_563 = (18446744073709551606UL == (((safe_sub_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((-7L), ((safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((((l_562 | (l_578[2] = 1L)) >= l_564) == l_554), 0x146A9DD226A061BALL)) != l_565), g_11.f4)) >= g_36))) & 0x2ADF35EB71DC753CLL) > 0xE9EABBB5L), g_56)) , g_41.f0) == g_202));
                if (l_567[0])
                    break;
            }
        }
        for (g_279 = 0; (g_279 != (-18)); g_279 = safe_sub_func_uint64_t_u_u(g_279, 9))
        { 
            for (g_70 = 0; (g_70 == 34); g_70 = safe_add_func_uint32_t_u_u(g_70, 5))
            { 
                if (g_163)
                    break;
                return g_41;
            }
            for (g_73 = 0; (g_73 <= 2); g_73 += 1)
            { 
                int i, j;
                g_583 = (g_41 = l_317);
                if (l_561[(g_73 + 2)][g_73])
                    break;
            }
        }
    }
    --g_586;
    return l_317;
}



static struct S0  func_2(union U2  p_3, uint32_t  p_4, const struct S0  p_5, int32_t  p_6)
{ 
    int16_t l_318 = (-3L);
    const int32_t l_326 = (-10L);
    uint64_t l_350 = 18446744073709551615UL;
    int32_t l_353 = 0x0B6152E5L;
    int32_t l_354 = 0x8F1467F0L;
    int64_t l_385[1][5][5];
    const uint64_t l_397 = 0UL;
    int32_t l_452 = 0L;
    uint8_t l_464[5];
    uint16_t l_510 = 0x2C18L;
    int8_t l_519 = (-7L);
    struct S0 l_533 = {1L};
    int32_t l_537 = 1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
                l_385[i][j][k] = 0x655A31A032CACBC3LL;
        }
    }
    for (i = 0; i < 5; i++)
        l_464[i] = 0x92L;
    if (g_41.f0)
    { 
        int32_t l_330 = 0xAB3E2582L;
        uint32_t l_331 = 18446744073709551608UL;
        if (((g_174 , ((0x8DB37E61L || p_4) || l_318)) && p_6))
        { 
            int64_t l_329 = 0xB09113BFD860E4E3LL;
            g_11.f2 |= ((((safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(((p_5 , (~g_56)) <= (safe_div_func_uint32_t_u_u(l_326, ((safe_sub_func_uint16_t_u_u((l_329 = (18446744073709551609UL < g_152[3][1])), l_318)) , 1UL)))), g_11.f0)) | 1UL), (-5L))) <= g_11.f3) ^ (-1L)) > g_176[0]);
            ++l_331;
            g_11.f4 = l_326;
        }
        else
        { 
            uint64_t l_351[4][3][2] = {{{18446744073709551615UL,18446744073709551615UL},{1UL,18446744073709551615UL},{18446744073709551615UL,1UL}},{{18446744073709551615UL,18446744073709551615UL},{1UL,18446744073709551615UL},{18446744073709551615UL,1UL}},{{18446744073709551615UL,18446744073709551615UL},{1UL,18446744073709551615UL},{18446744073709551615UL,1UL}},{{18446744073709551615UL,18446744073709551615UL},{1UL,18446744073709551615UL},{18446744073709551615UL,1UL}}};
            int32_t l_352[5][2] = {{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}};
            int i, j, k;
            g_11.f2 &= (safe_mul_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(0x34B9L, (safe_rshift_func_int8_t_s_s((l_354 = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u(((l_353 = (l_352[4][1] &= (safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((((l_318 < g_152[3][1]) <= (255UL == l_350)) == l_330), g_36)) != l_330) , p_5.f0), l_351[2][1][1])))) != g_165), 0x2FDEL)) , p_5.f0) ^ p_6), g_73)), g_56))), 3)))) || 0x5043L) , l_331), l_330));
        }
    }
    else
    { 
        int32_t l_369 = 0x3D29711FL;
        struct S0 l_386[4] = {{1L},{1L},{1L},{1L}};
        struct S1 l_387 = {596,-6L,-89,2688,482};
        struct S0 l_403 = {0xBC32C68FL};
        uint16_t l_422 = 0UL;
        int i;
        for (g_174.f0 = 1; (g_174.f0 <= 4); g_174.f0 += 1)
        { 
            int64_t l_374 = 0x5551732A5C8871E6LL;
            int32_t l_375 = 0x23F4BAE0L;
            int i;
            if (g_176[g_174.f0])
            { 
                int16_t l_370 = (-1L);
                int8_t l_373[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_373[i] = 0xDBL;
                g_11.f2 = (((p_3 , ((((g_11.f4 = (p_6 = ((-1L) < (safe_mul_func_uint8_t_u_u(((l_353 = ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_4, (safe_mod_func_uint8_t_u_u((g_165--), ((l_370 , 1L) ^ g_79))))), p_5.f0)) , l_373[0]), 7)), g_79)), p_4)) != p_5.f0)) & p_4), l_370))))) ^ p_4) , l_369) != 0L)) >= g_176[g_174.f0]) & 0xC434A214248C0B11LL);
            }
            else
            { 
                ++g_376;
                if (l_326)
                    continue;
            }
        }
        for (l_318 = 0; (l_318 <= 1); l_318 += 1)
        { 
            struct S1 l_396 = {2022,0xFBF402CEC61A2151LL,-89,5682,771};
            uint64_t l_398 = 0xE84D2678A6686888LL;
            int i;
            g_41 = ((safe_mod_func_int16_t_s_s(0x0E81L, (safe_sub_func_int8_t_s_s(g_176[(l_318 + 3)], ((1L == (safe_mod_func_uint32_t_u_u(((l_385[0][0][1] | p_4) > l_369), l_385[0][0][2]))) <= p_4))))) , l_386[2]);
            if (((l_387 , (safe_lshift_func_int16_t_s_s(((((((p_6 != (safe_lshift_func_uint16_t_u_s(p_3.f0, 14))) || (((((safe_div_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((((l_396 , l_397) == 0x77B3C1874894D465LL) , l_386[2].f0), 0xF7702C50F9E10025LL)) >= 0x7D8A5F0AL), g_11.f3)) != 7UL) > g_41.f0) && l_326) != 1L)) > l_385[0][4][3]) , l_398) | (-2L)) < l_387.f0), l_387.f1))) , 1L))
            { 
                uint32_t l_399 = 0x3B4D4BB7L;
                int32_t l_402 = (-10L);
                l_396.f2 = 0x258C6893L;
                --l_399;
                l_402 = (p_6 = 0L);
            }
            else
            { 
                return l_403;
            }
            for (l_354 = 4; (l_354 >= 0); l_354 -= 1)
            { 
                int32_t l_423 = 0L;
                int i, j;
                if (g_152[(l_318 + 2)][l_318])
                    break;
                if (g_11.f4)
                    continue;
                l_423 = ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_56, g_174.f0)), (safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((l_353 = (((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_uint64_t_u_u(((g_279 && (safe_mul_func_int8_t_s_s((((safe_add_func_int64_t_s_s((g_176[0] == g_152[(l_318 + 2)][l_318]), p_6)) , p_4) & p_6), l_387.f3))) > 0L), 0L)), g_279)), g_41.f0)) && g_152[(l_318 + 2)][l_318]) >= p_6)), 0UL)) , l_396.f2), l_422)))) , (-1L));
            }
        }
    }
lbl_546:
    for (g_165 = 0; (g_165 == 10); g_165 = safe_add_func_int64_t_s_s(g_165, 9))
    { 
        uint32_t l_443[5][3] = {{4294967288UL,4294967287UL,4294967288UL},{4294967288UL,4294967287UL,4294967288UL},{4294967288UL,4294967287UL,4294967288UL},{4294967288UL,4294967287UL,4294967288UL},{4294967288UL,4294967287UL,4294967288UL}};
        int32_t l_453[4][3][5] = {{{0xB1D9A2A0L,(-4L),0xB1D9A2A0L,2L,2L},{0xED5E2A7EL,1L,0xED5E2A7EL,0xD84D611FL,0xBA00EA8EL},{0xB1D9A2A0L,(-4L),0xB1D9A2A0L,2L,2L}},{{0xED5E2A7EL,1L,0xED5E2A7EL,0xD84D611FL,0xBA00EA8EL},{0xB1D9A2A0L,(-4L),0xB1D9A2A0L,2L,2L},{0xED5E2A7EL,1L,0xED5E2A7EL,0xD84D611FL,0xBA00EA8EL}},{{0xB1D9A2A0L,(-4L),0xB1D9A2A0L,2L,2L},{0xED5E2A7EL,1L,0xED5E2A7EL,0xD84D611FL,0xBA00EA8EL},{0xB1D9A2A0L,(-4L),0xB1D9A2A0L,2L,2L}},{{0xED5E2A7EL,1L,0xED5E2A7EL,0xD84D611FL,0xBA00EA8EL},{0xB1D9A2A0L,(-4L),0xB1D9A2A0L,2L,2L},{0xED5E2A7EL,1L,0xED5E2A7EL,0xD84D611FL,0xBA00EA8EL}}};
        int32_t l_486 = 3L;
        int i, j, k;
        if ((safe_sub_func_int64_t_s_s(p_4, (((safe_add_func_uint16_t_u_u((g_11.f2 && 0x29L), (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_326, g_36)), g_279)))), 1UL)) <= 0x60BEL), p_5.f0)))) <= g_11.f4) != l_353))))
        { 
            struct S0 l_441 = {1L};
            int32_t l_442 = 0x250FE5F7L;
            for (l_354 = 0; (l_354 < 28); l_354 = safe_add_func_uint16_t_u_u(l_354, 6))
            { 
                return l_441;
            }
            if (l_441.f0)
                continue;
            ++l_443[2][0];
        }
        else
        { 
            int32_t l_450 = 0xA6587263L;
            int32_t l_454 = 3L;
            int32_t l_455[4] = {0L,0L,0L,0L};
            struct S0 l_465 = {0x3E2D9D1FL};
            int i;
            for (l_354 = 4; (l_354 >= 0); l_354 -= 1)
            { 
                uint8_t l_451 = 0x93L;
                l_452 |= (l_350 < ((g_163 = (l_451 = ((p_5 , (l_353 = (safe_mul_func_uint8_t_u_u(p_6, (safe_mul_func_uint8_t_u_u((l_450 , g_11.f1), 0x9AL)))))) != 0x40L))) > g_11.f2));
                if (g_35)
                    break;
                g_456++;
            }
            if (((l_455[1] = (l_453[3][0][2] &= ((p_4 || (g_11.f0 || (((safe_sub_func_uint64_t_u_u(5UL, (safe_lshift_func_uint8_t_u_s((l_450 &= (!((g_41 , 0x49L) && g_11.f3))), 6)))) >= p_4) == 0x91350084BEE1A485LL))) >= 0xCD351BAFL))) || l_464[4]))
            { 
                return l_465;
            }
            else
            { 
                struct S0 l_481 = {-1L};
                int8_t l_487 = 0x8CL;
                int32_t l_488 = (-5L);
                g_11.f2 = ((!(safe_add_func_uint64_t_u_u(g_70, (((safe_lshift_func_int8_t_s_s(l_453[3][1][0], (g_163 = (safe_add_func_int8_t_s_s(l_450, (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((g_11.f3 = ((safe_mod_func_int64_t_s_s((((((safe_sub_func_int16_t_s_s((((g_70 & g_152[1][0]) == l_464[3]) >= 0x5C005599L), g_73)) || p_4) ^ 7UL) & 6UL) || 0xE9L), 0xDC35F61777C7878CLL)) < p_5.f0)), l_453[3][2][1])) || g_202), 65535UL))))))) < 0L) < p_5.f0)))) , (-9L));
                l_487 |= (l_481 , ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((l_454 &= p_6) < l_443[1][2]), 0x96B4L)), p_3.f0)) ^ l_486));
                ++g_489;
            }
            for (g_376 = 0; (g_376 == 14); g_376++)
            { 
                l_354 |= g_163;
                g_496[1] |= (g_11 , (l_454 != (safe_lshift_func_int8_t_s_s((l_353 | l_453[2][0][3]), g_489))));
                if (p_6)
                    continue;
            }
        }
        if (((!(l_453[3][0][1] = (safe_add_func_uint16_t_u_u(g_456, g_70)))) , (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_6, l_353)), g_70)) < 4294967294UL), 5)) && l_443[4][2]), l_486))))
        { 
            int16_t l_508 = 0x1776L;
            int32_t l_509 = 1L;
            int32_t l_520 = 0x90554811L;
            int32_t l_521 = 0x18F8D0A3L;
            l_510--;
            if ((p_6 &= (((l_453[0][0][1] = (((((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(((--g_36) , ((safe_mod_func_uint8_t_u_u(0xD5L, (safe_unary_minus_func_int16_t_s(0xBB3DL)))) == (l_453[0][0][2] , ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((((safe_sub_func_uint64_t_u_u(0x7AA9BFBE10064436LL, 0L)) ^ 0x9D959476L) | g_35) & l_509) ^ g_56), 1UL)), p_4)) >= 0x438BL)))), l_443[2][0])) >= g_376) < 3L), 0UL)), 0xB79BL)) >= g_202) > l_520) ^ l_519) | p_4)) <= 0x4A5B1CB5L) & p_4)))
            { 
                return l_533;
            }
            else
            { 
                struct S0 l_534[2][3] = {{{1L},{1L},{1L}},{{0x5409C428L},{0x5409C428L},{0x5409C428L}}};
                int i, j;
                return l_534[0][2];
            }
        }
        else
        { 
            int16_t l_535 = (-1L);
            int64_t l_536 = 0x11E3C6B21A75E040LL;
            int32_t l_538 = 0x8A925A2EL;
            uint16_t l_539 = 0UL;
            ++l_539;
            l_354 = g_41.f0;
            l_353 = (safe_add_func_uint16_t_u_u(p_3.f0, 1L));
        }
    }
    for (g_41.f0 = 29; (g_41.f0 != 6); g_41.f0 = safe_sub_func_uint8_t_u_u(g_41.f0, 1))
    { 
        int8_t l_547 = 0L;
        uint16_t l_548 = 1UL;
        if (g_11.f1)
            goto lbl_546;
        l_533 = p_5;
        for (l_353 = 1; (l_353 >= 0); l_353 -= 1)
        { 
            int i;
            for (g_70 = 0; (g_70 <= 2); g_70 += 1)
            { 
                int i, j;
                if (g_152[(l_353 + 2)][l_353])
                    break;
            }
            ++l_548;
        }
    }
    return p_5;
}



static union U2  func_7(struct S1  p_8, uint32_t  p_9, uint32_t  p_10)
{ 
    uint32_t l_78 = 0xF16A1EA5L;
    int32_t l_94 = 0x765C99C2L;
    int32_t l_156 = 0xB59B2D93L;
    int32_t l_160[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint8_t l_168[3];
    struct S1 l_173 = {1402,0xCF6E19BD86A01D58LL,-15,2088,-741};
    int32_t l_187 = 0x3CD8D72EL;
    int64_t l_312 = 1L;
    union U2 l_316 = {1L};
    int i;
    for (i = 0; i < 3; i++)
        l_168[i] = 0xF2L;
    if (((g_79 = l_78) , g_11.f1))
    { 
        uint16_t l_89 = 9UL;
        int32_t l_95 = (-1L);
        uint64_t l_108[5][1][1];
        uint8_t l_109[4];
        int32_t l_142 = (-4L);
        uint64_t l_154[2];
        int32_t l_159 = 0xE765359DL;
        int32_t l_164 = 1L;
        int8_t l_175 = 0x69L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_108[i][j][k] = 0UL;
            }
        }
        for (i = 0; i < 4; i++)
            l_109[i] = 246UL;
        for (i = 0; i < 2; i++)
            l_154[i] = 0x0635580C9BFB87D1LL;
        if ((safe_mul_func_int8_t_s_s((((p_8.f2 = ((safe_rshift_func_int8_t_s_s((g_11.f0 != ((l_95 &= (!(((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(l_89, 0)), 0x44CB182417F16C3BLL)) | (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((l_94 = (-9L)) & p_8.f2), g_35)), l_78))) | l_78))) ^ p_8.f4)), 3)) , 0L)) > 0x5DC3D349L) == l_78), 1UL)))
        { 
            int16_t l_100[2];
            int32_t l_101 = 0x65C771C7L;
            int32_t l_110 = 0x33E7469BL;
            int64_t l_111 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_100[i] = (-2L);
            if (((safe_rshift_func_uint16_t_u_s((((l_78 == (safe_mod_func_int16_t_s_s((l_100[1] & ((++g_36) < (p_8.f1 > (safe_sub_func_int64_t_s_s((l_111 = ((((safe_rshift_func_int8_t_s_s(((l_110 = (((l_94 &= (l_108[2][0][0] , l_109[1])) == g_41.f0) < g_73)) <= g_35), 6)) & p_8.f1) && p_8.f4) > l_78)), l_108[0][0][0]))))), 0x9839L))) , g_11.f2) , 65535UL), 8)) > l_108[2][0][0]))
            { 
                int64_t l_129 = 0L;
                l_95 |= (((((g_73 = (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((!(g_11.f1 == (safe_mod_func_int8_t_s_s((p_8.f1 < (((4L || ((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((((7UL < g_11.f4) & l_129) >= g_35), p_8.f4)) , l_129) || l_78), 1)) | 65526UL), p_10)), p_8.f4)) < (-1L))) > 0L) , g_73)), 0x5DL)))) <= 0xD98765FAFB163631LL), g_11.f3)), l_109[3])) && g_11.f3), p_9))) == g_41.f0) >= l_111) ^ 6L) , p_10);
            }
            else
            { 
                l_94 = g_36;
            }
        }
        else
        { 
            uint8_t l_153 = 0xE1L;
            int32_t l_157[1];
            int i;
            for (i = 0; i < 1; i++)
                l_157[i] = 0x11F742CEL;
            if ((((p_8.f3 | ((safe_lshift_func_int16_t_s_u((l_95 = ((0xBDL > (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0x33L, (safe_div_func_uint32_t_u_u(((((((g_73 , g_35) != 2UL) | g_11.f4) != 0xFBA64A4AL) > 65535UL) >= l_142), g_11.f3)))), 2)), p_8.f1)), g_11.f3))) && 0xCA0F1C71L)), 5)) , p_9)) ^ p_9) == g_11.f3))
            { 
                int32_t l_147 = 0x45D86B46L;
                g_11.f2 = (safe_div_func_int32_t_s_s(((((((safe_rshift_func_uint8_t_u_s(l_147, ((p_10 = (((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((g_152[3][1] ^= (p_9 && p_8.f2)) >= 0xABL), 3)), p_8.f2)) >= 0x5CE2L) | 1UL)) && 3L))) && 0x32EDDAFFDA28E2A2LL) == l_153) && 0xEC4757C61DA5914DLL) || l_154[1]) & l_153), (-1L)));
            }
            else
            { 
                int32_t l_155 = 0x5567A964L;
                int32_t l_158 = 1L;
                int32_t l_161 = 0x9A5CC0B3L;
                int32_t l_162 = 0x48091CC0L;
                g_165++;
                g_11.f2 = (0L < (l_168[2] || ((l_157[0] = (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((p_8.f1 = (l_173 , (g_174 , (-10L)))), g_36)), l_173.f1))) & 0xB6L)));
            }
        }
        --g_176[0];
        l_164 = l_109[0];
    }
    else
    { 
        union U2 l_188 = {0xD9E1L};
        const uint64_t l_214 = 18446744073709551606UL;
        struct S0 l_234 = {1L};
        const int32_t l_251 = (-1L);
        int32_t l_252 = 4L;
        int16_t l_278 = 0x4B4DL;
        int16_t l_280 = 0x3B6CL;
        if ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((+l_156) == (safe_sub_func_uint32_t_u_u(0xAE1E1C95L, (l_173.f2 = (safe_unary_minus_func_uint8_t_u(((g_56 < p_8.f0) | g_176[0]))))))), l_173.f0)), l_187)))
        { 
            int32_t l_203 = 0x557DD34DL;
            union U2 l_229 = {0x7D91L};
            if ((((l_188 , ((g_176[0] = ((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_176[2], 0L)), (safe_sub_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(((l_160[0] = (safe_div_func_int8_t_s_s(((safe_div_func_int64_t_s_s((((~(g_174 , l_188.f0)) , p_8.f0) <= g_202), g_11.f2)) >= g_176[0]), 255UL))) , l_188.f0), p_8.f2)) || (-1L)) , g_70), g_56)))) & l_188.f0)) || g_176[0])) & p_8.f0) > l_203))
            { 
                return g_174;
            }
            else
            { 
                g_11.f2 = (safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((g_165 ^ ((safe_rshift_func_uint16_t_u_u(65531UL, g_202)) && 1UL)), 0x7435F2194A6FF7F1LL)), g_11.f2));
            }
            if ((0xEADEB179L <= (safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((l_214 | (+((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((g_70 = (safe_unary_minus_func_int16_t_s(((safe_rshift_func_int8_t_s_u(((g_41 = g_41) , ((safe_mul_func_int8_t_s_s(((((p_10 , p_8.f3) <= l_188.f0) < p_9) != 254UL), p_9)) ^ l_203)), 1)) < g_174.f0)))), 4)), g_152[1][0])), g_176[0])), p_8.f2)) > l_160[0]))), p_10)) || p_8.f1), 2L))))
            { 
                return l_229;
            }
            else
            { 
                g_11.f4 = (p_8.f4 , (safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(0x42F5L, p_8.f4)) > (g_11.f1 < p_8.f3)), 1UL)));
            }
            g_41 = l_234;
        }
        else
        { 
            int32_t l_237 = 0x3AE872CBL;
            int32_t l_253 = 0L;
            p_8.f2 = (safe_sub_func_uint64_t_u_u(((g_36 || ((l_237 |= p_8.f2) >= 0x8217L)) , p_10), g_56));
lbl_281:
            p_8.f4 &= (safe_rshift_func_int8_t_s_u(((g_73 | g_11.f2) && (!0UL)), 7));
            if (((safe_mod_func_int16_t_s_s((l_160[4] = (safe_rshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((g_56 & g_152[3][1]), (safe_sub_func_uint8_t_u_u(0xA3L, (((g_176[0] = g_165) | g_73) > l_237))))) == l_251), 0xEA0AL)) , l_173.f3) ^ l_188.f0), l_252))), g_11.f4)) <= l_253))
            { 
                uint32_t l_275 = 0xB89C927EL;
                uint8_t l_277 = 255UL;
                g_11.f2 = (safe_lshift_func_int8_t_s_u(p_8.f3, p_9));
                l_280 ^= ((safe_div_func_int8_t_s_s((l_187 = ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(p_10, (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((p_9 == (g_73 = (((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s(l_275, 7)))) && ((((((l_277 = (~(g_36 | 18446744073709551614UL))) | 5UL) > p_8.f1) || 0xCEA1EC8D3978347ALL) != 0x410F041EL) != p_8.f0)) , g_11.f2))) && 0x30B072DD7AA1D18FLL) | l_278), l_168[2])), 7UL)))), p_9)), 3)) >= l_251) > g_279), p_8.f3)) > l_251)), l_275)) >= 0xED0E2EEFL);
            }
            else
            { 
                int8_t l_286 = 1L;
                if (g_56)
                    goto lbl_281;
                l_237 |= (1UL && (((safe_add_func_int16_t_s_s((g_174.f0 = (((safe_div_func_int16_t_s_s((l_160[1] = 0x67F5L), (l_280 | ((g_174 , p_8.f3) | 4294967293UL)))) <= 0L) | g_11.f4)), g_176[0])) && 0xAC74L) != l_286));
            }
        }
        for (p_8.f1 = 0; (p_8.f1 == 19); p_8.f1 = safe_add_func_int64_t_s_s(p_8.f1, 4))
        { 
            uint64_t l_291 = 4UL;
            int32_t l_305 = 0L;
            int32_t l_306 = 6L;
            g_11.f4 = ((safe_mod_func_int64_t_s_s((4294967287UL | (g_79 || ((l_160[0] = (l_291 = g_41.f0)) ^ (g_163 |= (((--g_56) < ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((((safe_div_func_int16_t_s_s(((((l_94 = (~((safe_sub_func_int64_t_s_s(((l_305 |= ((safe_sub_func_uint8_t_u_u((0x5AL ^ g_152[3][1]), l_234.f0)) && p_8.f4)) <= 65535UL), l_306)) || p_8.f0))) || g_11.f4) != g_11.f0) >= 0x78L), 65535UL)) < l_234.f0) && p_8.f2) < l_168[2]), 1L)), 8)) , l_156)) >= l_252))))), p_8.f3)) >= g_11.f4);
            l_305 = (p_8.f2 = p_10);
            if (p_8.f3)
                break;
        }
    }
    for (p_10 = 0; (p_10 <= 2); p_10 += 1)
    { 
        int32_t l_311 = (-2L);
        int64_t l_315 = 0xDB94EEF04CFCC2DBLL;
        int i;
        l_315 &= (l_160[(p_10 + 2)] = (safe_div_func_int8_t_s_s(((l_168[p_10] > (p_8 , (safe_sub_func_uint32_t_u_u((g_56--), (p_10 & (g_11.f0 != l_160[0])))))) && p_9), g_174.f0)));
    }
    return l_316;
}



static int32_t  func_21(int16_t  p_22)
{ 
    int64_t l_34 = 0x71B36C93846F2633LL;
    int32_t l_76 = 0x58A35CCCL;
    if (g_11.f0)
    { 
        int32_t l_30 = 1L;
        int32_t l_33[1][2];
        struct S0 l_39 = {-1L};
        uint64_t l_66 = 0x9D5C01CF56E035D6LL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_33[i][j] = (-3L);
        }
        g_35 = ((((~(((safe_add_func_int32_t_s_s((l_33[0][1] |= (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((g_11.f3 || ((l_30 < (safe_lshift_func_uint8_t_u_s(p_22, p_22))) < 1UL)) >= p_22), p_22)) < g_11.f4), p_22))), 0xCBDB62B2L)) == l_34) > p_22)) , l_33[0][1]) >= g_11.f1) >= (-1L));
        if (p_22)
        { 
            struct S0 l_40[2][3][3] = {{{{-9L},{-3L},{-9L}},{{-9L},{0xF32F520AL},{-3L}},{{0xF32F520AL},{-9L},{-9L}}},{{{-3L},{-9L},{0x50187E52L}},{{0x954EB856L},{0xF32F520AL},{0xF51885A1L}},{{-3L},{-3L},{0xF51885A1L}}}};
            int i, j, k;
            g_36 = g_11.f2;
            for (p_22 = 0; (p_22 > (-27)); p_22 = safe_sub_func_uint64_t_u_u(p_22, 4))
            { 
                g_41 = (l_39 , l_40[1][0][1]);
                l_40[1][1][0] = l_39;
            }
        }
        else
        { 
            uint16_t l_54 = 0UL;
            int32_t l_55 = 0xEC7E1EFCL;
            l_55 = (safe_div_func_uint32_t_u_u(((((((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((l_34 <= g_11.f3), 5)), (safe_mul_func_uint16_t_u_u((g_11.f1 ^ (safe_mul_func_int8_t_s_s((g_11.f4 <= p_22), l_33[0][1]))), 0x037DL)))), g_11.f1)) | l_34) == l_39.f0) , l_34) || g_35) || g_11.f3), l_54));
            g_56++;
            for (l_54 = (-15); (l_54 == 4); l_54 = safe_add_func_int8_t_s_s(l_54, 5))
            { 
                uint32_t l_65 = 1UL;
                l_66 &= (((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(65532UL, p_22)), g_36)) & l_65) != 18446744073709551607UL);
            }
        }
        return p_22;
    }
    else
    { 
        uint32_t l_67 = 0x29ADBE56L;
        l_67--;
        g_73 = (g_11.f4 > (++g_70));
    }
    l_76 &= (safe_div_func_uint8_t_u_u(p_22, (-1L)));
    return p_22;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_152[i][j], "g_152[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_176[i], "g_176[i]", print_hash_value);

    }
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_496[i], "g_496[i]", print_hash_value);

    }
    transparent_crc(g_583.f0, "g_583.f0", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
