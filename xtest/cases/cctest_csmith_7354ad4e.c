// SPDX-License-Identifier: MIT
// cctest_csmith_7354ad4e.c --- cctest case csmith_7354ad4e (csmith seed 1934929230)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9c5d4d5 */

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

// Options:   -s 1934929230 -o /tmp/csmith_gen_s9rwy1ny/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   const int8_t  f1;
   const uint16_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
   int32_t  f1;
   int64_t  f2;
   uint16_t  f3;
   int16_t  f4;
};

union U2 {
   uint16_t  f0;
   int8_t  f1;
   int64_t  f2;
};


static int32_t g_2 = 0xDE05DAE5L;
static uint16_t g_3 = 0UL;
static int64_t g_10 = 6L;
static uint32_t g_13 = 0UL;
static uint32_t g_18[3][1] = {{0UL},{0UL},{0UL}};
static union U2 g_27[4] = {{65526UL},{65526UL},{65526UL},{65526UL}};
static struct S1 g_31 = {-2L,1L,-9L,0xEC02L,-1L};
static uint64_t g_46 = 0x8509EF6E88F3C25ALL;
static int32_t g_51[4] = {0x871D1BA0L,0x871D1BA0L,0x871D1BA0L,0x871D1BA0L};
static struct S1 g_57[4][1] = {{{0x09L,0xEA4B5445L,7L,0x691AL,0x7D55L}},{{0x09L,0xEA4B5445L,7L,0x691AL,0x7D55L}},{{0x09L,0xEA4B5445L,7L,0x691AL,0x7D55L}},{{0x09L,0xEA4B5445L,7L,0x691AL,0x7D55L}}};
static uint32_t g_81[5] = {0x873BCDA4L,0x873BCDA4L,0x873BCDA4L,0x873BCDA4L,0x873BCDA4L};



static uint16_t  func_1(void);
static struct S1  func_21(struct S1  p_22, uint16_t  p_23, union U2  p_24, int8_t  p_25);
static int16_t  func_32(int32_t  p_33, const int16_t  p_34, struct S1  p_35);
static const int16_t  func_36(const int8_t  p_37, struct S0  p_38, int16_t  p_39, uint16_t  p_40, const uint16_t  p_41);




static uint16_t  func_1(void)
{ 
    int64_t l_12 = 0L;
    struct S0 l_43[1] = {{18446744073709551615UL,0L,0x9606L,4294967293UL}};
    int32_t l_79 = 0xA208E2B0L;
    int i;
    --g_3;
    for (g_3 = 0; (g_3 > 17); g_3 = safe_add_func_uint16_t_u_u(g_3, 4))
    { 
        int64_t l_11 = 0x8FDEB77278FA8F90LL;
        struct S1 l_26 = {0xA2L,0x39D5B611L,0xB8EB5EA28C7FFFAALL,8UL,7L};
        int32_t l_88 = 0x9465D988L;
        for (g_2 = 27; (g_2 > 10); g_2 = safe_sub_func_int8_t_s_s(g_2, 5))
        { 
            --g_13;
        }
        for (g_2 = 0; (g_2 > (-30)); --g_2)
        { 
            const uint32_t l_42 = 4294967295UL;
            uint64_t l_74 = 4UL;
            int32_t l_80 = 4L;
            --g_18[2][0];
            g_31 = func_21(l_26, ((65528UL < 9L) , l_12), g_27[1], l_26.f0);
            if ((g_57[0][0].f1 = (func_32(g_3, func_36(l_42, l_43[0], l_26.f4, l_42, g_18[1][0]), g_57[0][0]) ^ g_31.f2)))
            { 
                g_31.f1 &= (g_57[0][0].f1 = (l_74 < (safe_lshift_func_int8_t_s_u((l_79 = (safe_add_func_int64_t_s_s((l_42 < (l_74 > g_57[0][0].f4)), 0xD60F7E9ACA868CE9LL))), g_46))));
            }
            else
            { 
                --g_81[2];
            }
        }
        g_31.f1 = (((((l_88 = (((l_26.f1 = (safe_add_func_int16_t_s_s(g_51[1], ((l_43[0].f3 >= (4294967295UL < ((safe_mul_func_uint16_t_u_u(l_26.f0, l_26.f1)) || g_51[1]))) >= g_81[2])))) == l_26.f4) >= l_43[0].f2)) | l_12) & g_10) , g_81[0]) | g_31.f3);
    }
    return g_2;
}



static struct S1  func_21(struct S1  p_22, uint16_t  p_23, union U2  p_24, int8_t  p_25)
{ 
    struct S1 l_30[2][3][5] = {{{{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L}},{{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L}},{{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L}}},{{{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L}},{{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L}},{{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L},{5L,0xE46552DEL,0x1456B8642E5F0E77LL,65527UL,0xAE86L}}}};
    int i, j, k;
    for (p_25 = (-26); (p_25 > (-17)); p_25 = safe_add_func_uint8_t_u_u(p_25, 1))
    { 
        if (g_18[2][0])
            break;
    }
    return l_30[1][0][3];
}



static int16_t  func_32(int32_t  p_33, const int16_t  p_34, struct S1  p_35)
{ 
    int64_t l_60 = 1L;
    struct S0 l_72 = {0x73B7D9658AA494CALL,0x1CL,0x4AC2L,2UL};
    int16_t l_73 = 0xCDBAL;
lbl_61:
    for (g_31.f3 = 0; (g_31.f3 == 53); g_31.f3 = safe_add_func_int32_t_s_s(g_31.f3, 4))
    { 
        g_57[0][0].f1 = ((0x82L >= (p_35 , (g_57[0][0].f3 || (g_46 && 0xC92FL)))) && l_60);
        if (p_35.f0)
            goto lbl_61;
    }
    l_73 = ((p_35.f2 = (safe_div_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((0x8E1FL == l_60) < (((p_35.f2 <= (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((l_72 , l_72.f3), p_35.f0)), g_51[1]))) > g_51[1]) == g_51[3])), l_72.f1)), l_72.f3)) != p_33) <= 0x4ACFC83CL) > 0xC65310EE7DBBECB2LL), p_35.f4))) > l_72.f1);
    return p_35.f1;
}



static const int16_t  func_36(const int8_t  p_37, struct S0  p_38, int16_t  p_39, uint16_t  p_40, const uint16_t  p_41)
{ 
    struct S1 l_52[5][1][5] = {{{{0xB4L,0x62422819L,-5L,6UL,-6L},{0xB4L,0x62422819L,-5L,6UL,-6L},{-8L,0xEE2B4074L,0x585F1C2B46DFF617LL,0x9BB5L,0x37D7L},{0xC1L,0x3A0C94A7L,0x64C6607294902949LL,0x125BL,0L},{-4L,0x4743E03EL,0x41E2253E45BD2804LL,1UL,0xB8B7L}}},{{{1L,0L,0x3B667D15778C4B1ELL,0xF373L,1L},{0xBAL,1L,0x39A3A415DBE4B24DLL,0xE44EL,-5L},{0xBAL,1L,0x39A3A415DBE4B24DLL,0xE44EL,-5L},{1L,0L,0x3B667D15778C4B1ELL,0xF373L,1L},{0xB4L,0x62422819L,-5L,6UL,-6L}}},{{{1L,0L,0x3B667D15778C4B1ELL,0xF373L,1L},{0xC1L,0x3A0C94A7L,0x64C6607294902949LL,0x125BL,0L},{0xE4L,2L,0L,0x084FL,5L},{0xE4L,2L,0L,0x084FL,5L},{0xC1L,0x3A0C94A7L,0x64C6607294902949LL,0x125BL,0L}}},{{{0xB4L,0x62422819L,-5L,6UL,-6L},{0xBAL,1L,0x39A3A415DBE4B24DLL,0xE44EL,-5L},{0xE4L,2L,0L,0x084FL,5L},{-8L,0xEE2B4074L,0x585F1C2B46DFF617LL,0x9BB5L,0x37D7L},{-8L,0xEE2B4074L,0x585F1C2B46DFF617LL,0x9BB5L,0x37D7L}}},{{{0xBAL,1L,0x39A3A415DBE4B24DLL,0xE44EL,-5L},{0xB4L,0x62422819L,-5L,6UL,-6L},{0xBAL,1L,0x39A3A415DBE4B24DLL,0xE44EL,-5L},{0xE4L,2L,0L,0x084FL,5L},{-8L,0xEE2B4074L,0x585F1C2B46DFF617LL,0x9BB5L,0x37D7L}}}};
    int i, j, k;
    for (g_31.f4 = 0; g_31.f4 < 4; g_31.f4 += 1)
    {
        union U2 tmp = {0x6A17L};
        g_27[g_31.f4] = tmp;
    }
    for (g_10 = 0; (g_10 < (-5)); --g_10)
    { 
        struct S1 l_53 = {-1L,2L,0x3D82F88197C51C8BLL,0UL,0x2BFFL};
        ++g_46;
        for (g_31.f1 = 28; (g_31.f1 < (-22)); g_31.f1 = safe_sub_func_int64_t_s_s(g_31.f1, 7))
        { 
            if (g_31.f1)
            { 
                g_51[1] &= g_3;
            }
            else
            { 
                uint8_t l_54 = 0x57L;
                l_53 = (l_52[1][0][3] = g_31);
                --l_54;
            }
            return l_53.f3;
        }
    }
    return p_38.f3;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_27[i].f0, "g_27[i].f0", print_hash_value);
        transparent_crc(g_27[i].f1, "g_27[i].f1", print_hash_value);

    }
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_31.f4, "g_31.f4", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_57[i][j].f0, "g_57[i][j].f0", print_hash_value);
            transparent_crc(g_57[i][j].f1, "g_57[i][j].f1", print_hash_value);
            transparent_crc(g_57[i][j].f2, "g_57[i][j].f2", print_hash_value);
            transparent_crc(g_57[i][j].f3, "g_57[i][j].f3", print_hash_value);
            transparent_crc(g_57[i][j].f4, "g_57[i][j].f4", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
