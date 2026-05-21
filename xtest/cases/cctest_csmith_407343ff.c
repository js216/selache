// SPDX-License-Identifier: MIT
// cctest_csmith_407343ff.c --- cctest case csmith_407343ff (csmith seed 1081295871)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x991f9f24 */

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

// Options:   -s 1081295871 -o /tmp/csmith_gen_z3xw3fmo/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   const int16_t  f1;
   uint16_t  f2;
   int32_t  f3;
   const uint16_t  f4;
};

union U1 {
   struct S0  f0;
   int32_t  f1;
   int32_t  f2;
   const int32_t  f3;
};

union U2 {
   int16_t  f0;
   uint64_t  f1;
   uint32_t  f2;
};

union U3 {
   int64_t  f0;
   const int16_t  f1;
   int8_t  f2;
};


static int16_t g_19 = 0x8B42L;
static uint64_t g_21 = 18446744073709551612UL;
static int32_t g_30[3] = {0L,0L,0L};
static uint64_t g_54[5] = {0x7260E960871E8EE6LL,0x7260E960871E8EE6LL,0x7260E960871E8EE6LL,0x7260E960871E8EE6LL,0x7260E960871E8EE6LL};
static int32_t g_60 = 1L;
static int32_t g_78[4] = {0x6EE37768L,0x6EE37768L,0x6EE37768L,0x6EE37768L};
static uint8_t g_84 = 8UL;
static uint8_t g_85 = 1UL;
static uint16_t g_147[2] = {9UL,9UL};
static struct S0 g_173 = {0x5A76L,0xD9F9L,0x36C0L,0x96C7B4C5L,0x673EL};
static uint16_t g_216 = 0xFCFFL;



static uint32_t  func_1(void);
static uint8_t  func_4(const uint8_t  p_5, const uint32_t  p_6, uint32_t  p_7);
static int64_t  func_13(int32_t  p_14, const int64_t  p_15);
static union U1  func_32(uint32_t  p_33, uint64_t  p_34, const struct S0  p_35, const uint8_t  p_36, const uint8_t  p_37);




static uint32_t  func_1(void)
{ 
    int16_t l_8[3][2];
    int32_t l_18 = (-10L);
    int32_t l_20[2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_8[i][j] = 0xCACFL;
    }
    for (i = 0; i < 2; i++)
        l_20[i] = 0xB2FC257AL;
    l_18 = (l_20[1] = (((((safe_mul_func_uint8_t_u_u(func_4((l_8[2][1] >= (safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(0x007C7BE02189F42CLL, func_13((safe_mod_func_uint32_t_u_u(((g_21++) ^ (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_19, 1)), ((g_30[0] = 0xED857289L) | g_19))), l_8[2][1]))), 0xED4BCA92L)), g_19))) , g_30[0]), l_20[1]))), g_19, l_8[2][1]), l_8[2][1])) == l_18) & 0x5952B64FL) != g_173.f4) != g_173.f0));
    return g_30[1];
}



static uint8_t  func_4(const uint8_t  p_5, const uint32_t  p_6, uint32_t  p_7)
{ 
    int64_t l_38 = 1L;
    const struct S0 l_39 = {1UL,-8L,0x4ED8L,6L,0x818EL};
    int32_t l_69[3][2][1] = {{{(-1L)},{(-10L)}},{{(-1L)},{(-1L)}},{{(-10L)},{(-1L)}}};
    uint32_t l_119[2][5][3] = {{{0x90F8A910L,0UL,0UL},{0x91DFB358L,0UL,0x7020143CL},{0x90F8A910L,0UL,0UL},{0x91DFB358L,0UL,0x7020143CL},{0x90F8A910L,0UL,0UL}},{{0x91DFB358L,0UL,0x7020143CL},{0x90F8A910L,0UL,0UL},{0x91DFB358L,0UL,0x7020143CL},{0x90F8A910L,0UL,0x44ED18BBL},{0x7020143CL,18446744073709551614UL,18446744073709551612UL}}};
    uint32_t l_149[1];
    uint8_t l_199 = 0xBAL;
    int32_t l_206 = 0xF13F598FL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_149[i] = 0x41794801L;
    if ((~(func_32(l_38, g_19, l_39, l_39.f4, p_6) , p_7)))
    { 
        const uint8_t l_66 = 249UL;
        int32_t l_83 = 0x3B0A6BADL;
        int32_t l_98[5][3][2] = {{{0x2BBA0535L,0x7482C4BDL},{0xFC104D70L,0x2BBA0535L},{0L,0x597F7B61L}},{{0x597F7B61L,0L},{0xFC104D70L,(-1L)},{0L,(-1L)}},{{0xFC104D70L,0L},{0x597F7B61L,0x597F7B61L},{0L,0x2BBA0535L}},{{0xFC104D70L,0x7482C4BDL},{0x2BBA0535L,(-1L)},{0L,0x2BBA0535L}},{{0x597F7B61L,0L},{0x597F7B61L,0x2BBA0535L},{0L,(-1L)}}};
        int i, j, k;
        for (g_60 = 0; (g_60 <= 4); g_60 += 1)
        { 
            int32_t l_75[4][4] = {{0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL},{0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL},{0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL},{0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL,0x9ADBF82AL}};
            int i, j;
            l_69[0][0][0] &= (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((g_54[g_60] , l_66), 6)) == (l_39.f2 >= (safe_rshift_func_int16_t_s_s((((0L <= l_66) || 65533UL) & 0x38F68CB3L), l_66)))), 0x3ACCL));
            for (g_19 = 0; (g_19 <= 2); g_19 += 1)
            { 
                int i;
                g_85 ^= ((~(safe_lshift_func_uint16_t_u_s((g_78[2] = (safe_add_func_uint16_t_u_u(g_30[g_19], (g_30[g_19] >= (g_21++))))), g_30[g_19]))) <= ((safe_lshift_func_uint16_t_u_s(((g_84 = ((safe_rshift_func_int8_t_s_s(((l_83 = g_30[g_19]) && g_30[2]), g_54[3])) == p_7)) || l_39.f2), 6)) , g_30[2]));
                l_75[1][3] = (safe_lshift_func_int16_t_s_s((g_30[g_19] <= ((((p_7 & p_5) == 1UL) , g_19) , p_7)), 15));
            }
            for (g_84 = 0; (g_84 <= 3); g_84 += 1)
            { 
                int i;
                g_78[g_84] = (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_83 = g_78[g_84]), (((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(4UL, (l_98[2][2][0] = (((safe_mul_func_int8_t_s_s(g_54[3], g_85)) , p_7) , g_78[2])))), g_54[g_60])) >= 0x0FL) | p_7))), g_85));
                l_69[0][1][0] = (((((safe_add_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((l_83 = p_6), (safe_div_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_69[0][0][0], (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((g_30[0] > (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((((p_5 & 0x0EL) <= 253UL) , 1L) && g_54[1]), l_119[0][0][2])), g_21))), 0x11L)), g_84)))) < g_30[0]), 8L)))), g_78[1])) & p_5), 0x11L)) | g_54[3]) > g_54[3]) < g_78[g_84]), p_6)) > 0x9B2D0C04BEFBA41DLL) || g_78[g_84]) ^ l_38) & g_19);
            }
        }
        if ((!p_5))
        { 
            l_69[0][0][0] |= p_7;
        }
        else
        { 
            g_78[2] = l_69[0][0][0];
            for (l_83 = 0; (l_83 >= (-10)); --l_83)
            { 
                return g_84;
            }
        }
    }
    else
    { 
        uint32_t l_145 = 0x506CEEECL;
        const uint64_t l_146 = 0UL;
        int32_t l_148 = 0xA5219CEAL;
        uint16_t l_164[5][4][3] = {{{0xDE77L,0x68DAL,0x68DAL},{65526UL,65528UL,65526UL},{0xDE77L,0xDE77L,0x68DAL},{65533UL,65528UL,65533UL}},{{0xDE77L,0x68DAL,0x68DAL},{65526UL,65528UL,65526UL},{0xDE77L,0xDE77L,0x68DAL},{65533UL,65528UL,65533UL}},{{0xDE77L,0x68DAL,0x68DAL},{65526UL,65528UL,65526UL},{0xDE77L,0xDE77L,0x68DAL},{65533UL,65528UL,65533UL}},{{0xDE77L,0x68DAL,0x68DAL},{65526UL,65528UL,65526UL},{0xDE77L,0xDE77L,0x68DAL},{65533UL,65528UL,65533UL}},{{0xDE77L,0x68DAL,0x68DAL},{65526UL,65528UL,65526UL},{0xDE77L,0xDE77L,0x68DAL},{65533UL,65528UL,65533UL}}};
        int32_t l_198[4][2] = {{0L,1L},{1L,0L},{1L,1L},{0L,1L}};
        int i, j, k;
        if ((((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((((((safe_div_func_int64_t_s_s(((g_147[1] &= ((((((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((g_84 && (((safe_add_func_int64_t_s_s(0x35BBA98850522FE4LL, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint8_t_u_u((0xDFE4B33AL > 0x9E81EBBBL), 6UL)) < 0xE647C8C7L) , l_145), p_5)), g_85)))) != l_145) == g_54[2])), g_85)), 0xFD86619B69560C68LL)) != l_146) == 0L) >= 0x34L) >= g_85) != l_38)) , 0L), 0xD142C5C11F591707LL)) != g_85) >= p_7) && l_146) , l_146), p_6)), 0x153F037E6CEEB8BFLL)), p_6)), l_119[1][0][0])) > 0x9CL) == g_84) | 0x09L) >= l_39.f2))
        { 
            l_149[0]--;
        }
        else
        { 
            int8_t l_163[4];
            union U2 l_168 = {0x4145L};
            uint32_t l_195 = 0x8B5D35BDL;
            int32_t l_196 = 0x8439F274L;
            int i;
            for (i = 0; i < 4; i++)
                l_163[i] = 1L;
            l_148 |= p_5;
            if ((((safe_sub_func_int16_t_s_s((((((((0x9405L || (safe_lshift_func_uint8_t_u_s((((((safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(p_5, 0xB170AB691963C95DLL)), ((+(((safe_lshift_func_int8_t_s_s(((1L <= l_69[0][0][0]) | 0x0B87C0FFL), l_163[1])) , p_6) != 0xBE33L)) && p_6))) <= p_6) ^ 0x4FBDCD36L) | p_7) > l_163[3]), 5))) >= g_19) , p_6) > 5L) & l_164[1][3][0]) == 0x5AL) & l_149[0]), p_6)) == l_164[1][3][0]) , 1L))
            { 
                uint8_t l_174[5][1];
                int32_t l_175 = 1L;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_174[i][j] = 1UL;
                }
                g_78[0] = ((l_175 = ((~p_7) != (safe_rshift_func_uint16_t_u_s((((g_78[2] , (l_168 , (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((g_173 , g_54[4]) == l_174[1][0]), g_173.f3)), p_6)))) < 0x1EB18AD3L) , 65535UL), p_5)))) | g_78[2]);
                l_69[0][0][0] |= 0x0D6635F1L;
            }
            else
            { 
                int32_t l_197 = 0x6C53095AL;
                g_78[2] = ((~(l_198[1][1] = (g_30[0] <= (safe_sub_func_int64_t_s_s((l_197 = ((((safe_add_func_uint64_t_u_u(g_173.f2, ((((l_148 = (6L == ((l_196 |= (safe_mod_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((safe_div_func_int64_t_s_s(l_163[1], g_60)) , 0x18F9528EL), g_54[1])) >= l_195), 15)) , g_85) < 3L), 9UL)), 0xEF9B7307L)) ^ 65535UL), 0xC4L))) >= g_173.f4))) & g_173.f0) , g_84) != g_84))) , g_21) , 0L) >= p_7)), 0x1465BA7104F43F57LL))))) , (-4L));
            }
        }
        --l_199;
    }
    if ((l_206 |= (safe_lshift_func_uint8_t_u_u((((0x41L & ((g_30[2] & (safe_lshift_func_uint8_t_u_u(l_69[0][0][0], ((g_173.f4 != 0x0BD1E669L) < p_6)))) <= p_7)) ^ g_78[1]) <= l_69[1][0][0]), g_54[1]))))
    { 
        uint32_t l_211 = 18446744073709551615UL;
        int32_t l_215[4] = {0x4598823AL,0x4598823AL,0x4598823AL,0x4598823AL};
        int i;
        for (g_60 = 0; (g_60 < 22); g_60++)
        { 
            const union U3 l_212 = {0xF28A5CC781213417LL};
            for (g_84 = 0; (g_84 <= 33); g_84 = safe_add_func_int32_t_s_s(g_84, 1))
            { 
                l_211 ^= g_84;
                l_206 &= (l_212 , (-5L));
                l_69[0][0][0] = (safe_add_func_int8_t_s_s(l_119[0][0][2], 0x4EL));
            }
            g_78[3] = p_7;
        }
        l_215[2] ^= g_30[2];
        --g_216;
    }
    else
    { 
        int32_t l_222 = 0xFADE91FDL;
        int32_t l_231 = 0x048B8D8FL;
        int64_t l_232 = 0xD21F283B0DCFB84FLL;
        int32_t l_233[4][1];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_233[i][j] = 0x92606F87L;
        }
        l_69[0][0][0] ^= (safe_mul_func_uint8_t_u_u(((((((+l_222) == ((safe_add_func_uint8_t_u_u(g_173.f1, (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((g_147[1]--), ((((safe_mul_func_int8_t_s_s(1L, g_30[0])) == g_173.f1) == l_233[1][0]) | 7L))) == p_6), l_206)), 11)))) > g_19)) | g_60) | g_216) == p_6) == l_232), g_173.f1));
    }
    for (l_199 = 0; (l_199 != 36); l_199 = safe_add_func_uint16_t_u_u(l_199, 6))
    { 
        for (l_206 = (-2); (l_206 == 28); l_206 = safe_add_func_uint64_t_u_u(l_206, 7))
        { 
            g_78[2] = 0xA3192772L;
        }
        for (g_216 = 0; (g_216 == 47); g_216++)
        { 
            if (g_216)
                break;
        }
        if (g_30[2])
            continue;
    }
    return p_6;
}



static int64_t  func_13(int32_t  p_14, const int64_t  p_15)
{ 
    return g_30[0];
}



static union U1  func_32(uint32_t  p_33, uint64_t  p_34, const struct S0  p_35, const uint8_t  p_36, const uint8_t  p_37)
{ 
    union U3 l_42 = {0x7D7A760E0689BB5CLL};
    int32_t l_43[3];
    uint16_t l_49 = 0xFB48L;
    int32_t l_55 = 1L;
    struct S0 l_59 = {65534UL,0x0F8CL,0xAA7AL,-1L,1UL};
    union U1 l_61 = {{0UL,0x6DD1L,1UL,1L,0xE03AL}};
    int i;
    for (i = 0; i < 3; i++)
        l_43[i] = 0x1EE328DBL;
    l_43[1] = (1UL != (safe_div_func_int8_t_s_s((-1L), (l_42 , (g_30[0] ^ 3UL)))));
    l_55 &= (((g_54[3] ^= (~(safe_lshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((((((((l_49 , l_42.f0) && ((safe_lshift_func_int16_t_s_u((p_35.f1 ^ (((safe_add_func_uint32_t_u_u((p_36 != p_36), 0xD0016D17L)) <= l_43[1]) & 1UL)), 15)) > l_49)) && 6UL) != p_35.f0) ^ l_42.f0) < l_43[1]) , 0xD068L), l_49)) && g_30[0]), g_30[0])))) && g_30[0]) <= p_35.f0);
    g_60 = ((((l_43[2] = (l_49 == p_35.f1)) == (safe_rshift_func_int8_t_s_u(g_54[3], ((~(l_59 , 9UL)) < p_35.f4)))) & p_35.f2) && g_30[2]);
    return l_61;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_30[i], "g_30[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_147[i], "g_147[i]", print_hash_value);

    }
    transparent_crc(g_173.f0, "g_173.f0", print_hash_value);
    transparent_crc(g_173.f1, "g_173.f1", print_hash_value);
    transparent_crc(g_173.f2, "g_173.f2", print_hash_value);
    transparent_crc(g_173.f3, "g_173.f3", print_hash_value);
    transparent_crc(g_173.f4, "g_173.f4", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
