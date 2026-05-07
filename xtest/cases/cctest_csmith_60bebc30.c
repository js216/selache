// SPDX-License-Identifier: MIT
// cctest_csmith_60bebc30.c --- cctest case csmith_60bebc30 (csmith seed 1623112752)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8e407cd7 */

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

// Options:   -s 1623112752 -o /tmp/csmith_gen_rl0g6pfq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 6;
   unsigned f1 : 3;
   unsigned f2 : 25;
   uint64_t  f3;
   const unsigned f4 : 12;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};


static uint8_t g_6 = 0x95L;
static int8_t g_10 = 2L;
static uint64_t g_19 = 0x129B85755261FC42LL;
static int16_t g_22 = (-1L);
static union U1 g_25[4] = {{0L},{0L},{0L},{0L}};
static int64_t g_77 = (-1L);
static int64_t g_78 = 0xDE1B453F477944D4LL;
static int32_t g_79 = 0L;
static uint8_t g_82 = 0xAAL;
static uint64_t g_98 = 0UL;
static int8_t g_99 = 0x7EL;
static uint16_t g_101 = 0UL;
static int32_t g_147 = 3L;
static int64_t g_157 = (-6L);
static struct S0 g_180 = {6,1,5396,18446744073709551614UL,61};
static int32_t g_282 = 0x40F2FB42L;
static int16_t g_304 = 1L;
static int8_t g_305 = (-1L);
static uint8_t g_307[5] = {8UL,8UL,8UL,8UL,8UL};
static int32_t g_334[2] = {0x7DD6AF28L,0x7DD6AF28L};
static int32_t g_338 = 3L;
static int16_t g_339 = 0x7D08L;
static uint64_t g_340[1] = {0UL};
static uint8_t g_370[5] = {0xB8L,0xB8L,0xB8L,0xB8L,0xB8L};
static int8_t g_374[1] = {0xA2L};
static uint32_t g_375 = 18446744073709551611UL;



static int32_t  func_1(void);
static int32_t  func_11(struct S0  p_12);
static struct S0  func_13(uint64_t  p_14, int64_t  p_15, int32_t  p_16);
static const int8_t  func_31(uint16_t  p_32, uint16_t  p_33, int32_t  p_34);




static int32_t  func_1(void)
{ 
    uint8_t l_9 = 0x6AL;
    int32_t l_269 = 1L;
    int32_t l_270 = 0xDB735408L;
    uint16_t l_283 = 65527UL;
    uint8_t l_383 = 0xE7L;
    int64_t l_395 = 0L;
    const struct S0 l_402[5] = {{2,0,1446,18446744073709551608UL,50},{2,0,1446,18446744073709551608UL,50},{2,0,1446,18446744073709551608UL,50},{2,0,1446,18446744073709551608UL,50},{2,0,1446,18446744073709551608UL,50}};
    union U1 l_410 = {0xCB3C5C33FC1196ACLL};
    int i;
    if ((g_10 = (safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(g_6, g_6)), (safe_lshift_func_int16_t_s_u(((l_9 | l_9) ^ l_9), l_9))))))
    { 
        uint32_t l_279[3];
        int32_t l_280 = 8L;
        const int32_t l_323 = (-1L);
        int i;
        for (i = 0; i < 3; i++)
            l_279[i] = 0xD9957389L;
        if (func_11(func_13((safe_mul_func_uint16_t_u_u(65527UL, (g_19--))), (g_22 = l_9), l_9)))
        { 
            const int32_t l_260[4] = {0x41AF60F2L,0x41AF60F2L,0x41AF60F2L,0x41AF60F2L};
            int32_t l_281 = (-1L);
            int i;
            l_280 &= (safe_lshift_func_int8_t_s_s(((((safe_unary_minus_func_int32_t_s(((-1L) < (safe_mul_func_int16_t_s_s((g_22 = ((safe_rshift_func_uint8_t_u_s(l_260[0], 2)) ^ (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((l_270 = (safe_add_func_int16_t_s_s(((--g_180.f3) > (l_269 = (((((g_180.f2 == (safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(0UL, 0x5BB58BC3C5A20AEDLL)) && 0x2DL), g_78)) >= (-5L)), l_279[2]))) == g_10) , l_260[0]) , g_78) & (-1L)))), g_157))), 1L)) == g_79), g_157)), g_22)))), 0xE451L))))) == l_260[3]) , g_147) >= 1UL), l_9));
            l_283 ^= (((0xEE2D552EA11B6DA6LL ^ ((g_180.f2 &= (((l_260[0] & (l_281 = ((0x1E0EL | g_10) <= 0xF255L))) , 0xA77DL) && 0x0D39L)) < l_280)) > g_282) , l_260[0]);
            for (l_270 = 2; (l_270 >= 0); l_270 -= 1)
            { 
                int i;
                l_280 = ((safe_lshift_func_int16_t_s_s(l_279[l_270], 4)) ^ (++g_101));
            }
        }
        else
        { 
            int8_t l_302 = 0xC2L;
            int32_t l_306[1];
            int32_t l_326 = (-8L);
            int32_t l_333 = 0x3B6AD0AEL;
            int i;
            for (i = 0; i < 1; i++)
                l_306[i] = 0xF249F298L;
            for (l_283 = 0; (l_283 < 46); l_283 = safe_add_func_int32_t_s_s(l_283, 8))
            { 
                uint8_t l_300 = 255UL;
                int32_t l_301 = (-8L);
                int32_t l_303 = (-1L);
                g_147 = ((g_98 = (((l_301 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(((l_270 = ((((0x4EL > (l_280 = 0x25L)) || g_180.f3) , (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(l_279[2], 0xD518CAC0L)), l_279[1]))) ^ l_300)) , g_98), l_9)) <= l_279[0]) || 0x1DF7L), g_282)), g_180.f4))) != 0x56AE978212C63436LL) != g_180.f2)) >= 1UL);
                --g_307[1];
            }
            g_79 = l_269;
            if ((((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((!(!((((safe_sub_func_int16_t_s_s((!(safe_sub_func_int8_t_s_s(g_99, 255UL))), (0xCDF28E5AF4E9B1BFLL | ((l_306[0] = ((((safe_lshift_func_int8_t_s_s(l_323, 4)) == 7UL) | 65529UL) >= 9L)) & 0x5472L)))) >= l_302) <= g_157) > 1L))) & g_180.f0), g_10)), l_279[2])) >= 65533UL) < l_269))
            { 
                int16_t l_332 = 0L;
                l_333 &= (safe_mod_func_int8_t_s_s(l_326, (safe_unary_minus_func_uint32_t_u((((g_19 = (((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(l_332, (l_306[0] >= l_280))) && 9L), g_98)) < l_306[0]) , l_332)) ^ g_304) >= 0x44DEL)))));
            }
            else
            { 
                g_334[0] = (l_306[0] = ((((l_306[0] <= l_306[0]) || l_280) , g_282) >= 0xBC31L));
            }
        }
    }
    else
    { 
        int32_t l_335[2][2] = {{0xF9319D2EL,0xF9319D2EL},{0xF9319D2EL,0xF9319D2EL}};
        int32_t l_336 = 0x1C72E303L;
        int32_t l_337 = (-1L);
        int i, j;
        g_147 = (g_157 , 0L);
        ++g_340[0];
    }
lbl_378:
    for (g_339 = (-16); (g_339 < 7); ++g_339)
    { 
        uint32_t l_345[2];
        int i;
        for (i = 0; i < 2; i++)
            l_345[i] = 0x63639430L;
        return l_345[1];
    }
    for (g_157 = 0; (g_157 <= 26); ++g_157)
    { 
        uint32_t l_358[2];
        int32_t l_373 = 0xBA2D400FL;
        int32_t l_386 = 0x49F47200L;
        int32_t l_387 = 0xD599E6D1L;
        uint32_t l_392 = 0xE991FC1BL;
        uint32_t l_413 = 0xDE44C6F2L;
        int i;
        for (i = 0; i < 2; i++)
            l_358[i] = 3UL;
        for (g_10 = 0; (g_10 < (-9)); g_10 = safe_sub_func_uint16_t_u_u(g_10, 3))
        { 
            uint16_t l_359 = 4UL;
            if ((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0UL, ((safe_div_func_uint16_t_u_u((((l_283 >= (l_9 >= (g_101 = ((l_269 != (-4L)) < (-2L))))) & 18446744073709551612UL) && 1UL), g_19)) >= g_180.f2))), (-1L))) , l_358[1]), 6L)))
            { 
                int64_t l_367 = 0xB9D46EC3D0FC66B7LL;
                if (l_9)
                    break;
                l_359 = l_358[0];
                g_370[3] ^= (g_147 ^= ((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s((l_9 & (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((1UL >= (l_367 > (safe_sub_func_uint8_t_u_u(0xF9L, 0x18L)))), l_358[1])), 0x537F6ACF37359695LL))), g_79)))) & l_358[0]) >= l_367) <= g_19));
            }
            else
            { 
                if (g_180.f3)
                    break;
            }
            l_269 &= (5UL && (g_101 ^ g_307[1]));
            for (g_22 = 0; (g_22 == (-18)); g_22--)
            { 
                g_375++;
                if (g_78)
                    goto lbl_378;
                l_387 = (g_79 |= (((1UL | (g_98 & (safe_add_func_int16_t_s_s((((l_386 = (((safe_mul_func_int8_t_s_s(l_383, (safe_sub_func_int8_t_s_s(g_82, 0UL)))) && 1UL) , g_82)) > l_9) | l_269), g_147)))) , l_383) >= l_373));
            }
        }
        if (((l_270 , ((safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((l_392 |= g_77), l_387)) >= (safe_div_func_int16_t_s_s((l_270 &= (g_180 , l_358[0])), 1L))), g_180.f2)) != l_395)) == 0x2A65L))
        { 
            uint8_t l_412 = 246UL;
            for (g_78 = 0; (g_78 <= 4); g_78 += 1)
            { 
                int32_t l_396[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_396[i] = 1L;
                l_396[0] = (-1L);
            }
            if (l_387)
                break;
            if ((safe_mod_func_int32_t_s_s(l_383, g_375)))
            { 
                g_79 ^= ((safe_add_func_int16_t_s_s((0x511B0AF7L && g_98), (~(l_373 > ((l_402[2] , 0x0EL) , g_180.f3))))) ^ g_101);
            }
            else
            { 
                int32_t l_411 = 0L;
                l_411 = ((g_180.f1 = ((safe_mod_func_int16_t_s_s((g_180.f4 , g_147), ((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((!(l_410 , (l_373 = (((g_339 &= l_411) | 0x4C98L) >= l_412)))) | l_413), l_411)), 65535UL)) || g_180.f3))) ^ g_82)) > 0x1BDFFC9AL);
                return l_402[2].f0;
            }
        }
        else
        { 
            l_373 = 0x01F39791L;
        }
    }
    return l_402[2].f4;
}



static int32_t  func_11(struct S0  p_12)
{ 
    const int16_t l_203 = 0xC1ADL;
    uint32_t l_204[3][2][4] = {{{4294967295UL,1UL,4294967295UL,1UL},{4294967295UL,1UL,4294967295UL,1UL}},{{4294967295UL,1UL,4294967295UL,1UL},{4294967295UL,1UL,4294967295UL,1UL}},{{4294967295UL,1UL,4294967295UL,1UL},{4294967295UL,1UL,4294967295UL,1UL}}};
    int32_t l_205 = 9L;
    uint32_t l_240 = 0xD964B4B9L;
    uint32_t l_249 = 0xB384F36AL;
    uint64_t l_251 = 18446744073709551615UL;
    int i, j, k;
    l_205 = (p_12.f2 == (((((safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((p_12.f3 = (func_13((p_12.f0 & (g_147 = (-7L))), (((g_77 , l_203) && 0x3397FCBDL) & 0L), l_203) , 2UL)), g_78)), l_203)) < p_12.f4) == l_204[2][1][0]) != l_204[1][0][1]) < p_12.f1));
    for (g_10 = 0; (g_10 < 21); g_10 = safe_add_func_uint64_t_u_u(g_10, 2))
    { 
        const uint8_t l_208[3][2][5] = {{{1UL,0x82L,0x52L,0x52L,0x82L},{1UL,0x82L,0x52L,0x52L,0x82L}},{{1UL,0x82L,0x52L,0x52L,0x82L},{1UL,0x82L,0x52L,0x52L,0x82L}},{{1UL,0x82L,0x52L,0x52L,0x82L},{1UL,0x82L,0x52L,0x52L,0x82L}}};
        int32_t l_229 = 0L;
        int i, j, k;
        if (l_208[0][0][2])
            break;
        for (g_79 = 0; (g_79 <= (-27)); g_79--)
        { 
            int32_t l_215 = 0L;
            int32_t l_216 = 2L;
            l_216 = (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_215 |= p_12.f3), l_208[0][0][2])), p_12.f4));
            if ((l_216 = ((0UL > (safe_mul_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(g_10, ((safe_add_func_int32_t_s_s(g_101, ((safe_lshift_func_uint16_t_u_s(p_12.f3, l_215)) >= l_204[2][1][0]))) | p_12.f0))) < (-2L)), g_79)), l_208[1][1][4])) != 0L) != g_180.f4), l_208[2][0][0]))) != g_99)))
            { 
                uint64_t l_230 = 0xA9F5600962F29F11LL;
                l_216 = (p_12 , p_12.f1);
                l_216 = p_12.f4;
                --l_230;
            }
            else
            { 
                g_147 |= p_12.f1;
            }
        }
    }
    for (p_12.f3 = (-28); (p_12.f3 != 18); p_12.f3 = safe_add_func_int64_t_s_s(p_12.f3, 2))
    { 
        int16_t l_237 = 0x1C91L;
        int32_t l_250 = 0L;
        int32_t l_252 = (-6L);
        g_79 = (safe_add_func_int32_t_s_s(l_237, (g_22 <= (safe_sub_func_int32_t_s_s((p_12.f1 > p_12.f4), l_240)))));
        l_252 = ((l_205 = 0x42L) ^ (((((((safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((g_77 , ((l_250 = (l_240 >= (safe_div_func_uint16_t_u_u((l_249 < l_237), p_12.f1)))) , 4294967295UL)), l_237)) != 0x9625EF2E4992809CLL), 0x9876L)) , 0xD7L) < l_251) , g_19) ^ l_203) < 1L) == p_12.f0));
    }
    return g_180.f3;
}



static struct S0  func_13(uint64_t  p_14, int64_t  p_15, int32_t  p_16)
{ 
    int32_t l_26 = (-8L);
    for (g_22 = 19; (g_22 != (-21)); g_22 = safe_sub_func_int32_t_s_s(g_22, 2))
    { 
        uint32_t l_41 = 1UL;
        int32_t l_42 = (-6L);
        uint32_t l_185 = 0x44EC9471L;
        for (p_16 = 3; (p_16 >= 0); p_16 -= 1)
        { 
            uint8_t l_28[4];
            int i;
            for (i = 0; i < 4; i++)
                l_28[i] = 0x96L;
            for (p_15 = 3; (p_15 >= 0); p_15 -= 1)
            { 
                uint64_t l_27 = 18446744073709551610UL;
                l_27 = l_26;
                if (l_28[2])
                    break;
            }
        }
        if ((((4294967287UL & ((((safe_lshift_func_int8_t_s_u(func_31(((safe_mul_func_uint16_t_u_u((~((~(p_15 | (safe_lshift_func_int8_t_s_s((l_42 &= (g_10 > l_41)), 5)))) , 0x53A81F6ED734895CLL)), 0x7A8DL)) >= g_10), p_16, g_19), g_22)) , 18446744073709551607UL) , 65530UL) && l_26)) || l_41) >= l_41))
        { 
            uint64_t l_195 = 18446744073709551615UL;
            int32_t l_196 = 0L;
            for (g_77 = (-22); (g_77 == (-1)); g_77 = safe_add_func_uint64_t_u_u(g_77, 8))
            { 
                return g_180;
            }
            l_196 = ((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((l_185 ^ (safe_mod_func_int32_t_s_s((g_180 , p_14), ((+(safe_mul_func_int8_t_s_s((((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((l_42 = l_195), 0xC588L)), g_157)) > 0L) < g_19), g_101))) , p_14)))), 0x113A2588FA3BE208LL)), 0x29D6L)) < 0UL);
        }
        else
        { 
            g_79 = p_14;
        }
    }
    for (g_82 = 0; g_82 < 4; g_82 += 1)
    {
        union U1 tmp = {-1L};
        g_25[g_82] = tmp;
    }
    l_26 = l_26;
    return g_180;
}



static const int8_t  func_31(uint16_t  p_32, uint16_t  p_33, int32_t  p_34)
{ 
    int16_t l_55 = 0x9AA6L;
    int16_t l_56 = 4L;
    int32_t l_80[1][4] = {{9L,9L,9L,9L}};
    int i, j;
    for (g_10 = 0; (g_10 < (-5)); g_10 = safe_sub_func_uint16_t_u_u(g_10, 3))
    { 
        int32_t l_69 = 8L;
        int32_t l_76 = (-1L);
        int32_t l_81 = 1L;
        int16_t l_100 = (-1L);
        struct S0 l_115 = {4,1,2783,0x4120E74272ABD0CELL,10};
        if (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(p_34, (((safe_mod_func_uint8_t_u_u(0x49L, 255UL)) >= l_55) == g_10))) , 0xCA7276463A47399DLL), g_6)) <= 0x44L) & 1L), l_56)), p_33)) <= 1L))
        { 
            int8_t l_66 = 1L;
            int32_t l_97 = 1L;
            if (((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_22, ((safe_mod_func_int16_t_s_s((9UL == (safe_rshift_func_int16_t_s_s((+(l_66 != (safe_lshift_func_int8_t_s_s(p_32, 7)))), g_22))), g_22)) < 0x4D865E429B053640LL))), l_69)) > (-1L)))
            { 
                uint32_t l_70 = 3UL;
                int32_t l_75[2][3][5] = {{{0L,1L,0x7CF5EE2CL,0x7CF5EE2CL,1L},{(-4L),(-2L),0xD444C677L,0xAC3F4083L,0xAC3F4083L},{3L,1L,3L,0x7CF5EE2CL,0x20C99D02L}},{{0xD03168F1L,(-6L),0xAC3F4083L,(-6L),0xD03168F1L},{3L,0L,1L,1L,1L},{(-4L),(-4L),0xAC3F4083L,0xD03168F1L,(-3L)}}};
                int i, j, k;
                --l_70;
                g_79 = (safe_mul_func_int16_t_s_s(((((l_81 = ((((g_82--) | ((safe_mod_func_uint32_t_u_u((((+((l_80[0][2] >= 18446744073709551615UL) > (((safe_sub_func_uint8_t_u_u(p_32, (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((((((safe_unary_minus_func_int16_t_s((l_76 = (l_97 = (p_34 > g_19))))) , g_19) & p_34) , g_98) | 0xCCDDECA68EB2A14DLL) <= l_75[1][1][3]), 4L)) != g_77), g_6)), l_66)))) < g_78) , g_6))) , g_6) || l_80[0][2]), l_66)) & g_98)) | g_98) && p_33)) , g_22) > l_56) == (-8L)), 0xE3F1L));
            }
            else
            { 
                g_79 = g_98;
            }
            --g_101;
            g_79 |= (safe_sub_func_uint64_t_u_u(l_76, 0x3FE16D896CD2A541LL));
        }
        else
        { 
            uint8_t l_122 = 0xAAL;
            uint16_t l_123 = 0x8D6DL;
            l_81 = (l_76 = (p_34 == (safe_add_func_uint8_t_u_u(((g_99 >= (safe_rshift_func_uint16_t_u_u((g_101 = (~(((((safe_sub_func_int16_t_s_s(((((((safe_div_func_int8_t_s_s((l_115 , ((safe_sub_func_int8_t_s_s(((l_80[0][2] |= (safe_unary_minus_func_uint16_t_u(((safe_div_func_int16_t_s_s(((!l_122) > 18446744073709551615UL), g_77)) && g_79)))) & 0xFC5AECEFL), p_34)) == g_19)), p_32)) <= l_122) , l_122) | l_55) | 0x42L) ^ g_79), p_32)) ^ l_122) < l_115.f0) , p_33) || g_6))), 14))) , p_34), 0x0FL))));
            --l_123;
        }
        if ((safe_lshift_func_uint8_t_u_s(((p_33 <= (p_33 | ((p_32 < ((((g_98 && 0x9565L) , 0x1CAA3E211E8D5353LL) != 0xDAF9C58AC2CC2217LL) && 0x30C0L)) , 0xD09BL))) == g_101), l_69)))
        { 
            int16_t l_152 = 0x63A1L;
            if ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((0L && (safe_div_func_uint8_t_u_u(0UL, (safe_add_func_int32_t_s_s(l_80[0][2], (-10L)))))) | p_33), 0)), l_55)), 65528UL)), 5)))
            { 
                uint8_t l_140 = 0xBBL;
                l_80[0][2] = ((l_140 ^ (g_79 ^= ((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((((safe_rshift_func_uint8_t_u_u(g_147, ((safe_mul_func_uint8_t_u_u(2UL, (l_76 = (safe_sub_func_int16_t_s_s(((l_152 > p_33) <= 0x77L), 1L))))) || g_99))) != g_147) == g_99) , l_140), g_99)), p_32)) || g_22))) > 0x60DBC482L);
            }
            else
            { 
                int32_t l_161 = (-3L);
                g_147 = (safe_mod_func_int32_t_s_s(g_77, (((safe_mul_func_int16_t_s_s((g_157 = g_101), (((0xF596B175D022AC7DLL < (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(0xDDL)), p_32))) || l_161) ^ l_80[0][1]))) || 0x6B4AE7F9L) && 1UL)));
            }
            if (p_33)
                break;
        }
        else
        { 
            uint32_t l_170 = 4294967295UL;
            const int32_t l_173 = 0L;
            int32_t l_174 = 0xBD2F48C2L;
            int32_t l_175[3][2];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_175[i][j] = 0L;
            }
            l_81 = 0xCD2DC6FEL;
            l_175[0][0] &= (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x82148F47L, ((safe_div_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s((l_170 = g_19), 5)) >= ((safe_mod_func_uint64_t_u_u(0UL, ((((l_173 , p_34) > 1L) && p_33) | 0L))) ^ p_32)) > l_174) || p_32), l_174)) && p_33))), g_99));
            for (g_147 = 0; (g_147 <= 20); g_147 = safe_add_func_uint8_t_u_u(g_147, 1))
            { 
                return g_10;
            }
        }
        l_81 = g_79;
    }
    l_80[0][3] &= g_98;
    return p_33;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_25[i].f0, "g_25[i].f0", print_hash_value);
        transparent_crc(g_25[i].f1, "g_25[i].f1", print_hash_value);
        transparent_crc(g_25[i].f2, "g_25[i].f2", print_hash_value);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    transparent_crc(g_180.f2, "g_180.f2", print_hash_value);
    transparent_crc(g_180.f3, "g_180.f3", print_hash_value);
    transparent_crc(g_180.f4, "g_180.f4", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_307[i], "g_307[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_334[i], "g_334[i]", print_hash_value);

    }
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_340[i], "g_340[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_370[i], "g_370[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_374[i], "g_374[i]", print_hash_value);

    }
    transparent_crc(g_375, "g_375", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
