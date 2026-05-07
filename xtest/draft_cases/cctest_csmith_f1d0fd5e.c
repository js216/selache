// SPDX-License-Identifier: MIT
// cctest_csmith_f1d0fd5e.c --- cctest case csmith_f1d0fd5e (csmith seed 4057005406)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1662418b */

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

// Options:   -s 4057005406 -o /tmp/csmith_gen_8_kzyug2/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const unsigned f0 : 29;
   unsigned f1 : 30;
   unsigned f2 : 8;
   unsigned f3 : 20;
   signed f4 : 19;
   unsigned f5 : 30;
   unsigned f6 : 4;
   const signed f7 : 9;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   signed f1 : 7;
   const uint64_t  f2;
   uint16_t  f3;
   const signed f4 : 2;
};

union U2 {
   int32_t  f0;
   int16_t  f1;
   const uint16_t  f2;
   int16_t  f3;
};

union U3 {
   uint64_t  f0;
};


static int32_t g_2 = 0x244D513CL;
static int32_t g_8 = 1L;
static union U3 g_33 = {0x46AA1DD5C0AECAA7LL};
static int32_t g_39 = 6L;
static int32_t * const *g_60 = (void*)0;
static uint8_t g_65 = 1UL;
static uint8_t g_66 = 1UL;
static int32_t g_69 = 0x7BF5F1E6L;
static int32_t g_77 = 0xC1E9AD3EL;
static uint16_t g_79 = 0xAADBL;
static uint64_t g_92 = 18446744073709551615UL;
static int32_t g_93 = 0x2BEBA847L;
static uint8_t g_94 = 246UL;
static int16_t g_115[1][3] = {{0xCCE5L,0xCCE5L,0xCCE5L}};
static union U1 g_167 = {4UL};
static int8_t g_183 = 0L;
static uint32_t g_203 = 4294967295UL;
static int64_t g_271 = (-9L);
static struct S0 g_293 = {13660,27445,8,253,165,22108,2,19};
static struct S0 g_295 = {7957,14383,12,236,57,14017,0,-5};
static int32_t *g_376 = (void*)0;
static int32_t *g_378 = &g_8;
static int16_t *g_380[2] = {&g_115[0][0],&g_115[0][0]};
static int16_t **g_379 = &g_380[1];
static union U2 * const g_384 = (void*)0;
static union U2 g_386 = {0xB819E399L};
static union U2 *g_385 = &g_386;
static const uint32_t g_393 = 4294967289UL;
static int8_t g_405 = 0L;
static union U1 *g_409 = &g_167;
static union U1 **g_408 = &g_409;
static int8_t g_413 = 1L;
static int32_t **g_425 = &g_376;
static int32_t ***g_424 = &g_425;
static uint32_t *g_437 = (void*)0;
static uint32_t **g_436 = &g_437;
static int32_t *g_438[2] = {&g_77,&g_77};
static uint8_t g_477[6][6] = {{3UL,3UL,3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL,3UL,3UL}};
static uint8_t g_489 = 1UL;
static int32_t g_511 = 0L;
static struct S0 g_522 = {11121,4902,12,969,-527,15776,1,-14};
static int32_t ****g_558[7][2] = {{&g_424,&g_424},{&g_424,&g_424},{&g_424,&g_424},{&g_424,&g_424},{&g_424,&g_424},{&g_424,&g_424},{&g_424,&g_424}};
static uint32_t g_622 = 0xAF556D87L;
static const int32_t g_635 = 0xF1F97515L;
static union U3 g_648 = {18446744073709551615UL};
static int32_t *****g_660 = &g_558[3][0];
static uint32_t g_700 = 0x3632B3CEL;
static const uint8_t g_736 = 253UL;
static uint32_t **g_817 = &g_437;



static uint32_t  func_1(void);
static int32_t * func_5(int32_t * p_6);
static const uint64_t  func_13(union U2  p_14, struct S0  p_15, int32_t * p_16, int32_t  p_17);
static union U2  func_18(struct S0  p_19, int32_t * p_20);
static struct S0  func_21(int32_t * p_22);
static int32_t * func_23(uint64_t  p_24);
static int64_t  func_27(int8_t  p_28, union U2  p_29, union U3  p_30, int32_t * p_31);
static int32_t * func_34(int32_t * p_35);




static uint32_t  func_1(void)
{ 
    int32_t *l_7 = &g_2;
    int16_t ***l_860 = &g_379;
    int16_t ****l_859 = &l_860;
    int32_t l_873 = 8L;
    for (g_2 = 0; (g_2 < 3); g_2++)
    { 
        int32_t **l_858 = &l_7;
        (*l_858) = ((*g_425) = func_5(l_7));
    }
    (*l_859) = &g_379;
    l_873 = (((((g_293 , ((0L | (1L >= ((safe_sub_func_int32_t_s_s(((*g_378) = (((safe_mul_func_uint16_t_u_u(65535UL, (!g_477[2][3]))) , 2UL) >= ((safe_sub_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((!l_873) > g_65), l_873)), l_873)) == g_293.f5) || g_489) , &g_413) != &g_183), l_873)) < g_295.f2))), l_873)) >= g_622))) < 0xD9DE9B1D4ACA6C6BLL)) & g_386.f3) >= 7UL) , 0xBA1BL) > g_386.f0);
    return g_293.f6;
}



static int32_t * func_5(int32_t * p_6)
{ 
    int32_t *l_11 = (void*)0;
    int32_t *l_523 = &g_8;
    int32_t l_781[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    union U1 *l_819 = (void*)0;
    union U2 l_823[4][6] = {{{0xDA240D3EL},{0x11808772L},{0x11808772L},{0xDA240D3EL},{0x803E8BB6L},{0xC038C6B4L}},{{-3L},{0x11808772L},{0x803E8BB6L},{-3L},{0x803E8BB6L},{0x11808772L}},{{0x26F893BAL},{0x11808772L},{0xC038C6B4L},{0x26F893BAL},{0x803E8BB6L},{0x803E8BB6L}},{{0xDA240D3EL},{0x11808772L},{0x11808772L},{0xDA240D3EL},{0x803E8BB6L},{0xC038C6B4L}}};
    int i, j;
    for (g_8 = 0; (g_8 <= (-23)); --g_8)
    { 
        int32_t **l_12[4];
        int8_t l_782 = (-1L);
        int32_t l_783[5][2] = {{0L,(-1L)},{4L,(-1L)},{(-1L),(-1L)},{4L,(-1L)},{0L,0L}};
        int32_t l_784 = 0xEE7B2053L;
        uint8_t l_785 = 4UL;
        uint32_t **l_821[4] = {&g_437,&g_437,&g_437,&g_437};
        int i, j;
        for (i = 0; i < 4; i++)
            l_12[i] = &l_11;
        p_6 = l_11;
    }
    return p_6;
}



static const uint64_t  func_13(union U2  p_14, struct S0  p_15, int32_t * p_16, int32_t  p_17)
{ 
    uint32_t l_528 = 0x8912F01AL;
    int32_t ****l_533 = &g_424;
    int32_t **l_537 = (void*)0;
    int32_t *** const l_536 = &l_537;
    int32_t *** const *l_535 = &l_536;
    int32_t *** const **l_534 = &l_535;
    uint64_t l_539 = 0x98685D49F1F12033LL;
    int32_t *l_540 = &g_69;
    int32_t l_567 = 0x01B47AB6L;
    union U1 *l_576[2][6][5] = {{{&g_167,(void*)0,&g_167,&g_167,(void*)0},{(void*)0,&g_167,(void*)0,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167,(void*)0},{(void*)0,&g_167,(void*)0,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167,(void*)0},{(void*)0,&g_167,(void*)0,&g_167,&g_167}},{{&g_167,(void*)0,&g_167,&g_167,(void*)0},{(void*)0,&g_167,(void*)0,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167,(void*)0},{(void*)0,&g_167,(void*)0,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167,(void*)0},{(void*)0,&g_167,(void*)0,&g_167,&g_167}}};
    int32_t l_614 = 0x129D2941L;
    int32_t l_616 = 0x4AAD560FL;
    int32_t l_617[3];
    int16_t l_633 = 0x488AL;
    const int32_t *l_634 = &g_635;
    int64_t l_709 = 0x8A90485A655DFA41LL;
    int8_t l_713 = 0xBEL;
    uint32_t l_726 = 0x2E30CC7BL;
    uint32_t l_766[4] = {8UL,8UL,8UL,8UL};
    const uint64_t *l_774 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_617[i] = 2L;
    return p_15.f3;
}



static union U2  func_18(struct S0  p_19, int32_t * p_20)
{ 
    int32_t *l_515[5] = {&g_39,&g_39,&g_39,&g_39,&g_39};
    uint32_t l_516 = 0x0F1F5BB7L;
    int8_t *l_520[2];
    union U2 l_521 = {0x5EA31668L};
    int i;
    for (i = 0; i < 2; i++)
        l_520[i] = &g_405;
    l_516++;
    g_293.f4 = (safe_unary_minus_func_int8_t_s((g_183 = (l_520[0] == &g_413))));
    return l_521;
}



static struct S0  func_21(int32_t * p_22)
{ 
    int32_t *l_513 = &g_93;
    int32_t **l_514 = &g_378;
    (*l_514) = (l_513 = ((*g_425) = func_23(g_8)));
    return g_295;
}



static int32_t * func_23(uint64_t  p_24)
{ 
    union U2 l_32 = {0x5E13CD4FL};
    int32_t *l_36 = &g_8;
    uint64_t l_248[2][3][2] = {{{18446744073709551609UL,18446744073709551609UL},{18446744073709551609UL,2UL},{1UL,5UL}},{{2UL,5UL},{1UL,2UL},{18446744073709551609UL,18446744073709551609UL}}};
    int64_t *l_272 = &g_271;
    int32_t l_276 = 0xAAC6DAB7L;
    int32_t *l_291 = (void*)0;
    union U3 l_327 = {0x657CE6F80BECAC80LL};
    int32_t **l_341 = &l_291;
    int32_t ***l_340[6][6][2] = {{{&l_341,(void*)0},{&l_341,&l_341},{(void*)0,(void*)0},{&l_341,(void*)0},{(void*)0,&l_341},{&l_341,&l_341}},{{&l_341,&l_341},{&l_341,&l_341},{&l_341,&l_341},{&l_341,&l_341},{(void*)0,(void*)0},{&l_341,(void*)0}},{{(void*)0,&l_341},{&l_341,(void*)0},{&l_341,(void*)0},{&l_341,(void*)0},{&l_341,&l_341},{(void*)0,(void*)0}},{{&l_341,(void*)0},{(void*)0,&l_341},{&l_341,&l_341},{&l_341,&l_341},{&l_341,&l_341},{&l_341,&l_341}},{{&l_341,&l_341},{(void*)0,(void*)0},{&l_341,(void*)0},{(void*)0,&l_341},{&l_341,&l_341},{&l_341,&l_341}},{{&l_341,&l_341},{&l_341,(void*)0},{&l_341,&l_341},{&l_341,&l_341},{&l_341,&l_341},{&l_341,&l_341}}};
    int32_t ****l_339[1][7][3] = {{{&l_340[3][4][1],&l_340[4][5][0],&l_340[3][4][1]},{&l_340[1][5][1],&l_340[0][5][1],&l_340[5][5][1]},{&l_340[0][5][1],&l_340[0][5][1],(void*)0},{(void*)0,&l_340[0][5][1],&l_340[0][5][1]},{(void*)0,&l_340[4][5][0],&l_340[0][5][1]},{(void*)0,&l_340[0][5][1],(void*)0},{&l_340[0][5][1],(void*)0,&l_340[0][5][1]}}};
    union U2 l_355[7] = {{0x5B3B32C0L},{0x5B3B32C0L},{0x5B3B32C0L},{0x5B3B32C0L},{0x5B3B32C0L},{0x5B3B32C0L},{0x5B3B32C0L}};
    const union U1 l_464 = {65526UL};
    union U1 **l_465 = &g_409;
    int64_t l_475 = 0xF3550DCA75E1FDB3LL;
    int8_t l_487 = 5L;
    uint32_t l_488 = 4294967287UL;
    int32_t l_507 = (-6L);
    uint8_t l_509 = 0x9CL;
    int8_t l_512 = 1L;
    int i, j, k;
    if ((4L < (safe_mod_func_int64_t_s_s(func_27(g_8, l_32, g_33, func_34(l_36)), 0x9FED0C5638F8F8D0LL))))
    { 
        uint8_t *l_260 = &g_66;
        int32_t l_263[1];
        int64_t *l_270[4][5] = {{&g_271,(void*)0,(void*)0,&g_271,(void*)0},{(void*)0,(void*)0,&g_271,(void*)0,(void*)0},{(void*)0,&g_271,(void*)0,(void*)0,&g_271},{(void*)0,&g_271,&g_271,(void*)0,&g_271}};
        uint8_t *l_273 = &g_94;
        int8_t *l_274 = &g_183;
        int32_t *l_275[2][2];
        uint16_t l_329 = 0x8A9CL;
        int32_t *****l_342 = &l_339[0][0][0];
        uint64_t l_351 = 18446744073709551615UL;
        union U3 l_359 = {0xC3727E377B8EFAE4LL};
        union U1 **l_410 = &g_409;
        int32_t ***l_423 = &l_341;
        int16_t l_460 = 0xD91BL;
        int64_t l_461 = 0L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_263[i] = 0x762EDC84L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_275[i][j] = &l_263[0];
        }
lbl_290:
        l_276 |= ((((safe_rshift_func_int8_t_s_u(((((((l_248[1][0][1] != (safe_add_func_int32_t_s_s((l_32.f0 = (safe_lshift_func_int8_t_s_s(((*l_274) |= (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((1L < (safe_rshift_func_uint8_t_u_u(0xC4L, (((*l_260)++) ^ ((*l_273) = ((0x0B63L < ((l_263[0] == (safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((p_24 < (((l_270[1][4] == l_272) >= (*l_36)) == (*l_36))) < g_271) < g_167.f0), (*l_36))) & (*l_36)), l_263[0]))) & 1UL)) < 0x910C0111C0ED8998LL)))))))), g_65))), 7))), g_203))) == g_8) && 65535UL) ^ p_24) < g_167.f0) < p_24), 4)) <= 0L) != 0x937999FF8B330E33LL) , g_183);
lbl_373:
        if ((*l_36))
        { 
            int64_t l_282 = 0xEA3714A4212A5521LL;
            struct S0 *l_294 = &g_295;
            int32_t *l_310 = &g_77;
            int32_t *l_325 = &g_93;
            int32_t l_328 = 0x9BFF0262L;
            int32_t l_330 = 3L;
            for (g_167.f0 = 0; (g_167.f0 > 14); g_167.f0 = safe_add_func_int8_t_s_s(g_167.f0, 9))
            { 
                int16_t *l_289 = &l_32.f3;
                struct S0 *l_292 = &g_293;
                int32_t l_300 = 0L;
                if ((0x96AE8CEFL || ((((safe_unary_minus_func_int8_t_s(p_24)) == p_24) < 0x8F50L) ^ ((safe_rshift_func_uint16_t_u_u((l_282 , ((safe_rshift_func_uint16_t_u_s(l_282, ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*l_289) = ((&g_79 == (void*)0) || 1L)), p_24)), 1L)) , g_93))) > g_115[0][0])), 0)) < g_2))))
                { 
                    if (g_33.f0)
                        goto lbl_290;
                    return l_291;
                }
                else
                { 
                    l_294 = l_292;
                    g_295.f4 |= (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(0x9D6B8E88L, l_300)), p_24));
                }
            }
            if (l_282)
            { 
                int32_t **l_301 = &l_291;
                (*l_301) = func_34(&l_276);
                for (l_32.f1 = 0; (l_32.f1 >= 0); l_32.f1 -= 1)
                { 
                    uint32_t l_311 = 0x4CAEB8A0L;
                    int i;
                    l_263[l_32.f1] = (safe_div_func_uint16_t_u_u((g_295 , (p_24 & ((safe_sub_func_int32_t_s_s(0x5FF4A1B5L, ((p_24 < (safe_lshift_func_int8_t_s_u(((g_167.f3 && (g_79 , (((safe_div_func_int8_t_s_s(((*l_274) = (((*l_36) , 0xD7L) || 0x15L)), p_24)) , (void*)0) == l_310))) == 7L), g_167.f0))) | p_24))) , 0x66FD27AE38119FD0LL))), l_311));
                }
            }
            else
            { 
                int32_t *l_314 = &g_93;
                int32_t **l_324 = (void*)0;
                (*l_314) = ((safe_mod_func_uint8_t_u_u(((l_310 != l_314) <= (g_293.f4 & 4UL)), (safe_sub_func_uint64_t_u_u(p_24, ((*l_272) = l_282))))) == ((*l_274) = ((safe_mod_func_int8_t_s_s((g_33 , p_24), g_295.f7)) && g_8)));
                l_330 |= (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(((~((l_325 = &l_263[0]) != &g_2)) & (!(((*l_314) = ((g_60 == (void*)0) , ((l_328 = (l_327 , (&g_115[0][0] == &g_115[0][1]))) & (*l_36)))) , l_329))), p_24)), 0x4FA0L));
            }
        }
        else
        { 
            int64_t l_333 = 0L;
            int32_t *l_338 = &g_69;
            for (g_79 = (-7); (g_79 < 60); g_79 = safe_add_func_int16_t_s_s(g_79, 9))
            { 
                l_333 |= 0L;
                for (l_32.f1 = 0; l_32.f1 < 1; l_32.f1 += 1)
                {
                    l_263[l_32.f1] = 0x2718014CL;
                }
                g_293.f4 ^= p_24;
                for (g_183 = 0; (g_183 >= 0); g_183 -= 1)
                { 
                    union U1 * const l_334 = &g_167;
                    union U1 *l_336 = &g_167;
                    union U1 **l_335 = &l_336;
                    int32_t **l_337 = &l_36;
                    (*l_335) = l_334;
                    (*l_337) = &l_276;
                    return &g_8;
                }
            }
            return l_338;
        }
        (*l_342) = l_339[0][3][0];
        if (p_24)
        { 
            uint8_t l_356 = 0x5BL;
            uint64_t *l_357 = &l_248[1][1][1];
            uint32_t *l_358 = &g_203;
            int32_t l_360 = 0x18FD80D0L;
            if ((((*l_260) = p_24) != (((*l_273) ^= 1UL) <= ((((!(g_167 , (safe_rshift_func_int8_t_s_u((!((*l_358) = ((safe_div_func_uint64_t_u_u(((*l_357) = (safe_rshift_func_uint16_t_u_s(l_351, (+(safe_rshift_func_int8_t_s_u((((l_355[4] , p_24) >= (((&g_65 != (void*)0) < l_356) || p_24)) , g_295.f4), g_293.f3)))))), g_79)) <= 0xBE17L))), 4)))) , l_359) , g_8) || 251UL))))
            { 
                int32_t *l_370[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_370[i] = &g_69;
                if ((l_360 = p_24))
                { 
                    g_293.f4 ^= ((safe_div_func_int16_t_s_s((!g_94), (g_65 & ((safe_rshift_func_int16_t_s_s(((&l_248[0][0][0] != &p_24) >= ((safe_mul_func_int16_t_s_s(0xD352L, (p_24 <= ((safe_add_func_int8_t_s_s((g_65 != p_24), 0x62L)) & g_2)))) == p_24)), 4)) != l_360)))) > g_183);
                    return l_370[0];
                }
                else
                { 
                    return &g_69;
                }
            }
            else
            { 
                uint8_t *l_374[4];
                int32_t *l_375 = &l_276;
                int i;
                for (i = 0; i < 4; i++)
                    l_374[i] = &g_66;
                for (g_79 = 0; (g_79 < 11); ++g_79)
                { 
                    int32_t *l_377 = &l_276;
                    if (g_295.f3)
                        goto lbl_373;
                    g_295.f4 ^= (((g_376 = func_34((((0UL > g_295.f1) , (&l_356 != l_374[2])) , l_375))) != l_377) ^ p_24);
                }
                return g_378;
            }
        }
        else
        { 
            int16_t ***l_381 = &g_379;
            const uint32_t *l_389 = &g_203;
            union U3 l_398 = {0x5B69B9C6CFBCF825LL};
            const union U2 l_418 = {0x62B9B9B5L};
            uint16_t *l_419 = &l_329;
            int32_t ** const *l_449[3];
            int32_t ** const **l_448 = &l_449[1];
            int16_t l_476 = 7L;
            int i;
            for (i = 0; i < 3; i++)
                l_449[i] = &g_425;
            (*l_381) = g_379;
            if ((*g_378))
            { 
                int32_t * const **l_383 = &g_60;
                int32_t * const ***l_382 = &l_383;
                const uint32_t **l_390 = &l_389;
                const uint32_t *l_392 = &g_393;
                const uint32_t **l_391 = &l_392;
                union U1 l_397[3] = {{0x79C7L},{0x79C7L},{0x79C7L}};
                int i;
                (*l_382) = &g_60;
                g_385 = g_384;
                if ((((safe_mul_func_int16_t_s_s(((&l_32 == (void*)0) ^ (((*l_391) = ((*l_390) = l_389)) == &g_393)), (((*l_260) = (+((safe_sub_func_int32_t_s_s((g_386.f3 || ((l_397[2] , l_398) , 0x6491130A6FC1D8D4LL)), (*g_378))) || 0x1CE3F2E6L))) || l_398.f0))) > 4UL) , (*g_378)))
                { 
                    int32_t l_401 = 0xBC5E4B87L;
                    int8_t *l_404 = &g_405;
                    int8_t *l_411 = (void*)0;
                    int8_t *l_412 = &g_413;
                    g_378 = func_34((g_376 = &g_8));
                    (*g_378) = (((*l_412) = (g_167 , ((safe_rshift_func_int8_t_s_s(((*l_274) ^= l_401), (safe_add_func_int8_t_s_s(((*l_404) = g_293.f6), 0UL)))) , (safe_rshift_func_uint8_t_u_u((((g_408 == l_410) <= 0x98E590C0L) && 4294967295UL), 5))))) && g_79);
                }
                else
                { 
                    int32_t ***l_422 = &l_341;
                    uint64_t *l_426 = &l_359.f0;
                    l_397[2].f1 = (((safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((*l_426) = ((l_418 , ((*l_274) = ((l_419 != l_419) && (safe_div_func_uint8_t_u_u((((l_423 = l_422) != (g_424 = l_422)) , g_94), p_24))))) != 0x89L)), p_24)), p_24)) ^ g_413) && 18446744073709551613UL);
                }
            }
            else
            { 
                int8_t l_446 = 0x3AL;
                int32_t l_453 = 9L;
                int32_t l_473 = 0xBCD45589L;
                int64_t l_474 = 0xA01F83A858D1DCFFLL;
lbl_456:
                if ((safe_lshift_func_int8_t_s_s(((*l_274) = g_93), 7)))
                { 
                    int32_t l_431 = 1L;
                    int32_t l_439[5][5] = {{(-6L),(-6L),0xC9CAB9FEL,(-6L),(-6L)},{0L,0xC9B85E78L,0L,0L,(-1L)},{(-6L),0x4B7FE146L,0x4B7FE146L,(-6L),0x4B7FE146L},{(-1L),0xC9B85E78L,(-1L),0xC9B85E78L,(-1L)},{0x4B7FE146L,(-6L),0x4B7FE146L,0x4B7FE146L,(-6L)}};
                    int i, j;
                    if (g_293.f4)
                        goto lbl_290;
                    l_439[1][4] = ((((*l_274) = ((safe_div_func_int64_t_s_s(l_431, (safe_sub_func_int32_t_s_s((7L == (safe_mod_func_uint64_t_u_u(p_24, (((void*)0 != g_436) || ((g_438[1] = &l_431) == &g_77))))), 0x21E3EDD6L)))) < p_24)) && g_33.f0) == p_24);
                }
                else
                { 
                    int32_t ** const ***l_450 = &l_448;
                    l_453 = (safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((((*g_385) , (safe_div_func_uint64_t_u_u((l_446 | (((p_24 != (((!(((*l_450) = l_448) == (*l_342))) | ((-1L) ^ (safe_add_func_int8_t_s_s(((((0x6451CC23A81BD4E0LL || 0xBAAEF25888DAD110LL) || 4UL) | g_8) , (-8L)), (-2L))))) != g_167.f3)) || g_77) && 4294967295UL)), l_446))) <= g_293.f2) == 0x0CF6L), p_24)) == p_24) <= p_24), g_33.f0));
                    return (*g_425);
                }
                if (l_351)
                    goto lbl_457;
lbl_457:
                for (g_386.f3 = 0; (g_386.f3 <= 9); g_386.f3++)
                { 
                    if (g_33.f0)
                        goto lbl_456;
                    return (***l_448);
                }
                l_461 = (~(p_24 | (!l_460)));
                for (l_351 = 0; (l_351 >= 32); l_351 = safe_add_func_uint16_t_u_u(l_351, 9))
                { 
                    uint32_t l_470 = 7UL;
                    (*l_341) = (void*)0;
                    g_39 = (l_474 = (((*l_419) ^= (((l_464 , (((void*)0 != l_465) > (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((g_393 | l_470), (safe_add_func_int64_t_s_s(p_24, p_24)))), l_473)))) > g_8) >= (-1L))) == p_24));
                }
                (***l_448) = &l_453;
            }
            ++g_477[0][2];
        }
    }
    else
    { 
        uint64_t *l_484 = (void*)0;
        uint64_t *l_485[2][7];
        const int32_t l_486[5] = {1L,1L,1L,1L,1L};
        int32_t *l_490[7][2][1];
        union U1 *l_508 = &g_167;
        int16_t ***l_510 = &g_379;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_485[i][j] = &l_248[1][0][1];
        }
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_490[i][j][k] = &g_386.f0;
            }
        }
        g_489 = ((l_488 = (safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((**g_408) , (g_33.f0 = (p_24 , (((*g_409) , ((l_327 , &l_339[0][1][1]) != &l_339[0][6][2])) && g_293.f3)))), 0x611DDC4836B82D73LL)) || l_486[2]), l_487))) == p_24);
        l_512 = ((&l_486[2] != ((*l_341) = func_34(func_34(l_490[6][0][0])))) > (safe_rshift_func_int16_t_s_s((g_511 ^= ((((safe_div_func_uint64_t_u_u(((!p_24) || (l_509 ^= (safe_div_func_int8_t_s_s(((!(safe_lshift_func_int8_t_s_s((((*l_465) = (*l_465)) != (((((((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u((p_24 >= p_24), g_2)) <= p_24) & l_507) >= g_293.f6), g_293.f7)), p_24)) ^ g_295.f5) , p_24) | p_24) != 18446744073709551613UL) != p_24) , l_508)), 2))) > p_24), p_24)))), p_24)) , l_510) == (void*)0) != g_295.f1)), 4)));
    }
    (**g_424) = func_34(&g_39);
    (*g_425) = (*l_341);
    return (*g_425);
}



static int64_t  func_27(int8_t  p_28, union U2  p_29, union U3  p_30, int32_t * p_31)
{ 
    uint16_t l_235 = 1UL;
    union U2 l_236 = {-3L};
    int32_t *l_237 = &g_39;
    const int32_t *l_244[5];
    const int32_t **l_245 = &l_244[4];
    int i;
    for (i = 0; i < 5; i++)
        l_244[i] = &g_8;
    (*l_237) ^= (((safe_rshift_func_uint8_t_u_u(((g_167.f3 , (*p_31)) ^ ((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((0x966B2488C446EDB0LL || (safe_div_func_uint16_t_u_u(g_33.f0, l_235))) , (l_236 , 4294967289UL)), (-5L))), l_235)), l_236.f2)), g_65)), g_115[0][0])) || l_236.f3)), 6)) != l_236.f3) && p_29.f2);
    (*l_245) = (((((p_29.f3 , (safe_add_func_uint16_t_u_u(p_29.f3, g_115[0][0]))) != (safe_mod_func_uint8_t_u_u(((p_29.f0 >= 0xE31CL) | (*l_237)), 1L))) < 0L) & 0L) , l_244[4]);
    return (*l_237);
}



static int32_t * func_34(int32_t * p_35)
{ 
    int32_t *l_38 = &g_2;
    int32_t **l_37 = &l_38;
    int32_t l_85 = 0x75ED1428L;
    uint16_t l_179[4];
    uint8_t *l_189 = &g_66;
    uint16_t l_220 = 0x0E72L;
    int i;
    for (i = 0; i < 4; i++)
        l_179[i] = 65532UL;
lbl_194:
    l_37 = &p_35;
    for (g_39 = 0; (g_39 < 6); g_39 = safe_add_func_int32_t_s_s(g_39, 7))
    { 
        int32_t * const **l_61 = &g_60;
        uint8_t *l_64 = &g_65;
        int32_t l_67 = 0xD0D794A3L;
        int32_t *l_68 = &g_69;
        union U3 l_80[4][3] = {{{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL}},{{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL}},{{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL}},{{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL},{0x8C8198303F43C5EALL}}};
        struct S0 l_126[7] = {{20435,28178,8,604,-174,22859,3,16},{20435,28178,8,604,-174,22859,3,16},{12856,10814,13,469,573,15344,1,20},{20435,28178,8,604,-174,22859,3,16},{20435,28178,8,604,-174,22859,3,16},{12856,10814,13,469,573,15344,1,20},{20435,28178,8,604,-174,22859,3,16}};
        int64_t l_172[7];
        uint16_t *l_174 = &g_167.f3;
        uint16_t **l_173 = &l_174;
        int64_t *l_175 = &l_172[2];
        int8_t *l_182 = &g_183;
        int16_t *l_188[2][4] = {{&g_115[0][0],&g_115[0][1],&g_115[0][1],&g_115[0][0]},{&g_115[0][1],&g_115[0][0],&g_115[0][1],&g_115[0][1]}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_172[i] = 0x30C378F7CF680477LL;
        (*l_68) = (l_67 = (g_66 = (safe_sub_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s(0x68L, (((&g_8 == ((safe_rshift_func_uint8_t_u_u(((*l_64) &= (safe_mod_func_uint32_t_u_u((0x04179B2C3978D11ELL ^ (safe_rshift_func_uint16_t_u_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0UL, ((safe_div_func_int64_t_s_s((((*l_61) = g_60) != &p_35), (safe_lshift_func_int16_t_s_s(0x1A70L, g_39)))) <= (**l_37)))), (**l_37))), g_8)) || 3UL) , (*l_38)), 7))), g_2))), 1)) , p_35)) ^ g_2) | 65532UL))) == 0L) , g_65), g_39))));
        for (g_66 = 0; (g_66 <= 1); g_66 = safe_add_func_int16_t_s_s(g_66, 9))
        { 
            int32_t *l_76 = &g_77;
            struct S0 l_78 = {6265,6354,11,802,-624,28893,1,-3};
            int16_t l_113 = 0xED9EL;
            int32_t *l_150 = (void*)0;
        }
        if ((*p_35))
            continue;
        if ((((*l_175) = (((*l_173) = &g_79) != &g_79)) > ((((((safe_mod_func_int8_t_s_s(0L, (~l_179[1]))) | (safe_rshift_func_int8_t_s_u(((*l_182) = (g_8 <= (*p_35))), ((safe_lshift_func_int16_t_s_u((g_115[0][0] |= ((safe_sub_func_int32_t_s_s((*p_35), 6L)) && g_39)), (*l_68))) | (*p_35))))) , l_189) == (void*)0) > 0xFB4E0D6FL) | g_167.f0)))
        { 
            int32_t l_202 = 6L;
            for (g_77 = 11; (g_77 < (-25)); g_77 = safe_sub_func_uint64_t_u_u(g_77, 1))
            { 
                int32_t *l_195 = (void*)0;
                int32_t *l_196 = &l_67;
                int32_t *l_197 = &l_67;
                int32_t *l_198 = &l_85;
                int32_t *l_199 = &l_67;
                int32_t *l_200 = &g_69;
                int32_t *l_201[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_201[i] = &g_93;
                for (g_65 = 0; (g_65 < 14); g_65 = safe_add_func_uint16_t_u_u(g_65, 6))
                { 
                    if (g_66)
                        goto lbl_194;
                    (*l_37) = p_35;
                }
                g_203++;
                (*l_199) &= l_202;
            }
            for (g_94 = 0; (g_94 != 60); g_94++)
            { 
                uint32_t l_208[6][6] = {{0xA764965EL,1UL,0x9FE9454BL,0x09DB5B34L,0xC9011E99L,4294967291UL},{0x09DB5B34L,0xC9011E99L,4294967291UL,0x3037A74CL,0x46E6FC7EL,1UL},{0xD5CC310FL,0xC9011E99L,4294967291UL,4294967291UL,0xC9011E99L,0xD5CC310FL},{0xC9011E99L,1UL,0x2CA7F906L,4294967291UL,0x3037A74CL,0x3BE87DA6L},{4294967291UL,0x2CA7F906L,0x46E6FC7EL,1UL,4294967293UL,0x09E53F83L},{4294967291UL,4294967291UL,1UL,4294967291UL,4294967291UL,0x3037A74CL}};
                int32_t ***l_218 = (void*)0;
                int i, j;
                ++l_208[2][2];
                (*l_68) = (safe_mod_func_int64_t_s_s((l_208[2][2] | g_115[0][0]), ((safe_sub_func_uint8_t_u_u(l_208[2][2], (safe_rshift_func_uint16_t_u_u(g_115[0][2], (((((safe_unary_minus_func_int8_t_s((l_218 == &g_60))) < (safe_unary_minus_func_int16_t_s((-1L)))) | (*p_35)) , l_68) == l_68))))) & g_167.f3)));
                if (l_220)
                    break;
            }
        }
        else
        { 
            return &g_93;
        }
        (*l_37) = p_35;
    }
    return &g_69;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_115[i][j], "g_115[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_167.f3, "g_167.f3", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f1, "g_293.f1", print_hash_value);
    transparent_crc(g_293.f2, "g_293.f2", print_hash_value);
    transparent_crc(g_293.f3, "g_293.f3", print_hash_value);
    transparent_crc(g_293.f4, "g_293.f4", print_hash_value);
    transparent_crc(g_293.f5, "g_293.f5", print_hash_value);
    transparent_crc(g_293.f6, "g_293.f6", print_hash_value);
    transparent_crc(g_293.f7, "g_293.f7", print_hash_value);
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_295.f1, "g_295.f1", print_hash_value);
    transparent_crc(g_295.f2, "g_295.f2", print_hash_value);
    transparent_crc(g_295.f3, "g_295.f3", print_hash_value);
    transparent_crc(g_295.f4, "g_295.f4", print_hash_value);
    transparent_crc(g_295.f5, "g_295.f5", print_hash_value);
    transparent_crc(g_295.f6, "g_295.f6", print_hash_value);
    transparent_crc(g_295.f7, "g_295.f7", print_hash_value);
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    transparent_crc(g_386.f2, "g_386.f2", print_hash_value);
    transparent_crc(g_386.f3, "g_386.f3", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_477[i][j], "g_477[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_522.f0, "g_522.f0", print_hash_value);
    transparent_crc(g_522.f1, "g_522.f1", print_hash_value);
    transparent_crc(g_522.f2, "g_522.f2", print_hash_value);
    transparent_crc(g_522.f3, "g_522.f3", print_hash_value);
    transparent_crc(g_522.f4, "g_522.f4", print_hash_value);
    transparent_crc(g_522.f5, "g_522.f5", print_hash_value);
    transparent_crc(g_522.f6, "g_522.f6", print_hash_value);
    transparent_crc(g_522.f7, "g_522.f7", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_648.f0, "g_648.f0", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
