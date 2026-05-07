// SPDX-License-Identifier: MIT
// cctest_csmith_802ea909.c --- cctest case csmith_802ea909 (csmith seed 2150541577)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc5023891 */

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

// Options:   -s 2150541577 -o /tmp/csmith_gen_1zy6yg7t/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 3;
   signed f1 : 14;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

union U2 {
   const signed f0 : 3;
   uint64_t  f1;
};


static int32_t g_2 = 0xC6E5C7A0L;
static uint64_t g_13 = 0x4D1454BCD76CE4A6LL;
static uint64_t g_18 = 18446744073709551612UL;
static uint64_t *g_17[4] = {&g_18,&g_18,&g_18,&g_18};
static int32_t g_27 = (-3L);
static struct S0 g_28[5][7] = {{{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34}},{{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34}},{{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34}},{{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34}},{{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34},{0,-34}}};
static int32_t g_29 = (-9L);
static struct S1 g_39 = {0xEF407293L,0xC9D6C840L,0xB8F3BEC7L};
static int32_t g_68 = 0x6A74B4FBL;
static uint64_t g_80 = 1UL;
static const int32_t *g_100 = &g_29;
static const int32_t **g_99 = &g_100;
static const int32_t ***g_98 = &g_99;
static int8_t g_103 = 0xF0L;
static uint8_t g_110 = 0UL;
static int8_t g_113 = 0x6DL;
static uint32_t g_117 = 6UL;
static int32_t g_121 = 0x29CCA179L;
static uint32_t g_127 = 0x379706C8L;
static uint8_t g_183 = 0xADL;
static union U2 g_188 = {0x0F799829L};
static uint64_t g_197 = 0x8C224E53AA939E12LL;
static union U2 g_211 = {0xFABCB02FL};
static union U2 *g_210 = &g_211;
static int16_t g_219 = 0x95EDL;
static uint64_t g_222 = 18446744073709551615UL;
static int32_t g_233 = 0x374C3C97L;
static struct S1 g_246 = {0x7F1A52F7L,0xF327A7BCL,1L};
static struct S1 g_249 = {0xEC7FAF6FL,0xADEB26E6L,0x338B46DEL};
static struct S1 g_251 = {8L,0xB200155BL,0xB4CAA5ACL};
static int32_t g_253 = 0x874FC3CEL;
static int32_t *g_273 = &g_121;
static int32_t **g_272 = &g_273;
static int32_t ***g_271 = &g_272;
static int32_t ****g_270[5] = {&g_271,&g_271,&g_271,&g_271,&g_271};
static int32_t *****g_269 = &g_270[0];
static struct S0 g_310 = {1,-72};
static uint32_t g_410 = 0xD1E3544EL;
static int32_t g_414 = 0x96C799F6L;
static int64_t *g_422 = (void*)0;
static uint16_t g_425 = 65532UL;
static const uint16_t g_439 = 0x163CL;
static uint64_t * const *g_473 = &g_17[2];
static uint64_t * const **g_472 = &g_473;
static int32_t g_538 = 0L;
static union U2 **g_582[6][1] = {{&g_210},{&g_210},{&g_210},{&g_210},{&g_210},{&g_210}};
static union U2 *** const g_581 = &g_582[5][0];
static int8_t *g_590[3][2] = {{&g_113,&g_113},{&g_113,&g_113},{&g_113,&g_113}};
static int8_t **g_589 = &g_590[1][1];
static int8_t ***g_593 = (void*)0;
static int8_t ****g_592 = &g_593;
static int16_t g_701 = 0xF423L;
static int8_t g_924 = 3L;
static int8_t g_998 = 2L;
static const uint64_t g_1006 = 0x20920F8B0ABCA51ALL;
static struct S1 *g_1100 = &g_251;
static struct S1 **g_1099 = &g_1100;
static int16_t g_1102[1][1][3] = {{{0x0D08L,0x0D08L,0x0D08L}}};
static struct S0 *g_1120 = &g_310;
static struct S0 **g_1119[5][6][2] = {{{(void*)0,&g_1120},{&g_1120,(void*)0},{(void*)0,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120}},{{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120}},{{&g_1120,&g_1120},{&g_1120,&g_1120},{(void*)0,(void*)0},{&g_1120,&g_1120},{(void*)0,&g_1120},{&g_1120,&g_1120}},{{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120}},{{&g_1120,&g_1120},{(void*)0,&g_1120},{&g_1120,(void*)0},{(void*)0,&g_1120},{&g_1120,&g_1120},{&g_1120,&g_1120}}};
static uint32_t g_1124 = 6UL;
static uint64_t g_1168 = 18446744073709551607UL;
static uint16_t *g_1181 = &g_425;
static uint16_t **g_1180 = &g_1181;
static int32_t g_1247 = 1L;
static uint8_t * const *g_1340 = (void*)0;
static uint8_t * const **g_1339 = &g_1340;
static struct S0 g_1360 = {1,-121};
static int64_t g_1389 = 1L;
static int64_t **g_1460[4] = {&g_422,&g_422,&g_422,&g_422};
static int64_t ***g_1459 = &g_1460[3];
static int64_t ****g_1458 = &g_1459;
static int32_t g_1642 = (-1L);
static uint16_t ** const *g_1699[6] = {&g_1180,&g_1180,&g_1180,&g_1180,&g_1180,&g_1180};
static uint16_t ** const **g_1698 = &g_1699[0];
static uint16_t g_1718 = 0x8412L;
static uint16_t g_1736 = 0xFBABL;
static uint8_t g_1779 = 5UL;
static uint16_t g_1780 = 65535UL;
static int64_t g_1813 = 0xCED2A642D011E251LL;
static uint16_t ***g_1847 = &g_1180;
static uint16_t ****g_1846 = &g_1847;
static uint16_t *****g_1845[7] = {&g_1846,&g_1846,&g_1846,&g_1846,&g_1846,&g_1846,&g_1846};
static int32_t g_1886 = 0x90BDF372L;
static int32_t *g_1898 = &g_233;
static int32_t **g_1897[4][5] = {{&g_1898,&g_1898,&g_1898,&g_1898,&g_1898},{&g_1898,&g_1898,&g_1898,&g_1898,&g_1898},{&g_1898,&g_1898,&g_1898,&g_1898,&g_1898},{&g_1898,&g_1898,&g_1898,&g_1898,&g_1898}};
static union U2 g_1924 = {0L};
static uint8_t *g_1965 = &g_1779;
static uint8_t **g_1964 = &g_1965;
static union U2 g_1995 = {0x69B22EABL};
static const int32_t ***g_2019 = &g_99;
static uint16_t * const *g_2169 = &g_1181;
static uint16_t * const **g_2168 = &g_2169;
static uint32_t *g_2204[1][4][4] = {{{&g_1124,&g_1124,&g_1124,&g_1124},{&g_1124,&g_1124,&g_1124,&g_1124},{&g_1124,&g_1124,&g_1124,&g_1124},{&g_1124,&g_1124,&g_1124,&g_1124}}};
static uint16_t g_2253 = 0xEC97L;
static union U2 g_2364 = {0x4C633E79L};



static uint16_t  func_1(void);
static int64_t  func_9(int64_t  p_10, uint64_t  p_11);
static int32_t  func_19(const struct S0  p_20, uint64_t * p_21, uint64_t * p_22);
static union U2  func_33(struct S1  p_34, int64_t  p_35, int64_t  p_36, struct S1  p_37, uint64_t * p_38);
static int8_t  func_46(int8_t  p_47);
static struct S0  func_51(int32_t  p_52, uint8_t  p_53, const uint64_t  p_54);
static struct S1  func_55(int32_t * p_56, const uint32_t  p_57, uint32_t  p_58, uint64_t * p_59, int32_t * p_60);
static int32_t * func_61(int32_t  p_62, union U2  p_63, int32_t * p_64);




static uint16_t  func_1(void)
{ 
    const int8_t l_16 = 0xD4L;
    const struct S0 l_23 = {1,66};
    const int64_t l_2378 = (-8L);
    int32_t l_2379 = 0L;
    uint32_t l_2388 = 2UL;
    int32_t *l_2406[6][3][6] = {{{(void*)0,&g_2,(void*)0,&g_1642,&g_2,&g_1247},{&g_1642,&g_2,&g_1247,&g_2,&g_1642,(void*)0},{&g_249.f2,&g_414,&g_1247,(void*)0,&g_2,&g_1247}},{{&g_2,(void*)0,(void*)0,&g_414,(void*)0,&g_1247},{&g_414,(void*)0,&g_1247,&g_249.f2,&g_414,(void*)0},{(void*)0,&g_1642,&g_1247,(void*)0,(void*)0,&g_1247}},{{(void*)0,(void*)0,(void*)0,&g_414,&g_249.f2,&g_1247},{&g_414,&g_249.f2,&g_1247,(void*)0,&g_414,(void*)0},{&g_2,&g_414,&g_1247,&g_2,(void*)0,&g_1247}},{{(void*)0,&g_2,(void*)0,&g_1642,&g_2,&g_1247},{&g_1642,&g_2,&g_1247,&g_2,&g_1642,(void*)0},{(void*)0,(void*)0,&g_2,&g_249.f2,&g_1642,&g_2}},{{&g_1642,(void*)0,(void*)0,(void*)0,(void*)0,&g_2},{(void*)0,(void*)0,&g_2,(void*)0,&g_414,(void*)0},{(void*)0,&g_27,&g_2,(void*)0,(void*)0,&g_2}},{{&g_249.f2,&g_249.f2,(void*)0,&g_414,(void*)0,&g_2},{&g_414,(void*)0,&g_2,(void*)0,(void*)0,(void*)0},{&g_121,&g_414,&g_2,&g_1642,&g_249.f2,&g_2}}};
    uint64_t *l_2408 = &g_80;
    uint16_t * const ***l_2411[3][4][4];
    uint16_t * const *** const *l_2410 = &l_2411[2][2][3];
    uint16_t l_2422 = 9UL;
    union U2 l_2432 = {0L};
    uint64_t l_2439 = 18446744073709551608UL;
    int32_t l_2440 = 0x67B9C734L;
    int64_t l_2441 = 0x513FACB5C8199CC8LL;
    uint8_t l_2442 = 246UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                l_2411[i][j][k] = &g_2168;
        }
    }
    for (g_2 = 0; (g_2 == (-7)); --g_2)
    { 
        uint64_t *l_12 = &g_13;
        int32_t l_2336 = 9L;
        int64_t l_2407 = 0x47FE6D7BFF020A73LL;
        int8_t *l_2430 = (void*)0;
        const struct S0 l_2431 = {0,20};
    }
    l_2442--;
    for (g_197 = 0; (g_197 <= 3); g_197 += 1)
    { 
        uint32_t l_2446[5][3][2] = {{{0UL,2UL},{0xFB27AD41L,0xFB27AD41L},{2UL,0UL}},{{0x47A1F191L,0UL},{2UL,0xFB27AD41L},{0xFB27AD41L,2UL}},{{0UL,0x47A1F191L},{0UL,2UL},{0xFB27AD41L,0xFB27AD41L}},{{2UL,0UL},{0x47A1F191L,0UL},{2UL,0xFB27AD41L}},{{0xFB27AD41L,2UL},{0UL,0x47A1F191L},{0UL,2UL}}};
        int i, j, k;
        (**g_98) = &l_2379;
        for (g_1995.f1 = 0; (g_1995.f1 <= 2); g_1995.f1 += 1)
        { 
            int32_t l_2447 = 0x867A3060L;
            for (g_1389 = 0; (g_1389 >= 0); g_1389 -= 1)
            { 
                int i, j, k;
                (***g_271) &= 0xC3F70368L;
                for (g_249.f0 = 0; (g_249.f0 >= 0); g_249.f0 -= 1)
                { 
                    int32_t l_2445 = 0x96C68BD4L;
                    int i, j, k;
                    (***g_271) &= l_2445;
                    return l_2446[0][1][1];
                }
            }
            if (l_2447)
                break;
            return (**g_1180);
        }
    }
    (*g_99) = &l_2379;
    return (**g_1180);
}



static int64_t  func_9(int64_t  p_10, uint64_t  p_11)
{ 
    uint8_t l_2349 = 251UL;
    int32_t **l_2355[5];
    int32_t l_2356 = 1L;
    uint16_t **l_2376[6][3][7] = {{{&g_1181,(void*)0,&g_1181,(void*)0,(void*)0,&g_1181,(void*)0},{&g_1181,&g_1181,&g_1181,(void*)0,&g_1181,&g_1181,(void*)0},{(void*)0,&g_1181,&g_1181,&g_1181,(void*)0,&g_1181,&g_1181}},{{(void*)0,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181},{&g_1181,(void*)0,&g_1181,(void*)0,&g_1181,&g_1181,&g_1181},{&g_1181,&g_1181,(void*)0,&g_1181,(void*)0,&g_1181,&g_1181}},{{&g_1181,&g_1181,(void*)0,(void*)0,&g_1181,&g_1181,&g_1181},{&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181},{&g_1181,(void*)0,(void*)0,&g_1181,&g_1181,&g_1181,(void*)0}},{{(void*)0,&g_1181,&g_1181,(void*)0,&g_1181,&g_1181,&g_1181},{(void*)0,&g_1181,&g_1181,(void*)0,&g_1181,&g_1181,(void*)0},{&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181}},{{&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181},{&g_1181,&g_1181,(void*)0,&g_1181,&g_1181,&g_1181,&g_1181},{&g_1181,&g_1181,&g_1181,(void*)0,&g_1181,&g_1181,&g_1181}},{{&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181},{(void*)0,&g_1181,(void*)0,&g_1181,&g_1181,&g_1181,&g_1181},{&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181,&g_1181}}};
    int32_t *l_2377 = &g_121;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_2355[i] = &g_1898;
    for (g_39.f1 = 0; (g_39.f1 < 22); g_39.f1++)
    { 
        uint16_t l_2339 = 0x29AEL;
        const union U2 l_2361[5][7] = {{{-1L},{-1L},{0x518EAAAFL},{0xA3E5B954L},{0x39010F1AL},{0x12ACCEA6L},{0x39010F1AL}},{{-1L},{0x39010F1AL},{0x39010F1AL},{-1L},{1L},{3L},{4L}},{{0L},{3L},{0x518EAAAFL},{1L},{1L},{0x518EAAAFL},{3L}},{{1L},{0L},{0x12ACCEA6L},{-1L},{0x39010F1AL},{4L},{4L}},{{0x12ACCEA6L},{0L},{1L},{0L},{0x12ACCEA6L},{-1L},{0x39010F1AL}}};
        union U2 *l_2362 = &g_188;
        union U2 *l_2363 = &g_2364;
        int32_t *l_2373[2];
        struct S1 l_2374 = {0xEBB6748FL,1UL,0xFD1E814BL};
        int i, j;
        for (i = 0; i < 2; i++)
            l_2373[i] = &g_1247;
        l_2339--;
        for (p_11 = (-11); (p_11 <= 5); p_11++)
        { 
            int32_t *l_2344 = &g_27;
            int32_t *l_2345 = &g_29;
            int32_t *l_2346 = &g_39.f2;
            int32_t *l_2347 = (void*)0;
            int32_t *l_2348 = &g_39.f2;
            union U2 l_2372 = {-4L};
            --l_2349;
            for (g_1924.f1 = (-20); (g_1924.f1 != 39); g_1924.f1++)
            { 
                int32_t *l_2365[7][7] = {{&g_1642,&g_251.f2,(void*)0,(void*)0,&g_538,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1642,&g_121,&g_2,&g_249.f2,&g_251.f2},{&g_1642,(void*)0,&g_29,&g_29,(void*)0,&g_1642,&g_538},{&g_1642,&g_1642,&g_121,&g_39.f2,&g_2,&g_2,&g_39.f2},{&g_29,&g_2,&g_29,(void*)0,&g_538,(void*)0,&g_1642},{&g_121,&g_1642,&g_1642,&g_249.f2,&g_1642,&g_1642,&g_121},{&g_29,(void*)0,&g_1642,&g_538,&g_538,(void*)0,&g_538}};
                int i, j;
                for (g_68 = 0; (g_68 <= 4); g_68 += 1)
                { 
                    int64_t ***l_2354 = &g_1460[3];
                    (*g_1458) = l_2354;
                    (*g_99) = (**g_2019);
                    l_2356 &= (l_2355[0] != &g_1898);
                }
                (*l_2346) = ((l_2349 <= 3UL) ^ (((**g_1099) = (**g_1099)) , p_11));
                if (p_11)
                    continue;
                (**g_1099) = l_2374;
                if (((*l_2345) >= p_10))
                { 
                    int8_t l_2375 = 1L;
                    return l_2375;
                }
                else
                { 
                    (*l_2346) = p_11;
                    (**g_98) = l_2373[0];
                    return p_11;
                }
            }
        }
        if (p_11)
            break;
    }
    (*l_2377) = (l_2356 = (l_2376[5][2][2] != (*g_2168)));
    return (*l_2377);
}



static int32_t  func_19(const struct S0  p_20, uint64_t * p_21, uint64_t * p_22)
{ 
    int8_t l_1087 = (-1L);
    struct S1 l_1098 = {-6L,0x9EF44764L,8L};
    uint32_t l_2261 = 0xE16C676FL;
    union U2 l_2270[6][4] = {{{0x355926A5L},{0x355926A5L},{0x355926A5L},{0x355926A5L}},{{0x355926A5L},{0x355926A5L},{0x355926A5L},{0x355926A5L}},{{0x355926A5L},{0x355926A5L},{0x355926A5L},{0x355926A5L}},{{0x355926A5L},{0x355926A5L},{0x355926A5L},{0x355926A5L}},{{0x355926A5L},{0x355926A5L},{0x355926A5L},{0x355926A5L}},{{0x355926A5L},{0x355926A5L},{0x355926A5L},{0x355926A5L}}};
    int32_t *l_2300[3][5] = {{&g_246.f2,&g_246.f2,&g_538,&g_249.f2,&g_538},{&g_246.f2,&g_246.f2,&g_538,&g_249.f2,&g_538},{&g_246.f2,&g_246.f2,&g_538,&g_249.f2,&g_538}};
    int32_t * const *l_2306 = (void*)0;
    int32_t * const **l_2305[4] = {&l_2306,&l_2306,&l_2306,&l_2306};
    int32_t * const ***l_2304 = &l_2305[3];
    uint16_t ***l_2322 = &g_1180;
    int32_t l_2326 = 0L;
    int16_t *l_2327 = &g_701;
    int i, j;
lbl_2321:
    for (g_18 = 0; (g_18 != 23); ++g_18)
    { 
        int32_t *l_26 = &g_27;
        struct S1 l_2259 = {0x3A466602L,0x34FBAAD1L,0xAFF1D3A7L};
        struct S0 l_2297[2] = {{1,117},{1,117}};
        int32_t ***l_2303[3][5][6] = {{{&g_1897[1][4],(void*)0,(void*)0,&g_1897[2][2],&g_1897[3][4],&g_1897[1][3]},{&g_1897[1][2],&g_1897[1][3],&g_1897[3][3],&g_1897[1][3],&g_1897[1][2],(void*)0},{&g_1897[3][4],&g_1897[1][3],&g_1897[1][4],&g_1897[3][4],&g_1897[3][4],&g_1897[3][4]},{&g_1897[3][4],(void*)0,&g_1897[3][4],&g_1897[1][3],(void*)0,&g_1897[3][4]},{&g_1897[3][4],(void*)0,&g_1897[1][4],&g_1897[2][2],&g_1897[1][4],(void*)0}},{{(void*)0,(void*)0,&g_1897[3][3],&g_1897[2][2],&g_1897[3][4],&g_1897[1][3]},{&g_1897[3][4],&g_1897[1][3],(void*)0,&g_1897[1][3],&g_1897[3][4],(void*)0},{&g_1897[3][4],&g_1897[1][3],(void*)0,&g_1897[3][4],&g_1897[3][4],&g_1897[3][4]},{&g_1897[3][4],(void*)0,&g_1897[3][4],&g_1897[1][3],&g_1897[1][4],&g_1897[2][2]},{(void*)0,&g_1897[1][3],&g_1897[3][4],(void*)0,&g_1897[3][4],&g_1897[1][3]}},{{&g_1897[3][4],(void*)0,&g_1897[3][4],(void*)0,&g_1897[3][4],&g_1897[3][4]},{(void*)0,&g_1897[3][4],&g_1897[3][4],&g_1897[3][4],(void*)0,&g_1897[1][3]},{(void*)0,&g_1897[3][4],&g_1897[3][4],&g_1897[2][2],&g_1897[3][4],&g_1897[2][2]},{&g_1897[3][3],(void*)0,&g_1897[3][3],&g_1897[3][4],&g_1897[3][4],&g_1897[2][2]},{&g_1897[1][4],&g_1897[1][3],&g_1897[3][4],(void*)0,&g_1897[3][4],&g_1897[1][3]}}};
        int32_t **** const l_2302 = &l_2303[1][1][2];
        int16_t l_2320[6][3] = {{0x5790L,(-2L),0x4017L},{(-2L),0x5790L,0x5790L},{0x4017L,0x5790L,0x6462L},{(-1L),(-2L),2L},{0x4017L,0x4017L,2L},{(-2L),(-1L),0x6462L}};
        int i, j, k;
        (*l_26) &= p_20.f0;
        for (g_27 = 3; (g_27 >= 0); g_27 -= 1)
        { 
            uint8_t l_853[1];
            struct S1 l_2256[2] = {{0x7EFD097DL,1UL,6L},{0x7EFD097DL,1UL,6L}};
            uint16_t **l_2287 = &g_1181;
            int32_t l_2288[2][4] = {{0x6B3E050BL,0x6B3E050BL,0x6B3E050BL,0x6B3E050BL},{0x6B3E050BL,0x6B3E050BL,0x6B3E050BL,0x6B3E050BL}};
            uint32_t * const l_2301[1][4] = {{&g_1124,&g_1124,&g_1124,&g_1124}};
            const int16_t l_2315 = 0xF826L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_853[i] = 0xE8L;
            for (g_29 = 0; (g_29 <= 4); g_29 += 1)
            { 
                uint64_t l_30 = 0xFA3FDA37B187B35FLL;
                union U2 l_2255 = {8L};
                int32_t *l_2260 = &g_29;
                uint64_t l_2282 = 18446744073709551606UL;
                ++l_30;
                if (p_20.f0)
                    break;
                for (l_30 = 0; (l_30 <= 4); l_30 += 1)
                { 
                    int32_t *l_66 = (void*)0;
                    int32_t *l_67 = &g_68;
                    union U2 l_69 = {2L};
                    int8_t *l_1097 = &g_113;
                    int32_t *l_2254 = &g_39.f2;
                    int64_t *l_2257 = (void*)0;
                    int64_t *l_2258 = &g_1813;
                    int i, j;
                }
                (*g_273) = p_20.f1;
            }
            for (g_1780 = 0; (g_1780 <= 1); g_1780 += 1)
            { 
                int32_t * const ****l_2307 = (void*)0;
                int32_t * const ****l_2308 = &l_2304;
                int i, j;
                (*g_1100) = (*g_1100);
                (*l_2308) = l_2304;
            }
            (***g_271) &= ((((safe_add_func_uint16_t_u_u((***g_1847), l_2256[1].f0)) , ((**g_1964) = (*l_26))) >= (&g_28[g_27][(g_27 + 1)] == (((l_2256[1].f2 = ((safe_mul_func_uint8_t_u_u((((l_2315 != ((safe_div_func_int8_t_s_s(((l_2256[1].f0 <= ((((l_2288[1][1] = (safe_lshift_func_uint16_t_u_s((g_28[g_27][(g_27 + 1)].f1 &= ((l_2288[0][0] || (-6L)) == (***g_472))), 5))) | l_2320[3][1]) > (**g_589)) && 0UL)) >= p_20.f0), 255UL)) < g_28[g_27][(g_27 + 1)].f0)) & 0xECL) < 0x13E602A6L), p_20.f1)) != (-5L))) | 0L) , (void*)0))) > p_20.f0);
        }
        if (g_18)
            goto lbl_2321;
    }
    (*g_272) = (((((*g_1846) = l_2322) == (l_2270[4][0] , l_2322)) == (safe_div_func_int16_t_s_s(((+((((((*l_2327) = l_2326) ^ (((((****g_1698) = (~0x6194BADBL)) | (safe_div_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((*g_1965), ((safe_unary_minus_func_int8_t_s(0xAAL)) <= (***g_472)))), p_20.f0)) == p_20.f0) >= 18446744073709551615UL), 5L))) ^ 0x944D42161637DD0FLL) , p_20.f0)) , &g_127) == &g_127) ^ 0xEC85284D53296F12LL)) , g_246.f1), g_18))) , (void*)0);
    return (*g_100);
}



static union U2  func_33(struct S1  p_34, int64_t  p_35, int64_t  p_36, struct S1  p_37, uint64_t * p_38)
{ 
    uint64_t **l_1106 = (void*)0;
    uint64_t *** const l_1105 = &l_1106;
    const uint8_t *l_1114 = &g_110;
    const uint8_t **l_1113[1][6] = {{&l_1114,&l_1114,&l_1114,&l_1114,&l_1114,&l_1114}};
    int32_t *l_1121 = &g_253;
    int32_t l_1125[2][1][2] = {{{0x34BB80CDL,0x34BB80CDL}},{{0x34BB80CDL,0x34BB80CDL}}};
    int32_t l_1127 = 1L;
    union U2 l_1136 = {-5L};
    struct S0 l_1150 = {1,15};
    uint16_t **l_1182 = &g_1181;
    const struct S0 * const l_1216[5] = {&g_28[3][0],&g_28[3][0],&g_28[3][0],&g_28[3][0],&g_28[3][0]};
    const struct S0 * const *l_1215 = &l_1216[2];
    struct S0 *l_1221[5];
    const uint64_t l_1238 = 0x228C2B053895A154LL;
    int32_t *l_1255[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    union U2 l_1278[5] = {{0x1052C37AL},{0x1052C37AL},{0x1052C37AL},{0x1052C37AL},{0x1052C37AL}};
    uint32_t l_1322 = 0xCFCF45BEL;
    int8_t l_1323 = 0xFCL;
    int8_t l_1327 = 0x33L;
    uint8_t * const **l_1341 = &g_1340;
    const int64_t ** const l_1386 = (void*)0;
    uint64_t l_1439 = 18446744073709551615UL;
    uint16_t ****l_1454 = (void*)0;
    uint8_t *l_1537[3][6][2];
    uint8_t **l_1536[6][6][2] = {{{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0},{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0}},{{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0},{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0}},{{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0},{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0}},{{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0},{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0}},{{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0},{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0}},{{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0},{&l_1537[2][1][0],(void*)0},{(void*)0,&l_1537[2][1][0]},{(void*)0,(void*)0}}};
    uint8_t ***l_1535[7] = {&l_1536[4][2][1],&l_1536[4][2][1],&l_1536[4][2][1],&l_1536[4][2][1],&l_1536[4][2][1],&l_1536[4][2][1],&l_1536[4][2][1]};
    uint8_t ****l_1534 = &l_1535[6];
    uint8_t *****l_1533 = &l_1534;
    const uint32_t l_1571[4][1] = {{0xD0954803L},{0xD0954803L},{0xD0954803L},{0xD0954803L}};
    uint64_t l_1600 = 0x10CA6B1FFE4F413CLL;
    uint8_t l_1629 = 0x53L;
    int32_t ***l_1697[3];
    struct S0 l_1728 = {0,54};
    int32_t *l_1742 = (void*)0;
    int16_t l_1792 = 1L;
    int8_t *l_1837 = &l_1323;
    int8_t *l_1838 = &g_998;
    const int32_t *l_1853 = &g_249.f0;
    const int32_t **l_1852 = &l_1853;
    const int32_t ***l_1851 = &l_1852;
    struct S0 ***l_1887 = &g_1119[1][4][1];
    int8_t * const *l_1904 = &g_590[1][1];
    int8_t * const **l_1903 = &l_1904;
    uint32_t l_1919 = 4294967295UL;
    union U2 l_1997 = {0x29C1F673L};
    int32_t l_2036[3];
    struct S1 l_2087 = {0L,0x425C6EF1L,0x9094732AL};
    uint32_t l_2120 = 0xFCD39229L;
    int32_t *l_2176 = &g_246.f0;
    uint16_t l_2182 = 9UL;
    uint32_t l_2220[5];
    uint32_t *l_2246 = (void*)0;
    uint32_t *l_2247[6][1][1] = {{{&l_2220[3]}},{{&g_1124}},{{&l_2220[3]}},{{&g_1124}},{{&l_2220[3]}},{{&g_1124}}};
    uint64_t l_2248[4] = {0xD159A6D19A26F218LL,0xD159A6D19A26F218LL,0xD159A6D19A26F218LL,0xD159A6D19A26F218LL};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1221[i] = &l_1150;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
                l_1537[i][j][k] = &g_183;
        }
    }
    for (i = 0; i < 3; i++)
        l_1697[i] = &g_272;
    for (i = 0; i < 3; i++)
        l_2036[i] = 9L;
    for (i = 0; i < 5; i++)
        l_2220[i] = 0x94FE90C6L;
    return l_1136;
}



static int8_t  func_46(int8_t  p_47)
{ 
    int8_t l_1088[1][2][2];
    int32_t l_1089 = (-2L);
    int32_t *l_1090 = &l_1089;
    int32_t *l_1091 = &g_121;
    int32_t *l_1092 = &g_414;
    int32_t *l_1093[4][5][3] = {{{&g_251.f2,&l_1089,&g_251.f2},{(void*)0,&l_1089,&g_251.f2},{(void*)0,&g_251.f2,(void*)0},{&l_1089,(void*)0,(void*)0},{&g_251.f2,(void*)0,&l_1089}},{{&g_414,&g_414,(void*)0},{&g_251.f2,(void*)0,(void*)0},{&l_1089,(void*)0,&l_1089},{(void*)0,&g_538,&g_538},{&g_251.f2,&l_1089,&l_1089}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_2,(void*)0},{&l_1089,&g_249.f2,&l_1089},{(void*)0,&g_2,(void*)0},{(void*)0,(void*)0,(void*)0}},{{&l_1089,&l_1089,&g_251.f2},{&g_538,&g_538,(void*)0},{&l_1089,(void*)0,&l_1089},{(void*)0,(void*)0,&g_251.f2},{(void*)0,&g_414,&g_414}}};
    uint8_t l_1094 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_1088[i][j][k] = 4L;
        }
    }
    l_1094++;
    (**g_272) ^= (*l_1090);
    return (*l_1092);
}



static struct S0  func_51(int32_t  p_52, uint8_t  p_53, const uint64_t  p_54)
{ 
    struct S1 *l_871 = (void*)0;
    struct S1 **l_870 = &l_871;
    int32_t l_884 = 2L;
    int32_t l_886 = 0x8FC5C898L;
    const uint8_t l_908 = 1UL;
    uint32_t l_909 = 4294967292UL;
    int32_t l_918 = 4L;
    int32_t l_927 = 0x03BF86AFL;
    int32_t l_928 = (-2L);
    int32_t l_929 = 0L;
    int32_t l_930 = (-7L);
    int32_t l_933 = 0x89F2087AL;
    int32_t l_935 = 1L;
    int32_t l_937 = 1L;
    int32_t l_938 = 0xA3AE9435L;
    int32_t l_939 = 0x8DB6D688L;
    int32_t l_940 = 0x2674270DL;
    int32_t l_941 = 0x18EBCE5EL;
    int32_t l_942 = (-2L);
    int32_t l_944 = 0xFD2E2C84L;
    int64_t l_945 = 0x260688F65508E76CLL;
    int32_t l_947[3];
    uint64_t l_949 = 0xE92C33570930DB56LL;
    const int8_t *l_961 = &g_103;
    const int8_t **l_960 = &l_961;
    const int8_t ***l_959 = &l_960;
    struct S0 l_1086 = {0,-77};
    int i;
    for (i = 0; i < 3; i++)
        l_947[i] = 0xE79553CAL;
    for (g_113 = (-26); (g_113 <= 8); g_113++)
    { 
        struct S1 *l_869 = &g_251;
        struct S1 **l_868 = &l_869;
        int32_t l_887 = 5L;
        int32_t l_910 = 0x7D62E2FAL;
        int32_t l_915 = 0xAE93D8B9L;
        int32_t l_916 = 9L;
        int32_t l_920 = 0x1483F3CDL;
        int32_t l_922 = 0xF948C912L;
        int32_t l_923 = 0x7075E23EL;
        int32_t l_925 = 0xF67BE844L;
        int32_t l_926[2][2][2] = {{{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)}}};
        int16_t l_976 = 1L;
        union U2 l_989[1] = {{1L}};
        uint64_t * const **l_999[1];
        uint8_t l_1083[3][6][5] = {{{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL}},{{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL}},{{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL},{1UL,253UL,1UL,1UL,1UL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_999[i] = &g_473;
        for (g_127 = 19; (g_127 != 39); g_127++)
        { 
            int16_t *l_876 = &g_701;
            const int32_t l_881 = 0xBF961C37L;
            uint8_t *l_882[6][3] = {{&g_183,&g_110,&g_183},{&g_110,&g_110,&g_183},{(void*)0,&g_110,(void*)0},{&g_110,&g_183,&g_183},{&g_183,&g_110,&g_183},{&g_110,&g_110,&g_183}};
            int8_t l_883 = 1L;
            int8_t *l_885 = &g_103;
            int32_t l_917 = 0x0BF0A138L;
            int32_t l_919 = 0xEDD284D1L;
            int32_t l_921 = (-1L);
            int32_t l_931 = 0x01417452L;
            int32_t l_932 = 0x391F8600L;
            int32_t l_934 = 1L;
            int32_t l_936[1][7] = {{0xC9029E08L,0xC9029E08L,0xC9029E08L,0xC9029E08L,0xC9029E08L,0xC9029E08L,0xC9029E08L}};
            int8_t l_946 = 6L;
            int32_t l_948[4] = {(-10L),(-10L),(-10L),(-10L)};
            struct S0 *l_963 = &g_310;
            struct S0 **l_962 = &l_963;
            uint32_t l_983 = 4294967295UL;
            union U2 l_984 = {0xB5B0FBE2L};
            const uint64_t *l_1005 = &g_1006;
            const uint64_t **l_1004 = &l_1005;
            const uint64_t ***l_1003[5][3][4] = {{{&l_1004,&l_1004,&l_1004,&l_1004},{&l_1004,&l_1004,(void*)0,&l_1004},{&l_1004,&l_1004,&l_1004,&l_1004}},{{&l_1004,&l_1004,&l_1004,&l_1004},{&l_1004,&l_1004,(void*)0,&l_1004},{&l_1004,(void*)0,&l_1004,&l_1004}},{{&l_1004,&l_1004,&l_1004,&l_1004},{&l_1004,(void*)0,&l_1004,&l_1004},{&l_1004,&l_1004,&l_1004,&l_1004}},{{&l_1004,&l_1004,&l_1004,&l_1004},{&l_1004,&l_1004,&l_1004,&l_1004},{&l_1004,&l_1004,&l_1004,&l_1004}},{{&l_1004,&l_1004,&l_1004,&l_1004},{&l_1004,&l_1004,&l_1004,&l_1004},{&l_1004,&l_1004,(void*)0,&l_1004}}};
            int32_t ***l_1027 = (void*)0;
            int i, j, k;
        }
        (**g_272) ^= p_54;
    }
    return l_1086;
}



static struct S1  func_55(int32_t * p_56, const uint32_t  p_57, uint32_t  p_58, uint64_t * p_59, int32_t * p_60)
{ 
    int32_t l_825 = 0x122466CEL;
    int32_t l_826 = 1L;
    int8_t *l_848 = (void*)0;
    int8_t *l_849 = &g_103;
    int32_t *l_850 = &g_68;
    int8_t l_851 = 0xEBL;
    struct S1 l_852 = {5L,18446744073709551606UL,-5L};
    l_826 &= ((**g_272) = ((~0xABBDA1E34FA0F4EDLL) ^ (g_251.f1 ^ ((((safe_add_func_int32_t_s_s(0xFB11A7FBL, (((5L | ((safe_sub_func_int8_t_s_s(p_58, (0x9A210E639B5CB7ACLL <= l_825))) , g_249.f1)) , l_825) > g_425))) >= 0xA7786779L) <= 0L) == g_251.f1))));
    l_826 = (safe_lshift_func_int16_t_s_s((g_251.f1 , ((safe_lshift_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(p_58, g_127)), 2)))) > (safe_add_func_uint32_t_u_u((((((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0x29L, 3)) , (safe_rshift_func_int16_t_s_s((+p_57), 2))), (((*l_850) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((*l_849) = 0x41L), 0)), 7)) > g_251.f0)) , g_246.f2))) ^ l_851) , 0xDB1FL) , g_246.f0) && l_825), l_825)))), 1));
    return l_852;
}



static int32_t * func_61(int32_t  p_62, union U2  p_63, int32_t * p_64)
{ 
    int32_t *l_71 = &g_2;
    int32_t **l_70 = &l_71;
    int32_t l_126 = 9L;
    int32_t l_220 = 1L;
    int64_t l_244 = (-9L);
    uint8_t l_275 = 0x8BL;
    int64_t l_282 = 1L;
    int32_t l_285[7];
    uint64_t l_292 = 0x07B98909E302E10DLL;
    int64_t l_426 = 0x38B5E74600435940LL;
    int8_t **l_438 = (void*)0;
    int8_t ***l_437 = &l_438;
    const uint32_t l_440 = 0xA8EF1858L;
    uint8_t *l_441[3];
    const struct S1 l_443 = {-8L,0UL,0xA8162FA7L};
    int32_t l_459[2][5][5] = {{{0xC1CFB1D8L,4L,4L,0xC1CFB1D8L,0x5DC7E0B9L},{1L,0L,8L,0L,0L},{0x57141AA6L,0xC1CFB1D8L,0x57141AA6L,0x5DC7E0B9L,0xC1CFB1D8L},{0L,1L,(-1L),0L,(-1L)},{(-7L),(-7L),0x710C9A36L,0xC1CFB1D8L,(-1L)}},{{0xE935561DL,1L,(-1L),(-1L),1L},{(-1L),4L,0x57141AA6L,(-1L),0x5DC7E0B9L},{0L,1L,8L,1L,0L},{0x57141AA6L,(-7L),4L,0x5DC7E0B9L,(-7L)},{0L,1L,1L,0L,(-1L)}}};
    int64_t l_510 = (-1L);
    uint32_t l_552 = 4294967295UL;
    uint32_t l_571 = 4294967287UL;
    uint64_t l_763 = 0x085D274B314645AELL;
    uint8_t l_768 = 255UL;
    uint64_t *l_816 = &g_197;
    union U2 **l_817 = &g_210;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_285[i] = 0L;
    for (i = 0; i < 3; i++)
        l_441[i] = &g_183;
lbl_225:
    (*l_70) = &g_29;
lbl_547:
    if ((((safe_rshift_func_uint16_t_u_s((**l_70), 6)) >= g_39.f1) , 0x336FDE00L))
    { 
        return p_64;
    }
    else
    { 
        int16_t l_122[4];
        int32_t l_163 = 0xC632DA6AL;
        int8_t *l_199 = &g_113;
        int32_t l_283[4] = {1L,1L,1L,1L};
        int64_t l_287 = (-2L);
        uint64_t *l_301 = (void*)0;
        uint64_t *l_303 = &g_18;
        int8_t l_307[4][2];
        struct S1 l_317 = {0xD47A405CL,3UL,0x4D66F8EDL};
        uint32_t l_373 = 0x66F3951AL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_122[i] = 1L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_307[i][j] = 0xB6L;
        }
        for (p_63.f1 = 0; (p_63.f1 != 0); p_63.f1 = safe_add_func_uint64_t_u_u(p_63.f1, 9))
        { 
            uint16_t l_104 = 65532UL;
            int32_t *l_120 = &g_121;
            int32_t *l_123 = &g_121;
            int32_t *l_124 = &g_121;
            int32_t *l_125[2][1][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint32_t l_146 = 1UL;
            union U2 l_153[5] = {{0xF3EC9324L},{0xF3EC9324L},{0xF3EC9324L},{0xF3EC9324L},{0xF3EC9324L}};
            int8_t *l_178 = &g_113;
            int i, j, k;
            for (p_62 = 0; (p_62 <= 4); p_62 += 1)
            { 
                int32_t ** const * const l_76 = &l_70;
                struct S1 l_83 = {0L,0UL,4L};
                int32_t *l_114 = &l_83.f2;
                int32_t *l_115 = (void*)0;
                int32_t *l_116[4][7];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_116[i][j] = &l_83.f2;
                }
                for (g_68 = 0; (g_68 <= 4); g_68 += 1)
                { 
                    int32_t ** const *l_78[5][5][3] = {{{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,(void*)0}},{{&l_70,&l_70,&l_70},{&l_70,&l_70,(void*)0},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70}},{{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,(void*)0}},{{&l_70,&l_70,&l_70},{&l_70,&l_70,(void*)0},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70}},{{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70},{&l_70,&l_70,&l_70}}};
                    int32_t ** const **l_77[5][5] = {{&l_78[2][3][2],&l_78[2][3][2],&l_78[1][3][1],&l_78[2][3][2],&l_78[2][3][2]},{&l_78[1][3][1],(void*)0,&l_78[1][3][1],&l_78[1][3][1],(void*)0},{&l_78[2][3][2],&l_78[1][3][1],&l_78[1][3][1],&l_78[2][3][2],&l_78[1][3][1]},{(void*)0,(void*)0,&l_78[1][3][1],(void*)0,(void*)0},{&l_78[1][3][1],&l_78[2][3][2],&l_78[1][3][1],&l_78[1][3][1],&l_78[2][3][2]}};
                    int32_t ** const **l_79 = &l_78[3][1][0];
                    int16_t l_101 = 0x8FA7L;
                    int8_t *l_102 = &g_103;
                    uint8_t *l_109 = &g_110;
                    int i, j, k;
                    (*l_79) = l_76;
                    ++g_80;
                    l_83 = g_39;
                    l_104 = ((1UL ^ (safe_add_func_uint8_t_u_u((+((*l_102) = ((~(safe_mul_func_uint16_t_u_u(g_2, ((!(safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_28[g_68][(g_68 + 1)] , 0x2054L), (((+(((safe_mul_func_int8_t_s_s((((g_98 == &g_99) , (((4294967294UL ^ g_27) & 1L) , 6UL)) , (**l_70)), g_39.f0)) & 65535UL) == p_63.f1)) < 0x8398D9B3EEAC61C7LL) & 0x796DL))), p_62))) , 65534UL)))) == l_101))), g_18))) < (***l_76));
                    g_113 = ((p_63.f1 , (safe_rshift_func_int8_t_s_u(g_29, 3))) != (!(+((*l_109)++))));
                }
                ++g_117;
                for (l_83.f0 = 1; (l_83.f0 <= 4); l_83.f0 += 1)
                { 
                }
            }
            g_127--;
            for (g_113 = (-11); (g_113 < 26); g_113 = safe_add_func_int32_t_s_s(g_113, 7))
            { 
                int32_t l_151 = (-3L);
                int32_t *l_186 = &l_126;
                if ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(p_63.f1, ((safe_div_func_int8_t_s_s((-9L), 0xABL)) < ((safe_sub_func_uint32_t_u_u((p_63.f0 , (((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_146, (l_122[2] , (safe_div_func_int32_t_s_s(((((safe_add_func_int32_t_s_s((0xEFE7L != p_63.f0), p_63.f0)) , g_39.f1) & l_151) , (**g_99)), (*p_64)))))), l_122[3])) && p_63.f1), l_122[3])) && g_127) , 4294967295UL)), (-1L))) & p_63.f1)))), 0x66949726L)))
                { 
                    int8_t *l_161 = &g_103;
                    uint8_t *l_162 = &g_110;
                    (*l_70) = l_125[1][0][3];
                    l_163 |= (((~((*l_120) &= (((*p_64) < (*p_64)) > (l_153[4] , ((p_63.f1 != (18446744073709551615UL == (safe_mul_func_uint8_t_u_u(((*l_162) = (!(safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(((*l_161) ^= 0x4DL), (18446744073709551607UL ^ 18446744073709551615UL))), 0x3DF0C45E9BC94048LL)))), g_39.f1)))) , 0L))))) || g_27) , 0xB16568BFL);
                    return p_64;
                }
                else
                { 
                    const int32_t ****l_164 = &g_98;
                    uint8_t *l_173 = &g_110;
                    uint8_t *l_182[5][4] = {{&g_183,&g_183,&g_183,&g_183},{&g_183,(void*)0,&g_183,&g_183},{&g_183,(void*)0,&g_183,(void*)0},{(void*)0,&g_183,&g_183,(void*)0},{&g_183,(void*)0,&g_183,&g_183}};
                    uint8_t **l_181 = &l_182[3][1];
                    uint8_t *l_185[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint8_t **l_184 = &l_185[4];
                    int32_t *l_187 = &l_126;
                    int i, j;
                    l_164 = &g_98;
                    (*l_120) = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((0UL || (safe_mod_func_uint16_t_u_u((0x888D3F9E7EE7FC08LL & (safe_rshift_func_uint8_t_u_u(((*l_173)++), ((safe_lshift_func_uint16_t_u_u(((void*)0 == l_178), 12)) > (safe_mod_func_int16_t_s_s((((*l_184) = ((*l_181) = (void*)0)) == l_178), 0x1A12L)))))), (*l_124)))), p_62)), 10));
                    (*g_99) = (*l_70);
                    return p_64;
                }
            }
        }
        for (l_163 = 0; (l_163 <= 4); l_163 += 1)
        { 
            int16_t l_189 = 0x4CD8L;
            uint8_t *l_192 = &g_183;
            int32_t *l_201 = &g_121;
            int32_t l_221 = (-1L);
            uint8_t *l_230 = &g_183;
            int32_t l_278 = (-1L);
            int32_t l_279 = 0xB7EF6DE3L;
            int32_t l_280 = 1L;
            int32_t l_281 = 0x7CFD0987L;
            int32_t l_284 = 0x22A03B29L;
            int32_t l_286 = (-3L);
            int32_t l_288 = 1L;
            int32_t l_289 = (-1L);
            int32_t l_291 = 0x62FF8B2BL;
            uint64_t *l_300 = (void*)0;
            if (((((((g_188 , &p_64) != (void*)0) < (l_189 || (safe_add_func_uint8_t_u_u(((*l_192) |= g_121), ((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_197 <= p_62), p_63.f1)), g_80)) , 0x7AL))))) < l_122[2]) && 250UL) >= p_63.f1))
            { 
                int8_t *l_198 = &g_113;
                int32_t l_208 = (-10L);
                struct S1 *l_245 = &g_246;
                struct S1 *l_247 = (void*)0;
                struct S1 *l_248 = &g_249;
                struct S1 *l_250 = &g_251;
                if ((l_198 == l_199))
                { 
                    return &g_121;
                }
                else
                { 
                    int32_t *l_200 = &l_126;
                    (*l_200) |= (-1L);
                    (*g_99) = l_201;
                    if ((*l_200))
                        break;
                }
                for (l_126 = 1; (l_126 <= 4); l_126 += 1)
                { 
                    const uint64_t l_209 = 0xA08047370D5C253CLL;
                    union U2 *l_213 = &g_188;
                    union U2 **l_212 = &l_213;
                    int8_t **l_217 = &l_199;
                    int8_t ***l_216 = &l_217;
                    int32_t *l_218[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    (*l_212) = (g_210 = (((g_68 <= g_197) <= ((g_28[l_126][l_163] , (p_62 , (safe_lshift_func_int8_t_s_s(((g_39.f2 < ((*l_201) , (safe_div_func_int16_t_s_s((((((((--p_63.f1) <= p_62) ^ l_208) , (void*)0) == &g_110) == 0x489FCF54L) != l_209), (**l_70))))) , g_68), p_62)))) , g_110)) , &p_63));
                    (*l_216) = ((safe_lshift_func_int8_t_s_s(((-1L) ^ (*l_71)), 6)) , &l_199);
                    if ((*p_64))
                        break;
                    --g_222;
                }
                if (g_117)
                    goto lbl_225;
                for (l_220 = 0; (l_220 <= 4); l_220 += 1)
                { 
                    int32_t l_236[4][6] = {{0x2812E112L,1L,1L,0x2812E112L,1L,1L},{0x2812E112L,1L,1L,0x2812E112L,1L,1L},{0x2812E112L,1L,1L,0x2812E112L,1L,1L},{0x2812E112L,1L,1L,0x2812E112L,1L,1L}};
                    uint64_t **l_242 = (void*)0;
                    uint64_t ***l_241 = &l_242;
                    int32_t *l_243[2][7][1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_243[i][j][k] = (void*)0;
                        }
                    }
                    (*l_201) ^= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((((void*)0 != l_230) ^ (((safe_div_func_uint8_t_u_u((g_233 ^ ((0xB3C188B3BDE5FC08LL < ((safe_sub_func_int8_t_s_s((l_208 != (0xDE1B36AAL || (l_236[1][1] < p_63.f1))), (-1L))) , p_63.f0)) >= g_110)), 0x4AL)) != 7UL) , (*l_71))) ^ p_63.f1), 4)), 0));
                    if ((*p_64))
                        break;
                    (*l_241) = ((safe_rshift_func_int16_t_s_u((0x989E6024L >= ((safe_mul_func_int8_t_s_s(((void*)0 != &g_17[1]), (g_103 = ((l_208 , (((void*)0 != &g_98) | ((*p_64) && (*l_201)))) && l_208)))) , (*p_64))), 15)) , &g_17[2]);
                    l_244 ^= (g_121 = (*p_64));
                }
                (*l_250) = ((*l_248) = ((*l_245) = g_39));
            }
            else
            { 
                int8_t l_261 = 1L;
                int32_t l_262[3][1][2] = {{{0x3C9C0DABL,(-5L)}},{{0x3C9C0DABL,0x3C9C0DABL}},{{(-5L),0x3C9C0DABL}}};
                int32_t l_267 = 0x0ABCD8AEL;
                int64_t l_290[5][6] = {{0L,(-1L),(-9L),1L,0x0815C10D9C3EBA55LL,2L},{2L,0xB72B06D5C7E7E5BDLL,0xA7A5AFDC7F051BE4LL,0xB72B06D5C7E7E5BDLL,2L,(-1L)},{2L,0L,0xB72B06D5C7E7E5BDLL,1L,0xB663F66142BF08DCLL,0xB663F66142BF08DCLL},{0L,0x0815C10D9C3EBA55LL,0x0815C10D9C3EBA55LL,0L,0xA7A5AFDC7F051BE4LL,0xB663F66142BF08DCLL},{(-9L),0xB663F66142BF08DCLL,0xB72B06D5C7E7E5BDLL,(-1L),1L,(-1L)}};
                int i, j, k;
                (*g_99) = (**g_98);
                for (g_251.f0 = 1; (g_251.f0 <= 4); g_251.f0 += 1)
                { 
                    int64_t *l_252 = &l_244;
                    uint32_t *l_259 = (void*)0;
                    uint32_t *l_260[5];
                    uint64_t *l_265 = &g_188.f1;
                    uint64_t *l_266 = &g_222;
                    int32_t *l_268[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *****l_274 = &g_270[2];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_260[i] = &g_117;
                    g_249.f2 &= (((g_253 &= ((*l_252) ^= g_197)) & (safe_sub_func_int16_t_s_s(g_121, ((((safe_mod_func_uint64_t_u_u(((*l_266) |= (((l_262[2][0][0] = (g_28[g_251.f0][(g_251.f0 + 1)] , (l_261 = (~(*l_201))))) && ((p_63.f0 , (((((*g_210) , (((safe_lshift_func_int16_t_s_u(l_261, 15)) | p_63.f0) , g_28[g_251.f0][(g_251.f0 + 1)].f0)) > (***g_98)) , 0UL) < (*l_201))) & l_262[2][0][0])) < 0x32L)), 0xA9B2710EF8BEE2B7LL)) >= l_267) && (*p_64)) != 3UL)))) < 0L);
                    (*l_70) = &l_163;
                    l_274 = g_269;
                    ++l_275;
                    --l_292;
                }
                return p_64;
            }
            for (g_219 = 0; (g_219 <= 4); g_219 += 1)
            { 
                uint16_t l_295 = 0xBCEBL;
                uint64_t **l_302 = &l_300;
                struct S1 l_304 = {-1L,0x25233B76L,0xB8550A6AL};
                uint64_t *l_305 = &g_222;
                uint64_t *l_306 = &g_188.f1;
            }
        }
        if (((*l_71) ^ (+g_2)))
        { 
            uint64_t l_320 = 0UL;
            int32_t l_321 = 0L;
            int32_t *l_322 = &l_285[1];
            uint8_t *l_323[2][1][2];
            int32_t ****l_334 = &g_271;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_323[i][j][k] = &l_275;
                }
            }
            (*l_322) ^= (safe_unary_minus_func_uint16_t_u(((g_310 , p_63.f0) >= (safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((((l_317 , (*g_210)) , (safe_add_func_uint16_t_u_u((((***g_271) = (((void*)0 == &l_287) , (-5L))) == 0x05EEFE5FL), g_183))) & p_62) > g_117), l_163)), p_63.f1)) , l_320), l_321)))));
            (****l_334) &= (((((g_183 &= 0x65L) | ((*l_199) = ((void*)0 != &l_275))) < (**l_70)) , ((safe_div_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((((((safe_rshift_func_uint8_t_u_s(((l_317 , ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_334 != (*g_269)) & g_117), (*l_71))), 15)) || 1UL)) == g_233), 3)) , (void*)0) != (*l_334)) , 0xB7F8L) < g_310.f0), p_63.f0)) , p_63.f0) , p_64) != p_64), 0xF2L)) & p_63.f1)) <= (-1L));
            (***g_271) = (**l_70);
        }
        else
        { 
            int32_t l_343 = 1L;
            int32_t *****l_346 = &g_270[0];
            const int32_t ****l_348 = &g_98;
            const int32_t *****l_347[2];
            int16_t l_368 = (-1L);
            int32_t l_369 = (-1L);
            int8_t l_370 = 0x6CL;
            int32_t l_371 = 7L;
            int32_t l_372 = 0xAFFD6F66L;
            int64_t *l_421 = &l_244;
            int64_t **l_420[6][4] = {{&l_421,(void*)0,&l_421,(void*)0},{(void*)0,&l_421,(void*)0,(void*)0},{(void*)0,(void*)0,&l_421,&l_421},{&l_421,(void*)0,&l_421,(void*)0},{(void*)0,&l_421,(void*)0,&l_421},{(void*)0,&l_421,&l_421,(void*)0}};
            uint16_t *l_424 = &g_425;
            int i, j;
            for (i = 0; i < 2; i++)
                l_347[i] = &l_348;
            for (g_117 = 0; (g_117 <= 3); g_117 += 1)
            { 
                int32_t *l_361 = &g_249.f2;
                int32_t *l_362 = (void*)0;
                int32_t *l_363 = &l_163;
                int32_t *l_364 = &g_251.f2;
                int32_t *l_365 = (void*)0;
                int32_t *l_366 = &g_246.f2;
                int32_t *l_367[2];
                int32_t ***l_376 = &l_70;
                int i;
                for (i = 0; i < 2; i++)
                    l_367[i] = (void*)0;
                if (((**g_272) = ((safe_add_func_uint64_t_u_u(l_122[g_117], (&p_64 != (*g_271)))) < (safe_div_func_uint32_t_u_u(p_63.f1, l_122[g_117])))))
                { 
                    int32_t l_357 = 0x73AB003CL;
                    (***g_271) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_343, p_62)), (safe_lshift_func_int8_t_s_s(((((l_346 == (l_347[0] = (void*)0)) > ((p_63.f1 ^ (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_122[g_117], 3)), (safe_sub_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((((*g_210) , p_62) > p_63.f1) ^ (*p_64)), (****l_348))) < g_183), g_197))))) && (-5L))) <= 0UL) != l_287), 4)))) <= l_357);
                }
                else
                { 
                    uint32_t l_358 = 0UL;
                    l_358--;
                }
                ++l_373;
                (*l_366) ^= (l_376 == (p_63 , l_376));
                for (g_80 = 0; (g_80 <= 3); g_80 += 1)
                { 
                    uint32_t *l_377 = &l_373;
                    int32_t l_394 = 0x1F049ECDL;
                    union U2 **l_400 = &g_210;
                    union U2 ***l_399 = &l_400;
                    int16_t *l_407 = (void*)0;
                    int16_t *l_408 = (void*)0;
                    uint32_t *l_409[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_409[i] = &g_410;
                    (**g_272) = ((*l_366) ^= (((*l_377) &= ((**l_70) & 0xB50DL)) , ((safe_add_func_uint8_t_u_u(((((((*g_210) , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(0xB686L, p_62)), (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(((***g_271) & ((((-1L) != p_62) || 2L) , 1L)), (**l_70))) < 4L), 0x58BB53B4L)) < 6L), l_394)) != 0x0320F738L), p_63.f0)))), 5))) , 0UL) & g_251.f2) > 1UL) < 1L), 0x95L)) , (**g_99))));
                    (*l_361) = ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((*l_399) = &g_210) != (void*)0), 5)), (safe_rshift_func_int8_t_s_u((l_122[2] | (((g_410 = (safe_lshift_func_uint8_t_u_s(g_253, (safe_mod_func_int16_t_s_s((g_219 = (p_63.f1 && 0xB5A4F82BEE0BD0EFLL)), (0L | p_63.f1)))))) < l_283[1]) ^ p_63.f0)), g_197)))) & (*p_64));
                    (*l_366) = ((((((***g_271) >= 4294967295UL) < (g_127 || l_122[g_117])) >= p_63.f1) == l_317.f2) , ((((((*l_199) = ((((safe_div_func_uint64_t_u_u((!g_246.f1), (-3L))) == 255UL) != (**l_70)) , 1L)) && 1L) , g_414) && p_63.f0) & 0xFA32L));
                }
            }
            (*g_273) &= ((0x3BC9L != (+(safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((((g_422 = (void*)0) != g_17[1]) < ((*l_424) = ((l_122[2] < 0x89D009ECL) >= (!(0x9D5CL || (-1L)))))), 0x9C19L)) == p_62) , (*p_64)), 0L)))) >= l_426);
        }
        (*g_273) = (*p_64);
        if (g_233)
            goto lbl_225;
    }
    if ((p_63.f1 , (((+(g_183 ^= (g_246.f0 >= ((safe_lshift_func_uint8_t_u_u(((+(g_113 ^= ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((*l_71), (0UL >= (*l_71)))), 3)) && g_410))) && (((safe_sub_func_int64_t_s_s(((l_437 != (void*)0) <= g_439), p_63.f1)) ^ p_63.f0) , g_211.f0)), l_440)) || 0xA5905D4AL)))) , p_62) > (*l_71))))
    { 
        struct S1 l_457 = {0x2D2B86AEL,1UL,0xE8E34023L};
        int32_t l_461[6][3] = {{0x85BB232AL,(-9L),0x85BB232AL},{0L,0x323D87D2L,0L},{0x85BB232AL,(-9L),0x85BB232AL},{0L,0x323D87D2L,0L},{0x85BB232AL,(-9L),0x85BB232AL},{0L,0x323D87D2L,0L}};
        const uint8_t l_467 = 0UL;
        uint64_t **l_482 = &g_17[2];
        uint64_t ***l_481[3][1][4] = {{{&l_482,&l_482,&l_482,&l_482}},{{&l_482,&l_482,&l_482,&l_482}},{{&l_482,&l_482,&l_482,&l_482}}};
        int32_t ***l_532 = &l_70;
        int8_t *l_537 = &g_103;
        const union U2 *l_555 = &g_188;
        const union U2 **l_580 = (void*)0;
        const union U2 ***l_579 = &l_580;
        uint16_t l_599[3];
        uint32_t l_617 = 18446744073709551610UL;
        uint16_t l_649 = 0UL;
        union U2 l_662 = {0x5169D51CL};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_599[i] = 65535UL;
        for (g_414 = 3; (g_414 >= 0); g_414 -= 1)
        { 
            int16_t *l_442 = &g_219;
            uint32_t *l_448 = (void*)0;
            uint32_t *l_449 = &g_117;
            int32_t l_452[6][3] = {{(-2L),(-1L),0x7E93E1E0L},{(-2L),(-2L),(-1L)},{0x4B1D3F4DL,(-1L),(-1L)},{(-1L),(-2L),8L},{0x7E93E1E0L,(-2L),0x7E93E1E0L},{(-1L),0x4B1D3F4DL,8L}};
            int8_t *l_453 = (void*)0;
            int8_t *l_454 = &g_103;
            int32_t *l_455 = &g_249.f2;
            struct S1 *l_456[6] = {(void*)0,&g_246,(void*)0,(void*)0,&g_246,(void*)0};
            int32_t *l_460[3][1];
            uint64_t l_462 = 0x2B00364C4400A923LL;
            struct S0 l_471 = {1,-42};
            int32_t *l_483[2];
            const int32_t l_509 = 0L;
            int32_t l_517 = 0xDB613FB3L;
            int64_t l_541 = 1L;
            union U2 l_578[6][7][6] = {{{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}}},{{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}}},{{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}}},{{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}}},{{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x47B027DCL},{0x48E98236L},{0x47B027DCL}},{{0x47B027DCL},{0x48E98236L},{0x47B027DCL},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}}},{{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}},{{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L},{0x840EFFD0L},{0x47B027DCL},{0x840EFFD0L}}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_460[i][j] = &g_251.f2;
            }
            for (i = 0; i < 2; i++)
                l_483[i] = &g_246.f2;
            (*l_455) &= (((*l_442) ^= g_246.f1) == ((18446744073709551607UL <= p_62) <= (l_443 , (p_63.f1 || ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_410, ((*l_454) &= ((((*l_449)--) & ((*g_273) &= l_452[3][1])) != 0x45F4L)))), 0xA4ACL)) && 0xB8571C0BE7F1C5C8LL)))));
            g_249 = (l_457 = g_246);
            l_459[0][3][1] ^= (l_452[3][1] &= ((l_457.f2 & (((*l_442) = g_39.f2) == ((*l_455) || (safe_unary_minus_func_uint64_t_u(0xCCD8F38D1ADCE236LL))))) || ((-1L) <= (((***g_98) | (**l_70)) <= 1UL))));
            --l_462;
            if ((((safe_add_func_int32_t_s_s(l_467, (!((**g_272) = (((((safe_sub_func_uint8_t_u_u((((l_471 = g_310) , g_472) != ((+(safe_lshift_func_uint8_t_u_s((~((!3L) , (safe_lshift_func_uint16_t_u_s(p_62, 9)))), g_39.f1))) , l_481[0][0][2])), p_63.f0)) , 18446744073709551608UL) > p_63.f1) & l_457.f1) , 0L))))) > (-1L)) ^ g_39.f2))
            { 
                return l_483[0];
            }
            else
            { 
                uint32_t l_490[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                uint32_t *l_493 = &l_490[2];
                int i;
                p_64 = p_64;
                l_461[1][1] &= (((*l_71) <= ((safe_add_func_uint32_t_u_u(p_63.f1, (((safe_lshift_func_uint16_t_u_s(l_467, g_183)) >= (1UL <= ((*l_455) , (safe_lshift_func_uint8_t_u_s(((p_63.f1 >= (-10L)) , p_63.f1), 0))))) > g_39.f2))) || g_310.f0)) >= 1L);
                l_490[2]--;
                (*g_99) = ((**g_271) = (g_249 , (((*l_493) = g_249.f2) , (**g_271))));
            }
            for (l_275 = 0; (l_275 <= 4); l_275 += 1)
            { 
                uint32_t l_507 = 1UL;
                int64_t *l_508 = &l_426;
                int32_t l_511 = 0x1B891AE4L;
                const int8_t l_542 = (-5L);
                struct S0 l_563 = {0,-101};
                int8_t **l_588 = &l_453;
                (***g_271) ^= 3L;
                l_511 &= (l_510 = (((void*)0 != (*g_269)) == (((safe_sub_func_int32_t_s_s(((*g_273) = (65529UL || (safe_rshift_func_int8_t_s_s((l_461[5][1] , (safe_mul_func_uint8_t_u_u((((-1L) < ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((((safe_sub_func_int64_t_s_s(((*l_508) &= (safe_add_func_uint16_t_u_u((l_507 = p_63.f1), p_62))), (***g_472))) > l_509) , p_62))), p_63.f0)) , l_507)) || (-1L)), g_183))), 3)))), 0x117F9502L)) <= (**l_70)) && l_507)));
                for (l_244 = 4; (l_244 >= 1); l_244 -= 1)
                { 
                    uint32_t l_523 = 0xE85A905CL;
                    int32_t ***l_533 = (void*)0;
                    int8_t **l_536[7] = {&l_454,&l_453,&l_454,&l_454,&l_453,&l_454,&l_454};
                    int i, j;
                    (**g_272) &= ((*l_455) = (((safe_mul_func_int8_t_s_s((p_62 <= (safe_sub_func_int8_t_s_s((~(-1L)), g_222))), l_517)) , (~(((***g_472) <= (safe_div_func_uint64_t_u_u(p_62, (safe_lshift_func_int8_t_s_u((l_523 == g_103), 1))))) == g_410))) < p_63.f1));
                    (**g_272) = ((*l_455) = ((safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_39.f1, (((((safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((l_532 == (l_533 = l_532)), p_63.f1)) , (safe_lshift_func_int8_t_s_s(0xFFL, 7))), (*l_71))) <= ((l_537 = &g_113) != &g_103)) != g_538) | p_62) , p_62))) <= g_39.f1), (*l_71))) == g_80));
                    l_541 &= ((***l_532) && ((g_249.f1 ^ ((((p_63.f0 < ((safe_div_func_uint64_t_u_u(((((l_511 ^= ((l_532 != l_532) < (***l_532))) ^ ((*l_508) &= 1L)) < p_63.f1) > p_63.f1), p_63.f0)) , (***l_532))) <= l_507) , g_28[l_244][(l_244 + 1)]) , (*l_71))) <= 0L));
                    if (l_542)
                        break;
                }
                if ((safe_lshift_func_int16_t_s_s(((*l_442) = g_127), 2)))
                { 
                    const struct S1 *l_546 = &l_457;
                    const struct S1 **l_545 = &l_546;
                    (*l_545) = &l_443;
                    if (g_251.f0)
                        goto lbl_547;
                }
                else
                { 
                    int64_t l_564 = (-1L);
                    (*l_455) &= (l_511 = (safe_mul_func_int8_t_s_s((g_249.f0 && (255UL < (-8L))), 0x13L)));
                    (**g_272) &= (-1L);
                    (*l_455) = (((safe_sub_func_int16_t_s_s((((*l_454) = ((((((((((((((l_552 != (*p_64)) && g_439) || (safe_add_func_int8_t_s_s(((void*)0 == l_555), (g_110 |= ((((((safe_unary_minus_func_int32_t_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(255UL, (safe_sub_func_uint64_t_u_u(l_511, 0xF9DDB4A6A5043BDELL)))), p_63.f0)))) == p_63.f1) > 0x54E5022AL) <= p_63.f0) , (*g_473)) != (void*)0))))) , l_563) , (-8L)) , 1UL) == p_63.f1) < 65535UL) != p_63.f0) , (-1L)) >= (-1L)) > p_63.f1) != l_564) ^ g_183)) , 0L), 0x4FB1L)) && 0x814ACB7FL) , (*p_64));
                    (*l_455) |= ((g_113 >= p_63.f1) < p_63.f1);
                }
                for (g_538 = 0; (g_538 < 26); g_538++)
                { 
                    int8_t **l_587 = &l_537;
                    int8_t ****l_591 = &l_437;
                    (**g_272) = (((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((((*l_455) = (l_571 > (p_62 ^ (-1L)))) ^ ((((safe_mul_func_int16_t_s_s((((g_127 , (void*)0) == (((*l_449) = p_63.f1) , &g_410)) == p_62), 1UL)) | p_63.f1) | 0xC1L) == (**l_70))), g_439)), g_249.f0)) >= 18446744073709551608UL) || 0x1788L);
                    (**g_98) = p_64;
                    (*l_455) |= (((safe_div_func_uint32_t_u_u((***l_532), (**l_70))) , (safe_div_func_uint32_t_u_u(((l_578[4][1][1] , l_579) == g_581), (((safe_mul_func_uint16_t_u_u(((***l_532) <= (safe_mod_func_int64_t_s_s((((*l_587) = &g_113) == &g_113), p_62))), 65535UL)) != p_62) , (***g_98))))) , (-6L));
                    g_589 = l_588;
                    g_592 = l_591;
                }
            }
        }
        if (((*g_273) = 1L))
        { 
            uint32_t l_594 = 0UL;
            ++l_594;
        }
        else
        { 
            uint32_t l_600[3][2];
            int32_t * const l_601 = &g_251.f0;
            struct S1 l_609[2] = {{0x131B12D0L,0x62FF1721L,5L},{0x131B12D0L,0x62FF1721L,5L}};
            struct S1 l_610[4][3][5] = {{{{0x5D42B5DDL,18446744073709551615UL,0xA0F7C01EL},{-5L,18446744073709551613UL,0x73459280L},{-1L,1UL,5L},{-4L,0x87084355L,1L},{1L,0x1E0EE7DCL,0L}},{{-5L,18446744073709551613UL,0x73459280L},{0x5D42B5DDL,18446744073709551615UL,0xA0F7C01EL},{0xA009D41EL,0x5FCB93AAL,-1L},{-4L,1UL,0xDE27A1D9L},{-4L,0x87084355L,1L}},{{6L,0x9344F34BL,0L},{0x131A09C9L,0xC12A8732L,-1L},{8L,0xBD44E643L,-1L},{0x131A09C9L,0xC12A8732L,-1L},{6L,0x9344F34BL,0L}}},{{{0xA009D41EL,0x5FCB93AAL,-1L},{0x131A09C9L,0xC12A8732L,-1L},{0x5D42B5DDL,18446744073709551615UL,0xA0F7C01EL},{0x02927BB6L,18446744073709551614UL,0x165C7628L},{-1L,18446744073709551611UL,7L}},{{-1L,18446744073709551611UL,7L},{0x5D42B5DDL,18446744073709551615UL,0xA0F7C01EL},{-4L,0x87084355L,1L},{6L,0x9344F34BL,0L},{-3L,0xA7EF65A4L,0x45C7B378L}},{{0x131A09C9L,0xC12A8732L,-1L},{-5L,18446744073709551613UL,0x73459280L},{-1L,18446744073709551609UL,0xBF6CD0ADL},{0x131A09C9L,0xC12A8732L,-1L},{-1L,18446744073709551611UL,7L}}},{{{2L,0xA7779A55L,1L},{6L,0x9344F34BL,0L},{-1L,1UL,5L},{-1L,1UL,5L},{6L,0x9344F34BL,0L}},{{-1L,18446744073709551611UL,7L},{0xA009D41EL,0x5FCB93AAL,-1L},{-1L,1UL,5L},{1L,0x1E0EE7DCL,0L},{-4L,0x87084355L,1L}},{{-5L,18446744073709551613UL,0x73459280L},{-1L,18446744073709551611UL,7L},{-1L,18446744073709551609UL,0xBF6CD0ADL},{-4L,1UL,0xDE27A1D9L},{1L,0x1E0EE7DCL,0L}}},{{{0x02927BB6L,18446744073709551614UL,0x165C7628L},{0x131A09C9L,0xC12A8732L,-1L},{-4L,0x87084355L,1L},{2L,0xA7779A55L,1L},{6L,0x9344F34BL,0L}},{{-5L,18446744073709551613UL,0x73459280L},{2L,0xA7779A55L,1L},{0x5D42B5DDL,18446744073709551615UL,0xA0F7C01EL},{6L,0x9344F34BL,0L},{0x5D42B5DDL,18446744073709551615UL,0xA0F7C01EL}},{{-1L,18446744073709551611UL,7L},{-1L,18446744073709551611UL,7L},{8L,0xBD44E643L,-1L},{6L,0x9344F34BL,0L},{0xB4789E3EL,1UL,8L}}}};
            struct S0 l_612 = {0,-39};
            int32_t *l_705 = (void*)0;
            int32_t l_749 = 0x5C01C0B1L;
            int32_t l_753 = 2L;
            int32_t l_754 = 3L;
            int32_t l_755 = (-1L);
            int32_t l_757 = (-5L);
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_600[i][j] = 0xE6ABA468L;
            }
            for (g_538 = 0; (g_538 != (-5)); g_538 = safe_sub_func_uint8_t_u_u(g_538, 5))
            { 
                uint16_t *l_602 = &g_425;
                struct S1 *l_606 = &l_457;
                struct S1 *l_607 = (void*)0;
                struct S1 *l_608[3][4][6] = {{{&g_39,&g_249,&g_39,&g_39,&g_249,&g_39},{&g_39,&g_249,&g_39,&g_39,&g_249,&g_39},{&g_39,&g_249,&g_39,&g_39,&g_249,&g_39},{&g_39,&g_249,&g_39,&g_39,&g_249,&g_39}},{{&g_39,&g_249,&g_39,&g_39,&g_249,&g_39},{&g_39,&g_249,&g_39,&g_39,&g_249,&g_39},{&g_39,&g_249,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39}},{{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39},{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39}}};
                int32_t *l_611 = &l_459[0][3][1];
                struct S0 *l_613[4];
                int32_t *l_614 = (void*)0;
                int32_t *l_615 = &g_121;
                int32_t *l_616[1][3];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_613[i] = &l_612;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_616[i][j] = &l_461[5][1];
                }
                (*g_273) ^= l_599[0];
                (*l_611) = (((((0xC7B2L ^ (((*l_602) = ((l_461[5][1] = l_600[1][0]) == (&p_62 == l_601))) , (safe_sub_func_uint16_t_u_u(((**l_70) <= 249UL), (((***g_271) = ((((+((l_610[2][0][1] = (g_249 = (l_609[1] = ((*l_606) = g_246)))) , g_310.f1)) <= 0L) | g_253) & (*l_71))) > p_62))))) < (***l_532)) , (void*)0) != &p_64) , (*g_273));
                l_612 = l_612;
                ++l_617;
            }
            (*g_273) = (*p_64);
            if ((**l_70))
            { 
                struct S0 *l_629 = &g_28[1][5];
                union U2 ***l_640 = &g_582[1][0];
                int32_t l_643 = 1L;
                int32_t l_645 = 0L;
                int32_t l_646 = (-1L);
                for (l_426 = (-26); (l_426 >= 10); ++l_426)
                { 
                    int16_t l_622 = (-1L);
                    uint16_t l_623 = 0x17D1L;
                    struct S0 *l_628 = &l_612;
                    uint16_t *l_644 = &l_599[0];
                    l_623--;
                    l_646 = ((((safe_add_func_int8_t_s_s(((((l_628 == l_629) , (l_645 |= ((((*l_644) = (safe_sub_func_uint8_t_u_u(0x57L, ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(8UL, (safe_rshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s(((l_643 = ((l_640 != (void*)0) ^ (safe_rshift_func_uint8_t_u_s(0xFBL, p_63.f0)))) < (-2L)), p_63.f0)) > 65531UL), 4)))), 2)) | p_63.f0)))) | l_612.f0) >= l_610[2][0][1].f1))) , 0UL) | g_251.f1), (-1L))) >= (**l_70)) >= l_609[1].f1) > p_63.f1);
                    return (*g_272);
                }
            }
            else
            { 
                int32_t l_670 = (-1L);
                uint16_t *l_685 = (void*)0;
                uint32_t *l_689 = &l_571;
                for (g_249.f2 = 0; (g_249.f2 != (-24)); g_249.f2--)
                { 
                    struct S1 l_671 = {0L,0x18E9C636L,0xA2636452L};
                    struct S1 *l_672 = &l_457;
                    if (l_649)
                        break;
                    if ((*p_64))
                        break;
                    (**g_98) = ((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(g_110, 5)) & (((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_s((l_662 , (-6L)), 2)))) | ((safe_sub_func_uint32_t_u_u(g_410, (0UL & ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_s(((p_63.f1 != g_233) != 1UL), p_63.f0)))), (***l_532))) != p_62)))) == 7L)))), 2)), p_63.f0)) ^ (-1L)) , 0L)), l_670)) , (*p_64)) || g_222) , (void*)0);
                    (*l_672) = l_671;
                    (**g_271) = (**g_271);
                }
                for (g_110 = 0; (g_110 <= 1); g_110 = safe_add_func_uint32_t_u_u(g_110, 6))
                { 
                    uint32_t *l_677 = &l_600[2][1];
                    uint16_t **l_686 = &l_685;
                    (*g_273) &= (safe_sub_func_uint16_t_u_u((((*l_677) &= g_246.f1) , g_310.f1), (safe_div_func_uint32_t_u_u((((*l_686) = ((((safe_mod_func_int16_t_s_s(p_63.f0, 0xF4EBL)) && (!p_63.f1)) == (safe_lshift_func_uint16_t_u_u((&l_532 != (void*)0), 9))) , l_685)) == &g_425), (-1L)))));
                    return (**g_271);
                }
                (***g_271) = ((safe_add_func_uint32_t_u_u((--(*l_689)), (***g_271))) == 0xCE11E874L);
            }
            for (g_425 = 0; (g_425 == 36); g_425++)
            { 
                uint64_t l_702 = 0xE1BC093BC55241C0LL;
                const struct S1 **l_729 = (void*)0;
                const union U2 l_735 = {-1L};
                int32_t l_748 = 0xDF463F96L;
                int32_t l_750 = 0x8C4700DFL;
                int32_t l_751 = 0x73F015CEL;
                int16_t l_752 = (-1L);
                int32_t l_756[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_756[i] = 0xA80D57CEL;
                for (l_275 = 0; (l_275 <= 1); l_275 += 1)
                { 
                    int32_t *l_694 = &g_246.f2;
                    int32_t *l_695 = &g_249.f2;
                    int32_t *l_696 = &l_285[1];
                    int32_t *l_697 = (void*)0;
                    int32_t *l_698 = &g_121;
                    int32_t *l_699 = &g_249.f2;
                    int32_t *l_700[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_700[i] = (void*)0;
                    ++l_702;
                }
                for (l_702 = 0; (l_702 <= 0); l_702 += 1)
                { 
                    int32_t l_717 = 0xA7AA39FBL;
                    int i;
                    (*g_99) = ((*l_70) = l_705);
                    (**g_272) &= ((*p_64) <= (g_310 , (safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((0x95L <= (((safe_mul_func_int8_t_s_s(((*l_537) = l_702), l_702)) >= (safe_unary_minus_func_int16_t_s(0xF0ECL))) , p_63.f1)) ^ 1L) != l_717), 0xD128CC32L)), g_249.f0)) >= 0x8CL), 65535UL)) != p_63.f1), p_63.f0))));
                    if ((*p_64))
                        break;
                }
                if (l_702)
                    break;
                for (g_249.f0 = 0; (g_249.f0 == (-17)); g_249.f0 = safe_sub_func_int32_t_s_s(g_249.f0, 1))
                { 
                    uint32_t l_722[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
                    int64_t *l_730 = &l_244;
                    int16_t *l_731 = &g_219;
                    int16_t *l_732 = &g_701;
                    int i;
                    (***g_271) = (safe_sub_func_int16_t_s_s(((*l_732) &= (l_722[3] , ((*l_731) = (safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((void*)0 == &g_422), (g_183 = (p_62 , (((*l_730) = (safe_div_func_uint16_t_u_u(65535UL, ((((void*)0 != l_729) < p_63.f0) & l_722[1])))) > 8L))))) , g_211.f0), p_63.f1))))), g_29));
                }
                for (l_702 = 13; (l_702 < 59); l_702 = safe_add_func_uint8_t_u_u(l_702, 2))
                { 
                    struct S1 *l_736 = &g_249;
                    struct S1 *l_737 = &l_610[2][0][1];
                    int32_t *l_738 = &l_461[5][1];
                    int32_t *l_739 = (void*)0;
                    int32_t *l_740 = &l_609[1].f2;
                    int32_t *l_741 = &l_126;
                    int32_t *l_742 = &g_538;
                    int32_t *l_743 = &g_538;
                    int32_t *l_744 = &l_126;
                    int32_t *l_745 = &l_609[1].f2;
                    int32_t *l_746 = &g_538;
                    int32_t *l_747[4][7] = {{&g_251.f2,&l_459[0][3][1],&g_251.f2,&l_609[1].f2,&l_459[0][3][1],&g_121,&g_121},{&l_459[0][3][1],&g_246.f2,&g_538,&g_246.f2,&l_459[0][3][1],&g_538,&g_121},{&g_121,&g_121,&l_609[1].f2,&g_121,&l_609[1].f2,&g_121,&g_121},{&g_251.f2,&g_121,&g_121,&l_609[1].f2,&g_121,&l_609[1].f2,&g_121}};
                    uint64_t l_758[4];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_758[i] = 18446744073709551613UL;
                    (*l_737) = (l_735 , ((*l_736) = l_443));
                    l_758[1]--;
                    (***g_271) |= 0xF7567826L;
                    (***g_271) &= (safe_sub_func_uint64_t_u_u((p_63.f0 <= (p_62 != (l_763 = 0UL))), 0x4C46A6D0FF9269D6LL));
                    if ((*p_64))
                        break;
                }
            }
        }
    }
    else
    { 
        int32_t *l_764 = &l_459[0][3][1];
        (*l_764) ^= ((**g_272) = ((void*)0 == p_64));
        return p_64;
    }
    if ((!(safe_add_func_uint64_t_u_u(l_763, (l_768 && (p_63.f0 , ((((((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(0L, (p_62 | g_127))), (((***g_271) = ((*p_64) | 0x6D837F4BL)) >= (*p_64)))), g_18)), g_251.f2)) , g_249) , p_63.f0) >= p_63.f0) <= p_63.f0) == g_39.f2)))))))
    { 
        int32_t l_779 = 0x96E55328L;
        int64_t *l_782 = &l_244;
        int32_t l_795[5];
        uint16_t l_808 = 65535UL;
        int i;
        for (i = 0; i < 5; i++)
            l_795[i] = 0x0D551355L;
        (***g_271) = (safe_mul_func_int8_t_s_s(l_779, (safe_add_func_int8_t_s_s((((*l_782) &= 0xC89938D1CC87EE8ALL) && p_62), 0x59L))));
        for (g_211.f1 = 24; (g_211.f1 == 35); g_211.f1 = safe_add_func_int16_t_s_s(g_211.f1, 1))
        { 
            uint64_t l_794 = 0x5EC2A538F64CF73BLL;
            int32_t l_802 = 0xABC599AFL;
            int32_t l_803 = 0x6BA6B2C7L;
            int32_t l_804 = (-3L);
            int32_t l_805 = (-3L);
            int32_t l_806 = (-7L);
            int32_t l_807[6] = {1L,1L,0x42B142B4L,1L,1L,0x42B142B4L};
            int i;
            (*g_273) |= (p_63 , 0x1C05BFC3L);
            if ((safe_lshift_func_uint16_t_u_u(g_80, 10)))
            { 
                uint64_t l_789 = 0x7C92A2B29262A5B2LL;
                l_779 = (*p_64);
                if ((***g_271))
                    continue;
                for (g_246.f2 = 0; (g_246.f2 > 8); g_246.f2++)
                { 
                    return p_64;
                }
                (***g_271) ^= ((l_789 , ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967295UL, l_794)), g_127)) <= 0xFD4EDA81BAD447B2LL)) == g_246.f1);
            }
            else
            { 
                int32_t l_796 = 0x90174406L;
                int32_t *l_797 = &l_795[2];
                int32_t l_798 = 0L;
                int32_t *l_799 = (void*)0;
                int32_t *l_800 = &g_251.f2;
                int32_t *l_801[1];
                const struct S0 l_811[6] = {{1,-53},{1,-53},{0,-88},{1,-53},{1,-53},{0,-88}};
                uint64_t *l_814[2][5];
                uint64_t **l_815 = &l_814[0][2];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_801[i] = &l_779;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_814[i][j] = &g_18;
                }
                ++l_808;
                (*l_800) = (l_811[1] , ((safe_mul_func_int16_t_s_s((&g_127 != p_64), p_62)) && ((l_816 = ((*l_815) = l_814[1][0])) == ((l_804 &= (g_310.f1 >= l_805)) , &l_794))));
            }
        }
    }
    else
    { 
        uint16_t *l_818 = (void*)0;
        const uint8_t *l_819 = &l_275;
        (*g_273) ^= (((g_425 = (g_39.f1 ^ ((void*)0 == l_817))) , (void*)0) != l_819);
    }
    return p_64;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_28[i][j].f0, "g_28[i][j].f0", print_hash_value);
            transparent_crc(g_28[i][j].f1, "g_28[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_249.f0, "g_249.f0", print_hash_value);
    transparent_crc(g_249.f1, "g_249.f1", print_hash_value);
    transparent_crc(g_249.f2, "g_249.f2", print_hash_value);
    transparent_crc(g_251.f0, "g_251.f0", print_hash_value);
    transparent_crc(g_251.f1, "g_251.f1", print_hash_value);
    transparent_crc(g_251.f2, "g_251.f2", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_310.f0, "g_310.f0", print_hash_value);
    transparent_crc(g_310.f1, "g_310.f1", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1102[i][j][k], "g_1102[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1247, "g_1247", print_hash_value);
    transparent_crc(g_1360.f0, "g_1360.f0", print_hash_value);
    transparent_crc(g_1360.f1, "g_1360.f1", print_hash_value);
    transparent_crc(g_1389, "g_1389", print_hash_value);
    transparent_crc(g_1642, "g_1642", print_hash_value);
    transparent_crc(g_1718, "g_1718", print_hash_value);
    transparent_crc(g_1736, "g_1736", print_hash_value);
    transparent_crc(g_1779, "g_1779", print_hash_value);
    transparent_crc(g_1780, "g_1780", print_hash_value);
    transparent_crc(g_1813, "g_1813", print_hash_value);
    transparent_crc(g_1886, "g_1886", print_hash_value);
    transparent_crc(g_1924.f0, "g_1924.f0", print_hash_value);
    transparent_crc(g_1995.f0, "g_1995.f0", print_hash_value);
    transparent_crc(g_2253, "g_2253", print_hash_value);
    transparent_crc(g_2364.f0, "g_2364.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
