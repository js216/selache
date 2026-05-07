// SPDX-License-Identifier: MIT
// cctest_csmith_39cd9637.c --- cctest case csmith_39cd9637 (csmith seed 969774647)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x11b85dbc */

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

// Options:   -s 969774647 -o /tmp/csmith_gen_9w1qi06c/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 26;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 25;
   int16_t  f1;
};
#pragma pack(pop)

union U2 {
   uint64_t  f0;
   uint64_t  f1;
   int16_t  f2;
   int32_t  f3;
   uint32_t  f4;
};

union U3 {
   signed f0 : 9;
   int32_t  f1;
   int8_t * f2;
   uint32_t  f3;
};


static int32_t g_2[1][6][6] = {{{0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L},{0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L},{0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L},{0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L},{0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L},{0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L}}};
static uint16_t g_18[7][7][5] = {{{65535UL,1UL,0x568CL,0UL,0xCA0CL},{0xFBF2L,0UL,0xE0D6L,65530UL,65530UL},{65533UL,0x5CF8L,65533UL,0xA91EL,8UL},{0xA41AL,65535UL,0xD237L,0xB430L,65535UL},{1UL,6UL,0x33BEL,0x885BL,0x9BADL},{0UL,0xA91EL,0xD237L,65535UL,65535UL},{0UL,0UL,65533UL,2UL,1UL}},{{0UL,65528UL,0xD76DL,0x22A1L,1UL},{65535UL,0xD76DL,65535UL,2UL,1UL},{2UL,65535UL,65528UL,0UL,0UL},{0xCDA2L,0xAAFEL,65535UL,0x5F5AL,65535UL},{0xB11DL,8UL,1UL,0UL,0UL},{0UL,0x0A4DL,65535UL,65530UL,65529UL},{2UL,1UL,65527UL,65532UL,0x4F2AL}},{{0x33BEL,0xA41AL,2UL,0xAAFEL,0UL},{0xCA0CL,65528UL,0x8319L,2UL,0x177FL},{0x6953L,65528UL,0UL,0UL,65535UL},{1UL,0xA41AL,0UL,0x8319L,0xF617L},{65528UL,1UL,0xB430L,65533UL,3UL},{0x8319L,0x0A4DL,0x7675L,3UL,1UL},{0x3E2EL,8UL,0UL,0x97B6L,65535UL}},{{0UL,0xAAFEL,0xA91EL,0x8B26L,0x919DL},{0UL,65535UL,0x568CL,0x0D1CL,0xB430L},{0UL,0xD76DL,0x5CF8L,0x7675L,0x5F5AL},{65528UL,65528UL,0x9BADL,0x9BADL,65528UL},{0x9BADL,0UL,0x58C4L,1UL,0x7675L},{65533UL,0xA91EL,0x0A34L,0x0A4DL,0xCA0CL},{0UL,6UL,65535UL,0UL,65528UL}},{{65533UL,65535UL,65530UL,0xBAF9L,0UL},{0x9BADL,0x5CF8L,0xD2BBL,0xC643L,1UL},{65528UL,65531UL,0UL,1UL,1UL},{0UL,5UL,0x97B6L,0xB80FL,0UL},{0UL,0x7675L,0x3E2EL,65535UL,0xB80FL},{0UL,0UL,65531UL,0UL,0UL},{0x3E2EL,65532UL,65535UL,0x33BEL,65527UL}},{{0x8319L,0x8B26L,0UL,0xBBD4L,0x58F8L},{65528UL,65535UL,0xCDA2L,0UL,0x2A90L},{1UL,0xFB1CL,1UL,0x0A34L,65532UL},{0x6953L,0xCDA2L,0x687CL,0xD76DL,65532UL},{0xCA0CL,0x5F5AL,1UL,7UL,0x2A90L},{0x33BEL,0UL,0xBBD4L,0x33BEL,0x3E2EL},{65533UL,65532UL,1UL,0xAAFEL,0x7675L}},{{0xB11DL,0x8319L,0x874BL,65527UL,0xCDA2L},{0UL,0xC643L,0xB430L,0xA41AL,65534UL},{8UL,0UL,1UL,0UL,0xC1CCL},{0UL,0xA91EL,65534UL,9UL,0UL},{3UL,0x177FL,2UL,65529UL,65528UL},{65535UL,1UL,1UL,65535UL,65535UL},{65535UL,1UL,0UL,0UL,1UL}}};
static int8_t g_37 = 1L;
static uint8_t g_44 = 0xACL;
static int32_t g_45 = 0L;
static uint16_t g_59[4][5][4] = {{{0x6FA8L,65535UL,65535UL,0x7783L},{0x7783L,0UL,0UL,65535UL},{0xC4EEL,0UL,0UL,0xC4EEL},{0x7783L,0xB10CL,65535UL,0xD8CAL},{0x6FA8L,0xD129L,0xD8CAL,0xC605L}},{{0xD8CAL,0xC605L,0xD621L,0xC605L},{0UL,0xD129L,0UL,0xD8CAL},{0x0557L,0xB10CL,0xC605L,0xC4EEL},{0UL,0UL,65535UL,65535UL},{0UL,0UL,0xC605L,0x7783L}},{{0x0557L,65535UL,0UL,0xB10CL},{0UL,0x6FA8L,0xD621L,0UL},{0xD8CAL,0x6FA8L,0xD8CAL,0xB10CL},{0x6FA8L,65535UL,65535UL,0x7783L},{0x7783L,0UL,0UL,65535UL}},{{0xC4EEL,0UL,0UL,0xC4EEL},{0x7783L,0xB10CL,65535UL,0xD8CAL},{0x6FA8L,0xD129L,0xD8CAL,0xC605L},{0xD8CAL,0xC605L,0xD621L,0xC605L},{0UL,0xD129L,0UL,0xD8CAL}}};
static struct S0 g_60 = {2080};
static struct S1 g_82 = {5344,0x1218L};
static uint64_t g_89 = 0x6C0CD1CB4528E6A8LL;
static uint64_t g_116 = 0xB5A7EB3ECD4BAD59LL;
static uint64_t g_154 = 6UL;
static int16_t g_157 = 8L;
static uint16_t g_159[1] = {0UL};
static union U3 g_171 = {0x3A28AA74L};
static union U3 *g_170[2][4] = {{&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171}};
static uint32_t g_203[3][7][5] = {{{0x22833DDCL,0UL,0UL,3UL,0UL},{1UL,0UL,4294967295UL,4294967295UL,0UL},{0x85CD7AFFL,0xA33AE134L,0x42F59D8BL,4294967295UL,0x3A11E95EL},{4294967287UL,0UL,0UL,4294967295UL,0xBA6016F2L},{1UL,0UL,0xA7677C38L,4294967295UL,0UL},{4294967287UL,0xA33AE134L,0xA7677C38L,3UL,0x3A11E95EL},{0x85CD7AFFL,0xBA6016F2L,0UL,6UL,0UL}},{{1UL,0xBA6016F2L,0x42F59D8BL,4294967295UL,0xBA6016F2L},{0x22833DDCL,0xA33AE134L,4294967295UL,6UL,0x3A11E95EL},{0x22833DDCL,0UL,0UL,3UL,0UL},{1UL,0UL,4294967295UL,4294967295UL,0UL},{0x85CD7AFFL,0xA33AE134L,0UL,0x3A11E95EL,0xD89C7B4AL},{5UL,0x1BC3C69CL,0UL,0x3A11E95EL,4UL},{0x306CC1A3L,0xB2DDA5E6L,0x3621335FL,0UL,0xB2DDA5E6L}},{{5UL,0xB7989F28L,0x3621335FL,0xA33AE134L,0xD89C7B4AL},{0xFAF10161L,4UL,0UL,0xA9E36F56L,0xB2DDA5E6L},{0x306CC1A3L,4UL,0UL,0UL,4UL},{6UL,0xB7989F28L,0UL,0xA9E36F56L,0xD89C7B4AL},{6UL,0xB2DDA5E6L,0UL,0xA33AE134L,0x1BC3C69CL},{0x306CC1A3L,0x1BC3C69CL,0UL,0UL,0x1BC3C69CL},{0xFAF10161L,0xB7989F28L,0UL,0x3A11E95EL,0xD89C7B4AL}}};
static int16_t g_205[6] = {3L,3L,0L,3L,3L,0L};
static int32_t g_208[2] = {(-1L),(-1L)};
static uint32_t g_211 = 0xD35FC118L;
static int8_t g_221 = 5L;
static uint32_t g_224[6] = {2UL,18446744073709551612UL,2UL,2UL,18446744073709551612UL,2UL};
static int16_t g_228 = 7L;
static int8_t g_230 = 0xDFL;
static int8_t g_231[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_232 = (-1L);
static int32_t g_233[1][5] = {{0x6097ED01L,0x6097ED01L,0x6097ED01L,0x6097ED01L,0x6097ED01L}};
static const struct S0 *g_269 = &g_60;
static const struct S0 **g_268 = &g_269;
static int16_t *g_303 = &g_205[5];
static int16_t * const *g_302 = &g_303;
static uint8_t *g_319 = (void*)0;
static uint8_t **g_318 = &g_319;
static uint8_t g_322 = 7UL;
static int32_t g_327 = 0x6B4ABC83L;
static int8_t g_336 = (-3L);
static int64_t g_382 = 7L;
static uint32_t *g_394[4][7] = {{&g_203[0][5][2],&g_203[2][0][1],&g_203[1][2][4],(void*)0,&g_203[1][2][4],&g_211,&g_203[2][6][1]},{&g_203[1][2][4],&g_203[2][6][1],&g_203[1][4][1],&g_203[1][4][1],&g_203[2][6][1],&g_203[1][2][4],&g_203[0][5][2]},{(void*)0,&g_203[1][4][1],&g_203[1][2][4],&g_203[0][5][2],&g_203[0][6][1],&g_203[1][2][4],&g_203[1][2][4]},{(void*)0,&g_203[0][6][1],&g_203[0][1][4],&g_203[0][6][1],(void*)0,&g_211,(void*)0}};
static int64_t *g_404 = &g_382;
static int64_t **g_403 = &g_404;
static struct S1 g_418 = {2808,-1L};
static union U2 g_419 = {0xFA86E6F8838F35C9LL};
static int32_t *g_449 = &g_45;
static int32_t g_463 = 0x458C74F1L;
static struct S0 *g_593 = &g_60;
static struct S0 **g_592 = &g_593;
static struct S0 ***g_591 = &g_592;
static struct S0 ****g_590 = &g_591;
static int16_t **g_687[3] = {(void*)0,(void*)0,(void*)0};
static int16_t ***g_686 = &g_687[0];
static uint32_t g_783[3] = {0x24E3D147L,0x24E3D147L,0x24E3D147L};



static union U3  func_1(void);
static int32_t  func_27(int16_t  p_28, uint16_t * p_29, int32_t  p_30, struct S0  p_31);
static int8_t  func_34(int8_t * p_35);
static int64_t  func_39(uint8_t  p_40, uint8_t  p_41, const uint32_t  p_42);
static struct S1  func_46(uint64_t  p_47, struct S1  p_48, union U2  p_49, uint16_t  p_50);
static uint64_t  func_51(uint8_t * p_52, uint16_t  p_53, struct S0  p_54);
static int32_t  func_69(uint8_t ** p_70, struct S0  p_71, uint8_t * p_72);
static struct S0  func_75(int64_t  p_76, int8_t * p_77, struct S1  p_78, const uint32_t  p_79, uint16_t  p_80);




static union U3  func_1(void)
{ 
    int32_t l_13[7];
    int32_t l_705[5];
    struct S0 **l_716 = &g_593;
    uint16_t l_728 = 2UL;
    int8_t l_777[5][3] = {{0x55L,0x55L,0L},{1L,1L,0x8FL},{0x55L,0x55L,0L},{1L,1L,0x8FL},{0x55L,0x55L,0L}};
    int32_t l_778 = 0x8675B46FL;
    union U3 l_790[1][4] = {{{0x3B54C746L},{0x3B54C746L},{0x3B54C746L},{0x3B54C746L}}};
    int i, j;
    for (i = 0; i < 7; i++)
        l_13[i] = 0xACED45B0L;
    for (i = 0; i < 5; i++)
        l_705[i] = 0xF8DD0BC8L;
    for (g_2[0][3][2] = (-3); (g_2[0][3][2] <= 18); g_2[0][3][2]++)
    { 
        const int32_t l_16 = (-1L);
        uint16_t *l_17 = &g_18[4][0][2];
        int8_t *l_36 = &g_37;
        int32_t *l_706 = &g_327;
        struct S0 **l_715 = &g_593;
        int32_t l_718 = 1L;
        int32_t l_720 = (-5L);
        int32_t l_721 = 0x0FBAF6CAL;
        int32_t l_722 = 1L;
        int32_t l_723 = 0xD0FF91FEL;
        int32_t l_724 = (-1L);
        int32_t l_725 = (-5L);
        int32_t l_726 = 0L;
        int32_t l_727 = 0xF82C5B28L;
        (*l_706) = (safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((l_13[5] , (((safe_div_func_int32_t_s_s(g_2[0][2][0], l_16)) , (((l_705[3] &= (l_13[5] > (((*l_17) = g_2[0][4][3]) < (safe_mul_func_int8_t_s_s((0L && (safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(func_27(((safe_lshift_func_int8_t_s_u(func_34(l_36), 4)) && l_13[0]), g_303, l_16, (*g_269)), l_16)), 8L)) | 0x5CL), 0x796673C1L))), 0xDEL))))) , 0x9FL) && g_44)) , g_419.f3)) > l_13[0]) <= 0xA9L), 1)), l_13[3])), l_16)), l_16));
        if ((safe_rshift_func_int8_t_s_s((*l_706), ((safe_div_func_int32_t_s_s((&g_230 == ((((safe_mod_func_int32_t_s_s((l_13[6] > (safe_rshift_func_uint16_t_u_u(((l_715 != l_716) != (!((void*)0 != &g_404))), 12))), l_13[5])) | l_718) | l_13[4]) , (void*)0)), (-7L))) > l_13[5]))))
        { 
            int32_t *l_719[6] = {&g_233[0][4],&g_233[0][4],&g_233[0][4],&g_233[0][4],&g_233[0][4],&g_233[0][4]};
            int i;
            --l_728;
        }
        else
        { 
            int64_t l_731 = (-1L);
            int32_t l_765 = 0xFE372178L;
            int32_t l_780 = 0x4B1F26CDL;
            int32_t l_781 = 0L;
            int32_t l_782 = 0xFBB246E5L;
            uint8_t ***l_788 = (void*)0;
            (*l_706) = l_731;
            for (g_336 = 11; (g_336 >= (-2)); g_336 = safe_sub_func_int32_t_s_s(g_336, 2))
            { 
                uint32_t l_747 = 0xECA086F5L;
                int32_t l_771 = 0L;
                int32_t l_773 = 0xC210954CL;
                int32_t l_774 = 0x8AFA2D44L;
                int32_t l_775[3];
                uint8_t ****l_789 = &l_788;
                int i;
                for (i = 0; i < 3; i++)
                    l_775[i] = 1L;
                for (g_419.f4 = (-27); (g_419.f4 > 56); ++g_419.f4)
                { 
                    uint8_t l_754 = 0UL;
                    int32_t *l_764 = &g_171.f1;
                    int32_t *l_766 = &l_705[3];
                    (*l_766) ^= (l_765 = ((*l_764) = ((((*l_706) = (safe_lshift_func_uint16_t_u_s((~((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(l_747, (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_754, (safe_add_func_int16_t_s_s(((+((safe_add_func_int8_t_s_s((*l_706), (((void*)0 != &g_686) , l_754))) || ((**g_403) &= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(g_60.f0, g_205[2])), l_754))))) , 0xD18AL), 0UL)))) >= l_747), 0x6EC3L)), g_171.f0)))), l_754)), 0x6AL)), l_747)) == 0xFAL)), (*l_706)))) <= l_723) == 0x7DD6L)));
                }
                for (l_747 = 4; (l_747 <= 13); l_747 = safe_add_func_uint64_t_u_u(l_747, 8))
                { 
                    int16_t l_769 = 1L;
                    int32_t *l_770 = &l_722;
                    int32_t *l_772[1];
                    int32_t l_776 = (-1L);
                    int8_t l_779 = 7L;
                    int32_t **l_786 = (void*)0;
                    int32_t **l_787 = &l_772[0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_772[i] = &l_722;
                    if (l_747)
                        break;
                    --g_783[0];
                    (*l_787) = &g_463;
                    if (l_775[0])
                        continue;
                }
                (*l_789) = l_788;
            }
        }
        return l_790[0][1];
    }
    return l_790[0][3];
}



static int32_t  func_27(int16_t  p_28, uint16_t * p_29, int32_t  p_30, struct S0  p_31)
{ 
    struct S0 *l_483 = &g_60;
    struct S0 **l_482 = &l_483;
    int16_t l_488 = 0xCB8AL;
    int32_t l_534 = 0x464A58D5L;
    int32_t l_535 = 0x094F6126L;
    int32_t l_536 = 0xBCCB9932L;
    int32_t l_538 = 0xFB84BA4DL;
    int32_t l_545[6][2][2] = {{{(-1L),0x43F99E34L},{(-1L),3L}},{{0xA0F989D5L,(-1L)},{3L,0x43F99E34L}},{{(-1L),(-1L)},{0xA0F989D5L,(-1L)}},{{(-1L),0x43F99E34L},{3L,(-1L)}},{{0xA0F989D5L,3L},{(-1L),0x43F99E34L}},{{(-1L),3L},{0xA0F989D5L,(-1L)}}};
    int64_t **l_561 = (void*)0;
    uint64_t l_581 = 0x90E2E8EA0A7C635ALL;
    int8_t *l_638[6][7] = {{(void*)0,&g_221,(void*)0,&g_231[5],&g_37,(void*)0,&g_336},{&g_221,&g_336,(void*)0,&g_37,&g_231[5],(void*)0,&g_221},{(void*)0,&g_336,&g_231[1],&g_231[5],&g_231[5],&g_231[1],&g_336},{(void*)0,&g_221,(void*)0,&g_231[5],&g_37,(void*)0,&g_336},{&g_221,&g_336,(void*)0,&g_37,&g_231[5],(void*)0,&g_231[6]},{&g_336,(void*)0,&g_231[5],&g_221,&g_221,&g_231[5],(void*)0}};
    int16_t **l_704 = &g_303;
    int i, j, k;
    for (p_28 = (-20); (p_28 >= (-18)); p_28 = safe_add_func_uint32_t_u_u(p_28, 4))
    { 
        int32_t l_478[3][1];
        struct S0 * const *l_484 = &l_483;
        union U3 l_487[3] = {{3L},{3L},{3L}};
        uint32_t l_489[4][7] = {{0x28977644L,1UL,5UL,1UL,0x28977644L,18446744073709551615UL,18446744073709551615UL},{1UL,0xB50F9AFDL,1UL,0xB50F9AFDL,1UL,1UL,1UL},{0x28977644L,1UL,5UL,1UL,0x28977644L,18446744073709551615UL,18446744073709551615UL},{1UL,0xB50F9AFDL,1UL,0xB50F9AFDL,1UL,1UL,1UL}};
        int32_t l_544 = 0x82C4FE22L;
        const struct S0 ***l_570[4][7][2] = {{{(void*)0,&g_268},{&g_268,&g_268},{&g_268,&g_268},{(void*)0,&g_268},{&g_268,&g_268},{&g_268,&g_268},{&g_268,&g_268}},{{&g_268,&g_268},{&g_268,&g_268},{(void*)0,&g_268},{&g_268,&g_268},{&g_268,&g_268},{(void*)0,&g_268},{&g_268,&g_268}},{{&g_268,&g_268},{&g_268,&g_268},{&g_268,&g_268},{&g_268,&g_268},{(void*)0,&g_268},{&g_268,&g_268},{&g_268,&g_268}},{{(void*)0,&g_268},{&g_268,&g_268},{&g_268,&g_268},{&g_268,&g_268},{&g_268,&g_268},{&g_268,&g_268},{(void*)0,&g_268}}};
        const struct S0 ****l_569[5][1][1] = {{{(void*)0}},{{&l_570[2][2][0]}},{{(void*)0}},{{&l_570[2][2][0]}},{{(void*)0}}};
        int32_t l_578 = (-1L);
        int32_t l_579 = 0xA6E33CEFL;
        int32_t l_580[1];
        struct S0 *** const *l_594 = &g_591;
        int32_t **l_615 = &g_449;
        uint64_t l_636 = 1UL;
        int32_t l_640 = 0xF0BCB212L;
        struct S1 l_643 = {5578,-1L};
        int64_t l_659 = 0x2B94C6EABC5494ACLL;
        uint32_t l_697 = 0x229A249EL;
        uint32_t l_701 = 0xF598B78AL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_478[i][j] = 0x3913260DL;
        }
        for (i = 0; i < 1; i++)
            l_580[i] = 0L;
        l_478[1][0] = (*g_449);
        if ((l_489[0][2] = (safe_rshift_func_uint8_t_u_u((l_478[0][0] ^ (!(l_482 == ((**g_302) , l_484)))), (0x2B1A47F8L > ((safe_sub_func_int8_t_s_s((-8L), ((l_487[0] , (*g_449)) , g_208[0]))) ^ l_488))))))
        { 
            uint8_t l_502 = 0x39L;
            uint32_t l_522 = 1UL;
            int8_t l_527 = 0xFCL;
            int32_t l_537 = 0xC04338BBL;
            int32_t l_543[3];
            int32_t *l_572 = &g_233[0][4];
            int32_t *l_573 = (void*)0;
            int32_t *l_574 = &l_545[3][1][1];
            int32_t *l_575 = &g_233[0][4];
            int32_t *l_576[2][6] = {{&l_487[0].f1,&l_487[0].f1,&l_487[0].f1,&l_487[0].f1,&l_487[0].f1,&l_487[0].f1},{&l_487[0].f1,&l_487[0].f1,&l_487[0].f1,&l_487[0].f1,&l_487[0].f1,&l_487[0].f1}};
            int8_t l_577 = 0xB8L;
            uint64_t l_612[3][1][4] = {{{0UL,0UL,0xCB3C6EFA47D08825LL,0UL}},{{0UL,0xDE0AA0C53F1D4E58LL,0xDE0AA0C53F1D4E58LL,0UL}},{{0xDE0AA0C53F1D4E58LL,0UL,0xDE0AA0C53F1D4E58LL,0xDE0AA0C53F1D4E58LL}}};
            union U3 l_622[1] = {{0x3D9700EAL}};
            int16_t **l_627[3][3] = {{&g_303,&g_303,&g_303},{&g_303,&g_303,&g_303},{&g_303,&g_303,&g_303}};
            uint32_t l_637 = 18446744073709551614UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_543[i] = (-6L);
            if (((*g_449) = ((safe_rshift_func_uint8_t_u_s(p_28, 2)) , ((p_30 && (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(l_488, (safe_add_func_int16_t_s_s(1L, (((safe_add_func_uint16_t_u_u((((l_502 , (g_116++)) , p_31.f0) || ((safe_lshift_func_uint8_t_u_u(255UL, 3)) != p_30)), p_30)) != l_478[0][0]) > (*p_29)))))) , g_228), l_488)), p_28))) , 0xC398C032L))))
            { 
                int32_t *l_507[3];
                uint32_t l_508 = 0x00614DC5L;
                uint8_t *l_521[1];
                uint64_t *l_528 = &g_116;
                uint16_t l_546 = 0x123FL;
                int i;
                for (i = 0; i < 3; i++)
                    l_507[i] = &g_419.f3;
                for (i = 0; i < 1; i++)
                    l_521[i] = &g_44;
                l_508--;
                if ((safe_lshift_func_uint16_t_u_s(g_232, (((*p_29) || (p_30 > (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(6UL, (safe_mul_func_uint8_t_u_u((g_154 ^ ((*l_528) &= ((safe_lshift_func_uint8_t_u_u((l_522--), ((l_487[0].f0 = (((g_322 != ((safe_sub_func_int32_t_s_s(((p_31.f0 & 0xE27C89B8E4B74593LL) ^ p_30), 0xF164E787L)) != g_419.f0)) == p_31.f0) == l_478[1][0])) >= l_527))) || l_489[2][4]))), p_28)))), p_31.f0)))) ^ 2UL))))
                { 
                    return p_31.f0;
                }
                else
                { 
                    int8_t *l_533 = &g_231[0];
                    int32_t l_539 = 1L;
                    uint8_t l_540 = 7UL;
                    (*g_449) = (((*l_533) = (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(1UL)), (safe_unary_minus_func_uint8_t_u(1UL))))) == p_31.f0);
                    (*g_449) = (&g_302 != (void*)0);
                    l_540--;
                    p_30 |= 0xD7BCE973L;
                    ++l_546;
                }
            }
            else
            { 
                int16_t l_555 = (-2L);
                int32_t l_562 = (-10L);
                for (g_89 = 0; (g_89 <= 3); g_89 += 1)
                { 
                    uint8_t *l_550 = &g_44;
                    const int32_t l_563 = 0xAABA9780L;
                    uint64_t *l_564 = &g_154;
                    int32_t *l_565 = (void*)0;
                    int32_t *l_566 = &l_544;
                    (*l_566) &= (g_419 , ((((*l_564) = (((!((--(*l_550)) | (l_522 != (((g_59[0][1][0] = (((*p_29) |= 65532UL) & (safe_add_func_uint8_t_u_u((l_555 = 0x54L), (((((*g_449) = (((!(((((((((safe_div_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s((((l_487[0].f1 = 6L) , (l_535 = ((void*)0 == l_561))) < p_28), 3)) > p_30) > 1UL), p_31.f0)) , 0L) < g_233[0][0]) , l_562) , 0L) , l_488) == p_28) || g_2[0][3][0]) ^ 1L)) == p_30) <= l_538)) <= 1L) < 0x6AE5L) & l_563))))) != 0x6C5AL) == (*g_404))))) | (-8L)) & (-6L))) & l_527) >= g_322));
                }
                for (g_463 = 0; (g_463 != 27); g_463 = safe_add_func_uint32_t_u_u(g_463, 3))
                { 
                    const struct S0 *****l_571 = &l_569[3][0][0];
                    (*g_449) = (((*g_318) != (func_75(((l_487[0].f0 , (((*l_571) = l_569[1][0][0]) == (void*)0)) ^ (l_545[3][1][0] > l_562)), &g_336, g_418, l_537, g_228) , (void*)0)) < p_28);
                }
            }
            if ((*g_449))
                continue;
            l_581++;
            for (l_581 = 0; (l_581 <= 5); l_581 += 1)
            { 
                struct S0 *** const **l_595 = &l_594;
                int32_t l_599 = 1L;
                int32_t l_601 = 0x216745E3L;
                int32_t l_603 = 0L;
                int32_t l_606 = 1L;
                int32_t l_607 = 0xAE0F29C4L;
                int32_t l_609 = 0x451C025FL;
                union U3 l_623 = {0xC78488E4L};
                int8_t l_624[4][7] = {{0x63L,0x6FL,(-1L),0x1FL,0x4FL,0x1FL,(-1L)},{(-6L),(-6L),0x1FL,0L,0x4EL,1L,0x63L},{0L,(-6L),(-5L),1L,1L,(-5L),(-6L)},{(-5L),0x6FL,(-6L),(-1L),0x4EL,(-1L),0L}};
                int i, j;
                if ((g_205[l_581] >= (safe_div_func_int16_t_s_s((p_31.f0 | ((void*)0 != &g_303)), (safe_add_func_uint16_t_u_u((l_545[3][1][0] ^ ((g_590 != ((*l_595) = l_594)) > 1UL)), 65531UL))))))
                { 
                    int64_t l_596[4];
                    int32_t l_597 = 0x812C1D87L;
                    int32_t l_598 = 0xB4DB6790L;
                    int8_t l_600 = 0L;
                    int32_t l_602 = (-1L);
                    int32_t l_604 = 0L;
                    int32_t l_605 = 0xC7280FD6L;
                    int32_t l_608 = (-4L);
                    int32_t l_610 = (-8L);
                    int32_t l_611 = 0x1938761BL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_596[i] = 1L;
                    l_612[2][0][2]++;
                    (*l_575) = (*g_449);
                }
                else
                { 
                    return l_478[1][0];
                }
                (*g_449) &= (((void*)0 == l_615) <= (0x8B8DED2DL | (g_59[3][1][0] ^ ((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((0UL & (g_418 , (safe_add_func_int64_t_s_s(((l_622[0] , l_623) , l_624[0][6]), p_28)))) , 65535UL), 0x6CCDL)), p_31.f0)) >= 1L))));
                for (l_606 = 0; (l_606 <= 1); l_606 += 1)
                { 
                    int16_t l_629 = 1L;
                    int8_t *l_630 = &g_231[4];
                    uint64_t l_635 = 18446744073709551612UL;
                    int i, j;
                    l_609 |= (g_171.f1 = (((safe_sub_func_int8_t_s_s(((void*)0 != l_627[0][2]), ((l_545[3][1][0] || (((*g_404) &= (((*l_630) = (l_629 &= (+0x9255L))) || (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((*l_572) = g_205[l_581]) | (((p_28 != ((**l_615) |= l_635)) <= g_231[1]) <= p_30)), l_489[0][2])), l_636)))) >= l_637)) != 0x41L))) , 0xDD8DBB9BL) && p_31.f0));
                }
                (*g_593) = func_75(p_30, l_638[1][4], (((safe_unary_minus_func_uint32_t_u(((((((l_640 &= p_31.f0) > 0xC27B6C1DL) > ((safe_mod_func_uint16_t_u_u(65527UL, ((&l_581 != &g_89) , 7L))) < 246UL)) >= 1L) , (*p_29)) , p_28))) == (*p_29)) , l_643), l_599, g_418.f1);
                if (l_545[2][1][1])
                    continue;
            }
            if (p_31.f0)
                break;
        }
        else
        { 
            union U3 *l_644 = (void*)0;
            union U3 **l_645 = &g_170[1][0];
            int32_t l_655 = 0L;
            uint16_t l_656[7];
            int32_t l_660[3];
            uint64_t l_662[5];
            struct S1 l_665 = {2004,1L};
            int32_t *l_700[6][4];
            int i, j;
            for (i = 0; i < 7; i++)
                l_656[i] = 65533UL;
            for (i = 0; i < 3; i++)
                l_660[i] = 1L;
            for (i = 0; i < 5; i++)
                l_662[i] = 0UL;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                    l_700[i][j] = &g_233[0][0];
            }
            (*l_645) = l_644;
            for (l_488 = 6; (l_488 != (-22)); l_488 = safe_sub_func_uint8_t_u_u(l_488, 4))
            { 
                int32_t *l_648 = (void*)0;
                int32_t l_649[6] = {9L,(-4L),9L,9L,(-4L),9L};
                int32_t *l_650 = &l_545[3][1][0];
                int32_t *l_651 = &l_649[3];
                int32_t *l_652 = (void*)0;
                int32_t *l_653 = &l_545[3][1][0];
                int32_t *l_654[7][3][2] = {{{&l_534,&g_233[0][4]},{&g_233[0][4],&l_534},{&g_233[0][4],&g_233[0][4]}},{{&l_534,&g_233[0][4]},{&g_233[0][4],&l_534},{&g_233[0][4],&g_233[0][4]}},{{&l_534,&g_233[0][4]},{&g_233[0][4],&l_534},{&g_233[0][4],&g_233[0][4]}},{{&l_534,&g_233[0][4]},{&g_233[0][4],&l_534},{&g_233[0][4],&l_534}},{{&l_536,&l_534},{&l_534,&l_536},{&l_534,&l_534}},{{&l_536,&l_534},{&l_534,&l_536},{&l_534,&l_534}},{{&l_536,&l_534},{&l_534,&l_536},{&l_534,&l_534}}};
                int32_t l_661 = (-1L);
                struct S1 *l_666[5][7][3] = {{{&g_82,&g_418,&g_82},{&g_82,&l_665,(void*)0},{&l_643,&l_665,&g_82},{(void*)0,&l_665,&l_643},{&g_82,&g_418,&l_643},{(void*)0,&g_418,(void*)0},{&l_643,&l_643,&l_643}},{{&g_82,(void*)0,&l_643},{&g_82,&l_643,&g_82},{&l_643,&g_418,(void*)0},{&g_82,&g_418,&g_82},{&g_82,&l_665,(void*)0},{&l_643,&l_665,&g_82},{(void*)0,&l_665,&l_643}},{{&g_82,&g_418,&l_643},{(void*)0,&g_418,(void*)0},{&l_643,&l_643,&l_643},{&g_82,(void*)0,&l_643},{&g_82,&l_643,&g_82},{&l_643,&g_418,(void*)0},{&g_82,&g_418,&g_82}},{{&g_82,&l_665,(void*)0},{&l_643,&l_665,&g_82},{(void*)0,&l_665,&l_643},{&g_82,&g_418,&l_643},{(void*)0,&g_418,(void*)0},{&l_643,&l_643,&l_643},{&g_82,(void*)0,&l_643}},{{&g_82,&l_643,&g_82},{&l_643,&g_418,(void*)0},{&g_82,&g_418,&g_82},{&g_82,&l_665,(void*)0},{&l_643,&l_665,&g_82},{(void*)0,&l_665,&l_643},{&g_82,&g_418,&l_643}}};
                uint32_t *l_677 = (void*)0;
                uint32_t *l_678 = &g_171.f3;
                uint32_t *l_679[7][1] = {{&g_211},{&g_171.f3},{&g_211},{&g_171.f3},{&g_211},{&g_171.f3},{&g_211}};
                uint8_t *l_680[6][2] = {{(void*)0,(void*)0},{&g_322,(void*)0},{(void*)0,&g_322},{(void*)0,(void*)0},{&g_322,(void*)0},{(void*)0,&g_322}};
                int32_t l_692 = 0L;
                int i, j, k;
                l_656[3]--;
                --l_662[2];
                g_418 = l_665;
                if ((safe_div_func_int64_t_s_s((((((safe_mul_func_uint8_t_u_u((0x4050C5AFE4EEB2F5LL > p_30), (g_419 , (g_322 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((l_536 |= (safe_mod_func_uint8_t_u_u(g_203[1][2][4], (g_419.f3 || l_581)))) != (*l_650)) > (*g_449)), 5)), 3)))))) >= 0x1478L) , 0x2BA5A2977BA0AFA3LL) != g_221) || g_208[0]), p_31.f0)))
                { 
                    int16_t **l_681 = &g_303;
                    int16_t *l_683 = &l_665.f1;
                    int16_t **l_682 = &l_683;
                    (**l_615) = (((*l_681) = &l_488) == ((*l_682) = &p_28));
                    if ((*g_449))
                        break;
                }
                else
                { 
                    int16_t ****l_688 = &g_686;
                    uint32_t *l_689 = (void*)0;
                    uint32_t *l_690[1][7] = {{&l_489[3][5],&l_489[3][5],(void*)0,&l_489[3][5],&l_489[3][5],(void*)0,&l_489[3][5]}};
                    int32_t l_693 = 0xDE068A2EL;
                    int32_t l_694 = 1L;
                    int32_t l_695 = 0x5239B189L;
                    int32_t l_696[4][4] = {{0x397856CAL,0xB5246EDAL,0x397856CAL,0xB5246EDAL},{0x397856CAL,0xB5246EDAL,0x397856CAL,0xB5246EDAL},{0x397856CAL,0xB5246EDAL,0x397856CAL,0xB5246EDAL},{0x397856CAL,0xB5246EDAL,0x397856CAL,0xB5246EDAL}};
                    int i, j;
                    (*l_615) = &p_30;
                    if (p_30)
                        continue;
                    if (l_581)
                        break;
                    (**l_615) |= ((g_89 = 0x55C7F1E54564C838LL) <= (safe_mod_func_uint32_t_u_u((((*l_688) = g_686) == ((g_224[4] = 0UL) , &g_687[0])), (~g_205[1]))));
                    --l_697;
                }
            }
            l_701++;
        }
        (*g_686) = l_704;
        return p_30;
    }
    return (*g_449);
}



static int8_t  func_34(int8_t * p_35)
{ 
    uint8_t l_38 = 0x05L;
    uint8_t *l_43 = &g_44;
    int32_t *l_462 = &g_463;
    uint16_t *l_468[2];
    uint8_t l_469 = 0UL;
    struct S1 l_474 = {3141,0x8B52L};
    struct S1 *l_475 = &l_474;
    int i;
    for (i = 0; i < 2; i++)
        l_468[i] = &g_159[0];
    (*l_462) &= (((g_2[0][5][2] | l_38) , 0x5EF7L) && (l_38 <= func_39(((*l_43) = ((void*)0 == &g_37)), (g_45 = 1UL), g_2[0][0][5])));
    for (g_418.f1 = (-26); (g_418.f1 == 5); g_418.f1 = safe_add_func_int32_t_s_s(g_418.f1, 3))
    { 
        return (*l_462);
    }
    (*l_475) = func_46((*l_462), g_418, g_419, (g_59[1][0][0] = (g_159[0] ^= ((((*l_475) = func_46((((((*l_462) || (*l_462)) || (safe_lshift_func_uint16_t_u_u((l_469 = g_205[5]), ((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0x40A3L, 9)), (*l_462))) , (*l_462)) , (*g_404)) || 0xBCB76E4067920F93LL)))) && 0x6CF1L) | g_45), l_474, g_419, (*l_462))) , 1UL) & 0xD1L))));
    return (*p_35);
}



static int64_t  func_39(uint8_t  p_40, uint8_t  p_41, const uint32_t  p_42)
{ 
    uint8_t *l_55 = &g_44;
    uint8_t **l_56 = &l_55;
    int32_t l_57 = 0xD44262C4L;
    uint16_t *l_58 = &g_59[3][1][0];
    struct S1 l_416 = {1980,8L};
    struct S1 *l_417[5][1];
    union U3 l_420[4][7][5] = {{{{0x6E957CD2L},{7L},{0x4EA0F079L},{0x30FCC5BCL},{0x0A67042AL}},{{0x847614B7L},{7L},{-6L},{0xFAA1DCDBL},{0x8472AB0EL}},{{1L},{0xD9689411L},{0x6A21E68DL},{-1L},{0L}},{{0xB4680648L},{0x8722913AL},{8L},{8L},{0x8722913AL}},{{0L},{0x4AA961E9L},{2L},{0xC5E614F1L},{0x27D343D9L}},{{0x70532AEFL},{1L},{0xD9689411L},{-1L},{2L}},{{0xD9689411L},{0x4EA0F079L},{0x29A5A3B3L},{0x70532AEFL},{2L}}},{{{0x70532AEFL},{0L},{0x209FCE16L},{-1L},{1L}},{{0x8722913AL},{0L},{-1L},{1L},{-1L}},{{8L},{0xFAA1DCDBL},{0x27D343D9L},{0x4EA0F079L},{-8L}},{{-1L},{0x4AA961E9L},{0x2ECA3DCBL},{0x27D343D9L},{0L}},{{0x84B66EE6L},{0L},{0x847614B7L},{0x6A1D3BACL},{0L}},{{0x106C5341L},{0xC5663D51L},{0L},{0x30FCC5BCL},{-8L}},{{2L},{0x30FCC5BCL},{0x6E179D1EL},{-1L},{-1L}}},{{{1L},{2L},{2L},{1L},{1L}},{{7L},{0x225BBED9L},{-1L},{0x6E957CD2L},{2L}},{{1L},{0x70532AEFL},{0x30FCC5BCL},{-7L},{2L}},{{0L},{-1L},{2L},{0x6E957CD2L},{1L}},{{0x8472AB0EL},{-6L},{0x0A67042AL},{1L},{0x6A1D3BACL}},{{0x4AA961E9L},{0x847614B7L},{0xC5663D51L},{-1L},{0xFB5E5DC5L}},{{0x244F3A60L},{-1L},{0xFB5E5DC5L},{0x30FCC5BCL},{2L}}},{{{2L},{-1L},{1L},{0x6A1D3BACL},{-1L}},{{0x209FCE16L},{1L},{1L},{0x27D343D9L},{8L}},{{0x225BBED9L},{8L},{0xFB5E5DC5L},{0x4EA0F079L},{5L}},{{2L},{0xFB5E5DC5L},{0xC5663D51L},{1L},{0xC5663D51L}},{{0x27D343D9L},{0x27D343D9L},{0x0A67042AL},{-1L},{0x6A21E68DL}},{{0L},{0xB12887DCL},{2L},{0x70532AEFL},{0x8722913AL}},{{0xC5E614F1L},{0xF279DEE3L},{0x30FCC5BCL},{-1L},{0x106C5341L}}}};
    union U3 *l_421 = &l_420[3][1][0];
    int32_t *l_446 = &g_327;
    const uint16_t l_457 = 65535UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_417[i][j] = &l_416;
    }
    g_82 = func_46(func_51(((*l_56) = l_55), ((*l_58) = l_57), g_60), (g_418 = l_416), g_419, (((*l_421) = l_420[2][6][3]) , 1UL));
    (*l_446) = (&l_55 != &g_319);
    for (g_157 = 0; (g_157 != (-1)); g_157 = safe_sub_func_int8_t_s_s(g_157, 1))
    { 
        const int8_t *l_454[6][2] = {{&g_231[3],&g_37},{&g_231[3],&g_231[3]},{&g_37,&g_231[3]},{&g_231[3],&g_37},{&g_231[3],&g_231[3]},{&g_37,&g_231[3]}};
        int i, j;
    }
    (*g_449) &= 0xF17EEF78L;
    return (**g_403);
}



static struct S1  func_46(uint64_t  p_47, struct S1  p_48, union U2  p_49, uint16_t  p_50)
{ 
    int8_t *l_426 = &g_230;
    int16_t **l_431 = &g_303;
    int16_t **l_433 = &g_303;
    int16_t ***l_432 = &l_433;
    int32_t l_438 = (-8L);
    int16_t *l_442[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t **l_441 = &l_442[3];
    uint32_t *l_443 = (void*)0;
    uint32_t *l_444 = &g_171.f3;
    int32_t *l_445[7];
    int i;
    for (i = 0; i < 7; i++)
        l_445[i] = (void*)0;
    g_45 = (((*l_444) = (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*l_426) = 0x68L), (safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((l_431 != ((*l_432) = l_431)) , ((**l_431) = (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_438, 8)), p_49.f2)) | (safe_rshift_func_uint8_t_u_s((((((*g_302) == ((*l_441) = (**l_432))) >= g_228) , p_48.f0) >= l_438), l_438))) || p_49.f1))), p_48.f0)), 2)))), 0xB9L))) <= g_44);
    p_49.f3 &= g_208[0];
    return g_418;
}



static uint64_t  func_51(uint8_t * p_52, uint16_t  p_53, struct S0  p_54)
{ 
    int16_t l_68 = 0xBCD0L;
    uint8_t *l_74 = (void*)0;
    uint8_t **l_73 = &l_74;
    int8_t *l_81 = &g_37;
    int32_t *l_411[5][4] = {{&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3]},{&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3]},{&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3]},{&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3]},{&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3],&g_2[0][0][3]}};
    uint32_t l_412 = 5UL;
    uint8_t l_415 = 0x2DL;
    int i, j;
    g_171.f1 = (((((*p_52) = (((4294967287UL != (!(safe_lshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((p_54.f0 ^ p_54.f0), (l_68 , (func_69(l_73, func_75((((*l_81) = ((l_68 | (-1L)) && g_59[2][0][3])) | l_68), p_52, g_82, g_59[2][2][0], l_68), (*l_73)) == 0x08D0D54CL)))), 0x841ADF634814E295LL)) , l_68), g_231[3])))) ^ g_208[0]) != g_231[6])) && 1L) || g_228) || l_68);
    ++l_412;
    return l_415;
}



static int32_t  func_69(uint8_t ** p_70, struct S0  p_71, uint8_t * p_72)
{ 
    int64_t l_87 = 0x7B59292B13749941LL;
    int32_t l_111 = 0L;
    int32_t l_134[4];
    int32_t *l_169 = &l_111;
    int32_t l_235 = 0xD6759D5BL;
    const uint16_t *l_246 = &g_159[0];
    struct S1 l_259[5] = {{1335,0xAB28L},{1335,0xAB28L},{1335,0xAB28L},{1335,0xAB28L},{1335,0xAB28L}};
    int16_t *l_274 = &g_205[5];
    int16_t **l_275 = &l_274;
    struct S0 *l_298 = (void*)0;
    struct S0 **l_297 = &l_298;
    struct S0 ***l_296[7] = {&l_297,&l_297,&l_297,&l_297,&l_297,&l_297,&l_297};
    struct S0 ****l_295[2][6][6] = {{{(void*)0,&l_296[2],&l_296[1],&l_296[3],&l_296[3],&l_296[1]},{&l_296[3],&l_296[3],&l_296[6],&l_296[3],&l_296[2],&l_296[3]},{(void*)0,&l_296[0],&l_296[4],&l_296[5],&l_296[5],&l_296[6]},{&l_296[3],(void*)0,&l_296[4],&l_296[3],&l_296[3],&l_296[3]},{&l_296[3],(void*)0,&l_296[3],&l_296[3],(void*)0,&l_296[3]},{&l_296[3],(void*)0,&l_296[3],&l_296[2],&l_296[1],&l_296[3]}},{{&l_296[3],&l_296[3],&l_296[3],&l_296[3],&l_296[3],&l_296[0]},{&l_296[3],&l_296[3],&l_296[2],&l_296[2],(void*)0,&l_296[5]},{&l_296[3],&l_296[1],&l_296[5],&l_296[3],&l_296[3],&l_296[5]},{&l_296[6],(void*)0,&l_296[2],(void*)0,&l_296[2],&l_296[0]},{&l_296[3],&l_296[1],&l_296[3],(void*)0,&l_296[2],&l_296[3]},{&l_296[3],(void*)0,&l_296[3],&l_296[3],&l_296[3],&l_296[3]}}};
    struct S0 *****l_294 = &l_295[0][1][5];
    uint8_t **l_320 = (void*)0;
    int64_t **l_405 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_134[i] = 0x52157428L;
    for (g_82.f1 = 0; (g_82.f1 <= (-26)); g_82.f1 = safe_sub_func_uint32_t_u_u(g_82.f1, 2))
    { 
        uint64_t *l_88 = &g_89;
        int32_t l_108 = 8L;
        int64_t l_112 = 0x09005044EF0715EALL;
        uint64_t **l_113 = (void*)0;
        uint64_t *l_115 = &g_116;
        uint64_t **l_114 = &l_115;
        uint64_t *l_118 = &g_116;
        uint64_t **l_117 = &l_118;
        union U3 l_125[2][6][7] = {{{{-1L},{-1L},{0L},{-1L},{-1L},{0L},{-1L}},{{-1L},{-10L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-10L},{-10L}},{{-1L},{-1L},{0L},{-1L},{-1L},{0L},{-1L}},{{-1L},{-10L},{-1L},{-1L},{-1L},{-10L},{-1L}},{{-1L},{-1L},{-10L},{-1L},{-1L},{-1L},{-10L}}},{{{-1L},{-1L},{0L},{-1L},{-1L},{0L},{-1L}},{{-1L},{-10L},{-10L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-10L}},{{-1L},{-1L},{0L},{-1L},{-1L},{0L},{-1L}},{{-1L},{-10L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-10L},{-10L}}}};
        uint16_t *l_127 = (void*)0;
        const struct S0 *l_164[7] = {&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60};
        int32_t l_219[2];
        int32_t l_220 = 8L;
        int32_t l_222 = 0xA51E447DL;
        int32_t l_223 = 8L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_219[i] = (-3L);
        l_87 = 0xF92BF7C6L;
        if ((((*l_88)++) < (((*l_117) = ((*l_114) = (((safe_rshift_func_uint16_t_u_s((((~((p_72 != (void*)0) || (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(p_71.f0, (((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((!0xAE7BB48DF9F9BE49LL) == (l_111 = (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((1L | l_108), (safe_div_func_int8_t_s_s(((((g_60.f0 , l_87) != p_71.f0) != p_71.f0) | (-4L)), l_108)))), l_87)))), l_108)), 0xE05BCBD5L)) & l_112) >= p_71.f0))) | 1L), g_60.f0)))) | l_87) != g_44), 6)) | g_82.f0) , (void*)0))) != (void*)0)))
        { 
            uint32_t l_128[3][1][2] = {{{4294967287UL,0x9B7F1410L}},{{4294967287UL,4294967287UL}},{{0x9B7F1410L,4294967287UL}}};
            int32_t l_139 = (-1L);
            int32_t l_158[6][3] = {{1L,0xF31D3075L,(-4L)},{8L,0xF31D3075L,0x44B56EB5L},{0xC94BBC9CL,0xF31D3075L,0xF31D3075L},{1L,0xF31D3075L,(-4L)},{8L,0xF31D3075L,0x44B56EB5L},{0xC94BBC9CL,0xF31D3075L,0xF31D3075L}};
            const struct S0 *l_166 = &g_60;
            int i, j, k;
            for (g_116 = 0; (g_116 <= 3); g_116 += 1)
            { 
                union U3 *l_126 = &l_125[1][5][0];
                const int32_t l_133 = 0L;
                int32_t l_152 = 1L;
                int32_t l_153 = 1L;
                if ((safe_mod_func_uint32_t_u_u(1UL, (safe_rshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s((((*l_126) = l_125[1][5][0]) , (((p_71.f0 , l_127) == (void*)0) <= (l_128[2][0][1] = l_111))), ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_133, g_116)), p_71.f0)) & l_111))) != g_45), l_134[3])))))
                { 
                    int32_t *l_135 = &l_108;
                    int32_t *l_136 = &l_134[2];
                    int32_t *l_137 = &l_134[3];
                    int32_t *l_138 = &l_125[1][5][0].f1;
                    int32_t *l_140 = &l_134[3];
                    int32_t *l_141 = &g_45;
                    int32_t *l_142 = (void*)0;
                    int32_t *l_143 = &l_108;
                    int32_t *l_144 = (void*)0;
                    int32_t *l_145 = &l_111;
                    int32_t *l_146 = &l_111;
                    int32_t *l_147 = &l_125[1][5][0].f1;
                    int32_t *l_148 = &l_134[3];
                    int32_t *l_149 = &l_134[3];
                    int32_t *l_150 = &l_139;
                    int32_t *l_151[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_151[i] = &l_139;
                    g_154++;
                    --g_159[0];
                }
                else
                { 
                    return p_71.f0;
                }
                for (l_112 = 3; (l_112 >= 0); l_112 -= 1)
                { 
                    int i, j, k;
                    return g_59[g_116][(g_116 + 1)][g_116];
                }
                if (g_2[0][3][2])
                    break;
                for (l_112 = 3; (l_112 >= 0); l_112 -= 1)
                { 
                    int i, j, k;
                    if (g_59[g_116][(l_112 + 1)][l_112])
                        break;
                    return l_125[1][5][0].f0;
                }
                for (g_44 = 0; (g_44 <= 3); g_44 += 1)
                { 
                    int32_t *l_162 = (void*)0;
                    int32_t *l_163 = &l_111;
                    const struct S0 **l_165 = (void*)0;
                    (*l_163) &= 2L;
                    l_166 = l_164[3];
                    (*l_163) = l_133;
                }
            }
        }
        else
        { 
            struct S0 *l_175[5][7][7] = {{{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60}},{{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60}},{{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60}},{{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60}},{{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60}}};
            struct S0 **l_174 = &l_175[1][1][3];
            struct S0 ***l_173 = &l_174;
            const uint64_t l_206 = 1UL;
            int32_t l_218[3][7][7] = {{{(-1L),3L,0x7B0D87B0L,3L,(-1L),0L,4L},{0xB0FB132EL,0x3012BAB1L,0xE089767DL,0x216281FCL,0L,1L,(-1L)},{(-10L),4L,0x5D4B51E4L,0x96B59A0BL,(-5L),0x19D7C79DL,0L},{0xB0FB132EL,0x216281FCL,7L,0x17E17964L,0x216281FCL,1L,4L},{(-1L),0x5D4B51E4L,0xDA25E56EL,(-8L),0x2FBD109FL,0x2FBD109FL,(-8L)},{0x1747EB3CL,(-1L),0x1747EB3CL,4L,4L,0L,0xAB573FC3L},{3L,0x3C0FEA0DL,(-3L),(-1L),(-1L),1L,3L}},{{0x17E17964L,1L,0xAB573FC3L,4L,0x317331A6L,0L,6L},{0x5D4B51E4L,4L,(-10L),0x5D4B51E4L,(-7L),0x2FBD109FL,0x19D7C79DL},{(-1L),0xB2F50514L,1L,(-1L),(-1L),1L,0xB2F50514L},{(-7L),0xDA25E56EL,(-5L),(-4L),(-10L),0x19D7C79DL,(-1L)},{0L,(-1L),0x1747EB3CL,0xE089767DL,0xA302B4F1L,1L,0x317331A6L},{0L,(-5L),(-1L),(-4L),(-8L),0L,3L},{6L,0x317331A6L,0L,(-1L),0x3012BAB1L,4L,0xB0FB132EL}},{{0L,(-4L),0x5D4B51E4L,0x5D4B51E4L,(-4L),0L,7L},{0xA302B4F1L,0x17E17964L,1L,4L,0xB2F50514L,0x583C8124L,4L},{(-7L),1L,0x96B59A0BL,(-1L),7L,(-5L),0L},{0xE089767DL,0x17E17964L,0L,4L,0xA302B4F1L,0L,0xE089767DL},{0x3C0FEA0DL,(-4L),0x334622F9L,(-8L),4L,(-3L),4L},{0x17E17964L,0x317331A6L,0x317331A6L,0x17E17964L,0x1747EB3CL,0x3012BAB1L,0xFE6F2A28L},{0xDA25E56EL,(-5L),0L,0x96B59A0BL,(-7L),0L,0x2FBD109FL}}};
            int16_t l_227[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_227[i] = 0x508EL;
            for (g_116 = 0; (g_116 <= 3); g_116 += 1)
            { 
                int64_t l_209 = 0x2EB4F3A628D867FBLL;
                int32_t l_212 = (-2L);
                int32_t l_234 = 0x6993AF82L;
                uint32_t l_236 = 1UL;
                const struct S0 **l_239 = (void*)0;
                union U3 l_240 = {0x09D93A61L};
                int8_t l_260 = 0x14L;
                uint16_t l_261 = 0x5C76L;
                union U2 l_267 = {0xF3D4E41C9C57274BLL};
                int i;
            }
        }
    }
    (*l_169) &= ((safe_mod_func_int64_t_s_s((l_246 == ((*l_275) = l_274)), (4294967294UL ^ g_203[0][0][4]))) <= p_71.f0);
    for (g_211 = 18; (g_211 != 53); g_211 = safe_add_func_uint8_t_u_u(g_211, 7))
    { 
        int8_t *l_278 = &g_37;
        uint8_t *l_279 = &g_44;
        int32_t l_283 = 0xBF7BAFEBL;
        int32_t *l_284 = &g_233[0][4];
        struct S0 *l_293 = (void*)0;
        struct S0 **l_292[3];
        struct S0 ***l_291 = &l_292[2];
        struct S0 ****l_290[2];
        struct S0 *****l_289 = &l_290[0];
        const int16_t *l_305 = &g_228;
        const int16_t **l_304 = &l_305;
        int32_t l_337 = 0xD16A7A60L;
        int32_t l_338 = 4L;
        int32_t l_339 = (-4L);
        int32_t l_340 = 0L;
        int32_t l_341 = (-10L);
        int32_t l_342[3];
        int8_t l_347 = 0L;
        uint8_t l_350[4] = {0xF3L,0xF3L,0xF3L,0xF3L};
        uint16_t l_367 = 1UL;
        int32_t *l_406 = &l_338;
        int32_t *l_407[5][4] = {{&g_233[0][4],&l_134[3],&l_134[2],&g_233[0][4]},{&l_134[2],&g_233[0][4],&l_339,&l_339},{&l_134[3],&l_134[3],&g_233[0][3],&l_283},{&l_134[3],&l_134[3],&l_342[0],&l_134[2]},{&g_2[0][4][3],&l_134[3],&g_2[0][4][3],&l_342[0]}};
        uint32_t l_408 = 0UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_292[i] = &l_293;
        for (i = 0; i < 2; i++)
            l_290[i] = &l_291;
        for (i = 0; i < 3; i++)
            l_342[i] = 0xF6A40C5FL;
        if ((*l_169))
            break;
        (*l_284) ^= ((((*l_279) ^= ((void*)0 == l_278)) > (safe_add_func_uint32_t_u_u(g_232, (((g_89 > (p_71 , ((0x74L <= (((*l_169) ^= (+p_71.f0)) ^ 1UL)) | 5UL))) > g_157) || g_231[1])))) ^ l_283);
        if (g_89)
            continue;
        for (g_228 = 0; (g_228 >= 0); g_228 -= 1)
        { 
            const uint32_t l_301 = 0x5AB522A3L;
            const int16_t ***l_306 = &l_304;
            uint32_t *l_311[4];
            int32_t l_343 = 0x4DE94EE4L;
            int32_t l_344 = 1L;
            int32_t l_345 = 0xB9917C5AL;
            int32_t l_348 = (-6L);
            int32_t l_349[5];
            int32_t *l_360 = &l_342[0];
            int32_t l_366 = 0x3803E2EBL;
            union U3 **l_390 = &g_170[1][0];
            union U3 **l_391 = &g_170[0][2];
            int i;
            for (i = 0; i < 4; i++)
                l_311[i] = &g_203[2][3][2];
            for (i = 0; i < 5; i++)
                l_349[i] = (-1L);
            for (g_116 = 0; (g_116 <= 0); g_116 += 1)
            { 
                uint32_t l_286 = 0x77F78588L;
                for (g_157 = 0; (g_157 <= 0); g_157 += 1)
                { 
                    int32_t *l_285[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_285[i] = &l_134[(g_157 + 1)];
                    ++l_286;
                    l_294 = l_289;
                }
            }
            if (((l_301 , 0x0DL) ^ ((*l_278) = ((((*l_169) = ((g_302 != ((*l_306) = l_304)) < (safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((g_203[1][2][4]--) >= ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_318 != l_320), ((!(++g_322)) && (safe_mod_func_int8_t_s_s(((*l_169) != p_71.f0), (-4L)))))), 15)) ^ 0x5472L)) & g_327), (*l_169))) ^ 0xDA37591F8E5B7813LL), 7L)))) && g_231[6]) != p_71.f0))))
            { 
                int32_t **l_328 = &l_169;
                int32_t *l_329 = &l_134[3];
                int32_t *l_330 = (void*)0;
                int32_t *l_331 = &l_283;
                int32_t *l_332 = &l_283;
                int32_t *l_333 = &l_134[3];
                int32_t *l_334 = &l_134[2];
                int32_t *l_335[7];
                int32_t l_346 = 0xE084FBD8L;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_335[i] = (void*)0;
                (*l_328) = &l_235;
                l_350[3]--;
                return g_159[0];
            }
            else
            { 
                uint16_t l_356[5] = {0x1CD9L,0x1CD9L,0x1CD9L,0x1CD9L,0x1CD9L};
                int32_t *l_361 = (void*)0;
                int32_t *l_362 = &l_338;
                int32_t *l_363 = (void*)0;
                int32_t *l_364 = &l_283;
                int32_t *l_365[6] = {&l_349[0],&l_349[0],&l_349[0],&l_349[0],&l_349[0],&l_349[0]};
                int i;
                for (g_154 = 0; (g_154 < 54); g_154++)
                { 
                    int32_t *l_355[1];
                    int32_t **l_359 = &l_284;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_355[i] = (void*)0;
                    l_356[3]--;
                    (*l_359) = (void*)0;
                }
                l_360 = &g_45;
                l_367++;
                if (g_2[0][1][1])
                { 
                    int64_t l_384 = 0x844A8D60DA0D2046LL;
                    int64_t *l_387 = &l_87;
                    g_327 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((void*)0 != &g_170[1][0]), (+(*l_169)))), ((safe_unary_minus_func_int8_t_s(((safe_div_func_uint64_t_u_u(g_382, (+(l_384 >= 1L)))) && ((*l_387) = (g_382 = (((*l_278) = (safe_mod_func_uint8_t_u_u((g_221 & p_71.f0), (*l_169)))) || g_211)))))) != 1UL))) & p_71.f0) < (*l_364)), p_71.f0)), g_322));
                    (*l_169) ^= (1L >= (*l_360));
                }
                else
                { 
                    if (p_71.f0)
                        break;
                    (*l_362) = ((safe_add_func_uint32_t_u_u((l_390 != (l_391 = (l_259[1] , &g_170[0][3]))), ((*l_360) = (safe_add_func_int16_t_s_s(((*l_169) || (&g_203[1][2][4] != (g_394[2][5] = &g_211))), ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_159[0], g_208[1])), p_71.f0)), g_231[3])) == g_228), 0x5AL)) , 0x75D0L)))))) >= 0x6DC3EA2C5E25AF0DLL);
                    if (g_327)
                        break;
                    l_405 = g_403;
                }
            }
        }
        ++l_408;
    }
    return p_71.f0;
}



static struct S0  func_75(int64_t  p_76, int8_t * p_77, struct S1  p_78, const uint32_t  p_79, uint16_t  p_80)
{ 
    int32_t *l_83 = (void*)0;
    int32_t *l_84 = &g_45;
    (*l_84) &= g_60.f0;
    return g_60;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_18[i][j][k], "g_18[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_59[i][j][k], "g_59[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_82.f1, "g_82.f1", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);

    }
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_203[i][j][k], "g_203[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_205[i], "g_205[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_208[i], "g_208[i]", print_hash_value);

    }
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_224[i], "g_224[i]", print_hash_value);

    }
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_231[i], "g_231[i]", print_hash_value);

    }
    transparent_crc(g_232, "g_232", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_233[i][j], "g_233[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_418.f1, "g_418.f1", print_hash_value);
    transparent_crc(g_419.f2, "g_419.f2", print_hash_value);
    transparent_crc(g_419.f3, "g_419.f3", print_hash_value);
    transparent_crc(g_419.f4, "g_419.f4", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_783[i], "g_783[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
