// SPDX-License-Identifier: MIT
// cctest_csmith_f18fbbef.c --- cctest case csmith_f18fbbef (csmith seed 4052728815)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdd4b9b07 */

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

// Options:   -s 4052728815 -o /tmp/csmith_gen_5mcufm8f/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint32_t  f1;
   int64_t  f2;
   int32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   const uint8_t  f1;
   signed f2 : 18;
};

union U2 {
   int64_t  f0;
   uint16_t  f1;
   int32_t  f2;
   struct S0  f3;
   int8_t  f4;
};

union U3 {
   int32_t  f0;
   const uint32_t  f1;
   const uint32_t  f2;
};

union U4 {
   uint16_t  f0;
};


static int32_t g_2[7] = {0x6EC6E54EL,0x6EC6E54EL,0x6EC6E54EL,0x6EC6E54EL,0x6EC6E54EL,0x6EC6E54EL,0x6EC6E54EL};
static int32_t g_48 = 0x41AC573CL;
static union U3 g_55 = {0xA6B86D56L};
static int32_t g_62[7][3] = {{(-1L),0x61E80F96L,0x61E80F96L},{0x184BAFC8L,0L,0xDAC17B1AL},{(-1L),1L,(-1L)},{0xC247AFAEL,0x184BAFC8L,0xDAC17B1AL},{0L,0L,0x61E80F96L},{1L,0x184BAFC8L,0x184BAFC8L},{0x61E80F96L,1L,0xAA9BED5DL}};
static int32_t *g_61 = &g_62[4][2];
static int8_t g_81 = 0x48L;
static uint16_t g_89 = 0UL;
static int64_t g_107[7] = {0x74AE622E340D7ECFLL,0x74AE622E340D7ECFLL,0x89D8701E4A264326LL,0x74AE622E340D7ECFLL,0x74AE622E340D7ECFLL,0x89D8701E4A264326LL,0x74AE622E340D7ECFLL};
static int32_t g_134[7][2][7] = {{{0xCC78BB94L,0x9C17E67FL,0x9C17E67FL,0xCC78BB94L,0x9C17E67FL,0x9C17E67FL,0xCC78BB94L},{0xE9F24F76L,8L,0xE9F24F76L,0xE9F24F76L,0xE9F24F76L,0L,0L}},{{0x9C17E67FL,0x9C17E67FL,0xCC78BB94L,0x9C17E67FL,0x9C17E67FL,0xCC78BB94L,0x9C17E67FL},{0xE9F24F76L,0L,0L,0xE9F24F76L,0L,0L,0xE9F24F76L}},{{0L,0x9C17E67FL,0L,0L,0x9C17E67FL,0L,0L},{0xE9F24F76L,0xE9F24F76L,8L,0xE9F24F76L,0xE9F24F76L,8L,0xE9F24F76L}},{{0x9C17E67FL,0L,0L,0x9C17E67FL,0L,0L,0x9C17E67FL},{0L,0xE9F24F76L,0L,0L,0xE9F24F76L,0L,0L}},{{0x9C17E67FL,0x9C17E67FL,0xCC78BB94L,0x9C17E67FL,0x9C17E67FL,0xCC78BB94L,0x9C17E67FL},{0xE9F24F76L,0L,0L,0xE9F24F76L,0L,0L,0xE9F24F76L}},{{0L,0x9C17E67FL,0L,0L,0x9C17E67FL,0L,0L},{0xE9F24F76L,0xE9F24F76L,8L,0xE9F24F76L,0xE9F24F76L,8L,0xE9F24F76L}},{{0x9C17E67FL,0L,0L,0x9C17E67FL,0L,0L,0x9C17E67FL},{0L,0xE9F24F76L,0L,0L,0xE9F24F76L,0L,0L}}};
static struct S0 g_139 = {-7L,18446744073709551615UL,0x54C37BB759A07A57LL,-5L,0x3A2289BDL};
static union U4 g_161 = {0xC764L};
static int8_t *g_167 = (void*)0;
static union U1 g_196 = {18446744073709551614UL};
static union U2 g_197 = {0x99639025BF7B98E7LL};
static int16_t *g_231 = &g_139.f0;
static uint32_t g_233 = 18446744073709551615UL;
static int32_t g_249[4][7][1] = {{{0x43D89DC9L},{1L},{0xCD3D93C6L},{1L},{0x43D89DC9L},{1L},{0xCD3D93C6L}},{{1L},{0x43D89DC9L},{1L},{0xCD3D93C6L},{1L},{0x43D89DC9L},{1L}},{{0xCD3D93C6L},{1L},{0x43D89DC9L},{1L},{0xCD3D93C6L},{1L},{0x43D89DC9L}},{{1L},{0xCD3D93C6L},{1L},{0x43D89DC9L},{1L},{0xCD3D93C6L},{1L}}};
static uint8_t g_274 = 0x51L;
static int32_t g_275 = 0x931CDDB0L;
static int64_t *g_290 = &g_139.f2;
static int64_t **g_289 = &g_290;
static uint32_t g_407 = 0x40AB5F60L;
static uint64_t g_441 = 18446744073709551613UL;
static union U4 *g_642 = &g_161;
static union U4 **g_641 = &g_642;
static struct S0 *g_726 = &g_197.f3;
static union U1 g_808 = {18446744073709551615UL};
static int64_t ** const * const *g_846 = (void*)0;
static const int32_t ****g_884 = (void*)0;
static int32_t **g_892[6] = {&g_61,&g_61,&g_61,&g_61,&g_61,&g_61};
static int32_t ***g_891 = &g_892[2];
static int32_t ****g_890 = &g_891;
static uint16_t g_915 = 0x2DD5L;
static const union U1 *g_965 = &g_808;
static const union U1 **g_964 = &g_965;
static uint16_t *g_1004[4][5][6] = {{{&g_89,&g_915,&g_89,(void*)0,&g_161.f0,(void*)0},{(void*)0,&g_915,(void*)0,&g_915,&g_161.f0,&g_161.f0},{&g_915,&g_89,&g_89,&g_915,&g_161.f0,&g_89},{&g_89,&g_89,&g_161.f0,&g_915,&g_915,&g_915},{&g_915,&g_89,&g_161.f0,&g_915,&g_915,&g_161.f0}},{{(void*)0,&g_89,&g_89,(void*)0,&g_161.f0,&g_89},{&g_89,(void*)0,&g_915,&g_89,&g_161.f0,&g_89},{&g_161.f0,&g_161.f0,&g_89,&g_915,&g_161.f0,&g_89},{&g_915,&g_89,&g_161.f0,&g_915,&g_89,&g_915},{&g_161.f0,&g_915,&g_89,&g_161.f0,&g_915,&g_915}},{{&g_915,&g_161.f0,&g_915,&g_89,&g_89,&g_915},{&g_161.f0,&g_161.f0,&g_89,&g_915,&g_89,&g_161.f0},{&g_915,&g_161.f0,&g_915,&g_89,&g_89,&g_915},{&g_89,&g_915,&g_915,&g_89,&g_89,&g_161.f0},{&g_161.f0,&g_89,&g_915,&g_89,&g_161.f0,&g_161.f0}},{{&g_89,&g_161.f0,&g_161.f0,&g_89,&g_915,&g_915},{&g_915,&g_89,&g_89,&g_161.f0,&g_89,&g_89},{&g_89,&g_161.f0,&g_89,&g_89,&g_89,&g_161.f0},{&g_915,(void*)0,&g_915,&g_915,&g_915,&g_89},{&g_915,&g_161.f0,&g_915,&g_915,&g_915,&g_89}}};
static uint16_t **g_1003[2] = {&g_1004[0][3][3],&g_1004[0][3][3]};
static int16_t g_1031 = 1L;
static uint32_t g_1066 = 7UL;
static uint32_t ** const g_1075 = (void*)0;
static uint32_t ** const *g_1074[2] = {&g_1075,&g_1075};
static uint8_t g_1092 = 246UL;
static uint16_t g_1102 = 0x4A4DL;
static const int32_t *g_1126 = (void*)0;
static uint32_t g_1231 = 0UL;
static int16_t g_1250 = 6L;
static union U1 *g_1307 = (void*)0;
static union U3 *g_1329 = (void*)0;
static union U3 **g_1328 = &g_1329;
static uint8_t g_1364 = 0x3EL;
static int8_t g_1373 = 0x52L;
static int8_t *g_1372[7] = {&g_1373,&g_1373,&g_1373,&g_1373,&g_1373,&g_1373,&g_1373};
static uint64_t g_1380 = 0xFD54EBFD56E996FDLL;
static union U4 ***g_1408 = &g_641;
static union U4 ****g_1407 = &g_1408;
static int32_t g_1416[4][1] = {{0x4D521C36L},{0x4D521C36L},{0x4D521C36L},{0x4D521C36L}};
static uint16_t g_1495 = 0xD1C2L;
static const union U2 *g_1586[2] = {&g_197,&g_197};
static const union U2 **g_1585 = &g_1586[0];
static uint32_t g_1607 = 2UL;
static int8_t g_1640 = 0xC7L;
static uint16_t g_1650 = 0x3005L;
static union U2 g_1736 = {0xA98FBBCD9EAACC4CLL};
static struct S0 **g_1840[1] = {&g_726};
static uint16_t ***g_1877 = &g_1003[0];
static uint16_t ****g_1876 = &g_1877;
static uint16_t *****g_1875[2] = {&g_1876,&g_1876};
static int16_t g_1916 = 0xDC4EL;
static int64_t g_1917 = 0xC21793B6FB1A9008LL;
static uint16_t g_1940 = 0UL;
static int32_t g_1941[3][5][5] = {{{0x090BFFB9L,(-9L),1L,(-10L),(-1L)},{0xB3593FF7L,(-9L),7L,(-1L),7L},{0x992D0C1DL,0x992D0C1DL,(-1L),(-10L),1L},{0xE2C88E4FL,1L,0xD15E9873L,(-3L),0xB3593FF7L},{(-1L),(-1L),0x8B66466AL,(-1L),(-1L)}},{{(-2L),1L,0x4755A3DEL,1L,(-1L)},{(-10L),0x992D0C1DL,(-1L),(-9L),(-9L)},{1L,(-9L),1L,1L,(-1L)},{0x21C688B1L,(-9L),0x992D0C1DL,0xD0B9C25EL,(-1L)},{(-1L),0xB3593FF7L,(-3L),(-3L),0xB3593FF7L}},{{(-1L),0x685DC0E3L,0x992D0C1DL,(-1L),1L},{(-9L),(-5L),1L,0xD15E9873L,7L},{0xF2858883L,(-1L),(-1L),0xF2858883L,(-1L)},{(-9L),(-3L),0x4755A3DEL,(-2L),0xD15E9873L},{(-1L),0x090BFFB9L,0x8B66466AL,0x992D0C1DL,0x8B66466AL}}};



static uint32_t  func_1(void);
static int32_t  func_7(struct S0  p_8, uint32_t  p_9, int64_t  p_10, int64_t  p_11, union U3  p_12);
static struct S0  func_13(union U3  p_14);
static struct S0  func_16(uint32_t  p_17, union U2  p_18, int8_t  p_19, int8_t  p_20);
static uint64_t  func_23(const union U2  p_24);
static const union U2  func_25(int64_t  p_26, union U2  p_27, const uint32_t  p_28);
static union U4  func_30(union U3  p_31);
static union U3  func_32(uint8_t  p_33, int32_t  p_34, int8_t  p_35, uint64_t  p_36);




static uint32_t  func_1(void)
{ 
    union U3 l_15 = {1L};
    int8_t *l_1375 = &g_1373;
    int32_t l_1418 = 0xB83974ABL;
    int32_t l_1420 = (-2L);
    int32_t l_1421[5];
    int32_t l_1425 = 0xF3D3A65DL;
    int16_t l_1426 = 0xED89L;
    uint32_t l_1429 = 18446744073709551615UL;
    union U4 ** const *l_1436 = &g_641;
    uint32_t l_1449 = 18446744073709551608UL;
    int32_t l_1473 = 0x33DD749CL;
    int32_t l_1539 = 0L;
    uint32_t l_1551 = 0xBF656924L;
    uint32_t l_1555 = 7UL;
    union U2 *l_1559 = &g_197;
    union U2 **l_1558 = &l_1559;
    int32_t *****l_1561 = (void*)0;
    struct S0 l_1606 = {0x8D86L,0xDCD5D838L,-1L,-10L,0xA7E7BDA5L};
    int32_t l_1639 = (-1L);
    uint16_t l_1687 = 0xC8F9L;
    uint16_t **l_1690[7] = {&g_1004[0][3][3],&g_1004[0][3][3],&g_1004[0][3][3],&g_1004[0][3][3],&g_1004[0][3][3],&g_1004[0][3][3],&g_1004[0][3][3]};
    uint16_t l_1716 = 0x045BL;
    union U2 * const l_1735[3] = {&g_1736,&g_1736,&g_1736};
    union U2 * const *l_1734 = &l_1735[0];
    uint32_t l_1794[1][2][1];
    struct S0 **l_1839 = &g_726;
    union U4 *l_1890 = &g_161;
    uint64_t l_1900 = 0x711E3BEA5605BDBFLL;
    uint32_t ** const l_1912[1] = {(void*)0};
    int32_t *l_1921 = &g_48;
    int32_t *l_1922[7] = {&l_1425,&l_1425,&l_1425,&l_1425,&l_1425,&l_1425,&l_1425};
    uint32_t l_1923 = 0x2CA1BD70L;
    uint64_t l_1932 = 0x4B207C9A94917781LL;
    struct S0 l_1935 = {0x2ACCL,0x28270717L,0L,0L,3L};
    union U3 ***l_1936 = &g_1328;
    uint8_t l_1937 = 0x46L;
    int16_t *l_1938 = &g_1736.f3.f0;
    int16_t *l_1939 = &g_1916;
    uint8_t *l_1942 = &g_1092;
    int8_t l_1943 = (-1L);
    const int64_t l_1944 = 0x626012B22560EF88LL;
    int8_t l_1945 = 0xB3L;
    uint16_t l_1946 = 0UL;
    const int32_t *l_1965 = &g_1416[3][0];
    uint32_t l_1984 = 3UL;
    union U4 l_2018 = {2UL};
    int32_t *l_2020 = &g_139.f3;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1421[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1794[i][j][k] = 0UL;
        }
    }
    for (g_2[4] = (-19); (g_2[4] == 25); g_2[4]++)
    { 
        uint32_t l_1371 = 0x55CAB780L;
        int8_t **l_1374 = &g_1372[1];
        int8_t **l_1376[1];
        int8_t *l_1377[1];
        uint64_t *l_1379 = &g_1380;
        uint64_t **l_1378 = &l_1379;
        union U3 l_1381 = {2L};
        uint32_t l_1414[7];
        int32_t *l_1415 = &g_1416[3][0];
        int32_t *l_1417[5][7];
        uint64_t l_1460[2][5];
        int32_t l_1482 = 4L;
        int16_t l_1515 = 0x736FL;
        int8_t l_1516 = (-7L);
        uint32_t l_1533[5][2] = {{8UL,8UL},{1UL,8UL},{8UL,1UL},{8UL,8UL},{1UL,8UL}};
        uint32_t l_1543[7][3] = {{4294967294UL,0x38171086L,0UL},{0xD8E8BF84L,4294967295UL,0xD8E8BF84L},{0xB35C76C2L,4294967294UL,0UL},{4294967289UL,4294967289UL,0x21417525L},{9UL,4294967294UL,4294967294UL},{0x21417525L,4294967295UL,4294967295UL},{0UL,0xB35C76C2L,0UL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1376[i] = &l_1375;
        for (i = 0; i < 1; i++)
            l_1377[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_1414[i] = 0UL;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 7; j++)
                l_1417[i][j] = &g_62[4][2];
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_1460[i][j] = 0x9C3174F6ADADACCALL;
        }
    }
    for (g_275 = 0; (g_275 <= 3); g_275 += 1)
    { 
        const uint32_t l_1550 = 4294967295UL;
        uint32_t *l_1552[2];
        int32_t l_1553 = (-8L);
        int32_t l_1554[1][3][3] = {{{0xB210BDF8L,(-1L),(-1L)},{0xB210BDF8L,(-1L),(-1L)},{0xB210BDF8L,(-1L),(-1L)}}};
        uint32_t l_1560 = 0UL;
        union U2 l_1569 = {0x40B66DC20A57B26ALL};
        union U4 ***l_1584[2];
        int32_t l_1613 = 0x7DF3FD32L;
        uint8_t l_1617 = 2UL;
        uint16_t l_1647 = 0xFA63L;
        uint64_t l_1684 = 0UL;
        int8_t *l_1685 = (void*)0;
        int32_t *l_1689 = (void*)0;
        union U3 l_1702 = {0x4F72C65FL};
        int32_t l_1747 = 0x9F2236EDL;
        uint64_t l_1749[1][4][6] = {{{18446744073709551615UL,18446744073709551613UL,18446744073709551615UL,0x01C3D5FFAF146A2FLL,18446744073709551615UL,18446744073709551613UL},{0x086D441DFF5762EFLL,18446744073709551615UL,18446744073709551615UL,0xB0EAB44B5C112A9FLL,18446744073709551615UL,0x01C3D5FFAF146A2FLL},{0xAEB214B6097A46E5LL,0xB0EAB44B5C112A9FLL,18446744073709551613UL,18446744073709551613UL,0xB0EAB44B5C112A9FLL,0xAEB214B6097A46E5LL},{18446744073709551613UL,0xB0EAB44B5C112A9FLL,0xAEB214B6097A46E5LL,0UL,18446744073709551615UL,18446744073709551615UL}}};
        struct S0 l_1761 = {0x8357L,0x737BF5B0L,9L,6L,-5L};
        int32_t l_1769 = 0x6ADFF678L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1552[i] = &g_1231;
        for (i = 0; i < 2; i++)
            l_1584[i] = &g_641;
    }
    for (g_1364 = 0; (g_1364 >= 54); ++g_1364)
    { 
        struct S0 ***l_1841 = (void*)0;
        struct S0 ***l_1842 = &l_1839;
        int32_t l_1843 = (-9L);
        int32_t l_1851 = 0x5BF998E1L;
        int32_t l_1854 = (-1L);
        uint32_t l_1855 = 18446744073709551615UL;
        uint8_t l_1889 = 255UL;
        int32_t l_1899[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1899[i] = 0x375C2844L;
        if (((***g_891) &= ((((*l_1842) = (g_1840[0] = l_1839)) == (void*)0) , 0x4CC39583L)))
        { 
            return l_1843;
        }
        else
        { 
            uint64_t l_1846 = 1UL;
            int32_t l_1852 = 0x76F9D52EL;
            int32_t l_1853 = 1L;
            uint64_t *l_1867 = &g_1380;
            uint64_t **l_1866[4][4] = {{(void*)0,(void*)0,&l_1867,&l_1867},{&l_1867,&l_1867,&l_1867,&l_1867},{&l_1867,&l_1867,&l_1867,&l_1867},{(void*)0,&l_1867,&l_1867,&l_1867}};
            int32_t l_1873 = (-4L);
            union U2 l_1909 = {0x255E98B3F6362369LL};
            uint64_t l_1913[6][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
            int i, j;
            if ((safe_mul_func_int16_t_s_s(l_1846, (l_1852 = (safe_mul_func_int8_t_s_s((l_1851 = (safe_div_func_uint16_t_u_u(0x0DE6L, (--l_1855)))), (safe_sub_func_int8_t_s_s(((l_1854 > (-1L)) >= (safe_unary_minus_func_int16_t_s(l_1846))), l_1853))))))))
            { 
                int32_t l_1868 = 1L;
                uint8_t l_1869 = 6UL;
                int32_t *l_1872 = &l_1421[2];
                if (((***g_891) = ((((((safe_rshift_func_int8_t_s_s(((((~(((l_1846 , (1UL < (safe_mul_func_uint8_t_u_u(((l_1866[2][3] = (void*)0) == (void*)0), g_249[1][0][0])))) != (l_1868 | (l_1869 <= l_1869))) > g_197.f0)) == l_1843) == 0L) < 0x788E7718E926BC2ALL), 4)) , l_1868) >= l_1868) ^ 8L) > (*g_290)) >= 0x5BED4AEBL)))
                { 
                    return g_196.f0;
                }
                else
                { 
                    int32_t *l_1871 = &g_2[3];
                    int32_t **l_1870[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1870[i][j] = &l_1871;
                    }
                    l_1872 = ((***g_890) = (***g_890));
                    return l_1873;
                }
            }
            else
            { 
                int8_t l_1874 = 0x3EL;
                int32_t l_1898[4][5][3] = {{{0xD50195F9L,0xD50195F9L,0xD2F26C00L},{0xFD8AB7B4L,0L,0xFC888533L},{9L,0xD50195F9L,9L},{0x47E21D0AL,0xFD8AB7B4L,0x8637CF81L},{1L,9L,9L}},{{0x8637CF81L,0x47E21D0AL,0xFC888533L},{(-7L),1L,0xD2F26C00L},{0x8637CF81L,0x8637CF81L,0x2E207ABAL},{1L,(-7L),1L},{0x47E21D0AL,0x8637CF81L,0x47E21D0AL}},{{9L,1L,0xD50195F9L},{0xFD8AB7B4L,0x47E21D0AL,0x47E21D0AL},{0xD50195F9L,9L,1L},{0L,0xFD8AB7B4L,0x2E207ABAL},{0xD50195F9L,0xD50195F9L,0xD2F26C00L}},{{0xFD8AB7B4L,0L,0xFC888533L},{9L,0xD50195F9L,9L},{0x47E21D0AL,0xFD8AB7B4L,0x8637CF81L},{1L,9L,9L},{0x8637CF81L,0x47E21D0AL,0xFC888533L}}};
                int i, j, k;
                for (g_1373 = 0; (g_1373 <= 3); g_1373 += 1)
                { 
                    int i;
                    return l_1421[(g_1373 + 1)];
                }
                for (g_197.f1 = 0; g_197.f1 < 7; g_197.f1 += 1)
                {
                    g_1372[g_197.f1] = &g_197.f4;
                }
                if ((l_1874 & ((void*)0 == g_1875[1])))
                { 
                    int8_t l_1888[1][1][6] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
                    union U4 *l_1891 = &g_161;
                    int32_t *l_1892 = &l_1425;
                    int32_t *l_1893 = (void*)0;
                    int32_t *l_1894 = (void*)0;
                    int32_t *l_1895 = &g_139.f3;
                    int32_t *l_1896 = &g_2[2];
                    int32_t *l_1897[1][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1897[i][j] = &g_1736.f2;
                    }
                    if ((*g_61))
                        break;
                    (***g_891) |= ((((l_1874 , 0xEB3D7DF0228F7C59LL) ^ (safe_add_func_int8_t_s_s((!(safe_mod_func_int8_t_s_s(l_1851, (0xC594L || (!0xC62D601918BCA8EELL))))), (safe_rshift_func_int16_t_s_s((0UL <= (((safe_mod_func_int8_t_s_s(l_1843, l_1888[0][0][4])) != g_233) <= (*g_231))), l_1889))))) || l_1888[0][0][0]) > (*g_231));
                    l_1891 = ((*g_641) = l_1890);
                    (*g_61) |= ((void*)0 == (**g_1877));
                    l_1900--;
                }
                else
                { 
                    int64_t l_1908 = 0L;
                    int32_t l_1914[5] = {4L,4L,4L,4L,4L};
                    int32_t *l_1915[3];
                    uint16_t l_1918 = 0xB890L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1915[i] = &g_1736.f2;
                    l_1913[2][0] &= (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((!((g_139.f1 , 18446744073709551610UL) != (**g_289))) != l_1908), ((*l_1375) = (l_1909 , ((safe_mul_func_int16_t_s_s(l_1874, ((((((l_1851 = ((void*)0 != l_1912[0])) , (****g_890)) , (-7L)) & l_1908) <= l_1846) <= g_81))) , l_1909.f2))))), l_1908));
                    l_1918--;
                    return g_2[4];
                }
            }
        }
    }
    --l_1923;
    if (((***g_891) = (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(((((*l_1942) = (safe_add_func_uint16_t_u_u(((((*l_1921) ^= ((void*)0 != l_1690[3])) != ((*l_1939) ^= ((l_1932 && (*g_231)) < (safe_sub_func_int8_t_s_s((l_1935 , (l_1936 != &g_1328)), l_1937))))) ^ g_1940), g_1941[0][4][2]))) > l_1943) > (*g_61)), l_1944)) <= l_1945) | l_1946), 1))))
    { 
        int32_t l_1956[2];
        int64_t *l_1981 = &g_1917;
        int8_t l_1994 = 0xFFL;
        struct S0 l_2005[7] = {{0xB047L,0x1471C2AAL,0xBDEC7E1EFC39FA23LL,0xFF9BDEFAL,1L},{0xB047L,0x1471C2AAL,0xBDEC7E1EFC39FA23LL,0xFF9BDEFAL,1L},{0xB047L,0x1471C2AAL,0xBDEC7E1EFC39FA23LL,0xFF9BDEFAL,1L},{0xB047L,0x1471C2AAL,0xBDEC7E1EFC39FA23LL,0xFF9BDEFAL,1L},{0xB047L,0x1471C2AAL,0xBDEC7E1EFC39FA23LL,0xFF9BDEFAL,1L},{0xB047L,0x1471C2AAL,0xBDEC7E1EFC39FA23LL,0xFF9BDEFAL,1L},{0xB047L,0x1471C2AAL,0xBDEC7E1EFC39FA23LL,0xFF9BDEFAL,1L}};
        int i;
        for (i = 0; i < 2; i++)
            l_1956[i] = 0xBCA63185L;
        (***g_891) &= (safe_rshift_func_int16_t_s_s(((*l_1939) = ((*g_231) = (!((*l_1375) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_1942)++), l_1956[1])), (safe_mul_func_int8_t_s_s(l_1956[1], (safe_rshift_func_uint16_t_u_s(l_1956[0], 2)))))))))), ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*l_1921) = l_1956[1]), (((((l_1965 != (***g_890)) , (safe_add_func_int32_t_s_s(((*l_1890) , 1L), (-10L)))) & 9L) >= l_1956[1]) , 0x5FFFL))), g_1416[3][0])) <= l_1956[0])));
        for (g_1373 = 19; (g_1373 > (-13)); g_1373 = safe_sub_func_int16_t_s_s(g_1373, 1))
        { 
            const uint64_t l_1993 = 8UL;
            struct S0 l_1996 = {0x7DC4L,1UL,-1L,0xB4AB19F8L,0xDD0BB265L};
            int32_t * const l_2007 = &g_1416[3][0];
            union U2 **l_2019 = &l_1559;
            (*g_726) = l_1606;
        }
    }
    else
    { 
        uint32_t l_2021 = 0x9CEB5183L;
        l_2021++;
        return g_1495;
    }
    return g_808.f2;
}



static int32_t  func_7(struct S0  p_8, uint32_t  p_9, int64_t  p_10, int64_t  p_11, union U3  p_12)
{ 
    const uint8_t l_1395[2][1][1] = {{{1UL}},{{1UL}}};
    union U4 **l_1396 = &g_642;
    uint64_t *l_1399 = &g_441;
    uint64_t **l_1400[2][1];
    uint64_t *l_1401 = &g_1380;
    int32_t *l_1404 = &g_62[4][2];
    int32_t l_1405 = 1L;
    uint32_t l_1413 = 0UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1400[i][j] = &l_1399;
    }
    if (((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((((*l_1404) = ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((+l_1395[1][0][0]) && ((l_1396 != ((safe_mod_func_int64_t_s_s(((4294967295UL || ((l_1401 = l_1399) == &g_441)) || ((safe_lshift_func_int16_t_s_u(p_12.f1, l_1395[0][0][0])) , p_9)), 2L)) , l_1396)) , l_1395[1][0][0])), (*g_231))), l_1395[0][0][0])) , 0L)) & 0xF55F4A91L), 0x62AA2C446C6569E4LL)), p_8.f3)), l_1405)), l_1395[0][0][0])) == p_12.f1))
    { 
        int32_t **l_1406[1];
        union U4 *****l_1409 = &g_1407;
        int i;
        for (i = 0; i < 1; i++)
            l_1406[i] = &l_1404;
        l_1404 = ((***g_890) = (void*)0);
        (*l_1409) = g_1407;
    }
    else
    { 
        int32_t *l_1410 = &g_62[5][2];
        (**g_891) = l_1410;
    }
    (***g_890) = ((l_1413 = (safe_mul_func_int16_t_s_s((*g_231), p_8.f2))) , l_1404);
    return p_8.f3;
}



static struct S0  func_13(union U3  p_14)
{ 
    struct S0 l_29[7] = {{0x4417L,0x95E19F8CL,0x1723279329BFAEADLL,0x214C259DL,-1L},{0x4417L,0x95E19F8CL,0x1723279329BFAEADLL,0x214C259DL,-1L},{0x4417L,0x95E19F8CL,0x1723279329BFAEADLL,0x214C259DL,-1L},{0x4417L,0x95E19F8CL,0x1723279329BFAEADLL,0x214C259DL,-1L},{0x4417L,0x95E19F8CL,0x1723279329BFAEADLL,0x214C259DL,-1L},{0x4417L,0x95E19F8CL,0x1723279329BFAEADLL,0x214C259DL,-1L},{0x4417L,0x95E19F8CL,0x1723279329BFAEADLL,0x214C259DL,-1L}};
    union U4 l_39 = {0xE013L};
    uint64_t l_40 = 0x66BA05392614F5C6LL;
    union U2 l_310 = {0x81BFA71F3DFE33E5LL};
    int8_t *l_778 = &g_197.f4;
    union U1 *l_807 = &g_808;
    int32_t l_816 = (-8L);
    int16_t l_817 = 0x81E6L;
    int32_t l_819 = 0xB0D9AF97L;
    uint64_t l_820 = 0xDF7342FA60BFCAFELL;
    int32_t l_827[2][5] = {{0xF02A05EAL,(-1L),0xF02A05EAL,(-1L),0xF02A05EAL},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
    uint32_t l_828 = 0UL;
    union U2 *l_832 = &g_197;
    union U2 **l_831 = &l_832;
    int32_t **l_834 = &g_61;
    int32_t ***l_833 = &l_834;
    int64_t *** const l_845[3][6] = {{&g_289,&g_289,&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289,&g_289,&g_289}};
    int64_t *** const *l_844[6];
    int8_t l_907 = 0x9FL;
    uint8_t l_914[6] = {0x95L,0x95L,0x42L,0x95L,0x95L,0x42L};
    uint32_t l_916 = 0xC37BFA85L;
    const int64_t *l_924 = (void*)0;
    const int64_t * const *l_923 = &l_924;
    int32_t l_933 = 0x0C707DBEL;
    int64_t **l_934 = &g_290;
    int16_t *l_953 = &l_817;
    union U3 *l_1000 = &g_55;
    int64_t l_1012[6][7] = {{(-10L),0xB005A93AC0870D58LL,(-10L),0xB005A93AC0870D58LL,(-10L),0xB005A93AC0870D58LL,(-10L)},{0x7307C458BDC74C0DLL,8L,8L,0x7307C458BDC74C0DLL,0x7307C458BDC74C0DLL,8L,8L},{4L,0xB005A93AC0870D58LL,4L,0xB005A93AC0870D58LL,4L,0xB005A93AC0870D58LL,4L},{0x7307C458BDC74C0DLL,0x7307C458BDC74C0DLL,8L,8L,0x7307C458BDC74C0DLL,0x7307C458BDC74C0DLL,8L},{(-10L),0xB005A93AC0870D58LL,(-10L),0xB005A93AC0870D58LL,(-10L),0xB005A93AC0870D58LL,(-10L)},{0x7307C458BDC74C0DLL,8L,8L,0x7307C458BDC74C0DLL,0x7307C458BDC74C0DLL,8L,8L}};
    uint32_t l_1017 = 0x713A79BFL;
    uint32_t ** const l_1030 = (void*)0;
    int32_t l_1082 = 0L;
    union U4 **l_1087 = (void*)0;
    union U4 *l_1089 = &l_39;
    union U4 **l_1088 = &l_1089;
    const union U4 *l_1091 = (void*)0;
    const union U4 **l_1090 = &l_1091;
    int64_t l_1101 = 0x629C9F808FC598CFLL;
    struct S0 **l_1107 = (void*)0;
    int32_t l_1265[2][2][1] = {{{(-10L)},{0L}},{{(-10L)},{0L}}};
    int64_t l_1310 = 0x371D40E0A5D7897DLL;
    const uint8_t l_1332 = 0xF2L;
    int32_t *l_1338 = (void*)0;
    int16_t l_1352[2][4][1] = {{{0L},{(-5L)},{0L},{(-5L)}},{{0L},{(-5L)},{0L},{(-5L)}}};
    int32_t *****l_1354 = (void*)0;
    struct S0 l_1370[7][7][4] = {{{{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L},{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L},{0x3563L,0xD3A1778FL,6L,0x06BC309FL,1L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L}},{{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L},{9L,0x1A35D4CBL,-1L,-1L,0x9AABC165L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L}},{{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L}},{{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L}},{{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0x6212L,18446744073709551615UL,0L,0xA4C3C0C1L,3L},{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L}}},{{{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{1L,18446744073709551606UL,-10L,0xBEA20339L,-3L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L},{0xA271L,0UL,-4L,0x12EE5188L,-1L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L},{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL},{0x3563L,0xD3A1778FL,6L,0x06BC309FL,1L},{1L,18446744073709551607UL,0xB733C227808D78B7LL,0xB37525E0L,0xDFCF8284L}},{{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{0xA271L,0UL,-4L,0x12EE5188L,-1L},{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{1L,18446744073709551607UL,0xB733C227808D78B7LL,0xB37525E0L,0xDFCF8284L},{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L}},{{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L},{0x6212L,18446744073709551615UL,0L,0xA4C3C0C1L,3L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL}},{{0x6212L,18446744073709551615UL,0L,0xA4C3C0C1L,3L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{0x6212L,18446744073709551615UL,0L,0xA4C3C0C1L,3L}}},{{{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L},{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L},{1L,18446744073709551606UL,-10L,0xBEA20339L,-3L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L}},{{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{9L,0x1A35D4CBL,-1L,-1L,0x9AABC165L},{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{1L,18446744073709551606UL,-10L,0xBEA20339L,-3L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L},{0x3563L,0xD3A1778FL,6L,0x06BC309FL,1L},{0x6212L,18446744073709551615UL,0L,0xA4C3C0C1L,3L}},{{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L},{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x6212L,18446744073709551615UL,0L,0xA4C3C0C1L,3L},{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L}}},{{{1L,18446744073709551606UL,-10L,0xBEA20339L,-3L},{1L,18446744073709551607UL,0xB733C227808D78B7LL,0xB37525E0L,0xDFCF8284L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L}},{{1L,18446744073709551607UL,0xB733C227808D78B7LL,0xB37525E0L,0xDFCF8284L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{1L,18446744073709551607UL,0xB733C227808D78B7LL,0xB37525E0L,0xDFCF8284L}},{{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{1L,18446744073709551607UL,0xB733C227808D78B7LL,0xB37525E0L,0xDFCF8284L},{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{1L,18446744073709551606UL,-10L,0xBEA20339L,-3L}},{{1L,18446744073709551606UL,-10L,0xBEA20339L,-3L},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L},{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L},{0x3563L,0xD3A1778FL,6L,0x06BC309FL,1L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L}}},{{{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L},{9L,0x1A35D4CBL,-1L,-1L,0x9AABC165L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L}},{{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L}},{{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L},{0x12E8L,1UL,-6L,0xA0A18AC0L,0xC88DF225L}},{{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{0x5686L,18446744073709551615UL,-1L,0x0316D056L,0xBE8AD6F6L},{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0x6212L,18446744073709551615UL,0L,0xA4C3C0C1L,3L},{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{0x5B8CL,0x5D682959L,6L,1L,0xB1C34064L}},{{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{1L,18446744073709551606UL,-10L,0xBEA20339L,-3L}}},{{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x82D0L,18446744073709551610UL,-5L,0xD47135B0L,8L},{7L,0x4DB7BA1DL,1L,0L,0L},{0x2551L,0x93D36DC4L,1L,0xB6F74CD3L,0x230A91B9L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L}},{{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x13D3L,0xDA7BF33CL,0xAB2EC79862CA811BLL,0xD29B0610L,1L},{7L,0x4DB7BA1DL,1L,0L,0L},{9L,0x1A35D4CBL,-1L,-1L,0x9AABC165L}},{{0x2C6FL,18446744073709551615UL,1L,0x2F97A84CL,0xC8F486E0L},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{0xE691L,0x222D9AD9L,9L,0x46BAD5ADL,-1L},{3L,18446744073709551614UL,-6L,-9L,1L}},{{-3L,0UL,0x4694840DBEC2246DLL,3L,6L},{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L},{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L}},{{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L},{0x13D3L,0xDA7BF33CL,0xAB2EC79862CA811BLL,0xD29B0610L,1L},{0x13D3L,0xDA7BF33CL,0xAB2EC79862CA811BLL,0xD29B0610L,1L},{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L}},{{0xE691L,0x222D9AD9L,9L,0x46BAD5ADL,-1L},{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x3563L,0xD3A1778FL,6L,0x06BC309FL,1L},{0x2551L,0x93D36DC4L,1L,0xB6F74CD3L,0x230A91B9L}}},{{{0xBBF7L,18446744073709551615UL,0x553FBC36AD529EBALL,-1L,0L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0xA271L,0UL,-4L,0x12EE5188L,-1L},{-4L,1UL,0x460695450274E480LL,-6L,-5L},{3L,0UL,0xFF0548C0B9A57680LL,-1L,0x8EA724C0L},{-3L,0UL,0x4694840DBEC2246DLL,3L,6L}},{{0x2C6FL,18446744073709551615UL,1L,0x2F97A84CL,0xC8F486E0L},{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L},{3L,18446744073709551614UL,-6L,-9L,1L},{0x2551L,0x93D36DC4L,1L,0xB6F74CD3L,0x230A91B9L}},{{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L},{2L,18446744073709551615UL,0xF4ACF0C5778C9DDELL,0xA6411593L,0xE9E0F8A1L},{0x5CDFL,0xAA9E4E8AL,0xFB3B5812C1B1B323LL,0L,0x141161AAL},{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L}},{{9L,0x1A35D4CBL,-1L,-1L,0x9AABC165L},{0x13D3L,0xDA7BF33CL,0xAB2EC79862CA811BLL,0xD29B0610L,1L},{0x2551L,0x93D36DC4L,1L,0xB6F74CD3L,0x230A91B9L},{-1L,0x7CA09573L,1L,0x8F6C0A24L,0x2E9553D2L}},{{0x2C6FL,18446744073709551615UL,1L,0x2F97A84CL,0xC8F486E0L},{-10L,18446744073709551615UL,0x8BA85A796EE33C39LL,-1L,0x83A83D13L},{0x2C6FL,18446744073709551615UL,1L,0x2F97A84CL,0xC8F486E0L},{3L,18446744073709551614UL,-6L,-9L,1L}},{{-2L,0UL,0xC13F53E1AC88A2BELL,0xEBA58BA9L,7L},{0xF0B3L,0x67696534L,0x6536919A69E37EB3LL,0x5FBE4E2DL,0x85488BC0L},{0xCE4AL,0x1D35D66FL,0xB1AB44FD088AAA35LL,0L,-1L},{9L,0x1A35D4CBL,-1L,-1L,0x9AABC165L}}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_844[i] = &l_845[1][2];
    if (((func_16((safe_mul_func_int16_t_s_s(((func_23(func_25(((((l_29[4] , ((func_30(func_32((safe_rshift_func_int16_t_s_s((l_39 , (0L ^ p_14.f2)), 4)), l_40, (((safe_mul_func_uint16_t_u_u(g_2[4], (safe_div_func_int64_t_s_s(l_29[4].f4, p_14.f2)))) , g_2[0]) < 0x8C33196ADD890AAFLL), g_2[4])) , l_29[4].f4) == 0L)) ^ l_39.f0) < 0x827AL) & g_2[1]), l_310, l_310.f4)) & p_14.f0) > 0x962AL), l_29[4].f4)), l_310, l_310.f1, l_29[4].f2) , p_14.f2) < 0xA0A230224B9723DFLL))
    { 
        return l_29[5];
    }
    else
    { 
        union U4 *l_762 = (void*)0;
        union U4 l_763 = {0xD746L};
        int32_t l_769 = 0x2C0DEAA7L;
        int32_t l_770 = 0xD1B19DD3L;
        int32_t *l_779 = &l_310.f3.f3;
        const union U4 l_791 = {0x5EBCL};
        union U1 *l_806[1][4];
        int32_t l_813 = 0L;
        int32_t l_814 = 0x1F8E5DD3L;
        int32_t l_815 = 1L;
        int32_t l_818[2][7] = {{8L,0L,8L,0L,8L,0L,8L},{0L,0L,0L,0L,0L,0L,0L}};
        int32_t ***l_838[5];
        int64_t ***l_839[4][5][4] = {{{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}},{{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}},{{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}},{{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289},{&g_289,&g_289,&g_289,&g_289}}};
        uint8_t *l_869 = &g_274;
        uint8_t l_873 = 0x09L;
        struct S0 l_887 = {0x4234L,1UL,0xF716116818084762LL,0xE0D57B56L,1L};
        uint64_t l_980 = 0x77E7EA301207B7BCLL;
        uint32_t * const *l_1028 = (void*)0;
        union U3 l_1054 = {0x37AF18E6L};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_806[i][j] = &g_196;
        }
        for (i = 0; i < 5; i++)
            l_838[i] = (void*)0;
        l_29[1] = func_16(((safe_rshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_14.f0, 6)), ((((l_763 = ((**g_641) = (**g_641))) , (safe_mul_func_uint8_t_u_u(g_249[2][4][0], (~(((safe_rshift_func_int16_t_s_u((0x318E7800CB7C9225LL > ((l_769 = 0x08940D19L) & l_310.f1)), l_763.f0)) != p_14.f1) <= l_763.f0))))) , (void*)0) == (void*)0))) | l_310.f0) < 18446744073709551609UL), l_770)) ^ 0x909B1A3FL), l_310, l_29[4].f4, p_14.f0);
        if (((*l_779) = ((((safe_mod_func_uint8_t_u_u(0x81L, (safe_rshift_func_uint16_t_u_s(((((!(safe_rshift_func_int16_t_s_s(p_14.f2, ((l_778 == (g_196 , &g_81)) , (l_770 = ((-1L) & 0x913BL)))))) | p_14.f1) > 0xEDE2L) ^ (-1L)), p_14.f0)))) , g_55.f0) | l_310.f1) & p_14.f1)))
        { 
            int32_t **l_780 = (void*)0;
            int32_t **l_781 = (void*)0;
            int32_t l_811 = 0x8D8FC3F4L;
            int32_t l_812[6][5] = {{7L,(-4L),7L,(-4L),7L},{1L,1L,1L,1L,1L},{7L,(-4L),7L,(-4L),7L},{1L,1L,1L,1L,1L},{7L,(-4L),7L,(-4L),7L},{1L,1L,1L,1L,1L}};
            int i, j;
            l_779 = &l_770;
            for (g_139.f0 = 14; (g_139.f0 != (-12)); g_139.f0 = safe_sub_func_uint16_t_u_u(g_139.f0, 2))
            { 
                union U2 *l_786 = &g_197;
                int32_t *l_809 = &g_62[4][2];
                int32_t *l_810[7][6][1] = {{{&l_769},{&g_139.f3},{&g_197.f2},{&g_2[1]},{&g_139.f3},{(void*)0}},{{&g_2[4]},{(void*)0},{&g_139.f3},{&g_2[1]},{&g_197.f2},{&g_139.f3}},{{&l_769},{&g_48},{&g_48},{&l_310.f2},{&g_48},{&g_48}},{{&l_310.f2},{&g_48},{&g_48},{(void*)0},{&g_2[4]},{&g_48}},{{&l_769},{&g_2[4]},{&g_48},{(void*)0},{&g_48},{&g_2[4]}},{{&l_769},{&g_48},{&g_2[4]},{(void*)0},{&g_48},{&g_48}},{{&l_310.f2},{&g_48},{&g_48},{&l_310.f2},{&g_48},{&g_48}}};
                int i, j, k;
                for (g_89 = 0; (g_89 <= 45); g_89++)
                { 
                    union U2 **l_787 = &l_786;
                    int32_t l_792 = 0x0759FAA1L;
                    union U4 **l_802 = &l_762;
                    union U4 ***l_803 = &l_802;
                    (*l_787) = l_786;
                    (*l_779) = (safe_add_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s((l_791 , l_792))) || l_792), (safe_mod_func_uint8_t_u_u((~((((safe_sub_func_uint64_t_u_u(((18446744073709551615UL <= (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((*l_803) = l_802) != &g_642) <= (0x2216D5972E2A9631LL >= 18446744073709551615UL)), (*l_779))), 1L))) != 0xCA7B4FC7L), 0x50541654F36A1FABLL)) == g_196.f2) & (*g_231)) && (*g_231))), p_14.f2))));
                }
                for (l_310.f3.f1 = 0; (l_310.f3.f1 != 52); ++l_310.f3.f1)
                { 
                    l_807 = l_806[0][0];
                    if (p_14.f0)
                        continue;
                }
                (*l_779) |= p_14.f2;
                l_820--;
            }
        }
        else
        { 
            int32_t *l_823 = &l_818[1][6];
            int32_t *l_824 = &l_816;
            int32_t *l_825 = &g_139.f3;
            int32_t *l_826[5][3][5] = {{{&g_2[4],&g_48,&g_48,&g_2[4],&g_62[4][2]},{&g_2[4],(void*)0,&g_197.f2,&g_197.f2,(void*)0},{&g_62[4][2],&g_48,&g_197.f2,&l_814,&l_814}},{{&g_48,&g_62[4][2],&g_48,&g_197.f2,&l_814},{(void*)0,&g_2[4],&l_814,&g_2[4],(void*)0},{&g_48,&g_2[4],&g_62[4][2],(void*)0,&g_62[4][2]}},{{&g_62[4][2],&g_62[4][2],&l_814,(void*)0,&l_29[4].f3},{&g_2[4],&g_48,&g_48,&g_2[4],&g_62[4][2]},{&g_2[4],(void*)0,&g_197.f2,&g_197.f2,(void*)0}},{{&g_62[4][2],&g_48,&g_197.f2,&l_814,&l_814},{&g_48,&g_62[4][2],&g_48,&g_197.f2,&l_814},{(void*)0,&g_2[4],&l_814,&g_2[4],(void*)0}},{{&g_48,&g_2[4],&g_62[4][2],(void*)0,&g_62[4][2]},{&g_62[4][2],&g_62[4][2],&l_814,(void*)0,&l_29[4].f3},{&g_2[4],&g_48,&g_48,&g_2[4],&g_62[4][2]}}};
            int32_t ****l_835[7];
            int64_t ****l_840 = &l_839[2][3][2];
            uint8_t *l_843 = &g_274;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_835[i] = &l_833;
            --l_828;
            (*l_779) = (((*l_824) < (g_55.f2 >= ((**g_289) < (((void*)0 != l_831) && 0x89E0A47BL)))) && p_14.f0);
            l_833 = l_833;
            (*l_823) = ((safe_add_func_uint8_t_u_u((p_14.f2 , (((((*l_825) , (((void*)0 == l_838[3]) || (g_48 > 255UL))) , (((((*l_840) = l_839[2][1][0]) != (void*)0) || g_139.f3) == 6UL)) >= g_55.f0) <= (*l_825))), g_196.f1)) > 0xC7A3F46DC4512D83LL);
            if (((safe_add_func_int16_t_s_s(p_14.f1, p_14.f0)) , ((((*l_843) = p_14.f0) , l_844[0]) != g_846)))
            { 
                int32_t l_857 = 0x403C3F9DL;
                uint8_t *l_858 = &g_274;
                (*l_825) = ((*l_824) = (safe_rshift_func_uint8_t_u_u((((*l_823) || ((safe_add_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(p_14.f0, (((((safe_rshift_func_int16_t_s_s((*g_231), 11)) > (&g_274 == ((((l_39 , (safe_mod_func_uint8_t_u_u(5UL, g_441))) && l_857) == 1L) , l_858))) <= 0xA145D32A4320769DLL) , l_857) , p_14.f2))), (-3L))) > 0xB33D34F8L)) || g_134[4][1][0]), g_197.f4)));
                for (g_197.f3.f4 = 0; g_197.f3.f4 < 7; g_197.f3.f4 += 1)
                {
                    struct S0 tmp = {-1L,18446744073709551610UL,0x0119387A372F5C05LL,0x6763CE25L,-2L};
                    l_29[g_197.f3.f4] = tmp;
                }
            }
            else
            { 
                uint8_t l_859 = 255UL;
                (*l_823) &= ((*l_824) = l_859);
            }
        }
        if (p_14.f2)
        { 
            uint32_t l_860 = 0UL;
            uint32_t *l_870[7][1][1];
            int32_t l_871 = (-9L);
            union U4 ** const l_872 = (void*)0;
            int32_t l_874[1];
            int32_t ** const *l_883 = (void*)0;
            int32_t ** const **l_882[1][3][5] = {{{&l_883,&l_883,&l_883,&l_883,&l_883},{&l_883,&l_883,&l_883,&l_883,&l_883},{&l_883,&l_883,&l_883,&l_883,&l_883}}};
            uint64_t *l_902 = &g_441;
            int32_t l_911 = 0x018E7D93L;
            uint16_t *l_917 = (void*)0;
            uint16_t *l_918 = &g_89;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_870[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 1; i++)
                l_874[i] = 0x915DE9F3L;
            ++l_860;
            l_874[0] ^= ((safe_lshift_func_int8_t_s_s((((*g_231) = (((safe_mul_func_int8_t_s_s(((p_14.f1 > ((safe_sub_func_uint64_t_u_u(((l_871 = ((void*)0 != l_869)) < (l_872 != l_872)), (5UL && ((p_14.f2 > p_14.f0) | (*g_231))))) > p_14.f0)) > p_14.f2), l_873)) , 2UL) && 65529UL)) | g_197.f2), 0)) ^ p_14.f1);
            for (l_770 = 0; (l_770 <= (-22)); l_770 = safe_sub_func_int32_t_s_s(l_770, 6))
            { 
                struct S0 l_885 = {0x9A31L,8UL,0x4E817E4D586640DFLL,-6L,0xD77A8206L};
                for (g_274 = 0; (g_274 <= 1); g_274 += 1)
                { 
                    const int64_t *l_879 = &l_29[4].f2;
                    const int64_t **l_878 = &l_879;
                    const int64_t ** const *l_877 = &l_878;
                    int32_t l_886 = 8L;
                    int32_t *****l_893 = (void*)0;
                    int32_t ****l_894 = &g_891;
                    int32_t l_895 = 0x0FF4374EL;
                    g_62[3][2] &= ((l_877 != l_839[2][1][0]) ^ ((g_196 , p_14.f2) > (safe_div_func_uint16_t_u_u(((l_882[0][2][0] == g_884) || (((l_885 , p_14.f1) > p_14.f0) != 0x08187F9AFF0F6820LL)), l_886))));
                    l_895 ^= (l_887 , (safe_rshift_func_int8_t_s_u(l_886, (((((l_894 = g_890) != (void*)0) , (g_249[2][1][0] ^ l_885.f1)) && g_62[2][1]) == p_14.f1))));
                    (*g_726) = l_887;
                }
                for (g_197.f3.f4 = 27; (g_197.f3.f4 > 27); g_197.f3.f4++)
                { 
                    return l_887;
                }
            }
            (***g_890) = ((g_407 = ((safe_mod_func_uint16_t_u_u((((*l_918) ^= (g_915 = (((safe_rshift_func_int16_t_s_s(((p_14.f2 ^ (++(*l_902))) && (safe_div_func_int32_t_s_s((l_907 = ((*l_779) = ((**g_890) == ((*l_833) = (*g_891))))), p_14.f2))), (safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u((((*l_869) = (((((g_808.f2 && (l_816 = ((l_911 = p_14.f0) | ((((((safe_rshift_func_int16_t_s_u(0x7307L, 12)) <= p_14.f1) & l_914[0]) > (-1L)) < 0xF6FD279885808663LL) ^ p_14.f1)))) , l_39) , g_915) || (*g_231)) >= 6L)) == l_916), 0xEBL)) , 0x79L))))) || p_14.f2) >= p_14.f0))) >= g_2[0]), p_14.f0)) , g_2[1])) , &l_827[1][1]);
        }
        else
        { 
            int32_t l_928 = (-3L);
            int16_t *l_952 = (void*)0;
            int32_t l_998[3];
            struct S0 l_999 = {-1L,0x32C88A70L,0x735F7F5D04A31DC2LL,0x34C04C7CL,-8L};
            int32_t **l_1036 = &g_61;
            union U4 ***l_1053 = (void*)0;
            union U4 ****l_1052 = &l_1053;
            uint32_t *l_1073 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_998[i] = 1L;
            l_816 &= ((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((*l_807) , l_923) != ((safe_div_func_uint32_t_u_u(g_89, ((+0x1912L) & (l_928 && (safe_div_func_int64_t_s_s(((g_275 , (safe_mul_func_int8_t_s_s((((*g_231) , p_14.f1) | g_62[4][2]), p_14.f2))) < l_933), 6UL)))))) , l_934)), 12)), p_14.f1)) >= 0x3BC978FDD5624C5ELL) & 1L) , p_14.f0);
            for (l_770 = 0; (l_770 > (-27)); l_770 = safe_sub_func_int8_t_s_s(l_770, 4))
            { 
                const uint64_t l_956 = 0x12A3E5F557DD8598LL;
                int8_t l_957[6][7] = {{(-8L),0xAAL,1L,0xA2L,0L,0xF0L,0L},{0xF0L,9L,(-8L),(-7L),3L,0L,3L},{0L,0xAAL,0xAAL,0L,(-1L),0xA2L,1L},{0L,0L,1L,9L,(-5L),0xCDL,1L},{0xF0L,(-1L),1L,(-6L),(-8L),(-6L),1L},{(-8L),(-8L),0x0FL,(-4L),0xCDL,(-6L),3L}};
                int64_t l_958 = 1L;
                uint16_t *l_981 = (void*)0;
                int32_t l_982 = (-9L);
                int64_t ****l_983 = &l_839[2][4][1];
                int64_t *****l_984 = &l_983;
                union U3 *l_1001 = &g_55;
                int32_t l_1005 = (-1L);
                int32_t l_1007 = (-3L);
                int32_t l_1009 = 0xD3B098BDL;
                int16_t l_1015 = 0x8138L;
                const int32_t **l_1037 = (void*)0;
                int8_t l_1038 = 6L;
                int i, j;
                l_816 ^= (((safe_sub_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((0xEE0422D6E33CCE32LL || ((safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((g_441 || (safe_sub_func_int16_t_s_s((~l_928), (((safe_div_func_uint64_t_u_u((l_952 != l_953), ((*g_290) = (safe_mul_func_int8_t_s_s((0xBBL | ((0x3026L || (*g_231)) ^ g_249[0][6][0])), 0x9AL))))) && 0x6EAD8DF1L) <= g_48)))) & p_14.f2) >= p_14.f0), l_310.f1)), l_956)), l_928)) < g_48)), g_233)) <= l_928), l_957[1][4])) > g_134[2][1][3]) >= l_958);
                l_982 = (safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s((!(g_964 == &g_965)), (safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((((*g_231) |= (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(p_14.f2, 7)) , (g_161.f0 = ((safe_mod_func_uint16_t_u_u((0x0300L < p_14.f2), ((l_928 , (safe_mul_func_uint8_t_u_u(l_980, p_14.f0))) && p_14.f2))) , 0UL))), 0x8C16L)), p_14.f0))) >= 6UL), g_134[3][0][2])), p_14.f1)))), l_928));
                if (((((*l_984) = l_983) == (void*)0) >= (g_407 < (-1L))))
                { 
                    uint32_t l_995[2][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
                    union U2 l_996 = {1L};
                    uint64_t *l_997 = &g_441;
                    union U3 **l_1002 = &l_1001;
                    int32_t l_1006 = 0xF4DE7394L;
                    int32_t l_1008 = 1L;
                    int32_t l_1010 = 0x48FAC5A3L;
                    int32_t l_1011 = 0L;
                    int32_t l_1013 = 0L;
                    int32_t l_1014 = 0L;
                    int32_t l_1016 = 1L;
                    int i, j;
                    l_998[1] = (safe_rshift_func_uint8_t_u_u((((1UL != (((0x5D15DE2CL != ((safe_mod_func_uint8_t_u_u((((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((func_25(l_995[0][0], l_996, p_14.f1) , ((*l_997) = (g_274 == 0UL))) >= p_14.f0), g_107[4])), l_928)) == 0x268EL) || l_995[1][3]), l_995[0][0])) <= g_48)) , (*g_642)) , 0xFCC6129EL)) | p_14.f1) > 0x74B3L), p_14.f2));
                    (*g_726) = l_999;
                    l_29[4].f3 &= ((l_1000 == ((*l_1002) = l_1001)) & ((void*)0 == g_1003[0]));
                    --l_1017;
                    if (p_14.f0)
                        continue;
                }
                else
                { 
                    int32_t l_1025 = 0xE364FC78L;
                    uint32_t * const **l_1029 = &l_1028;
                    g_1031 = (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((!(-10L)), (((p_14.f2 <= (&g_642 != (void*)0)) | l_1025) & (safe_add_func_uint8_t_u_u((((*l_1029) = l_1028) == (g_139 , l_1030)), p_14.f0))))), l_1025));
                }
                l_1038 ^= (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_1036 == l_1037), (g_81 |= g_134[2][1][1]))), p_14.f1));
                return l_999;
            }
            if (((safe_mul_func_int8_t_s_s((func_25((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((+(safe_lshift_func_uint8_t_u_u((8UL | ((safe_mul_func_uint16_t_u_u(5UL, (18446744073709551612UL == (((*l_1052) = &g_641) != (void*)0)))) <= ((((l_1054 , (safe_lshift_func_int16_t_s_s((0xDB43L && p_14.f2), p_14.f1))) || 0xACL) | p_14.f2) , g_274))), g_81))), 0xF00FL)) <= 0x54134CE1L), 1UL)), l_933)), g_197, p_14.f0) , g_233), 0x93L)) < p_14.f0))
            { 
                int16_t l_1059 = 0xACF7L;
                int32_t l_1060 = 0x924DF4C1L;
                int32_t l_1061[7][7][2] = {{{0x6A5010C2L,0xFF30FB0EL},{0x36DAC545L,0x10FC7587L},{(-1L),(-1L)},{0x5ABB4781L,0x3818A255L},{0x430A8903L,0xA6245A0FL},{1L,0x9AFF2A37L},{1L,0xFCFB7F16L}},{{(-1L),0x0482B9C9L},{0x3818A255L,0x2EE0AE80L},{0xC8222FC2L,0x8AA461EEL},{0x4B6E820AL,0L},{0x65AC9D8FL,0x9AFF2A37L},{0x2EBEFD5BL,0x9AFF2A37L},{0x65AC9D8FL,0L}},{{0x0482B9C9L,(-1L)},{0x2C002AB0L,0x36DAC545L},{1L,(-1L)},{(-2L),0x3818A255L},{0x1C934B8AL,0L},{0xC8222FC2L,0x2EBEFD5BL},{(-1L),1L}},{{0xA6245A0FL,0xFF30FB0EL},{0xB80BE223L,0xD3EC4977L},{0x5ABB4781L,1L},{(-1L),0xB80BE223L},{(-1L),0x4B6E820AL},{(-1L),0x8AA461EEL},{0x6A5010C2L,0x6A5010C2L}},{{0xD39B2C05L,0xDE0FDE1CL},{0xA81E832EL,0x0482B9C9L},{0x2EE0AE80L,0xA6245A0FL},{(-1L),0x2EE0AE80L},{0x8AA461EEL,0x1C934B8AL},{0x8AA461EEL,0x2EE0AE80L},{(-1L),0xA6245A0FL}},{{0x2EE0AE80L,0x0482B9C9L},{0xA81E832EL,0xDE0FDE1CL},{0xD39B2C05L,0x6A5010C2L},{0x6A5010C2L,0x8AA461EEL},{(-1L),0x4B6E820AL},{(-1L),0xB80BE223L},{(-1L),1L}},{{0x5ABB4781L,0xD3EC4977L},{0xB80BE223L,0xFF30FB0EL},{0xA6245A0FL,1L},{(-1L),0x2EBEFD5BL},{0xC8222FC2L,0L},{0x1C934B8AL,0x3818A255L},{(-2L),(-1L)}}};
                int i, j, k;
                l_310.f2 |= p_14.f1;
                for (l_933 = 0; (l_933 >= (-9)); l_933--)
                { 
                    int64_t l_1062 = 9L;
                    int32_t l_1063 = (-10L);
                    int32_t l_1064 = (-8L);
                    int32_t l_1065 = 0xA154B1A4L;
                    uint16_t *l_1076 = &g_89;
                    l_1059 ^= 0x24BDDAE2L;
                    ++g_1066;
                    l_827[1][1] &= (safe_unary_minus_func_uint32_t_u((p_14.f2 > (((safe_unary_minus_func_int16_t_s(((void*)0 != l_1073))) < ((*l_1076) = (g_1074[1] != &g_1075))) != ((*l_953) = 1L)))));
                    (*l_834) = &l_1061[6][5][0];
                    l_827[0][2] &= (g_1066 , (***l_833));
                }
            }
            else
            { 
                uint32_t l_1077 = 0x198ACA2AL;
                --l_1077;
                return l_999;
            }
        }
    }
    l_827[1][0] |= ((safe_mul_func_uint8_t_u_u(0x9BL, l_1082)) , (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((-3L) | ((((l_29[6] , 4294967292UL) , g_1092) ^ p_14.f1) ^ g_55.f0)), 4)), (*g_231))));
    g_1102 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((18446744073709551610UL >= 0x95DBC148E276793CLL), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_14.f0, (((p_14.f0 <= p_14.f0) >= (l_827[1][0] ^= p_14.f1)) || p_14.f0))) || p_14.f1), p_14.f2)))), l_1101));
    if (((safe_sub_func_int32_t_s_s((((((*l_807) , p_14.f1) , (((((**g_964) , (safe_add_func_int64_t_s_s(((void*)0 != l_1107), g_139.f0))) && (l_29[5] , (*g_231))) < 0xE480L) , p_14.f1)) , &l_1089) != &l_1091), l_914[1])) , (-1L)))
    { 
        int32_t *l_1108 = (void*)0;
        (*l_834) = l_1108;
    }
    else
    { 
        int8_t l_1113 = 0x16L;
        int32_t l_1114 = 0xE4578C20L;
        int32_t l_1115[7][2][7] = {{{0x282C24C3L,0L,0x282C24C3L,0xB88429D1L,4L,2L,0L},{1L,0L,0x4A683EC8L,0x1C728EADL,0x91987267L,0x72A16F09L,0x1755C33FL}},{{0x504EDFF6L,0x282C24C3L,2L,0xEA9364B6L,0xEA9364B6L,2L,0x282C24C3L},{0x1755C33FL,9L,0x3C28F4A7L,0L,0L,0xF41405E4L,(-10L)}},{{0L,0x0DE70D9AL,0L,(-1L),0L,(-9L),0x6E77265CL},{0x1C728EADL,0x2E61AF92L,0L,0L,0x2E61AF92L,0x1C728EADL,0xC3C18D8DL}},{{0L,0x6E77265CL,0x504EDFF6L,0xEA9364B6L,0xB88429D1L,5L,4L},{(-10L),0x91987267L,9L,0x1C728EADL,3L,0x2E61AF92L,3L}},{{0xB88429D1L,0x6E77265CL,0x6E77265CL,0xB88429D1L,0x0DE70D9AL,0xEA9364B6L,(-9L)},{0xF41405E4L,0x2E61AF92L,0x57022CAEL,0x91987267L,0x1755C33FL,0x552D89B8L,0L}},{{5L,0x0DE70D9AL,(-9L),0L,0L,0L,(-9L)},{9L,9L,0x72A16F09L,0xA15C4806L,0x552D89B8L,0xC3C18D8DL,3L}},{{(-1L),0x282C24C3L,2L,0x6E77265CL,5L,(-1L),4L},{0xC3C18D8DL,0L,0x552D89B8L,3L,0x552D89B8L,0L,0xC3C18D8DL}}};
        union U2 **l_1142 = (void*)0;
        union U3 * const *l_1175 = &l_1000;
        uint64_t *l_1188 = &g_441;
        uint16_t *l_1200[5];
        struct S0 l_1214[2] = {{0x9833L,18446744073709551615UL,0x6E449B5C92AE18B5LL,3L,6L},{0x9833L,18446744073709551615UL,0x6E449B5C92AE18B5LL,3L,6L}};
        uint32_t *l_1220 = &l_828;
        uint32_t **l_1219 = &l_1220;
        int32_t *l_1236[3][6] = {{&l_827[0][2],&l_1082,&l_827[0][2],&l_1082,&l_827[0][2],&l_1082},{&l_827[0][2],&l_1082,&l_827[0][2],&l_1082,&l_827[0][2],&l_1082},{&l_827[0][2],&l_1082,&l_827[0][2],&l_1082,&l_827[0][2],&l_1082}};
        int8_t l_1285 = 0x88L;
        union U1 **l_1298[5];
        int32_t l_1309 = 4L;
        uint64_t l_1311 = 0x16C59B4606141D66LL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1200[i] = &l_39.f0;
        for (i = 0; i < 5; i++)
            l_1298[i] = (void*)0;
        for (g_197.f4 = 0; (g_197.f4 != 18); g_197.f4 = safe_add_func_int64_t_s_s(g_197.f4, 6))
        { 
            int16_t l_1111 = 2L;
            int32_t *l_1112[6];
            int8_t l_1116 = 1L;
            uint32_t l_1117 = 0xD16072C5L;
            int i;
            for (i = 0; i < 6; i++)
                l_1112[i] = (void*)0;
            --l_1117;
            for (l_310.f0 = 0; (l_310.f0 > 22); l_310.f0 = safe_add_func_int64_t_s_s(l_310.f0, 9))
            { 
                const int32_t *l_1124 = &l_1114;
                uint16_t l_1134 = 65527UL;
                int32_t l_1154 = 0x1965A8B0L;
                int32_t l_1155[3][5][5] = {{{1L,0x21402572L,(-1L),1L,0L},{0x8DA1D8A2L,0x918C5279L,(-7L),0xE9C8E1AFL,0L},{0x80A00A18L,0L,1L,1L,1L},{0x80A00A18L,(-1L),0x80A00A18L,0xAE81F079L,(-7L)},{0x8DA1D8A2L,0x80A00A18L,0x79E74566L,0x918C5279L,1L}},{{1L,(-1L),(-7L),0x17B57D62L,(-8L)},{(-7L),1L,0x79E74566L,1L,0x7C50E78DL},{0L,(-7L),0x80A00A18L,0L,1L},{0xE9C8E1AFL,0L,1L,0L,1L},{0xAE81F079L,0xAE81F079L,(-7L),(-1L),0x7C50E78DL}},{{1L,(-1L),(-1L),0x8DA1D8A2L,(-8L)},{0x21402572L,0x9A6F6F0DL,0L,(-7L),1L},{0L,(-1L),(-1L),(-1L),(-7L)},{(-1L),0xAE81F079L,0x8DA1D8A2L,7L,1L},{(-1L),0L,7L,7L,0L}}};
                union U1 l_1159 = {0xDF5276E0L};
                int16_t l_1183[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1183[i] = 0x97E3L;
                if (l_1114)
                { 
                    union U3 **l_1122 = &l_1000;
                    struct S0 *l_1123 = &l_29[4];
                    const int32_t **l_1125[3][5] = {{(void*)0,&l_1124,&l_1124,(void*)0,&l_1124},{&l_1124,&l_1124,&l_1124,&l_1124,&l_1124},{&l_1124,(void*)0,&l_1124,&l_1124,(void*)0}};
                    int i, j;
                    (*l_834) = l_1112[4];
                    if (l_1113)
                        break;
                    (*l_1122) = &p_14;
                    (*l_1123) = l_29[5];
                    g_1126 = l_1124;
                }
                else
                { 
                    uint64_t l_1135[3];
                    uint16_t *l_1151 = &l_39.f0;
                    uint32_t *l_1152 = (void*)0;
                    uint32_t *l_1153[5][6] = {{&l_828,&l_1117,&l_1117,&l_1117,&l_1117,&l_828},{&g_407,&l_828,&l_1117,&l_828,&g_407,&g_407},{&g_407,&l_828,&l_828,&g_407,&l_1117,&g_407},{&g_407,&l_1117,&g_407,&l_828,&l_828,&g_407},{&g_407,&g_407,&l_828,&l_1117,&l_828,&g_407}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1135[i] = 18446744073709551615UL;
                    l_1135[2] ^= (safe_lshift_func_int16_t_s_s((((!((((((l_819 = 0x945118F5L) <= p_14.f2) & (-10L)) >= 0x16ACL) , ((((safe_rshift_func_int16_t_s_s(((*l_953) = ((safe_mod_func_int8_t_s_s((*l_1124), p_14.f0)) && (*l_1124))), p_14.f2)) != (*g_231)) < g_407) >= p_14.f1)) , g_139.f3)) != 1L) && (*g_290)), l_1134));
                    l_1155[1][0][4] = (l_1114 = ((safe_add_func_uint16_t_u_u(65535UL, (((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((l_1154 = (((void*)0 != l_1142) , (p_14.f1 == (safe_sub_func_int32_t_s_s((*l_1124), (p_14.f1 & (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((*l_1151) = l_1113), p_14.f0)), 0)), 6)))))))), l_1135[1])) >= l_1135[1]), l_1115[3][1][4])) || (-1L)) > (*g_290)))) || 4294967288UL));
                    return g_139;
                }
                if ((+(((l_1082 = (1UL >= (p_14.f0 ^ ((l_1159 , l_1115[3][1][4]) >= (safe_mod_func_int8_t_s_s((+((((((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s(0x38235B520484CAACLL)) <= (l_1155[1][0][4] = 0x0F59C8A5L)), (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((&l_1087 == (void*)0), p_14.f0)) ^ 0x95CF3A899B8DABC4LL) ^ (-1L)), p_14.f2)), p_14.f0)))), g_1031)) != p_14.f2) ^ p_14.f0) || p_14.f2) == 0x6072A0C9L) != (*g_1126))), p_14.f1)))))) , 1UL) || 0x75ABA23909030BC8LL)))
                { 
                    union U3 * const *l_1174 = &l_1000;
                    l_1175 = l_1174;
                    if (p_14.f1)
                        continue;
                }
                else
                { 
                    uint32_t l_1176 = 0x6764F19EL;
                    struct S0 l_1179[5][7][4] = {{{{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L},{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL},{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L},{0x8738L,1UL,0L,0x897CFE77L,-4L}},{{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L},{8L,0x1CE7230FL,6L,6L,1L},{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL},{0x7014L,18446744073709551615UL,8L,0xBEC90A84L,0x58F890C5L}},{{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L},{0x8738L,1UL,0L,0x897CFE77L,-4L},{0x8738L,1UL,0L,0x897CFE77L,-4L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L}},{{-1L,0xEB48644BL,0xE07E6E920D09369ALL,1L,1L},{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L},{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L}},{{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L},{0x7014L,18446744073709551615UL,8L,0xBEC90A84L,0x58F890C5L},{1L,0xBA63D10EL,0x81E8636AEFF9D7C3LL,1L,8L},{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L}},{{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{0xA3ABL,0x06112B52L,0x2650C1000C63C0A0LL,0x0BC9AE58L,-10L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L}},{{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L},{0x7014L,18446744073709551615UL,8L,0xBEC90A84L,0x58F890C5L},{0xB579L,0UL,0xE16B2B7C8FEC4BA2LL,-1L,0xD9FE057DL},{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L}}},{{{8L,0x1CE7230FL,6L,6L,1L},{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L},{8L,0x1CE7230FL,6L,6L,1L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L}},{{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{0x8738L,1UL,0L,0x897CFE77L,-4L},{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L},{0x7014L,18446744073709551615UL,8L,0xBEC90A84L,0x58F890C5L}},{{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L},{8L,0x1CE7230FL,6L,6L,1L},{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L},{0x8738L,1UL,0L,0x897CFE77L,-4L}},{{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L},{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL},{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L},{0xA3ABL,0x06112B52L,0x2650C1000C63C0A0LL,0x0BC9AE58L,-10L}},{{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L},{0L,1UL,0x6E3144F85AF99743LL,0x2471CE48L,-8L},{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L},{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L}},{{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{8L,0x1CE7230FL,6L,6L,1L},{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L}},{{8L,0x1CE7230FL,6L,6L,1L},{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L},{0xB579L,0UL,0xE16B2B7C8FEC4BA2LL,-1L,0xD9FE057DL},{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L}}},{{{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L},{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{0xB579L,0UL,0xE16B2B7C8FEC4BA2LL,-1L,0xD9FE057DL}},{{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L},{1L,0xBA63D10EL,0x81E8636AEFF9D7C3LL,1L,8L},{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L}},{{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L},{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L},{0x8738L,1UL,0L,0x897CFE77L,-4L}},{{0x7014L,18446744073709551615UL,8L,0xBEC90A84L,0x58F890C5L},{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L}},{{8L,0x1CE7230FL,6L,6L,1L},{0xA3ABL,0x06112B52L,0x2650C1000C63C0A0LL,0x0BC9AE58L,-10L},{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L},{1L,0xBA63D10EL,0x81E8636AEFF9D7C3LL,1L,8L}},{{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L},{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L},{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L}},{{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L},{-1L,0xEB48644BL,0xE07E6E920D09369ALL,1L,1L},{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L},{0xB579L,0UL,0xE16B2B7C8FEC4BA2LL,-1L,0xD9FE057DL}}},{{{8L,0x1CE7230FL,6L,6L,1L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{8L,0x1CE7230FL,6L,6L,1L}},{{0x7014L,18446744073709551615UL,8L,0xBEC90A84L,0x58F890C5L},{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL},{8L,0x1CE7230FL,6L,6L,1L},{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L}},{{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L},{0xB579L,0UL,0xE16B2B7C8FEC4BA2LL,-1L,0xD9FE057DL},{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L},{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L}},{{-5L,18446744073709551615UL,0x6DA79DB3FE5F6BF4LL,1L,0L},{1L,0xBA63D10EL,0x81E8636AEFF9D7C3LL,1L,8L},{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L}},{{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL},{0xB579L,0UL,0xE16B2B7C8FEC4BA2LL,-1L,0xD9FE057DL},{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L},{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L}},{{-1L,0xEB48644BL,0xE07E6E920D09369ALL,1L,1L},{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL},{-1L,0xEB48644BL,0xE07E6E920D09369ALL,1L,1L},{8L,0x1CE7230FL,6L,6L,1L}},{{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L},{0xB579L,0UL,0xE16B2B7C8FEC4BA2LL,-1L,0xD9FE057DL}}},{{{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L},{-1L,0xEB48644BL,0xE07E6E920D09369ALL,1L,1L},{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L},{0xF5F9L,1UL,0xE8F4657F53B2C298LL,7L,0x38303AC7L}},{{0x8738L,1UL,0L,0x897CFE77L,-4L},{0xBA8CL,0x82368916L,9L,0x67998B22L,0xB6493098L},{-6L,18446744073709551615UL,-1L,0xA66C2645L,-1L},{1L,0xBA63D10EL,0x81E8636AEFF9D7C3LL,1L,8L}},{{0xCA65L,0x0098B7BCL,5L,0x76D2CBDCL,-4L},{0xA3ABL,0x06112B52L,0x2650C1000C63C0A0LL,0x0BC9AE58L,-10L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L},{1L,18446744073709551614UL,0xBA69DE8FCDD96A80LL,1L,1L}},{{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{-1L,0xEB48644BL,0xE07E6E920D09369ALL,1L,1L},{0x8738L,1UL,0L,0x897CFE77L,-4L}},{{-1L,0xEB48644BL,0xE07E6E920D09369ALL,1L,1L},{0x8738L,1UL,0L,0x897CFE77L,-4L},{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L},{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL}},{{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL},{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L},{-1L,0xD6796B28L,0x09E17A4F1972CA51LL,1L,0xD01CEC57L},{-5L,1UL,6L,0xD7DAA3F7L,0xFA91D9D4L}},{{-5L,18446744073709551615UL,0x6DA79DB3FE5F6BF4LL,1L,0L},{0xBCEFL,0x19A44FF6L,0xEC601C966997EF9CLL,0L,-1L},{0xFB43L,1UL,0xE6D0B64954EFCED3LL,0L,-1L},{0L,0xEE235B27L,5L,0xEC2A8B87L,0x86A7097DL}}}};
                    struct S0 *l_1180 = &l_1179[0][4][3];
                    int i, j, k;
                    ++l_1176;
                    if ((*g_1126))
                        break;
                    (*l_1180) = l_1179[1][4][2];
                    (*l_1180) = g_139;
                }
                for (l_1017 = 0; (l_1017 < 48); l_1017 = safe_add_func_int32_t_s_s(l_1017, 1))
                { 
                    uint64_t l_1184 = 0xF01A9E3B01640BEALL;
                    int32_t l_1187 = 0x775D74BEL;
                    if (l_1183[2])
                        break;
                    if (p_14.f0)
                        continue;
                    --l_1184;
                    l_1187 |= (*l_1124);
                }
                (***g_890) = (***g_890);
            }
            if (p_14.f0)
                continue;
        }
        if ((p_14.f0 == ((l_1188 != &l_40) < ((((safe_add_func_uint8_t_u_u((p_14.f0 , (!(((((((0xA96BL == ((*g_231) = (safe_lshift_func_uint8_t_u_s((((g_1092 &= (+(!((l_1114 = (safe_div_func_int16_t_s_s(((*l_807) , (safe_add_func_uint16_t_u_u((l_1115[1][0][6] = 0UL), (-4L)))), 0x3BDBL))) | (*g_231))))) > p_14.f1) < l_1113), 4)))) > p_14.f0) , p_14.f2) != l_1113) ^ 1L) , p_14.f1) < p_14.f0))), p_14.f1)) ^ 0xEE3C5694617EA089LL) != p_14.f0) < p_14.f0))))
        { 
            int32_t *l_1207 = &l_310.f2;
            for (g_197.f4 = (-1); (g_197.f4 <= 26); g_197.f4 = safe_add_func_int16_t_s_s(g_197.f4, 4))
            { 
                struct S0 l_1203[1] = {{1L,0x7823E94CL,0x03B752F2614C345DLL,0x0F5AEEE6L,0x7E8509EEL}};
                struct S0 *l_1204 = &l_29[3];
                uint32_t *l_1215 = (void*)0;
                uint32_t *l_1216 = &g_1066;
                int32_t *** const *l_1227 = &g_891;
                int32_t *** const **l_1226[6][6] = {{&l_1227,(void*)0,&l_1227,&l_1227,&l_1227,&l_1227},{&l_1227,&l_1227,&l_1227,&l_1227,(void*)0,(void*)0},{(void*)0,&l_1227,&l_1227,&l_1227,(void*)0,&l_1227},{&l_1227,(void*)0,&l_1227,&l_1227,(void*)0,&l_1227},{&l_1227,&l_1227,(void*)0,(void*)0,(void*)0,&l_1227},{(void*)0,&l_1227,&l_1227,&l_1227,&l_1227,&l_1227}};
                int i, j;
                (*l_1204) = l_1203[0];
                for (g_441 = 0; (g_441 != 30); g_441 = safe_add_func_int8_t_s_s(g_441, 6))
                { 
                    (**l_833) = l_1207;
                }
                for (p_14.f0 = 23; (p_14.f0 > 0); --p_14.f0)
                { 
                    if ((*l_1207))
                        break;
                }
                l_1115[3][1][4] = ((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_1214[1] , (((((g_55 , (((++(*l_1216)) , l_1219) == (void*)0)) >= (&l_1030 != ((safe_rshift_func_uint16_t_u_s(0UL, 14)) , &l_1219))) != p_14.f1) >= l_1115[3][1][1]) || 65527UL)), 0xE40EE052L)), p_14.f1)) ^ p_14.f2);
                for (g_89 = 0; (g_89 <= 5); g_89 += 1)
                { 
                    int32_t ** const ***l_1225 = (void*)0;
                    int i;
                    (*l_1207) = (safe_sub_func_int64_t_s_s((((void*)0 == (**g_890)) || ((l_1225 == l_1226[3][2]) != 0x55L)), 1L));
                    if (l_914[g_89])
                        continue;
                    if (l_914[g_89])
                        break;
                }
            }
        }
        else
        { 
            int32_t ****l_1228 = &l_833;
            union U2 l_1232 = {7L};
            union U2 l_1233 = {4L};
            struct S0 l_1234 = {0x7EBFL,0xA3FBB583L,0xEFF46957DE9949B5LL,-1L,0x008149B1L};
            int32_t *l_1235 = &l_816;
            uint32_t **l_1239 = &l_1220;
            uint16_t l_1247 = 0x1568L;
            int32_t l_1260[2];
            int32_t l_1262 = 0xAB9DC537L;
            int32_t l_1264[2][5];
            int i, j;
            for (i = 0; i < 2; i++)
                l_1260[i] = 0xF070AB9DL;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1264[i][j] = 0L;
            }
            (*g_726) = l_1234;
            l_1236[0][0] = l_1235;
            for (g_197.f3.f2 = 0; (g_197.f3.f2 >= 1); g_197.f3.f2 = safe_add_func_int64_t_s_s(g_197.f3.f2, 7))
            { 
                uint32_t ***l_1240 = (void*)0;
                uint32_t ***l_1241 = &l_1219;
                int32_t l_1251 = 0xEDF9336BL;
                int32_t l_1257 = 0x060770BDL;
                int32_t l_1266 = 0xA1ED8457L;
                int32_t l_1267 = (-6L);
                int32_t l_1269 = 0L;
                int32_t l_1270 = 0xF4C82BE9L;
                (*l_1241) = l_1239;
                for (g_139.f4 = 0; (g_139.f4 > (-6)); g_139.f4--)
                { 
                    int8_t l_1244 = 0x4EL;
                    (*l_1235) &= p_14.f0;
                    if (p_14.f1)
                        continue;
                    if (l_1244)
                        continue;
                }
                for (l_1017 = (-2); (l_1017 < 36); l_1017 = safe_add_func_uint32_t_u_u(l_1017, 6))
                { 
                    int32_t l_1252 = 0x47B28BDBL;
                    int32_t l_1253 = 0x5CFE7FB4L;
                    int32_t l_1254 = 0xF0078472L;
                    int32_t l_1255 = 9L;
                    int32_t l_1256 = (-9L);
                    int32_t l_1258 = (-1L);
                    int32_t l_1259 = 1L;
                    int32_t l_1261 = 1L;
                    int32_t l_1263 = 0xD13CC50DL;
                    int32_t l_1268 = 0x8A10CB8EL;
                    uint16_t l_1271 = 65534UL;
                    ++l_1247;
                    ++l_1271;
                }
                if ((safe_mod_func_int64_t_s_s((*g_290), 0xC88B042D5A9C1E20LL)))
                { 
                    return g_139;
                }
                else
                { 
                    struct S0 l_1276 = {0x8664L,18446744073709551610UL,0xC9CECEDD04F6BC2BLL,-8L,3L};
                    g_139 = l_1276;
                    (*l_1235) ^= l_1266;
                }
            }
            l_310.f3.f3 = (safe_div_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(0x92E5L, ((p_14.f0 & ((((0x787DL <= (((*l_1235) = (((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((**g_964) , ((((0xB862B5493B248759LL | ((void*)0 == l_807)) == g_134[0][0][6]) , p_14.f1) != l_1285)), p_14.f2)), (*g_231))) != 9UL) <= p_14.f0)) <= p_14.f0)) & g_2[1]) | 1UL) >= 0x269F8F86L)) == 0x2FL))) >= (-1L)) != (**g_289)) , p_14.f2), p_14.f0));
        }
        (*g_964) = l_807;
        for (l_828 = 0; (l_828 < 46); l_828 = safe_add_func_int16_t_s_s(l_828, 9))
        { 
            int32_t *l_1288 = &l_819;
            int32_t l_1308[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1308[i] = 0x8B3ACF03L;
            for (l_817 = 0; (l_817 <= 1); l_817 += 1)
            { 
                uint16_t l_1292[7];
                const union U2 l_1301 = {0xFBAF3E4BC6D23893LL};
                int i;
                for (i = 0; i < 7; i++)
                    l_1292[i] = 65534UL;
                if (p_14.f0)
                    break;
                (**g_891) = l_1288;
                if (p_14.f1)
                    break;
                for (l_310.f3.f2 = 0; (l_310.f3.f2 <= 1); l_310.f3.f2 += 1)
                { 
                    uint32_t l_1289[5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1289[i] = 0x43B0B3A2L;
                    l_1289[3]--;
                    l_1292[3]--;
                    if (g_134[l_817][l_817][(l_817 + 5)])
                        break;
                    (**l_834) |= 0x174ACCFAL;
                    return g_139;
                }
                for (g_139.f1 = 0; (g_139.f1 <= 4); g_139.f1 += 1)
                { 
                    int32_t **l_1295[2][1][7] = {{{&l_1288,&l_1236[2][1],&l_1236[2][1],&l_1288,&l_1236[2][1],&l_1236[2][1],&l_1288}},{{&l_1236[0][5],&l_1288,&l_1236[0][5],&l_1236[0][5],&l_1288,&l_1236[0][5],&l_1236[0][5]}}};
                    union U1 *l_1306 = &g_808;
                    int i, j, k;
                    (***l_833) ^= l_1115[(l_817 + 3)][l_817][(g_139.f1 + 1)];
                    (**l_833) = &l_827[l_817][g_139.f1];
                    l_1288 = ((***g_890) = l_1288);
                    l_1308[1] |= ((safe_lshift_func_uint8_t_u_s((l_1298[0] == (((l_827[l_817][g_139.f1] == (safe_rshift_func_int8_t_s_s(((l_1301 , (safe_lshift_func_int8_t_s_u(((*g_642) , l_827[l_817][g_139.f1]), 6))) != (((p_14.f0 & ((safe_lshift_func_uint16_t_u_s(((g_1307 = l_1306) != (*g_964)), 1)) || p_14.f0)) && g_274) || p_14.f0)), p_14.f0))) , (****g_890)) , &g_965)), p_14.f1)) , (**l_834));
                }
            }
        }
        l_1311++;
    }
    if (p_14.f2)
    { 
        int16_t l_1327 = (-8L);
        int32_t l_1350[4] = {1L,1L,1L,1L};
        int32_t l_1351[1];
        uint8_t *l_1353 = &g_1092;
        int8_t *l_1355 = &g_197.f4;
        int8_t *l_1356 = &l_907;
        int32_t *l_1357 = &l_1082;
        int32_t *l_1358 = (void*)0;
        int32_t *l_1359 = &l_827[0][1];
        int32_t *l_1360 = (void*)0;
        int32_t *l_1361[6];
        int8_t l_1362 = 0x52L;
        int8_t l_1363 = 0L;
        struct S0 l_1367 = {0x7C0CL,18446744073709551606UL,0x17FEA73FB5091E6ELL,0xA90BA9D2L,0xC873A9C9L};
        int i;
        for (i = 0; i < 1; i++)
            l_1351[i] = 0x17963259L;
        for (i = 0; i < 6; i++)
            l_1361[i] = (void*)0;
        for (l_310.f3.f1 = 0; (l_310.f3.f1 == 28); ++l_310.f3.f1)
        { 
            int8_t l_1323 = 0xF0L;
            union U3 **l_1324 = &l_1000;
            union U3 ***l_1330 = &g_1328;
            int32_t *l_1331 = &g_197.f3.f3;
            struct S0 l_1335 = {0xFB59L,0x1AE3CCBFL,0L,0x9B241453L,0x973B3E0DL};
            uint64_t l_1349[7] = {18446744073709551607UL,0UL,0UL,18446744073709551607UL,0UL,0UL,18446744073709551607UL};
            int i;
            (*l_1331) = ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((&g_139 == &g_139), ((~(safe_rshift_func_uint16_t_u_u(l_1323, 12))) == (((l_1323 , l_1324) == ((*l_1330) = (((*l_807) , ((safe_add_func_int64_t_s_s(l_1327, 0xC51690A1B301AAEALL)) , p_14)) , g_1328))) , 0xD5L)))), l_1323)) , p_14.f2);
            if (l_1332)
                continue;
            for (g_275 = 13; (g_275 < 23); g_275 = safe_add_func_int64_t_s_s(g_275, 8))
            { 
                struct S0 l_1336 = {9L,18446744073709551615UL,0x6EF623BE2A4D4D68LL,0L,0L};
                int32_t *l_1337[7][4] = {{&g_2[3],&g_2[3],&g_2[3],&g_2[3]},{&g_2[3],&g_2[3],&g_2[3],&g_2[3]},{&g_2[3],&g_2[3],&g_2[3],&g_2[3]},{&g_2[3],&g_2[3],&g_2[3],&g_2[3]},{&g_2[3],&g_2[3],&g_2[3],&g_2[3]},{&g_2[3],&g_2[3],&g_2[3],&g_2[3]},{&g_2[3],&g_2[3],&g_2[3],&g_2[3]}};
                int i, j;
                for (l_828 = 0; (l_828 <= 1); l_828 += 1)
                { 
                    return l_1335;
                }
                if (p_14.f2)
                    break;
                for (l_1323 = 0; (l_1323 <= 5); l_1323 += 1)
                { 
                    return l_1336;
                }
                l_1338 = l_1337[0][1];
                l_1351[0] &= (safe_sub_func_int64_t_s_s(p_14.f0, (l_1350[3] &= (((p_14.f1 != ((((**g_289) = (((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((-9L), 0x76DEL)), (((safe_mul_func_uint8_t_u_u(((*g_642) , ((safe_rshift_func_uint8_t_u_u(252UL, 4)) != p_14.f1)), 0xB7L)) || l_1327) , l_1349[5]))) <= 0xD27427CDL) , 0x57445280BFFEEAC6LL)) >= (-1L)) >= (-4L))) , p_14.f0) , (**g_289)))));
            }
        }
        (*g_726) = l_29[4];
        g_1364++;
        for (g_407 = 0; (g_407 <= 0); g_407 += 1)
        { 
            int i;
            l_1351[g_407] = 0x702D4769L;
            if (p_14.f2)
                continue;
            if (p_14.f1)
                continue;
            for (l_819 = 0; (l_819 >= 0); l_819 -= 1)
            { 
                return l_29[1];
            }
            return l_1367;
        }
        (*l_1359) = p_14.f1;
    }
    else
    { 
        int32_t *l_1368 = &l_827[0][4];
        union U4 *l_1369 = &l_39;
        (**l_833) = l_1368;
        (*l_1088) = l_1369;
    }
    return l_1370[2][5][1];
}



static struct S0  func_16(uint32_t  p_17, union U2  p_18, int8_t  p_19, int8_t  p_20)
{ 
    union U4 ***l_643 = &g_641;
    const union U4 *l_645 = &g_161;
    const union U4 **l_644[4][3][7] = {{{&l_645,&l_645,&l_645,&l_645,&l_645,(void*)0,&l_645},{(void*)0,&l_645,&l_645,&l_645,(void*)0,(void*)0,(void*)0},{&l_645,&l_645,&l_645,&l_645,&l_645,(void*)0,&l_645}},{{(void*)0,&l_645,&l_645,&l_645,(void*)0,(void*)0,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,(void*)0,&l_645,&l_645}},{{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,(void*)0,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645}},{{(void*)0,&l_645,&l_645,&l_645,(void*)0,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,(void*)0,&l_645,&l_645}}};
    const union U4 ***l_646 = (void*)0;
    const union U4 ***l_647 = &l_644[2][0][6];
    const int32_t l_652 = 0xA9F02061L;
    int32_t l_662 = 0x751B9612L;
    int64_t **l_663 = &g_290;
    int32_t l_672 = 0x84F8F41DL;
    int32_t l_676[7] = {0xB2778BF2L,0xB2778BF2L,0xB2778BF2L,0xB2778BF2L,0xB2778BF2L,0xB2778BF2L,0xB2778BF2L};
    uint8_t l_678 = 0x71L;
    union U1 *l_681 = &g_196;
    int8_t l_703 = 9L;
    int64_t ***l_716 = &l_663;
    int32_t l_720 = 0x89C0C57FL;
    struct S0 *l_724 = &g_139;
    int64_t l_752 = 0xB7A290B0A051CF38LL;
    int i, j, k;
    if (((((*l_643) = g_641) == ((*l_647) = l_644[2][0][6])) , (safe_sub_func_int64_t_s_s((g_139 , (-1L)), ((safe_mod_func_uint32_t_u_u(l_652, ((l_652 || p_18.f0) || p_18.f4))) || g_48)))))
    { 
        uint64_t *l_657[3];
        int32_t l_658 = 0xE90C1BA8L;
        int32_t l_659 = 0xCB2C2BDFL;
        int32_t *l_673 = &l_659;
        int i;
        for (i = 0; i < 3; i++)
            l_657[i] = &g_441;
        (*l_673) ^= (safe_mod_func_int64_t_s_s((((safe_add_func_uint32_t_u_u((0x4AA9L != (((((l_662 = (++g_441)) | ((((void*)0 == l_663) & p_18.f0) > (safe_add_func_int16_t_s_s(0x4D75L, (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((l_672 = ((g_249[3][0][0] ^ (((*g_231) & p_18.f2) != p_18.f0)) , l_652)), (*g_290))), 1)), 0UL)))))) >= l_658) , 7UL) ^ 0x9D211815L)), l_652)) || 65535UL) && 4294967292UL), p_17));
    }
    else
    { 
        int32_t *l_674 = &g_197.f2;
        int32_t *l_675[7];
        int64_t l_677 = 0x8260AB8A4D47F1AALL;
        union U1 **l_682 = &l_681;
        uint64_t *l_700[7];
        union U4 *l_701 = (void*)0;
        int32_t l_702 = 1L;
        uint8_t l_705 = 0xF1L;
        int16_t * const l_710 = (void*)0;
        int64_t ***l_714[3][7][2] = {{{&g_289,&g_289},{&g_289,&g_289},{&l_663,&g_289},{&l_663,&g_289},{&g_289,&g_289},{&g_289,(void*)0},{&l_663,&l_663}},{{&g_289,&l_663},{&l_663,&l_663},{&g_289,&l_663},{&l_663,(void*)0},{&g_289,&g_289},{&g_289,&g_289},{&l_663,&g_289}},{{&l_663,&g_289},{&g_289,&g_289},{&g_289,(void*)0},{&l_663,&l_663},{&g_289,&l_663},{&l_663,&l_663},{&g_289,&l_663}}};
        union U3 *l_740 = &g_55;
        uint64_t l_749 = 4UL;
        uint32_t l_753 = 8UL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_675[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_700[i] = &g_441;
        --l_678;
        (*l_682) = l_681;
lbl_748:
        if ((safe_div_func_int64_t_s_s((((l_676[4] = (((safe_rshift_func_uint8_t_u_s((0x679383CDL < (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((((*g_641) == ((safe_div_func_uint32_t_u_u((((safe_unary_minus_func_int64_t_s(((**l_663) = (0x0669DE38L || (g_139.f0 >= (l_676[2] >= g_62[0][0])))))) >= ((((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((g_441 = g_89), p_19)), 0xDAB0DD7DL)) == l_652) < 65526UL) <= 3UL)) == g_196.f0), 1UL)) , l_701)) || 65535UL) && l_676[5]) < l_652), g_134[3][0][2])), l_676[4]))), l_662)) , g_55.f1) >= l_702)) & 1UL) ^ g_2[4]), g_139.f4)))
        { 
            int32_t l_704[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            const int16_t *l_711 = &g_139.f0;
            int64_t ****l_715 = &l_714[0][6][0];
            int32_t l_719 = 7L;
            int i;
            l_705++;
            if (((p_19 != (l_704[3] == ((safe_add_func_uint64_t_u_u((l_710 == l_711), (l_719 = ((((((safe_sub_func_uint16_t_u_u((&g_289 != (l_716 = ((*l_715) = l_714[0][0][1]))), (safe_sub_func_int8_t_s_s(l_704[4], g_197.f2)))) > 253UL) & p_19) & 251UL) >= p_18.f1) != g_107[1])))) | 0xA726C8317DD1DE59LL))) < g_55.f1))
            { 
                uint8_t l_721 = 0UL;
                struct S0 **l_725[3][7] = {{(void*)0,(void*)0,&l_724,&l_724,(void*)0,(void*)0,(void*)0},{&l_724,(void*)0,(void*)0,&l_724,(void*)0,&l_724,(void*)0},{&l_724,&l_724,(void*)0,&l_724,(void*)0,&l_724,&l_724}};
                int32_t l_727 = 1L;
                int32_t l_728 = 0xC14FB731L;
                int32_t l_729[2][3] = {{0L,0L,0L},{0L,0L,0L}};
                int32_t l_730 = 0xB7EBF060L;
                uint64_t l_731[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_731[i] = 0UL;
                ++l_721;
                g_726 = l_724;
                ++l_731[0];
                l_676[4] |= ((*l_674) = (0xC9180DC6C2F31C39LL > l_731[0]));
            }
            else
            { 
                union U3 *l_734[2][6];
                union U3 **l_735 = &l_734[0][3];
                uint16_t *l_745 = &g_161.f0;
                int32_t l_746 = 0x08E74346L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_734[i][j] = (void*)0;
                }
                (*l_735) = l_734[1][1];
                (*l_674) = (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((**l_682) , (l_740 == &g_55)), (safe_div_func_uint32_t_u_u(p_20, ((g_196.f2 , (safe_mod_func_uint16_t_u_u(((*l_745) &= (func_32(((p_18.f4 || (((void*)0 != l_681) != (-1L))) ^ 0xB2D876EAL), l_720, p_18.f4, (*l_674)) , g_107[6])), 0x8260L))) & l_746))))) , 0xBCL), (-4L)));
            }
            if (g_196.f0)
                goto lbl_748;
        }
        else
        { 
            struct S0 l_747 = {0L,3UL,0x55FAEA12EE601D8CLL,1L,1L};
            return l_747;
        }
        --l_749;
        ++l_753;
    }
    return (*l_724);
}



static uint64_t  func_23(const union U2  p_24)
{ 
    for (g_441 = 0; (g_441 < 29); g_441 = safe_add_func_int8_t_s_s(g_441, 3))
    { 
        if (p_24.f4)
            break;
    }
    return p_24.f4;
}



static const union U2  func_25(int64_t  p_26, union U2  p_27, const uint32_t  p_28)
{ 
    struct S0 l_327 = {0L,0UL,0x0D30FA18C335714BLL,-8L,-1L};
    int32_t l_329 = 8L;
    int8_t *l_362[3][4];
    union U1 l_367 = {0UL};
    const uint32_t l_370 = 4UL;
    uint16_t *l_396 = (void*)0;
    uint16_t *l_397 = &g_197.f1;
    union U2 l_404 = {9L};
    uint32_t l_405[7] = {18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL};
    uint32_t *l_444 = &g_407;
    uint32_t **l_443 = &l_444;
    int32_t ** const l_470 = &g_61;
    uint64_t *l_475 = &g_441;
    int32_t l_527 = 0L;
    int32_t l_528 = 5L;
    int32_t l_529 = 0x186C1928L;
    int32_t l_530 = 1L;
    int32_t l_534 = 1L;
    int64_t l_611[3][5][3] = {{{1L,0L,0x5ECD6435B443248CLL},{0xA7C6BF5DFE2C9A73LL,0xA7C6BF5DFE2C9A73LL,0x5ADA84E9EAA0E748LL},{1L,0L,0x5ECD6435B443248CLL},{0xA7C6BF5DFE2C9A73LL,0xA7C6BF5DFE2C9A73LL,0x5ADA84E9EAA0E748LL},{1L,0L,0x5ECD6435B443248CLL}},{{0xA7C6BF5DFE2C9A73LL,0xA7C6BF5DFE2C9A73LL,0x5ADA84E9EAA0E748LL},{1L,0L,0x5ECD6435B443248CLL},{0xA7C6BF5DFE2C9A73LL,0xA7C6BF5DFE2C9A73LL,0x5ADA84E9EAA0E748LL},{1L,0L,0x5ECD6435B443248CLL},{0xA7C6BF5DFE2C9A73LL,0xA7C6BF5DFE2C9A73LL,0x5ADA84E9EAA0E748LL}},{{1L,0L,0x5ECD6435B443248CLL},{0xA7C6BF5DFE2C9A73LL,0xA7C6BF5DFE2C9A73LL,0x5ADA84E9EAA0E748LL},{1L,0L,0x5ECD6435B443248CLL},{0xA7C6BF5DFE2C9A73LL,0xA7C6BF5DFE2C9A73LL,0x5ADA84E9EAA0E748LL},{1L,0L,1L}}};
    int32_t *l_634[1];
    int32_t l_635[3];
    uint64_t l_636 = 0x5694B5A915D7B80BLL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_362[i][j] = &g_197.f4;
    }
    for (i = 0; i < 1; i++)
        l_634[i] = &g_62[1][2];
    for (i = 0; i < 3; i++)
        l_635[i] = 0x370FA9FBL;
    for (g_275 = 0; (g_275 >= 7); g_275++)
    { 
        int8_t l_326 = 0x2DL;
        int32_t *l_354 = (void*)0;
        int32_t *l_355 = &g_62[4][2];
        for (p_27.f1 = 0; (p_27.f1 < 27); ++p_27.f1)
        { 
            uint16_t * const l_328[6] = {&g_89,&g_89,&g_89,&g_89,&g_89,&g_89};
            int32_t *l_336[1][6] = {{&l_329,&l_329,&l_329,&l_329,&l_329,&l_329}};
            int64_t l_352[6][1] = {{0x99610C0132F4C1B1LL},{0xA2C53EA8AC744170LL},{0x99610C0132F4C1B1LL},{0xA2C53EA8AC744170LL},{0x99610C0132F4C1B1LL},{0xA2C53EA8AC744170LL}};
            struct S0 *l_353[7] = {&g_197.f3,&g_197.f3,&g_197.f3,&g_197.f3,&g_197.f3,&g_197.f3,&g_197.f3};
            int i, j;
            for (g_196.f0 = (-24); (g_196.f0 >= 26); g_196.f0 = safe_add_func_int16_t_s_s(g_196.f0, 7))
            { 
                for (g_233 = 0; (g_233 <= 48); g_233 = safe_add_func_int8_t_s_s(g_233, 7))
                { 
                    l_329 &= (safe_mod_func_int64_t_s_s((p_27.f4 > 0L), (safe_lshift_func_int8_t_s_u((((~l_326) , (void*)0) != &p_28), (l_327 , (l_328[5] != (void*)0))))));
                }
            }
            g_139.f3 = (g_55 , (safe_lshift_func_uint8_t_u_s(g_62[3][2], ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((void*)0 != l_336[0][5]), (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_327.f0, p_28)), 5)) & (+(safe_mul_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((*g_290), l_327.f2)) ^ 0x09L), p_27.f1)))) != l_352[1][0]), l_327.f1)), p_27.f4)), p_26)))) , (*g_290)) , (*g_231)), p_27.f4)) , p_27.f4))));
            g_139 = l_327;
            g_62[4][2] = l_326;
        }
        if (l_326)
            break;
        (*l_355) = l_326;
    }
    return p_27;
}



static union U4  func_30(union U3  p_31)
{ 
    int32_t l_68 = (-4L);
    int64_t l_106[1][5][5] = {{{0xEA94A57C395B56AFLL,0xDED4E1BE66BFFE0ALL,0xDED4E1BE66BFFE0ALL,0xEA94A57C395B56AFLL,0xDED4E1BE66BFFE0ALL},{0xEA94A57C395B56AFLL,0xEA94A57C395B56AFLL,0x502FCEF8C34F7C35LL,0xEA94A57C395B56AFLL,0xEA94A57C395B56AFLL},{0xDED4E1BE66BFFE0ALL,0xEA94A57C395B56AFLL,0xDED4E1BE66BFFE0ALL,0xDED4E1BE66BFFE0ALL,0xEA94A57C395B56AFLL},{0xEA94A57C395B56AFLL,0xDED4E1BE66BFFE0ALL,0xDED4E1BE66BFFE0ALL,0xEA94A57C395B56AFLL,0xDED4E1BE66BFFE0ALL},{0xEA94A57C395B56AFLL,0xEA94A57C395B56AFLL,0x502FCEF8C34F7C35LL,0xEA94A57C395B56AFLL,0xEA94A57C395B56AFLL}}};
    uint16_t *l_114 = &g_89;
    int32_t l_117[2];
    uint32_t l_130 = 0x9D152B01L;
    int8_t *l_166[1][4][7] = {{{&g_81,&g_81,&g_81,&g_81,&g_81,(void*)0,&g_81},{(void*)0,&g_81,&g_81,(void*)0,&g_81,(void*)0,&g_81},{&g_81,&g_81,(void*)0,&g_81,&g_81,&g_81,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_81}}};
    union U2 l_198 = {0x021D3DD3D9F1B8DDLL};
    uint64_t l_203 = 1UL;
    union U4 l_250 = {65531UL};
    uint8_t l_269[2];
    const struct S0 * const l_300 = &g_139;
    uint16_t l_305[5];
    int32_t *l_306 = &g_2[4];
    uint64_t *l_307 = (void*)0;
    uint64_t *l_308 = &l_203;
    int32_t *l_309 = &g_139.f3;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_117[i] = 2L;
    for (i = 0; i < 2; i++)
        l_269[i] = 255UL;
    for (i = 0; i < 5; i++)
        l_305[i] = 0x3238L;
    for (g_48 = 0; (g_48 <= (-4)); --g_48)
    { 
        int32_t *l_58 = &g_48;
        int32_t **l_59 = (void*)0;
        int32_t **l_60 = (void*)0;
        int32_t l_119 = 0x8791A53EL;
        int32_t l_129 = (-1L);
        struct S0 l_137 = {0L,3UL,0xE0544DDA6C637B4ELL,0xC52D1EABL,-5L};
        union U4 l_141 = {65534UL};
        int32_t l_199 = (-1L);
        int32_t *l_200 = &l_119;
        const int32_t l_227 = 0L;
        uint32_t l_257[1];
        uint32_t l_276 = 0x45BBBC34L;
        union U2 l_288 = {-6L};
        int i;
        for (i = 0; i < 1; i++)
            l_257[i] = 0x8E3BE801L;
        g_61 = l_58;
        for (p_31.f0 = 0; (p_31.f0 >= 20); p_31.f0 = safe_add_func_uint32_t_u_u(p_31.f0, 1))
        { 
            for (g_55.f0 = 0; (g_55.f0 <= 2); g_55.f0 += 1)
            { 
                union U4 l_65 = {0xB111L};
                return l_65;
            }
        }
        if (p_31.f1)
            break;
        for (g_55.f0 = 15; (g_55.f0 > 22); ++g_55.f0)
        { 
            uint32_t l_105 = 0x3F06E912L;
            int32_t l_112 = 0x8EF6BE7AL;
            uint16_t * const l_115[1][3] = {{&g_89,&g_89,&g_89}};
            int32_t l_124 = 0x11D1409FL;
            int32_t l_127 = 0xD130E403L;
            int32_t l_128 = 0L;
            uint32_t l_146 = 0x8E466642L;
            const int32_t l_150[2][7][7] = {{{0x06B8BA93L,0x8ECC62B0L,(-9L),8L,0x8ECC62B0L,0x97D19F8FL,0x8ECC62B0L},{0x9ACA7952L,(-1L),(-1L),0x9ACA7952L,0xFD8A59CAL,0x16B15256L,0x06B8BA93L},{1L,1L,(-1L),(-5L),0x06B8BA93L,1L,1L},{1L,0x06B8BA93L,(-9L),0x06B8BA93L,1L,0L,0x06B8BA93L},{0x9ACA7952L,0xFD8A59CAL,0x16B15256L,0x06B8BA93L,(-1L),0x16B15256L,0x8ECC62B0L},{(-1L),0x8ECC62B0L,(-5L),(-5L),0x8ECC62B0L,(-1L),0xFD8A59CAL},{0x9ACA7952L,0x06B8BA93L,0x97D19F8FL,0x9ACA7952L,0x8ECC62B0L,0x2BCC5AAFL,0x06B8BA93L}},{{1L,1L,(-1L),8L,(-1L),1L,1L},{1L,0x06B8BA93L,(-5L),(-1L),1L,1L,(-1L)},{0x9ACA7952L,0x8ECC62B0L,0x2BCC5AAFL,0x06B8BA93L,0x06B8BA93L,0x2BCC5AAFL,0x8ECC62B0L},{0x06B8BA93L,0xFD8A59CAL,(-5L),8L,0xFD8A59CAL,(-1L),0x8ECC62B0L},{0x16B15256L,0x06B8BA93L,(-1L),0x16B15256L,0x8ECC62B0L,0x16B15256L,(-1L)},{1L,1L,0x97D19F8FL,8L,0x06B8BA93L,0L,1L},{1L,(-1L),(-5L),0x06B8BA93L,1L,1L,0x06B8BA93L}}};
            union U2 l_159[5] = {{0L},{0L},{0L},{0L},{0L}};
            int i, j, k;
            if (l_68)
            { 
                int64_t l_90 = 6L;
                for (l_68 = (-22); (l_68 > 24); l_68++)
                { 
                    int32_t *l_71 = &g_62[2][0];
                    int8_t *l_78 = (void*)0;
                    int8_t *l_79 = (void*)0;
                    int8_t *l_80 = &g_81;
                    uint16_t *l_88 = &g_89;
                    (*l_71) &= (*g_61);
                    if (p_31.f1)
                        break;
                    if (p_31.f2)
                        continue;
                    l_90 ^= (((((safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((*l_80) &= 0x34L), 0)), ((safe_sub_func_int32_t_s_s(p_31.f2, 0xB7C1F666L)) , (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((g_55.f2 >= 0x0D1EF091AFF67138LL), ((*l_88) = 65532UL))), (6UL > 0x97L)))))), 3)) < p_31.f2) < g_55.f1) , (void*)0) != (void*)0);
                    (*l_71) &= p_31.f1;
                }
                g_107[6] &= (((func_32(p_31.f2, ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(p_31.f0, (safe_add_func_uint64_t_u_u((*l_58), g_55.f1)))) == (safe_sub_func_uint64_t_u_u(g_55.f1, g_55.f2))), (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((-6L) >= l_105), p_31.f0)) != l_90), l_106[0][3][0])), 3)))) , p_31.f2), g_62[4][2], p_31.f1) , g_55.f2) , g_2[5]) , p_31.f2);
            }
            else
            { 
                int8_t l_111[5][1][1];
                int32_t l_123 = 0x327E98E5L;
                int32_t l_125 = 0xD4C676C2L;
                int32_t l_126 = (-10L);
                struct S0 *l_140 = &l_137;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_111[i][j][k] = (-4L);
                    }
                }
                for (g_81 = 0; (g_81 != 10); g_81 = safe_add_func_int8_t_s_s(g_81, 2))
                { 
                    l_112 ^= (safe_unary_minus_func_int32_t_s(l_111[4][0][0]));
                    g_61 = &l_112;
                }
                if (((*g_61) < ((func_32(p_31.f0, (+(p_31.f2 != (p_31.f0 & (l_114 != l_115[0][1])))), g_81, l_105) , l_112) & 0x8EE3L)))
                { 
                    uint32_t *l_118 = &l_105;
                    int32_t l_120 = (-9L);
                    int32_t *l_121 = &l_117[0];
                    int32_t *l_122[1][3];
                    int32_t *l_133[2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_122[i][j] = &l_117[0];
                    }
                    for (i = 0; i < 2; i++)
                        l_133[i] = &l_120;
                    l_117[0] ^= (g_62[4][2] , (+0L));
                    l_119 = ((((*l_118) = 0xBF173AA3L) && (l_112 ^= 0x98C9807AL)) && 0xD7L);
                    --l_130;
                    l_133[1] = &g_2[4];
                }
                else
                { 
                    uint32_t l_135[3][1];
                    int32_t l_136 = 1L;
                    struct S0 *l_138 = &l_137;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_135[i][j] = 0x01195FD4L;
                    }
                    l_136 &= (l_135[0][0] = g_134[3][0][2]);
                    if (l_136)
                        break;
                    g_139 = ((*l_138) = l_137);
                }
                if ((l_140 != l_140))
                { 
                    return l_141;
                }
                else
                { 
                    int32_t *l_147 = &l_127;
                    union U2 l_151 = {-1L};
                    uint32_t *l_158 = &l_130;
                    int8_t *l_160[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_160[i] = &l_159[3].f4;
                    (*l_147) ^= (safe_add_func_int64_t_s_s((g_139.f0 != (safe_add_func_int32_t_s_s(p_31.f0, l_146))), g_2[4]));
                    (*l_147) = (safe_rshift_func_int8_t_s_u(((((l_150[0][4][3] | g_139.f2) & l_111[4][0][0]) , (l_151 , (safe_mod_func_int8_t_s_s((l_124 = ((safe_div_func_int64_t_s_s((0x4D94109EL && (g_62[4][2] = (safe_add_func_uint8_t_u_u(((func_32((((*l_158) |= l_150[0][1][5]) == (((l_159[3] , g_107[3]) ^ p_31.f1) && g_139.f4)), p_31.f2, g_62[1][0], p_31.f1) , (*g_61)) || 3L), p_31.f0)))), g_81)) & 0UL)), l_105)))) && 1UL), 1));
                    return g_161;
                }
            }
            l_58 = &l_117[1];
            for (l_127 = 24; (l_127 < 3); --l_127)
            { 
                uint32_t l_175 = 0xDF050D5AL;
                l_175 |= ((*l_58) = (safe_add_func_int32_t_s_s(((((void*)0 == l_166[0][0][6]) == (((g_167 = &g_81) != &g_81) == (safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_159[3].f1, ((safe_mul_func_uint16_t_u_u((+((&g_2[6] == &l_117[1]) & g_139.f3)), 0x6DDAL)) , g_139.f1))), g_55.f1)))) >= 0x7F44F2EDFF1B3467LL), 0x0524414FL)));
                (*l_58) = (l_68 <= p_31.f1);
            }
        }
        if (((*l_200) = ((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_114 == ((((safe_mod_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_106[0][4][4] < ((safe_mod_func_uint32_t_u_u(l_130, (safe_sub_func_int64_t_s_s(g_62[5][0], (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((((g_196 , (l_198 = g_197)) , (p_31.f2 != 0x43L)) , (void*)0) == l_166[0][0][6]), 7)) || l_198.f0), l_117[0])))))) || 0xF3L)), p_31.f2)), g_62[0][2])) != p_31.f2) <= 0L), 0xE894D0847C51F5B0LL)) || g_48) , l_199) , (void*)0)), (-1L))), 6)) , g_139.f1) == 0xA5L), g_196.f2)) <= 7L)))
        { 
            int32_t *l_201 = (void*)0;
            int32_t **l_202[2][2] = {{&g_61,&g_61},{&g_61,&g_61}};
            struct S0 l_222 = {0x6058L,18446744073709551611UL,0xAE8A4FEB15274B8BLL,-3L,0L};
            int i, j;
            l_58 = l_201;
            if (l_203)
                break;
            for (l_198.f4 = 0; (l_198.f4 >= 0); l_198.f4 -= 1)
            { 
                uint32_t l_219 = 4294967295UL;
                int32_t l_220[3];
                int16_t *l_221 = &l_137.f0;
                struct S0 *l_223 = (void*)0;
                struct S0 *l_224 = &g_197.f3;
                uint64_t *l_232[4];
                union U4 l_234[7][5] = {{{65535UL},{0UL},{1UL},{1UL},{65535UL}},{{0x5C18L},{0UL},{0x9AF0L},{1UL},{0x9AF0L}},{{65535UL},{65535UL},{0UL},{65535UL},{65535UL}},{{0x9AF0L},{1UL},{0x9AF0L},{0UL},{0x5C18L}},{{65535UL},{1UL},{1UL},{65535UL},{1UL}},{{0x5C18L},{1UL},{0x3CBDL},{1UL},{0x5C18L}},{{1UL},{65535UL},{1UL},{1UL},{65535UL}}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_220[i] = 9L;
                for (i = 0; i < 4; i++)
                    l_232[i] = &l_203;
                (*l_224) = (((safe_div_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((p_31 , ((*l_221) &= (+(((l_219 = (l_117[0] = (((((safe_sub_func_uint64_t_u_u(0UL, g_197.f2)) != (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_139 , ((*l_114)++)), (0xE6E4037CL | p_31.f0))), 0x62L)) | (-10L)) < 0x52D3AD35L)) && g_62[4][2]) || 0x8D23L) & g_139.f3))) & l_220[2]) || p_31.f1)))), p_31.f2)) && (-1L)), p_31.f0)) <= 0L) & p_31.f2) <= p_31.f0), g_134[3][0][2])) ^ l_106[0][3][0]) , l_222);
                g_62[4][2] = (safe_mod_func_uint32_t_u_u(((p_31.f2 | ((*l_114) = (g_197.f0 < l_227))) && ((p_31.f1 <= (!(g_233 = (((safe_mul_func_int8_t_s_s((p_31.f0 , p_31.f1), ((((void*)0 != g_231) >= 0x07L) ^ 0x7A0BL))) > l_117[0]) == 8L)))) != l_117[0])), p_31.f2));
                (*l_200) &= 0xA5FB3026L;
                for (g_139.f4 = 0; (g_139.f4 >= 0); g_139.f4 -= 1)
                { 
                    return l_234[1][4];
                }
            }
            (*l_200) = (safe_sub_func_int32_t_s_s(((g_196 , (((g_249[1][0][0] = (p_31.f0 , (safe_sub_func_int32_t_s_s(g_197.f1, ((safe_add_func_int64_t_s_s(g_55.f2, ((safe_sub_func_uint16_t_u_u(65535UL, ((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((0x4EC3L && (safe_add_func_int32_t_s_s(0L, g_134[3][0][2]))) ^ (*g_231)), 0xF44B9ECCL)), (*g_231))) ^ p_31.f2))) > (-9L)))) , l_117[1]))))) >= 4294967294UL) || g_197.f1)) < p_31.f1), 0x17C50ED0L));
        }
        else
        { 
            union U2 l_268 = {0x58AA48E1810BCDC4LL};
            int64_t *l_270 = &l_198.f3.f2;
            int64_t *l_271 = &g_197.f0;
            uint64_t *l_272 = (void*)0;
            uint64_t *l_273 = (void*)0;
            union U2 *l_287[3];
            int64_t ***l_291 = (void*)0;
            int64_t ***l_292 = (void*)0;
            int64_t ***l_293 = &g_289;
            int i;
            for (i = 0; i < 3; i++)
                l_287[i] = (void*)0;
            for (g_139.f4 = 0; (g_139.f4 <= 1); g_139.f4 += 1)
            { 
                int i, j;
                if (g_62[(g_139.f4 + 1)][(g_139.f4 + 1)])
                    break;
                return l_250;
            }
            if (p_31.f1)
                continue;
            l_276 = (((safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((g_274 = (((*l_271) = ((*l_270) = (((safe_lshift_func_uint8_t_u_u((((l_257[0] > p_31.f1) < (safe_add_func_int32_t_s_s(((*l_200) &= ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_62[5][0] > (*g_231)), ((((l_268 , (l_268 , ((p_31.f1 >= l_250.f0) < 0xABA9L))) , p_31.f2) & 0L) == (*g_231)))), p_31.f1)), p_31.f0)) == l_269[1])), l_268.f4))) > (*l_58)), 6)) | 0x4BA92695L) == l_269[1]))) >= 1L)), p_31.f1)), 0UL)) , l_269[1]) && g_275);
            l_268.f2 = (safe_mod_func_uint32_t_u_u(p_31.f1, (+((((safe_lshift_func_int8_t_s_u(p_31.f0, (safe_unary_minus_func_uint64_t_u((((safe_lshift_func_uint16_t_u_s((l_268.f0 ^ g_62[4][2]), ((((*l_200) = ((*g_231) ^= (-8L))) && (((safe_lshift_func_uint8_t_u_s((((l_288 = g_197) , (l_198.f1 ^ p_31.f1)) | g_196.f2), 6)) | 7UL) >= p_31.f1)) & 0x796E3F8BE54F471CLL))) < 0x54L) , g_274))))) , l_270) != (void*)0) >= 0x7034L))));
            (*l_293) = g_289;
        }
    }
    (*l_309) ^= (g_62[4][2] = (((*l_308) = (((((safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((&g_139 != l_300), 13)) && l_117[0]), (&g_81 != &g_81))) , (((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(l_305[2], g_55.f2)), p_31.f0)) == 0x11ECB1D2L) < l_305[2])), 3L)) >= 1L) , &l_117[0]) != l_306) & (*g_231))) >= 0xF90A0D85813E3077LL));
    return l_250;
}



static union U3  func_32(uint8_t  p_33, int32_t  p_34, int8_t  p_35, uint64_t  p_36)
{ 
    uint64_t l_51 = 0x72EA1289665FEC6BLL;
    for (p_33 = 0; (p_33 != 37); ++p_33)
    { 
        int32_t *l_47 = &g_48;
        int32_t *l_49 = &g_48;
        int32_t *l_50[1];
        int32_t **l_54 = &l_49;
        int i;
        for (i = 0; i < 1; i++)
            l_50[i] = &g_48;
        l_51--;
        (*l_54) = &p_34;
    }
    return g_55;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_55.f2, "g_55.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_62[i][j], "g_62[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_134[i][j][k], "g_134[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_196.f0, "g_196.f0", print_hash_value);
    transparent_crc(g_196.f1, "g_196.f1", print_hash_value);
    transparent_crc(g_196.f2, "g_196.f2", print_hash_value);
    transparent_crc(g_197.f0, "g_197.f0", print_hash_value);
    transparent_crc(g_197.f1, "g_197.f1", print_hash_value);
    transparent_crc(g_197.f2, "g_197.f2", print_hash_value);
    transparent_crc(g_197.f4, "g_197.f4", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_249[i][j][k], "g_249[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_808.f0, "g_808.f0", print_hash_value);
    transparent_crc(g_808.f1, "g_808.f1", print_hash_value);
    transparent_crc(g_808.f2, "g_808.f2", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1102, "g_1102", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1250, "g_1250", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    transparent_crc(g_1373, "g_1373", print_hash_value);
    transparent_crc(g_1380, "g_1380", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1416[i][j], "g_1416[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1495, "g_1495", print_hash_value);
    transparent_crc(g_1607, "g_1607", print_hash_value);
    transparent_crc(g_1640, "g_1640", print_hash_value);
    transparent_crc(g_1650, "g_1650", print_hash_value);
    transparent_crc(g_1736.f0, "g_1736.f0", print_hash_value);
    transparent_crc(g_1736.f1, "g_1736.f1", print_hash_value);
    transparent_crc(g_1736.f2, "g_1736.f2", print_hash_value);
    transparent_crc(g_1736.f4, "g_1736.f4", print_hash_value);
    transparent_crc(g_1916, "g_1916", print_hash_value);
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_1940, "g_1940", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1941[i][j][k], "g_1941[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
