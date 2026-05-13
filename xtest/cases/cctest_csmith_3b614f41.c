// SPDX-License-Identifier: MIT
// cctest_csmith_3b614f41.c --- cctest case csmith_3b614f41 (csmith seed 996233025)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6b4ed1cc */

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

// Options:   -s 996233025 -o /tmp/csmith_gen_1i5cs92v/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int8_t  f0;
   int16_t  f1;
   int8_t  f2;
   uint64_t  f3;
   uint16_t  f4;
   int16_t  f5;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   const int8_t  f1;
};


static int32_t g_2[1] = {1L};
static int32_t g_5 = (-1L);
static int64_t g_34[5] = {0xF1EDD1EDB6B7BE2DLL,0xF1EDD1EDB6B7BE2DLL,0xF1EDD1EDB6B7BE2DLL,0xF1EDD1EDB6B7BE2DLL,0xF1EDD1EDB6B7BE2DLL};
static struct S0 g_40 = {0xAEL,-4L,0x1CL,18446744073709551615UL,0x1826L,7L};
static uint64_t g_83[2][1][2] = {{{0x305585C014297424LL,0x305585C014297424LL}},{{0x305585C014297424LL,0x305585C014297424LL}}};
static uint64_t g_97[1] = {0xFF19821B11E678B1LL};
static uint32_t g_108 = 0xAD174F13L;
static uint64_t g_120 = 0x42DAAAAF263C58A5LL;
static int16_t g_131 = 0L;
static uint32_t g_133 = 0xD4276EE3L;



static int32_t  func_1(void);
static const uint16_t  func_11(const uint16_t  p_12, uint16_t  p_13, int16_t  p_14, const int32_t  p_15);
static const uint16_t  func_16(int32_t  p_17);
static int32_t  func_18(uint8_t  p_19, uint32_t  p_20, int8_t  p_21);




static int32_t  func_1(void)
{ 
    int8_t l_10 = 3L;
    int32_t l_136 = 0xB3554E5FL;
    uint64_t l_137[3];
    int i;
    for (i = 0; i < 3; i++)
        l_137[i] = 0xF5D31D5B22E30894LL;
    for (g_2[0] = 0; (g_2[0] == (-13)); g_2[0] = safe_sub_func_int8_t_s_s(g_2[0], 5))
    { 
        const uint32_t l_113 = 7UL;
        uint64_t l_132[4][1][1];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_132[i][j][k] = 7UL;
            }
        }
        for (g_5 = 0; (g_5 != 16); g_5++)
        { 
            uint32_t l_32 = 6UL;
            g_120 = (safe_mod_func_int64_t_s_s((l_10 > func_11(func_16(func_18((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_5 >= (l_10 , (safe_div_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u(((g_5 <= g_2[0]) | 1UL), g_2[0])) > (-4L)) < l_10) , l_10), g_5)))), 1)), 0x42L)), g_2[0])), l_32, l_32)), l_32, g_40.f0, l_113)), 0x62B35B4449FB5A3ALL));
            g_133 = ((safe_rshift_func_int16_t_s_s((g_40.f3 , (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((+(~g_40.f5)), (safe_sub_func_uint64_t_u_u(0x642AB698699BF897LL, ((((g_131 = l_10) || (-1L)) > l_10) < l_32))))) <= l_132[0][0][0]), g_108))), 7)) && l_132[0][0][0]);
        }
    }
    l_136 = ((g_40 , ((safe_mul_func_int8_t_s_s(l_10, l_10)) ^ g_2[0])) , g_5);
    return l_137[2];
}



static const uint16_t  func_11(const uint16_t  p_12, uint16_t  p_13, int16_t  p_14, const int32_t  p_15)
{ 
    int32_t l_119 = (-10L);
    for (g_40.f5 = (-14); (g_40.f5 <= 2); g_40.f5++)
    { 
        int32_t l_116 = 0xA8B6AEB2L;
        l_116 = 1L;
        l_119 = (safe_div_func_int16_t_s_s(1L, 9UL));
    }
    return p_14;
}



static const uint16_t  func_16(int32_t  p_17)
{ 
    return g_83[1][0][1];
}



static int32_t  func_18(uint8_t  p_19, uint32_t  p_20, int8_t  p_21)
{ 
    uint32_t l_35[1][4][2];
    int32_t l_45[1][3][5] = {{{0L,0L,0L,0L,0L},{0x5F885928L,0x5F885928L,0x5F885928L,0x5F885928L,0x5F885928L},{0L,0L,0L,0L,0L}}};
    union U1 l_46 = {0x28L};
    int64_t l_63[1];
    const int8_t l_104 = 0xB3L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_35[i][j][k] = 7UL;
        }
    }
    for (i = 0; i < 1; i++)
        l_63[i] = (-2L);
    l_35[0][3][0] |= (safe_unary_minus_func_uint8_t_u((g_34[0] = 0xE0L)));
lbl_85:
    if ((((safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s((l_45[0][1][1] = (p_20 , (g_40 , (safe_add_func_int64_t_s_s((g_34[3] = ((safe_lshift_func_uint16_t_u_s(0xC73BL, g_40.f3)) || 248UL)), 1UL))))), 0UL)), 0x11F0B9F5L)) , l_46) , g_40.f2))
    { 
        uint32_t l_62 = 0x8055A548L;
        int32_t l_64 = 0x0912742EL;
        int32_t l_65 = 0x9ACCE304L;
        l_65 = (l_64 = (((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(0xB2L, (((g_40.f0 || (((!(l_45[0][0][0] = (safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_62, ((-6L) & 0x76L))), p_20)), g_40.f5)) , g_2[0]), 0x5C3B36352B7283D3LL)))) <= l_63[0]) == p_21)) , 4294967295UL) < 1UL))) & p_19), p_21)), p_19)) != p_19) <= g_2[0]));
    }
    else
    { 
        uint64_t l_70 = 18446744073709551611UL;
        int32_t l_71 = 0xF0819D5AL;
        if (((safe_rshift_func_int16_t_s_s(((p_19 != g_40.f4) | 0x512630673EEFD7F9LL), 6)) || (safe_lshift_func_uint16_t_u_u(0x7F6CL, p_19))))
        { 
            l_45[0][1][1] = (l_71 = l_70);
        }
        else
        { 
            return g_2[0];
        }
        return l_35[0][3][0];
    }
    for (g_40.f2 = 0; (g_40.f2 <= 0); g_40.f2 += 1)
    { 
        int8_t l_80 = (-8L);
        for (p_21 = 0; (p_21 <= 0); p_21 += 1)
        { 
            int32_t l_81 = 0xFBB2F22DL;
            int i;
            if ((safe_div_func_int64_t_s_s((((l_63[p_21] | (((((l_81 = (safe_add_func_int16_t_s_s((0UL <= (safe_add_func_int8_t_s_s(g_40.f1, ((((((safe_mod_func_int8_t_s_s((0x0CFC2012L ^ 4294967295UL), p_19)) ^ g_40.f5) , l_80) | p_21) , p_21) > p_20)))), p_20))) != p_21) >= l_46.f0) | g_40.f0) == g_34[0])) & p_20) >= l_80), l_35[0][3][0])))
            { 
                l_81 = g_40.f5;
                if (g_40.f2)
                    break;
                if (g_34[4])
                    continue;
            }
            else
            { 
                uint32_t l_82[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_82[i] = 0UL;
                l_82[0] = p_20;
                if (g_5)
                    break;
            }
            for (g_40.f1 = 0; (g_40.f1 <= 0); g_40.f1 += 1)
            { 
                int i, j, k;
                if (l_35[p_21][(p_21 + 1)][(p_21 + 1)])
                    break;
            }
        }
        if (l_63[0])
        { 
            uint8_t l_84 = 0xDFL;
            g_83[1][0][1] |= (l_63[0] | (((((g_40.f5 && p_19) >= 0x287B7884FD301F6FLL) > 4294967291UL) , l_46) , g_34[0]));
            for (p_20 = 0; (p_20 <= 0); p_20 += 1)
            { 
                l_84 = 0x66BE38A8L;
                if (p_21)
                    goto lbl_85;
            }
            if (p_20)
                continue;
        }
        else
        { 
            int64_t l_96 = 1L;
            if (((((l_45[0][0][4] |= (((0xEB86L && (safe_div_func_uint32_t_u_u(((g_40.f5 = (safe_lshift_func_int16_t_s_s(0x4BDFL, (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_80, 0xE796L)), l_46.f1)), p_21))))) || p_19), p_20))) <= l_96) < g_2[0])) >= 0x6B17FCB947DA7D1FLL) , p_20) && 5L))
            { 
                g_97[0] = ((((((((p_19 <= (0UL <= g_34[0])) >= (g_40.f3 = (p_21 > 0xD61587F353C284EELL))) , g_2[0]) | g_83[0][0][0]) >= 0xF3L) || l_96) , g_34[0]) & p_20);
            }
            else
            { 
                uint64_t l_105[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_105[i] = 0x03581D61F6B50382LL;
                l_105[2] = (safe_mod_func_int64_t_s_s(g_40.f3, ((0x37DDF4F03A57AA26LL ^ p_21) , (safe_mul_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u((g_97[0] != p_19), 12)) , l_104) <= g_40.f1) && g_40.f5), p_20)))));
                if (g_40.f5)
                    goto lbl_85;
                g_108 = (l_80 ^ (l_96 > (safe_add_func_uint16_t_u_u(g_40.f3, 0x053EL))));
            }
        }
        for (g_108 = 0; (g_108 <= 0); g_108 += 1)
        { 
            uint64_t l_109 = 0x86C0845370BFA85FLL;
            int32_t l_112 = 5L;
            l_45[0][1][1] = (((g_40.f4 = p_21) ^ l_109) , (g_2[0] ^ (safe_sub_func_uint32_t_u_u(0x10D84A95L, p_20))));
            l_112 = l_109;
            for (p_19 = 0; (p_19 <= 0); p_19 += 1)
            { 
                int i, j, k;
                l_45[g_108][(g_40.f2 + 1)][(g_40.f2 + 1)] ^= 0x22B01ECFL;
                if (l_35[g_40.f2][(g_40.f2 + 1)][g_40.f2])
                    break;
            }
            for (l_80 = 0; (l_80 <= 0); l_80 += 1)
            { 
                int i, j, k;
                return l_35[g_40.f2][(g_108 + 1)][l_80];
            }
        }
    }
    return g_5;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);

    }
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
    transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
    transparent_crc(g_40.f3, "g_40.f3", print_hash_value);
    transparent_crc(g_40.f4, "g_40.f4", print_hash_value);
    transparent_crc(g_40.f5, "g_40.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_83[i][j][k], "g_83[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
