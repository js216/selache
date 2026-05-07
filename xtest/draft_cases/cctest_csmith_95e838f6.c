// SPDX-License-Identifier: MIT
// cctest_csmith_95e838f6.c --- cctest case csmith_95e838f6 (csmith seed 2515024118)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x86313a1b */

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

// Options:   -s 2515024118 -o /tmp/csmith_gen_gj596m8y/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 9;
   unsigned f1 : 26;
   unsigned f2 : 20;
   signed f3 : 16;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
   const int16_t  f1;
   int16_t  f2;
   int32_t  f3;
};


static int32_t g_4[4][6][7] = {{{0L,(-1L),0L,1L,0L,0x83D78398L,0xFA553FC2L},{0L,(-6L),0x978D8EF0L,0xB81F947FL,(-1L),(-2L),0x26D8D383L},{0x21589AFCL,0xFA553FC2L,(-1L),0x5B6478C3L,(-1L),0xFA553FC2L,0x21589AFCL},{0xADF890BAL,0xDFE0091DL,0x26874BE7L,3L,0x26D8D383L,0x6EA3D881L,0xFA553FC2L},{0xDFE0091DL,0x8376FBFCL,(-2L),4L,(-6L),1L,8L},{0xF98CAFA3L,0L,0x26874BE7L,(-1L),0L,(-1L),(-10L)}},{{(-1L),(-4L),(-1L),0xFD020461L,0x6EA3D881L,0xF68993DDL,0x5A74D4B4L},{1L,(-1L),(-1L),0L,0L,0xDFE0091DL,0xFA553FC2L},{0x6EA3D881L,1L,0L,0xFD020461L,0xE56E623BL,0xB3493876L,(-1L)},{0x5FCC58A0L,0x26D8F9C3L,(-1L),(-6L),0xCEF33920L,8L,0x03773672L},{0x26874BE7L,5L,0x9A31C0A9L,5L,0xCEF33920L,0x5B6478C3L,(-4L)},{0L,0x03773672L,0xCAEABA4AL,0L,0xE56E623BL,0x5A74D4B4L,0xADF890BAL}},{{6L,0xADF890BAL,1L,1L,0L,3L,8L},{0x69A22DB7L,0L,0x5B6478C3L,1L,0x6EA3D881L,0x9A31C0A9L,0x6EA3D881L},{0xCEF33920L,1L,1L,0xCEF33920L,0xCAEABA4AL,0L,0x26D8F9C3L},{0x5FCC58A0L,(-1L),(-1L),1L,0xFD020461L,(-7L),0x5A74D4B4L},{5L,0L,0xDFE0091DL,(-4L),1L,(-1L),0x26D8F9C3L},{0L,1L,(-1L),0x6EA3D881L,1L,0L,0x6EA3D881L}},{{(-1L),1L,0xF68993DDL,(-6L),0xFA553FC2L,(-5L),8L},{(-7L),0L,0xDFE0091DL,(-1L),0x26D8F9C3L,0x5B6478C3L,0xADF890BAL},{(-1L),8L,0xB3493876L,1L,0L,0x18C6A866L,(-4L)},{6L,0x7F28A996L,8L,0L,0x69A22DB7L,0xE56E623BL,0x03773672L},{0L,0x7F28A996L,0x5B6478C3L,(-7L),1L,(-1L),(-1L)},{0x83D78398L,8L,0x5A74D4B4L,0x26D8F9C3L,0xCAEABA4AL,0xC3EC3D4EL,0xFA553FC2L}}};
static uint16_t g_58 = 65534UL;
static struct S0 g_60 = {14,3898,508,-135};
static uint32_t g_65 = 4294967295UL;
static int64_t g_81 = (-8L);
static int16_t g_87[1][5] = {{0xCA4CL,0xCA4CL,0xCA4CL,0xCA4CL,0xCA4CL}};
static int8_t g_126 = 0x4FL;
static uint8_t g_132 = 8UL;
static uint32_t g_161 = 0x888D95F4L;
static int64_t g_187 = (-4L);
static union U1 g_218 = {0xB8124FF2L};
static union U1 *g_245 = (void*)0;
static int16_t g_267 = (-1L);
static int32_t g_296 = 2L;
static uint64_t g_316 = 5UL;
static uint64_t g_323 = 0UL;
static int32_t *g_341 = &g_4[3][0][5];
static struct S0 *g_365 = (void*)0;
static struct S0 **g_364[3][2][3] = {{{&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365}},{{&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365}},{{&g_365,&g_365,&g_365},{&g_365,&g_365,&g_365}}};
static int32_t g_370 = (-1L);
static int32_t *g_369[6] = {&g_370,&g_370,&g_370,&g_370,&g_370,&g_370};
static int32_t **g_368 = &g_369[3];
static struct S0 g_371 = {8,6328,899,66};
static int64_t g_410[2][5] = {{0x22E52195089A55D3LL,0x22E52195089A55D3LL,0x22E52195089A55D3LL,0x22E52195089A55D3LL,0x22E52195089A55D3LL},{0x21B44F8032887811LL,0x21B44F8032887811LL,0x21B44F8032887811LL,0x21B44F8032887811LL,0x21B44F8032887811LL}};
static int32_t g_422 = 0x5D45A269L;
static union U1 g_446 = {0xC9947328L};
static int8_t g_467 = 1L;
static uint64_t g_592 = 0xC5623B028E6E5782LL;
static int64_t *g_649 = &g_81;
static int64_t **g_648 = &g_649;
static int64_t ***g_647 = &g_648;
static uint64_t **g_739 = (void*)0;
static const int16_t *g_830 = (void*)0;
static const int16_t g_832 = 1L;
static int8_t *g_887 = &g_467;
static int32_t *g_974 = &g_296;
static int32_t ** const g_973 = &g_974;
static int32_t ** const *g_972 = &g_973;
static int32_t ** const **g_971 = &g_972;
static int32_t ** const ***g_970[4] = {&g_971,&g_971,&g_971,&g_971};



static int64_t  func_1(void);
static int32_t ** func_24(int32_t * p_25, uint64_t  p_26, uint8_t  p_27);
static int32_t * func_28(int32_t ** p_29, uint64_t  p_30, int32_t  p_31);
static uint64_t  func_32(uint32_t  p_33);
static uint32_t  func_34(const uint64_t  p_35, int32_t * const  p_36, int32_t ** p_37, struct S0  p_38, int32_t * p_39);
static const uint64_t  func_40(int32_t * p_41, int8_t  p_42);
static struct S0  func_43(const int32_t  p_44);
static uint16_t  func_49(uint64_t  p_50);




static int64_t  func_1(void)
{ 
    int64_t l_2 = 0x2491E29EA41449C9LL;
    int32_t *l_3 = &g_4[3][0][5];
    int32_t *l_5 = &g_4[3][0][5];
    int32_t *l_6 = &g_4[1][4][5];
    int32_t *l_7 = &g_4[1][2][4];
    int32_t *l_8 = &g_4[0][1][0];
    int32_t *l_9 = &g_4[0][3][2];
    int32_t *l_10 = &g_4[1][4][6];
    int32_t l_11 = (-8L);
    int32_t *l_12[2][5] = {{&l_11,(void*)0,&l_11,(void*)0,&l_11},{&l_11,&l_11,&l_11,&l_11,&l_11}};
    int64_t l_13 = 0xD3BE1F678D19747ALL;
    int16_t l_14 = 0L;
    int64_t l_15 = 1L;
    int16_t l_16 = 0xD639L;
    int64_t l_17[6];
    uint8_t l_18 = 9UL;
    struct S0 *l_59 = &g_60;
    int32_t l_63[6] = {0x54CE7603L,0x54CE7603L,0x54CE7603L,0x54CE7603L,0x54CE7603L,0x54CE7603L};
    int64_t *l_64[2][1];
    int32_t ***l_873 = &g_368;
    int8_t *l_885 = &g_467;
    int8_t **l_886[4][4];
    int16_t *l_888 = &g_267;
    int32_t l_893 = 0xD16A2494L;
    const int32_t l_894[4][7] = {{(-8L),0x2423B78BL,(-8L),0x2423B78BL,(-8L),0x2423B78BL,(-8L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-8L),0x2423B78BL,(-8L),0x2423B78BL,(-8L),0x2423B78BL,(-8L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}};
    uint16_t l_895[5][7][2] = {{{1UL,2UL},{2UL,65535UL},{1UL,65535UL},{0x5F16L,1UL},{0xED78L,65535UL},{1UL,0UL},{0x5F16L,0xED78L}},{{0UL,65535UL},{0x0887L,0UL},{1UL,0UL},{0x0887L,65535UL},{0UL,0xED78L},{0x5F16L,0UL},{1UL,65535UL}},{{0xED78L,1UL},{0x5F16L,65535UL},{1UL,65535UL},{2UL,2UL},{1UL,0x0887L},{0UL,65535UL},{3UL,1UL}},{{0x5F16L,3UL},{65535UL,65535UL},{65535UL,3UL},{0x5F16L,1UL},{3UL,65535UL},{0UL,0x0887L},{1UL,2UL}},{{2UL,65535UL},{1UL,65535UL},{0x5F16L,1UL},{0xED78L,65535UL},{1UL,0UL},{0x5F16L,0xED78L},{0UL,65535UL}}};
    uint32_t *l_896 = &g_161;
    int64_t *****l_897 = (void*)0;
    int64_t *****l_898 = (void*)0;
    int64_t ****l_899 = (void*)0;
    const int32_t l_900[1][2][3] = {{{0L,0L,0xA4D7E506L},{0L,0L,0xA4D7E506L}}};
    uint32_t l_901 = 0xDE8A97A4L;
    const uint32_t l_937 = 0xDB5740E3L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_17[i] = 0L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_64[i][j] = &l_2;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_886[i][j] = &l_885;
    }
lbl_23:
    l_18--;
    for (l_13 = 6; (l_13 == 24); ++l_13)
    { 
        if (l_18)
            goto lbl_23;
    }
    if (l_13)
        goto lbl_874;
lbl_874:
    (*l_873) = func_24(func_28(&l_5, func_32(func_34(func_40((l_9 = (func_43((g_60.f3 |= (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(func_49((*l_7)), g_4[3][0][5])), (((((l_59 != (void*)0) , (g_65 ^= (safe_rshift_func_int16_t_s_s((((((*l_7) < 0x1468EAF90657D6C4LL) && g_60.f1) , (*l_10)) <= l_63[5]), 4)))) > g_60.f2) & 4294967294UL) != 18446744073709551613UL))))) , (void*)0)), g_60.f1), &l_63[5], g_368, g_371, &l_11)), g_422), g_371.f3, g_371.f1);
    l_901 |= ((g_87[0][2] = ((((safe_add_func_int8_t_s_s(g_422, (((((l_899 = ((*l_7) , (((*l_896) &= (((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(g_132, (&g_126 == (g_887 = l_885)))) , ((((*l_888) = (-1L)) < ((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((0x4BDD95A3L < (*l_8)), 0x6083L)), 5)) , g_371.f1)) && (*l_5))), 0)) > (*l_5)) , l_893), 251UL)), l_894[0][5])) != l_895[0][0][0]) , (***l_873))) , &g_647))) != (void*)0) >= 0x06CDD097L) < g_296) != 0xC4ADL))) ^ l_900[0][1][2]) & g_371.f1) == 0x48L)) ^ (*l_3));
    for (g_592 = 0; (g_592 <= 1); g_592 += 1)
    { 
        const int64_t l_911 = 0xDE26B79265591B50LL;
        int32_t l_914 = 0x08B4C57AL;
        uint64_t l_915 = 18446744073709551608UL;
        int32_t l_946[5][6] = {{0x8DFA5642L,0x8DFA5642L,0L,0x8DFA5642L,0x8DFA5642L,0L},{0x8DFA5642L,0x8DFA5642L,0L,0x8DFA5642L,0x8DFA5642L,0L},{0x8DFA5642L,0x8DFA5642L,0L,0x8DFA5642L,0x8DFA5642L,0L},{0x8DFA5642L,0x8DFA5642L,0L,0x8DFA5642L,0x8DFA5642L,0L},{0x8DFA5642L,0x8DFA5642L,0L,0x8DFA5642L,0x8DFA5642L,0L}};
        int32_t l_947 = 0x3710346FL;
        int32_t l_978 = (-1L);
        int i, j;
        for (g_446.f3 = 3; (g_446.f3 >= 0); g_446.f3 -= 1)
        { 
            const uint32_t *l_906 = &g_65;
            int32_t l_912 = 0x995C5192L;
            int32_t l_983 = (-1L);
            uint8_t l_984[7];
            int i;
            for (i = 0; i < 7; i++)
                l_984[i] = 0UL;
        }
        for (g_218.f3 = 1; (g_218.f3 >= 0); g_218.f3 -= 1)
        { 
            int64_t l_987 = 0xB175901DAEB8A862LL;
            return l_987;
        }
    }
    return (*l_10);
}



static int32_t ** func_24(int32_t * p_25, uint64_t  p_26, uint8_t  p_27)
{ 
    int64_t l_870 = 0x8D9E5CF7AF5E72ACLL;
    int32_t *l_871 = &g_4[3][0][5];
    int32_t **l_872 = &g_341;
    (*p_25) |= l_870;
    p_25 = ((*l_872) = ((*g_368) = l_871));
    return &g_341;
}



static int32_t * func_28(int32_t ** p_29, uint64_t  p_30, int32_t  p_31)
{ 
    int32_t *l_851[2][4];
    uint32_t l_852 = 0x7D906862L;
    uint8_t *l_858 = (void*)0;
    uint8_t **l_857 = &l_858;
    uint64_t *l_859 = &g_316;
    union U1 l_862 = {0xB2336D39L};
    const int32_t l_866 = 0xA8C893D3L;
    uint64_t *l_867 = (void*)0;
    uint64_t *l_868 = &g_323;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_851[i][j] = &g_4[3][0][1];
    }
    --l_852;
    (*p_29) = ((g_371.f3 && (((*l_857) = &g_132) == (((++(*l_859)) > ((*l_868) = (g_4[3][0][5] == ((((l_862 , ((void*)0 == &g_58)) , (!((safe_mod_func_int32_t_s_s((((**p_29) && (**p_29)) , (**p_29)), (**p_29))) > p_30))) >= l_866) >= (-1L))))) , &g_132))) , l_851[0][1]);
    for (g_187 = 3; (g_187 >= 0); g_187 -= 1)
    { 
        int8_t l_869 = (-1L);
        (**p_29) = l_869;
        return (*p_29);
    }
    return (*p_29);
}



static uint64_t  func_32(uint32_t  p_33)
{ 
    const int32_t *****l_759 = (void*)0;
    struct S0 *l_780 = &g_371;
    int32_t *l_782[6] = {&g_4[2][4][6],&g_4[2][4][6],&g_4[2][4][6],&g_4[2][4][6],&g_4[2][4][6],&g_4[2][4][6]};
    union U1 *l_783 = &g_218;
    union U1 **l_784 = (void*)0;
    union U1 **l_785 = &l_783;
    const int16_t *l_831 = &g_832;
    int16_t l_842 = 0xD57EL;
    int i;
lbl_766:
    l_759 = (void*)0;
    for (g_81 = 0; (g_81 == 29); g_81 = safe_add_func_uint32_t_u_u(g_81, 3))
    { 
        struct S0 l_772[4] = {{9,7076,998,254},{9,7076,998,254},{9,7076,998,254},{9,7076,998,254}};
        struct S0 *l_781 = &l_772[2];
        int i;
        for (g_446.f2 = 0; (g_446.f2 != 11); ++g_446.f2)
        { 
            uint32_t l_777 = 1UL;
            for (p_33 = 0; (p_33 < 44); p_33 = safe_add_func_uint64_t_u_u(p_33, 5))
            { 
                uint16_t l_767 = 1UL;
                if (p_33)
                    goto lbl_766;
                l_767 = 0x1EBCE46FL;
            }
            for (g_187 = (-8); (g_187 == 7); g_187 = safe_add_func_uint32_t_u_u(g_187, 9))
            { 
                for (g_467 = (-15); (g_467 != (-5)); ++g_467)
                { 
                    int16_t *l_773 = &g_267;
                    int32_t l_774 = 0x208F2278L;
                    int32_t *l_775 = &l_774;
                    int32_t *l_776 = &l_774;
                    l_774 &= (l_772[1] , (l_773 == (void*)0));
                    l_777--;
                }
            }
        }
        l_781 = l_780;
        if (p_33)
            continue;
        (*g_368) = l_782[0];
    }
    (*l_785) = l_783;
    for (g_126 = 0; (g_126 == (-7)); g_126 = safe_sub_func_int32_t_s_s(g_126, 5))
    { 
        int32_t l_801 = 0xA1177587L;
        uint32_t *l_817 = &g_65;
        uint8_t l_825 = 9UL;
        union U1 l_833 = {0x62AF8C93L};
        int32_t l_836 = 0xB635CA4FL;
        int32_t l_838 = 0xCDF665C5L;
        int32_t l_839 = 0x80894A65L;
        int32_t l_840 = (-1L);
        int32_t l_841 = 0xCB6185D6L;
        int32_t l_843 = 0x7C584968L;
        int32_t l_844 = 0x82BBEAF1L;
        int32_t l_845 = 0x736E8F58L;
        int32_t l_846 = 8L;
        int32_t l_847[1];
        uint64_t l_848[7];
        int i;
        for (i = 0; i < 1; i++)
            l_847[i] = 0xD7EB7D0EL;
        for (i = 0; i < 7; i++)
            l_848[i] = 18446744073709551615UL;
        for (g_161 = 0; (g_161 != 42); g_161 = safe_add_func_uint64_t_u_u(g_161, 7))
        { 
            uint64_t l_790[3];
            uint64_t *l_815 = (void*)0;
            uint64_t *l_816 = &g_316;
            const int16_t *l_828[5][4] = {{&g_87[0][0],(void*)0,&g_446.f1,(void*)0},{(void*)0,&g_267,&g_446.f1,&g_446.f1},{&g_87[0][0],&g_87[0][0],(void*)0,&g_446.f1},{&g_87[0][1],&g_267,&g_87[0][1],(void*)0},{&g_87[0][1],(void*)0,(void*)0,&g_87[0][1]}};
            const int16_t **l_829[6][3][3] = {{{(void*)0,&l_828[4][3],&l_828[3][2]},{&l_828[4][1],&l_828[4][1],&l_828[4][1]},{&l_828[4][1],&l_828[4][1],&l_828[1][0]}},{{&l_828[4][1],&l_828[4][3],&l_828[4][1]},{&l_828[4][1],(void*)0,&l_828[4][1]},{&l_828[3][2],&l_828[4][1],&l_828[4][1]}},{{&l_828[4][1],&l_828[1][0],&l_828[1][0]},{&l_828[4][1],&l_828[0][1],&l_828[4][1]},{&l_828[4][1],&l_828[4][1],&l_828[3][2]}},{{&l_828[4][1],&l_828[4][1],&l_828[4][1]},{&l_828[3][2],&l_828[4][1],&l_828[3][2]},{&l_828[4][1],&l_828[4][1],(void*)0}},{{&l_828[1][1],(void*)0,&l_828[1][1]},{&l_828[1][0],&l_828[4][1],&l_828[1][1]},{&l_828[3][2],&l_828[3][2],&l_828[4][1]}},{{&l_828[4][1],&l_828[1][1],&l_828[4][1]},{&l_828[4][1],&l_828[4][1],&l_828[4][1]},{&l_828[4][1],&l_828[4][1],&l_828[0][1]}}};
            int32_t l_834 = 0x10719D2AL;
            uint8_t *l_835 = &l_825;
            uint32_t l_837 = 1UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_790[i] = 0xAA9093F14F401F9CLL;
            --l_790[1];
            (*g_368) = (((***g_647) |= (safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(l_801, 13)), (safe_unary_minus_func_int64_t_s((((((safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((-4L), ((*l_816) = ((safe_lshift_func_int8_t_s_u(((((((safe_mod_func_int8_t_s_s((p_33 && (safe_rshift_func_uint16_t_u_u((+(~(g_132 , (p_33 , p_33)))), 7))), p_33)) & p_33) , p_33) < 0x7D37C1B17C47AB54LL) | 0x2270152B2A9DC504LL) & p_33), p_33)) , g_65)))), g_58)) , (*l_783)) , (void*)0) == l_817) | 6UL))))), p_33)) == p_33) ^ p_33) < g_371.f2), 7L))) , (void*)0);
            l_836 &= (((safe_mod_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(((!l_801) & (safe_mul_func_int8_t_s_s(g_60.f3, ((*l_835) = (((l_801 , (((l_825 >= (-5L)) , (l_834 = (safe_div_func_int32_t_s_s(((l_831 = (g_830 = l_828[4][1])) != ((((p_33 < (-6L)) != p_33) , l_833) , &g_267)), g_370)))) && p_33)) && p_33) == 0x9A6BL))))), 5L)) >= p_33), 0xA6EBFA346E5667DDLL)) > p_33) < p_33);
            if (l_837)
                continue;
        }
        l_848[4]--;
    }
    return p_33;
}



static uint32_t  func_34(const uint64_t  p_35, int32_t * const  p_36, int32_t ** p_37, struct S0  p_38, int32_t * p_39)
{ 
    uint64_t l_392[3];
    int32_t l_409 = 0x26AE2DFAL;
    uint16_t *l_430 = &g_58;
    int64_t *l_439 = &g_81;
    int64_t **l_512 = &l_439;
    int64_t ***l_511 = &l_512;
    int64_t ****l_510 = &l_511;
    int32_t l_566 = 0x021D886BL;
    int32_t l_570[5];
    int8_t l_576 = 0x95L;
    int16_t l_598 = 0x938FL;
    uint8_t l_600 = 5UL;
    uint32_t l_650 = 0x1377F51DL;
    int8_t l_660 = 8L;
    int32_t l_714 = (-5L);
    int64_t ****l_719 = &g_647;
    int32_t *l_754[6][1][1];
    uint64_t l_755 = 0x618B5D7EE9D7613FLL;
    int16_t l_758 = 0x6E61L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_392[i] = 4UL;
    for (i = 0; i < 5; i++)
        l_570[i] = (-8L);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_754[i][j][k] = &g_422;
        }
    }
    for (g_323 = 15; (g_323 < 55); g_323 = safe_add_func_uint64_t_u_u(g_323, 5))
    { 
        int32_t *l_378[5][3][3] = {{{&g_296,&g_296,&g_296},{(void*)0,(void*)0,(void*)0},{&g_296,&g_296,&g_296}},{{(void*)0,(void*)0,(void*)0},{&g_296,&g_296,&g_296},{(void*)0,(void*)0,(void*)0}},{{&g_296,&g_296,&g_296},{(void*)0,(void*)0,(void*)0},{&g_296,&g_296,&g_296}},{{(void*)0,(void*)0,(void*)0},{&g_296,&g_296,&g_296},{(void*)0,(void*)0,(void*)0}},{{&g_296,&g_296,&g_296},{(void*)0,(void*)0,(void*)0},{&g_296,&g_296,&g_296}}};
        int32_t **l_377 = &l_378[2][2][0];
        int8_t l_395 = 6L;
        uint16_t *l_427[1];
        union U1 *l_443 = &g_218;
        uint32_t l_457 = 3UL;
        int32_t l_476[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_427[i] = &g_58;
        for (i = 0; i < 2; i++)
            l_476[i] = 0x80406FD3L;
    }
    for (l_409 = 0; (l_409 < 13); l_409++)
    { 
        uint16_t l_521 = 0x5F6CL;
        int32_t *l_531 = &g_296;
        uint8_t *l_532 = &g_132;
        const int64_t * const *l_553 = (void*)0;
        const int64_t * const **l_552 = &l_553;
        int32_t * const * const *l_560 = (void*)0;
        int32_t l_561 = 0L;
        int32_t l_568[2][6];
        int32_t l_599[3];
        int32_t *l_603 = (void*)0;
        int32_t *l_604 = &l_561;
        int32_t *l_605 = &g_4[3][0][5];
        int32_t *l_606 = &l_561;
        int32_t *l_607 = &g_370;
        int32_t *l_608[6];
        uint8_t l_609[6] = {252UL,252UL,252UL,252UL,252UL,252UL};
        int32_t l_616 = 0xC8837498L;
        const struct S0 *l_625 = &g_60;
        const struct S0 **l_624[5] = {&l_625,&l_625,&l_625,&l_625,&l_625};
        const uint32_t l_651[4][3] = {{0x6674BB79L,0x1E6D7A57L,0x6674BB79L},{0x6674BB79L,0x1E6D7A57L,0x6674BB79L},{0x6674BB79L,0x1E6D7A57L,0x6674BB79L},{0x6674BB79L,0x1E6D7A57L,0x6674BB79L}};
        int32_t **l_677 = &l_531;
        int32_t ***l_676 = &l_677;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_568[i][j] = 0xC55DEF99L;
        }
        for (i = 0; i < 3; i++)
            l_599[i] = 0x7B9204A3L;
        for (i = 0; i < 6; i++)
            l_608[i] = (void*)0;
        for (g_218.f2 = 14; (g_218.f2 > 9); g_218.f2 = safe_sub_func_int8_t_s_s(g_218.f2, 6))
        { 
            uint32_t l_526 = 4294967289UL;
            union U1 l_548[5] = {{0xF0EEF940L},{0xF0EEF940L},{0xF0EEF940L},{0xF0EEF940L},{0xF0EEF940L}};
            int32_t *l_549 = (void*)0;
            int32_t l_569 = 0x230C9CEAL;
            struct S0 l_583 = {1,5496,810,233};
            int i;
            for (g_267 = 3; (g_267 < (-23)); g_267--)
            { 
                (*p_37) = (*p_37);
                for (g_126 = 0; (g_126 != 12); g_126 = safe_add_func_uint16_t_u_u(g_126, 1))
                { 
                    struct S0 l_524[7][4][2] = {{{{3,7519,451,1},{5,5485,600,160}},{{16,947,224,97},{7,5681,939,-17}},{{11,4087,765,150},{8,279,895,-146}},{{16,2574,496,-144},{8,279,895,-146}}},{{{11,4087,765,150},{7,5681,939,-17}},{{16,947,224,97},{5,5485,600,160}},{{3,7519,451,1},{3,7519,451,1}},{{7,5681,939,-17},{16,2574,496,-144}}},{{{1,6757,927,131},{13,7562,255,196}},{{7,1395,432,-215},{1,6870,363,198}},{{14,3881,83,188},{7,1395,432,-215}},{{14,452,260,-103},{11,4087,765,150}}},{{{14,452,260,-103},{7,1395,432,-215}},{{14,3881,83,188},{1,6870,363,198}},{{7,1395,432,-215},{13,7562,255,196}},{{1,6757,927,131},{16,2574,496,-144}}},{{{7,5681,939,-17},{3,7519,451,1}},{{3,7519,451,1},{5,5485,600,160}},{{16,947,224,97},{7,5681,939,-17}},{{11,4087,765,150},{8,279,895,-146}}},{{{16,2574,496,-144},{8,279,895,-146}},{{11,4087,765,150},{7,5681,939,-17}},{{16,947,224,97},{5,5485,600,160}},{{3,7519,451,1},{3,7519,451,1}}},{{{7,5681,939,-17},{16,2574,496,-144}},{{1,6757,927,131},{13,7562,255,196}},{{7,1395,432,-215},{1,6870,363,198}},{{14,3881,83,188},{7,1395,432,-215}}}};
                    struct S0 *l_525 = &l_524[0][3][1];
                    int i, j, k;
                    l_521++;
                    (*l_525) = l_524[1][3][1];
                    (**p_37) = l_521;
                    if ((**g_368))
                        continue;
                }
                (**p_37) = (p_35 <= 255UL);
            }
            (**g_368) |= (l_521 == (l_526 != (safe_mod_func_uint8_t_u_u(((l_521 != (safe_lshift_func_int16_t_s_s(((void*)0 == l_531), ((void*)0 == l_532)))) | p_38.f3), g_81))));
            for (g_446.f3 = 4; (g_446.f3 >= 0); g_446.f3 -= 1)
            { 
                uint16_t l_533 = 65535UL;
                int32_t l_565 = 0x7ED88C78L;
                int32_t l_567 = 0x378412F3L;
                int32_t *l_593 = &g_370;
                int32_t *l_594 = &l_566;
                int32_t *l_595 = &l_568[1][1];
                int32_t *l_596[4][1][4] = {{{&l_568[1][5],&l_568[1][5],&l_568[0][4],&l_568[1][5]}},{{&l_568[1][5],(void*)0,(void*)0,&l_568[1][5]}},{{(void*)0,&l_568[1][5],(void*)0,(void*)0}},{{&l_568[1][5],&l_568[1][5],&l_568[0][4],&l_568[1][5]}}};
                int64_t l_597[6][5] = {{0x898DA175FD340DE4LL,0x898DA175FD340DE4LL,0xB5C3B3422ED2F0F0LL,0xB5C3B3422ED2F0F0LL,0x898DA175FD340DE4LL},{0x0ECC1BA326892937LL,0xDCF0576C6E9EF40DLL,0x0ECC1BA326892937LL,0xDCF0576C6E9EF40DLL,0x0ECC1BA326892937LL},{0x898DA175FD340DE4LL,0xB5C3B3422ED2F0F0LL,0xB5C3B3422ED2F0F0LL,0x898DA175FD340DE4LL,0x898DA175FD340DE4LL},{(-1L),0xDCF0576C6E9EF40DLL,(-1L),0xDCF0576C6E9EF40DLL,(-1L)},{0x898DA175FD340DE4LL,0x898DA175FD340DE4LL,0xB5C3B3422ED2F0F0LL,0xB5C3B3422ED2F0F0LL,0x898DA175FD340DE4LL},{0x0ECC1BA326892937LL,0xDCF0576C6E9EF40DLL,0x0ECC1BA326892937LL,0xDCF0576C6E9EF40DLL,0x0ECC1BA326892937LL}};
                int i, j, k;
            }
        }
        --l_609[4];
        for (g_296 = 25; (g_296 > (-2)); g_296 = safe_sub_func_uint64_t_u_u(g_296, 5))
        { 
            return g_4[1][2][3];
        }
        if ((safe_mul_func_uint16_t_u_u((((p_38.f0 > ((**g_368) = ((*l_605) = (*p_39)))) && (l_566 |= p_38.f0)) >= (l_600 <= 18446744073709551608UL)), (((((((void*)0 == &l_392[0]) < l_576) , l_598) , l_616) < g_422) || (-9L)))))
        { 
            return l_409;
        }
        else
        { 
            uint8_t l_631 = 252UL;
            union U1 l_646 = {-2L};
            int8_t *l_661 = &l_576;
            int64_t l_666 = 0x057A4EC3968A61FCLL;
            int32_t **l_674 = &l_531;
            int32_t ***l_673 = &l_674;
            int32_t ****l_675[3];
            int16_t l_680 = 1L;
            int64_t ****l_720 = &l_511;
            struct S0 *l_729 = (void*)0;
            uint16_t *l_746 = &g_58;
            uint16_t *l_747 = (void*)0;
            int32_t l_749 = 0xBD74CB85L;
            int32_t l_750[5][2] = {{9L,9L},{9L,9L},{9L,9L},{9L,9L},{9L,9L}};
            uint32_t l_751 = 1UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_675[i] = (void*)0;
            for (l_521 = 22; (l_521 < 37); ++l_521)
            { 
                int8_t *l_630[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_632 = 0x4B497B0DL;
                int i, j;
                (*l_606) &= (safe_add_func_int8_t_s_s(g_410[1][2], ((((safe_lshift_func_int8_t_s_s(((!(((((*l_532) = l_566) | (g_126 = (l_570[2] |= (l_624[1] == ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((**p_37), (**p_37))), 0x7DL)) , &g_365))))) & g_296) != l_631)) <= l_632), 2)) <= 0x7E0CF3C5L) & 0L) <= g_4[3][0][5])));
            }
            (*p_39) ^= (((*l_605) > (((safe_mod_func_uint16_t_u_u(((**g_368) & ((safe_div_func_uint64_t_u_u(((+(p_38.f1 || ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((**g_368) | (((((safe_mul_func_uint8_t_u_u(l_392[1], ((p_38.f1 > (~((!((***g_647) = (((*l_510) = (l_646 , g_647)) != &l_512))) , p_38.f2))) > 0xEC89F60AL))) > (*l_607)) || 0xA187B746L) != g_446.f3) && (*l_607))), l_650)), l_651[0][1])) && (**p_37)))) | l_650), g_4[2][2][4])) , 0xBF1FD923L)), g_370)) > g_4[3][0][5]) <= l_646.f2)) , l_646.f3);
            (*p_39) ^= (((safe_rshift_func_int8_t_s_u((l_598 , ((*l_661) ^= (((((safe_mul_func_int8_t_s_s(((void*)0 != &p_37), l_646.f1)) != (safe_mod_func_uint8_t_u_u(p_35, (safe_sub_func_int16_t_s_s(((l_660 < (**p_37)) && 0x1AE2E106L), 0xE371L))))) , 0x54L) > p_38.f1) & g_65))), 5)) > p_38.f2) && p_38.f0);
            if ((safe_sub_func_uint16_t_u_u(0UL, ((**g_648) , (safe_rshift_func_int16_t_s_s(l_666, (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((9L | ((l_676 = l_673) != (void*)0)), ((((safe_sub_func_uint16_t_u_u(((*l_430) = p_35), 65527UL)) >= p_38.f2) == l_680) & (*l_604)))), p_38.f3)), 5))))))))
            { 
                int8_t l_685 = (-10L);
                for (g_161 = 0; (g_161 == 43); g_161 = safe_add_func_uint16_t_u_u(g_161, 8))
                { 
                    int32_t *l_683 = &l_570[4];
                    int32_t l_684 = 0x16CA4A12L;
                    uint16_t l_686 = 0xB5E4L;
                    (*p_37) = l_683;
                    --l_686;
                    (*l_606) &= (((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_s(0x38L, (*l_607))))), (l_685 | (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((!((*l_532) &= (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(6UL, (~g_60.f2))), 6UL)))))), (((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((~(safe_lshift_func_int8_t_s_s(g_371.f0, p_38.f1))), (*l_605))), 15)) > g_446.f2) && (**g_648)))), (-1L)))))), p_38.f1)) & (-1L)) > 0x7E366726F81F8522LL);
                    if ((**g_368))
                        continue;
                    return l_714;
                }
            }
            else
            { 
                int64_t *****l_721[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t *l_724 = (void*)0;
                uint32_t *l_725[7] = {&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65};
                int32_t l_736 = 5L;
                struct S0 l_743 = {20,3117,349,164};
                union U1 *l_744 = (void*)0;
                int16_t l_748 = (-8L);
                int i;
                if ((g_296 >= (((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((l_719 != (l_510 = l_720)) > (safe_div_func_uint32_t_u_u(g_410[1][0], (*p_36)))) <= ((***g_647) = (-6L))), ((p_38.f1 &= ((void*)0 == l_720)) | p_38.f0))) && 0x9715L), g_218.f1)) == p_35) || p_35)))
                { 
                    (*g_368) = l_725[0];
                }
                else
                { 
                    const int16_t l_726 = (-1L);
                    struct S0 *l_727 = &g_60;
                    (*p_37) = (void*)0;
                    p_38 = ((*l_727) = func_43(l_726));
                    (*l_607) &= (safe_unary_minus_func_int32_t_s(l_726));
                    return p_38.f0;
                }
                l_729 = &p_38;
                if (((((((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((p_38.f3 >= (250UL <= (((safe_lshift_func_uint16_t_u_u(g_296, l_736)) == p_38.f2) == g_218.f1))) > ((p_38.f0 < 0L) & 0UL)) > g_410[1][1]), 65526UL)), p_35)) > g_410[1][2]) <= p_38.f2) , 0xEF2997164740F4A1LL) , l_736) , (-1L)) != l_392[2]) <= l_646.f1))
                { 
                    uint64_t ***l_740 = &g_739;
                    (*l_740) = g_739;
                }
                else
                { 
                    (*l_729) = func_43((*p_36));
                    if ((**p_37))
                        continue;
                    (*l_607) ^= ((((void*)0 != &l_511) || g_296) >= ((safe_sub_func_int16_t_s_s(((l_743 , l_744) == &l_646), (!((((g_446 , l_746) == l_747) == p_38.f3) || 4294967293UL)))) < g_422));
                }
                ++l_751;
            }
            return p_38.f1;
        }
    }
    l_755++;
    l_758 ^= 0x6FA99E68L;
    (**p_37) = (**p_37);
    return p_35;
}



static const uint64_t  func_40(int32_t * p_41, int8_t  p_42)
{ 
    int64_t *l_80 = &g_81;
    int32_t l_82 = 0x411915D6L;
    uint16_t *l_83 = &g_58;
    int16_t *l_84 = (void*)0;
    int16_t *l_85 = (void*)0;
    int16_t *l_86[6] = {&g_87[0][2],&g_87[0][2],&g_87[0][2],&g_87[0][2],&g_87[0][2],&g_87[0][2]};
    int32_t l_88 = 0x71FBC6ABL;
    int32_t * const l_91[1][4] = {{&l_88,&l_88,&l_88,&l_88}};
    int32_t * const *l_90 = &l_91[0][3];
    uint16_t l_120 = 65528UL;
    int32_t *l_149 = &l_82;
    uint32_t l_154 = 2UL;
    const int16_t l_195 = 0x90ACL;
    union U1 *l_244 = (void*)0;
    uint8_t *l_270 = (void*)0;
    int32_t *l_295 = &g_296;
    struct S0 ***l_366 = &g_364[1][0][1];
    const uint32_t l_367[3] = {0xD10E075EL,0xD10E075EL,0xD10E075EL};
    int i, j;
    if ((65530UL == (l_88 = (65526UL < ((*l_83) = (safe_rshift_func_int16_t_s_s((l_82 &= (l_80 != l_80)), (0UL > g_60.f2))))))))
    { 
        int32_t *l_89 = &l_88;
        int32_t l_101 = 7L;
        int32_t l_105 = 8L;
        int32_t l_106 = (-1L);
        int32_t l_107 = 1L;
        int32_t l_109 = 0x754A42A4L;
        int32_t l_110 = 0x2A51040BL;
        int32_t l_111 = 0xA57585B5L;
        int32_t l_112[7] = {0x2B9E36AFL,0x2B9E36AFL,0x2B9E36AFL,0x2B9E36AFL,0x2B9E36AFL,0x2B9E36AFL,0x2B9E36AFL};
        uint32_t l_116[5][5] = {{0xCD904EE0L,1UL,0xF9D898FAL,1UL,0xCD904EE0L},{1UL,18446744073709551615UL,0xEE1DC77BL,0xD22B6917L,18446744073709551615UL},{0xCD904EE0L,0xEE1DC77BL,0xEE1DC77BL,0xCD904EE0L,0xD22B6917L},{1UL,0xCD904EE0L,0xF9D898FAL,18446744073709551615UL,18446744073709551615UL},{1UL,0xCD904EE0L,1UL,0xD22B6917L,0xCD904EE0L}};
        int i, j;
        for (g_81 = 0; (g_81 <= 5); g_81 += 1)
        { 
            int32_t * const **l_92 = &l_90;
            int32_t l_98 = 0xC38940A2L;
            int32_t l_100[5] = {0xCF444A0EL,0xCF444A0EL,0xCF444A0EL,0xCF444A0EL,0xCF444A0EL};
            const int16_t l_127 = (-4L);
            uint8_t l_162 = 1UL;
            int64_t *l_192 = &g_187;
            int i;
            for (l_88 = 4; (l_88 >= 0); l_88 -= 1)
            { 
                if (p_42)
                    break;
            }
            if (((p_41 != (func_43(g_65) , l_89)) < (((((*l_92) = l_90) == (void*)0) , (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0x9E11L, g_60.f2)), 0xB001L))) || p_42)))
            { 
                int64_t l_99 = (-1L);
                int32_t l_103 = 1L;
                int32_t l_104[6] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                struct S0 *l_125 = &g_60;
                int i;
                for (p_42 = 4; (p_42 >= 0); p_42 -= 1)
                { 
                    uint32_t l_97 = 18446744073709551610UL;
                    int32_t l_102 = 0xCAC7ECDFL;
                    int32_t l_108 = 1L;
                    int32_t l_113 = 0xB84E66C3L;
                    int32_t l_114 = 1L;
                    int32_t l_115 = 0xC27B2AF5L;
                    int32_t **l_119 = &l_89;
                    (*l_89) = l_97;
                    --l_116[4][1];
                    (*l_119) = &g_4[3][0][5];
                    ++l_120;
                }
                if ((g_126 |= (safe_mul_func_uint16_t_u_u(p_42, ((p_42 , (func_43(p_42) , &g_81)) == (((**l_90) , ((***l_92) = ((((l_104[3] = g_60.f0) < g_60.f2) , (void*)0) == l_125))) , (void*)0))))))
                { 
                    (*l_89) = 0x49774D5AL;
                    (***l_92) = (((void*)0 == l_125) , g_60.f0);
                    return l_127;
                }
                else
                { 
                    if (g_4[2][5][4])
                        break;
                }
            }
            else
            { 
                uint8_t l_144 = 0x86L;
                int32_t *l_147[3];
                int32_t l_148[7][6] = {{(-3L),(-3L),4L,0x042B0432L,0x40064E38L,0x042B0432L},{(-1L),(-3L),(-1L),0x0B856BF0L,4L,4L},{0x848A5FBAL,(-1L),(-1L),0x848A5FBAL,(-3L),0x042B0432L},{0x042B0432L,0x848A5FBAL,4L,0x848A5FBAL,0x042B0432L,0x0B856BF0L},{0x848A5FBAL,0x042B0432L,0x0B856BF0L,0x0B856BF0L,0x042B0432L,0x848A5FBAL},{(-1L),0x848A5FBAL,(-3L),0x042B0432L,(-3L),0x848A5FBAL},{(-3L),(-1L),0x0B856BF0L,4L,4L,0x0B856BF0L}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_147[i] = &l_98;
                if (g_60.f1)
                { 
                    int32_t *l_128 = &l_107;
                    l_89 = l_128;
                }
                else
                { 
                    uint8_t *l_131[4][4][2] = {{{&g_132,(void*)0},{&g_132,(void*)0},{&g_132,&g_132},{&g_132,(void*)0}},{{&g_132,(void*)0},{&g_132,&g_132},{&g_132,(void*)0},{&g_132,(void*)0}},{{&g_132,&g_132},{&g_132,(void*)0},{&g_132,(void*)0},{&g_132,&g_132}},{{&g_132,(void*)0},{&g_132,(void*)0},{&g_132,&g_132},{&g_132,(void*)0}}};
                    struct S0 *l_141[4] = {&g_60,&g_60,&g_60,&g_60};
                    const int32_t *l_143 = &l_109;
                    const int32_t **l_142[7][4][2] = {{{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}},{{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}},{{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}},{{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}},{{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}},{{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}},{{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143},{&l_143,&l_143}}};
                    int i, j, k;
                    (***l_92) = (safe_mul_func_int8_t_s_s((**l_90), (((g_60.f3 , (g_132 = 0xC4L)) != g_60.f3) , (safe_mod_func_int16_t_s_s((*l_89), (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(g_58, ((safe_div_func_int32_t_s_s(((l_141[3] == &g_60) , 0x039B3D80L), 7UL)) , 0x2DL))) , g_65), 2)))))));
                    p_41 = (void*)0;
                    if (g_60.f0)
                        continue;
                }
                l_144--;
                l_149 = ((l_148[1][0] &= g_60.f1) , &l_106);
                for (l_110 = 0; (l_110 <= 5); l_110 += 1)
                { 
                    int32_t **l_150 = &l_149;
                    (*l_150) = p_41;
                    return g_81;
                }
                return g_58;
            }
            for (l_82 = 5; (l_82 >= 1); l_82 -= 1)
            { 
                uint64_t l_180[1][4][1] = {{{1UL},{0x90DB344362D38288LL},{1UL},{0x90DB344362D38288LL}}};
                uint8_t *l_181 = &l_162;
                int64_t *l_186 = &g_187;
                int32_t l_193[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j, k;
                for (g_126 = 1; (g_126 <= 5); g_126 += 1)
                { 
                    uint8_t l_151 = 0UL;
                    struct S0 l_152 = {9,5326,936,-154};
                    struct S0 *l_153 = &l_152;
                    uint16_t **l_167 = &l_83;
                    uint16_t *l_168 = &l_120;
                    uint16_t *l_169 = &g_58;
                    int i;
                    if (l_151)
                        break;
                    (*l_153) = l_152;
                    l_154++;
                    l_100[4] |= ((**l_90) = ((safe_rshift_func_uint16_t_u_s((*l_149), 5)) ^ ((safe_lshift_func_uint16_t_u_s((((g_161 = g_81) > l_162) , (safe_mod_func_uint16_t_u_u(((*l_169) = ((*l_168) = (safe_rshift_func_uint16_t_u_s((1L != (l_86[l_82] == ((*l_167) = l_86[g_81]))), 10)))), (safe_mod_func_uint32_t_u_u(g_81, g_4[3][0][5]))))), p_42)) != l_151)));
                }
                l_193[3] &= (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((l_180[0][0][0] ^ (++(*l_181))) ^ 1L) < ((safe_mul_func_uint16_t_u_u((((((*l_186) = ((*l_89) , p_42)) , 0x86L) , (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((g_58 ^ (((l_192 != l_186) & p_42) , g_87[0][2])) , l_180[0][0][0]), 0xF6L)), p_42))) < (***l_92)), 0L)) | g_132)), 0xC8L)), g_87[0][2])) && 0xCCA0383BF8C482F6LL), 0x7AL)), g_4[1][2][2]));
            }
        }
        (*l_149) ^= (~l_195);
    }
    else
    { 
        union U1 l_198 = {2L};
        uint16_t * const *l_210 = &l_83;
        int32_t l_281 = 0x0BBB8B5CL;
        int32_t l_284 = 0x8ABE53C1L;
        int32_t l_287[6] = {0L,0L,0L,0L,0L,0L};
        union U1 **l_293 = &g_245;
        union U1 *l_297 = &l_198;
        int8_t *l_300 = &g_126;
        int8_t l_319[4];
        struct S0 *l_344 = &g_60;
        int i;
        for (i = 0; i < 4; i++)
            l_319[i] = 1L;
lbl_253:
        (**l_90) = (p_42 , (safe_mul_func_uint16_t_u_u(((void*)0 == l_80), (((l_198 , (safe_rshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s(0xB28E14CA5DCCD833LL, (safe_mul_func_uint16_t_u_u(((!(((p_42 != (p_42 , g_4[3][0][5])) != (-1L)) | 1L)) > 0xC778346DL), 0x3196L)))) || g_81), 8))) && 0x65BB6E59L) != (*l_149)))));
        if (((safe_mod_func_int64_t_s_s(g_126, (safe_sub_func_uint16_t_u_u((((void*)0 != l_210) ^ ((9UL ^ (safe_rshift_func_int16_t_s_u((l_198.f3 = (safe_mod_func_uint8_t_u_u(((~(safe_sub_func_uint64_t_u_u(((p_42 == ((g_218 , (safe_rshift_func_uint16_t_u_s(p_42, 3))) | p_42)) , p_42), g_132))) == g_81), 1UL))), 6))) || 1UL)), g_218.f1)))) , g_58))
        { 
            const int64_t l_233 = (-1L);
            int8_t *l_234 = &g_126;
            int32_t l_235 = (-1L);
            int32_t l_236 = 0x089AC569L;
            union U1 *l_242[2][7][1] = {{{(void*)0},{&g_218},{(void*)0},{&g_218},{(void*)0},{&g_218},{(void*)0}},{{&g_218},{(void*)0},{&g_218},{(void*)0},{&g_218},{(void*)0},{&g_218}}};
            int i, j, k;
lbl_248:
            l_236 |= (safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((-7L), 65535UL)) ^ (l_235 = (p_42 , (safe_div_func_uint32_t_u_u((((*l_234) = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((l_198.f0 ^ l_233), 12)) | (g_81 != g_4[3][3][3])), 0xC7L))) || l_198.f0), 0x6D18EE10L))))), 1UL)) == g_81) < g_218.f0), 252UL));
            for (l_82 = 0; (l_82 <= 10); ++l_82)
            { 
                const uint16_t l_246 = 6UL;
                for (g_58 = 0; (g_58 == 37); g_58 = safe_add_func_uint8_t_u_u(g_58, 1))
                { 
                    union U1 l_241 = {-8L};
                    union U1 **l_243[2][3][6] = {{{&l_242[0][3][0],&l_242[0][3][0],(void*)0,&l_242[0][0][0],&l_242[0][3][0],&l_242[0][3][0]},{&l_242[0][3][0],(void*)0,(void*)0,&l_242[0][3][0],(void*)0,(void*)0},{&l_242[0][0][0],&l_242[0][3][0],(void*)0,&l_242[0][3][0],&l_242[0][3][0],&l_242[0][3][0]}},{{&l_242[0][3][0],&l_242[0][3][0],(void*)0,(void*)0,&l_242[0][3][0],&l_242[0][3][0]},{(void*)0,&l_242[0][3][0],&l_242[0][3][0],&l_242[1][6][0],&l_242[0][3][0],(void*)0},{(void*)0,&l_242[0][3][0],&l_242[0][0][0],&l_242[0][3][0],(void*)0,&l_242[0][3][0]}}};
                    int32_t **l_247 = &l_149;
                    int i, j, k;
                    g_245 = (l_241 , (l_244 = l_242[0][3][0]));
                    if (l_246)
                        continue;
                    (*l_247) = (void*)0;
                    if (l_233)
                        goto lbl_248;
                    return p_42;
                }
                g_218.f3 = 0xBB9B51BFL;
            }
            return l_233;
        }
        else
        { 
            uint16_t l_266 = 1UL;
            int32_t l_272[4][4];
            int64_t l_288 = (-5L);
            uint16_t l_289 = 0x5611L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    l_272[i][j] = (-10L);
            }
            for (l_154 = 0; (l_154 < 13); l_154 = safe_add_func_int8_t_s_s(l_154, 5))
            { 
                int16_t l_254 = 0x2FEEL;
                int16_t l_263 = 1L;
                uint8_t *l_268 = (void*)0;
                uint8_t *l_269 = &g_132;
                int32_t l_276 = 4L;
                int32_t l_280[6][4][4] = {{{0x9A955412L,0x00A990E0L,(-3L),0xF8BD2DB0L},{0x59C50F79L,0x00A990E0L,0x59C50F79L,0x586C9228L},{0x00A990E0L,0L,(-1L),0xBE27D499L},{0xBE27D499L,0xF8BD2DB0L,0x9A955412L,0L}},{{0x7D5804D1L,0x9A955412L,0x9A955412L,0x7D5804D1L},{0xBE27D499L,0x586C9228L,(-1L),0x59C50F79L},{0x00A990E0L,0L,0x59C50F79L,0x05298B28L},{0x59C50F79L,0x05298B28L,(-3L),0x05298B28L}},{{0x9A955412L,0L,0xF8BD2DB0L,0x59C50F79L},{0x3A78B33DL,0x586C9228L,0x05298B28L,0x7D5804D1L},{0xF8BD2DB0L,0x9A955412L,0L,0L},{0xF8BD2DB0L,0xF8BD2DB0L,0x05298B28L,0xBE27D499L}},{{0x3A78B33DL,0L,0xF8BD2DB0L,0x586C9228L},{0x9A955412L,0x00A990E0L,(-3L),0xF8BD2DB0L},{0x59C50F79L,0x00A990E0L,0x59C50F79L,0x586C9228L},{0x00A990E0L,0L,(-1L),0xBE27D499L}},{{0xBE27D499L,0xF8BD2DB0L,0x9A955412L,0L},{0x7D5804D1L,0x9A955412L,0x9A955412L,0x7D5804D1L},{0xBE27D499L,0x586C9228L,(-1L),0x59C50F79L},{0x00A990E0L,0L,0x59C50F79L,0x05298B28L}},{{0x59C50F79L,0x05298B28L,(-3L),0x05298B28L},{0x9A955412L,0L,0xF8BD2DB0L,0x59C50F79L},{0x3A78B33DL,0x586C9228L,0x00A990E0L,0xF8BD2DB0L},{0x05298B28L,0x7D5804D1L,0x9A955412L,0x9A955412L}}};
                int i, j, k;
                for (g_132 = 0; (g_132 < 18); g_132 = safe_add_func_uint32_t_u_u(g_132, 6))
                { 
                    if (l_198.f2)
                        goto lbl_253;
                }
                (**l_90) = (l_254 == ((((safe_div_func_int16_t_s_s(g_187, (((g_4[3][0][5] = ((l_254 || (safe_rshift_func_uint8_t_u_u(((*l_269) = (safe_sub_func_int64_t_s_s((g_267 &= ((*l_80) = ((safe_rshift_func_int8_t_s_u(l_263, (p_42 != (((g_87[0][2] ^= p_42) ^ ((0x36A11E93D6647194LL == l_198.f0) != p_42)) && 0x00L)))) , l_266))), g_218.f2))), 1))) < p_42)) ^ 0x67C5F155L) , (-8L)))) & l_254) , l_270) != (void*)0));
                if (g_132)
                    goto lbl_294;
                for (g_161 = 0; (g_161 <= 0); g_161 += 1)
                { 
                    int32_t **l_271[7][2][6] = {{{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0},{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0}},{{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0},{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0}},{{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0},{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0}},{{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0},{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0}},{{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0},{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0}},{{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0},{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0}},{{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0},{&l_149,&l_149,(void*)0,&l_149,&l_149,(void*)0}}};
                    int i, j, k;
                    (*l_149) |= g_87[g_161][(g_161 + 3)];
                    p_41 = &g_4[3][0][5];
                    return g_87[g_161][g_161];
                }
                for (g_58 = 0; (g_58 <= 3); g_58 += 1)
                { 
                    uint32_t l_273 = 0UL;
                    int32_t l_277 = 0x943423BEL;
                    int32_t l_278 = 0L;
                    int32_t l_279 = 0xE6E0EEFFL;
                    int32_t l_282 = (-1L);
                    int32_t l_283 = 0x77CAC785L;
                    int32_t l_285 = (-1L);
                    int32_t l_286[5][3][3] = {{{0L,0x508426FCL,(-2L)},{(-1L),0x133E1C00L,(-1L)},{0x363A9B49L,0L,(-2L)}},{{0xA0136C23L,0xA0136C23L,0xFA8126CAL},{0xB886543DL,0L,0L},{0xFA8126CAL,0x133E1C00L,(-1L)}},{{0xB886543DL,0x508426FCL,0xB886543DL},{0xA0136C23L,0xFA8126CAL,(-1L)},{0x363A9B49L,0x363A9B49L,0L}},{{(-1L),0xFA8126CAL,0xFA8126CAL},{0L,0x508426FCL,(-2L)},{(-1L),0x133E1C00L,(-1L)}},{{0x363A9B49L,0L,(-2L)},{0xA0136C23L,0xA0136C23L,0xFA8126CAL},{0xB886543DL,0L,0L}}};
                    int32_t **l_292 = &l_149;
                    int i, j, k;
                    l_273--;
                    ++l_289;
                    (*l_292) = &g_4[2][3][3];
                    return p_42;
                }
            }
        }
        (**l_90) &= g_60.f3;
lbl_294:
        (*l_293) = l_244;
        if (((l_295 != &g_296) < ((*l_300) = ((&g_218 == l_297) , (((safe_add_func_int16_t_s_s(((void*)0 != l_210), 4L)) , g_126) ^ 0UL)))))
        { 
            struct S0 *l_305 = &g_60;
            int32_t l_312 = (-1L);
            int8_t l_338 = 0x89L;
            (*l_305) = func_43((0x5119L | ((safe_rshift_func_int8_t_s_u(p_42, 1)) < g_132)));
            for (g_218.f2 = 0; (g_218.f2 <= (-26)); g_218.f2 = safe_sub_func_int16_t_s_s(g_218.f2, 4))
            { 
                uint8_t l_324[3];
                int32_t l_331 = 0xDFCD7036L;
                int i;
                for (i = 0; i < 3; i++)
                    l_324[i] = 0UL;
                p_41 = &g_4[3][0][5];
                if ((*p_41))
                    continue;
                (*p_41) |= l_198.f1;
                if (((g_132 > (l_281 &= (safe_sub_func_uint64_t_u_u(p_42, (&g_132 == (void*)0))))) ^ (g_87[0][2] = g_161)))
                { 
                    int32_t **l_311 = &l_295;
                    int32_t ***l_310 = &l_311;
                    (*l_310) = &l_295;
                    if ((*p_41))
                        break;
                    return p_42;
                }
                else
                { 
                    uint64_t *l_315 = &g_316;
                    uint64_t *l_322[4][2] = {{(void*)0,&g_323},{(void*)0,&g_323},{(void*)0,&g_323},{(void*)0,&g_323}};
                    int32_t *l_339 = (void*)0;
                    int32_t **l_340[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    if (l_312)
                        break;
                    g_341 = ((safe_rshift_func_uint16_t_u_s((((++(*l_315)) <= (l_324[1] &= (l_319[2] >= (safe_rshift_func_int8_t_s_u(p_42, 6))))) >= (g_267 , (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((((((((+(safe_lshift_func_int8_t_s_s(l_331, 2))) , (0xD68BL <= ((safe_sub_func_uint16_t_u_u((p_42 || ((((l_312 = ((safe_mod_func_uint16_t_u_u(((func_43((safe_lshift_func_uint8_t_u_s(255UL, 5))) , &l_297) != &l_244), l_338)) > l_319[2])) || 18446744073709551609UL) , 0xCA207B63AC825998LL) & l_281)), g_60.f2)) >= (*l_149)))) != l_331) > p_42) <= g_81) > 0x4E4BC3734FB01A28LL) < p_42))), g_323)))), l_331)) , l_339);
                    return g_60.f0;
                }
            }
            for (p_42 = 6; (p_42 != 2); p_42 = safe_sub_func_int64_t_s_s(p_42, 2))
            { 
                struct S0 **l_345 = (void*)0;
                struct S0 **l_346 = (void*)0;
                l_305 = l_344;
                return g_60.f1;
            }
        }
        else
        { 
            if (l_198.f2)
            { 
                int32_t **l_349 = (void*)0;
                int32_t **l_350 = &g_341;
                for (p_42 = 23; (p_42 != 12); --p_42)
                { 
                    (*l_344) = g_60;
                    (**l_90) = (*g_341);
                }
                (*l_350) = (void*)0;
                return g_87[0][1];
            }
            else
            { 
                if (((**l_90) = (*g_341)))
                { 
                    return g_126;
                }
                else
                { 
                    uint64_t l_354[5][3] = {{0x2F030F7E9CDDC4CFLL,0x2F030F7E9CDDC4CFLL,0x2F030F7E9CDDC4CFLL},{1UL,1UL,1UL},{0x2F030F7E9CDDC4CFLL,0x2F030F7E9CDDC4CFLL,0x2F030F7E9CDDC4CFLL},{1UL,1UL,1UL},{0x2F030F7E9CDDC4CFLL,0x2F030F7E9CDDC4CFLL,0x2F030F7E9CDDC4CFLL}};
                    int32_t **l_361 = &l_149;
                    int i, j;
                    (*g_341) ^= l_198.f0;
                    g_341 = p_41;
                    (**l_90) &= (p_42 >= ((safe_unary_minus_func_int8_t_s(((((((safe_add_func_int32_t_s_s(l_354[2][2], 0xDFB46C04L)) > ((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(1UL, (((*l_361) = &g_4[1][3][5]) == (void*)0))) && (safe_mul_func_uint8_t_u_u(g_58, l_198.f2))) == l_287[5]), 0x553D6877330711ACLL)), p_42)) & l_284)) & g_60.f1) ^ p_42) , 0xD6L) , (-8L)))) != g_60.f0));
                    return g_60.f0;
                }
            }
        }
    }
    (*l_366) = g_364[0][1][0];
    return l_367[1];
}



static struct S0  func_43(const int32_t  p_44)
{ 
    const int32_t *l_66 = &g_4[1][1][4];
    const int32_t **l_67 = &l_66;
    int32_t *l_71 = &g_4[3][0][5];
    int32_t *l_72[2];
    int8_t l_73 = (-3L);
    uint32_t l_74 = 0xFBAFD827L;
    struct S0 *l_77 = &g_60;
    int i;
    for (i = 0; i < 2; i++)
        l_72[i] = &g_4[3][0][5];
    (*l_67) = l_66;
    for (g_58 = 0; (g_58 >= 42); g_58++)
    { 
        int32_t *l_70[3][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_4[0][4][6],&g_4[2][5][0],(void*)0,(void*)0,&g_4[3][0][5]},{&g_4[3][0][5],&g_4[3][0][5],(void*)0,(void*)0,(void*)0},{&g_4[0][4][6],(void*)0,(void*)0,&g_4[3][0][5],(void*)0},{&g_4[3][0][5],&g_4[0][0][6],(void*)0,&g_4[3][0][5],&g_4[3][0][5]},{(void*)0,(void*)0,&g_4[2][5][0],&g_4[3][0][5],&g_4[3][0][5]}},{{&g_4[3][0][5],(void*)0,&g_4[2][5][0],&g_4[3][0][5],&g_4[0][4][6]},{&g_4[1][3][5],&g_4[3][3][5],&g_4[2][5][0],&g_4[0][4][6],&g_4[3][0][5]},{&g_4[3][0][5],(void*)0,&g_4[2][5][0],&g_4[0][4][6],&g_4[0][4][6]},{&g_4[3][2][6],&g_4[3][0][5],&g_4[2][5][0],(void*)0,(void*)0},{&g_4[2][5][0],&g_4[1][4][4],&g_4[2][5][0],&g_4[3][0][5],&g_4[3][0][5]},{&g_4[3][0][5],(void*)0,&g_4[2][5][0],&g_4[3][0][5],&g_4[0][4][6]}},{{&g_4[1][3][5],&g_4[3][3][5],&g_4[2][5][0],&g_4[0][4][6],&g_4[3][0][5]},{&g_4[3][0][5],(void*)0,&g_4[2][5][0],&g_4[0][4][6],&g_4[0][4][6]},{&g_4[3][2][6],&g_4[3][0][5],&g_4[2][5][0],(void*)0,(void*)0},{&g_4[2][5][0],&g_4[1][4][4],&g_4[2][5][0],&g_4[3][0][5],&g_4[3][0][5]},{&g_4[3][0][5],(void*)0,&g_4[2][5][0],&g_4[3][0][5],&g_4[0][4][6]},{&g_4[1][3][5],&g_4[3][3][5],&g_4[2][5][0],&g_4[0][4][6],&g_4[3][0][5]}}};
        int i, j, k;
        (*l_67) = l_70[0][0][1];
    }
    ++l_74;
    (*l_71) |= ((void*)0 != l_77);
    return (*l_77);
}



static uint16_t  func_49(uint64_t  p_50)
{ 
    struct S0 l_51 = {8,6946,815,-91};
    struct S0 *l_52 = &l_51;
    int32_t *l_57[1][4][4] = {{{&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5]},{&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5]},{&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5]},{&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5],&g_4[3][0][5]}}};
    int i, j, k;
    (*l_52) = l_51;
    g_58 ^= ((g_4[0][2][4] | (safe_add_func_int32_t_s_s(((l_51.f3 &= 0x55E833F8L) , (safe_lshift_func_uint16_t_u_u(0UL, 6))), (((g_4[0][0][5] && 0x0D54037B03C3254BLL) , l_57[0][2][0]) == (void*)0)))) , 0xEF2F43CAL);
    return g_4[2][1][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_60.f3, "g_60.f3", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_87[i][j], "g_87[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_371.f0, "g_371.f0", print_hash_value);
    transparent_crc(g_371.f1, "g_371.f1", print_hash_value);
    transparent_crc(g_371.f2, "g_371.f2", print_hash_value);
    transparent_crc(g_371.f3, "g_371.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_410[i][j], "g_410[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_446.f1, "g_446.f1", print_hash_value);
    transparent_crc(g_446.f2, "g_446.f2", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
