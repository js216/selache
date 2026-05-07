// SPDX-License-Identifier: MIT
// cctest_csmith_b1038a48.c --- cctest case csmith_b1038a48 (csmith seed 2969799240)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8d3fc4c0 */

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

// Options:   -s 2969799240 -o /tmp/csmith_gen_s5jkiw1b/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 18;
   unsigned f1 : 31;
   signed f2 : 5;
   const unsigned f3 : 29;
   unsigned f4 : 24;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint64_t  f3;
   struct S0  f4;
   uint32_t  f5;
   int64_t  f6;
   struct S0  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   unsigned f0 : 14;
   const unsigned f1 : 5;
   signed f2 : 28;
   signed f3 : 9;
   unsigned f4 : 20;
   unsigned f5 : 19;
   const unsigned f6 : 2;
   unsigned f7 : 11;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   unsigned f0 : 22;
   signed f1 : 14;
   unsigned f2 : 5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   signed f0 : 12;
   unsigned : 0;
};
#pragma pack(pop)

union U5 {
   uint8_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const int32_t  f3;
};

union U6 {
   uint16_t  f0;
   uint32_t  f1;
};


static int32_t g_4 = (-9L);
static int32_t g_7[4][6][7] = {{{1L,1L,0x49CFF29CL,1L,(-2L),0x81B5F7A0L,0xAF7BDD48L},{0x14F16367L,0x7C8A36A7L,0x36AE3D47L,0x14F16367L,0x846B51F0L,1L,0x846B51F0L},{0x57F39CEEL,0x49CFF29CL,0x49CFF29CL,0x57F39CEEL,0xAF7BDD48L,0x81B5F7A0L,(-2L)},{(-5L),0x7C8A36A7L,(-7L),(-5L),0x846B51F0L,0xD5228033L,0xE33ECDC0L},{0x57F39CEEL,1L,7L,0x57F39CEEL,(-2L),(-9L),(-2L)},{0x14F16367L,(-7L),(-7L),0x14F16367L,0xE33ECDC0L,0xD5228033L,0x846B51F0L}},{{1L,1L,0x49CFF29CL,1L,(-1L),(-6L),0x7B38E516L},{(-7L),0xD5228033L,(-1L),(-7L),0xFC7DF39FL,0x98963EC5L,0xFC7DF39FL},{0x49CFF29CL,(-9L),(-9L),0x49CFF29CL,0x7B38E516L,(-6L),(-1L)},{0x36AE3D47L,0xD5228033L,1L,0x36AE3D47L,0xFC7DF39FL,(-1L),0x4B2E809BL},{0x49CFF29CL,0x81B5F7A0L,1L,0x49CFF29CL,(-1L),0xA1172167L,(-1L)},{(-7L),1L,1L,(-7L),0x4B2E809BL,(-1L),0xFC7DF39FL}},{{7L,0x81B5F7A0L,(-9L),7L,(-1L),(-6L),0x7B38E516L},{(-7L),0xD5228033L,(-1L),(-7L),0xFC7DF39FL,0x98963EC5L,0xFC7DF39FL},{0x49CFF29CL,(-9L),(-9L),0x49CFF29CL,0x7B38E516L,(-6L),(-1L)},{0x36AE3D47L,0xD5228033L,1L,0x36AE3D47L,0xFC7DF39FL,(-1L),0x4B2E809BL},{0x49CFF29CL,0x81B5F7A0L,1L,0x49CFF29CL,(-1L),0xA1172167L,(-1L)},{(-7L),1L,1L,(-7L),0x4B2E809BL,(-1L),0xFC7DF39FL}},{{7L,0x81B5F7A0L,(-9L),7L,(-1L),(-6L),0x7B38E516L},{(-7L),0xD5228033L,(-1L),(-7L),0xFC7DF39FL,0x98963EC5L,0xFC7DF39FL},{0x49CFF29CL,(-9L),(-9L),0x49CFF29CL,0x7B38E516L,(-6L),(-1L)},{0x36AE3D47L,0xD5228033L,1L,0x36AE3D47L,0xFC7DF39FL,(-1L),0x4B2E809BL},{0x49CFF29CL,0x81B5F7A0L,1L,0x49CFF29CL,(-1L),0xA1172167L,(-1L)},{(-7L),1L,1L,(-7L),0x4B2E809BL,(-1L),0xFC7DF39FL}}};
static struct S3 g_20 = {500,-90,4};
static struct S3 *g_19 = &g_20;
static struct S3 **g_18 = &g_19;
static int32_t g_22 = (-5L);
static int32_t *g_44 = &g_22;
static uint32_t g_62[2] = {1UL,1UL};
static uint8_t g_67 = 0x6CL;
static struct S4 g_68 = {29};
static union U5 g_88 = {0UL};
static int16_t g_95 = 0xE566L;
static uint32_t g_96 = 18446744073709551613UL;
static uint32_t g_97 = 4294967288UL;
static int32_t **g_109[4] = {&g_44,&g_44,&g_44,&g_44};
static struct S0 g_114 = {179,40660,-4,16706,2607};
static struct S0 *g_113 = &g_114;
static struct S0 *g_116[1] = {(void*)0};
static uint16_t g_135 = 0UL;
static uint16_t g_142 = 0x84C1L;
static uint64_t g_146 = 0xCD532626EB52EEBBLL;
static int32_t g_169[3] = {0x2EBE5BDDL,0x2EBE5BDDL,0x2EBE5BDDL};
static struct S1 g_206 = {0x4BL,0x2F377F44L,0x9B1B637EL,0x3EBE08290AFDDB5ELL,{225,7283,-1,5963,1776},0x0FC9DB44L,3L,{398,20076,4,16810,988}};
static struct S1 *g_205 = &g_206;
static int64_t g_219 = 0xABC6312C1E3334ADLL;
static int32_t ****g_259 = (void*)0;
static union U5 g_261[7] = {{0xFEL},{0xFEL},{255UL},{0xFEL},{0xFEL},{255UL},{0xFEL}};
static uint32_t g_290 = 0x8D72D4DDL;
static struct S0 **g_353 = (void*)0;
static struct S4 *g_371 = &g_68;
static struct S4 **g_370 = &g_371;
static struct S1 g_386[3][4][5] = {{{{-1L,0L,0xF9D02D4AL,0xF3A3C741E7EFF916LL,{248,34721,-0,1992,264},4294967293UL,0x796509101B13EC8ELL,{-180,1486,-3,2248,2068}},{0L,-1L,0xB47E454DL,18446744073709551614UL,{59,19791,4,18620,2673},1UL,-4L,{-321,17971,-2,4009,3803}},{1L,1L,0x298B4E33L,1UL,{175,21867,2,145,3702},4294967294UL,0x724FF903EC2F4BA8LL,{445,28497,-4,9348,3948}},{-8L,1L,18446744073709551614UL,1UL,{159,23150,3,9612,1297},0x5A788E1EL,0x07EB40730A7747AFLL,{276,25819,2,4737,504}},{0x48L,2L,0xC3B6660DL,0xC9AE79BE786453BBLL,{-9,2118,-0,4476,1827},0UL,0x585D67A78EF364E8LL,{135,40535,0,12200,989}}},{{0x7BL,0xDCD3B6ADL,18446744073709551612UL,0UL,{-238,38115,-0,18877,1323},0xF2F5A14BL,0x4000F16202968CAFLL,{-196,12948,1,7280,2861}},{-1L,0xE96CAA05L,2UL,18446744073709551615UL,{-483,7438,0,22305,659},0xE7404803L,-10L,{-510,10832,1,6368,3620}},{-1L,0xE96CAA05L,2UL,18446744073709551615UL,{-483,7438,0,22305,659},0xE7404803L,-10L,{-510,10832,1,6368,3620}},{0x7BL,0xDCD3B6ADL,18446744073709551612UL,0UL,{-238,38115,-0,18877,1323},0xF2F5A14BL,0x4000F16202968CAFLL,{-196,12948,1,7280,2861}},{0xF3L,0x4D27D279L,4UL,0UL,{138,40035,4,7659,1660},0xDF1BAD5CL,0x9DA52F62424BF585LL,{340,1141,-3,10302,481}}},{{2L,0x1160D823L,0x16C547C9L,0x77AF8F90EE57200DLL,{-402,9039,2,14929,1483},0xED5D887FL,0x45AB81DD4E567DBCLL,{62,11297,-3,9252,4071}},{0x5AL,1L,0x50474A25L,0x692CA4C636CD6698LL,{-357,29427,-2,16632,714},0UL,1L,{-353,38858,3,5194,3638}},{1L,1L,0x298B4E33L,1UL,{175,21867,2,145,3702},4294967294UL,0x724FF903EC2F4BA8LL,{445,28497,-4,9348,3948}},{0x48L,2L,0xC3B6660DL,0xC9AE79BE786453BBLL,{-9,2118,-0,4476,1827},0UL,0x585D67A78EF364E8LL,{135,40535,0,12200,989}},{0L,-1L,0xB47E454DL,18446744073709551614UL,{59,19791,4,18620,2673},1UL,-4L,{-321,17971,-2,4009,3803}}},{{-1L,1L,0xC397C904L,0UL,{-358,34151,-2,8554,3828},4294967293UL,-1L,{427,2132,-3,10580,1739}},{0xC8L,-1L,18446744073709551610UL,18446744073709551610UL,{278,2686,3,12600,4044},4294967291UL,0xE8FC565E48E1CB92LL,{-114,42203,-0,18716,835}},{0xF3L,0x4D27D279L,4UL,0UL,{138,40035,4,7659,1660},0xDF1BAD5CL,0x9DA52F62424BF585LL,{340,1141,-3,10302,481}},{0xC8L,-1L,18446744073709551610UL,18446744073709551610UL,{278,2686,3,12600,4044},4294967291UL,0xE8FC565E48E1CB92LL,{-114,42203,-0,18716,835}},{-1L,1L,0xC397C904L,0UL,{-358,34151,-2,8554,3828},4294967293UL,-1L,{427,2132,-3,10580,1739}}}},{{{0x5AL,1L,0x50474A25L,0x692CA4C636CD6698LL,{-357,29427,-2,16632,714},0UL,1L,{-353,38858,3,5194,3638}},{-8L,1L,18446744073709551614UL,1UL,{159,23150,3,9612,1297},0x5A788E1EL,0x07EB40730A7747AFLL,{276,25819,2,4737,504}},{-1L,0L,0xF9D02D4AL,0xF3A3C741E7EFF916LL,{248,34721,-0,1992,264},4294967293UL,0x796509101B13EC8ELL,{-180,1486,-3,2248,2068}},{0x48L,2L,0xC3B6660DL,0xC9AE79BE786453BBLL,{-9,2118,-0,4476,1827},0UL,0x585D67A78EF364E8LL,{135,40535,0,12200,989}},{0xD9L,-8L,0xA6571AFBL,1UL,{-436,12089,2,9120,946},0xEC57822DL,0L,{-294,16106,3,16802,1985}}},{{1L,0x92EF1E78L,4UL,0UL,{-119,18623,2,21806,3835},4294967295UL,0x871BF9CC3CFD5BAALL,{310,9401,-1,8927,3467}},{1L,-9L,0UL,0xE27CAD9423AF846CLL,{-508,11393,-3,21584,2688},4294967295UL,6L,{293,1458,-1,18597,3542}},{0x7BL,0xDCD3B6ADL,18446744073709551612UL,0UL,{-238,38115,-0,18877,1323},0xF2F5A14BL,0x4000F16202968CAFLL,{-196,12948,1,7280,2861}},{0x7BL,0xDCD3B6ADL,18446744073709551612UL,0UL,{-238,38115,-0,18877,1323},0xF2F5A14BL,0x4000F16202968CAFLL,{-196,12948,1,7280,2861}},{1L,-9L,0UL,0xE27CAD9423AF846CLL,{-508,11393,-3,21584,2688},4294967295UL,6L,{293,1458,-1,18597,3542}}},{{-1L,0x2E9CEC52L,18446744073709551606UL,0x8FE2853FEF327549LL,{464,5322,3,13906,3403},2UL,0xC6929953DAB9E81ALL,{-473,16379,0,20396,1919}},{1L,1L,0x298B4E33L,1UL,{175,21867,2,145,3702},4294967294UL,0x724FF903EC2F4BA8LL,{445,28497,-4,9348,3948}},{2L,0x1160D823L,0x16C547C9L,0x77AF8F90EE57200DLL,{-402,9039,2,14929,1483},0xED5D887FL,0x45AB81DD4E567DBCLL,{62,11297,-3,9252,4071}},{-8L,1L,18446744073709551614UL,1UL,{159,23150,3,9612,1297},0x5A788E1EL,0x07EB40730A7747AFLL,{276,25819,2,4737,504}},{0xD9L,-8L,0xA6571AFBL,1UL,{-436,12089,2,9120,946},0xEC57822DL,0L,{-294,16106,3,16802,1985}}},{{0xC8L,-1L,18446744073709551610UL,18446744073709551610UL,{278,2686,3,12600,4044},4294967291UL,0xE8FC565E48E1CB92LL,{-114,42203,-0,18716,835}},{0x7BL,0xDCD3B6ADL,18446744073709551612UL,0UL,{-238,38115,-0,18877,1323},0xF2F5A14BL,0x4000F16202968CAFLL,{-196,12948,1,7280,2861}},{-1L,1L,0xC397C904L,0UL,{-358,34151,-2,8554,3828},4294967293UL,-1L,{427,2132,-3,10580,1739}},{1L,-3L,0x10792D11L,0xC3DF9600C165BA99LL,{-141,36896,-2,16874,996},0xC17993C8L,0x32952D9A9B596491LL,{-387,23147,-3,10260,832}},{-1L,1L,0xC397C904L,0UL,{-358,34151,-2,8554,3828},4294967293UL,-1L,{427,2132,-3,10580,1739}}}},{{{0xD9L,-8L,0xA6571AFBL,1UL,{-436,12089,2,9120,946},0xEC57822DL,0L,{-294,16106,3,16802,1985}},{0xD9L,-8L,0xA6571AFBL,1UL,{-436,12089,2,9120,946},0xEC57822DL,0L,{-294,16106,3,16802,1985}},{0x5AL,1L,0x50474A25L,0x692CA4C636CD6698LL,{-357,29427,-2,16632,714},0UL,1L,{-353,38858,3,5194,3638}},{-1L,0x2E9CEC52L,18446744073709551606UL,0x8FE2853FEF327549LL,{464,5322,3,13906,3403},2UL,0xC6929953DAB9E81ALL,{-473,16379,0,20396,1919}},{0L,-1L,0xB47E454DL,18446744073709551614UL,{59,19791,4,18620,2673},1UL,-4L,{-321,17971,-2,4009,3803}}},{{0xC8L,-1L,18446744073709551610UL,18446744073709551610UL,{278,2686,3,12600,4044},4294967291UL,0xE8FC565E48E1CB92LL,{-114,42203,-0,18716,835}},{0L,-1L,18446744073709551611UL,0xC160C6E5446FAC34LL,{-370,3934,-4,3318,2064},4UL,0xBDE6F79BACFFE447LL,{-444,23820,-4,22732,2950}},{1L,0x92EF1E78L,4UL,0UL,{-119,18623,2,21806,3835},4294967295UL,0x871BF9CC3CFD5BAALL,{310,9401,-1,8927,3467}},{0xF3L,0x4D27D279L,4UL,0UL,{138,40035,4,7659,1660},0xDF1BAD5CL,0x9DA52F62424BF585LL,{340,1141,-3,10302,481}},{0xF3L,0x4D27D279L,4UL,0UL,{138,40035,4,7659,1660},0xDF1BAD5CL,0x9DA52F62424BF585LL,{340,1141,-3,10302,481}}},{{-1L,0x2E9CEC52L,18446744073709551606UL,0x8FE2853FEF327549LL,{464,5322,3,13906,3403},2UL,0xC6929953DAB9E81ALL,{-473,16379,0,20396,1919}},{-6L,-5L,18446744073709551610UL,0x64D7081F3FBCB827LL,{-102,26847,1,6239,1604},4294967295UL,0x896BF1FCE55A843ELL,{504,32911,-1,18953,2219}},{-8L,1L,18446744073709551614UL,1UL,{159,23150,3,9612,1297},0x5A788E1EL,0x07EB40730A7747AFLL,{276,25819,2,4737,504}},{1L,1L,0x298B4E33L,1UL,{175,21867,2,145,3702},4294967294UL,0x724FF903EC2F4BA8LL,{445,28497,-4,9348,3948}},{0L,-1L,0xB47E454DL,18446744073709551614UL,{59,19791,4,18620,2673},1UL,-4L,{-321,17971,-2,4009,3803}}},{{0xF3L,0x4D27D279L,4UL,0UL,{138,40035,4,7659,1660},0xDF1BAD5CL,0x9DA52F62424BF585LL,{340,1141,-3,10302,481}},{-1L,1L,0xC397C904L,0UL,{-358,34151,-2,8554,3828},4294967293UL,-1L,{427,2132,-3,10580,1739}},{7L,0x1E6C8FC4L,0x45E9724EL,18446744073709551611UL,{506,22440,-0,13332,2994},0x985E8B3BL,1L,{-99,45672,3,4847,984}},{0x7BL,0xDCD3B6ADL,18446744073709551612UL,0UL,{-238,38115,-0,18877,1323},0xF2F5A14BL,0x4000F16202968CAFLL,{-196,12948,1,7280,2861}},{0L,-1L,18446744073709551611UL,0xC160C6E5446FAC34LL,{-370,3934,-4,3318,2064},4UL,0xBDE6F79BACFFE447LL,{-444,23820,-4,22732,2950}}}}};
static int64_t g_440 = 0x337F2BB46EC19138LL;
static const int32_t g_494 = 0x117839A3L;
static const int32_t g_496 = 0x42DDA5D0L;
static const int32_t *g_495 = &g_496;
static const int32_t *g_497 = &g_88.f2;
static int64_t *g_500 = &g_386[0][1][4].f6;
static int64_t **g_499 = &g_500;
static struct S2 g_505 = {111,2,-4389,-18,623,610,1,1};
static union U6 g_528 = {0x53F0L};
static int32_t *g_584 = (void*)0;
static int32_t **g_583[5][7] = {{&g_584,(void*)0,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584,&g_584}};
static int8_t g_627 = 0x7DL;
static int32_t ** const *g_668 = &g_109[3];
static int32_t ** const ** const g_667[2] = {&g_668,&g_668};
static int32_t ** const ** const *g_666 = &g_667[1];
static int32_t * const **g_680 = (void*)0;
static const uint8_t g_689 = 0xAAL;
static uint32_t *g_715[1][7][2] = {{{&g_206.f5,&g_206.f5},{&g_206.f5,&g_206.f5},{&g_206.f5,&g_206.f5},{&g_206.f5,&g_206.f5},{&g_206.f5,&g_206.f5},{&g_206.f5,&g_206.f5},{&g_206.f5,&g_206.f5}}};
static uint32_t **g_714 = &g_715[0][2][1];
static uint64_t g_774 = 0UL;
static uint64_t g_808 = 18446744073709551615UL;
static const struct S0 *g_833 = &g_386[0][1][4].f7;
static const struct S0 **g_832 = &g_833;
static const struct S0 ***g_831 = &g_832;
static const struct S0 ****g_830 = &g_831;
static struct S0 ***g_912[1][3][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_353,&g_353,&g_353,&g_353,&g_353},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static struct S0 ****g_911 = &g_912[0][0][4];
static struct S0 *****g_910[1][1][6] = {{{&g_911,&g_911,&g_911,&g_911,&g_911,&g_911}}};
static struct S0 g_1075 = {231,41251,2,19859,3663};
static struct S0 g_1076 = {-173,35457,-0,20436,4078};
static struct S0 * const g_1074[5] = {&g_1076,&g_1076,&g_1076,&g_1076,&g_1076};
static struct S0 * const *g_1073[3] = {&g_1074[2],&g_1074[2],&g_1074[2]};
static struct S0 * const **g_1072 = &g_1073[0];
static struct S0 * const ***g_1071[4] = {&g_1072,&g_1072,&g_1072,&g_1072};
static struct S0 * const ****g_1070 = &g_1071[2];
static const uint8_t **g_1135 = (void*)0;
static union U5 *g_1144 = &g_261[3];
static union U5 **g_1143 = &g_1144;
static int16_t **g_1153 = (void*)0;
static int16_t ***g_1152[2][7] = {{&g_1153,&g_1153,&g_1153,&g_1153,&g_1153,&g_1153,&g_1153},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int16_t ****g_1151[7] = {&g_1152[0][6],&g_1152[0][6],&g_1152[0][6],&g_1152[0][6],&g_1152[0][6],&g_1152[0][6],&g_1152[0][6]};
static uint32_t ***g_1198 = &g_714;
static uint32_t ****g_1197 = &g_1198;
static const struct S4 g_1218 = {-25};
static int64_t g_1322 = 0x8E671F03B8924CEDLL;
static uint32_t g_1349[2][4][1] = {{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}},{{4294967293UL},{4294967293UL},{4294967293UL},{4294967293UL}}};
static union U5 g_1394 = {0xFEL};
static uint16_t *g_1417[3][5][3] = {{{(void*)0,&g_528.f0,&g_142},{&g_528.f0,(void*)0,&g_528.f0},{&g_528.f0,&g_528.f0,&g_135},{(void*)0,(void*)0,&g_135},{(void*)0,&g_528.f0,&g_528.f0}},{{(void*)0,&g_528.f0,&g_142},{&g_528.f0,(void*)0,&g_528.f0},{&g_528.f0,&g_528.f0,&g_135},{(void*)0,(void*)0,&g_135},{(void*)0,&g_528.f0,&g_528.f0}},{{(void*)0,&g_528.f0,&g_142},{&g_528.f0,(void*)0,&g_528.f0},{&g_528.f0,&g_528.f0,&g_135},{(void*)0,(void*)0,&g_135},{(void*)0,&g_528.f0,&g_528.f0}}};
static union U5 ***g_1459[7] = {&g_1143,&g_1143,&g_1143,&g_1143,&g_1143,&g_1143,&g_1143};
static union U5 ****g_1458[6][1][2] = {{{&g_1459[5],&g_1459[1]}},{{&g_1459[5],&g_1459[5]}},{{&g_1459[1],&g_1459[5]}},{{&g_1459[5],&g_1459[1]}},{{&g_1459[5],&g_1459[5]}},{{&g_1459[1],&g_1459[5]}}};
static union U5 *****g_1457 = &g_1458[1][0][1];
static uint32_t g_1468 = 0x7AB4BAB8L;
static struct S3 * const g_1582 = &g_20;
static uint32_t g_1666 = 0UL;
static int16_t ** const *g_1742 = &g_1153;
static int16_t ** const **g_1741[4][3][3] = {{{&g_1742,&g_1742,&g_1742},{&g_1742,&g_1742,&g_1742},{&g_1742,&g_1742,&g_1742}},{{&g_1742,&g_1742,&g_1742},{(void*)0,&g_1742,&g_1742},{&g_1742,&g_1742,&g_1742}},{{&g_1742,&g_1742,&g_1742},{(void*)0,&g_1742,&g_1742},{&g_1742,&g_1742,&g_1742}},{{&g_1742,&g_1742,&g_1742},{(void*)0,&g_1742,&g_1742},{&g_1742,&g_1742,&g_1742}}};
static const int64_t ***g_1748 = (void*)0;
static const int64_t ****g_1747 = &g_1748;



static uint16_t  func_1(void);
static struct S3 ** func_10(struct S0  p_11, struct S3 * const  p_12, union U6  p_13, int32_t  p_14);
static struct S0  func_15(const struct S3 * p_16, struct S3 ** p_17);
static struct S3 ** func_27(union U5  p_28, const struct S2  p_29, int32_t * p_30);
static union U5  func_31(const uint64_t  p_32, struct S1  p_33, int32_t * p_34, struct S2  p_35);
static struct S1  func_36(int32_t * p_37, struct S0  p_38, int32_t * p_39, int32_t  p_40, const int16_t  p_41);
static int32_t * func_50(union U5  p_51);
static union U5  func_52(int16_t  p_53, struct S3 * const * p_54, int16_t  p_55, uint32_t  p_56);




static uint16_t  func_1(void)
{ 
    struct S3 l_2 = {1987,-30,0};
    struct S3 *l_3 = &l_2;
    const int64_t *****l_1749[6] = {&g_1747,(void*)0,(void*)0,&g_1747,(void*)0,(void*)0};
    int32_t *l_1750 = &g_7[3][4][5];
    struct S1 *l_1751 = (void*)0;
    int i;
    (*l_3) = l_2;
    for (g_4 = 0; (g_4 > 25); ++g_4)
    { 
        struct S3 **l_1746 = &l_3;
        for (g_7[3][4][5] = 18; (g_7[3][4][5] >= 16); g_7[3][4][5] = safe_sub_func_int8_t_s_s(g_7[3][4][5], 4))
        { 
            struct S3 ***l_1745 = &g_18;
        }
    }
    g_1747 = g_1747;
    for (g_88.f1 = 0; (g_88.f1 <= 0); g_88.f1 += 1)
    { 
        (****g_666) = l_1750;
        for (g_67 = 0; (g_67 <= 0); g_67 += 1)
        { 
            struct S1 **l_1752 = (void*)0;
            struct S1 **l_1753 = &l_1751;
            int32_t l_1758[5][4][3] = {{{0xD0EC7A0BL,0xD0EC7A0BL,0x69A177F7L},{0x33B8EF7AL,0x69A177F7L,0x69A177F7L},{0x69A177F7L,5L,(-1L)},{0x33B8EF7AL,5L,0x33B8EF7AL}},{{0xD0EC7A0BL,0x69A177F7L,(-1L)},{0xD0EC7A0BL,0xD0EC7A0BL,0x69A177F7L},{0x33B8EF7AL,0x69A177F7L,0x69A177F7L},{0x69A177F7L,5L,(-1L)}},{{0x33B8EF7AL,5L,0x33B8EF7AL},{0xD0EC7A0BL,0x69A177F7L,(-1L)},{0xD0EC7A0BL,0xD0EC7A0BL,0x69A177F7L},{0x33B8EF7AL,0x69A177F7L,0x69A177F7L}},{{0x69A177F7L,5L,(-1L)},{0x33B8EF7AL,5L,0x33B8EF7AL},{0xD0EC7A0BL,0x69A177F7L,(-1L)},{0xD0EC7A0BL,0xD0EC7A0BL,0x69A177F7L}},{{0x33B8EF7AL,0x69A177F7L,0x69A177F7L},{0x69A177F7L,5L,(-1L)},{0x33B8EF7AL,5L,0x33B8EF7AL},{0xD0EC7A0BL,0x69A177F7L,(-1L)}}};
            int i, j, k;
            (*l_1753) = l_1751;
            for (g_774 = 0; (g_774 <= 5); g_774 += 1)
            { 
                for (g_97 = 0; (g_97 <= 5); g_97 += 1)
                { 
                    int i, j, k;
                    (*g_370) = ((g_1349[(g_67 + 1)][(g_67 + 2)][g_88.f1] || (safe_lshift_func_int8_t_s_s(g_96, (0xB722F503L > (l_1758[0][1][1] != (*l_1750)))))) , (*g_370));
                }
                g_666 = &g_667[1];
                if ((*g_497))
                    continue;
                if (l_1758[0][1][1])
                    continue;
            }
        }
    }
    return (*l_1750);
}



static struct S3 ** func_10(struct S0  p_11, struct S3 * const  p_12, union U6  p_13, int32_t  p_14)
{ 
    struct S0 **l_1583 = &g_116[0];
    uint64_t *l_1584 = &g_808;
    int32_t l_1591[1];
    uint32_t *l_1598[5][5][6] = {{{&g_62[0],&g_62[1],(void*)0,&g_206.f5,&g_1349[0][0][0],&g_386[0][1][4].f5},{(void*)0,&g_206.f5,&g_290,(void*)0,&g_97,&g_97},{&g_97,(void*)0,&g_206.f5,&g_1468,&g_1349[0][3][0],(void*)0},{&g_206.f5,(void*)0,&g_62[0],&g_62[1],(void*)0,&g_62[1]},{&g_62[0],&g_206.f5,&g_1349[0][3][0],&g_206.f5,&g_62[0],&g_386[0][1][4].f5}},{{&g_1349[0][3][0],&g_62[0],&g_97,(void*)0,&g_290,&g_1349[0][0][0]},{&g_206.f5,&g_1349[0][3][0],(void*)0,&g_62[0],&g_62[1],&g_1349[0][0][0]},{&g_1349[0][3][0],&g_1349[0][3][0],&g_97,&g_62[0],&g_97,&g_386[0][1][4].f5},{&g_62[1],&g_206.f5,&g_1349[0][3][0],&g_206.f5,&g_386[0][1][4].f5,&g_62[1]},{&g_290,(void*)0,&g_62[0],&g_1349[0][3][0],&g_206.f5,(void*)0}},{{&g_1349[1][0][0],&g_386[0][1][4].f5,&g_206.f5,&g_62[1],&g_290,&g_97},{&g_386[0][1][4].f5,&g_97,&g_290,&g_290,&g_97,&g_386[0][1][4].f5},{(void*)0,&g_206.f5,(void*)0,&g_206.f5,(void*)0,&g_97},{(void*)0,&g_62[0],&g_97,&g_290,&g_1349[1][0][0],&g_1349[0][3][0]},{(void*)0,&g_97,&g_290,&g_206.f5,&g_1349[0][3][0],&g_206.f5}},{{(void*)0,(void*)0,&g_206.f5,&g_290,&g_386[0][1][4].f5,&g_206.f5},{&g_97,&g_1349[0][3][0],&g_1349[0][3][0],&g_1349[0][3][0],&g_1349[1][0][0],&g_206.f5},{(void*)0,&g_1349[0][3][0],&g_290,&g_62[0],&g_206.f5,&g_1349[1][0][0]},{&g_62[0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_290,&g_1349[0][3][0],&g_62[1],&g_1349[0][3][0],&g_1349[1][1][0],&g_1349[0][0][0]}},{{&g_1349[0][3][0],&g_62[1],&g_62[0],&g_1349[1][0][0],&g_97,&g_62[0]},{&g_97,&g_62[1],(void*)0,(void*)0,&g_1349[1][1][0],(void*)0},{&g_1349[0][0][0],&g_1349[0][3][0],&g_206.f5,&g_97,(void*)0,&g_97},{(void*)0,(void*)0,&g_290,&g_290,&g_206.f5,&g_386[0][1][4].f5},{&g_386[0][1][4].f5,&g_1349[0][3][0],&g_1468,&g_206.f5,&g_1349[1][0][0],&g_1349[0][3][0]}}};
    int32_t *l_1602 = &g_386[0][1][4].f1;
    struct S2 l_1644 = {3,1,-7961,4,348,324,0,32};
    int16_t l_1697 = 0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1591[i] = 0L;
    if ((((*l_1584) |= ((void*)0 == l_1583)) , (+1L)))
    { 
        uint16_t l_1594 = 0xEAD4L;
        int32_t l_1595 = 1L;
        int32_t l_1597[1];
        uint32_t l_1618 = 0x5BD6C920L;
        uint32_t l_1622[4] = {0xB0870E4CL,0xB0870E4CL,0xB0870E4CL,0xB0870E4CL};
        int32_t *l_1654 = &l_1597[0];
        struct S3 l_1657[7] = {{1111,18,1},{1111,18,1},{1111,18,1},{1111,18,1},{1111,18,1},{1111,18,1},{1111,18,1}};
        int i;
        for (i = 0; i < 1; i++)
            l_1597[i] = 0x537C2FFBL;
        (**g_668) = (void*)0;
        for (g_88.f1 = 0; (g_88.f1 >= 51); ++g_88.f1)
        { 
            int32_t *l_1588 = &g_206.f1;
            int32_t l_1599 = 0x8BE8CC4EL;
            int32_t l_1610[3][4][4] = {{{0x36F93016L,0xEDDE949BL,0L,0xEDDE949BL},{1L,1L,(-3L),0x187B1115L},{1L,0x7BA853D8L,1L,1L},{0x7BA853D8L,0xEDDE949BL,1L,0x36F93016L}},{{0x7BA853D8L,(-9L),1L,0L},{1L,0x36F93016L,(-3L),(-3L)},{1L,1L,0L,0x36F93016L},{0x36F93016L,1L,5L,0xEDDE949BL}},{{(-9L),0x7BA853D8L,(-3L),5L},{0xEDDE949BL,0x7BA853D8L,0x6A0E7F77L,0xEDDE949BL},{0x7BA853D8L,1L,(-9L),0x36F93016L},{1L,1L,1L,(-3L)}}};
            int16_t l_1613 = 2L;
            uint32_t l_1651 = 0x5E713A5EL;
            struct S3 **l_1655 = &g_19;
            int i, j, k;
            (*l_1588) = 9L;
            if ((l_1599 &= ((*l_1588) = ((safe_sub_func_int8_t_s_s(l_1591[0], (l_1597[0] &= (safe_mod_func_int16_t_s_s((l_1595 = l_1594), (~0xDE259E9A21BE0E78LL)))))) && ((((p_11.f4 != (1UL && (((void*)0 != l_1598[3][4][2]) , (**g_499)))) < 250UL) > l_1597[0]) ^ p_11.f1)))))
            { 
                int32_t l_1604 = 7L;
                int32_t l_1609 = (-1L);
                int32_t l_1611 = 0xE5BD4E96L;
                int32_t l_1612 = 0x7360E5F2L;
                int32_t l_1614 = (-1L);
                int32_t l_1615 = 0x366218E1L;
                int32_t l_1616 = 0x726121A8L;
                int32_t l_1617 = 0xBBB1E925L;
                (*l_1588) |= (0x09AD8F77L && ((***g_1198)++));
                for (l_1599 = 2; (l_1599 >= 0); l_1599 -= 1)
                { 
                    int32_t *l_1603 = &g_206.f1;
                    int32_t *l_1605 = &g_22;
                    int32_t *l_1606 = &g_1394.f2;
                    int32_t *l_1607 = &g_22;
                    int32_t *l_1608[4];
                    uint32_t l_1621[6][6] = {{0x0FB6358FL,0x0FB6358FL,0xB3EFD046L,0x0FB6358FL,0x0FB6358FL,0xB3EFD046L},{0x0FB6358FL,0x0FB6358FL,0xB3EFD046L,0x0FB6358FL,0x0FB6358FL,0xB3EFD046L},{0x0FB6358FL,0x0FB6358FL,0xB3EFD046L,0x0FB6358FL,0x0FB6358FL,0xB3EFD046L},{0x0FB6358FL,0x0FB6358FL,0xB3EFD046L,0x0FB6358FL,0x0FB6358FL,0xB3EFD046L},{0x0FB6358FL,0x0FB6358FL,0xB3EFD046L,0x0FB6358FL,0x0FB6358FL,0xB3EFD046L},{0x0FB6358FL,0x0FB6358FL,0xB3EFD046L,0x0FB6358FL,0x0FB6358FL,0xB3EFD046L}};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1608[i] = &g_1394.f2;
                    (*l_1588) &= 0L;
                    l_1602 = &p_14;
                    l_1603 = ((**g_668) = &l_1591[0]);
                    ++l_1618;
                    (*g_44) ^= l_1621[5][4];
                }
                for (l_1609 = 0; (l_1609 <= 3); l_1609 += 1)
                { 
                    int32_t l_1625 = 0x537E2500L;
                    uint8_t *l_1626 = &g_1394.f0;
                    uint8_t *l_1631 = &g_261[3].f0;
                    int32_t l_1640 = 0x915C693BL;
                    int32_t l_1641 = (-3L);
                    if (l_1622[3])
                        break;
                    (*l_1588) = ((g_20.f2 != (l_1595 & (((p_14 , ((safe_mul_func_int8_t_s_s(l_1625, (++(*l_1626)))) & (safe_lshift_func_int8_t_s_u((l_1641 = (((*l_1631)++) ^ (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((65535UL || (l_1640 = (-1L))) <= ((9UL & p_14) != p_11.f3)), 4)), l_1612)))), 5)))) && (**g_499)) < p_14))) || g_386[0][1][4].f4.f0);
                    p_11.f0 = (*l_1588);
                }
            }
            else
            { 
                uint64_t l_1647 = 9UL;
                int32_t l_1648 = 0x657A92F9L;
                for (g_528.f0 = 0; (g_528.f0 <= 0); g_528.f0 += 1)
                { 
                    int32_t *l_1649 = &l_1595;
                    int32_t *l_1650 = (void*)0;
                    if (p_11.f1)
                        break;
                    l_1648 &= ((*l_1588) = (((((safe_mod_func_uint16_t_u_u(((p_13.f0 |= 0x6A7EL) , (p_11.f0 || (((**g_499) = (l_1644 , (safe_rshift_func_uint8_t_u_s(g_386[0][1][4].f0, g_114.f0)))) & (((l_1647 < (0xD2B24915L <= (*g_495))) >= l_1618) == p_11.f0)))), p_11.f1)) && 0xB6L) ^ l_1597[0]) == p_14) >= p_11.f4));
                    if (l_1597[0])
                        continue;
                    --l_1651;
                }
                l_1654 = &l_1648;
                if ((*l_1588))
                { 
                    return l_1655;
                }
                else
                { 
                    int32_t *l_1656 = &l_1591[0];
                    (**g_668) = &l_1610[1][0][0];
                    l_1654 = l_1656;
                }
                (**g_370) = (**g_370);
            }
            (*p_12) = l_1657[4];
        }
        for (p_13.f0 = 17; (p_13.f0 < 20); p_13.f0 = safe_add_func_uint64_t_u_u(p_13.f0, 3))
        { 
            return &g_19;
        }
    }
    else
    { 
        int8_t l_1664 = 0x61L;
        int32_t l_1692 = (-1L);
        int32_t l_1698[2][4][7] = {{{0x3769F574L,0x49015175L,0x3769F574L,(-1L),0x3769F574L,0x49015175L,0x3769F574L},{0x88A91E79L,0x1EEE8470L,1L,6L,6L,1L,0x1EEE8470L},{0x8C978059L,0x49015175L,1L,0x49015175L,0x8C978059L,0x49015175L,1L},{6L,6L,1L,0x1EEE8470L,0x88A91E79L,0x88A91E79L,0x1EEE8470L}},{{0x3769F574L,(-1L),0x3769F574L,0x49015175L,0x3769F574L,(-1L),0x3769F574L},{6L,0x1EEE8470L,0x1EEE8470L,6L,0x88A91E79L,1L,1L},{0x8C978059L,(-1L),1L,(-1L),0x8C978059L,(-1L),1L},{0x88A91E79L,6L,0x1EEE8470L,0x1EEE8470L,6L,0x88A91E79L,1L}}};
        struct S0 **l_1713 = &g_116[0];
        int i, j, k;
lbl_1687:
        for (g_627 = 0; (g_627 > 24); ++g_627)
        { 
            for (g_290 = (-24); (g_290 >= 48); ++g_290)
            { 
                int32_t *l_1665[6][4] = {{&g_206.f1,&g_206.f1,&g_206.f1,&g_206.f1},{&g_206.f1,&g_206.f1,&g_206.f1,&g_206.f1},{&g_206.f1,&g_206.f1,&g_206.f1,&g_206.f1},{&g_206.f1,&g_206.f1,&g_206.f1,&g_206.f1},{&g_206.f1,&g_206.f1,&g_206.f1,&g_206.f1},{&g_206.f1,&g_206.f1,&g_206.f1,&g_206.f1}};
                int i, j;
                ++g_1666;
                (*g_371) = (*g_371);
                return &g_19;
            }
        }
        for (g_528.f0 = 12; (g_528.f0 >= 27); ++g_528.f0)
        { 
            uint32_t l_1679 = 0x9F9AD67FL;
            uint32_t l_1684 = 0UL;
            int32_t l_1696 = 1L;
            int32_t l_1699 = 0x493A8745L;
            int32_t l_1727[7][4] = {{0L,0L,0x18F94554L,0x62A6DCB2L},{0x62A6DCB2L,0xDAEAE97BL,0x18F94554L,0xDAEAE97BL},{0L,2L,0L,0x18F94554L},{0xDAEAE97BL,2L,2L,0xDAEAE97BL},{2L,0xDAEAE97BL,0L,0x62A6DCB2L},{2L,0L,2L,0L},{0xDAEAE97BL,0x62A6DCB2L,0L,0L}};
            struct S1 **l_1732 = &g_205;
            int16_t l_1739 = 0L;
            int i, j;
            (*g_44) &= (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((g_169[2] && (((((safe_rshift_func_int8_t_s_u(((-4L) | l_1679), 7)) && (((void*)0 != &g_667[1]) ^ 0x91502E7EL)) , ((safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(l_1664, l_1684)), 8)) & p_13.f0)) ^ 4294967288UL) == (*g_495))), (-1L))) ^ 18446744073709551606UL), l_1679));
            for (g_206.f6 = (-23); (g_206.f6 <= 0); g_206.f6 = safe_add_func_int16_t_s_s(g_206.f6, 8))
            { 
                int8_t l_1694 = 0x52L;
                int32_t l_1695[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1695[i] = 0x04FD2718L;
                for (g_206.f1 = 0; (g_206.f1 <= 6); g_206.f1 += 1)
                { 
                    int32_t *l_1688 = &l_1591[0];
                    int32_t *l_1689 = &g_386[0][1][4].f1;
                    int32_t *l_1690 = &g_1394.f2;
                    int32_t *l_1691 = &g_22;
                    int32_t *l_1693[5] = {&g_4,&g_4,&g_4,&g_4,&g_4};
                    uint8_t l_1700 = 0x80L;
                    struct S3 l_1711 = {1767,79,4};
                    uint16_t *l_1712 = &g_142;
                    const struct S0 **l_1714 = &g_833;
                    struct S1 **l_1733[6] = {&g_205,&g_205,&g_205,&g_205,&g_205,&g_205};
                    int16_t ** const ***l_1743 = (void*)0;
                    int16_t ** const ***l_1744 = &g_1741[1][2][0];
                    int i;
                    if (g_68.f0)
                        goto lbl_1687;
                    l_1700++;
                    (*****g_666) |= (~(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(l_1695[0])), (((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((l_1711 , ((*l_1712) = l_1695[0])), (l_1713 != l_1714))) ^ (safe_lshift_func_int16_t_s_u(p_11.f4, 12))), 4)) & p_11.f2) ^ l_1696))) == (-1L)) > p_11.f0));
                    (*****g_666) = (safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((6UL | (++(****g_1197))), l_1727[3][3])), (((**g_499) = l_1692) && (((p_11.f2 |= ((2L > ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(((((*g_500) = ((l_1732 == l_1733[4]) , (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((((!((p_11.f3 || l_1739) , 0x48L)) || (**g_499)) && (*l_1691)), p_13.f0)), p_11.f1)))) != g_142) <= 0xF5B62FF7D8709AADLL), 3)) || 0xC762302B895CA447LL), 14)) <= g_206.f7.f1)) <= l_1664)) != 1L) & 0L)))), l_1698[0][3][6])) >= g_290), p_13.f0));
                    (*l_1689) ^= (l_1727[3][3] && ((~(0xC8A35D3E1991F57FLL >= ((((*l_1744) = g_1741[0][2][0]) == &g_1152[0][6]) != ((p_11.f0 < p_11.f1) == p_14)))) || p_11.f3));
                }
                if (l_1644.f4)
                    goto lbl_1687;
            }
        }
    }
    return &g_19;
}



static struct S0  func_15(const struct S3 * p_16, struct S3 ** p_17)
{ 
    uint64_t l_24 = 3UL;
    struct S0 l_42 = {336,23094,1,13200,776};
    int32_t *l_45[4][4] = {{&g_22,&g_4,&g_22,&g_22},{&g_4,&g_4,&g_7[0][5][0],&g_4},{&g_4,&g_22,&g_22,&g_4},{&g_22,&g_4,&g_22,&g_22}};
    int32_t *l_1209[1];
    int16_t **l_1226 = (void*)0;
    struct S0 l_1242 = {-363,28828,-0,3695,2231};
    const struct S3 l_1289 = {229,-54,2};
    int32_t l_1311 = 0L;
    const int32_t *l_1319 = &g_169[2];
    const int32_t * const *l_1318 = &l_1319;
    int32_t l_1320 = 1L;
    uint8_t l_1321 = 0x79L;
    uint16_t l_1323 = 0UL;
    uint64_t l_1324 = 1UL;
    struct S1 **l_1367 = &g_205;
    union U5 l_1422 = {6UL};
    int8_t l_1428 = 0x6DL;
    int32_t ***l_1433[6] = {&g_109[1],&g_109[1],&g_109[1],&g_109[1],&g_109[1],&g_109[1]};
    int32_t *** const *l_1432 = &l_1433[3];
    int32_t *** const ** const l_1431 = &l_1432;
    uint64_t l_1436 = 0x1072E4AE0D8D9D4CLL;
    int16_t *l_1437[6][6] = {{(void*)0,(void*)0,&g_95,(void*)0,(void*)0,&g_95},{&g_95,(void*)0,&g_95,(void*)0,&g_95,&g_95},{&g_95,(void*)0,&g_95,&g_95,(void*)0,&g_95},{&g_95,(void*)0,&g_95,(void*)0,(void*)0,&g_95},{&g_95,&g_95,&g_95,(void*)0,(void*)0,&g_95},{(void*)0,(void*)0,&g_95,(void*)0,(void*)0,&g_95}};
    int8_t l_1438[5][5] = {{0L,0L,0x79L,0x79L,0L},{0xF1L,0xF8L,0xF1L,0xF8L,0xF1L},{0L,0x79L,0x79L,0L,0L},{0x3BL,0xF8L,0x3BL,0xF8L,0x3BL},{0L,0L,0x79L,0x79L,0L}};
    union U5 * const *l_1455[1];
    union U5 * const **l_1454[5][2][4] = {{{&l_1455[0],(void*)0,(void*)0,&l_1455[0]},{&l_1455[0],&l_1455[0],(void*)0,&l_1455[0]}},{{&l_1455[0],&l_1455[0],&l_1455[0],&l_1455[0]},{&l_1455[0],(void*)0,&l_1455[0],&l_1455[0]}},{{&l_1455[0],&l_1455[0],&l_1455[0],&l_1455[0]},{&l_1455[0],&l_1455[0],&l_1455[0],&l_1455[0]}},{{&l_1455[0],(void*)0,&l_1455[0],&l_1455[0]},{&l_1455[0],(void*)0,&l_1455[0],&l_1455[0]}},{{&l_1455[0],(void*)0,&l_1455[0],&l_1455[0]},{(void*)0,&l_1455[0],&l_1455[0],(void*)0}}};
    union U5 * const ***l_1453 = &l_1454[0][1][3];
    union U5 * const ****l_1452 = &l_1453;
    uint64_t l_1471 = 0UL;
    uint32_t l_1505[3];
    int32_t *l_1507 = &g_386[0][1][4].f1;
    union U6 l_1534 = {0x2690L};
    struct S4 l_1570 = {-4};
    uint8_t l_1579 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1209[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1455[i] = &g_1144;
    for (i = 0; i < 3; i++)
        l_1505[i] = 1UL;
    return l_1242;
}



static struct S3 ** func_27(union U5  p_28, const struct S2  p_29, int32_t * p_30)
{ 
    union U5 ***l_1211 = &g_1143;
    union U5 ****l_1210 = &l_1211;
    union U5 *****l_1212 = &l_1210;
    struct S3 **l_1213 = &g_19;
    (*l_1212) = l_1210;
    return l_1213;
}



static union U5  func_31(const uint64_t  p_32, struct S1  p_33, int32_t * p_34, struct S2  p_35)
{ 
    union U5 l_1208 = {9UL};
    for (p_33.f6 = 0; (p_33.f6 > (-1)); p_33.f6 = safe_sub_func_uint8_t_u_u(p_33.f6, 1))
    { 
        struct S3 *l_1206[6] = {&g_20,&g_20,&g_20,&g_20,&g_20,&g_20};
        union U5 l_1207 = {0xCFL};
        int i;
        (*g_18) = l_1206[5];
        return l_1207;
    }
    return l_1208;
}



static struct S1  func_36(int32_t * p_37, struct S0  p_38, int32_t * p_39, int32_t  p_40, const int16_t  p_41)
{ 
    struct S3 * const *l_57 = (void*)0;
    int32_t *l_58 = &g_4;
    uint32_t *l_61 = &g_62[0];
    int32_t l_63 = 4L;
    uint8_t *l_66 = &g_67;
    int32_t l_957 = (-10L);
    int32_t l_958 = 4L;
    int32_t ***l_987 = (void*)0;
    int32_t ****l_986[5][2][3] = {{{&l_987,(void*)0,&l_987},{&l_987,&l_987,&l_987}},{{&l_987,&l_987,&l_987},{&l_987,(void*)0,&l_987}},{{&l_987,&l_987,&l_987},{&l_987,&l_987,&l_987}},{{&l_987,(void*)0,&l_987},{&l_987,&l_987,&l_987}},{{&l_987,&l_987,&l_987},{&l_987,(void*)0,&l_987}}};
    struct S1 l_991 = {0x4AL,2L,0xFD4CD47CL,1UL,{-477,11012,1,10390,1458},4294967292UL,0x134005EC9EC5C0D1LL,{489,18499,2,10081,1272}};
    int32_t l_1005 = 7L;
    int32_t l_1008[5] = {0x83BF9FF8L,0x83BF9FF8L,0x83BF9FF8L,0x83BF9FF8L,0x83BF9FF8L};
    struct S3 l_1043 = {1199,-43,0};
    int64_t l_1087 = 0L;
    uint32_t l_1089[4];
    const uint32_t **l_1136 = (void*)0;
    int16_t *l_1150 = (void*)0;
    int16_t **l_1149 = &l_1150;
    int16_t ***l_1148 = &l_1149;
    int16_t ****l_1147[7][5][2] = {{{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0}},{{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148}},{{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0}},{{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148}},{{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0}},{{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148}},{{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0},{&l_1148,&l_1148},{&l_1148,(void*)0}}};
    union U5 l_1163[3] = {{0x78L},{0x78L},{0x78L}};
    uint64_t l_1170 = 0xBF96E3C41BFFEA54LL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1089[i] = 0UL;
    (**g_668) = func_50(func_52(g_7[1][4][1], l_57, (((l_58 != (void*)0) | (safe_lshift_func_int16_t_s_u((((*l_61) = g_20.f2) | l_63), (safe_mod_func_int32_t_s_s((((*l_66) |= g_20.f2) != 1UL), (*g_44)))))) , g_67), p_41));
    if ((*p_37))
    { 
        int32_t *l_950 = &g_261[3].f2;
        int32_t *l_951 = &g_22;
        int32_t *l_952 = &g_88.f2;
        int32_t *l_953 = (void*)0;
        int32_t *l_954 = &g_22;
        int32_t *l_955 = &g_386[0][1][4].f1;
        int32_t *l_956[6][3][3] = {{{&g_22,&g_7[2][1][0],&g_22},{&g_22,&g_22,&g_22},{&g_22,&g_7[2][1][0],&g_22}},{{&g_22,&g_22,&g_22},{&g_22,&g_7[2][1][0],&g_22},{&g_22,&g_22,&g_22}},{{&g_22,&g_7[2][1][0],&g_22},{&g_22,&g_22,&g_22},{&g_22,&g_7[2][1][0],&g_22}},{{&g_22,&g_22,&g_22},{&g_22,&g_7[2][1][0],&g_22},{&g_22,&g_22,&g_22}},{{&g_22,&g_7[2][1][0],&g_22},{&g_22,&g_22,&g_22},{&g_22,&g_7[2][1][0],&g_22}},{{&g_22,&g_22,&g_22},{&g_22,&g_7[2][1][0],&g_22},{&g_22,&g_22,&g_22}}};
        uint16_t l_959[6] = {65535UL,0xEB29L,65535UL,65535UL,0xEB29L,65535UL};
        uint16_t *l_966 = (void*)0;
        uint16_t *l_967 = (void*)0;
        uint16_t *l_968[4] = {&l_959[5],&l_959[5],&l_959[5],&l_959[5]};
        int16_t *l_971[7] = {&g_95,&g_95,&g_95,&g_95,&g_95,&g_95,&g_95};
        struct S3 *l_976[4][4][3] = {{{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20},{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20},{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20},{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20}},{{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20},{&g_20,&g_20,&g_20},{(void*)0,&g_20,&g_20}}};
        struct S1 l_980 = {1L,0xB877D6BFL,0xE9A83AF0L,0xA87CF5CB407D2BD7LL,{474,31783,-3,136,1136},0x8D1E77B3L,1L,{189,13434,0,4984,334}};
        struct S2 l_985 = {105,2,-7359,-11,823,43,1,31};
        struct S0 *l_988 = &g_206.f4;
        int i, j, k;
        --l_959[0];
        (**g_668) = (****g_666);
        if (((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((g_135++), ((*l_954) = ((void*)0 == &g_95)))), 1)) , 0x6D4BED0BL))
        { 
            (*l_955) = (*l_58);
        }
        else
        { 
            struct S3 *l_975 = &g_20;
            struct S3 **l_977[4];
            int32_t l_978 = 0L;
            int i;
            for (i = 0; i < 4; i++)
                l_977[i] = &l_976[2][3][1];
            (*l_952) = (((safe_add_func_int8_t_s_s(((+(l_975 != (l_976[0][0][0] = l_976[0][2][2]))) >= ((l_978 < (~0xB9042520L)) >= (((*l_950) = ((*g_205) , (*l_58))) ^ (((*l_61) = p_40) , (*l_58))))), 255UL)) <= (*l_955)) < p_40);
            (*l_952) |= (*p_39);
            return l_980;
        }
        (*l_951) ^= ((*l_955) = ((*l_952) = ((safe_sub_func_int8_t_s_s(p_38.f1, (safe_rshift_func_uint8_t_u_s((l_985 , 0x16L), 4)))) != ((l_986[3][1][2] == (void*)0) & 0x7AA8L))));
        (***g_830) = l_988;
    }
    else
    { 
        uint32_t l_992 = 1UL;
        int32_t l_1002 = 0x13377593L;
        int32_t l_1003 = 0x29AD67D7L;
        int32_t l_1004[5][1][5] = {{{1L,1L,(-8L),0xEEE7AC73L,(-8L)}},{{0L,0L,0xBB23A95BL,(-4L),0xBB23A95BL}},{{1L,1L,(-8L),0xEEE7AC73L,(-8L)}},{{0L,0L,0xBB23A95BL,(-4L),0xBB23A95BL}},{{1L,1L,(-8L),0xEEE7AC73L,(-8L)}}};
        union U5 l_1015[5][5] = {{{6UL},{255UL},{6UL},{255UL},{6UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{6UL},{255UL},{6UL},{255UL},{6UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{6UL},{255UL},{6UL},{255UL},{6UL}}};
        union U5 l_1029 = {1UL};
        uint16_t l_1032 = 0x2FC3L;
        struct S3 l_1042[2][1][7] = {{{{175,-92,1},{1322,75,2},{856,-56,3},{1322,75,2},{175,-92,1},{2002,-89,3},{2002,-89,3}}},{{{175,-92,1},{1322,75,2},{856,-56,3},{1322,75,2},{175,-92,1},{2002,-89,3},{2002,-89,3}}}};
        union U5 *l_1047 = &l_1015[3][0];
        union U5 **l_1046 = &l_1047;
        int64_t *l_1053 = (void*)0;
        struct S2 l_1054 = {20,1,-12704,-4,626,572,1,41};
        const int16_t *l_1134 = &g_95;
        const int8_t l_1138 = (-2L);
        uint32_t ****l_1199 = &g_1198;
        int32_t **l_1200 = (void*)0;
        int32_t **l_1201 = &l_58;
        int i, j, k;
        for (g_88.f0 = (-27); (g_88.f0 > 56); g_88.f0 = safe_add_func_int64_t_s_s(g_88.f0, 1))
        { 
            return l_991;
        }
        l_992 |= 1L;
        if ((*p_39))
        { 
            struct S1 l_996 = {0xCAL,0x3A66D697L,0xBC13CA30L,0x0A517B52E000FD91LL,{-468,33025,-2,12252,354},0x5983449FL,0xC61639320E004E2BLL,{-311,32420,4,9435,3281}};
            int32_t l_1009 = 0x47809A75L;
            const struct S4 l_1013 = {50};
            struct S3 *l_1014[2][2][1] = {{{&g_20},{&g_20}},{{&g_20},{&g_20}}};
            uint64_t l_1037[7] = {0xBE70A44658F4226ELL,0xBE70A44658F4226ELL,0xBE70A44658F4226ELL,0xBE70A44658F4226ELL,0xBE70A44658F4226ELL,0xBE70A44658F4226ELL,0xBE70A44658F4226ELL};
            struct S0 * const **l_1069 = (void*)0;
            struct S0 * const ***l_1068 = &l_1069;
            struct S0 * const ****l_1067 = &l_1068;
            int i, j, k;
            for (g_88.f0 = (-11); (g_88.f0 > 58); g_88.f0 = safe_add_func_int32_t_s_s(g_88.f0, 1))
            { 
                int32_t l_995[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_995[i] = 0x46856C4DL;
                for (g_528.f1 = 0; (g_528.f1 <= 0); g_528.f1 += 1)
                { 
                    int i;
                    l_995[0] = g_62[g_528.f1];
                    return l_996;
                }
            }
            for (l_996.f0 = 0; (l_996.f0 >= 0); l_996.f0 -= 1)
            { 
                uint64_t l_1010[5] = {0x8C8F5E0F464F5A76LL,0x8C8F5E0F464F5A76LL,0x8C8F5E0F464F5A76LL,0x8C8F5E0F464F5A76LL,0x8C8F5E0F464F5A76LL};
                const struct S3 l_1026 = {221,-45,1};
                uint16_t *l_1038 = &g_135;
                int32_t l_1039 = 0xA1A4D796L;
                union U5 ***l_1048 = &l_1046;
                int i;
                for (g_22 = 1; (g_22 <= 4); g_22 += 1)
                { 
                    int32_t *l_997 = &l_958;
                    int32_t *l_998 = &g_88.f2;
                    int32_t *l_999 = (void*)0;
                    int32_t *l_1000 = &g_88.f2;
                    int32_t *l_1001[5] = {&g_261[3].f2,&g_261[3].f2,&g_261[3].f2,&g_261[3].f2,&g_261[3].f2};
                    int32_t l_1006 = 0x39F0E136L;
                    int16_t l_1007 = 0x0C0CL;
                    int i;
                    l_1010[4]--;
                    (**g_668) = l_997;
                    (*g_371) = l_1013;
                    (*g_18) = l_1014[0][0][0];
                }
                l_58 = (****g_666);
                if (((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_996.f7.f1, (l_1029 , (**g_714)))), p_38.f1)) & 0x2BE093CBL))
                { 
                    int64_t l_1030 = (-2L);
                    int32_t *l_1031 = &l_996.f1;
                    (*l_1031) = (l_1030 = (0x2AE07B7BL == p_38.f4));
                    l_1032--;
                    l_1037[0] = (safe_lshift_func_int16_t_s_u((g_386[0][1][4].f7.f4 & g_774), 8));
                    l_1039 = (&g_142 != l_1038);
                }
                else
                { 
                    union U5 *l_1041 = &l_1029;
                    union U5 **l_1040 = &l_1041;
                    (*l_1040) = &g_88;
                    if (l_1010[0])
                        break;
                    return (*g_205);
                }
                l_1043 = l_1042[1][0][4];
                if ((0xBF76L == ((safe_div_func_uint64_t_u_u(((((0xAD80L == ((l_1013 , ((*l_1048) = l_1046)) != (void*)0)) && ((((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((*g_499) == l_1053), 1UL)), p_38.f0)) > (-6L)) , l_1054) , p_41)) > (*p_39)) >= g_7[3][4][5]), l_996.f7.f4)) <= p_40)))
                { 
                    p_39 = (**g_668);
                    return l_991;
                }
                else
                { 
                    struct S0 * const *l_1066 = &g_116[0];
                    struct S0 * const **l_1065 = &l_1066;
                    struct S0 * const ***l_1064 = &l_1065;
                    struct S0 * const **** const l_1063 = &l_1064;
                    int32_t l_1088[3];
                    int32_t *l_1090 = &g_261[3].f2;
                    struct S1 **l_1092 = &g_205;
                    struct S1 ***l_1091 = &l_1092;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1088[i] = 0xD1E8AC44L;
                    l_957 = ((((safe_lshift_func_int8_t_s_u(p_40, 0)) <= ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((((**g_370) = l_1013) , l_1063) == (g_1070 = l_1067)), (safe_mod_func_int32_t_s_s(l_996.f7.f4, (safe_rshift_func_uint16_t_u_s(g_206.f3, ((safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(0xA7ADL, g_528.f0)) > 0x42L), 0x74AEL)) || 0xCA5097E4DF37C724LL), (**g_714))) , l_1087))))))), 10)) > l_1088[0])) == l_1089[1]) != (**g_499));
                    l_1088[0] |= (*p_39);
                    (*l_1090) = (*p_37);
                    if ((*p_37))
                        break;
                    (*l_1091) = &g_205;
                }
                for (g_206.f2 = 0; (g_206.f2 <= 4); g_206.f2 += 1)
                { 
                    int32_t l_1093 = 0x4831E712L;
                    l_1003 |= (l_1004[3][0][3] = l_1093);
                }
            }
            return (*g_205);
        }
        else
        { 
            union U6 l_1096[1] = {{8UL}};
            struct S3 l_1098 = {1243,-76,1};
            uint64_t *l_1105 = &g_774;
            uint64_t *l_1120 = &g_206.f3;
            int32_t *l_1121 = (void*)0;
            int32_t *l_1122 = (void*)0;
            int32_t *l_1123 = &g_386[0][1][4].f1;
            const uint32_t ***l_1137 = &l_1136;
            struct S2 l_1158[2] = {{39,0,-1957,10,782,487,0,6},{39,0,-1957,10,782,487,0,6}};
            int32_t l_1164 = 0xBB423B86L;
            uint32_t l_1165 = 18446744073709551609UL;
            struct S4 l_1166 = {53};
            int32_t *l_1168 = &l_1015[0][3].f2;
            int32_t *l_1169[6] = {&l_1003,(void*)0,&l_1003,&l_1003,(void*)0,&l_1003};
            struct S1 l_1196 = {9L,0xD1525B18L,0UL,18446744073709551608UL,{264,40337,-4,10051,3201},4294967287UL,0xCC8B2CDCE9F01473LL,{-489,4447,-2,15258,2117}};
            int i;
            (*l_1123) |= (safe_lshift_func_uint8_t_u_s((l_1096[0] , g_114.f1), ((((+(l_1098 , (safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_unary_minus_func_uint64_t_u(((*l_1105)++))) >= (((-7L) == ((*l_1120) = (safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((*g_205) , ((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((*p_39) != ((safe_mod_func_uint16_t_u_u((((safe_div_func_int32_t_s_s(l_1098.f2, 0x6310CD49L)) > p_38.f3) == 0x0E070973L), p_38.f3)) > 0x2DA3L)) == p_38.f2), 8)) | l_1098.f2), g_627)) >= 1UL)), p_38.f3)), 0x9BL)))) || l_1054.f7)))), 18446744073709551614UL)), (**g_499))))) <= 0xDAL) == g_386[0][1][4].f0) , p_38.f3)));
            if (((l_1042[1][0][4] , (((*l_1137) = ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((&l_66 != ((safe_mod_func_uint64_t_u_u(g_22, ((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((l_1042[1][0][4] , &p_41) == l_1134) == ((**g_714) > 0UL)), 0x53L)), p_38.f0)) | 0UL))) , g_1135)), 5)), g_808)) , l_1136)) == (void*)0)) < l_1138))
            { 
                for (g_22 = (-23); (g_22 == 13); g_22 = safe_add_func_int16_t_s_s(g_22, 9))
                { 
                    union U5 ***l_1145 = (void*)0;
                    union U5 ***l_1146 = &l_1046;
                    p_38.f2 ^= (safe_add_func_int16_t_s_s((((*l_1146) = g_1143) != (void*)0), (p_39 == (void*)0)));
                    g_1151[5] = l_1147[4][1][0];
                }
            }
            else
            { 
                struct S1 l_1156 = {0xE8L,0x0E193A97L,6UL,1UL,{472,2289,0,8089,2244},0xF67B4732L,-1L,{-69,16660,4,21738,1229}};
                int8_t *l_1167 = &l_1156.f0;
                for (l_992 = 0; (l_992 >= 8); l_992 = safe_add_func_uint8_t_u_u(l_992, 8))
                { 
                    int64_t l_1157 = 0x216A104B900795B7LL;
                    l_991.f4.f0 ^= ((*l_1123) &= (l_1156 , (((l_1157 <= p_38.f3) || (l_1158[0] , (safe_div_func_uint8_t_u_u(2UL, ((*l_66) |= ((((safe_mod_func_int32_t_s_s(((((**g_1143) , l_1163[1]) , 0x44L) != p_41), (-8L))) >= p_38.f1) > l_1164) , l_1165)))))) == (*p_37))));
                    if ((*l_1123))
                        break;
                }
                (*l_1123) = (p_38.f2 >= (((*g_371) = l_1166) , ((*l_1167) = g_62[1])));
            }
            l_1170--;
            for (g_206.f2 = 27; (g_206.f2 >= 35); g_206.f2++)
            { 
                struct S2 l_1187 = {109,1,1860,13,228,592,1,41};
                uint8_t *l_1188 = (void*)0;
                uint8_t *l_1189 = &g_261[3].f0;
                p_38.f2 |= ((safe_sub_func_int64_t_s_s(((1L ^ (*l_58)) == (-1L)), (l_1004[3][0][3] &= (p_38.f0 ^ (l_1029.f2 = (0x6519L >= p_38.f3)))))) | (safe_lshift_func_uint8_t_u_u(((*l_66) |= (((***g_1072) , 18446744073709551613UL) & 0x711A90091FB506D0LL)), (*l_58))));
                (*l_1123) ^= (((*l_1105) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_66)--), ((safe_lshift_func_uint8_t_u_s((((void*)0 != &g_500) , ((*l_1189) &= (l_1054.f5 ^ (l_1187 , (*p_37))))), (((safe_div_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_1187.f3, (-7L))), (-1L))) | (*l_58)), l_1054.f1)) > l_1187.f5) , l_1187.f7))) == 247UL))), g_386[0][1][4].f7.f1))) , (*p_37));
                return l_1196;
            }
            l_1199 = g_1197;
        }
        (*l_1201) = ((****g_666) = &l_1002);
    }
    return l_991;
}



static int32_t * func_50(union U5  p_51)
{ 
    struct S0 l_779 = {249,43777,3,11902,2115};
    uint8_t *l_782 = &g_88.f0;
    uint8_t *l_783 = &g_67;
    struct S2 l_784 = {48,3,8717,-0,1003,676,1,19};
    struct S0 **l_790[5] = {&g_116[0],&g_116[0],&g_116[0],&g_116[0],&g_116[0]};
    struct S0 **l_791 = &g_116[0];
    int32_t l_814[6][7][6] = {{{2L,(-1L),1L,5L,0x5D85BDEEL,0xE0B28D5FL},{9L,0xA21A741CL,(-2L),(-2L),0xA21A741CL,9L},{0x922E3538L,2L,0x2E02A4A4L,(-1L),(-10L),0xF587A6EFL},{1L,0xA2B325E8L,1L,0x5D85BDEEL,1L,0x70C2814FL},{1L,0L,0x5D85BDEEL,(-1L),0x2260C732L,0L},{0x922E3538L,(-10L),1L,(-2L),1L,(-1L)},{9L,0x74D3B3C9L,2L,(-5L),1L,0xD5B1AB09L}},{{0x1A8301E1L,0xCCBE23EAL,0x4EC86B65L,(-10L),0xA3A77780L,0x74D3B3C9L},{0L,1L,1L,0x70C2814FL,0xA21A741CL,0xC36A7DB6L},{1L,2L,4L,0xBB4FCBB4L,0xC36A7DB6L,1L},{0x4EC86B65L,0xE8164DB3L,0L,1L,0xC5BE975AL,0x9ECB24C4L},{(-1L),0L,0xE8164DB3L,0xE5F40AF1L,5L,0L},{0x3F89658EL,0x84D04D2EL,(-1L),1L,0x5D85BDEEL,0xBB4FCBB4L},{0xA3A77780L,0x30E26333L,0xC5BE975AL,1L,0xEBDB215DL,(-7L)}},{{(-7L),(-1L),0xE5F40AF1L,(-1L),0xE5F40AF1L,(-1L)},{0x70C2814FL,0x752D074AL,0L,0x84D04D2EL,(-9L),2L},{1L,0xA21A741CL,5L,0L,2L,3L},{0L,0xA21A741CL,1L,1L,(-9L),1L},{0x2E02A4A4L,0x752D074AL,0x5D96A820L,(-1L),0xE5F40AF1L,1L},{9L,(-1L),4L,0xC79E5F0FL,0xEBDB215DL,0xEF02B606L},{4L,0x30E26333L,1L,0x1B812497L,0x5D85BDEEL,0x84D04D2EL}},{{1L,0x84D04D2EL,9L,0xE8164DB3L,5L,1L},{(-1L),0L,1L,0xA21A741CL,0xC5BE975AL,3L},{0xBB4FCBB4L,0xE8164DB3L,0x2E02A4A4L,0xEF02B606L,0xC36A7DB6L,1L},{0x5D85BDEEL,2L,0x18322B58L,0L,0xA21A741CL,(-5L)},{0xD5B1AB09L,1L,1L,0x438ED6AFL,0xA3A77780L,8L},{(-1L),0xCCBE23EAL,0x74D3B3C9L,0x571686B3L,1L,1L},{0x922E3538L,0x5D85BDEEL,(-1L),(-5L),(-5L),(-1L)}},{{0xC79E5F0FL,0xC79E5F0FL,0x1A8301E1L,1L,0L,0xE5F40AF1L},{0xEBDB215DL,0x2260C732L,(-9L),0x3F89658EL,0L,0x1A8301E1L},{(-1L),0xEBDB215DL,(-9L),1L,0xC79E5F0FL,0xE5F40AF1L},{0xC5BE975AL,1L,0x1A8301E1L,0x74D3B3C9L,1L,(-1L)},{0x74D3B3C9L,1L,(-1L),(-1L),8L,1L},{0x1B812497L,(-2L),0x74D3B3C9L,0x33EAAE4AL,3L,8L},{3L,0x5D96A820L,1L,4L,1L,(-5L)}},{{(-10L),0L,0x18322B58L,0x5D85BDEEL,1L,1L},{(-2L),0xC36A7DB6L,0x2E02A4A4L,0xA3A77780L,0x84D04D2EL,3L},{(-1L),1L,1L,0x922E3538L,0xDA7E7600L,1L},{0xCCBE23EAL,0xBB4FCBB4L,0x30E26333L,0x2260C732L,0x74D3B3C9L,1L},{0x922E3538L,(-2L),0L,0x5D96A820L,0xD5B1AB09L,0xE8164DB3L},{0x2260C732L,0x752D074AL,(-10L),0x9ECB24C4L,4L,0x9ECB24C4L},{1L,(-10L),1L,0x70C2814FL,0xCCBE23EAL,0x1B812497L}}};
    int8_t l_816 = 0x1FL;
    const uint32_t l_841[1] = {0xC86F8C13L};
    int16_t *l_882[7][7][3] = {{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}}};
    struct S4 l_906 = {40};
    struct S3 *l_908 = &g_20;
    struct S1 l_928 = {0x7BL,0x87CA02AAL,0xADCA1DC0L,18446744073709551615UL,{328,28742,-2,470,465},3UL,0x170BD258BCEC050DLL,{-456,12,3,9688,261}};
    int16_t * const *l_934 = &l_882[3][3][2];
    uint8_t l_941 = 0xA2L;
    int32_t *l_949 = &g_4;
    int i, j, k;
    if (((((safe_mod_func_int32_t_s_s((l_779 , (((*l_783) &= ((*l_782) |= g_62[0])) ^ ((g_505.f1 ^ 3UL) < (0x33A6L ^ (l_784.f2 = (l_784 , (safe_add_func_int8_t_s_s((~(g_505.f1 < g_206.f4.f2)), 0xD5L)))))))), 0x05A5AD29L)) < p_51.f0) || g_627) ^ (-8L)))
    { 
        uint16_t l_788 = 3UL;
        struct S0 ***l_789 = (void*)0;
        int32_t *l_799 = &g_386[0][1][4].f1;
        if (((l_788 || (l_788 ^ ((l_790[4] = (void*)0) == l_791))) != 0x14464BE126111057LL))
        { 
            for (g_97 = (-24); (g_97 >= 31); ++g_97)
            { 
                int32_t *l_794 = &g_22;
                (*l_794) &= (*****g_666);
                if (l_788)
                    break;
            }
        }
        else
        { 
            uint16_t l_800 = 0x773FL;
            for (g_206.f5 = 0; (g_206.f5 == 50); g_206.f5 = safe_add_func_uint8_t_u_u(g_206.f5, 1))
            { 
                for (g_206.f2 = 0; (g_206.f2 > 50); g_206.f2++)
                { 
                    struct S3 l_801[1][4][1] = {{{{1508,97,4}},{{559,95,3}},{{1508,97,4}},{{559,95,3}}}};
                    struct S3 *l_803[4][2];
                    struct S3 **l_802 = &l_803[3][1];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_803[i][j] = &g_20;
                    }
                    l_799 = (void*)0;
                    l_800 ^= p_51.f0;
                    (*l_802) = ((*g_18) = (l_801[0][3][0] , &g_20));
                }
            }
            g_808 = (safe_mul_func_int8_t_s_s(7L, (safe_lshift_func_uint16_t_u_u(g_206.f0, 14))));
        }
    }
    else
    { 
        int32_t *l_809 = &g_386[0][1][4].f1;
        int32_t *l_810 = (void*)0;
        int32_t *l_811 = &g_88.f2;
        int32_t *l_812[6][6][7] = {{{&g_7[3][0][6],&g_7[0][1][5],&g_4,&g_386[0][1][4].f1,&g_4,&g_7[0][1][5],&g_7[3][0][6]},{&g_4,&g_386[0][1][4].f1,(void*)0,(void*)0,&g_7[3][4][5],&g_386[0][1][4].f1,&g_7[3][4][5]},{&g_4,&g_4,&g_386[0][1][4].f1,&g_22,&g_386[0][1][4].f1,&g_4,&g_7[3][4][5]},{(void*)0,&g_7[3][4][5],&g_7[3][4][5],&g_206.f1,&g_7[3][3][5],&g_7[3][4][5],(void*)0},{(void*)0,&g_4,&g_4,&g_22,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_7[3][4][5],&g_261[3].f2,&g_7[3][3][5],&g_4,(void*)0}},{{&g_7[3][4][5],&g_4,&g_386[0][1][4].f1,&g_22,&g_386[0][1][4].f1,&g_4,&g_7[3][4][5]},{(void*)0,&g_7[3][4][5],&g_7[3][4][5],&g_206.f1,&g_7[3][3][5],&g_7[3][4][5],(void*)0},{(void*)0,&g_4,&g_4,&g_22,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_7[3][4][5],&g_261[3].f2,&g_7[3][3][5],&g_4,(void*)0},{&g_7[3][4][5],&g_4,&g_386[0][1][4].f1,&g_22,&g_386[0][1][4].f1,&g_4,&g_7[3][4][5]},{(void*)0,&g_7[3][4][5],&g_7[3][4][5],&g_206.f1,&g_7[3][3][5],&g_7[3][4][5],(void*)0}},{{(void*)0,&g_4,&g_4,&g_22,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_7[3][4][5],&g_261[3].f2,&g_7[3][3][5],&g_4,(void*)0},{&g_7[3][4][5],&g_4,&g_386[0][1][4].f1,&g_22,&g_386[0][1][4].f1,&g_4,&g_7[3][4][5]},{(void*)0,&g_7[3][4][5],&g_7[3][4][5],&g_206.f1,&g_7[3][3][5],&g_7[3][4][5],(void*)0},{(void*)0,&g_4,&g_4,&g_22,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_7[3][4][5],&g_261[3].f2,&g_7[3][3][5],&g_4,(void*)0}},{{&g_7[3][4][5],&g_4,&g_386[0][1][4].f1,&g_22,&g_386[0][1][4].f1,&g_4,&g_7[3][4][5]},{(void*)0,&g_7[3][4][5],&g_7[3][4][5],&g_206.f1,&g_7[3][3][5],&g_7[3][4][5],(void*)0},{(void*)0,&g_4,&g_4,&g_22,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_7[3][4][5],&g_261[3].f2,&g_7[3][3][5],&g_4,(void*)0},{&g_7[3][4][5],&g_4,&g_386[0][1][4].f1,&g_22,&g_386[0][1][4].f1,&g_4,&g_7[3][4][5]},{(void*)0,&g_7[3][4][5],&g_7[3][4][5],&g_206.f1,&g_7[3][3][5],&g_7[3][4][5],(void*)0}},{{(void*)0,&g_4,&g_4,&g_22,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_7[3][4][5],&g_261[3].f2,&g_7[3][3][5],&g_4,(void*)0},{&g_7[3][4][5],&g_4,&g_386[0][1][4].f1,&g_22,&g_386[0][1][4].f1,&g_4,&g_7[3][4][5]},{(void*)0,&g_7[3][4][5],&g_7[3][4][5],&g_206.f1,&g_7[3][3][5],&g_7[3][4][5],(void*)0},{(void*)0,&g_4,&g_4,&g_22,&g_4,&g_4,(void*)0},{(void*)0,&g_4,&g_7[3][4][5],&g_22,&g_386[0][1][4].f1,(void*)0,&g_261[3].f2}},{{(void*)0,&g_386[0][1][4].f1,&g_7[3][4][5],&g_22,&g_7[3][4][5],&g_386[0][1][4].f1,(void*)0},{&g_206.f1,(void*)0,&g_7[1][3][2],&g_7[1][5][2],&g_386[0][1][4].f1,(void*)0,&g_261[3].f2},{&g_386[0][1][4].f1,&g_386[0][1][4].f1,&g_4,&g_22,&g_4,&g_386[0][1][4].f1,&g_386[0][1][4].f1},{&g_206.f1,(void*)0,&g_7[1][3][2],&g_22,&g_386[0][1][4].f1,(void*)0,&g_261[3].f2},{(void*)0,&g_386[0][1][4].f1,&g_7[3][4][5],&g_22,&g_7[3][4][5],&g_386[0][1][4].f1,(void*)0},{&g_206.f1,(void*)0,&g_7[1][3][2],&g_7[1][5][2],&g_386[0][1][4].f1,(void*)0,&g_261[3].f2}}};
        int32_t l_813 = 0xE0ACF52EL;
        int32_t l_815[3][6] = {{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}};
        uint32_t l_817 = 4294967291UL;
        struct S0 ***l_829 = (void*)0;
        struct S0 *** const *l_828 = &l_829;
        const int16_t *l_881[3];
        int32_t *****l_886 = &g_259;
        int32_t *****l_887 = &g_259;
        uint32_t l_917 = 8UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_881[i] = &g_95;
        l_817++;
        for (g_206.f1 = 3; (g_206.f1 >= 0); g_206.f1 -= 1)
        { 
            int16_t *l_848 = &g_95;
            uint16_t *l_849 = (void*)0;
            uint16_t *l_850[5][5][1] = {{{&g_135},{&g_135},{&g_142},{(void*)0},{&g_142}},{{&g_135},{&g_135},{(void*)0},{(void*)0},{(void*)0}},{{&g_135},{&g_135},{&g_142},{(void*)0},{&g_142}},{{&g_135},{&g_135},{(void*)0},{(void*)0},{(void*)0}},{{&g_135},{&g_135},{&g_142},{(void*)0},{&g_142}}};
            int32_t l_851 = 0x5415DD08L;
            int32_t *l_875[7];
            union U5 l_880 = {4UL};
            struct S0 l_885[4][1] = {{{-12,9512,-3,1280,2156}},{{-12,9512,-3,1280,2156}},{{-12,9512,-3,1280,2156}},{{-12,9512,-3,1280,2156}}};
            struct S3 *l_907 = &g_20;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_875[i] = &l_815[2][0];
        }
        for (g_206.f3 = (-17); (g_206.f3 != 52); ++g_206.f3)
        { 
            int32_t *l_948 = (void*)0;
            return l_948;
        }
    }
    return l_949;
}



static union U5  func_52(int16_t  p_53, struct S3 * const * p_54, int16_t  p_55, uint32_t  p_56)
{ 
    struct S2 l_71 = {122,2,-15859,-0,135,67,1,6};
    int32_t *l_89[1];
    int8_t l_93 = 8L;
    int8_t *l_94[6][3][5] = {{{&l_93,(void*)0,&l_93,(void*)0,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,(void*)0,&l_93,(void*)0,&l_93}},{{&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,(void*)0,&l_93,(void*)0,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93}},{{&l_93,(void*)0,&l_93,(void*)0,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,(void*)0,&l_93,(void*)0,&l_93}},{{&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,(void*)0,&l_93,(void*)0,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93}},{{&l_93,(void*)0,&l_93,(void*)0,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,(void*)0,&l_93,(void*)0,&l_93}},{{&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,(void*)0,&l_93,(void*)0,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93}}};
    uint32_t l_98 = 0xD51AC0D5L;
    uint32_t l_156 = 0x9DC3F5DAL;
    union U5 l_170 = {3UL};
    uint8_t l_199 = 0x84L;
    struct S3 l_238 = {191,5,4};
    uint8_t l_254 = 0x31L;
    int64_t *l_285 = (void*)0;
    struct S0 **l_296[4][6] = {{&g_113,&g_116[0],&g_116[0],&g_116[0],&g_113,&g_113},{&g_113,&g_116[0],&g_113,&g_116[0],&g_113,&g_116[0]},{&g_116[0],&g_113,&g_116[0],&g_113,&g_113,&g_116[0]},{&g_116[0],&g_116[0],&g_113,&g_116[0],&g_113,&g_116[0]}};
    int32_t ***l_328 = &g_109[1];
    int32_t ****l_327 = &l_328;
    uint16_t *l_341 = (void*)0;
    struct S4 *l_362 = &g_68;
    struct S4 **l_373 = &g_371;
    int16_t l_430 = (-10L);
    uint16_t l_562 = 0x2075L;
    struct S0 ***l_586 = &g_353;
    struct S0 ****l_585 = &l_586;
    int8_t l_628 = 1L;
    uint16_t *l_664 = &g_142;
    int16_t l_703[2];
    uint32_t l_758 = 4294967292UL;
    int8_t l_773 = 4L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_89[i] = &g_22;
    for (i = 0; i < 2; i++)
        l_703[i] = 0xD074L;
    for (p_56 = 0; p_56 < 2; p_56 += 1)
    {
        g_62[p_56] = 0x54A90BB5L;
    }
    if (((((g_68 , ((p_56 | (safe_add_func_int64_t_s_s((l_71 , (safe_add_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(l_71.f0, (safe_add_func_int32_t_s_s((((+(g_97 = (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((+(safe_mul_func_int16_t_s_s((((g_96 = (g_95 = (safe_rshift_func_uint16_t_u_s(((((g_88 , (g_88.f2 = p_56)) > (((((~(safe_sub_func_uint32_t_u_u((l_89[0] != &g_7[3][0][0]), (*g_44)))) & l_93) , l_89[0]) != (void*)0) ^ 0x1577CD18L)) , 0L) , p_53), p_53)))) != 0x4AL) , p_53), 0UL))) , p_55), p_55)), 5L)))) != l_98) , 0x5F8F1AF8L), 0x487E53E2L)))) && p_53), 0xF153L))), p_56))) & g_20.f0)) < p_53) == 1UL) != p_56))
    { 
        uint32_t l_101 = 0UL;
        int32_t **l_105 = &g_44;
        int32_t l_121 = 0x5E426DA7L;
        struct S3 *l_143 = &g_20;
        int32_t l_161 = 1L;
        int32_t l_177 = 0xBA33B8EDL;
        int32_t l_191 = 0x87EE9551L;
        int32_t l_192 = 1L;
        int32_t l_194 = (-6L);
        int32_t l_195 = 1L;
        int32_t l_196 = (-2L);
        int32_t l_197 = (-1L);
        int32_t l_198[3][5][2] = {{{0L,0x0B852C9FL},{6L,0L},{0xEFD0CC27L,0xEFD0CC27L},{0x7533681BL,0xD838E576L},{6L,1L}},{{0xD838E576L,0x0B852C9FL},{(-1L),0xD838E576L},{0xEFD0CC27L,0x7533681BL},{0xEFD0CC27L,0xD838E576L},{(-1L),0x0B852C9FL}},{{0xD838E576L,1L},{6L,0xD838E576L},{0x7533681BL,0xEFD0CC27L},{0xEFD0CC27L,0L},{6L,0x0B852C9FL}}};
        uint8_t l_220 = 0xB9L;
        struct S0 l_230 = {-54,332,-4,15591,837};
        int16_t l_246 = (-10L);
        struct S0 l_264 = {-359,13255,4,10653,2805};
        union U6 l_267 = {0x133EL};
        uint16_t *l_272 = &g_135;
        uint64_t *l_283 = (void*)0;
        int32_t *l_284 = &g_169[1];
        int i, j, k;
        l_101 = (safe_lshift_func_int8_t_s_u((l_71 , g_20.f2), 0));
        for (g_67 = 0; (g_67 <= 0); g_67 += 1)
        { 
            uint8_t * const l_102 = (void*)0;
            int32_t l_103 = (-1L);
            int32_t l_104[4][1][1] = {{{(-5L)}},{{0x4891CAF8L}},{{(-5L)}},{{0x4891CAF8L}}};
            int32_t ***l_106 = &l_105;
            int32_t l_155[5];
            int32_t *l_208 = (void*)0;
            int32_t l_243 = (-1L);
            uint8_t l_249 = 0xF0L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_155[i] = 4L;
            l_103 = (l_102 != (void*)0);
            l_103 = ((p_53 >= (((void*)0 != l_89[g_67]) ^ l_104[2][0][0])) ^ (((*l_106) = l_105) != (g_20.f2 , (((safe_div_func_int8_t_s_s((0xB5522D6D4F0C1114LL != p_53), p_55)) || 1L) , g_109[1]))));
        }
        l_198[1][0][0] |= ((((safe_div_func_int8_t_s_s((((l_264 , (l_195 ^= ((safe_sub_func_int8_t_s_s(((((((l_267 , &g_19) == (((*l_284) &= ((safe_mod_func_int32_t_s_s((g_88 , (safe_mod_func_uint16_t_u_u((++(*l_272)), ((g_206.f2 == ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((0x646D64D6B0D7B6BBLL | ((void*)0 == l_283)), 0x3C2AL)), g_206.f2)), 0x24FFL)), p_56)) , p_56)) | g_68.f0)))), (**l_105))) | g_7[1][0][6])) , (void*)0)) || p_55) == (**l_105)) && 0x84EDC7A9L) >= 0L), p_53)) == 1L))) , l_283) != l_285), 0x8BL)) , p_55) <= 1L) == 0x9DD3L);
        for (l_246 = 0; (l_246 >= 9); ++l_246)
        { 
            int64_t *l_289 = &g_206.f6;
            struct S0 ***l_295 = (void*)0;
            int32_t l_300[6][5] = {{(-2L),(-2L),0L,0L,(-2L)},{0x20ED5610L,(-1L),0x20ED5610L,(-1L),0x20ED5610L},{(-2L),0L,0L,(-2L),(-2L)},{1L,(-1L),1L,(-1L),1L},{(-2L),(-2L),0L,0L,(-2L)},{0x20ED5610L,(-1L),0x20ED5610L,(-1L),0x20ED5610L}};
            int i, j;
            l_300[1][3] = ((p_55 ^ ((~(((*l_289) = 0xFB2F08A162D6F5C3LL) | (g_290 && (safe_sub_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u(((l_296[3][5] = (void*)0) != (((g_219 ^= (((safe_sub_func_uint16_t_u_u(p_55, (safe_unary_minus_func_uint32_t_u(0xE40A8397L)))) & p_55) >= g_206.f4.f4)) & 7UL) , &g_116[0])), p_53)) | p_55) <= p_53) ^ p_55), p_55))))) >= p_56)) <= 1UL);
        }
    }
    else
    { 
        struct S4 *l_302[5][1][6];
        struct S4 **l_301 = &l_302[1][0][3];
        uint32_t l_317[1][6];
        struct S0 **l_352 = &g_116[0];
        int32_t l_354 = 0xEE14F3B5L;
        struct S4 l_365 = {31};
        union U5 l_366[1] = {{0x66L}};
        union U6 l_380 = {0xB1EDL};
        int64_t *l_381[3];
        uint64_t l_413 = 1UL;
        int32_t l_443 = 0x9C9ACE03L;
        int32_t l_444 = (-1L);
        int32_t l_445 = 0L;
        int32_t l_446 = (-1L);
        int32_t l_447 = 0L;
        int32_t l_448 = 1L;
        int32_t l_450 = 0x36B687F3L;
        int32_t l_453 = 0L;
        int32_t l_454 = 9L;
        int32_t l_456[5][3][2] = {{{(-1L),0x5AF64DB0L},{(-8L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-8L),0x5AF64DB0L},{(-1L),0x5AF64DB0L}},{{(-8L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-8L),0x5AF64DB0L},{(-1L),0x5AF64DB0L},{(-8L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-8L),0x5AF64DB0L}}};
        int32_t l_459[4][1];
        struct S3 *l_487 = &l_238;
        uint16_t *l_488 = (void*)0;
        int32_t l_491 = (-9L);
        const int32_t *l_493 = &g_494;
        const int32_t **l_492[4] = {&l_493,&l_493,&l_493,&l_493};
        int64_t ***l_498 = (void*)0;
        int64_t **l_501[2][6][5] = {{{&l_381[1],(void*)0,&l_381[1],&l_381[1],&l_381[0]},{&l_285,&l_381[1],&l_381[1],&l_285,&g_500},{&l_285,(void*)0,&l_381[1],(void*)0,&l_285},{&g_500,&l_285,&l_381[1],&l_381[1],&l_285},{&l_381[0],&l_381[1],&l_381[1],(void*)0,&l_381[1]},{&l_285,&g_500,&g_500,&l_285,&l_285}},{{(void*)0,(void*)0,(void*)0,&l_381[1],&l_285},{&l_285,&g_500,&l_381[1],&g_500,&g_500},{&l_381[0],(void*)0,&l_381[1],(void*)0,&l_381[0]},{&g_500,&g_500,&l_381[1],&g_500,&l_285},{&l_285,&l_381[1],(void*)0,(void*)0,(void*)0},{&l_285,&l_285,&g_500,&g_500,&l_285}}};
        struct S1 l_527 = {0x58L,0L,0UL,0x3CCE0A81D4268F8ALL,{199,4214,3,8752,1934},0x287AAA15L,0x406B760BF34B68D7LL,{212,26072,-1,10533,416}};
        uint32_t l_558 = 0x88854E5EL;
        int32_t *l_581 = (void*)0;
        int32_t **l_580[4] = {&l_581,&l_581,&l_581,&l_581};
        struct S0 ****l_587 = (void*)0;
        uint64_t l_604 = 0xAEC8BB798D1A84AFLL;
        int16_t l_638 = 0L;
        uint16_t l_644 = 1UL;
        const uint8_t *l_686 = (void*)0;
        int32_t l_771 = 0xCFD50479L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_302[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_317[i][j] = 0UL;
        }
        for (i = 0; i < 3; i++)
            l_381[i] = &g_219;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_459[i][j] = 0xF8308157L;
        }
        if ((((*l_301) = &g_68) == (void*)0))
        { 
            uint16_t l_313 = 65530UL;
            int32_t ****l_326 = (void*)0;
            struct S0 **l_350 = &g_116[0];
            uint64_t *l_363 = &g_146;
            struct S4 l_375 = {-9};
            int64_t **l_382 = (void*)0;
            struct S1 *l_385[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_313 &= ((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s(p_55, p_55)) , ((safe_div_func_int16_t_s_s(p_55, ((((0xE35BBA30L != 0x28ECA0DBL) == p_53) ^ (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(0x52AFL, 5)), 0xADL))) ^ p_56))) >= 0UL)), (-9L))) || 1UL);
            for (g_22 = 0; (g_22 <= 3); g_22 += 1)
            { 
                uint64_t l_314 = 0x53D4998C55F51B6DLL;
                union U5 l_320 = {0x15L};
                l_314++;
                ++l_317[0][3];
                return l_320;
            }
            if (((void*)0 == &l_71))
            { 
                struct S1 *l_330 = &g_206;
                uint32_t *l_331 = &g_62[0];
                int32_t l_332 = (-1L);
                int32_t l_333 = (-10L);
                int32_t l_334[1][6][3] = {{{(-1L),0x8938DB97L,0x8938DB97L},{0x8938DB97L,0xF9E5B101L,0x7D5EBDE5L},{(-1L),(-3L),0x7D5EBDE5L},{0x8938DB97L,(-1L),0xF9E5B101L},{0x8938DB97L,0x8938DB97L,(-1L)},{0x7D5EBDE5L,(-1L),(-1L)}}};
                int i, j, k;
                if ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(p_53, (+(p_53 & (l_326 != l_327))))) >= ((((l_238 , (((*l_331) = (safe_unary_minus_func_uint8_t_u(((void*)0 != l_330)))) != 0L)) >= 7UL) || 4294967287UL) ^ (***l_328))), 11)))
                { 
                    uint16_t l_335[6][7] = {{65535UL,0x2928L,0UL,0x2928L,65535UL,0UL,65535UL},{0x8B4AL,0x06DDL,0x2928L,0UL,8UL,0UL,0x2928L},{65535UL,65535UL,0x7FCAL,0UL,0x06DDL,0x4E7CL,0x8B4AL},{0x8B4AL,0UL,0x7FCAL,0x7FCAL,0UL,0x8B4AL,8UL},{65535UL,0x7FCAL,0x2928L,8UL,0x06DDL,0x06DDL,8UL},{0UL,65534UL,0UL,0x4E7CL,8UL,65535UL,0x8B4AL}};
                    uint8_t *l_351 = &g_261[3].f0;
                    int64_t *l_364 = (void*)0;
                    int i, j;
                    l_335[2][4]++;
                    l_354 &= (l_334[0][3][2] = ((!((safe_mul_func_int16_t_s_s((((void*)0 != l_341) <= (safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((((p_53 & g_206.f4.f1) != ((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((l_350 != (g_353 = (((*l_351) = (****l_327)) , l_352))) >= l_334[0][3][2]), g_206.f4.f3)), p_53)) , 0UL)) & p_53), p_55)) , 5L) != p_53), 6UL))), 0UL)) ^ p_56)) | 0x99C5L));
                    l_332 = (l_354 &= (((g_68 , ((safe_mod_func_uint32_t_u_u(((l_334[0][4][1] = (g_219 = ((((safe_unary_minus_func_int64_t_s((((*l_363) &= (p_55 >= ((((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((((l_362 != (void*)0) , l_363) != l_363) < ((g_206.f7.f1 , p_55) ^ l_334[0][3][2])), 15)), (****l_327))) ^ 0x6871C2EA10CC8CF3LL) & 0x0DL) < g_114.f1) , &l_354) == (***l_327)))) >= p_56))) | p_55) , (void*)0) == &l_302[4][0][1]))) >= g_88.f0), 4294967294UL)) ^ (-10L))) >= 0L) , p_56));
                    (*l_362) = l_365;
                }
                else
                { 
                    return l_366[0];
                }
            }
            else
            { 
                int32_t l_374[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_374[i] = (-6L);
                for (l_93 = (-22); (l_93 >= 3); ++l_93)
                { 
                    int32_t l_369[6][7] = {{0L,8L,8L,0L,0x02D9EEF6L,0x65928F16L,7L},{0L,0x08967C49L,9L,0xC2A4E8ABL,(-1L),0L,(-2L)},{(-1L),0x02D9EEF6L,7L,0x2A0FDBCBL,0x510B9702L,0x2A0FDBCBL,7L},{0x510B9702L,0x510B9702L,0x32D2EFFFL,0x2C7864DEL,0L,0x2A0FDBCBL,2L},{(-2L),0x32D2EFFFL,2L,8L,(-1L),0L,0x08967C49L},{0x2A0FDBCBL,0x65928F16L,0L,2L,0L,0x65928F16L,0x2A0FDBCBL}};
                    int i, j;
                    l_369[4][5] &= (g_62[1] && p_53);
                }
                (*g_19) = (**g_18);
                for (g_88.f2 = 2; (g_88.f2 >= 0); g_88.f2 -= 1)
                { 
                    struct S4 ***l_372[3][3][7] = {{{&l_301,&l_301,&l_301,&l_301,(void*)0,(void*)0,&l_301},{&l_301,&l_301,&l_301,&l_301,&l_301,&l_301,&l_301},{&l_301,&l_301,(void*)0,&l_301,&l_301,(void*)0,&l_301}},{{&l_301,&l_301,&l_301,&l_301,&l_301,&l_301,&l_301},{(void*)0,&l_301,(void*)0,(void*)0,&l_301,&l_301,&l_301},{&g_370,&l_301,&l_301,&l_301,&g_370,&l_301,&g_370}},{{&l_301,&l_301,(void*)0,&l_301,(void*)0,&l_301,&l_301},{&l_301,&g_370,&l_301,&l_301,&g_370,&l_301,&l_301},{&l_301,&l_301,(void*)0,&l_301,&l_301,(void*)0,&l_301}}};
                    int i, j, k;
                    l_374[0] = ((g_370 != (l_373 = (void*)0)) , p_55);
                    (*g_371) = l_375;
                }
            }
            l_375.f0 &= (0UL >= (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((((l_380 , (l_381[1] == (l_285 = &g_219))) == ((g_206.f4.f1 <= ((l_317[0][3] , (safe_sub_func_int8_t_s_s(((p_53 | g_114.f4) || 0x92961265L), 0x6CL))) | (****l_327))) ^ 0L)) >= p_53), g_88.f3)), (-1L))));
            l_385[0] = &g_206;
        }
        else
        { 
            int32_t l_387 = 0x56418BE2L;
            int32_t ***l_409 = &g_109[1];
            int32_t ***l_410 = &g_109[1];
            int32_t **** const l_408[6] = {&l_409,&l_409,&l_409,&l_409,&l_409,&l_409};
            int32_t **** const *l_407 = &l_408[3];
            int8_t l_425 = 0x2FL;
            union U5 l_426[4][3][1] = {{{{0xDCL}},{{0x3BL}},{{0xDCL}}},{{{0x64L}},{{255UL}},{{0x64L}}},{{{0xDCL}},{{0x3BL}},{{0xDCL}}},{{{0x64L}},{{255UL}},{{0x64L}}}};
            struct S4 **l_428 = &l_302[1][0][3];
            uint32_t l_460 = 0UL;
            int i, j, k;
            if (l_387)
            { 
                struct S1 *l_388 = &g_206;
                struct S1 **l_389 = (void*)0;
                struct S1 **l_390 = &g_205;
                struct S2 l_395 = {48,0,-9107,14,60,404,0,23};
                struct S4 * const *l_412 = &l_302[1][0][0];
                struct S4 * const ** const l_411 = &l_412;
                (*l_390) = l_388;
                for (g_206.f6 = (-10); (g_206.f6 < 24); g_206.f6 = safe_add_func_uint8_t_u_u(g_206.f6, 1))
                { 
                    return l_170;
                }
                if ((l_395.f3 = ((l_354 ^= (safe_div_func_uint16_t_u_u((((g_386[0][1][4].f6 = (((((((l_395 , (~(safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(g_20.f1, (safe_sub_func_uint64_t_u_u(0UL, (((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(((((l_395.f2 &= ((((l_407 = &l_327) != &g_259) != (l_411 == &l_373)) <= p_53)) , g_290) && p_56) ^ p_53), p_56)), 0x41DCL)) < g_68.f0) , p_56))))) > p_53), g_114.f0)))) < g_97) || p_56) ^ l_395.f1) > p_53) && 0xF7F3FF8CL) ^ 0x08397DE20BC243EELL)) == p_53) ^ g_88.f1), p_56))) < l_413)))
                { 
                    int64_t l_423 = 0x0B602E002BA7AABELL;
                    uint16_t *l_424 = &l_380.f0;
                    struct S4 ***l_427 = &l_373;
                    struct S4 ***l_429[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_429[i][j] = &g_370;
                    }
                    l_425 |= (((safe_rshift_func_uint16_t_u_s((((*l_424) = ((0x401890F2L >= ((0x2DC4C73AL && l_395.f3) < (((safe_mul_func_int8_t_s_s((p_53 != ((safe_mod_func_uint64_t_u_u(((!p_56) == l_395.f3), ((safe_lshift_func_uint16_t_u_s(0x5AAEL, l_423)) , g_290))) , 0x3581D77A8461DFFALL)), g_206.f4.f3)) || 0x54L) | l_365.f0))) , p_53)) & l_423), 2)) == l_423) <= l_395.f3);
                    l_430 &= ((l_426[2][2][0] , ((*l_427) = &g_371)) == (l_428 = l_428));
                    l_395.f3 &= (-10L);
                    return g_261[3];
                }
                else
                { 
                    uint64_t l_433 = 1UL;
                    uint8_t *l_435[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_435[i] = (void*)0;
                    l_366[0].f2 = (safe_sub_func_int64_t_s_s(((l_354 = g_114.f0) >= l_433), (!(g_261[3].f0 = 0xE7L))));
                }
            }
            else
            { 
                uint32_t l_441 = 0x4590B853L;
                int32_t l_449 = 0L;
                int32_t l_451 = 0x81D87B7DL;
                int32_t l_452 = 0x393C8E4EL;
                int32_t l_455 = 0xE3C25134L;
                int32_t l_457[4][3];
                int16_t l_458 = 0x8710L;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_457[i][j] = (-4L);
                }
                for (l_156 = 23; (l_156 == 25); l_156++)
                { 
                    (*l_352) = (void*)0;
                }
                for (p_56 = 18; (p_56 > 9); --p_56)
                { 
                    int32_t *****l_442 = &g_259;
                    l_441 = g_440;
                    (*l_442) = (*l_407);
                }
                (*g_18) = (*g_18);
                --l_460;
            }
        }
        for (l_354 = 0; (l_354 < 11); ++l_354)
        { 
            union U6 l_465 = {0xC057L};
            int32_t l_474 = 0L;
            l_474 &= ((l_71 , l_465) , (safe_mul_func_uint16_t_u_u((((l_465.f0 >= ((g_88 , (safe_mod_func_uint32_t_u_u((****l_327), ((safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((g_206.f4.f3 >= p_56) < 0xF6882E3CL) != p_55), p_55)), l_444)) || l_465.f0)))) , g_4)) && g_261[3].f0) , g_386[0][1][4].f0), g_386[0][1][4].f4.f2)));
        }
        l_491 |= (((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((0x70L == (safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((((**g_370) , (l_447 &= (((*g_18) = l_487) == (void*)0))) <= (****l_327)), ((safe_div_func_uint32_t_u_u(((*l_328) == (void*)0), p_56)) || g_95))) < g_290), g_386[0][1][4].f4.f4))), p_53)), 2)), 0x2D04L)), l_459[2][0])) , g_219) != g_386[0][1][4].f7.f0);
        g_497 = (g_495 = &l_444);
    }
    return l_170;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_88.f3, "g_88.f3", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_114.f4, "g_114.f4", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_206.f3, "g_206.f3", print_hash_value);
    transparent_crc(g_206.f4.f0, "g_206.f4.f0", print_hash_value);
    transparent_crc(g_206.f4.f1, "g_206.f4.f1", print_hash_value);
    transparent_crc(g_206.f4.f2, "g_206.f4.f2", print_hash_value);
    transparent_crc(g_206.f4.f3, "g_206.f4.f3", print_hash_value);
    transparent_crc(g_206.f4.f4, "g_206.f4.f4", print_hash_value);
    transparent_crc(g_206.f5, "g_206.f5", print_hash_value);
    transparent_crc(g_206.f6, "g_206.f6", print_hash_value);
    transparent_crc(g_206.f7.f0, "g_206.f7.f0", print_hash_value);
    transparent_crc(g_206.f7.f1, "g_206.f7.f1", print_hash_value);
    transparent_crc(g_206.f7.f2, "g_206.f7.f2", print_hash_value);
    transparent_crc(g_206.f7.f3, "g_206.f7.f3", print_hash_value);
    transparent_crc(g_206.f7.f4, "g_206.f7.f4", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_261[i].f0, "g_261[i].f0", print_hash_value);

    }
    transparent_crc(g_290, "g_290", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_386[i][j][k].f0, "g_386[i][j][k].f0", print_hash_value);
                transparent_crc(g_386[i][j][k].f1, "g_386[i][j][k].f1", print_hash_value);
                transparent_crc(g_386[i][j][k].f2, "g_386[i][j][k].f2", print_hash_value);
                transparent_crc(g_386[i][j][k].f3, "g_386[i][j][k].f3", print_hash_value);
                transparent_crc(g_386[i][j][k].f4.f0, "g_386[i][j][k].f4.f0", print_hash_value);
                transparent_crc(g_386[i][j][k].f4.f1, "g_386[i][j][k].f4.f1", print_hash_value);
                transparent_crc(g_386[i][j][k].f4.f2, "g_386[i][j][k].f4.f2", print_hash_value);
                transparent_crc(g_386[i][j][k].f4.f3, "g_386[i][j][k].f4.f3", print_hash_value);
                transparent_crc(g_386[i][j][k].f4.f4, "g_386[i][j][k].f4.f4", print_hash_value);
                transparent_crc(g_386[i][j][k].f5, "g_386[i][j][k].f5", print_hash_value);
                transparent_crc(g_386[i][j][k].f6, "g_386[i][j][k].f6", print_hash_value);
                transparent_crc(g_386[i][j][k].f7.f0, "g_386[i][j][k].f7.f0", print_hash_value);
                transparent_crc(g_386[i][j][k].f7.f1, "g_386[i][j][k].f7.f1", print_hash_value);
                transparent_crc(g_386[i][j][k].f7.f2, "g_386[i][j][k].f7.f2", print_hash_value);
                transparent_crc(g_386[i][j][k].f7.f3, "g_386[i][j][k].f7.f3", print_hash_value);
                transparent_crc(g_386[i][j][k].f7.f4, "g_386[i][j][k].f7.f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_505.f0, "g_505.f0", print_hash_value);
    transparent_crc(g_505.f1, "g_505.f1", print_hash_value);
    transparent_crc(g_505.f2, "g_505.f2", print_hash_value);
    transparent_crc(g_505.f3, "g_505.f3", print_hash_value);
    transparent_crc(g_505.f4, "g_505.f4", print_hash_value);
    transparent_crc(g_505.f5, "g_505.f5", print_hash_value);
    transparent_crc(g_505.f6, "g_505.f6", print_hash_value);
    transparent_crc(g_505.f7, "g_505.f7", print_hash_value);
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_1075.f0, "g_1075.f0", print_hash_value);
    transparent_crc(g_1075.f1, "g_1075.f1", print_hash_value);
    transparent_crc(g_1075.f2, "g_1075.f2", print_hash_value);
    transparent_crc(g_1075.f3, "g_1075.f3", print_hash_value);
    transparent_crc(g_1075.f4, "g_1075.f4", print_hash_value);
    transparent_crc(g_1076.f0, "g_1076.f0", print_hash_value);
    transparent_crc(g_1076.f1, "g_1076.f1", print_hash_value);
    transparent_crc(g_1076.f2, "g_1076.f2", print_hash_value);
    transparent_crc(g_1076.f3, "g_1076.f3", print_hash_value);
    transparent_crc(g_1076.f4, "g_1076.f4", print_hash_value);
    transparent_crc(g_1218.f0, "g_1218.f0", print_hash_value);
    transparent_crc(g_1322, "g_1322", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1349[i][j][k], "g_1349[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1394.f0, "g_1394.f0", print_hash_value);
    transparent_crc(g_1468, "g_1468", print_hash_value);
    transparent_crc(g_1666, "g_1666", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
