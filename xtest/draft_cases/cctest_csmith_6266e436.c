// SPDX-License-Identifier: MIT
// cctest_csmith_6266e436.c --- cctest case csmith_6266e436 (csmith seed 1650910262)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa00a6b3 */

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

// Options:   -s 1650910262 -o /tmp/csmith_gen_u70yxnvc/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 9;
   const int32_t  f1;
   const signed f2 : 2;
   uint64_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 12;
};
#pragma pack(pop)

union U2 {
   int8_t * f0;
   int32_t  f1;
   int32_t  f2;
   signed f3 : 13;
   int16_t  f4;
};


static uint8_t g_12 = 255UL;
static int8_t g_19 = 0x38L;
static struct S1 g_33 = {61};
static int32_t g_53 = 0L;
static uint32_t g_65[6] = {0xD9918C6AL,0xD9918C6AL,0xD9918C6AL,0xD9918C6AL,0xD9918C6AL,0xD9918C6AL};
static uint32_t g_68 = 1UL;
static int32_t *g_83 = &g_53;
static struct S0 g_88 = {5,1L,1,0xDA2DD44351D5E8E0LL};
static int32_t g_98 = 1L;
static int16_t g_100 = 0x99D3L;
static int32_t g_104 = 0xE1F678D1L;
static int16_t g_105 = 0x3F68L;
static uint16_t g_106 = 0xE26EL;
static int32_t g_120 = 0xCFD253E6L;
static uint8_t g_135 = 1UL;
static int8_t g_137 = 0x59L;
static int64_t g_157 = 0x4CD45573AC2B9889LL;
static int64_t g_160[2][3][4] = {{{0x07D1D32CE05B3D22LL,0xF0835FF7BA7B7964LL,1L,0xF0835FF7BA7B7964LL},{0x28263997128C3FF0LL,0x3408E39048C16D01LL,8L,1L},{0xF0835FF7BA7B7964LL,0x3408E39048C16D01LL,0x3408E39048C16D01LL,0xF0835FF7BA7B7964LL}},{{0x3408E39048C16D01LL,0xF0835FF7BA7B7964LL,0x28263997128C3FF0LL,0x07D1D32CE05B3D22LL},{0x3408E39048C16D01LL,0x28263997128C3FF0LL,0x3408E39048C16D01LL,8L},{0xF0835FF7BA7B7964LL,0x07D1D32CE05B3D22LL,8L,8L}}};
static uint8_t g_206 = 0x8EL;
static int32_t g_211[3][7] = {{1L,0xF5BA5010L,1L,1L,0xF5BA5010L,1L,1L},{0xF5BA5010L,0xF5BA5010L,0x3B5C28C5L,0xF5BA5010L,0xF5BA5010L,0x3B5C28C5L,0xF5BA5010L},{0xF5BA5010L,1L,0x3B5C28C5L,1L,0x3B5C28C5L,0x3B5C28C5L,1L}};
static int32_t g_219 = 0xDE24A453L;
static uint8_t g_220 = 0xB8L;
static const int32_t **g_231 = (void*)0;
static const int32_t ***g_230 = &g_231;
static const int32_t g_290 = 0x43E14E9EL;
static int8_t ***g_302[3] = {(void*)0,(void*)0,(void*)0};
static int16_t g_304 = (-1L);
static int32_t g_305 = 0x6FEC2588L;
static uint64_t g_306 = 0x9A6649860C9878B3LL;
static const uint32_t g_337 = 0UL;
static const uint32_t g_339 = 1UL;
static union U2 g_340 = {0};
static uint32_t g_363 = 0UL;
static int32_t g_364 = 0x06ABC1FAL;
static int8_t g_365 = 0x42L;
static uint32_t g_366 = 0x242D67FBL;
static const struct S1 g_380[7][2] = {{{7},{2}},{{2},{7}},{{2},{2}},{{7},{2}},{{2},{7}},{{2},{2}},{{7},{2}}};
static const struct S1 *g_379 = &g_380[4][1];
static const uint32_t *g_457 = (void*)0;
static const uint16_t g_520 = 65535UL;
static uint64_t g_556 = 6UL;
static uint32_t g_567 = 0xC3EEFF37L;
static int64_t g_573 = (-1L);
static uint8_t g_574[5] = {252UL,252UL,252UL,252UL,252UL};
static int16_t g_615[1][1][2] = {{{(-7L),(-7L)}}};
static uint16_t g_616 = 0x6258L;
static int32_t *g_621 = &g_219;
static int32_t **g_620 = &g_621;
static int8_t g_653[4][2] = {{0x29L,0x29L},{0x29L,0x29L},{0x29L,0x29L},{0x29L,0x29L}};
static int16_t g_654 = 0x56C4L;
static int16_t g_655 = (-1L);
static uint32_t g_656 = 0x3B7E5FB1L;
static struct S1 *g_746 = &g_33;
static struct S1 **g_745 = &g_746;
static struct S1 ***g_744 = &g_745;
static struct S1 ****g_743[6] = {&g_744,&g_744,&g_744,&g_744,&g_744,&g_744};
static uint8_t *g_766 = (void*)0;
static uint8_t **g_765 = &g_766;
static int32_t *g_792 = (void*)0;
static int16_t g_801 = (-3L);
static uint32_t g_802 = 18446744073709551615UL;
static int32_t **g_826 = &g_792;
static int32_t ***g_825 = &g_826;
static uint16_t g_869 = 0x1D63L;
static uint64_t g_902 = 1UL;
static const int8_t *g_1046[1] = {&g_137};
static const int8_t **g_1045 = &g_1046[0];
static int32_t ***g_1063 = (void*)0;
static uint32_t g_1074 = 4294967295UL;
static int32_t g_1134 = 1L;
static const uint64_t g_1143 = 0x65A6900F9321FF92LL;
static uint32_t g_1144 = 0x0163B0F1L;
static int32_t ****g_1153 = &g_1063;
static int32_t g_1233 = 0x9D7AEEE8L;
static const union U2 *g_1234 = &g_340;
static int16_t g_1237 = 1L;
static uint16_t g_1243 = 0x08E6L;
static const int8_t *** const g_1264[6][7] = {{(void*)0,&g_1045,&g_1045,(void*)0,&g_1045,&g_1045,&g_1045},{&g_1045,&g_1045,&g_1045,&g_1045,&g_1045,&g_1045,&g_1045},{&g_1045,(void*)0,&g_1045,&g_1045,(void*)0,&g_1045,&g_1045},{(void*)0,&g_1045,&g_1045,(void*)0,&g_1045,&g_1045,&g_1045},{&g_1045,&g_1045,&g_1045,&g_1045,&g_1045,&g_1045,&g_1045},{&g_1045,(void*)0,&g_1045,&g_1045,(void*)0,&g_1045,&g_1045}};
static const int8_t *** const *g_1263 = &g_1264[0][0];
static struct S0 *g_1303 = (void*)0;
static struct S0 **g_1302 = &g_1303;
static uint32_t g_1369 = 5UL;
static uint32_t g_1401 = 0x85D066E9L;
static struct S1 g_1406 = {28};
static uint64_t g_1445 = 18446744073709551611UL;
static int8_t **g_1459 = (void*)0;
static int8_t ***g_1458 = &g_1459;
static uint32_t g_1480 = 0x3C0A8EE1L;
static uint8_t g_1538 = 0x48L;
static int64_t g_1585[7] = {0xDF66F55B72E4FB03LL,0xF630D93433205F34LL,0xDF66F55B72E4FB03LL,0xDF66F55B72E4FB03LL,0xF630D93433205F34LL,0xDF66F55B72E4FB03LL,0xDF66F55B72E4FB03LL};
static int8_t g_1586 = 0xAAL;
static int16_t *g_1591 = &g_615[0][0][0];
static int16_t **g_1590 = &g_1591;
static const int32_t *g_1627 = &g_53;
static uint32_t g_1764 = 0x762ED768L;
static const uint8_t *g_1848[1] = {&g_206};
static const uint8_t **g_1847 = &g_1848[0];
static uint32_t g_1899 = 0xBA985172L;
static uint64_t g_1972 = 0UL;
static int8_t g_1999 = (-6L);
static int32_t g_2000 = 1L;
static uint16_t g_2001 = 0x617AL;
static uint32_t g_2041 = 0UL;
static const uint32_t g_2147 = 0xE3DEAFE1L;
static int32_t g_2202 = 0xDEE5DB8DL;
static int16_t ** const **g_2215 = (void*)0;
static int16_t ** const ***g_2214 = &g_2215;
static int16_t g_2284 = 3L;
static uint32_t g_2285 = 0xF9ED32B1L;
static struct S0 ***g_2377 = (void*)0;
static struct S0 *** const *g_2376 = &g_2377;



static int8_t  func_1(void);
static struct S1 * func_2(union U2  p_3, int32_t  p_4, int8_t  p_5, int64_t  p_6);
static union U2  func_7(uint64_t  p_8, int8_t  p_9, uint8_t  p_10, const int8_t * p_11);
static uint8_t  func_13(int8_t * p_14, uint8_t  p_15, struct S1 * p_16, struct S1 * const  p_17);
static struct S1 * func_21(const uint8_t  p_22, struct S1  p_23, uint32_t  p_24, const struct S1 * p_25);
static int8_t  func_28(struct S1 * p_29, struct S1 * p_30, union U2  p_31);
static struct S1  func_37(const int8_t * const  p_38, struct S1  p_39, struct S1 * p_40, int32_t  p_41, struct S1 * p_42);
static const int8_t * func_43(int64_t  p_44, uint32_t  p_45, int32_t  p_46, uint32_t  p_47);




static int8_t  func_1(void)
{ 
    int8_t *l_18 = &g_19;
    int32_t l_20 = 1L;
    struct S1 *l_32[5] = {&g_33,&g_33,&g_33,&g_33,&g_33};
    union U2 l_34 = {0};
    uint8_t l_2290 = 0x56L;
    struct S1 **l_2292 = &l_32[4];
    uint32_t l_2298 = 1UL;
    int16_t ***l_2348 = &g_1590;
    struct S0 l_2369 = {20,6L,0,0x508D80437424D03BLL};
    int32_t l_2372[2];
    struct S0 ***l_2374 = &g_1302;
    struct S0 *** const *l_2373 = &l_2374;
    int i;
    for (i = 0; i < 2; i++)
        l_2372[i] = 1L;
    (*l_2292) = func_2(func_7(g_12, g_12, func_13(l_18, l_20, func_21((safe_lshift_func_int8_t_s_s(func_28(l_32[1], &g_33, l_34), 6)), g_1406, l_20, (*g_745)), l_32[3]), l_18), l_20, l_2290, g_902);
    for (g_1445 = 15; (g_1445 <= 1); g_1445--)
    { 
        const int32_t l_2296 = 7L;
        int32_t l_2314 = (-3L);
        int32_t l_2315[6] = {0x62A67BB1L,0x62A67BB1L,0x62A67BB1L,0x62A67BB1L,0x62A67BB1L,0x62A67BB1L};
        const int16_t *l_2346 = &g_304;
        const int16_t **l_2345 = &l_2346;
        const int16_t ***l_2344 = &l_2345;
        uint8_t l_2349 = 255UL;
        const int8_t *l_2370 = (void*)0;
        int i;
        for (g_88.f3 = 0; (g_88.f3 <= 2); g_88.f3 += 1)
        { 
            const int16_t l_2295 = 0x73B3L;
            uint16_t *l_2297[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_2303 = &g_1899;
            int32_t l_2306 = 0x8FCC7CD6L;
            int32_t l_2309 = (-1L);
            struct S1 l_2338 = {42};
            uint32_t l_2351 = 0xF2962CFDL;
            uint32_t l_2371 = 1UL;
            int32_t **l_2378 = (void*)0;
            int i;
            l_2315[0] = (l_2295 || ((l_2296 & (l_2298--)) || ((((((safe_add_func_uint32_t_u_u(((*l_2303)++), (l_2306 = ((*g_83) ^= 0xE6346C96L)))) , (l_2306 ^ ((safe_mul_func_uint8_t_u_u((l_2309 ^= l_2296), (((((((safe_mul_func_int8_t_s_s(l_2298, ((-1L) | l_2296))) >= 0UL) >= l_2314) ^ g_1406.f0) != l_2296) < 0x5191F5252D49C46CLL) == l_2298))) >= 1L))) | l_2295) | (**g_1045)) <= l_20) || 0xE277L)));
            for (g_1480 = 0; (g_1480 <= 1); g_1480 += 1)
            { 
                int64_t l_2336 = 0xF9CD7B0314E26E41LL;
                uint16_t l_2347 = 0x66EEL;
                int32_t *l_2350 = &l_2309;
                for (g_1764 = 0; (g_1764 <= 0); g_1764 += 1)
                { 
                    int16_t l_2320 = 0x14D1L;
                    int16_t *l_2335 = &g_340.f4;
                    int32_t l_2337 = 1L;
                    (*g_746) = (((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((((**g_1590) = 2L) > l_2320) > (l_2290 , ((g_88.f1 & (l_2337 |= (safe_mul_func_uint16_t_u_u((!(1UL ^ ((safe_lshift_func_int16_t_s_u((((*l_2335) = ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u(g_88.f0, ((((safe_lshift_func_uint8_t_u_u((!(g_2000 < l_2290)), 6)) | l_2298) & 0UL) >= 0UL))) >= (-1L)), l_2309)), l_2315[2])) && l_2320)) >= l_2336), g_339)) && g_19))), l_2298)))) , l_2336))), l_2315[5])), 1)) <= 0xC9F735616BAFD6E2LL) , l_2338);
                    (*g_83) = (l_2336 && ((safe_div_func_uint32_t_u_u((l_2336 >= (safe_rshift_func_int16_t_s_u((**g_1590), 5))), (+(((l_2337 != (l_2344 != (l_2347 , l_2348))) || 0UL) , l_2349)))) < 0L));
                    (**g_825) = l_2350;
                    if ((*g_83))
                        continue;
                }
                if ((*l_2350))
                    break;
                for (l_2336 = 0; (l_2336 <= 0); l_2336 += 1)
                { 
                    if ((*l_2350))
                        break;
                }
            }
            if (l_2295)
                break;
            for (g_106 = 0; (g_106 <= 0); g_106 += 1)
            { 
                int32_t l_2360 = 0L;
                int32_t l_2368 = (-1L);
                int32_t ***l_2379[6] = {&l_2378,&l_2378,&l_2378,&l_2378,&l_2378,&l_2378};
                int i;
                for (g_135 = 0; (g_135 <= 1); g_135 += 1)
                { 
                    if (l_2351)
                        break;
                    if (l_20)
                        break;
                }
                if ((safe_sub_func_int32_t_s_s(1L, (safe_rshift_func_int8_t_s_s(((((((safe_add_func_uint16_t_u_u(0xDC65L, ((0xCAL != l_2309) , ((((safe_add_func_uint64_t_u_u(l_2360, (func_7((((((l_2315[3] = (((+(safe_sub_func_uint16_t_u_u(65531UL, ((func_7((safe_lshift_func_int8_t_s_s((((l_2368 = ((*g_83) = (safe_lshift_func_int16_t_s_s(((((l_20 > l_2298) , (void*)0) != (void*)0) , l_2295), l_20)))) >= l_2314) , (-4L)), 0)), l_2296, (**g_1847), l_18) , l_2369) , 0xCFABL)))) > 0xC22FL) > 1UL)) && (*g_1627)) & 0xE6L) , 65535UL) & g_556), (**g_1045), l_2349, l_2370) , g_33.f0))) & 18446744073709551615UL) <= l_2351) >= g_219)))) | 0x00670514E771CC4CLL) && l_2296) > l_2295) <= l_2360) , l_2371), l_2372[1])))))
                { 
                    struct S0 *** const **l_2375[3][7] = {{(void*)0,&l_2373,&l_2373,(void*)0,&l_2373,&l_2373,(void*)0},{(void*)0,&l_2373,(void*)0,(void*)0,&l_2373,(void*)0,(void*)0},{(void*)0,(void*)0,&l_2373,(void*)0,(void*)0,&l_2373,(void*)0}};
                    int i, j;
                    g_2376 = l_2373;
                    return (**g_1045);
                }
                else
                { 
                    (**g_825) = &l_2372[1];
                    (*g_83) |= 0xCC69FD76L;
                }
                g_620 = l_2378;
                return l_2371;
            }
        }
    }
    return l_2372[1];
}



static struct S1 * func_2(union U2  p_3, int32_t  p_4, int8_t  p_5, int64_t  p_6)
{ 
    struct S1 *l_2291 = &g_1406;
    return l_2291;
}



static union U2  func_7(uint64_t  p_8, int8_t  p_9, uint8_t  p_10, const int8_t * p_11)
{ 
    int64_t * const l_1933 = &g_157;
    struct S1 *l_1934 = &g_33;
    struct S0 l_1942[4][5] = {{{11,-9L,-1,0UL},{11,-9L,-1,0UL},{11,-9L,-1,0UL},{11,-9L,-1,0UL},{11,-9L,-1,0UL}},{{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL}},{{11,-9L,-1,0UL},{11,-9L,-1,0UL},{11,-9L,-1,0UL},{11,-9L,-1,0UL},{11,-9L,-1,0UL}},{{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL},{7,5L,0,0x9E47783E1101FE1ALL}}};
    int32_t **l_1945 = &g_621;
    int32_t *l_1947[6];
    int16_t l_1992[3][3] = {{0x583AL,0x2E14L,0x583AL},{0xC661L,0xC661L,0xC661L},{0x583AL,0x2E14L,0x583AL}};
    uint32_t l_2029 = 0xD98F7615L;
    uint8_t ***l_2083 = &g_765;
    struct S1 * const ***l_2123 = (void*)0;
    const int8_t *** const **l_2164[4];
    uint32_t l_2173 = 0x9AA2C46DL;
    const int8_t * const l_2200 = &g_137;
    int32_t l_2210 = 0L;
    uint32_t l_2222 = 0x0984C727L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_1947[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_2164[i] = (void*)0;
    for (g_304 = 0; g_304 < 2; g_304 += 1)
    {
        for (g_1144 = 0; g_1144 < 3; g_1144 += 1)
        {
            for (g_104 = 0; g_104 < 4; g_104 += 1)
            {
                g_160[g_304][g_1144][g_104] = (-1L);
            }
        }
    }
    return (*g_1234);
}



static uint8_t  func_13(int8_t * p_14, uint8_t  p_15, struct S1 * p_16, struct S1 * const  p_17)
{ 
    int8_t ***l_1488[7][4] = {{&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459},{&g_1459,&g_1459,&g_1459,&g_1459}};
    struct S1 **l_1508[1];
    int32_t l_1510[1];
    const int32_t l_1517 = (-9L);
    uint32_t *l_1568[1][1];
    int8_t l_1584[7] = {0x25L,0x85L,0x85L,0x25L,0x85L,0x85L,0x25L};
    uint32_t l_1587 = 0x109362BEL;
    int32_t **l_1600[3];
    int16_t l_1618 = 8L;
    struct S1 *****l_1674 = &g_743[1];
    int16_t **l_1679[7][5][7] = {{{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,(void*)0,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,(void*)0,&g_1591,(void*)0,&g_1591,&g_1591},{(void*)0,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591}},{{&g_1591,&g_1591,&g_1591,(void*)0,&g_1591,&g_1591,(void*)0},{&g_1591,(void*)0,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,(void*)0,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,(void*)0,&g_1591,&g_1591,(void*)0,&g_1591,&g_1591},{&g_1591,(void*)0,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591}},{{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{(void*)0,(void*)0,&g_1591,(void*)0,&g_1591,&g_1591,&g_1591},{&g_1591,(void*)0,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,(void*)0,&g_1591},{&g_1591,(void*)0,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591}},{{&g_1591,&g_1591,(void*)0,&g_1591,&g_1591,(void*)0,&g_1591},{&g_1591,&g_1591,(void*)0,&g_1591,(void*)0,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{(void*)0,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591}},{{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,(void*)0,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,(void*)0,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,(void*)0,&g_1591}},{{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,(void*)0},{&g_1591,&g_1591,&g_1591,&g_1591,(void*)0,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,(void*)0,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591}},{{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{(void*)0,&g_1591,&g_1591,&g_1591,(void*)0,&g_1591,&g_1591},{&g_1591,&g_1591,(void*)0,&g_1591,&g_1591,(void*)0,&g_1591},{(void*)0,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591},{&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591,&g_1591}}};
    int32_t l_1717 = 8L;
    uint8_t l_1735[4] = {0UL,0UL,0UL,0UL};
    struct S1 l_1772 = {33};
    int32_t l_1851[1][7][3] = {{{(-1L),8L,(-1L)},{(-1L),8L,(-1L)},{(-1L),8L,(-1L)},{(-1L),8L,(-1L)},{(-1L),8L,(-1L)},{(-1L),8L,(-1L)},{(-1L),8L,(-1L)}}};
    uint8_t ***l_1879 = &g_765;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1508[i] = &g_746;
    for (i = 0; i < 1; i++)
        l_1510[i] = 0x7568ADE8L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1568[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
        l_1600[i] = &g_621;
    if ((l_1488[1][3] == (g_302[1] = l_1488[1][3])))
    { 
        uint8_t l_1509 = 255UL;
        int32_t l_1511 = 0xE14D8591L;
        int32_t l_1532[6][1] = {{6L},{5L},{5L},{6L},{5L},{5L}};
        const struct S1 l_1536 = {33};
        int i, j;
        for (g_1074 = 15; (g_1074 >= 1); g_1074--)
        { 
            uint32_t l_1499 = 0x767D47AFL;
            struct S1 **l_1507[7][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_746,&g_746,&g_746,&g_746,&g_746,&g_746,&g_746},{&g_746,&g_746,(void*)0,(void*)0,(void*)0,&g_746,&g_746},{&g_746,&g_746,&g_746,&g_746,&g_746,&g_746,&g_746},{&g_746,(void*)0,&g_746,(void*)0,(void*)0,&g_746,(void*)0},{&g_746,&g_746,&g_746,&g_746,&g_746,&g_746,&g_746},{&g_746,(void*)0,(void*)0,&g_746,(void*)0,&g_746,(void*)0}};
            struct S1 ***l_1506[5] = {&l_1507[0][1],&l_1507[0][1],&l_1507[0][1],&l_1507[0][1],&l_1507[0][1]};
            int32_t l_1514 = 3L;
            int32_t l_1530 = 0L;
            int32_t l_1531[3][3] = {{5L,1L,5L},{5L,1L,5L},{5L,1L,5L}};
            uint32_t l_1533 = 18446744073709551609UL;
            int i, j;
            (*g_83) ^= ((1UL & ((g_656 ^ (((((*p_14) |= 1L) == (((safe_mul_func_int8_t_s_s((l_1509 = ((!((~l_1499) < (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((((*g_744) = &p_16) == (l_1508[0] = &p_16)), g_105)), 4UL)), 15)))) ^ 4L)), 249UL)) <= 0x3948CF263F876943LL) < l_1510[0])) , l_1509) ^ l_1511)) ^ g_366)) | 0L);
            (*g_83) = p_15;
            l_1514 |= (safe_rshift_func_uint16_t_u_u(65526UL, 9));
            for (g_104 = 25; (g_104 != (-27)); --g_104)
            { 
                int64_t l_1518[5][6] = {{0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL,0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL},{0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL,0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL},{0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL,0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL},{0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL,0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL},{0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL,0x820FEDFBC5C45714LL,(-1L),0x820FEDFBC5C45714LL}};
                int32_t l_1521[6];
                int32_t *l_1537[7];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_1521[i] = (-3L);
                for (i = 0; i < 7; i++)
                    l_1537[i] = (void*)0;
                if (l_1517)
                    break;
                for (g_135 = 0; (g_135 <= 1); g_135 += 1)
                { 
                    int32_t *l_1519 = &g_98;
                    int32_t *l_1520 = &g_98;
                    int32_t *l_1522 = (void*)0;
                    int32_t *l_1523 = (void*)0;
                    int32_t *l_1524 = &g_305;
                    int32_t *l_1525 = &g_120;
                    int32_t *l_1526 = &g_1134;
                    int32_t *l_1527 = &g_120;
                    int32_t *l_1528 = &l_1510[0];
                    int32_t *l_1529[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1529[i] = &g_305;
                    l_1533--;
                    if (g_160[g_135][(g_135 + 1)][(g_135 + 2)])
                        continue;
                    if (p_15)
                        break;
                    (**g_745) = l_1536;
                }
                ++g_1538;
            }
        }
        for (g_1134 = 0; g_1134 < 7; g_1134 += 1)
        {
            for (g_68 = 0; g_68 < 4; g_68 += 1)
            {
                l_1488[g_1134][g_68] = &g_1459;
            }
        }
    }
    else
    { 
        struct S0 **l_1541 = &g_1303;
        int32_t l_1556 = 0x0FBA36DFL;
        int32_t l_1583[1];
        int16_t **l_1593 = &g_1591;
        uint16_t *l_1655 = &g_106;
        uint64_t l_1666 = 0x5D61C560FB65A8D3LL;
        int32_t ****l_1669 = &g_1063;
        uint16_t l_1675 = 0xA98AL;
        uint64_t l_1725 = 0x8DCDE082B39B2CADLL;
        const uint64_t l_1729 = 18446744073709551608UL;
        int i;
        for (i = 0; i < 1; i++)
            l_1583[i] = 1L;
        for (g_801 = 0; (g_801 <= 0); g_801 += 1)
        { 
            int32_t l_1547 = 0x47F49849L;
            int16_t *l_1557 = &g_100;
            struct S0 l_1561[7] = {{4,0xB6966386L,1,0x0C40DDFA55859A78LL},{14,0xEABE7577L,-0,0x921C422AF5E77C8BLL},{4,0xB6966386L,1,0x0C40DDFA55859A78LL},{4,0xB6966386L,1,0x0C40DDFA55859A78LL},{14,0xEABE7577L,-0,0x921C422AF5E77C8BLL},{4,0xB6966386L,1,0x0C40DDFA55859A78LL},{4,0xB6966386L,1,0x0C40DDFA55859A78LL}};
            int32_t *l_1582[7][1][3] = {{{&g_120,&g_120,&g_98}},{{&l_1510[0],&l_1510[0],&g_1134}},{{&g_120,&g_120,&g_98}},{{&l_1510[0],&l_1510[0],&g_1134}},{{&g_120,&g_120,&g_98}},{{&l_1510[0],&l_1510[0],&g_1134}},{{&g_120,&g_120,&g_98}}};
            int16_t ***l_1592[4] = {&g_1590,&g_1590,&g_1590,&g_1590};
            const int32_t *l_1603[5][7] = {{&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1},{&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1},{&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1},{&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1},{&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1,&l_1561[5].f1}};
            const int32_t **l_1602 = &l_1603[0][0];
            int64_t l_1696 = 0L;
            const int16_t *l_1713 = &g_100;
            const int16_t **l_1712 = &l_1713;
            int i, j, k;
            if ((((void*)0 == l_1541) == ((safe_unary_minus_func_int64_t_s((safe_mod_func_int16_t_s_s(((*l_1557) = ((safe_lshift_func_uint16_t_u_u((l_1547 , (safe_mul_func_int16_t_s_s(p_15, ((l_1510[0] , (safe_rshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(0xC0L, 2)), (g_88.f3 | 0x05BF1A60L))) , g_105) < (-5L)) ^ l_1556), p_15))) , g_68)))), g_1406.f0)) , p_15)), 7L)))) | 0x28L)))
            { 
                uint32_t l_1558 = 0x9C3E51DDL;
                struct S1 ****l_1569 = &g_744;
                int32_t l_1580[5] = {0xC93B3767L,0xC93B3767L,0xC93B3767L,0xC93B3767L,0xC93B3767L};
                int32_t l_1581 = (-1L);
                int i;
                --l_1558;
                (*g_83) = ((l_1561[5] , (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((((((l_1547 &= (l_1568[0][0] == (void*)0)) >= (((*l_1557) = l_1558) | 0xDE06L)) == ((g_743[(g_801 + 1)] = l_1569) == (void*)0)) <= g_1401) ^ p_15), 1)), p_15)), l_1556))) != 0x8464B369L);
                l_1547 = ((l_1561[1] , (safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(4L, 1L)) != ((safe_sub_func_uint16_t_u_u(l_1510[0], (((*g_83) ^= (0x9AL != ((((((l_1558 > (l_1581 = ((safe_add_func_uint32_t_u_u((l_1580[0] = (((*p_17) , 0x6AL) > l_1561[5].f3)), p_15)) != l_1558))) == g_1406.f0) & g_135) || p_15) <= g_105) > g_120))) < l_1558))) & 0xA35D41C97C97A699LL)), (*p_14)))) ^ (*p_14));
                for (g_98 = 0; g_98 < 5; g_98 += 1)
                {
                    g_574[g_98] = 0x1AL;
                }
                for (g_100 = 2; (g_100 >= 0); g_100 -= 1)
                { 
                    return p_15;
                }
            }
            else
            { 
                if (l_1510[0])
                    break;
            }
            ++l_1587;
            l_1593 = g_1590;
            (*g_83) |= (safe_rshift_func_int16_t_s_s(0L, 5));
        }
        return l_1666;
    }
lbl_1928:
    for (g_100 = (-5); (g_100 <= 18); g_100++)
    { 
        int32_t *l_1732 = &g_364;
        int32_t *l_1733 = &g_53;
        int32_t *l_1734[6][7] = {{&l_1510[0],(void*)0,&g_364,(void*)0,&g_364,(void*)0,&l_1510[0]},{&l_1510[0],(void*)0,&g_364,(void*)0,&g_364,(void*)0,&l_1510[0]},{&l_1510[0],(void*)0,&g_364,(void*)0,&g_364,(void*)0,&l_1510[0]},{&l_1510[0],(void*)0,&g_364,(void*)0,&g_364,(void*)0,&l_1510[0]},{&l_1510[0],(void*)0,&g_364,(void*)0,&g_364,(void*)0,&l_1510[0]},{&l_1510[0],(void*)0,&g_364,(void*)0,&g_364,(void*)0,&l_1510[0]}};
        uint16_t l_1746 = 7UL;
        uint32_t l_1784[2];
        uint16_t l_1792 = 0x38BFL;
        struct S1 *l_1793[6][3][5] = {{{&l_1772,&g_33,&g_1406,&l_1772,&g_33},{&l_1772,&g_33,&g_33,&l_1772,(void*)0},{&l_1772,&g_1406,&g_33,&g_33,&g_33}},{{&l_1772,&l_1772,&l_1772,(void*)0,&l_1772},{&g_33,&g_1406,&l_1772,&g_33,&l_1772},{&g_33,&g_33,&g_1406,&l_1772,&l_1772}},{{&l_1772,&l_1772,&l_1772,&l_1772,&l_1772},{&l_1772,&g_33,&l_1772,&l_1772,(void*)0},{&g_1406,&l_1772,&g_33,&l_1772,&g_1406}},{{&l_1772,&g_33,&g_33,(void*)0,&g_33},{&g_1406,&g_1406,&g_1406,&g_1406,&l_1772},{&l_1772,&l_1772,&g_1406,&g_33,&g_33}},{{&l_1772,&g_1406,&l_1772,&l_1772,&g_1406},{&g_33,&g_33,(void*)0,&g_33,(void*)0},{&g_33,&g_33,&g_33,&g_1406,&l_1772}},{{&l_1772,&l_1772,&g_33,&g_33,(void*)0},{&l_1772,&g_33,&g_1406,&l_1772,&g_1406},{&g_33,(void*)0,&g_33,(void*)0,&g_33}}};
        uint16_t l_1809 = 65535UL;
        const union U2 l_1826 = {0};
        uint8_t ***l_1878 = &g_765;
        const int8_t ***l_1904[6][5][1] = {{{&g_1045},{&g_1045},{&g_1045},{&g_1045},{&g_1045}},{{&g_1045},{&g_1045},{&g_1045},{&g_1045},{&g_1045}},{{&g_1045},{&g_1045},{&g_1045},{&g_1045},{&g_1045}},{{&g_1045},{&g_1045},{&g_1045},{&g_1045},{&g_1045}},{{&g_1045},{&g_1045},{&g_1045},{&g_1045},{&g_1045}},{{&g_1045},{&g_1045},{&g_1045},{&g_1045},{&g_1045}}};
        const int8_t ****l_1903 = &l_1904[1][2][0];
        const int8_t *****l_1902 = &l_1903;
        uint8_t *l_1911 = (void*)0;
        uint8_t *l_1912[7] = {&l_1735[2],&l_1735[2],&l_1735[2],&l_1735[2],&l_1735[2],&l_1735[2],&l_1735[2]};
        struct S0 l_1923 = {15,0L,0,6UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1784[i] = 18446744073709551615UL;
        --l_1735[2];
        for (g_106 = (-16); (g_106 >= 13); g_106 = safe_add_func_uint16_t_u_u(g_106, 2))
        { 
            uint64_t l_1751[1];
            int32_t l_1759 = 0x68321B06L;
            int32_t l_1765 = 0x18CA73B8L;
            uint64_t l_1797 = 0x947976B858B83C1DLL;
            struct S1 * const *l_1815 = &l_1793[4][1][1];
            struct S1 * const **l_1814 = &l_1815;
            struct S1 * const ***l_1813 = &l_1814;
            struct S1 * const *** const *l_1812 = &l_1813;
            int i;
            for (i = 0; i < 1; i++)
                l_1751[i] = 18446744073709551613UL;
            for (l_1717 = 0; (l_1717 > 0); l_1717 = safe_add_func_int32_t_s_s(l_1717, 1))
            { 
                union U2 l_1743[2] = {{0},{0}};
                int32_t * const *l_1744 = &g_792;
                int8_t l_1766 = 0xCCL;
                uint32_t l_1767 = 4294967293UL;
                int i;
                if ((safe_unary_minus_func_uint64_t_u((((l_1743[1] , l_1744) != (*g_825)) | (*l_1733)))))
                { 
                    int32_t **l_1745[4][4] = {{(void*)0,&l_1734[5][0],&l_1734[0][4],&l_1734[5][0]},{&l_1734[5][0],&g_83,&l_1734[0][4],&l_1734[0][4]},{(void*)0,(void*)0,&l_1734[5][0],&l_1734[0][4]},{&l_1734[1][6],&g_83,&l_1734[1][6],&l_1734[5][0]}};
                    int i, j;
                    if ((*l_1732))
                        break;
                    (*l_1733) ^= (0x91025036L <= ((void*)0 != l_1745[1][1]));
                    return l_1746;
                }
                else
                { 
                    if (p_15)
                        break;
                }
                for (g_1401 = 0; (g_1401 < 23); g_1401 = safe_add_func_int32_t_s_s(g_1401, 3))
                { 
                    struct S1 l_1758 = {16};
                    (*g_83) &= (safe_rshift_func_int8_t_s_u((l_1751[0] = 0xADL), (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((**g_1590), 12)), 12))));
                    if (p_15)
                        continue;
                    (*l_1732) ^= (65527UL & (((safe_mul_func_int8_t_s_s(((l_1758 , (l_1759 = p_15)) <= (0L == (safe_rshift_func_uint8_t_u_u((g_802 || (((((((*g_1458) = &p_14) == &p_14) | 0UL) & 3L) < 0L) == p_15)), g_1764)))), l_1751[0])) <= (*g_83)) | (**g_1590)));
                }
                l_1767--;
                for (l_1618 = 0; (l_1618 != (-21)); l_1618 = safe_sub_func_uint8_t_u_u(l_1618, 7))
                { 
                    uint32_t l_1785[4][2][4] = {{{0UL,18446744073709551615UL,0UL,18446744073709551607UL},{0UL,18446744073709551607UL,0UL,18446744073709551615UL}},{{0UL,18446744073709551615UL,0UL,18446744073709551607UL},{0UL,18446744073709551607UL,0UL,18446744073709551615UL}},{{0UL,18446744073709551615UL,0UL,18446744073709551607UL},{0UL,18446744073709551607UL,0UL,18446744073709551615UL}},{{0UL,18446744073709551615UL,0UL,18446744073709551607UL},{0UL,18446744073709551607UL,0UL,18446744073709551615UL}}};
                    int64_t *l_1794 = &g_160[1][0][1];
                    int64_t *l_1795 = (void*)0;
                    int64_t *l_1796 = &g_1585[4];
                    int i, j, k;
                    (*g_83) &= (g_65[2] & 0xE97AL);
                    (*g_746) = l_1772;
                    (*l_1733) ^= ((!((safe_div_func_int8_t_s_s((l_1743[1] , (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(p_15, (safe_div_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(l_1784[0], p_15)) < l_1785[0][1][0]), ((*l_1796) = ((*l_1794) ^= ((safe_rshift_func_int16_t_s_s((((*g_745) = p_16) == ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_15, 3)), l_1792)) , l_1793[2][2][0])), (**g_1590))) , p_15))))))), 0xBECCA7B4L))), l_1785[0][1][0])) ^ (*p_14))) == p_15);
                    if (p_15)
                        break;
                }
            }
            l_1797--;
            for (g_137 = 0; (g_137 >= 17); g_137++)
            { 
                return p_15;
            }
            for (g_869 = (-20); (g_869 == 20); g_869 = safe_add_func_uint8_t_u_u(g_869, 1))
            { 
                int32_t l_1806 = 0x4D6A9E4CL;
                int32_t l_1808 = 0x0688F0DEL;
                for (g_1237 = 22; (g_1237 > 10); g_1237--)
                { 
                    int32_t l_1807 = 0xC9286EB7L;
                    int64_t *l_1816 = &g_1585[6];
                    int32_t l_1823 = 3L;
                    l_1809--;
                    l_1823 |= ((((void*)0 != l_1812) && ((((*l_1816) = p_15) || p_15) == (l_1806 = (((safe_add_func_uint64_t_u_u(l_1765, (safe_mul_func_int8_t_s_s(0xAFL, (safe_rshift_func_uint8_t_u_s((l_1751[0] > 6UL), 3)))))) <= l_1807) , g_1406.f0)))) && l_1717);
                    l_1732 = &l_1759;
                    (*l_1732) = l_1806;
                    if (l_1759)
                        continue;
                }
                for (g_364 = 0; (g_364 != (-29)); g_364--)
                { 
                    (**g_744) = (**g_744);
                    if (l_1765)
                        break;
                    l_1510[0] = (l_1826 , p_15);
                }
                return l_1806;
            }
        }
        for (g_19 = 0; (g_19 != 4); g_19 = safe_add_func_int32_t_s_s(g_19, 1))
        { 
            struct S0 **l_1839 = &g_1303;
            const int32_t l_1850 = (-1L);
            int8_t l_1854 = 0x89L;
            int32_t l_1887 = 1L;
            int32_t l_1888 = (-3L);
            int32_t l_1891 = 0x41DA1784L;
            int32_t l_1892 = 0xDBD16349L;
            if ((*g_83))
            { 
                struct S0 ***l_1840 = &l_1839;
                const uint8_t ***l_1849[4][5] = {{&g_1847,&g_1847,&g_1847,&g_1847,&g_1847},{&g_1847,&g_1847,&g_1847,&g_1847,&g_1847},{&g_1847,&g_1847,(void*)0,&g_1847,&g_1847},{&g_1847,&g_1847,&g_1847,&g_1847,&g_1847}};
                uint8_t *l_1852 = (void*)0;
                uint8_t *l_1853 = &g_220;
                int i, j;
                for (g_1233 = 0; (g_1233 > (-4)); g_1233 = safe_sub_func_int16_t_s_s(g_1233, 9))
                { 
                    (*g_83) ^= l_1510[0];
                    (*l_1732) &= (*g_83);
                }
                if ((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*l_1732) = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((&g_1303 != ((*l_1840) = l_1839)) >= 0xE431A81F00ED3A7FLL), ((safe_mod_func_int32_t_s_s((~((*l_1853) ^= ((-1L) > ((((((safe_unary_minus_func_int64_t_s(0xA130C148D7A8D37FLL)) | (safe_mul_func_uint16_t_u_u((((g_1847 = g_1847) != (g_765 = &g_766)) || l_1850), 65535UL))) ^ 0xADL) && l_1510[0]) != l_1850) | l_1851[0][0][0])))), l_1850)) >= (*g_1627)))), l_1850))), l_1854)), 9L)))
                { 
                    uint32_t l_1855 = 7UL;
                    if (l_1855)
                        break;
                    if (l_1855)
                        continue;
                }
                else
                { 
                    (*g_826) = l_1732;
                    if (p_15)
                        break;
                    if ((*l_1732))
                        break;
                }
                (*g_83) |= (-10L);
                return l_1854;
            }
            else
            { 
                int32_t l_1859 = 6L;
                int64_t *l_1860 = &g_1585[0];
                int32_t l_1862[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
                uint64_t *l_1863[5][3] = {{&g_1445,(void*)0,&g_1445},{&g_1445,&g_1445,&g_1445},{&g_1445,(void*)0,&g_1445},{&g_1445,&g_1445,&g_1445},{&g_1445,(void*)0,&g_1445}};
                uint8_t ***l_1876 = &g_765;
                uint8_t ****l_1877[3];
                uint32_t l_1896 = 18446744073709551614UL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1877[i] = &l_1876;
                if ((!((*l_1732) , ((g_88 , ((*l_1860) = (l_1859 , (-2L)))) && ((~((l_1851[0][0][0] | (((*l_1733) = ((l_1517 <= l_1862[2][1]) || l_1862[1][1])) | 1L)) && p_15)) <= l_1854)))))
                { 
                    if (p_15)
                        break;
                    return l_1584[0];
                }
                else
                { 
                    int32_t ***** const l_1864 = &g_1153;
                    uint16_t l_1871[5][5] = {{0xCDCDL,0xCDCDL,0xCDCDL,0xCDCDL,0xCDCDL},{5UL,0x433DL,5UL,0x433DL,5UL},{0xCDCDL,0xCDCDL,0xCDCDL,0xCDCDL,0xCDCDL},{5UL,0x433DL,5UL,0x433DL,5UL},{0xCDCDL,0xCDCDL,0xCDCDL,0xCDCDL,0xCDCDL}};
                    int i, j;
                    l_1871[1][3] = ((((void*)0 == l_1864) ^ 0L) | ((18446744073709551608UL ^ ((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((0x40E940FBB7895383LL | p_15) >= (safe_mul_func_int8_t_s_s(0xC7L, (**g_1045)))) | 0xFEL) || p_15), l_1850)), (*l_1732))) < 1UL)) || 0xA6B0L));
                }
                if ((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((g_160[1][0][1] <= ((l_1878 = l_1876) == (l_1879 = l_1879))), (((void*)0 == &g_1063) > (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_s(p_15, (*p_14)))))))) && l_1850), (*p_14))))
                { 
                    uint64_t l_1883 = 0xAD742A1749CE56ADLL;
                    ++l_1883;
                }
                else
                { 
                    int16_t l_1886[3];
                    int32_t l_1889 = 0x3D42CF20L;
                    int32_t l_1890[7][3] = {{0L,0x43467DE8L,0L},{0L,0x43467DE8L,0L},{0L,0x43467DE8L,0L},{0L,0x43467DE8L,0L},{0L,0x43467DE8L,0L},{0L,0x43467DE8L,0L},{0L,0x43467DE8L,0L}};
                    uint8_t l_1893 = 255UL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1886[i] = (-7L);
                    l_1893++;
                    (*l_1732) |= l_1862[2][1];
                    (*p_16) = (*p_16);
                    --l_1896;
                }
            }
            (*p_16) = (*****l_1674);
            return p_15;
        }
        g_1899++;
        if (((((&g_1263 == l_1902) < ((**g_1590) = p_15)) > ((safe_sub_func_int8_t_s_s((*p_14), (*l_1733))) || g_65[3])) , ((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(((g_1538 = 0x62L) & (**g_1847)), l_1584[0])), p_15)) ^ 65535UL)))
        { 
            return l_1510[0];
        }
        else
        { 
            int32_t *l_1913 = (void*)0;
            uint32_t l_1920 = 0x6C7CF20EL;
            (**g_825) = l_1913;
            (*l_1732) = ((*l_1733) = (0xC535BE34L != (safe_lshift_func_uint8_t_u_s((((((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(l_1920, ((safe_rshift_func_uint8_t_u_u((l_1923 , (p_15 != 0xA620L)), (g_206 &= (++g_1538)))) == p_15))) != p_15), 65535UL)) < (-10L)) < p_15) & g_653[2][1]) , 3UL), 2))));
            return l_1920;
        }
    }
    for (g_206 = 0; (g_206 < 44); ++g_206)
    { 
        if (g_68)
            goto lbl_1928;
    }
    return p_15;
}



static struct S1 * func_21(const uint8_t  p_22, struct S1  p_23, uint32_t  p_24, const struct S1 * p_25)
{ 
    union U2 *l_1412[2];
    union U2 **l_1411 = &l_1412[0];
    int32_t l_1414[7][4][4] = {{{(-1L),0L,1L,1L},{(-1L),(-1L),(-4L),0xFA90A65BL},{(-1L),0x37C30F6BL,0x9BCC7161L,(-1L)},{0x9937FE01L,0xFA90A65BL,0x9937FE01L,0x9BCC7161L}},{{1L,0xFA90A65BL,(-4L),(-1L)},{0xFA90A65BL,0x37C30F6BL,0x37C30F6BL,0xFA90A65BL},{0x9937FE01L,(-1L),0x37C30F6BL,0x9BCC7161L},{0xFA90A65BL,1L,(-4L),1L}},{{1L,0x37C30F6BL,0x9937FE01L,1L},{0x9937FE01L,1L,0x9BCC7161L,0x9BCC7161L},{(-1L),(-1L),(-4L),0xFA90A65BL},{(-1L),0x37C30F6BL,0x9BCC7161L,(-1L)}},{{0x9937FE01L,0xFA90A65BL,0x9937FE01L,0x9BCC7161L},{1L,0xFA90A65BL,(-4L),(-1L)},{0xFA90A65BL,0x37C30F6BL,0x37C30F6BL,0xFA90A65BL},{0x9937FE01L,(-1L),0x37C30F6BL,0x9BCC7161L}},{{0xFA90A65BL,1L,(-4L),1L},{1L,0x37C30F6BL,0x9937FE01L,1L},{0x9937FE01L,1L,0x9BCC7161L,0x9BCC7161L},{(-1L),(-1L),(-4L),0xFA90A65BL}},{{(-1L),0x37C30F6BL,0x9BCC7161L,(-1L)},{0x9937FE01L,0xFA90A65BL,0x9937FE01L,0x9BCC7161L},{1L,0xFA90A65BL,(-4L),(-1L)},{0xFA90A65BL,0x37C30F6BL,0x37C30F6BL,0xFA90A65BL}},{{0x9937FE01L,(-1L),0x37C30F6BL,0x9BCC7161L},{0xFA90A65BL,1L,(-4L),1L},{1L,0x37C30F6BL,0x9937FE01L,1L},{0x9937FE01L,1L,0x9BCC7161L,0x9BCC7161L}}};
    int32_t l_1476[7];
    const int32_t **l_1486 = (void*)0;
    const int32_t ***l_1485 = &l_1486;
    const int32_t ****l_1484 = &l_1485;
    const int32_t *****l_1483 = &l_1484;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1412[i] = &g_340;
    for (i = 0; i < 7; i++)
        l_1476[i] = 0x0E00AD24L;
    for (g_1144 = 1; (g_1144 == 18); ++g_1144)
    { 
        int32_t l_1441 = 0x1906D219L;
        int32_t l_1443 = 0x90D989D5L;
        int32_t l_1444 = 0xDCD47C1FL;
        int32_t l_1474 = (-1L);
        int32_t l_1475 = (-1L);
        int32_t l_1477 = (-1L);
        int32_t l_1478 = 0x6AD6ABB6L;
        int32_t l_1479 = 1L;
        struct S1 *l_1487 = &g_1406;
        for (g_1074 = 1; (g_1074 <= 5); g_1074 += 1)
        { 
            uint64_t *l_1413 = &g_306;
            int32_t l_1430 = 0xDD769248L;
            int32_t l_1440 = 0x59F18FA2L;
            int32_t l_1442 = 0xF58A192AL;
            int8_t ***l_1461 = &g_1459;
            int32_t *l_1472 = (void*)0;
            int i;
            l_1414[5][1][1] &= (((*l_1413) ^= (safe_mul_func_int16_t_s_s((-1L), ((void*)0 == l_1411)))) == 0x61B8E6E765BA3974LL);
            for (g_98 = 5; (g_98 >= 0); g_98 -= 1)
            { 
                int32_t *l_1415 = &g_364;
                int32_t *l_1416 = &g_340.f1;
                int32_t *l_1417 = &g_53;
                int32_t *l_1418 = (void*)0;
                int32_t l_1419 = 8L;
                int32_t *l_1420 = &g_53;
                int32_t *l_1421 = &g_364;
                int32_t *l_1422 = &g_305;
                int32_t *l_1423 = &g_53;
                int32_t *l_1424 = &l_1414[6][3][2];
                int32_t *l_1425 = &g_340.f1;
                int32_t *l_1426 = (void*)0;
                int32_t *l_1427 = (void*)0;
                int32_t *l_1428 = &l_1419;
                int32_t *l_1429 = &g_340.f1;
                int32_t *l_1431 = &l_1414[5][1][1];
                int32_t l_1432 = 0xF24419F8L;
                int32_t *l_1433 = &g_53;
                int32_t *l_1434 = &l_1414[1][1][1];
                int32_t *l_1435 = &l_1419;
                int32_t *l_1436 = &l_1432;
                int32_t *l_1437 = (void*)0;
                int32_t *l_1438 = &g_120;
                int32_t *l_1439[5][6] = {{&g_120,&l_1414[5][1][1],&l_1414[5][1][1],&g_120,&g_1134,&l_1430},{&l_1414[5][1][1],&g_120,&g_340.f1,&l_1430,(void*)0,&g_53},{(void*)0,&g_1134,&g_53,&g_1134,(void*)0,&g_364},{&g_53,&g_120,&g_120,&l_1430,&g_1134,&g_340.f1},{&g_340.f1,&l_1414[5][1][1],&g_120,&g_120,&l_1414[5][1][1],&g_340.f1}};
                int i, j;
                for (g_802 = 0; (g_802 <= 5); g_802 += 1)
                { 
                    (*g_83) = 1L;
                    return (*g_745);
                }
                ++g_1445;
                return (**g_744);
            }
            l_1444 &= ((*g_83) = (safe_rshift_func_int8_t_s_u(g_65[g_1074], 3)));
            if (p_22)
                continue;
            for (g_573 = 5; (g_573 >= 0); g_573 -= 1)
            { 
                union U2 l_1450 = {0};
                const int32_t *l_1456 = &g_211[1][6];
                const int32_t **l_1455 = &l_1456;
                const int32_t ***l_1454 = &l_1455;
                const int32_t ****l_1453 = &l_1454;
                for (g_100 = 5; (g_100 >= 0); g_100 -= 1)
                { 
                    int32_t ****l_1451 = (void*)0;
                    int32_t *****l_1452 = &l_1451;
                    int8_t ****l_1457 = &g_302[1];
                    int8_t ****l_1460[4] = {&g_1458,&g_1458,&g_1458,&g_1458};
                    int32_t l_1468 = 0x22F5CA16L;
                    int32_t l_1471 = 1L;
                    int i;
                    (*g_83) = (g_366 || ((l_1450 , ((*l_1452) = l_1451)) != l_1453));
                    (*g_83) ^= ((((*l_1457) = g_302[1]) == (l_1461 = g_1458)) != (safe_mod_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((l_1414[6][1][1] = (safe_div_func_uint32_t_u_u(p_24, l_1468))), (1UL ^ (safe_div_func_int32_t_s_s(((*g_379) , l_1471), 1UL))))) && p_22), p_22)));
                }
                l_1472 = (*g_826);
                for (g_654 = 1; (g_654 <= 5); g_654 += 1)
                { 
                    int32_t *l_1473[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1473[i] = (void*)0;
                    ++g_1480;
                }
            }
        }
        if (l_1476[6])
            break;
        l_1479 |= ((l_1483 = l_1483) != (void*)0);
        return l_1487;
    }
    return (*g_745);
}



static int8_t  func_28(struct S1 * p_29, struct S1 * p_30, union U2  p_31)
{ 
    int8_t l_49[2][2];
    int32_t l_1397 = 0L;
    int32_t l_1399[2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_49[i][j] = 0x62L;
    }
    for (i = 0; i < 2; i++)
        l_1399[i] = (-3L);
    for (g_19 = 11; (g_19 == (-1)); g_19--)
    { 
        uint32_t l_48 = 0xF3392002L;
        struct S1 l_116 = {57};
        int32_t *l_1392 = &g_120;
        int32_t *l_1393 = &g_120;
        int32_t *l_1394 = &g_340.f1;
        int32_t *l_1395 = &g_120;
        int32_t *l_1396 = &g_364;
        int32_t *l_1398 = &g_1134;
        int32_t *l_1400[3][7][1] = {{{&g_1134},{&g_53},{&g_53},{(void*)0},{&g_53},{(void*)0},{&g_53}},{{&g_53},{&g_1134},{&g_1134},{&g_53},{&g_53},{(void*)0},{&g_53}},{{(void*)0},{&g_53},{&g_53},{&g_1134},{&g_1134},{&g_53},{&g_53}}};
        const struct S0 *l_1404 = &g_88;
        const struct S0 **l_1405 = &l_1404;
        int i, j, k;
    }
    (*p_29) = (*g_746);
    return l_1397;
}



static struct S1  func_37(const int8_t * const  p_38, struct S1  p_39, struct S1 * p_40, int32_t  p_41, struct S1 * p_42)
{ 
    uint32_t l_138 = 2UL;
    struct S1 l_167[1] = {{36}};
    int32_t l_168 = (-1L);
    uint16_t l_174 = 1UL;
    int32_t l_204 = (-6L);
    int32_t l_205[1][3];
    int32_t *l_224 = &l_205[0][0];
    int8_t l_311 = 0x56L;
    int16_t l_332 = 1L;
    int8_t **l_360[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t ***l_359[3];
    struct S1 *l_390 = &l_167[0];
    struct S1 **l_389 = &l_390;
    struct S1 **l_392 = &l_390;
    struct S1 ***l_391 = &l_392;
    union U2 *l_476 = (void*)0;
    int32_t *l_480 = &g_305;
    uint8_t *l_723 = (void*)0;
    int8_t l_795[7];
    int8_t *l_937 = &l_311;
    int8_t **l_936 = &l_937;
    int32_t ****l_978[3];
    int32_t *****l_977[6] = {&l_978[1],&l_978[1],&l_978[1],&l_978[1],&l_978[1],&l_978[1]};
    int32_t **l_1002 = &g_621;
    const struct S0 l_1017 = {8,-3L,0,0UL};
    int32_t l_1029 = 0xDFCA4F16L;
    int8_t l_1044 = 0L;
    const int8_t **l_1047[3][7] = {{&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0]},{(void*)0,&g_1046[0],&g_1046[0],(void*)0,&g_1046[0],&g_1046[0],(void*)0},{&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0],&g_1046[0]}};
    int32_t *** const *l_1094 = &g_1063;
    int32_t l_1117 = 5L;
    int16_t l_1131[7] = {0x1923L,0x1923L,0x742CL,0x1923L,0x1923L,0x742CL,0x1923L};
    int32_t l_1206 = 0x6612E93AL;
    uint8_t ***l_1250 = &g_765;
    uint16_t l_1323 = 0xE3C6L;
    int32_t l_1377 = 0xAF2F63C3L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_205[i][j] = 0x6D70E512L;
    }
    for (i = 0; i < 3; i++)
        l_359[i] = &l_360[3];
    for (i = 0; i < 7; i++)
        l_795[i] = (-5L);
    for (i = 0; i < 3; i++)
        l_978[i] = (void*)0;
    for (g_98 = 4; (g_98 <= 19); g_98++)
    { 
        int32_t **l_123 = &g_83;
        struct S1 l_183 = {36};
        int32_t l_190 = 0x1C66ACBFL;
        int32_t l_199 = 0L;
        int32_t l_200 = 0L;
        int32_t l_201 = 0x83FB63F3L;
        int32_t l_202[6][7] = {{0x2C4FA893L,0x8C1170D4L,0x8C1170D4L,0x2C4FA893L,(-8L),0x2C4FA893L,0x8C1170D4L},{0x291124A3L,(-6L),9L,0xD0663B70L,9L,(-6L),0x291124A3L},{(-4L),0x8C1170D4L,0x8274371EL,0x8C1170D4L,(-4L),(-4L),0x8C1170D4L},{0L,5L,0L,0x62810AE6L,9L,(-1L),(-1L)},{0x8C1170D4L,(-8L),0x8274371EL,0x8274371EL,(-8L),0x8C1170D4L,(-8L)},{0L,0x62810AE6L,9L,(-1L),(-1L),(-1L),9L}};
        int16_t l_203 = 0xAD43L;
        int i, j;
        for (g_106 = 0; (g_106 <= 5); g_106 += 1)
        { 
            uint64_t l_170 = 0xD0102AA92F95BF61LL;
            int32_t *l_191 = &g_120;
            int32_t *l_192 = &g_120;
            int32_t *l_193 = (void*)0;
            int32_t *l_194 = &g_53;
            int32_t *l_195 = &g_120;
            int32_t *l_196 = &l_168;
            int32_t *l_197 = &g_53;
            int32_t *l_198[1];
            int i;
            for (i = 0; i < 1; i++)
                l_198[i] = &g_53;
            for (p_41 = 5; (p_41 >= 0); p_41 -= 1)
            { 
                uint32_t l_133[5][1][6] = {{{0xEA9C8C9CL,0x8BE1421AL,4UL,3UL,0x7399A049L,7UL}},{{0x7399A049L,4294967295UL,0xA735059AL,4294967295UL,0x7399A049L,0x1E86021BL}},{{7UL,0x8BE1421AL,4294967288UL,1UL,4294967295UL,4UL}},{{4UL,0x1E3F2B59L,0x8BE1421AL,0x8BE1421AL,0x1E3F2B59L,4UL}},{{1UL,3UL,4294967288UL,0x7399A049L,4UL,0x1E86021BL}}};
                struct S0 l_140[3][5] = {{{20,0xD986BD2DL,0,1UL},{12,0L,0,0xAADDF971429669FALL},{12,0L,0,0xAADDF971429669FALL},{20,0xD986BD2DL,0,1UL},{12,0L,0,0xAADDF971429669FALL}},{{20,0xD986BD2DL,0,1UL},{20,0xD986BD2DL,0,1UL},{8,0x8FC2E2BEL,-0,0x9B47AF96686465E5LL},{20,0xD986BD2DL,0,1UL},{20,0xD986BD2DL,0,1UL}},{{12,0L,0,0xAADDF971429669FALL},{20,0xD986BD2DL,0,1UL},{12,0L,0,0xAADDF971429669FALL},{12,0L,0,0xAADDF971429669FALL},{20,0xD986BD2DL,0,1UL}}};
                uint8_t *l_155 = &g_135;
                const int8_t * const l_166 = &g_19;
                const int8_t * const *l_165[7] = {&l_166,&l_166,&l_166,&l_166,&l_166,&l_166,&l_166};
                const int8_t * const **l_164 = &l_165[3];
                int32_t l_188 = 5L;
                int i, j, k;
                for (g_53 = 5; (g_53 >= 0); g_53 -= 1)
                { 
                    int32_t *l_119 = &g_120;
                    int32_t **l_122 = &g_83;
                    int32_t ***l_121[1];
                    uint8_t *l_134 = &g_135;
                    int8_t *l_136 = &g_137;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_121[i] = &l_122;
                    (*l_119) |= g_65[p_41];
                    l_123 = &l_119;
                    l_138 ^= (safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((void*)0 == p_38) ^ (((*l_136) = (safe_lshift_func_int8_t_s_u(((+l_133[4][0][1]) < 1UL), ((*l_134) &= g_120)))) , g_33.f0)) >= ((&l_122 != &l_123) != g_65[2])), l_133[4][0][1])), 0L)) < 0x2FA0D639L), g_68));
                }
                for (g_104 = 5; (g_104 >= 0); g_104 -= 1)
                { 
                    struct S1 l_139 = {47};
                    int64_t *l_156 = &g_157;
                    int64_t *l_158 = (void*)0;
                    int64_t *l_159[5][6] = {{&g_160[1][0][2],&g_160[0][1][0],&g_160[1][0][1],&g_160[1][0][1],&g_160[1][0][1],&g_160[1][0][1]},{&g_160[1][0][1],&g_160[1][0][1],&g_160[1][0][1],&g_160[1][0][1],&g_160[1][0][1],&g_160[0][1][1]},{&g_160[1][0][1],&g_160[0][1][0],(void*)0,&g_160[0][0][1],&g_160[1][0][1],&g_160[1][0][1]},{&g_160[1][0][1],&g_160[1][0][1],&g_160[0][1][0],&g_160[0][1][0],&g_160[1][0][1],&g_160[1][0][1]},{&g_160[0][0][1],&g_160[1][0][1],(void*)0,&g_160[1][0][1],&g_160[1][0][1],&g_160[0][1][1]}};
                    int32_t l_161[5] = {0x6B34804FL,0x6B34804FL,0x6B34804FL,0x6B34804FL,0x6B34804FL};
                    int16_t *l_162 = &g_100;
                    int32_t l_163 = 9L;
                    int i, j;
                    (*p_42) = l_139;
                    l_163 |= ((l_140[2][1] , ((safe_div_func_int16_t_s_s(((*l_162) = (p_41 || (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(((g_160[0][0][3] = (l_161[0] |= ((*l_156) &= ((((*g_83) || l_133[2][0][1]) == (0L < (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((((void*)0 != l_155) , l_140[2][1].f2) , g_12) != 9UL) || 0UL), p_41)), g_12)), g_105)), g_106)))) < 0xE01D719513162A55LL)))) < g_88.f3), 1)) , 65533UL) >= p_41), p_39.f0)))), g_106)) != l_140[2][1].f1)) != (*g_83));
                }
                (*l_164) = &p_38;
                for (g_100 = 5; (g_100 >= 0); g_100 -= 1)
                { 
                    return l_167[0];
                }
                for (g_104 = 4; (g_104 >= 0); g_104 -= 1)
                { 
                    int32_t *l_169 = &g_120;
                    union U2 l_173 = {0};
                    int8_t *l_189 = &g_137;
                    l_170++;
                    l_190 = (((l_173 , l_174) , &p_39) != ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((*l_169) = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_183 , g_120), (((*l_189) = (safe_lshift_func_int8_t_s_s((g_65[3] && (safe_div_func_int8_t_s_s((l_188 |= g_157), g_65[2]))), 3))) | p_39.f0))), g_33.f0)) ^ 0xBDFDL)) ^ p_39.f0), 1)), 2)) != p_39.f0) != p_41) , &l_167[0]));
                    if ((*g_83))
                        continue;
                }
            }
            --g_206;
            for (g_157 = 1; (g_157 <= 5); g_157 += 1)
            { 
                int8_t *l_214 = (void*)0;
                int32_t *l_223 = &l_205[0][0];
                int i;
                if ((safe_sub_func_int32_t_s_s((((((((g_65[g_157] <= 0L) < g_211[2][2]) > (*g_83)) ^ (safe_sub_func_int8_t_s_s(g_65[g_157], (g_137 &= g_65[g_157])))) != ((((safe_rshift_func_uint8_t_u_u((&l_205[0][2] != &g_98), g_65[g_157])) == (*g_83)) != l_205[0][2]) , p_39.f0)) >= p_39.f0) <= g_211[2][2]), 1UL)))
                { 
                    struct S1 l_217 = {25};
                    return l_217;
                }
                else
                { 
                    int64_t l_218 = 8L;
                    --g_220;
                    l_224 = l_223;
                    (*l_196) ^= (-2L);
                    return (*p_40);
                }
            }
            if (p_41)
                break;
        }
        for (g_157 = 1; (g_157 <= 5); g_157 += 1)
        { 
            const int32_t ***l_232 = &g_231;
            int32_t l_234[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
            int32_t **l_252[1];
            int8_t ***l_328 = (void*)0;
            const uint32_t *l_336 = &g_337;
            int i;
            for (i = 0; i < 1; i++)
                l_252[i] = &l_224;
            for (g_88.f3 = 0; (g_88.f3 <= 5); g_88.f3 += 1)
            { 
                const uint32_t l_227[7] = {0x22E32B80L,0x22E32B80L,0x22E32B80L,0x22E32B80L,0x22E32B80L,0x22E32B80L,0x22E32B80L};
                int16_t *l_233[4][6][1] = {{{(void*)0},{&l_203},{(void*)0},{&l_203},{&l_203},{&g_105}},{{&g_105},{&l_203},{&l_203},{(void*)0},{&l_203},{(void*)0}},{{&l_203},{&l_203},{&g_105},{&g_105},{&l_203},{&l_203}},{{(void*)0},{&l_203},{(void*)0},{&l_203},{&l_203},{&g_105}}};
                int32_t l_270[7][3][6] = {{{0x060EDE61L,(-6L),(-1L),1L,3L,0L},{1L,(-6L),(-2L),0xB577FE8EL,(-1L),(-1L)},{1L,(-2L),0xE077B5E0L,(-2L),0x1BC39E94L,0xD30E9876L}},{{0L,0x83ABEF08L,0x545C8C14L,(-2L),0xD30E9876L,(-1L)},{(-2L),0xD30E9876L,(-1L),(-1L),0xD30E9876L,0x83ABEF08L},{0L,0x83ABEF08L,0x1BC39E94L,0L,0x1BC39E94L,0x83ABEF08L}},{{3L,0xE077B5E0L,(-1L),(-6L),0x545C8C14L,(-1L)},{3L,0x1BC39E94L,0x545C8C14L,0L,(-1L),0xD30E9876L},{0L,0x1BC39E94L,0xE077B5E0L,(-1L),0x545C8C14L,0x545C8C14L}},{{(-2L),0xE077B5E0L,0xE077B5E0L,(-2L),0x1BC39E94L,0xD30E9876L},{0L,0x83ABEF08L,0x545C8C14L,(-2L),0xD30E9876L,(-1L)},{(-2L),0xD30E9876L,(-1L),(-1L),0xD30E9876L,0x83ABEF08L}},{{0L,0x83ABEF08L,0x1BC39E94L,0L,0x1BC39E94L,0x83ABEF08L},{3L,0xE077B5E0L,(-1L),(-6L),0x545C8C14L,(-1L)},{3L,0x1BC39E94L,0x545C8C14L,0L,(-1L),0xD30E9876L}},{{0L,0x1BC39E94L,0xE077B5E0L,(-1L),0x545C8C14L,0x545C8C14L},{(-2L),0xE077B5E0L,0xE077B5E0L,(-2L),0x1BC39E94L,0xD30E9876L},{0L,0x83ABEF08L,0x545C8C14L,(-2L),0xD30E9876L,(-1L)}},{{(-2L),0xD30E9876L,(-1L),(-1L),0xD30E9876L,0x83ABEF08L},{0L,0x83ABEF08L,0x1BC39E94L,0L,0x1BC39E94L,0x83ABEF08L},{3L,0xE077B5E0L,(-1L),(-6L),0x545C8C14L,(-1L)}}};
                uint32_t * const l_274 = (void*)0;
                uint32_t * const *l_273 = &l_274;
                int32_t l_291[3];
                const uint32_t *l_338 = &g_339;
                uint32_t *l_341 = &g_65[5];
                int8_t * const * const *l_361 = (void*)0;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_291[i] = 1L;
                if ((((safe_mul_func_uint8_t_u_u(l_227[5], ((((&g_120 == &g_120) , 0x2145L) >= (l_234[3] = (((g_106 = (safe_sub_func_int64_t_s_s(((l_232 = g_230) != ((*p_40) , &g_231)), 0xB5801B7B750C1D09LL))) , (*l_224)) || 65535UL))) & 0L))) ^ p_41) & (*l_224)))
                { 
                    int i, j;
                    l_202[g_88.f3][g_88.f3] = 1L;
                }
                else
                { 
                    int32_t ***l_249 = &l_123;
                    int32_t ***l_250 = &l_123;
                    int32_t ***l_251 = &l_123;
                    int16_t l_255 = 0xA426L;
                    uint16_t *l_269[6] = {(void*)0,&g_106,&g_106,(void*)0,&g_106,&g_106};
                    uint8_t *l_275 = &g_206;
                    int i;
                    (*l_224) = (g_53 ^= (safe_rshift_func_int8_t_s_u((((void*)0 != &l_204) > (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((*l_224), (*l_224))) && (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((((((l_252[0] = &g_83) == (void*)0) && (safe_rshift_func_int8_t_s_u(2L, 4))) ^ p_41) != l_227[1]) || p_41) || (*l_224)), 3)), p_41)) != l_227[5]), 13))), g_88.f3)) & g_160[1][0][1]), l_227[0]))), g_98)));
                    l_255 &= ((p_41 && 0x9D19914BL) >= p_39.f0);
                    l_204 = (safe_sub_func_uint32_t_u_u((!(safe_mod_func_uint64_t_u_u(g_65[2], 0xBE899FA3D070E6CDLL))), ((g_105 ^= (safe_rshift_func_uint16_t_u_u((l_270[0][2][1] = (safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(0x1AA105A60EC3E438LL, p_39.f0)), ((*l_224) = (safe_mod_func_int64_t_s_s(g_219, 8UL)))))), 6))) >= ((safe_mul_func_uint8_t_u_u(((*l_275) &= ((((g_160[1][0][3] , l_273) != (void*)0) & p_39.f0) > p_41)), p_39.f0)) > g_98))));
                }
                if (p_41)
                { 
                    uint16_t l_288[1];
                    uint32_t *l_289 = &g_68;
                    int32_t l_303[5];
                    uint8_t *l_331 = &g_206;
                    uint64_t l_333 = 18446744073709551615UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_288[i] = 65535UL;
                    for (i = 0; i < 5; i++)
                        l_303[i] = 0xF6E4D6C6L;
                    l_291[1] ^= ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((0x9AB741B8BEBA2281LL < (safe_add_func_uint16_t_u_u(65535UL, (l_270[0][2][1] = (safe_div_func_int64_t_s_s((&l_252[0] == (void*)0), ((((((*l_289) &= ((l_202[2][6] |= ((*l_224) = (1L && (safe_div_func_uint64_t_u_u(18446744073709551609UL, (safe_mul_func_uint16_t_u_u((((g_33 , 0x47L) ^ g_88.f0) || l_288[0]), 0xA575L))))))) <= p_41)) && 0x60F6C440L) || (*l_224)) , p_41) ^ p_41))))))) > p_41), g_290)), p_39.f0)) && p_39.f0);
                    (*l_224) = (g_104 <= (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(0x5FD5L, (safe_mod_func_int8_t_s_s(l_270[0][2][5], p_39.f0)))), 12)) != 0x85L), (g_302[1] != (void*)0))), g_135)));
                    g_306++;
                    (*l_224) = (((safe_lshift_func_uint16_t_u_u((((4L & l_311) == (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((l_270[3][2][2] = p_41) || (safe_sub_func_int8_t_s_s(((1UL && ((((*l_331) = ((((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(((((void*)0 == l_328) != (safe_mul_func_int16_t_s_s(g_137, 0UL))) != 1L), 0xF611L)), 3L)) < 0x6B7EL) , 0xC0A3D982L) == 0xCA09B012L)) , 0x7FE8C09AC6F9D898LL) != g_120)) < p_41), (*l_224)))), g_100)), 0x6DL)), l_332)), p_41)), p_39.f0))) || l_333), 2)) ^ p_41) , 0xAD38D5E8L);
                }
                else
                { 
                    const uint32_t *l_334 = &g_68;
                    const uint32_t **l_335[3][3][5] = {{{&l_334,&l_334,&l_334,&l_334,&l_334},{&l_334,&l_334,(void*)0,&l_334,&l_334},{&l_334,&l_334,&l_334,&l_334,&l_334}},{{&l_334,&l_334,&l_334,&l_334,&l_334},{&l_334,&l_334,(void*)0,&l_334,&l_334},{&l_334,&l_334,&l_334,&l_334,&l_334}},{{&l_334,&l_334,&l_334,&l_334,&l_334},{&l_334,&l_334,(void*)0,&l_334,&l_334},{&l_334,&l_334,&l_334,&l_334,&l_334}}};
                    uint32_t **l_342 = &l_341;
                    int32_t l_352[6][4][6] = {{{0x8ABE0DFAL,1L,0x28338B1BL,5L,0x541D088AL,(-1L)},{(-10L),1L,1L,0x832EED42L,0x541D088AL,0xB3CF3B66L},{0xCB839CEFL,1L,0x364D47B1L,1L,(-1L),(-2L)},{(-4L),0L,0x2ED9C82AL,0x364D47B1L,(-1L),0x6FB989AAL}},{{(-1L),(-10L),(-1L),0x5DDD99CCL,(-1L),0xDD26EA70L},{(-1L),0xE18AC25AL,1L,0x2ED9C82AL,(-4L),(-3L)},{1L,1L,(-1L),1L,1L,(-1L)},{(-1L),0x1E3957D0L,1L,(-4L),(-2L),3L}},{{(-1L),0x8ABE0DFAL,0x596AA2BBL,0x1E3957D0L,0x2ED9C82AL,3L},{(-1L),0x832EED42L,1L,0x67F04626L,0x049FA685L,(-1L)},{0x2ED9C82AL,(-1L),(-1L),0x364D47B1L,(-1L),(-3L)},{0xCB839CEFL,0L,1L,(-1L),0x364D47B1L,0xDD26EA70L}},{{9L,(-1L),1L,(-3L),0xCB839CEFL,1L},{0x6FB989AAL,0xF3DB485DL,0xCB839CEFL,0xCB839CEFL,0xF3DB485DL,0x6FB989AAL},{0xE18AC25AL,0x28338B1BL,0xDD26EA70L,(-1L),0x541D088AL,0x5DDD99CCL},{0L,0xF19BAF28L,0xF3DB485DL,(-2L),9L,(-1L)}},{{0L,1L,(-2L),(-1L),(-1L),(-10L)},{0xE18AC25AL,0x541D088AL,(-1L),0xCB839CEFL,0xDD26EA70L,1L},{0x6FB989AAL,(-1L),0x67F04626L,(-3L),0x1E3957D0L,0L},{9L,0x67F04626L,0x2ED9C82AL,(-1L),0x8125710EL,0x1E3957D0L}},{{0xCB839CEFL,0x049FA685L,0xF19BAF28L,0x364D47B1L,0xF19BAF28L,0x049FA685L},{0x2ED9C82AL,(-1L),0x8ABE0DFAL,0x67F04626L,0x832EED42L,(-1L)},{(-1L),1L,3L,0x1E3957D0L,0x6FB989AAL,0xC8039104L},{(-1L),1L,(-10L),(-4L),0x832EED42L,0xF3DB485DL}}};
                    uint8_t *l_362[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_362[i] = (void*)0;
                    (*l_224) |= ((l_338 = (l_336 = l_334)) != (g_340 , ((*l_342) = l_341)));
                    if (l_227[5])
                        break;
                    g_363 = ((safe_rshift_func_int16_t_s_s((p_41 && (+(safe_sub_func_int32_t_s_s(0xCEAEE16CL, (safe_mul_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(l_352[2][1][0], ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((g_106 , (safe_mod_func_uint8_t_u_u((g_206 = ((g_340 , l_359[0]) != l_361)), 0xA7L))), g_160[1][1][0])), p_41)) && 8UL))) , g_68) & g_305), l_352[2][1][0])))))), 10)) , l_352[2][1][0]);
                    g_366--;
                }
            }
        }
        for (l_138 = (-24); (l_138 >= 58); l_138 = safe_add_func_uint32_t_u_u(l_138, 4))
        { 
            int16_t l_371 = 0x0EDEL;
            (*l_224) = l_183.f0;
            if (l_371)
                break;
            g_53 |= p_39.f0;
            for (g_206 = (-28); (g_206 != 44); g_206 = safe_add_func_uint8_t_u_u(g_206, 8))
            { 
                uint64_t l_386 = 18446744073709551611UL;
                for (g_220 = (-3); (g_220 > 31); g_220++)
                { 
                    const struct S1 *l_378 = (void*)0;
                    int32_t *l_381 = &l_190;
                    (*l_381) = ((*l_224) ^= (safe_rshift_func_int16_t_s_u(((l_378 != (g_379 = &g_33)) < g_364), 8)));
                    return (*p_42);
                }
                for (g_53 = 0; (g_53 <= 2); g_53 += 1)
                { 
                    int32_t *l_382 = (void*)0;
                    int32_t *l_383 = &l_205[0][0];
                    int32_t *l_384 = &l_202[0][1];
                    int32_t *l_385[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_385[i] = &l_202[2][2];
                    l_386++;
                    return (*g_379);
                }
                return (*p_40);
            }
        }
    }
    if ((l_389 == ((*l_391) = &l_390)))
    { 
        uint16_t l_393[7][2][3] = {{{0xAAD2L,0x3B20L,0xAAD2L},{0xAAD2L,65535UL,0x3B20L}},{{65535UL,0xAAD2L,0xAAD2L},{0x3B20L,0xAAD2L,0x2669L}},{{1UL,65535UL,65529UL},{0x3B20L,0x3B20L,65529UL}},{{65535UL,1UL,0x2669L},{0xAAD2L,0x3B20L,0xAAD2L}},{{0xAAD2L,65535UL,0x3B20L},{65535UL,0xAAD2L,0xAAD2L}},{{0x3B20L,0xAAD2L,0x2669L},{1UL,65535UL,65529UL}},{{0x3B20L,0x3B20L,65529UL},{65535UL,1UL,0x2669L}}};
        int32_t *l_394 = &g_98;
        int32_t **l_395 = (void*)0;
        int32_t **l_396 = &g_83;
        int8_t *l_409 = &l_311;
        int8_t **l_408[4] = {&l_409,&l_409,&l_409,&l_409};
        int8_t **l_410[4][5] = {{&l_409,&l_409,&l_409,&l_409,&l_409},{&l_409,(void*)0,(void*)0,&l_409,(void*)0},{&l_409,&l_409,&l_409,&l_409,&l_409},{(void*)0,&l_409,(void*)0,(void*)0,&l_409}};
        struct S0 l_421 = {1,9L,0,0xBA813C421EE8AF59LL};
        int32_t l_422 = (-1L);
        int64_t *l_423 = &g_157;
        uint16_t *l_424 = &l_393[0][1][1];
        struct S1 l_479 = {37};
        struct S1 ****l_495 = &l_391;
        const int32_t *l_503[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        const int32_t **l_502[1][7] = {{&l_503[3][0],&l_503[3][0],&l_503[3][0],&l_503[3][0],&l_503[3][0],&l_503[3][0],&l_503[3][0]}};
        uint64_t l_532 = 5UL;
        union U2 l_555 = {0};
        int64_t l_593 = 2L;
        struct S1 l_659 = {49};
        int32_t **l_714 = &g_621;
        int64_t l_731 = 0x9520BD6704BB1423LL;
        uint8_t l_781 = 3UL;
        int32_t l_796 = 1L;
        int32_t l_797 = 0xCC1BA326L;
        uint32_t l_816 = 4294967295UL;
        int32_t l_856 = (-8L);
        int32_t l_857 = 0x3464EA14L;
        int32_t l_859 = 0x0C0F1585L;
        int32_t ****l_976 = &g_825;
        int32_t *****l_975 = &l_976;
        uint32_t l_995[6][7][5] = {{{0xBC798F24L,0xB4D4135EL,0x48B70B98L,18446744073709551615UL,0x1C80E05CL},{0x30241EB0L,0xEC7D3F92L,0x595FA2FEL,0x0B4B56B6L,0x716BCEC7L},{18446744073709551607UL,0x9D256E75L,18446744073709551615UL,18446744073709551615UL,0x9D256E75L},{3UL,0x7201704CL,0UL,0xC81BCAE5L,1UL},{0xFAB59FD9L,0x0CD93732L,0x6A23EC92L,0xBC798F24L,18446744073709551606UL},{0x595FA2FEL,0x46DD6E85L,0x40901257L,0x0A9F9D44L,0x19C2BDC9L},{0xFAB59FD9L,18446744073709551607UL,18446744073709551615UL,18446744073709551607UL,1UL}},{{3UL,0xA191B240L,1UL,0UL,0UL},{18446744073709551607UL,18446744073709551615UL,18446744073709551607UL,0xFAB59FD9L,1UL},{0x30241EB0L,18446744073709551615UL,0UL,0x9D4F156FL,18446744073709551615UL},{0xBC798F24L,0x6A23EC92L,0x0CD93732L,0xFAB59FD9L,0xEB195504L},{18446744073709551615UL,0UL,0x3E2E7DD4L,0UL,0x3E2E7DD4L},{18446744073709551615UL,18446744073709551615UL,0x9D256E75L,18446744073709551607UL,0x6A23EC92L},{18446744073709551615UL,0x9D4F156FL,0UL,0x0A9F9D44L,3UL}},{{18446744073709551615UL,0x48B70B98L,0xB4D4135EL,0xBC798F24L,18446744073709551612UL},{0UL,0x9D4F156FL,0x8059DA73L,0xC81BCAE5L,0UL},{0x647F8A1BL,18446744073709551615UL,0xBC798F24L,18446744073709551615UL,0x647F8A1BL},{6UL,0UL,0x6C74FE1DL,0x0B4B56B6L,0x5792A3F9L},{1UL,0x6A23EC92L,0xFAB59FD9L,18446744073709551615UL,0xBC798F24L},{0x6C74FE1DL,18446744073709551615UL,0x716BCEC7L,0UL,0x5792A3F9L},{18446744073709551612UL,18446744073709551615UL,1UL,0x647F8A1BL,0x647F8A1BL}},{{0x5792A3F9L,0xA191B240L,0x5792A3F9L,18446744073709551613UL,0UL},{0x8451CD5FL,18446744073709551607UL,5UL,1UL,18446744073709551612UL},{1UL,0x46DD6E85L,0xF491AA8CL,1UL,3UL},{18446744073709551607UL,0x0CD93732L,5UL,18446744073709551612UL,0x6A23EC92L},{1UL,0x7201704CL,0x5792A3F9L,8UL,0x3E2E7DD4L},{0x1C80E05CL,0x9D256E75L,1UL,0x8451CD5FL,0xEB195504L},{0x40901257L,0xEC7D3F92L,0x716BCEC7L,0xA191B240L,18446744073709551615UL}},{{5UL,0xB4D4135EL,0xFAB59FD9L,18446744073709551607UL,1UL},{0x40901257L,0x87D99DF9L,0x6C74FE1DL,18446744073709551606UL,0UL},{0x1C80E05CL,0xBC798F24L,0xBC798F24L,0x1C80E05CL,1UL},{1UL,1UL,0x8059DA73L,18446744073709551615UL,0x19C2BDC9L},{18446744073709551607UL,0xFAB59FD9L,0xB4D4135EL,5UL,18446744073709551606UL},{1UL,0x9F792AE8L,0UL,18446744073709551615UL,1UL},{0x8451CD5FL,1UL,0x9D256E75L,0x1C80E05CL,0x9D256E75L}},{{0x5792A3F9L,8UL,0x3E2E7DD4L,18446744073709551606UL,0x716BCEC7L},{18446744073709551612UL,5UL,0x0CD93732L,18446744073709551607UL,0x1C80E05CL},{6UL,0x0A9F9D44L,0x3E2E7DD4L,0xA1FC787AL,0x6C74FE1DL},{0xBC798F24L,18446744073709551607UL,0xB4D4135EL,0x0CD93732L,0x9D256E75L},{0x595FA2FEL,0UL,7UL,0UL,0x595FA2FEL},{5UL,0xBC798F24L,0x647F8A1BL,18446744073709551615UL,0xEB195504L},{1UL,18446744073709551606UL,18446744073709551615UL,18446744073709551613UL,7UL}}};
        const uint16_t l_1005[2][6] = {{0xA88EL,0xA88EL,0xA88EL,0xA88EL,0xA88EL,0xA88EL},{0xA88EL,0xA88EL,0xA88EL,0xA88EL,0xA88EL,0xA88EL}};
        uint8_t *l_1018[2];
        uint16_t l_1028 = 0x7BC5L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1018[i] = &g_135;
        l_393[0][1][1] = p_39.f0;
        (*l_396) = l_394;
        if (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*l_424) = (safe_mod_func_int64_t_s_s(((*l_423) |= (safe_sub_func_int8_t_s_s((l_204 &= (+((**l_396) = ((((safe_mod_func_int16_t_s_s((((*l_409) = ((l_408[3] = l_408[3]) == (l_410[2][3] = l_410[0][0]))) < ((&l_394 != (*g_230)) , (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((((safe_sub_func_uint32_t_u_u(4294967292UL, ((((((safe_rshift_func_int8_t_s_u(((*l_224) |= ((p_41 | (safe_div_func_uint8_t_u_u((l_421 , 250UL), 1UL))) != 0L)), g_53)) | 0x4CEC06E7D003E0EBLL) , (void*)0) == &p_40) , p_39.f0) || (**l_396)))) | (*l_394)) >= 0x2C5A303774D24582LL) , p_39.f0) == l_422), 15)), (-9L))))), p_41)) && p_39.f0) <= 0x9933L) , g_120)))), 6UL))), p_41))), g_68)), 0x6895L)) & l_138))
        { 
            int16_t l_425 = 1L;
            uint8_t *l_428 = &g_135;
            int32_t l_437 = 0x77B9976BL;
            uint32_t *l_449[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            uint32_t **l_448 = &l_449[1][1];
            int32_t *l_450[1][6] = {{(void*)0,(void*)0,&g_211[2][2],(void*)0,(void*)0,&g_211[2][2]}};
            int32_t l_451 = 1L;
            int32_t l_452 = 0x5D865009L;
            const union U2 l_492 = {0};
            int32_t *** const l_493 = &l_396;
            struct S0 l_544 = {7,1L,-1,0x8857150289F0EA6DLL};
            uint64_t *l_592 = &l_544.f3;
            int8_t * const *l_646 = &l_409;
            int32_t l_651 = 2L;
            int32_t l_652[3][5];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_652[i][j] = 0x07CCF160L;
            }
            (*l_396) = &l_168;
            if (((0UL ^ ((((l_425 = (*l_224)) != (safe_add_func_uint16_t_u_u((((++(*l_428)) ^ (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((l_437 = 0L) & (((safe_rshift_func_int16_t_s_u((((l_451 ^= (!((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((&l_205[0][1] == (void*)0) != (+p_41)), ((void*)0 != l_448))), 1)) != 0xCA79L), g_380[4][1].f0)) < 8L))) , 0x6CL) ^ 0xF6L), p_39.f0)) , (*l_396)) == (void*)0)), 11)), 0xD1DF44C1L)), l_452))) ^ (*l_224)), l_452))) ^ p_39.f0) && 9L)) == p_41))
            { 
                int32_t *l_455 = &l_168;
                const uint32_t **l_456[1];
                uint32_t l_466 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_456[i] = (void*)0;
                l_455 = ((++(*l_424)) , ((*l_396) = &l_452));
                g_33 = (*g_379);
                if (((&g_65[2] == (g_457 = (*l_448))) > ((((((*l_224) < (((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u((((((*l_424) = ((l_452 || (p_41 , ((((void*)0 != (*l_448)) ^ l_452) , (*l_224)))) == g_364)) , p_41) == 0x61E4DACDL) && 18446744073709551611UL), g_33.f0)) , p_41), l_452)), 0xE87A81C603833DB7LL)), g_160[1][1][1])) , 65526UL) < 4UL)) <= g_305) > l_466) > 2L) != p_41)))
                { 
                    int16_t *l_470[2][2][1] = {{{&l_425},{&g_100}},{{&l_425},{&g_100}}};
                    const int32_t l_471 = 0xD4CCAA19L;
                    int i, j, k;
                    (*l_224) &= ((safe_unary_minus_func_int32_t_s(((*l_394) = ((g_65[2] <= ((65529UL == (g_100 ^= p_41)) || ((&l_168 == (void*)0) != (-1L)))) & l_437)))) && l_471);
                    (*l_396) = &l_205[0][2];
                }
                else
                { 
                    l_451 |= ((((*l_224) >= (0x84L <= (safe_mul_func_uint16_t_u_u((((p_41 < (&p_42 == (void*)0)) == ((p_41 , &l_174) != &l_393[0][1][1])) >= (*l_224)), (*l_394))))) > (*l_455)) && g_106);
                    (*l_396) = &l_204;
                    return (*p_42);
                }
                (*g_83) |= (-1L);
            }
            else
            { 
                uint64_t *l_483 = &l_421.f3;
                l_476 = &g_340;
                if ((safe_rshift_func_uint16_t_u_s(0x538AL, 12)))
                { 
                    return l_479;
                }
                else
                { 
                    (*l_396) = l_480;
                    (*l_396) = &l_205[0][0];
                    (**l_396) = (&g_339 != (void*)0);
                }
                (*g_83) &= (safe_sub_func_int64_t_s_s(((*l_423) = g_104), (++(*l_483))));
            }
            for (g_120 = 0; (g_120 <= 3); g_120 += 1)
            { 
                const int64_t l_494 = 0x554127F8BD2DB030LL;
                int32_t l_507 = 0x65E5FD3FL;
                uint32_t l_509 = 4294967293UL;
                union U2 l_523 = {0};
                struct S0 l_543 = {3,9L,-1,0xE54241905BDBDECFLL};
                int8_t *l_545[3][3] = {{&g_137,&g_137,&g_137},{(void*)0,(void*)0,(void*)0},{&g_137,&g_137,&g_137}};
                int i, j;
                if ((safe_rshift_func_int16_t_s_u(l_437, (safe_add_func_uint16_t_u_u(p_41, (safe_mul_func_int8_t_s_s((l_492 , ((*l_409) = (l_493 == ((8L && (((-1L) == (((**l_389) , g_219) > g_220)) == l_494)) , (void*)0)))), 0xE0L)))))))
                { 
                    struct S1 *****l_496 = &l_495;
                    const int32_t l_504 = 6L;
                    int16_t *l_505 = &g_100;
                    int16_t *l_506[5][3];
                    int32_t *l_508 = (void*)0;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_506[i][j] = (void*)0;
                    }
                    (*l_496) = l_495;
                    (*l_480) ^= (safe_sub_func_int16_t_s_s(((***l_493) = ((*l_505) ^= ((g_304 = (safe_unary_minus_func_uint8_t_u((***l_493)))) >= (((((g_88.f0 | p_41) || ((***l_493) & ((g_340 , (safe_add_func_int16_t_s_s(((((&l_394 != ((*g_230) = l_502[0][4])) | 0x73L) ^ 18446744073709551615UL) , (-3L)), 0x2E47L))) | l_504))) , (-7L)) != 65533UL) == g_105)))), g_88.f2));
                    l_509++;
                    (*l_480) = (((((void*)0 == &l_508) & (!(***l_493))) && 0L) ^ ((safe_lshift_func_uint16_t_u_s(g_105, 8)) < ((((g_88 , (((safe_rshift_func_uint8_t_u_u(((((+g_220) && 0x25L) , (void*)0) == &p_38), g_520)) <= 0x64330977L) < p_39.f0)) != (***l_493)) > g_105) && 0x1C94L)));
                }
                else
                { 
                    (*g_83) = p_41;
                    if (p_41)
                        continue;
                    if (p_41)
                        break;
                    (*l_480) = (((safe_mod_func_int32_t_s_s((((p_39.f0 < ((l_523 , (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((*l_428)++), (safe_sub_func_int8_t_s_s((l_532 | ((safe_add_func_uint8_t_u_u((g_220 ^= (((l_449[1][1] == &g_104) , (safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(0xA7E1DFB3L, ((safe_rshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s(((*l_224) |= (l_543 , p_41)), (-9L))) , (*l_224)), p_41)) >= p_41))) , 0x5611L), g_219))) > (-7L))), 5L)) == (*l_480))), p_41)))), 0))) < p_41)) & g_380[4][1].f0) && (*l_224)), p_39.f0)) , l_544) , (***l_493));
                }
                (*g_83) ^= p_41;
                if (((l_545[1][0] != (void*)0) == (~(((((safe_mul_func_int8_t_s_s((*l_480), 0x71L)) == (safe_div_func_int64_t_s_s(((((((*l_428)++) || ((((((safe_div_func_int32_t_s_s((((l_555 , ((&p_41 != (void*)0) || 0x6E1CF874L)) || 0xF1L) == p_39.f0), 4294967286UL)) || (***l_493)) >= (*g_83)) ^ g_556) < 0x88794468146B0B02LL) & 0x0DL)) != p_39.f0) , &g_340) != &g_340), g_339))) == 18446744073709551612UL) && p_39.f0) && p_39.f0))))
                { 
                    int32_t *l_557 = &g_340.f1;
                    int32_t *l_558 = &l_451;
                    int32_t *l_559 = &l_204;
                    int32_t *l_560 = &l_422;
                    int32_t *l_561 = &g_340.f1;
                    int32_t *l_562 = &l_452;
                    int32_t *l_563 = &l_507;
                    int32_t *l_564 = &l_555.f1;
                    int32_t *l_565[7];
                    int32_t l_566[2];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_565[i] = &g_364;
                    for (i = 0; i < 2; i++)
                        l_566[i] = 0x68A2DCF4L;
                    g_567++;
                }
                else
                { 
                    int8_t l_570 = 9L;
                    int32_t *l_571 = &g_340.f1;
                    int32_t *l_572[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_572[i] = &l_422;
                    (**l_389) = (*p_40);
                    g_574[4]++;
                    return (*g_379);
                }
                for (l_311 = 0; (l_311 <= 3); l_311 += 1)
                { 
                    int32_t ****l_578 = (void*)0;
                    int32_t *****l_577 = &l_578;
                    union U2 **l_579 = &l_476;
                    (*l_577) = (void*)0;
                    (*l_579) = (void*)0;
                    (*l_579) = &g_340;
                }
            }
            (*g_83) = (((((g_65[2] &= g_220) && ((safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0x1CAA5F55L, (safe_lshift_func_int8_t_s_s((0UL ^ (((*l_592) = (((*l_224) == (p_41 ^ (safe_rshift_func_uint16_t_u_u(((*l_424) = 1UL), 0)))) , (((*l_480) = (((g_380[4][1].f0 , (*g_379)) , (**l_396)) == g_135)) && (*g_83)))) > l_593)), p_39.f0)))), p_41)) , 1UL) , 0xB1BFA07DL), 6UL)) && (*g_83)), 5)) | (***l_493))) , g_574[3]) | g_290) != 0x98E97FD2A0862CB0LL);
            if (((*g_83) = (***l_493)))
            { 
                uint8_t l_607[1][6][4] = {{{0UL,1UL,1UL,1UL},{0UL,0UL,0xF3L,1UL},{1UL,0UL,0xF3L,0UL},{0UL,255UL,1UL,0xF3L},{0UL,255UL,255UL,0UL},{255UL,0UL,0UL,1UL}}};
                int32_t l_608 = 0x6DCFB230L;
                int32_t l_609 = 0x21340AF6L;
                int32_t *l_619 = &g_98;
                int32_t *l_650[6][4][7] = {{{&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0]},{&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168},{&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0]},{&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0]}},{{&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168},{&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0]},{&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0]},{&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168}},{{&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0]},{&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0]},{&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168},{&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0],&l_205[0][0],&g_120,&l_205[0][0]}},{{&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0]},{&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168,&l_168},{&l_205[0][0],&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168},{&l_168,&g_120,&g_120,&l_168,&g_120,&g_120,&l_168}},{{&g_120,&l_168,&g_120,&g_120,&l_168,&g_120,&g_120},{&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168},{&l_168,&g_120,&g_120,&l_168,&g_120,&g_120,&l_168},{&g_120,&l_168,&g_120,&g_120,&l_168,&g_120,&g_120}},{{&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168},{&l_168,&g_120,&g_120,&l_168,&g_120,&g_120,&l_168},{&g_120,&l_168,&g_120,&g_120,&l_168,&g_120,&g_120},{&l_168,&l_168,&l_205[0][0],&l_168,&l_168,&l_205[0][0],&l_168}}};
                int i, j, k;
                if ((safe_mul_func_int8_t_s_s((((***l_493) <= 9UL) < g_306), p_39.f0)))
                { 
                    int32_t *l_610 = &g_98;
                    int32_t *l_611 = &l_609;
                    int32_t *l_612 = &g_98;
                    int32_t *l_613 = &g_340.f1;
                    int32_t *l_614[1][4][6] = {{{&l_452,&g_98,&g_98,&l_452,&g_120,&l_204},{(void*)0,&g_98,&g_120,(void*)0,&g_120,&g_98},{&g_120,&g_98,&l_204,&g_120,&g_120,&g_120},{&l_452,&g_98,&g_98,&l_452,&g_120,&l_204}}};
                    int i, j, k;
                    (*l_394) |= ((safe_add_func_uint64_t_u_u((0x8E9C6F412E92DBF2LL < (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_608 = ((((!((safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((l_607[0][2][0] = (-1L)) , ((*l_424) = (&g_231 != &g_231))), ((-4L) || (g_106 = (((-9L) <= 0x124EL) ^ p_39.f0))))), (*l_480))) > (*g_83))) < 0xC2550F5473FEE92CLL) & l_608) < 0x97L)), l_609)), p_39.f0))), (*l_224))) , p_39.f0);
                    g_616++;
                }
                else
                { 
                    int32_t ***l_622 = &g_620;
                    int8_t * const **l_647 = &l_646;
                    int32_t l_648 = 0x85713BD1L;
                    int16_t *l_649 = &g_615[0][0][0];
                    l_619 = &l_204;
                    if (p_41)
                        goto lbl_623;
lbl_623:
                    (*l_622) = g_620;
                    (*l_619) &= ((~((safe_lshift_func_int8_t_s_u((((safe_div_func_int64_t_s_s(9L, g_574[0])) > g_104) | ((((***l_493) || 9L) < (1UL & (safe_mul_func_uint8_t_u_u(((-1L) <= (*l_394)), p_39.f0)))) >= 0x03C1C5B0L)), 1)) , (*l_480))) >= 0xD1A898FEB7A19939LL);
                    l_168 |= ((65535UL <= (((~((*l_428)++)) == (((*l_649) = (safe_sub_func_int32_t_s_s(((((((*g_620) != (((safe_sub_func_uint64_t_u_u(((*l_592)++), (((*l_423) = (p_41 > ((p_39.f0 , ((safe_mod_func_uint64_t_u_u(((p_39.f0 != (safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((((((*l_647) = l_646) != &l_409) < (*l_619)) ^ 0x0C67E7309509B8D4LL), (*l_224))), 4))) == (*l_480)), g_98)) < g_573)) , 1UL))) ^ g_160[1][0][2]))) > 0x95F4EDD95F2A7AFCLL) , &p_41)) , p_39.f0) | 4294967291UL) & g_206) | (***l_493)), l_648))) && p_41)) != p_41)) == (***l_493));
                }
                ++g_656;
                (**l_493) = &l_608;
                (*p_40) = l_659;
            }
            else
            { 
                int32_t l_684 = 0x7EF6E651L;
                uint32_t **l_685 = &l_449[1][1];
                uint32_t l_686 = 4294967288UL;
                int32_t *l_687 = &g_120;
                union U2 * const l_690 = &g_340;
                uint64_t *l_713 = (void*)0;
                if ((((*l_423) |= ((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((+((void*)0 != &g_556)), (safe_mul_func_uint16_t_u_u(g_305, ((*l_424) = (safe_div_func_uint8_t_u_u(g_573, (safe_mul_func_int8_t_s_s(((((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint32_t_u((p_39.f0 == 0UL))) | (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(p_41, g_137)) & p_39.f0), 0xA1L)) || g_520), p_39.f0))), 0x018BA3E21C75AE1ELL)) <= l_684) , &g_457) != l_685), p_41))))))))), (*l_480))) != g_106) > (*g_83)), l_686)) | 0L), 3)) <= (-1L))) != 0xDC1A699F38444521LL))
                { 
                    int16_t l_699 = 2L;
                    uint64_t *l_712 = &l_421.f3;
                    int32_t *l_715 = &l_422;
lbl_700:
                    l_687 = &l_205[0][0];
                    l_684 |= ((*l_687) = (safe_mod_func_uint64_t_u_u((((**l_396) > 0L) ^ ((l_690 == l_690) <= (*l_224))), (safe_rshift_func_uint8_t_u_u((((((*l_423) ^= (safe_add_func_uint32_t_u_u(p_39.f0, (safe_add_func_int16_t_s_s((g_615[0][0][1] ^= (safe_div_func_int32_t_s_s(l_699, p_39.f0))), l_699))))) == g_304) != 1L) >= g_211[1][6]), g_556)))));
                    if (l_659.f0)
                        goto lbl_700;
                    (**l_392) = (*p_42);
                    (*l_715) ^= (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((((*l_687) = (*l_687)) != ((safe_mul_func_int16_t_s_s((((~p_39.f0) , ((*l_480) |= p_39.f0)) != (safe_div_func_uint64_t_u_u(((l_421 , ((((((*l_394) = ((((*l_448) == &g_339) , (safe_sub_func_uint8_t_u_u(((l_712 == l_713) | p_39.f0), g_220))) == g_653[0][1])) || 0x6FL) , &l_450[0][2]) != l_714) < g_219)) <= 0x2364L), 0x92B278FF3806B20ELL))), 0x31F8L)) >= g_19)) || 0L), p_41)), p_41));
                }
                else
                { 
                    const union U2 *l_717[4];
                    const union U2 **l_716 = &l_717[2];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_717[i] = &l_492;
                    (*l_716) = &l_492;
                }
            }
        }
        else
        { 
            int32_t l_720 = 0x1AB3BE6CL;
            uint32_t l_761 = 0x466BECA7L;
            int32_t ***l_776 = &l_396;
            int32_t ****l_775[2];
            int32_t *****l_774 = &l_775[0];
            struct S1 l_807 = {60};
            uint64_t l_842 = 18446744073709551614UL;
            int32_t l_855 = 0xC5DB8EFCL;
            uint8_t l_861 = 1UL;
            uint32_t l_901 = 0x8E270F21L;
            int8_t l_919 = 1L;
            int8_t **l_935 = &l_409;
            uint16_t l_939[6] = {65535UL,0x640DL,0x640DL,65535UL,0x640DL,0x640DL};
            int32_t l_958 = 8L;
            int i;
            for (i = 0; i < 2; i++)
                l_775[i] = &l_776;
            for (g_157 = 0; (g_157 <= (-1)); g_157--)
            { 
                uint8_t *l_725 = &g_12;
                uint8_t **l_724 = &l_725;
                int32_t l_726[6][4][5] = {{{0L,0xD320496BL,7L,0x058417FBL,(-3L)},{0x2CA7BB5CL,0xF532E0F0L,4L,(-4L),0xABCB84DAL},{0L,0x2D22643DL,5L,(-7L),0x228DBDD4L},{7L,4L,0x2CA7BB5CL,(-3L),0x2D22643DL}},{{0xD320496BL,1L,0x94F33619L,0L,0x722BDCB5L},{7L,(-7L),0x80FD5307L,0x722BDCB5L,1L},{1L,(-7L),0x8C7A9767L,0x5685B1D8L,0x642F7971L},{0x5685B1D8L,1L,0x722BDCB5L,0xBE9D997DL,0xBE9D997DL}},{{(-3L),4L,(-3L),2L,0x27AD71BFL},{0x0D155E03L,0x2D22643DL,0xF532E0F0L,1L,0x80FD5307L},{0x94F33619L,0xF532E0F0L,0x642F7971L,0xA88DD95AL,7L},{2L,0xD320496BL,0xF532E0F0L,0x80FD5307L,0x94F33619L}},{{0L,0xF0955AC6L,(-3L),0x0D155E03L,0xEF940EDEL},{0x27C54163L,0x0361609DL,0x722BDCB5L,0x40FBAD00L,2L},{1L,7L,0x8C7A9767L,0xD8808551L,0xC169D533L},{(-1L),5L,0x80FD5307L,0xD8808551L,0x058417FBL}},{{0xCD1910A0L,0xC169D533L,0x94F33619L,0x40FBAD00L,(-7L)},{0xF0955AC6L,0x0D155E03L,0x2CA7BB5CL,0x0D155E03L,0xF0955AC6L},{0x722BDCB5L,0x40FBAD00L,0x94F33619L,0xC169D533L,0xCD1910A0L},{0x8C7A9767L,0x4D4107DAL,7L,0x27C54163L,0x5685B1D8L}},{{7L,0xBE9D997DL,0x80FD5307L,0x40FBAD00L,0xCD1910A0L},{(-1L),0x27C54163L,0x27AD71BFL,1L,(-1L)},{0xCD1910A0L,0x0361609DL,0xBE9D997DL,0x4D4107DAL,0x642F7971L},{0x058417FBL,5L,0x642F7971L,(-1L),(-4L)}}};
                struct S1 ****l_751 = &g_744;
                uint8_t l_753 = 8UL;
                uint8_t ***l_767 = &g_765;
                int i, j, k;
                if (l_720)
                    break;
            }
            if ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((&g_230 == ((*l_774) = (void*)0)) | (g_340 , (safe_rshift_func_int16_t_s_u((-3L), ((safe_lshift_func_int16_t_s_u((l_781 | (safe_sub_func_uint64_t_u_u(6UL, ((((0xA4996BF9L ^ p_39.f0) , 1L) >= 0x9CC58F1DL) >= g_304)))), 8)) && g_567))))), g_574[0])) , 248UL) | 1L), (***l_776))), 3)))
            { 
                int8_t l_798 = 8L;
                int32_t l_799 = 0xE52BA5B1L;
                struct S1 l_808 = {27};
                int32_t ***l_827 = (void*)0;
                int32_t l_853 = 0xE8CA5863L;
                int32_t l_854 = 3L;
                int32_t l_858 = 0x1F8522AEL;
                int32_t l_860[1][2];
                int8_t l_864[4][3] = {{0xF7L,0xC3L,0xC3L},{(-8L),0x0FL,0x0FL},{0xF7L,0xC3L,0xC3L},{(-8L),0x0FL,0x0FL}};
                uint8_t **l_914 = &l_723;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_860[i][j] = 0xD1DEDB03L;
                }
                if ((((safe_rshift_func_uint16_t_u_s(((l_555 , p_39.f0) | ((safe_sub_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((**l_396), (((*l_480) != (((((g_792 = &l_168) == &l_205[0][0]) & p_39.f0) >= 0L) | p_41)) , 0x183B74BAL))) , g_305) != (*g_83)), p_39.f0)) , p_41)), g_65[3])) , (void*)0) != &g_457))
                { 
                    int32_t l_793 = 0xB2AD4C22L;
                    int32_t l_794 = 0x453DB3F3L;
                    int32_t l_800 = 4L;
                    int32_t *l_805[4][2] = {{&l_168,&l_168},{&l_168,&l_168},{&l_168,&l_168},{&l_168,&l_168}};
                    int i, j;
                    g_802++;
                    if (g_88.f0)
                        goto lbl_806;
                    (*g_792) = (*g_83);
lbl_806:
                    l_805[0][0] = &l_799;
                    l_808 = l_807;
                    (***l_776) |= (*l_224);
                }
                else
                { 
                    int16_t *l_811 = &l_332;
                    struct S1 l_812 = {20};
                    uint8_t l_815 = 0x1EL;
                    uint32_t l_821 = 1UL;
                    int32_t ** const *l_824 = (void*)0;
                    (*l_394) = 0L;
                    (*g_792) ^= (safe_rshift_func_uint8_t_u_s((((*l_811) = (l_555 , p_41)) | ((1UL < ((*l_224) <= (l_812 , ((*l_480) = (safe_div_func_int8_t_s_s(((l_799 |= ((**l_396) = ((*l_480) > p_39.f0))) == 0x3063315AL), l_815)))))) ^ l_808.f0)), l_816));
                    (*l_224) = (safe_rshift_func_int8_t_s_s(l_808.f0, (((((*g_230) == &l_503[1][0]) & ((safe_mul_func_uint8_t_u_u(l_821, (l_812.f0 || (((safe_sub_func_int64_t_s_s((p_41 || ((void*)0 == l_824)), p_41)) , p_41) , 0x0EL)))) , (-8L))) || p_39.f0) , (*l_224))));
                }
                if ((((*g_230) != (*g_230)) < (&g_231 == (void*)0)))
                { 
                    (****l_495) = (*p_40);
                    return (***g_744);
                }
                else
                { 
                    int32_t ** const *l_829 = (void*)0;
                    int32_t ** const **l_828 = &l_829;
                    const int32_t l_838 = (-9L);
                    uint32_t *l_840 = (void*)0;
                    uint32_t ** const l_839 = &l_840;
                    int32_t l_841 = 0x5B62D307L;
                    l_841 |= (((l_799 = (((((l_827 = g_825) != &g_826) & 0xA6E4B497B0D8294ALL) >= 0xE0CF3C51L) & (((((((((l_828 = l_828) == ((safe_lshift_func_int8_t_s_u(p_41, (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((65529UL >= 0x29B2L) , l_799) || (**g_826)), l_808.f0)), l_838)), (***g_825))))) , &g_230)) , (void*)0) != l_839) == (*l_224)) > 255UL) & (-1L)) > 0UL) ^ p_41))) , (***l_827)) < g_106);
                    (***l_391) = (*p_40);
                    if (l_479.f0)
                        goto lbl_920;
                    l_842--;
                }
                for (l_204 = 0; (l_204 < 3); l_204 = safe_add_func_uint32_t_u_u(l_204, 1))
                { 
                    uint64_t *l_847 = (void*)0;
                    uint64_t *l_848 = (void*)0;
                    uint64_t *l_849[3][2][6] = {{{&g_88.f3,&l_532,&g_88.f3,&l_532,&g_88.f3,&l_532},{&g_88.f3,&l_532,&g_88.f3,&l_532,&g_88.f3,&l_532}},{{&g_88.f3,&l_532,&g_88.f3,&l_532,&g_88.f3,&l_532},{&g_88.f3,&l_532,&g_88.f3,&l_532,&g_88.f3,&l_532}},{{&g_88.f3,&l_532,&g_88.f3,&l_532,&g_88.f3,&l_532},{&g_88.f3,&l_532,&g_88.f3,&l_532,&g_88.f3,&l_532}}};
                    int i, j, k;
                    if (p_41)
                        break;
                    (*l_480) &= (2L != (g_556--));
                    return (*p_40);
                }
                if (((void*)0 == (**l_495)))
                { 
                    int32_t l_852[4] = {7L,7L,7L,7L};
                    int i;
                    (*g_826) = (*g_826);
                    l_861++;
                }
                else
                { 
                    uint32_t l_865 = 0xCACB0F53L;
                    int32_t l_868[1];
                    int64_t *l_887 = &l_593;
                    int32_t l_900 = 0x316EE01BL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_868[i] = (-6L);
                    l_865++;
                    ++g_869;
                    (*g_746) = ((((safe_lshift_func_int16_t_s_s((((+(~(((*l_224) ^= ((((safe_mul_func_int16_t_s_s(l_868[0], ((***g_825) && ((((*g_83) = ((p_41 , ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((***l_827), 1)), (safe_lshift_func_int16_t_s_u((((((*l_480) = (!(safe_mul_func_int16_t_s_s((((*l_887) = ((*l_423) = (***l_776))) < (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((*l_480) ^ (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((g_653[2][1] > g_567), g_100)) && 0xA2L), (-1L))), l_868[0]))), l_868[0])), l_900)), 0x20L))), g_654)))) <= p_39.f0) == (***l_827)) & (**l_396)), 10)))) , 1UL)) ^ p_39.f0)) , p_39.f0) & 3UL)))) != p_39.f0) | p_41) < p_41)) <= l_868[0]))) , p_39.f0) && (*l_224)), 10)) ^ l_901) <= g_902) , (*p_40));
                }
                if ((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_41, (~(***l_827)))), (***l_827))))
                { 
                    return (*p_42);
                }
                else
                { 
                    (*p_40) = (**g_745);
lbl_920:
                    (***g_825) = (((0UL ^ (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_424) = (0xFB2FL >= (*l_224))), 0)), 5))) != ((safe_sub_func_uint32_t_u_u(((&g_766 != ((**g_620) , l_914)) == (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_41, 6UL)), l_919))), (***l_827))) , (*l_394))) < p_41);
                    (*g_792) = p_41;
                    return (*p_42);
                }
            }
            else
            { 
                uint64_t *l_933 = (void*)0;
                int32_t l_934 = 0xCE1746E6L;
                int32_t l_938 = 2L;
                struct S1 l_994 = {56};
                (**g_825) = ((((((((safe_mul_func_int8_t_s_s(1L, 0xBCL)) , ((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(p_41, ((safe_mul_func_int16_t_s_s(((l_938 = ((**l_935) = ((l_934 &= g_869) && ((&p_38 != (l_936 = l_935)) , 0L)))) && p_41), 8L)) , l_938))) & p_41), p_41)) >= p_39.f0), l_939[3])) || p_39.f0) ^ 1UL) , p_39.f0), p_39.f0)) , &g_340)) == &l_555) , g_340) , 0x2758C283L) | (*l_480)) & 0x2BL) , (void*)0);
                if ((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_int32_t_s_s(((g_135 , ((!(safe_lshift_func_uint8_t_u_s(0x0FL, 0))) == (251UL > (safe_lshift_func_uint8_t_u_u(0xF9L, (l_938 = 0xA5L)))))) > (safe_rshift_func_uint8_t_u_u(((+(safe_sub_func_uint16_t_u_u((p_41 <= ((safe_mod_func_int32_t_s_s((((((g_302[1] == (void*)0) > l_958) & (*l_224)) , l_934) | p_39.f0), p_39.f0)) | (*g_83))), 0x729EL))) <= (-5L)), p_41))), (*g_83))) <= (*g_83)), 0x061337906164FFBBLL)), g_653[1][0])))
                { 
                    (****l_495) = (*p_40);
                    (*g_745) = (**g_744);
                }
                else
                { 
                    return (*p_42);
                }
                if (((**l_396) = ((*l_224) && ((*g_621) , (*l_480)))))
                { 
                    uint8_t *** const l_963 = &g_765;
                    uint8_t *l_964 = &l_861;
                    int32_t l_979[1];
                    int32_t l_980[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_979[i] = 0x864545E9L;
                    for (i = 0; i < 1; i++)
                        l_980[i] = 0xFB3F6CF1L;
                    l_980[0] |= ((*l_480) &= ((safe_mod_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((((*l_409) = (l_963 != ((**g_745) , l_963))) > (++(*l_964))), (g_160[1][0][1] ^= (*l_394)))) <= ((safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((*l_424) = (safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(((l_979[0] = (((**l_389) , l_975) != (l_977[2] = &l_775[0]))) > 0xF607AD63L), g_88.f0)) > p_39.f0), 1L))), p_41)), p_39.f0)) != g_220)), 0x9C8362AF8C93AA7FLL)) > 3L));
                }
                else
                { 
                    uint16_t l_983 = 1UL;
                    (*g_83) = (safe_lshift_func_uint16_t_u_u((l_983 > ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((&p_38 != (void*)0), 10)), (safe_add_func_uint16_t_u_u((((**l_392) , (void*)0) != (void*)0), (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((((p_39.f0 && 0x927F4BFF058AF8F6LL) , l_983) >= p_41), l_938)), (-10L))))))) & p_41)), p_41));
                    (**g_825) = &l_934;
                    return l_994;
                }
                l_995[5][1][0]++;
                (**l_396) ^= (&g_157 != &l_593);
            }
            (**l_391) = &l_807;
        }
        (*l_224) = (safe_add_func_uint16_t_u_u((((*l_480) = ((safe_div_func_uint64_t_u_u((((l_1002 != &g_621) , ((safe_sub_func_int16_t_s_s(((l_1005[1][4] == (safe_rshift_func_int8_t_s_u((*l_480), (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(0x89L, (safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((((((+0xF511L) , ((l_1017 , &l_976) == &l_978[2])) > p_41) , (*g_765)) != (void*)0) & 0x76D7L), 0xA59B95989C5BC2C3LL)), p_39.f0)))), p_39.f0))))) , p_41), p_41)) == (*l_224))) == g_337), 18446744073709551615UL)) < 1UL)) , p_39.f0), 0L));
        l_1028 |= ((*l_480) = (((safe_add_func_uint32_t_u_u(((*g_230) == (void*)0), ((safe_add_func_int64_t_s_s(((*l_423) ^= (safe_lshift_func_uint16_t_u_u((~(safe_add_func_int64_t_s_s((g_19 & (((*l_424) = (((void*)0 != (*l_975)) >= ((*l_409) = p_41))) >= (g_206 == 1UL))), (-6L)))), p_41))), g_98)) >= 0x6C0C6D2FL))) , 0x04C6E05933FA1AD9LL) >= (*l_224)));
    }
    else
    { 
        uint8_t l_1032 = 0x49L;
        int32_t **l_1043 = (void*)0;
        int32_t l_1064 = 0xDBECD3E5L;
        int32_t l_1068 = 0L;
        int32_t l_1073 = 0x7A5B7303L;
        union U2 *l_1130[4][7][5] = {{{(void*)0,&g_340,&g_340,&g_340,&g_340},{(void*)0,&g_340,&g_340,(void*)0,&g_340},{&g_340,&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,&g_340},{&g_340,(void*)0,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,(void*)0},{(void*)0,&g_340,&g_340,&g_340,&g_340}},{{(void*)0,&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,&g_340},{(void*)0,&g_340,&g_340,(void*)0,&g_340},{(void*)0,&g_340,&g_340,&g_340,&g_340},{&g_340,(void*)0,&g_340,(void*)0,&g_340},{(void*)0,(void*)0,&g_340,&g_340,&g_340}},{{&g_340,&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,(void*)0},{&g_340,(void*)0,&g_340,&g_340,&g_340},{&g_340,(void*)0,&g_340,&g_340,&g_340},{(void*)0,&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,&g_340}},{{&g_340,&g_340,&g_340,&g_340,(void*)0},{&g_340,&g_340,&g_340,(void*)0,&g_340},{&g_340,&g_340,(void*)0,&g_340,(void*)0},{&g_340,&g_340,(void*)0,&g_340,&g_340},{&g_340,&g_340,(void*)0,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,&g_340},{&g_340,&g_340,&g_340,&g_340,(void*)0}}};
        struct S0 l_1133 = {0,0x9959A4C0L,-1,0xC9FDAEB6D5D739A6LL};
        int32_t ****l_1152 = &g_1063;
        const struct S1 *l_1211 = &g_380[4][1];
        int32_t l_1238 = (-2L);
        int32_t l_1241 = 0L;
        int32_t l_1242[2][7] = {{0xCFD00130L,0xCFD00130L,0xC627DEC8L,0xCFD00130L,0xCFD00130L,0xC627DEC8L,0xCFD00130L},{1L,1L,1L,1L,1L,1L,1L}};
        int64_t *l_1247 = &g_160[1][0][1];
        int8_t ****l_1320 = &g_302[1];
        int32_t l_1324 = 0xE6AC42F5L;
        int32_t *l_1358 = &l_205[0][2];
        int i, j, k;
lbl_1087:
        if ((l_1029 & p_41))
        { 
            int32_t **l_1042[1][5][1] = {{{&g_621},{&g_621},{&g_621},{&g_621},{&g_621}}};
            const int8_t ***l_1048 = &g_1045;
            uint64_t *l_1049 = (void*)0;
            uint64_t *l_1050 = &g_306;
            int32_t l_1051 = 0xD71C2B89L;
            int i, j, k;
            (*g_83) = ((((safe_sub_func_uint8_t_u_u(((((((l_1032 , (safe_mul_func_int8_t_s_s((((g_106 = (safe_div_func_int64_t_s_s((l_1032 > (((!((**l_936) = ((void*)0 != (*g_825)))) , p_41) != (l_1042[0][3][0] == (g_220 , l_1043)))), p_41))) <= 0x6EC3L) <= p_39.f0), 255UL))) && p_41) >= 4294967293UL) == p_39.f0) , (void*)0) == (void*)0), p_41)) || p_41) <= (*l_480)) | l_1044);
            (*l_1048) = (l_1047[0][3] = g_1045);
            l_1051 = (p_39.f0 <= ((*l_1050) = 0x8C2DE79ED7816EFALL));
            for (g_567 = (-15); (g_567 >= 19); g_567++)
            { 
                int16_t l_1056 = 8L;
                l_1051 |= (l_1056 ^= (safe_mul_func_uint16_t_u_u((((void*)0 == &g_615[0][0][1]) | p_41), p_39.f0)));
            }
        }
        else
        { 
            int32_t ***l_1062 = &l_1002;
            int32_t ****l_1061[7] = {&l_1062,&l_1062,&l_1062,&l_1062,&l_1062,&l_1062,&l_1062};
            int32_t l_1065 = 0x6898FAB5L;
            int32_t l_1066 = 0x6FFD6C64L;
            int32_t l_1067 = 0x155E46F2L;
            int32_t l_1069 = 3L;
            int32_t l_1070 = 0x0F0A059EL;
            int32_t l_1071 = 0L;
            int32_t l_1072 = 0x9AE234A4L;
            int i;
            (*l_480) &= (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(g_211[2][1], g_137)), 0x0B6EB6BE5B3200CALL));
            g_1063 = &g_620;
            (*g_826) = (void*)0;
            (*l_224) = 0x0A7B5105L;
            g_1074--;
        }
        (*g_826) = &l_1064;
        if ((((safe_add_func_uint8_t_u_u(p_41, l_1064)) | (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((!((((*g_621) , (((*g_621) = (((safe_unary_minus_func_uint64_t_u((((p_41 && (l_1073 ^= l_1068)) && ((0L < (safe_lshift_func_int16_t_s_s(g_105, 6))) || p_39.f0)) == p_41))) == 0x6516DB57L) >= p_41)) , (void*)0)) == (void*)0) <= p_41)), l_1068)), l_1064))) | g_19))
        { 
            if (l_1068)
                goto lbl_1087;
        }
        else
        { 
            int8_t * const *l_1098 = &l_937;
            int8_t * const ** const l_1097 = &l_1098;
            int32_t l_1100 = 0x5BF792DCL;
            int32_t l_1119 = 0L;
            struct S1 *l_1135 = &l_167[0];
            uint16_t *l_1140 = &l_174;
            uint8_t l_1196 = 1UL;
            for (g_304 = 0; (g_304 <= 5); g_304 += 1)
            { 
                int8_t ***l_1095 = &l_360[3];
                int8_t ****l_1096 = &g_302[1];
                struct S1 l_1099 = {17};
                int16_t *l_1116[2];
                int32_t l_1118 = 0xA5DC99F0L;
                int32_t l_1120 = 0L;
                uint64_t l_1125 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1116[i] = &g_105;
                if ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(0x32L, ((safe_div_func_int16_t_s_s((((((void*)0 == l_1094) && (g_65[g_304] , (-7L))) < ((((*l_1096) = l_1095) != l_1097) && p_39.f0)) && (*g_83)), l_1032)) < 0x6636AD2CF19F5216LL))) < p_39.f0), p_41)))
                { 
                    return l_1099;
                }
                else
                { 
                    uint64_t l_1101 = 18446744073709551615UL;
                    l_1101--;
                }
                (*g_792) = (+(((~((0xF1A4988B248EB3E6LL < ((safe_rshift_func_uint16_t_u_s((p_41 || l_1032), ((**l_389) , (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((g_655 = ((safe_sub_func_int64_t_s_s(l_1099.f0, p_39.f0)) & ((safe_rshift_func_uint16_t_u_s(((g_573 ^= p_41) != 1L), g_68)) && l_1100))), 0)) ^ l_1100) < p_39.f0), (*l_480)))))) && 0x16L)) , g_654)) , l_1117) <= l_1099.f0));
                if (p_39.f0)
                { 
                    uint32_t l_1121 = 0x743F1CF1L;
                    int32_t l_1124[5][6] = {{0x440B9846L,0x440B9846L,4L,0L,4L,0x440B9846L},{4L,1L,0L,0L,1L,4L},{0x440B9846L,4L,0L,4L,0x440B9846L,0x440B9846L},{0x3F71E268L,4L,4L,0x3F71E268L,1L,0x3F71E268L},{0x3F71E268L,1L,0x3F71E268L,4L,4L,0x3F71E268L}};
                    struct S1 l_1128 = {16};
                    uint8_t l_1129 = 0xB1L;
                    int i, j;
                    ++l_1121;
                    ++l_1125;
                    (*p_42) = l_1128;
                    l_1100 &= ((*g_792) &= l_1129);
                }
                else
                { 
                    union U2 **l_1132 = &l_1130[1][5][4];
                    l_1130[1][5][4] = &g_340;
                    l_1073 = l_1131[2];
                    (*l_1132) = (void*)0;
                }
                if (p_39.f0)
                    continue;
                if ((*l_480))
                    break;
                for (g_305 = 4; (g_305 >= 1); g_305 -= 1)
                { 
                    if (p_41)
                        break;
                }
            }
            if (((l_1133 , g_1134) & ((&p_39 != l_1135) && (((safe_add_func_int8_t_s_s(0x6EL, (((((*l_1140) = (safe_rshift_func_int16_t_s_u(l_1133.f0, 4))) | (safe_rshift_func_uint8_t_u_s((g_1143 >= g_337), 1))) || 0xDB0A6327L) | p_41))) || l_1119) <= g_1144))))
            { 
                int16_t *l_1149 = &g_654;
                int32_t l_1154 = 4L;
                (*g_83) = (safe_mul_func_uint16_t_u_u(((&g_1045 != &g_1045) , ((((((l_1119 , (l_1154 |= ((safe_div_func_int16_t_s_s(((*l_1149) = 0L), (((safe_mul_func_int16_t_s_s(((((((*l_224) , (void*)0) == (g_1153 = l_1152)) & 0x5FL) , (void*)0) != (*l_1152)), p_39.f0)) & g_339) || p_39.f0))) , (-1L)))) | 0x569B17279765A6ECLL) ^ l_1100) , 0x3C538C172678E625LL) | p_41) ^ g_364)), 0UL));
            }
            else
            { 
                union U2 **l_1155 = &l_476;
                int16_t *l_1172 = &g_654;
                int16_t *l_1173 = &g_105;
                int32_t l_1194 = 6L;
                struct S1 l_1207 = {37};
                (*l_1155) = &g_340;
                if ((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((~(safe_mod_func_int32_t_s_s(((*g_792) = (-7L)), (safe_add_func_int16_t_s_s(((~4294967286UL) , 0x0D5FL), ((**l_1155) , (((safe_sub_func_int16_t_s_s((g_801 |= (p_41 >= ((p_41 || (safe_sub_func_int16_t_s_s(((*l_1173) |= ((*l_1172) = (safe_div_func_uint32_t_u_u(((*l_476) , p_39.f0), l_1119)))), 0xD3D6L))) & 5UL))), l_1133.f3)) > 0UL) == 0UL))))))), 0x4B07L)), g_380[4][1].f0)))
                { 
                    uint32_t *l_1178[5][3][4] = {{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}},{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}},{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}},{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}},{{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}}};
                    int32_t l_1195[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1195[i] = 0x2E5CD248L;
                    (*l_224) ^= (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((void*)0 == l_1178[2][0][0]) != (((**g_826) |= (safe_add_func_int64_t_s_s(g_106, g_305))) >= ((p_39.f0 && (safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u((l_1073 < ((((((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(p_41, l_1194)), 14)) != 0x8726441197255AFBLL) != l_1068) != 0x173C9E797C965ABCLL) >= p_39.f0) > 0xF17174923C2032DDLL)), g_12)))), 0x0DCDL)), p_39.f0)), g_304))) & l_1195[2]))), l_1133.f2)), 9UL));
                    (*g_792) |= ((l_1206 = (((((((*l_1172) = l_1196) ^ (l_1195[2] ^ ((**l_936) = ((l_1194 = (safe_mod_func_uint16_t_u_u(0xF328L, (safe_sub_func_int64_t_s_s(((0x245F1529B9658865LL & (safe_unary_minus_func_uint32_t_u((safe_div_func_uint64_t_u_u((p_41 , ((((*l_476) , (&l_1194 == &l_1195[2])) < p_41) ^ g_12)), 0x4B9AA86037302A84LL))))) | g_574[1]), 0x11A3DBDFE742380DLL))))) < (**g_1045))))) | p_39.f0) && g_902) & 4294967295UL) | 0xB1F6L)) || l_1119);
                    return (*p_42);
                }
                else
                { 
                    return l_1207;
                }
            }
        }
        for (g_1134 = 0; (g_1134 >= (-17)); g_1134 = safe_sub_func_int8_t_s_s(g_1134, 8))
        { 
            const int32_t l_1210 = 5L;
            struct S1 l_1222 = {46};
            const union U2 l_1231 = {0};
            int32_t l_1239 = (-1L);
            const int64_t *l_1246 = &g_157;
            const int32_t ** const *l_1268 = &g_231;
            const int32_t ** const **l_1267 = &l_1268;
            const int32_t ** const ***l_1266 = &l_1267;
            const int16_t l_1290 = (-8L);
            int32_t ** const l_1316[7] = {&g_621,&g_621,&g_621,&g_621,&g_621,&g_621,&g_621};
            int8_t ****l_1322 = (void*)0;
            int8_t l_1340 = 1L;
            int32_t l_1368[5][6] = {{0xF21B9FD9L,0xEC4BD4C2L,4L,0xEC4BD4C2L,0xF21B9FD9L,4L},{0xF21B9FD9L,1L,0xEC4BD4C2L,0x13005DF6L,0xA716F1C5L,0xA716F1C5L},{1L,(-1L),(-1L),1L,4L,0xA716F1C5L},{0x20F3AAA7L,0xA716F1C5L,0xEC4BD4C2L,4L,0x13005DF6L,4L},{4L,(-1L),4L,9L,0x13005DF6L,0xF21B9FD9L}};
            const int8_t l_1370 = 5L;
            int16_t *l_1371 = (void*)0;
            int16_t *l_1372 = (void*)0;
            int16_t *l_1373 = (void*)0;
            int16_t *l_1374 = &g_615[0][0][0];
            int i, j;
            if ((p_41 <= 5UL))
            { 
                struct S1 l_1214[7][1][3] = {{{{50},{50},{50}}},{{{56},{56},{56}}},{{{50},{50},{50}}},{{{56},{56},{56}}},{{{50},{50},{50}}},{{{56},{56},{56}}},{{{50},{50},{50}}}};
                int i, j, k;
                if ((l_1210 & g_88.f1))
                { 
                    return (*p_42);
                }
                else
                { 
                    const struct S1 **l_1212 = (void*)0;
                    const struct S1 **l_1213 = &l_1211;
                    if ((*g_83))
                        break;
                    (*l_1213) = l_1211;
                    (*g_83) = p_39.f0;
                    l_1214[2][0][2] = (*p_40);
                    (***g_825) = (2UL && (-7L));
                }
            }
            else
            { 
                const struct S0 *l_1216[2][3][4];
                const struct S0 **l_1215 = &l_1216[1][0][1];
                int8_t ** const *l_1221 = &l_936;
                int32_t l_1232 = 0x232BAFFBL;
                int32_t l_1240[3];
                uint8_t ** const *l_1251 = &g_765;
                struct S1 ***l_1252 = &g_745;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1216[i][j][k] = (void*)0;
                    }
                }
                for (i = 0; i < 3; i++)
                    l_1240[i] = 0x74E6754FL;
                (*l_1215) = &l_1017;
                if ((0xC13CDF088356F42BLL || (!(((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(5UL)), p_39.f0)) , (l_1210 >= ((((**l_389) , l_1221) == (void*)0) >= p_41))) & 0x0EL))))
                { 
                    return l_1222;
                }
                else
                { 
                    int64_t l_1223 = 0x6419D88B288003C2LL;
                    uint32_t l_1224[5][6][6] = {{{0xF1ABA49AL,0x480614A9L,0UL,0UL,0UL,0x44E96B4AL},{0x2977E0FCL,0xBF7415B7L,0x53B9F3A5L,1UL,0xE99FE9CDL,0xEA975AD6L},{0UL,5UL,0x2977E0FCL,0x1A5A9EC2L,3UL,1UL},{18446744073709551610UL,1UL,0x4EED256CL,0xBF7415B7L,18446744073709551613UL,1UL},{0x01CC9C8CL,0xEFD362ECL,0x1839BAA8L,18446744073709551611UL,0xF1ABA49AL,18446744073709551613UL},{0x63B099A7L,1UL,18446744073709551615UL,1UL,1UL,0xD47399BFL}},{{0x58D6470CL,0x65CB98B0L,0x7BCE061DL,0xDFDCBD9EL,0x67ECD2E2L,4UL},{18446744073709551615UL,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,0UL,0x4E3ED2F7L},{0xD47399BFL,0x63B099A7L,0xE99FE9CDL,0xF1ABA49AL,0xEE9D26BEL,0x01CC9C8CL},{1UL,9UL,18446744073709551610UL,0UL,18446744073709551615UL,18446744073709551611UL},{6UL,0x53B9F3A5L,5UL,5UL,0x53B9F3A5L,6UL},{0x4EED256CL,0x7BCE061DL,18446744073709551615UL,0x3507F99BL,0x1839BAA8L,0UL}},{{18446744073709551615UL,3UL,0x44E96B4AL,0xFD0B5084L,18446744073709551615UL,1UL},{18446744073709551615UL,0xDFDCBD9EL,0xFD0B5084L,0x3507F99BL,7UL,0x0F44D7F8L},{0x4EED256CL,0x1839BAA8L,0xB1DEF3A3L,5UL,0xCB434560L,18446744073709551615UL},{6UL,0x01CC9C8CL,0x398FC8D0L,0UL,18446744073709551607UL,0x58D6470CL},{1UL,1UL,0xF9F81C2EL,0xF1ABA49AL,1UL,0x65CB98B0L},{0xD47399BFL,0UL,8UL,18446744073709551615UL,0UL,18446744073709551608UL}},{{18446744073709551615UL,0x516A52DBL,0UL,0xDFDCBD9EL,0x65CB98B0L,0xF9F81C2EL},{0x58D6470CL,0xEE9D26BEL,0xD47399BFL,1UL,4UL,0xFD0B5084L},{0x63B099A7L,7UL,18446744073709551610UL,18446744073709551611UL,1UL,0x5216FC85L},{0x01CC9C8CL,0xFD0B5084L,0xEFD362ECL,0xBF7415B7L,0x3E6A8A72L,0UL},{18446744073709551610UL,0xD47399BFL,18446744073709551614UL,0x1A5A9EC2L,0xB1DEF3A3L,0UL},{0UL,0x3E6A8A72L,4UL,1UL,18446744073709551606UL,7UL}},{{0x2977E0FCL,0UL,0x3507F99BL,0UL,0x2977E0FCL,0x1D885478L},{0xF1ABA49AL,18446744073709551608UL,0xBF7415B7L,1UL,3UL,0x53B9F3A5L},{18446744073709551615UL,0x3507F99BL,0xEE9D26BEL,18446744073709551608UL,0x1A5A9EC2L,0x53B9F3A5L},{0xCB434560L,1UL,0xBF7415B7L,0x35F011C9L,0UL,0x1D885478L},{0x1A5A9EC2L,6UL,0x01CC9C8CL,0UL,18446744073709551611UL,0UL},{18446744073709551610UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0UL}}};
                    int32_t l_1235 = 0x70C26177L;
                    int32_t l_1236[7][1][4] = {{{0xBD17F47BL,0xAD4E7473L,0xBD17F47BL,0xAD4E7473L}},{{0xBD17F47BL,0xAD4E7473L,0xBD17F47BL,0xAD4E7473L}},{{0xBD17F47BL,0xAD4E7473L,0xBD17F47BL,0xAD4E7473L}},{{0xBD17F47BL,0xAD4E7473L,0xBD17F47BL,0xAD4E7473L}},{{0xBD17F47BL,0xAD4E7473L,0xBD17F47BL,0xAD4E7473L}},{{0xBD17F47BL,0xAD4E7473L,0xBD17F47BL,0xAD4E7473L}},{{0xBD17F47BL,0xAD4E7473L,0xBD17F47BL,0xAD4E7473L}}};
                    int64_t **l_1248 = &l_1247;
                    struct S0 l_1249 = {4,0x8F20A51CL,-0,18446744073709551615UL};
                    int i, j, k;
                    l_1224[4][2][3]++;
                    (**g_826) |= ((l_1224[4][2][3] >= 0L) ^ (((safe_add_func_int64_t_s_s((0xDAA3L & (&l_723 == (void*)0)), (safe_mod_func_int64_t_s_s((l_1231 , (((l_1222.f0 > l_1232) , 0x90889EDD3BCD996ELL) , l_1224[4][2][3])), p_39.f0)))) & 0x7EE0L) || g_1233));
                    g_1234 = &l_1231;
                    --g_1243;
                    (*g_83) &= ((((l_1246 == ((*l_1248) = l_1247)) || g_801) , l_1249) , (((l_1250 != l_1251) <= (p_39.f0 == p_39.f0)) != l_1073));
                }
                (*l_480) |= ((void*)0 == l_1252);
            }
        }
    }
    return (**g_745);
}



static const int8_t * func_43(int64_t  p_44, uint32_t  p_45, int32_t  p_46, uint32_t  p_47)
{ 
    uint32_t l_79 = 0xC8609E00L;
    int32_t l_101 = 0xF67A21E2L;
    const struct S1 *l_111 = &g_33;
    for (p_44 = 0; (p_44 == 12); p_44 = safe_add_func_int64_t_s_s(p_44, 1))
    { 
        int32_t *l_52 = &g_53;
        uint32_t *l_64 = &g_65[2];
        uint32_t *l_67 = &g_68;
        uint32_t **l_66 = &l_67;
        int8_t * const l_73[3] = {&g_19,&g_19,&g_19};
        int32_t l_102[6][3][6] = {{{0x1C1AAD5EL,0xE7A76403L,6L,0L,6L,6L},{0xA5642BEDL,6L,6L,0xA5642BEDL,0xE7A76403L,0x72E8F988L},{(-1L),(-9L),6L,0xA5642BEDL,0x72E8F988L,0x95200CC9L}},{{0xA5642BEDL,0x72E8F988L,0x95200CC9L,0L,0x72E8F988L,(-9L)},{0x1C1AAD5EL,(-9L),0xE7A76403L,(-1L),0xE7A76403L,(-9L)},{0xD4AD0BC0L,6L,0x95200CC9L,0xC6B4E22DL,6L,0x95200CC9L}},{{0xD4AD0BC0L,0xE7A76403L,6L,(-1L),0x3197C824L,0x72E8F988L},{0x1C1AAD5EL,0xE7A76403L,6L,0L,6L,6L},{0xA5642BEDL,6L,6L,0xA5642BEDL,0xE7A76403L,0x72E8F988L}},{{(-1L),(-9L),6L,0xA5642BEDL,0x72E8F988L,0x95200CC9L},{0xA5642BEDL,0x72E8F988L,0x95200CC9L,0L,0x72E8F988L,(-9L)},{0x1C1AAD5EL,(-9L),0xE7A76403L,(-1L),0xE7A76403L,(-9L)}},{{0xD4AD0BC0L,6L,0x95200CC9L,0xC6B4E22DL,6L,0x95200CC9L},{0xD4AD0BC0L,0xE7A76403L,6L,(-1L),0x3197C824L,0x72E8F988L},{0x1C1AAD5EL,0xE7A76403L,6L,0L,6L,6L}},{{0xA5642BEDL,6L,6L,0xA5642BEDL,0xE7A76403L,0x72E8F988L},{(-1L),(-9L),6L,0xA5642BEDL,0x72E8F988L,0x95200CC9L},{0xA5642BEDL,0x72E8F988L,0x95200CC9L,0L,0x72E8F988L,(-9L)}}};
        int32_t **l_113 = &g_83;
        int i, j, k;
        (*l_52) = 0xC5A74D4BL;
        if (((((safe_unary_minus_func_int16_t_s(((safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((((*l_64) = (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((p_47 , p_47), (~0xF890L))), 4294967295UL))) > ((((*l_66) = l_64) != (void*)0) == (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((void*)0 != l_73[1]) ^ p_44), (*l_52))), p_47)))), (*l_52))) != p_44), g_33.f0)) , 0x8FE2L))) , g_33) , g_33.f0) >= g_33.f0))
        { 
            int32_t *l_74 = &g_53;
            int32_t *l_75 = &g_53;
            int32_t *l_76 = &g_53;
            int32_t *l_77 = &g_53;
            int32_t *l_78[3];
            int32_t **l_82[6][3][1] = {{{&l_74},{&l_74},{&l_77}},{{&l_77},{&l_74},{&l_74}},{{&l_75},{&l_74},{&l_75}},{{&l_74},{&l_74},{&l_77}},{{&l_77},{&l_74},{&l_74}},{{&l_75},{&l_74},{&l_75}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_78[i] = &g_53;
            ++l_79;
            (*l_74) = (-1L);
            l_52 = (g_83 = (void*)0);
        }
        else
        { 
            const int8_t *l_84 = (void*)0;
            return l_84;
        }
        for (g_53 = 1; (g_53 >= (-11)); --g_53)
        { 
            int64_t l_87 = 0x84B879C93506F8A1LL;
            int32_t *l_97 = &g_98;
            int32_t *l_99[2];
            int64_t l_103[7] = {(-6L),(-5L),(-5L),(-6L),(-5L),(-5L),(-6L)};
            int i;
            for (i = 0; i < 2; i++)
                l_99[i] = (void*)0;
            g_100 = ((((((l_87 , (g_88 , 0x3DD60280L)) , g_12) < ((((safe_mul_func_int8_t_s_s((((p_46 , g_33) , (((*l_97) &= (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(0x5315FA72L, p_47)), l_87)), p_47))) == 6UL)) >= 255UL), 0x9FL)) <= l_79) , 1L) && g_88.f1)) ^ 0xD42F466FL) == l_79) , 3L);
            for (p_45 = 0; p_45 < 2; p_45 += 1)
            {
                l_99[p_45] = &g_53;
            }
            ++g_106;
            for (l_101 = 7; (l_101 >= (-30)); l_101 = safe_sub_func_uint8_t_u_u(l_101, 6))
            { 
                const struct S1 **l_112[7][5] = {{(void*)0,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111}};
                int i, j;
                l_111 = l_111;
                l_102[5][2][2] = g_88.f3;
                (*l_97) ^= ((void*)0 == &l_99[0]);
                (*l_97) &= p_44;
            }
        }
        l_102[2][1][1] &= (-4L);
        (*l_113) = &g_98;
    }
    for (p_47 = (-15); (p_47 != 55); p_47 = safe_add_func_uint32_t_u_u(p_47, 5))
    { 
        if (p_46)
            break;
        if ((*g_83))
            continue;
    }
    return &g_19;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_88.f3, "g_88.f3", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_160[i][j][k], "g_160[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_211[i][j], "g_211[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_380[i][j].f0, "g_380[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_574[i], "g_574[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_615[i][j][k], "g_615[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_616, "g_616", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_653[i][j], "g_653[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    transparent_crc(g_1143, "g_1143", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    transparent_crc(g_1369, "g_1369", print_hash_value);
    transparent_crc(g_1401, "g_1401", print_hash_value);
    transparent_crc(g_1406.f0, "g_1406.f0", print_hash_value);
    transparent_crc(g_1445, "g_1445", print_hash_value);
    transparent_crc(g_1480, "g_1480", print_hash_value);
    transparent_crc(g_1538, "g_1538", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1585[i], "g_1585[i]", print_hash_value);

    }
    transparent_crc(g_1586, "g_1586", print_hash_value);
    transparent_crc(g_1764, "g_1764", print_hash_value);
    transparent_crc(g_1899, "g_1899", print_hash_value);
    transparent_crc(g_1972, "g_1972", print_hash_value);
    transparent_crc(g_1999, "g_1999", print_hash_value);
    transparent_crc(g_2000, "g_2000", print_hash_value);
    transparent_crc(g_2001, "g_2001", print_hash_value);
    transparent_crc(g_2041, "g_2041", print_hash_value);
    transparent_crc(g_2147, "g_2147", print_hash_value);
    transparent_crc(g_2202, "g_2202", print_hash_value);
    transparent_crc(g_2284, "g_2284", print_hash_value);
    transparent_crc(g_2285, "g_2285", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
