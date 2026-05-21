// SPDX-License-Identifier: MIT
// cctest_csmith_31b1b745.c --- cctest case csmith_31b1b745 (csmith seed 833730373)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2cfb7f57 */

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

// Options:   -s 833730373 -o /tmp/csmith_gen_kv90h3x1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int8_t  f3;
   uint32_t  f4;
   int64_t  f5;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint16_t  f1;
   uint16_t  f2;
};

union U2 {
   uint32_t  f0;
};

union U3 {
   int32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};

union U4 {
   int8_t  f0;
};

union U5 {
   int32_t  f0;
   uint64_t  f1;
   uint8_t  f2;
};


static uint32_t g_12 = 0UL;
static uint8_t g_16 = 255UL;
static uint64_t g_45 = 0xE48991CD3C6E85A6LL;
static uint32_t g_49[1] = {0x53D1DD14L};
static int16_t g_57 = 0L;
static uint32_t g_58 = 0x63CD51DCL;
static struct S1 g_78 = {0xD9B22F2CL,0x89DDL,4UL};
static int8_t g_80 = 0xC1L;
static struct S0 g_82[3][2] = {{{0xB5L,-1L,7UL,0xFDL,18446744073709551611UL,-2L},{0xB5L,-1L,7UL,0xFDL,18446744073709551611UL,-2L}},{{-1L,0x1C45DBD1L,0UL,0L,0UL,0L},{0xB5L,-1L,7UL,0xFDL,18446744073709551611UL,-2L}},{{0xB5L,-1L,7UL,0xFDL,18446744073709551611UL,-2L},{-1L,0x1C45DBD1L,0UL,0L,0UL,0L}}};
static union U2 g_87 = {0x6E4EE9DAL};
static int32_t g_109 = (-1L);
static int8_t g_110 = 0L;
static uint16_t g_111 = 65535UL;
static int16_t g_133[4] = {(-1L),(-1L),(-1L),(-1L)};
static uint16_t g_147 = 0x5F7EL;



static union U2  func_1(void);
static struct S1  func_17(uint8_t  p_18, struct S1  p_19, struct S0  p_20, int64_t  p_21, struct S0  p_22);
static uint8_t  func_23(struct S1  p_24, int32_t  p_25, union U3  p_26);
static union U3  func_28(int64_t  p_29);




static union U2  func_1(void)
{ 
    uint8_t l_8 = 1UL;
    int32_t l_9[3][3][4] = {{{0x7D0B0A35L,(-1L),0x45BA13B2L,0x7D0B0A35L},{0x45BA13B2L,0x7D0B0A35L,0x87FCE6BBL,0x87FCE6BBL},{1L,1L,0x6FD5D705L,0x0A4CCFD6L}},{{1L,(-1L),0x87FCE6BBL,1L},{0x45BA13B2L,0x0A4CCFD6L,0x45BA13B2L,0x87FCE6BBL},{0x7D0B0A35L,0x0A4CCFD6L,0x6FD5D705L,1L}},{{0x0A4CCFD6L,(-1L),(-1L),0x0A4CCFD6L},{0x45BA13B2L,1L,(-1L),0x87FCE6BBL},{0x0A4CCFD6L,0x7D0B0A35L,0x6FD5D705L,0x87FCE6BBL}}};
    uint32_t l_108 = 0xF4FB9E1BL;
    const uint32_t l_132[5] = {0UL,0UL,0UL,0UL,0UL};
    union U5 l_136 = {0x225D93BAL};
    union U2 l_148 = {0xE5E263D6L};
    int i, j, k;
    if ((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_9[0][0][1] &= l_8), (safe_mul_func_uint16_t_u_u(g_12, l_8)))), 1)) & g_12) && g_12), g_12)))
    { 
        struct S0 l_81[5] = {{0xAEL,0x75A39895L,18446744073709551610UL,0x10L,18446744073709551612UL,0x4EC192D0F567D2F7LL},{0xAEL,0x75A39895L,18446744073709551610UL,0x10L,18446744073709551612UL,0x4EC192D0F567D2F7LL},{0xAEL,0x75A39895L,18446744073709551610UL,0x10L,18446744073709551612UL,0x4EC192D0F567D2F7LL},{0xAEL,0x75A39895L,18446744073709551610UL,0x10L,18446744073709551612UL,0x4EC192D0F567D2F7LL},{0xAEL,0x75A39895L,18446744073709551610UL,0x10L,18446744073709551612UL,0x4EC192D0F567D2F7LL}};
        int32_t l_86 = 0x9BBD4C26L;
        int i;
        for (l_8 = 0; (l_8 <= 2); l_8 += 1)
        { 
            int64_t l_13 = 1L;
            int32_t l_14[3];
            struct S1 l_27 = {0xD994AD4DL,65535UL,5UL};
            int i;
            for (i = 0; i < 3; i++)
                l_14[i] = 0x95610A14L;
            l_14[1] = (l_13 , l_9[0][0][1]);
            g_16 ^= (+0x950CL);
            for (g_12 = 0; (g_12 <= 2); g_12 += 1)
            { 
                l_86 ^= (func_17((g_80 = func_23(l_27, g_12, func_28(g_12))), g_78, l_81[2], g_12, g_82[0][0]) , g_82[0][0].f4);
                return g_87;
            }
        }
    }
    else
    { 
        int8_t l_101 = 0L;
        int8_t l_106 = 8L;
        int32_t l_107 = 0x1C087C3AL;
        for (g_12 = 0; (g_12 >= 56); g_12 = safe_add_func_uint16_t_u_u(g_12, 3))
        { 
            uint16_t l_90[1][1][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_90[i][j][k] = 0xEB45L;
                }
            }
            if (l_90[0][0][0])
                break;
            g_82[0][0].f1 ^= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((((l_107 |= (3UL ^ ((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_101 == (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((g_78.f1 <= (l_106 = (g_87 , l_90[0][0][0]))) > 0x3955FA40266A50E2LL), 4)) > 0x8BL), g_16))) , l_90[0][0][0]), g_12)), 0xBB82L)), 1L)) <= g_80))) && l_108) ^ 0x83AED21B86E869CBLL) > 9UL) == l_101), g_82[0][0].f5)), 1));
        }
        g_111++;
    }
    g_82[0][0].f1 ^= ((((safe_sub_func_uint8_t_u_u((~(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_82[0][0].f0, ((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((l_9[0][0][1] = (!(((g_111 | (((safe_rshift_func_uint8_t_u_s(0x0CL, l_9[1][1][1])) || l_8) <= g_45)) > 0xD2L) <= l_132[4]))), g_78.f0)), 4)) != l_108), l_132[1])) != 0x20L))), g_133[2])), l_8)) <= g_80) , 6UL)), l_8)) != 8UL) == l_108) == 0x686C71F3EC1DEC27LL);
    l_136.f0 = (safe_sub_func_uint16_t_u_u((0x72L != (g_147 = (g_16 ^= (l_136 , (l_9[0][2][1] = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(l_136.f2, (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_82[0][0].f0, 0xDFL)), 6)))) ^ 0x874D0840L), 14)), l_136.f2))))))), g_78.f2));
    return l_148;
}



static struct S1  func_17(uint8_t  p_18, struct S1  p_19, struct S0  p_20, int64_t  p_21, struct S0  p_22)
{ 
    struct S1 l_85 = {0xABB59224L,65535UL,1UL};
    for (g_80 = 0; (g_80 == (-11)); g_80 = safe_sub_func_int8_t_s_s(g_80, 1))
    { 
        p_19 = l_85;
    }
    return g_78;
}



static uint8_t  func_23(struct S1  p_24, int32_t  p_25, union U3  p_26)
{ 
    union U3 l_61 = {-2L};
    for (g_16 = 0; (g_16 <= 0); g_16 += 1)
    { 
        int64_t l_54 = (-2L);
        for (p_26.f0 = 0; (p_26.f0 >= 0); p_26.f0 -= 1)
        { 
            int i;
            g_58 = (g_57 = ((-1L) == (safe_rshift_func_int8_t_s_u((g_49[p_26.f0] & (safe_div_func_uint32_t_u_u((l_54 && (safe_rshift_func_uint16_t_u_u(p_26.f2, p_26.f2))), p_24.f1))), 4))));
        }
        p_26.f0 = (((safe_mul_func_uint8_t_u_u((l_61 , (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_s(0xEFL, (safe_sub_func_uint16_t_u_u(0UL, (safe_add_func_int16_t_s_s((-10L), p_26.f1)))))) < (-7L)) < 8L), 1)), 3UL)) == 0x1C47L) && g_16), 65535UL)) >= p_25), l_61.f2)), l_54))), (-1L))) , (-6L)) && g_49[0]);
        return p_26.f0;
    }
    p_24 = g_78;
    for (g_16 = 0; (g_16 <= 0); g_16 += 1)
    { 
        int32_t l_79 = (-10L);
        int i;
        l_79 ^= g_49[g_16];
        for (l_79 = 0; l_79 < 1; l_79 += 1)
        {
            g_49[l_79] = 0x5CE631D6L;
        }
    }
    return g_78.f1;
}



static union U3  func_28(int64_t  p_29)
{ 
    int32_t l_44 = (-3L);
    union U3 l_48 = {0L};
    for (p_29 = 0; (p_29 <= 15); p_29 = safe_add_func_uint8_t_u_u(p_29, 2))
    { 
        union U3 l_41 = {7L};
        struct S1 l_42 = {-2L,0x7887L,0x3417L};
        union U4 l_43 = {0x8BL};
        l_44 = (((9L <= ((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u((l_41 , (((((l_41 = (l_42 , l_41)) , l_43) , 0xCADFD6F6066FA41DLL) , g_12) & 0xC6L)), 0xC8D21259L)))) || g_12), 3)), l_44)), 4UL)) , g_12)) == g_16) < g_16);
        g_45++;
    }
    return l_48;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_49[i], "g_49[i]", print_hash_value);

    }
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_82[i][j].f0, "g_82[i][j].f0", print_hash_value);
            transparent_crc(g_82[i][j].f1, "g_82[i][j].f1", print_hash_value);
            transparent_crc(g_82[i][j].f2, "g_82[i][j].f2", print_hash_value);
            transparent_crc(g_82[i][j].f3, "g_82[i][j].f3", print_hash_value);
            transparent_crc(g_82[i][j].f4, "g_82[i][j].f4", print_hash_value);
            transparent_crc(g_82[i][j].f5, "g_82[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
