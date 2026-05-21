// SPDX-License-Identifier: MIT
// cctest_csmith_e763c329.c --- cctest case csmith_e763c329 (csmith seed 3882074921)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfd5093e1 */

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

// Options:   -s 3882074921 -o /tmp/csmith_gen_8eh5tjra/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   const uint16_t  f3;
   const int8_t  f4;
   int32_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int16_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
   uint8_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
};
#pragma pack(pop)

union U3 {
   int32_t  f0;
   uint8_t  f1;
   const uint16_t  f2;
   struct S2  f3;
};

union U4 {
   int32_t  f0;
   const uint8_t  f1;
   const struct S2  f2;
};

union U5 {
   const struct S0  f0;
   int16_t  f1;
   uint8_t  f2;
   struct S0  f3;
};

union U6 {
   int16_t  f0;
};


static uint32_t g_9 = 0x85DC1B6EL;
static int32_t g_10 = (-1L);
static struct S2 g_12[4][5] = {{{0x4C6A37D7L},{0x4C6A37D7L},{0x4C6A37D7L},{0x4C6A37D7L},{0x4C6A37D7L}},{{3UL},{3UL},{3UL},{3UL},{3UL}},{{0x4C6A37D7L},{0x4C6A37D7L},{0x4C6A37D7L},{0x4C6A37D7L},{0x4C6A37D7L}},{{3UL},{3UL},{3UL},{3UL},{3UL}}};
static union U5 g_31 = {{254UL,0xD6848298L,1UL,0x927EL,0xD0L,0x0B7F45B6L}};
static union U4 g_33[3][5][4] = {{{{0x7DBF1295L},{0xF5FDFDA8L},{0L},{0x7DBF1295L}},{{0L},{0x7DBF1295L},{-10L},{-10L}},{{0L},{0L},{0x506946CBL},{-1L}},{{0L},{0xF5FDFDA8L},{-10L},{0L}},{{0L},{-1L},{0L},{-10L}}},{{{0x7DBF1295L},{-1L},{0x506946CBL},{0L}},{{-1L},{0xF5FDFDA8L},{0x506946CBL},{0xF5FDFDA8L}},{{0x7A95534FL},{0L},{0x506946CBL},{0x726F2C0EL}},{{0xF5FDFDA8L},{-10L},{0L},{-10L}},{{-10L},{0x506946CBL},{0x7A95534FL},{-10L}}},{{{0x7A95534FL},{-10L},{0x726F2C0EL},{0x726F2C0EL}},{{0L},{0L},{0L},{0xF5FDFDA8L}},{{0L},{0x506946CBL},{0x726F2C0EL},{0L}},{{0x7A95534FL},{0xF5FDFDA8L},{0x7A95534FL},{0x726F2C0EL}},{{-10L},{0xF5FDFDA8L},{0L},{0L}}}};
static uint16_t g_51 = 0x9C85L;
static union U6 g_72 = {7L};
static int64_t g_92 = (-1L);
static uint8_t g_97 = 1UL;
static union U3 g_117 = {1L};
static int8_t g_166 = (-10L);
static int8_t g_183 = (-3L);
static int64_t g_185 = 1L;
static int32_t g_202 = 0x06B7AEDBL;
static union U3 g_227 = {6L};



static union U3  func_1(void);
static const int32_t  func_18(struct S0  p_19, union U5  p_20, uint32_t  p_21, int32_t  p_22, union U4  p_23);
static struct S0  func_24(uint32_t  p_25, union U4  p_26, union U6  p_27, int32_t  p_28);
static union U4  func_29(union U5  p_30);




static union U3  func_1(void)
{ 
    int64_t l_3 = 0xCD76CE4A6F44401DLL;
    int32_t l_4 = (-1L);
    int32_t l_5 = (-1L);
    int32_t l_6[4][1];
    uint32_t l_8 = 18446744073709551614UL;
    uint8_t l_13 = 0xB2L;
    const struct S2 l_118 = {0x76B532C9L};
    union U5 l_159[3] = {{{3UL,0x180E9687L,65535UL,0x2062L,0x2DL,0xDBDE7036L}},{{3UL,0x180E9687L,65535UL,0x2062L,0x2DL,0xDBDE7036L}},{{3UL,0x180E9687L,65535UL,0x2062L,0x2DL,0xDBDE7036L}}};
    uint32_t l_221[3];
    int16_t l_223[1];
    uint64_t l_224 = 6UL;
    union U3 l_228 = {1L};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_6[i][j] = 1L;
    }
    for (i = 0; i < 3; i++)
        l_221[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_223[i] = 0x6BE4L;
    if ((l_6[3][0] = (safe_unary_minus_func_int64_t_s((l_3 | (l_5 = (l_4 |= (-1L))))))))
    { 
        uint32_t l_7[2][4];
        const struct S2 l_11 = {4294967292UL};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_7[i][j] = 0xA017779AL;
        }
        g_9 = (l_7[1][2] > l_8);
        g_10 |= (-2L);
        g_12[1][3] = l_11;
    }
    else
    { 
        l_13 = (-2L);
    }
    for (l_13 = 0; (l_13 == 30); ++l_13)
    { 
        union U6 l_34[3] = {{-1L},{-1L},{-1L}};
        int32_t l_110 = 0x5B83574DL;
        int i;
        for (g_10 = 0; (g_10 < 17); g_10++)
        { 
            int16_t l_111 = 0x6E77L;
            int32_t l_116[2];
            int i;
            for (i = 0; i < 2; i++)
                l_116[i] = (-8L);
            if (func_18((l_8 , func_24(g_9, func_29(g_31), l_34[2], l_34[2].f0)), g_31, g_31.f0.f1, g_31.f0.f5, g_33[2][3][0]))
            { 
                uint8_t l_107 = 0xA8L;
                g_33[0][1][3].f0 = (safe_rshift_func_int8_t_s_u(((0x83FA7B1138347E9BLL > ((((0L <= (safe_div_func_uint32_t_u_u(l_6[3][0], (safe_sub_func_int16_t_s_s((0x3CB9137EL || g_31.f0.f2), l_6[3][0]))))) | 0UL) || l_107) < 0L)) , g_92), l_107));
            }
            else
            { 
                g_12[2][1] = g_33[0][1][3].f2;
            }
            if ((((safe_rshift_func_int16_t_s_s((l_110 = l_6[3][0]), (g_72.f0 ^= (((l_111 = 8UL) ^ (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((l_34[2].f0 , l_116[0]) || 0xEC5F198F030F790ELL) < l_116[0]) , 247UL), g_33[0][1][3].f0)), l_116[0]))) <= 0x203AL)))) && g_72.f0) , g_31.f0.f1))
            { 
                return g_117;
            }
            else
            { 
                uint64_t l_119 = 18446744073709551615UL;
                g_12[1][3] = l_118;
                if (g_97)
                    break;
                l_119 |= 0x568BFC03L;
            }
        }
    }
    if (((safe_mul_func_uint8_t_u_u((((0x921FL != ((safe_add_func_int32_t_s_s(0xBFDE95A6L, (safe_div_func_int8_t_s_s(0xF9L, ((safe_div_func_int32_t_s_s(l_5, l_8)) & l_8))))) & 4294967295UL)) & 0UL) != (-9L)), g_31.f0.f0)) , g_31.f0.f3))
    { 
        const uint32_t l_132 = 0xA0E13958L;
        struct S2 l_133 = {4294967289UL};
        int32_t l_155 = 0x8D3076AEL;
        if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(l_132, 11)), 0)))
        { 
            const uint16_t l_143 = 0xB93CL;
            union U5 l_144 = {{1UL,4294967290UL,8UL,7UL,0x03L,-3L}};
            int32_t l_154 = 1L;
            const int32_t l_156 = 0x370D5C25L;
            l_133 = l_133;
            if (((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(((l_5 ^= (safe_rshift_func_int16_t_s_s(g_31.f0.f1, (((((safe_unary_minus_func_uint64_t_u((((-1L) & 0x80CA0C94L) & (safe_sub_func_uint16_t_u_u(0xAA0FL, 2UL))))) <= g_117.f3.f0) != l_133.f0) && l_132) != l_132)))) , l_6[3][0]), 0UL)) || l_143), g_117.f0)) ^ 1L))
            { 
                const struct S1 l_149[1][1][1] = {{{{5L,0xC59A757EL,18446744073709551609UL,0xC5A94563L,2UL}}}};
                int i, j, k;
                l_144.f3.f5 = (((l_144 , ((l_155 = (safe_sub_func_int16_t_s_s((l_144.f0.f5 && (safe_add_func_int32_t_s_s((l_149[0][0][0] , (((safe_mod_func_uint16_t_u_u((!(safe_unary_minus_func_int16_t_s((l_3 & g_10)))), 0x70E1L)) | g_31.f0.f1) , l_154)), l_149[0][0][0].f0))), l_133.f0))) <= l_156)) ^ l_149[0][0][0].f4) > l_133.f0);
            }
            else
            { 
                g_10 = g_33[0][1][3].f0;
            }
        }
        else
        { 
            uint32_t l_160 = 18446744073709551607UL;
            int32_t l_161 = 8L;
            l_161 = (g_31.f3.f5 = ((g_97 = (0x54L ^ (((safe_sub_func_uint32_t_u_u(((func_24(l_13, func_29(l_159[0]), g_72, l_160) , g_97) == g_72.f0), g_12[1][3].f0)) != g_31.f0.f1) & 9UL))) >= g_31.f0.f5));
        }
        for (l_8 = 27; (l_8 >= 57); l_8 = safe_add_func_uint16_t_u_u(l_8, 2))
        { 
            const int64_t l_182[3][3] = {{7L,(-9L),7L},{7L,(-9L),7L},{7L,(-9L),7L}};
            int32_t l_184 = 0x242812E1L;
            int i, j;
            for (g_31.f3.f0 = 0; (g_31.f3.f0 >= 1); g_31.f3.f0 = safe_add_func_int64_t_s_s(g_31.f3.f0, 4))
            { 
                uint64_t l_167 = 18446744073709551608UL;
                l_167++;
            }
            l_6[3][0] = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(g_9, (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_184 = (safe_unary_minus_func_uint32_t_u((g_117.f3.f0 &= ((((g_183 = (safe_div_func_int8_t_s_s((l_155 && (+(0xB3BDL | g_31.f0.f4))), l_182[1][0]))) >= 1UL) , l_132) | g_31.f0.f5))))), l_182[2][0])), 3)))) | g_97), l_182[1][0]));
        }
        l_155 |= g_185;
    }
    else
    { 
        int16_t l_222 = 1L;
        int32_t l_226 = 0x5C7022BCL;
        for (l_4 = (-27); (l_4 > (-27)); l_4++)
        { 
            uint32_t l_195 = 0x28B12384L;
            int32_t l_225 = (-1L);
            if ((safe_sub_func_uint32_t_u_u((g_72 , (g_202 &= (~(safe_add_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(l_195, (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((g_12[1][3] , (safe_rshift_func_uint8_t_u_s(l_195, 0))) | g_9) == 0x77L), g_185)), g_185)))) < g_97) & g_92), 0x1106L))))), g_31.f0.f3)))
            { 
                l_159[0].f3.f5 = g_10;
            }
            else
            { 
                uint64_t l_207 = 0UL;
                int32_t l_220 = 1L;
                g_10 = (safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_6[3][0], ((((l_207--) >= (safe_sub_func_int8_t_s_s(9L, (safe_add_func_int64_t_s_s((l_225 |= (safe_add_func_int32_t_s_s((((((((g_31.f1 = (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((((l_222 = ((l_220 = (func_29(g_31) , g_31.f0.f3)) && l_221[2])) == 0xA751AEE45CAA3732LL) == l_195) & 1UL) <= 0x6349847874FC3CE8LL), g_31.f0.f2)), g_33[0][1][3].f0))) == g_97) != l_223[0]) , 0xA22F5735L) || 0UL) & l_224) ^ g_51), g_33[0][1][3].f0))), g_166))))) == 1L) ^ l_226))) == g_33[0][1][3].f0), 1L));
                return g_227;
            }
            if (g_92)
                break;
        }
    }
    return l_228;
}



static const int32_t  func_18(struct S0  p_19, union U5  p_20, uint32_t  p_21, int32_t  p_22, union U4  p_23)
{ 
    uint64_t l_67 = 1UL;
    int32_t l_68 = 0x372B4D3AL;
    struct S2 l_78 = {9UL};
    const int32_t l_94 = 1L;
    const uint8_t l_98[5][4][1] = {{{0UL},{0x55L},{2UL},{0x5DL}},{{251UL},{0x5DL},{2UL},{0x55L}},{{0UL},{0xD3L},{0UL},{0x55L}},{{2UL},{0x5DL},{251UL},{0x5DL}},{{2UL},{0x55L},{0UL},{0xD3L}}};
    int i, j, k;
    l_68 = ((((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_12[1][3].f0, (((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((1UL != (1L == ((safe_mod_func_uint64_t_u_u(l_67, 0x0205405EA325A448LL)) | l_67))), l_67)), 0x763FF6366113C509LL)) | p_20.f0.f5) | 0xF4458B99485C884ELL))), l_67)) ^ g_31.f0.f2) != l_68) < g_31.f0.f4);
    if (g_31.f0.f0)
    { 
        const uint32_t l_71 = 0x61C72179L;
        int32_t l_89 = (-3L);
        int32_t l_90 = 9L;
        uint64_t l_91 = 18446744073709551615UL;
        int32_t l_93 = 6L;
        l_93 |= (((safe_sub_func_uint16_t_u_u(((l_71 & (l_68 = (g_72 , ((g_92 ^= (safe_unary_minus_func_int64_t_s((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((l_78 = g_12[1][3]) , ((((((safe_mod_func_uint16_t_u_u((l_91 = ((l_90 &= ((l_89 = (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u(0xB50BL, g_33[0][1][3].f2.f0)), g_51)), l_68)) == 0x7825FA2FCAAFA353LL), l_67))) || g_12[1][3].f0)) , g_9)), p_19.f1)) ^ g_12[1][3].f0) , p_20.f0) , p_20.f0.f3) && 251UL) > p_20.f0.f0)), p_20.f0.f5)) & 0xC24A879AF5B30FD8LL) > g_31.f0.f4), p_20.f0.f0))))) & 0xC4L)))) < p_19.f3), g_31.f0.f4)) && 0x59L) < 0xAA48CC3AA3D5FEECLL);
        return l_94;
    }
    else
    { 
        l_68 = p_19.f5;
        for (g_51 = (-15); (g_51 <= 20); g_51 = safe_add_func_uint8_t_u_u(g_51, 3))
        { 
            return p_23.f1;
        }
        g_97 ^= l_67;
    }
    return l_98[0][3][0];
}



static struct S0  func_24(uint32_t  p_25, union U4  p_26, union U6  p_27, int32_t  p_28)
{ 
    int32_t l_39[3];
    int32_t l_48 = 0x0936A74BL;
    int32_t l_49 = (-8L);
    int32_t l_50 = 0L;
    struct S0 l_56 = {0xD3L,0UL,0xD73CL,0x4EA9L,1L,0xD599618DL};
    int i;
    for (i = 0; i < 3; i++)
        l_39[i] = 0L;
    l_50 ^= (safe_rshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s((l_39[0] > (((safe_mul_func_uint8_t_u_u(0x01L, (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(g_33[0][1][3].f2.f0, (safe_add_func_int32_t_s_s(((((((((((--g_51) > ((safe_sub_func_int16_t_s_s((p_28 | 1UL), 0L)) > 0xE002L)) == p_26.f2.f0) || 0xBB1B2B15L) || l_48) > (-1L)) == p_26.f0) ^ g_33[0][1][3].f0) < 0x3DL) | 0x8BL), 0xBB1B5B3AL)))) != 6UL), g_12[1][3].f0)))) , l_49) || 0x5F63L)), p_26.f1)) , p_28) > 0x97L), p_26.f1));
    return l_56;
}



static union U4  func_29(union U5  p_30)
{ 
    uint64_t l_32[1];
    int i;
    for (i = 0; i < 1; i++)
        l_32[i] = 0x293CC9D6C8400B8FLL;
    l_32[0] = 0x3C9534CEL;
    return g_33[0][1][3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_12[i][j].f0, "g_12[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_33[i][j][k].f0, "g_33[i][j][k].f0", print_hash_value);
                transparent_crc(g_33[i][j][k].f1, "g_33[i][j][k].f1", print_hash_value);
                transparent_crc(g_33[i][j][k].f2.f0, "g_33[i][j][k].f2.f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3.f0, "g_117.f3.f0", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    transparent_crc(g_227.f3.f0, "g_227.f3.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
