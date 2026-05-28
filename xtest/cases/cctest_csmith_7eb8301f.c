// SPDX-License-Identifier: MIT
// cctest_csmith_7eb8301f.c --- cctest case csmith_7eb8301f (csmith seed 2126000159)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe62c4180 */
/* @exp_ticks 0x4a51 */

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

// Options:   -s 2126000159 -o /tmp/csmith_gen_61w3r1c3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint64_t  f0;
   uint8_t  f1;
   int32_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   const int16_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   uint32_t  f1;
   const int32_t  f2;
   uint8_t  f3;
};
#pragma pack(pop)

union U3 {
   const int32_t  f0;
   const uint64_t  f1;
   struct S0  f2;
   int8_t  f3;
};

union U4 {
   const int8_t  f0;
};


static int32_t g_3 = (-1L);
static uint32_t g_6 = 18446744073709551615UL;
static uint8_t g_7 = 4UL;
static uint16_t g_9 = 0xF157L;
static const union U3 g_21[5][3][2] = {{{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}}},{{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}}},{{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}}},{{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}}},{{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}},{{0xEE85EC41L},{0xEE85EC41L}}}};
static struct S2 g_42[2] = {{0xBCCE3F50L,4294967295UL,0L,1UL},{0xBCCE3F50L,4294967295UL,0L,1UL}};
static uint64_t g_51[1][1] = {{0x5032406135443C7FLL}};
static uint8_t g_58 = 255UL;
static uint32_t g_72[4] = {0UL,0UL,0UL,0UL};
static uint32_t g_83 = 0x38B78E61L;
static int32_t g_89 = 0x18651235L;
static int32_t g_107[5] = {0L,0L,0L,0L,0L};
static uint16_t g_120 = 1UL;
static int8_t g_143 = 0xCAL;
static union U3 g_170 = {1L};
static uint16_t g_174 = 0x57F9L;
static int16_t g_179 = 0L;



static uint64_t  func_1(void);
static const int8_t  func_15(const union U3  p_16, int8_t  p_17, int64_t  p_18, int32_t  p_19, union U3  p_20);
static int16_t  func_29(union U3  p_30);
static union U3  func_31(int32_t  p_32, int8_t  p_33, int16_t  p_34, struct S2  p_35);




static uint64_t  func_1(void)
{ 
    int64_t l_2[1][4][4] = {{{0xBEDCC590F023498ELL,0x8144AD72D76715F0LL,0xBEDCC590F023498ELL,0xBEDCC590F023498ELL},{0xBEDCC590F023498ELL,0xBEDCC590F023498ELL,0x8144AD72D76715F0LL,0xBEDCC590F023498ELL},{0xBEDCC590F023498ELL,0L,0L,0xBEDCC590F023498ELL},{0L,0xBEDCC590F023498ELL,0L,0L}}};
    int32_t l_162 = (-7L);
    int16_t l_176[2][3][1] = {{{(-1L)},{0xEBA8L},{(-1L)}},{{0xEBA8L},{(-1L)},{0xEBA8L}}};
    int16_t l_194 = 0L;
    const struct S1 l_213 = {0x65BA7104L,-1L};
    int16_t l_216 = 0x2F70L;
    int i, j, k;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        int64_t l_8 = 0x5F4E26C12A7B09F5LL;
        int32_t l_26[4];
        int16_t l_163 = (-6L);
        int i;
        for (i = 0; i < 4; i++)
            l_26[i] = 0xFE3D2F55L;
        if ((safe_sub_func_int64_t_s_s((g_7 |= (g_3 <= (g_6 = g_3))), (g_9 = l_8))))
        { 
            int8_t l_40 = 7L;
            uint8_t l_41 = 255UL;
            l_163 = (~(safe_add_func_uint64_t_u_u((l_162 = (safe_lshift_func_int8_t_s_s(func_15(g_21[0][0][1], (safe_sub_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((--g_9), func_29(func_31(l_2[0][3][2], (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_7 , l_40), 65532UL)), l_41)), l_8, g_42[0])))) , 0x681FL) | l_8), l_8)), l_2[0][1][0], l_26[3], g_21[3][2][1]), 3))), g_143)));
            g_107[0] = 0x807DED58L;
        }
        else
        { 
            uint32_t l_173 = 4294967286UL;
            int32_t l_175 = (-1L);
            g_174 = (safe_mul_func_int16_t_s_s(((g_143 = (g_120 & 0UL)) != (safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((g_170 , (safe_div_func_uint8_t_u_u(g_107[0], g_6))), l_26[2])) != (-1L)) > l_173) , 0x2144L), 13))), l_173));
            for (g_170.f2.f2 = 0; (g_170.f2.f2 <= 0); g_170.f2.f2 += 1)
            { 
                l_175 = g_120;
            }
            l_162 = l_26[2];
        }
        for (l_163 = 0; (l_163 <= 0); l_163 += 1)
        { 
            int64_t l_186 = (-1L);
            int32_t l_193 = 0xC75A76CDL;
            uint8_t l_195[5];
            int i;
            for (i = 0; i < 5; i++)
                l_195[i] = 255UL;
            g_107[0] ^= (0L < (l_176[1][1][0] && ((--g_51[0][0]) , (((g_179 = ((g_42[0].f3 != l_176[1][1][0]) ^ 0x65L)) != 0xF070L) <= g_42[0].f0))));
            g_170.f2.f2 = (g_107[0] = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((l_186 > 0xDACF7CC7L) & (safe_lshift_func_uint8_t_u_s(((g_9--) && (g_7 && ((g_179 |= ((safe_add_func_int16_t_s_s(0xC3C2L, l_163)) < g_170.f3)) >= l_162))), 3))), l_26[0])), l_162)), l_162)) | l_176[0][0][0]));
            for (g_170.f2.f2 = 0; (g_170.f2.f2 <= 0); g_170.f2.f2 += 1)
            { 
                int i, j, k;
                --l_195[2];
                g_107[2] = (l_2[l_163][(g_3 + 1)][(g_3 + 1)] | (0UL == ((4UL | (l_26[3] ^ g_170.f3)) & g_143)));
                g_107[0] = g_42[0].f2;
            }
        }
        for (g_179 = 0; (g_179 >= 0); g_179 -= 1)
        { 
            uint8_t l_198 = 1UL;
            l_198++;
            for (g_58 = 0; (g_58 <= 0); g_58 += 1)
            { 
                int32_t l_201 = 1L;
                g_107[0] ^= l_201;
            }
        }
    }
    for (g_9 = 0; (g_9 <= 0); g_9 += 1)
    { 
        int8_t l_210 = 3L;
        int32_t l_217 = (-8L);
        int32_t l_226[1];
        int32_t l_227 = 0xFB53073AL;
        int32_t l_228 = 1L;
        int16_t l_229 = 8L;
        int32_t l_230 = 0L;
        int i;
        for (i = 0; i < 1; i++)
            l_226[i] = 0xB345A963L;
    }
    return l_216;
}



static const int8_t  func_15(const union U3  p_16, int8_t  p_17, int64_t  p_18, int32_t  p_19, union U3  p_20)
{ 
    int16_t l_114 = 0xDE55L;
    const union U4 l_117 = {0x91L};
    int32_t l_121 = (-1L);
    uint32_t l_122 = 0x1A5E6C36L;
    int32_t l_144 = 0L;
    int8_t l_157[1];
    int i;
    for (i = 0; i < 1; i++)
        l_157[i] = 1L;
    l_121 = (l_114 ^ (safe_rshift_func_int16_t_s_u(((g_120 = ((p_17 = (l_117 , g_89)) == (safe_mod_func_int8_t_s_s((g_42[0].f3 > p_20.f0), p_18)))) , g_89), 3)));
    l_122 = 0xB86C8B6BL;
    for (g_7 = 0; (g_7 >= 41); ++g_7)
    { 
        uint32_t l_145 = 0x74B76AC3L;
        int32_t l_146 = 0x4BF33FD1L;
        l_146 |= (((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0UL, (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_16.f0, g_42[0].f0)), (((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_143, l_121)), g_72[3])), 2)) ^ g_7), g_3)) , l_144) >= 247UL))))) >= 3UL), l_145)) >= g_83), (-1L))) != 1L) , l_145);
        p_20.f2.f2 = (((l_144 = (safe_unary_minus_func_uint16_t_u((((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((l_146 &= (g_72[2] <= ((~0x8FF0D073L) , ((safe_add_func_int32_t_s_s(0x7DFE4B33L, g_42[0].f0)) > g_42[0].f2)))), l_145)), p_16.f3)), p_17)) >= g_7) <= l_121)))) , l_157[0]) | g_120);
        g_107[0] &= ((safe_sub_func_uint32_t_u_u(0UL, ((((18446744073709551606UL <= g_58) == ((safe_sub_func_uint64_t_u_u(((0xA841242F1DAB3D17LL == 2L) != 0xC1L), p_19)) , l_145)) , l_122) & l_146))) > l_146);
    }
    return g_107[0];
}



static int16_t  func_29(union U3  p_30)
{ 
    uint32_t l_65[3];
    struct S2 l_70 = {0x0B3F497EL,6UL,0xB14FAB08L,255UL};
    int32_t l_88 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_65[i] = 3UL;
    for (g_6 = 0; (g_6 <= 0); g_6 += 1)
    { 
        uint64_t l_52 = 0x5D0016D172E30E5DLL;
        struct S1 l_55 = {0x013EC5CBL,-1L};
        --l_52;
        for (l_52 = 0; (l_52 <= 0); l_52 += 1)
        { 
            int64_t l_59 = 0xD52C88D56716659ELL;
            uint64_t l_60 = 18446744073709551615UL;
            int32_t l_87[2][5] = {{0xDE8EBF9DL,0xDE8EBF9DL,0x7B8DD85FL,0L,0x7B8DD85FL},{0xDE8EBF9DL,0xDE8EBF9DL,0x7B8DD85FL,0L,0x7B8DD85FL}};
            int32_t l_90 = 0x517DE860L;
            int i, j;
            if ((l_55 , (l_60 = (((safe_mul_func_uint8_t_u_u(g_51[l_52][l_52], ((g_58 &= l_52) | (l_59 != 0xDF97EF3AL)))) & 0x267713999EA34219LL) && g_42[0].f0))))
            { 
                union U4 l_69 = {0L};
                int32_t l_71 = 0L;
                p_30.f2.f2 = (l_71 = ((safe_div_func_uint8_t_u_u(((func_31(l_65[0], (safe_add_func_int8_t_s_s((-1L), (!(((l_69 , l_55.f1) & 0x6082240A493BBC76LL) & g_51[0][0])))), g_42[0].f0, l_70) , g_3) < 0L), g_51[l_52][l_52])) || 0L));
                g_72[2] &= g_6;
            }
            else
            { 
                int8_t l_86 = 1L;
                p_30.f2.f2 = ((p_30.f0 >= (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((g_58 = 252UL), 4)), (l_90 |= (l_55.f0 ^= (g_89 = ((((l_88 = ((l_87[0][1] |= (safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((g_83 = p_30.f3) & (safe_lshift_func_int16_t_s_u(((0x5565C6936EE37768LL & p_30.f0) < p_30.f0), 1))), p_30.f3)), l_70.f3)) <= l_86), p_30.f3))) < p_30.f0)) && 0xC2AECBAE8C6C5A51LL) >= 0UL) < p_30.f3))))))) > g_21[0][0][1].f0);
            }
            if ((((safe_sub_func_uint16_t_u_u(p_30.f0, 0xFD04L)) ^ 0x0596CDBAL) != p_30.f3))
            { 
                uint32_t l_101 = 0x1379FB22L;
                l_101 ^= (safe_mod_func_int64_t_s_s(((safe_div_func_int64_t_s_s((l_65[0] < (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((4294967289UL & (g_72[3] < (l_55.f1 == p_30.f0))), 1L)), g_83))), 0x517482C4BD6597F7LL)) && 0UL), (-7L)));
            }
            else
            { 
                g_107[0] ^= ((safe_lshift_func_int8_t_s_s(1L, (p_30.f0 <= g_7))) & (((+p_30.f0) | 0x4BL) == l_65[0]));
            }
            if ((safe_sub_func_int16_t_s_s(((p_30.f0 == ((l_88 = (g_89 && (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(0xD995L, l_70.f2)), 0x76D89E43L)))) != 18446744073709551611UL)) || g_42[0].f0), 8L)))
            { 
                return p_30.f3;
            }
            else
            { 
                g_107[0] = l_52;
                return p_30.f3;
            }
        }
    }
    return p_30.f3;
}



static union U3  func_31(int32_t  p_32, int8_t  p_33, int16_t  p_34, struct S2  p_35)
{ 
    int16_t l_49[5][2][3] = {{{0x41D8L,0xD1AFL,(-1L)},{0xC924L,0x27FDL,0x27FDL}},{{(-1L),0x41D8L,0xABDBL},{3L,0xC924L,0x4340L}},{{(-1L),(-1L),(-1L)},{0xC924L,3L,0L}},{{0x41D8L,(-1L),0x41D8L},{0x27FDL,0xC924L,0x8103L}},{{0xD1AFL,0x41D8L,0x41D8L},{0x8103L,0x27FDL,0L}}};
    union U3 l_50 = {-1L};
    int i, j, k;
    l_49[4][0][0] = (safe_sub_func_int32_t_s_s(0x0689BB5CL, ((safe_sub_func_int16_t_s_s(0xAB91L, ((safe_lshift_func_int16_t_s_u(p_35.f3, (g_42[0].f1 <= g_3))) < p_35.f3))) ^ p_33)));
    return l_50;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_21[i][j][k].f0, "g_21[i][j][k].f0", print_hash_value);
                transparent_crc(g_21[i][j][k].f3, "g_21[i][j][k].f3", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_42[i].f0, "g_42[i].f0", print_hash_value);
        transparent_crc(g_42[i].f1, "g_42[i].f1", print_hash_value);
        transparent_crc(g_42[i].f2, "g_42[i].f2", print_hash_value);
        transparent_crc(g_42[i].f3, "g_42[i].f3", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_170.f0, "g_170.f0", print_hash_value);
    transparent_crc(g_170.f3, "g_170.f3", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
