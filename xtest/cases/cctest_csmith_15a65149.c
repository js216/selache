// SPDX-License-Identifier: MIT
// cctest_csmith_15a65149.c --- cctest case csmith_15a65149 (csmith seed 363221321)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x74b72165 */
/* @exp_ticks 0x14c2c */

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

// Options:   -s 363221321 -o /tmp/csmith_gen_x4nowvib/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int16_t  f1;
};

union U1 {
   const int64_t  f0;
   uint16_t  f1;
   uint64_t  f2;
   int8_t * f3;
};


static int32_t g_2[4] = {1L,1L,1L,1L};
static const struct S0 g_15 = {7UL,0L};
static int8_t *g_18 = (void*)0;
static uint16_t g_24 = 0x9E88L;
static int32_t g_61 = 0x41AF53C8L;
static int64_t g_67 = 0x98C53483200138D7LL;
static int32_t *g_79 = &g_61;
static int32_t **g_78 = &g_79;
static int32_t **g_84 = &g_79;
static int16_t g_106 = 0x763FL;
static uint8_t g_112 = 1UL;
static int16_t g_113 = 0xBE97L;
static uint32_t g_121 = 0x6FF5FBB4L;
static union U1 g_126 = {-2L};
static int16_t g_141 = (-1L);
static int32_t g_142 = 0xCA04C897L;
static uint32_t g_143 = 18446744073709551615UL;
static uint32_t g_176[1] = {0x68E89C72L};
static int16_t g_196 = 0x7D1AL;
static uint64_t *g_262 = &g_126.f2;
static uint64_t **g_261 = &g_262;
static uint64_t g_316 = 0x4ABC4ACA091E0C85LL;
static uint64_t g_319 = 7UL;
static uint64_t g_320 = 0x36F4B36ECFF39B08LL;
static uint64_t g_321 = 0x6F64A7FD83CDD95ELL;
static uint64_t g_322 = 0x531CCCDEBB2567ECLL;
static uint64_t g_323 = 0xBD4EA40F44213E9DLL;
static uint64_t g_324[5] = {1UL,1UL,1UL,1UL,1UL};
static int8_t g_378 = 0xBCL;
static union U1 g_382 = {0xB0D9FE412EDE8C01LL};
static union U1 *g_381 = &g_382;
static uint32_t g_421[7] = {0xBCCEDB56L,0xBCCEDB56L,0xBCCEDB56L,0xBCCEDB56L,0xBCCEDB56L,0xBCCEDB56L,0xBCCEDB56L};
static int32_t ** const *g_425 = &g_78;
static int16_t * const *g_432 = (void*)0;
static int32_t g_460[7][3][6] = {{{0x6A21A2E9L,0x15CA595EL,0x782121E1L,0xDFBEF711L,0xC3139589L,0L},{1L,4L,0xDFBEF711L,0x15CA595EL,0x41FEFCFBL,0L},{0x2DB5A4F8L,0xA53D12F7L,0x782121E1L,(-10L),1L,0L}},{{0x41FEFCFBL,0xF55F58BEL,0x320F7385L,0x320F7385L,0xF55F58BEL,0x41FEFCFBL},{0L,1L,(-10L),0x782121E1L,0xA53D12F7L,0x15CA595EL},{0x320F7385L,1L,(-7L),1L,1L,0x3C5497D5L}},{{0x320F7385L,0x2DB5A4F8L,1L,0L,(-7L),(-10L)},{1L,0x41FEFCFBL,0xDFBEF711L,0xF55F58BEL,0xDFBEF711L,0x41FEFCFBL},{1L,0L,0xC3139589L,4L,0xB0DAA4B3L,1L}},{{0x15CA595EL,0L,0x802A8914L,(-7L),0x41FEFCFBL,0x782121E1L},{0x3C5497D5L,0L,0x6A21A2E9L,1L,0xB0DAA4B3L,0x876BF0F5L},{(-10L),0L,1L,0xDFBEF711L,0xDFBEF711L,1L}},{{0x41FEFCFBL,0x41FEFCFBL,1L,0xC3139589L,(-7L),0x6A4E0A7DL},{1L,0x2DB5A4F8L,0xE1F630A9L,0x802A8914L,1L,1L},{0x782121E1L,1L,0xE1F630A9L,0x6A21A2E9L,0x41FEFCFBL,0x6A4E0A7DL}},{{0x876BF0F5L,0x6A21A2E9L,1L,1L,0xA53D12F7L,1L},{1L,0xA53D12F7L,1L,1L,0x6A21A2E9L,0x876BF0F5L},{0x6A4E0A7DL,0x41FEFCFBL,0x6A21A2E9L,0xE1F630A9L,1L,0x782121E1L}},{{1L,1L,0x802A8914L,0xE1F630A9L,0x2DB5A4F8L,1L},{0x6A4E0A7DL,(-7L),0xC3139589L,1L,0x41FEFCFBL,0x41FEFCFBL},{1L,0xDFBEF711L,0xDFBEF711L,1L,0L,(-10L)}}};
static int64_t g_466 = 0xD1E3544E29CE6E52LL;
static uint32_t g_482 = 0x94FCAD40L;
static int64_t **g_493 = (void*)0;
static int64_t ***g_492 = &g_493;
static int16_t g_512 = 0xC7E0L;
static int32_t g_552[7][6] = {{9L,(-1L),0L,1L,0L,(-1L)},{0L,9L,0L,9L,0L,1L},{0x7ECB472EL,9L,(-1L),(-1L),9L,0x7ECB472EL},{(-1L),9L,0x7ECB472EL,0x74573FBBL,0L,0L},{0L,9L,0L,9L,0L,9L},{0L,(-1L),9L,0x74573FBBL,(-1L),(-1L)},{(-1L),0L,0L,(-1L),0L,(-1L)}};
static int32_t g_631 = 0x7DC0F35EL;
static uint32_t g_632 = 0x09344F34L;
static int8_t g_677 = 0L;
static struct S0 g_706 = {4294967295UL,0xF954L};
static struct S0 *g_705 = &g_706;
static int8_t **g_721 = &g_18;
static int8_t ***g_720 = &g_721;
static uint32_t *g_787 = &g_176[0];
static uint8_t *g_820 = &g_112;
static int16_t *g_853 = (void*)0;
static int16_t **g_852[7][7] = {{&g_853,&g_853,&g_853,&g_853,&g_853,&g_853,&g_853},{&g_853,&g_853,&g_853,&g_853,&g_853,&g_853,&g_853},{&g_853,&g_853,&g_853,&g_853,(void*)0,&g_853,(void*)0},{&g_853,&g_853,&g_853,&g_853,&g_853,&g_853,&g_853},{&g_853,(void*)0,&g_853,&g_853,(void*)0,&g_853,&g_853},{(void*)0,&g_853,&g_853,&g_853,&g_853,&g_853,&g_853},{(void*)0,&g_853,&g_853,(void*)0,&g_853,&g_853,(void*)0}};
static int16_t ***g_851 = &g_852[6][0];
static int16_t ****g_850 = &g_851;
static int32_t *g_906 = (void*)0;
static uint8_t **g_934 = &g_820;
static uint8_t **g_935[4][5] = {{&g_820,&g_820,(void*)0,&g_820,&g_820},{(void*)0,(void*)0,&g_820,&g_820,&g_820},{(void*)0,(void*)0,&g_820,&g_820,&g_820},{(void*)0,(void*)0,&g_820,&g_820,&g_820}};
static int32_t g_978 = 9L;
static int16_t g_1016 = 8L;
static int16_t g_1017 = (-8L);
static struct S0 g_1090 = {0xB8A5D98BL,-8L};
static struct S0 g_1093 = {9UL,0L};
static int64_t g_1202[3][7] = {{0L,0L,0xC0671817846F3054LL,0x8DA59FF8216AAA34LL,0xC0671817846F3054LL,0L,0L},{0x5D551EF8D84524F2LL,0x7386D07FA507EA1CLL,1L,0x7386D07FA507EA1CLL,0x5D551EF8D84524F2LL,0x5D551EF8D84524F2LL,0x7386D07FA507EA1CLL},{0L,9L,0L,0xC0671817846F3054LL,0xC0671817846F3054LL,0L,9L}};
static int64_t g_1295 = (-2L);
static union U1 **g_1337 = (void*)0;
static union U1 ***g_1336 = &g_1337;
static int16_t g_1368 = 0x401BL;
static int64_t ****g_1400 = &g_492;
static int64_t *****g_1399 = &g_1400;
static int8_t ***g_1466 = &g_721;
static uint8_t g_1482[6][5][3] = {{{0xAEL,0xAEL,5UL},{0x2DL,255UL,1UL},{255UL,253UL,0xAEL},{1UL,0UL,1UL},{0xB8L,255UL,0xAEL}},{{0x39L,1UL,1UL},{0x81L,0x34L,5UL},{0UL,0x8EL,0UL},{0x1FL,4UL,254UL},{0UL,1UL,0xDBL}},{{249UL,4UL,0x65L},{0UL,0x8EL,0UL},{4UL,0x34L,255UL},{255UL,1UL,251UL},{0x65L,255UL,255UL}},{{0x75L,0UL,0xB6L},{0x65L,253UL,0xB8L},{255UL,255UL,0x8EL},{4UL,0xAEL,0UL},{0UL,3UL,255UL}},{{249UL,249UL,0x09L},{0UL,0UL,255UL},{0x1FL,0UL,0UL},{0UL,0x75L,0x8EL},{0x81L,5UL,0xB8L}},{{0x39L,0x2DL,0xB6L},{0xB8L,249UL,255UL},{1UL,0x2DL,251UL},{255UL,5UL,255UL},{0x2DL,0x75L,0UL}}};
static uint8_t ***g_1492[1] = {&g_934};
static uint8_t ****g_1491 = &g_1492[0];
static uint8_t *****g_1490[2] = {&g_1491,&g_1491};
static uint64_t g_1528[7][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static uint16_t g_1530 = 9UL;
static int8_t g_1547[1] = {0L};
static union U1 g_1573[6] = {{0x1E8DB9B84021CA63LL},{6L},{6L},{0x1E8DB9B84021CA63LL},{6L},{6L}};
static union U1 *g_1572 = &g_1573[1];
static uint8_t **g_1594 = (void*)0;
static uint8_t *** const g_1593 = &g_1594;
static uint8_t *** const *g_1592[4] = {&g_1593,&g_1593,&g_1593,&g_1593};
static uint8_t *** const **g_1591[2] = {&g_1592[2],&g_1592[2]};
static const int64_t g_1618 = 0x7CFA448A2815DF0ALL;
static int16_t g_1630 = 0x95EFL;
static uint64_t ***g_1647 = (void*)0;
static uint64_t **g_1667 = (void*)0;
static uint64_t ***g_1666 = &g_1667;
static struct S0 **g_1679 = &g_705;
static struct S0 ***g_1678 = &g_1679;
static uint32_t g_1774[4][5] = {{0xF8D3C2BDL,0xDED7E651L,0xDED7E651L,0xF8D3C2BDL,0xDED7E651L},{0xF8D3C2BDL,0xF8D3C2BDL,0x715CEA4DL,0xF8D3C2BDL,0xF8D3C2BDL},{0xDED7E651L,0xF8D3C2BDL,0xDED7E651L,0xDED7E651L,0xF8D3C2BDL},{0xF8D3C2BDL,0xDED7E651L,0xDED7E651L,0xF8D3C2BDL,0xDED7E651L}};
static uint64_t g_1844[7][1][6] = {{{0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL}},{{0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL}},{{0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL}},{{0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL}},{{0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL}},{{0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL}},{{0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL,0x2EA159178CC57EC1LL}}};
static uint64_t g_1845[5][7][6] = {{{0x34B0D15849F586B0LL,0x34B0D15849F586B0LL,9UL,18446744073709551615UL,0x6CF29F837DBC734BLL,18446744073709551615UL},{0x2F3042B5A54D9C05LL,0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL},{1UL,0x2F3042B5A54D9C05LL,0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL},{18446744073709551615UL,1UL,9UL,1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL},{1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL,0x4A2DF928D59E4A63LL,18446744073709551615UL,1UL},{0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL,0x34B0D15849F586B0LL,1UL},{0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL,0x4A2DF928D59E4A63LL}},{{0x34B0D15849F586B0LL,0x34B0D15849F586B0LL,9UL,18446744073709551615UL,0x6CF29F837DBC734BLL,18446744073709551615UL},{0x2F3042B5A54D9C05LL,0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL},{1UL,0x2F3042B5A54D9C05LL,0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL},{18446744073709551615UL,1UL,9UL,1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL},{1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL,0x4A2DF928D59E4A63LL,18446744073709551615UL,1UL},{0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL,0x34B0D15849F586B0LL,1UL},{0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL,0x4A2DF928D59E4A63LL}},{{0x34B0D15849F586B0LL,0x34B0D15849F586B0LL,9UL,18446744073709551615UL,0x6CF29F837DBC734BLL,18446744073709551615UL},{0x2F3042B5A54D9C05LL,0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL},{1UL,0x2F3042B5A54D9C05LL,0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL},{18446744073709551615UL,1UL,9UL,1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL},{1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL,0x4A2DF928D59E4A63LL,18446744073709551615UL,1UL},{0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL,0x34B0D15849F586B0LL,1UL},{0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL,0x4A2DF928D59E4A63LL}},{{0x34B0D15849F586B0LL,0x34B0D15849F586B0LL,9UL,18446744073709551615UL,0x6CF29F837DBC734BLL,18446744073709551615UL},{0x2F3042B5A54D9C05LL,0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL},{1UL,0x2F3042B5A54D9C05LL,0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL},{18446744073709551615UL,1UL,9UL,1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL},{1UL,18446744073709551615UL,0x4A2DF928D59E4A63LL,0x4A2DF928D59E4A63LL,18446744073709551615UL,1UL},{0x2F3042B5A54D9C05LL,1UL,0x34B0D15849F586B0LL,18446744073709551615UL,0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL},{0x6CF29F837DBC734BLL,18446744073709551615UL,9UL,0x34B0D15849F586B0LL,0x34B0D15849F586B0LL,9UL}},{{0x6CF29F837DBC734BLL,0x6CF29F837DBC734BLL,0x34B0D15849F586B0LL,0x4A2DF928D59E4A63LL,1UL,0x4A2DF928D59E4A63LL},{18446744073709551615UL,0x6CF29F837DBC734BLL,18446744073709551615UL,9UL,0x34B0D15849F586B0LL,0x34B0D15849F586B0LL},{0x2F3042B5A54D9C05LL,18446744073709551615UL,18446744073709551615UL,0x2F3042B5A54D9C05LL,0x6CF29F837DBC734BLL,0x4A2DF928D59E4A63LL},{0x4A2DF928D59E4A63LL,0x2F3042B5A54D9C05LL,0x34B0D15849F586B0LL,0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL},{0x2F3042B5A54D9C05LL,0x4A2DF928D59E4A63LL,9UL,9UL,0x4A2DF928D59E4A63LL,0x2F3042B5A54D9C05LL},{18446744073709551615UL,0x2F3042B5A54D9C05LL,0x6CF29F837DBC734BLL,0x4A2DF928D59E4A63LL,0x6CF29F837DBC734BLL,0x2F3042B5A54D9C05LL},{0x6CF29F837DBC734BLL,18446744073709551615UL,9UL,0x34B0D15849F586B0LL,0x34B0D15849F586B0LL,9UL}}};
static int32_t g_1947 = 2L;
static union U1 g_1980[6] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
static uint16_t g_2027 = 0xC66FL;
static uint64_t ****g_2147 = &g_1647;
static uint64_t *****g_2146[2][2][4] = {{{&g_2147,&g_2147,&g_2147,&g_2147},{&g_2147,&g_2147,&g_2147,&g_2147}},{{&g_2147,&g_2147,&g_2147,&g_2147},{&g_2147,&g_2147,&g_2147,&g_2147}}};
static uint64_t *****g_2154 = &g_2147;
static union U1 g_2323 = {-1L};
static const int32_t g_2356 = (-2L);
static const int32_t *g_2357 = &g_552[6][5];
static uint64_t g_2380 = 0x87139D684D458F62LL;
static const int64_t **g_2406 = (void*)0;
static const int64_t ***g_2405[1][2][6] = {{{(void*)0,&g_2406,&g_2406,(void*)0,&g_2406,&g_2406},{(void*)0,&g_2406,&g_2406,(void*)0,&g_2406,&g_2406}}};
static uint32_t *g_2460 = &g_421[1];
static int32_t g_2593[7][7][5] = {{{0x99BA1C6BL,0xDD789A14L,0x9A37C5FCL,0x9A37C5FCL,0xDD789A14L},{0x25FBEC3DL,0x39B57DC0L,(-3L),0xD3F6DF83L,0xF81CF008L},{1L,0x71D2F544L,1L,0xF85132B2L,0x9A37C5FCL},{0x07E8C983L,0x15E152BCL,0xF303163EL,0x9423B536L,0xE9892584L},{1L,1L,0x62E44AEDL,0xE50C1703L,6L},{0x25FBEC3DL,0L,0x08E5F2ECL,0x7A7460DBL,0xD3F6DF83L},{0x99BA1C6BL,0L,0xDD789A14L,0L,0x99BA1C6BL}},{{(-1L),9L,0x7A7460DBL,0xFAE29504L,0L},{0L,0xA5A1103EL,3L,0x1EFC5A2EL,(-1L)},{8L,0xE9892584L,0xF666100AL,9L,0L},{0L,0x1EFC5A2EL,(-4L),0L,0x99BA1C6BL},{0L,0x9423B536L,0xD8F54898L,7L,0xD3F6DF83L},{1L,0L,0L,1L,6L},{0x7A7460DBL,(-1L),0x15E152BCL,0L,0xE9892584L}},{{(-1L),1L,0L,(-7L),0x9A37C5FCL},{7L,8L,0xD3F6DF83L,0L,0xF81CF008L},{0L,(-3L),(-1L),1L,0xDD789A14L},{0x339C5A72L,0xF81CF008L,0x5A5CD8A6L,7L,7L},{1L,(-1L),1L,0L,0xF85132B2L},{0x9423B536L,0x339C5A72L,1L,9L,0xFAE29504L},{0x0A447E96L,0x99BA1C6BL,0xF85132B2L,0x1EFC5A2EL,0x025F25FBL}},{{0x8B4914C5L,0x5A5CD8A6L,1L,0xD3F6DF83L,0x25FBEC3DL},{3L,1L,0x1EFC5A2EL,0x2275CF91L,(-4L)},{0x5A5CD8A6L,9L,(-3L),0xF303163EL,(-3L)},{0x7E5432FFL,0x7E5432FFL,0x99BA1C6BL,0xA5A1103EL,0x025F25FBL},{0x9423B536L,8L,0x39B57DC0L,7L,0L},{0xDD789A14L,0L,0x2275CF91L,1L,0xD6D30267L},{0x07E8C983L,8L,0x7A7460DBL,0x39B57DC0L,0x339C5A72L}},{{0L,0x7E5432FFL,0x0A447E96L,0x320FFD4DL,0xE50C1703L},{0x7A7460DBL,9L,(-1L),(-1L),9L},{(-1L),1L,0L,0xF85132B2L,0x2275CF91L},{0x8B4914C5L,(-3L),0x5A5CD8A6L,0x339C5A72L,(-1L)},{0x025F25FBL,0x62E44AEDL,6L,0x0A447E96L,(-1L)},{0x8B4914C5L,(-1L),0xF303163EL,8L,0xF81CF008L},{(-1L),0x9A37C5FCL,(-3L),3L,0xF85132B2L}},{{0x7A7460DBL,0x07E8C983L,9L,0x07E8C983L,0x7A7460DBL},{0L,(-7L),3L,0xD6D30267L,0x7E5432FFL},{0x07E8C983L,0x08E5F2ECL,0x87023658L,0xE9892584L,0x15E152BCL},{0xDD789A14L,(-1L),0x71D2F544L,(-7L),0x7E5432FFL},{0x9423B536L,0xE9892584L,0L,0xFAE29504L,0x7A7460DBL},{0x7E5432FFL,0x0A447E96L,0x320FFD4DL,0xE50C1703L,0xF85132B2L},{0x5A5CD8A6L,7L,7L,0x5A5CD8A6L,0xF81CF008L}},{{3L,1L,0x62E44AEDL,0L,(-1L)},{0x15E152BCL,0x8B4914C5L,0x07E8C983L,0xF666100AL,(-1L)},{0xE50C1703L,0xDD789A14L,0xF85132B2L,0L,0x2275CF91L},{7L,1L,0x15E152BCL,0x5A5CD8A6L,9L},{0x1EFC5A2EL,0x2275CF91L,(-4L),0xE50C1703L,0xE50C1703L},{(-1L),0xD8F54898L,(-1L),0xFAE29504L,0x339C5A72L},{0x0A447E96L,0x1EFC5A2EL,1L,(-7L),0xD6D30267L}}};
static int32_t g_2594 = 0x8E56C3C0L;
static int32_t *g_2600 = &g_142;
static uint32_t **g_2628 = &g_787;
static uint32_t ***g_2627 = &g_2628;
static uint64_t g_2646 = 18446744073709551608UL;
static int8_t ****g_2792 = &g_1466;
static int8_t *****g_2791 = &g_2792;
static uint16_t g_2870 = 0x8C71L;
static int32_t g_2994 = 0x9706AC54L;
static uint32_t g_3009 = 5UL;
static uint16_t *g_3044 = &g_2027;
static uint8_t g_3055 = 0UL;
static uint32_t **g_3065[5][5] = {{&g_2460,&g_2460,&g_2460,&g_2460,&g_2460},{&g_2460,&g_2460,&g_2460,&g_2460,&g_2460},{&g_2460,&g_2460,&g_2460,&g_2460,&g_2460},{&g_2460,&g_2460,&g_2460,&g_2460,&g_2460},{&g_2460,&g_2460,&g_2460,&g_2460,&g_2460}};
static uint32_t ***g_3064[3][3][5] = {{{(void*)0,&g_3065[1][1],&g_3065[1][1],(void*)0,&g_3065[1][1]},{&g_3065[1][1],(void*)0,&g_3065[1][1],&g_3065[1][2],&g_3065[1][2]},{&g_3065[1][1],(void*)0,&g_3065[1][1],&g_3065[1][1],(void*)0}},{{&g_3065[1][2],&g_3065[1][1],&g_3065[1][1],&g_3065[1][2],&g_3065[1][1]},{&g_3065[1][2],&g_3065[1][2],&g_3065[1][1],(void*)0,&g_3065[1][1]},{&g_3065[1][1],&g_3065[1][1],&g_3065[1][1],&g_3065[1][1],&g_3065[1][1]}},{{&g_3065[1][1],&g_3065[1][1],&g_3065[0][4],&g_3065[1][1],&g_3065[1][1]},{&g_3065[1][1],&g_3065[1][1],&g_3065[1][2],&g_3065[1][1],&g_3065[1][1]},{&g_3065[0][4],&g_3065[1][1],&g_3065[1][1],&g_3065[1][1],&g_3065[1][1]}}};



static int32_t  func_1(void);
static int32_t * func_5(int8_t * p_6, int8_t * p_7, int64_t  p_8, int8_t * p_9);
static struct S0  func_10(const struct S0  p_11, union U1  p_12, int32_t  p_13, int8_t * p_14);
static union U1  func_16(int8_t * p_17);
static struct S0  func_30(int8_t * p_31, struct S0  p_32);
static int8_t * func_33(uint64_t  p_34, struct S0  p_35, int16_t  p_36, int16_t  p_37, int32_t * p_38);
static int8_t * func_41(int8_t * p_42);
static int8_t * func_43(struct S0  p_44, uint8_t  p_45, uint64_t  p_46, int64_t  p_47, int8_t * p_48);




static int32_t  func_1(void)
{ 
    uint64_t l_1658 = 0UL;
    int8_t *l_2283 = &g_1547[0];
    uint8_t * const *l_2862 = (void*)0;
    uint8_t * const **l_2861 = &l_2862;
    uint8_t * const ***l_2860 = &l_2861;
    uint8_t * const ****l_2863 = &l_2860;
    int32_t l_2864 = 6L;
    int32_t *l_2865 = &g_2593[6][6][2];
    int32_t *l_2866[2][2][1];
    int64_t l_2867 = 0xD454D50FDBE62731LL;
    int32_t l_2868 = 0x4C9119DBL;
    int16_t l_2869 = 0L;
    int64_t *l_2896 = &g_67;
    int64_t **l_2895 = &l_2896;
    int32_t l_2926 = 0L;
    union U1 l_2933 = {0L};
    int8_t *l_2990[7] = {&g_1547[0],(void*)0,(void*)0,&g_1547[0],(void*)0,(void*)0,&g_1547[0]};
    int16_t l_3033[5][6][3] = {{{0x8900L,(-1L),0x2ECBL},{0xAD9DL,(-1L),0xAA09L},{0x5426L,0x9C91L,0x5426L},{(-1L),0xAA09L,0x792EL},{0x8900L,0x9C91L,0L},{(-8L),(-1L),0xFAC2L}},{{0x8C9EL,(-1L),0x5426L},{(-8L),0xE6ECL,0xE6ECL},{0x8900L,0xBBB8L,0x2ECBL},{(-1L),(-1L),0xE6ECL},{0x5426L,1L,0x5426L},{0xAD9DL,0xAA09L,0xFAC2L}},{{0x8900L,1L,0L},{(-1L),(-1L),0x792EL},{0x8C9EL,0xBBB8L,0x5426L},{(-1L),0xE6ECL,0xAA09L},{0x8900L,(-1L),0x2ECBL},{0xAD9DL,(-1L),0xAA09L}},{{0x5426L,0x9C91L,0x5426L},{(-1L),0xAA09L,0x792EL},{0x8900L,0x9C91L,0L},{(-8L),(-1L),0xFAC2L},{0x8C9EL,(-1L),0x5426L},{(-8L),0xE6ECL,0xE6ECL}},{{0x8900L,0xBBB8L,0x2ECBL},{(-1L),(-1L),0xE6ECL},{0x5426L,1L,0x5426L},{0xAD9DL,0xAA09L,0xFAC2L},{0x8900L,1L,0L},{(-1L),(-1L),0x792EL}}};
    uint16_t l_3047 = 0xCD2DL;
    struct S0 l_3054 = {0UL,0x886BL};
    union U1 ***l_3058 = (void*)0;
    uint16_t l_3094 = 0xABA8L;
    int64_t l_3098 = 1L;
    int32_t *l_3106 = &g_1947;
    int32_t l_3111 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_2866[i][j][k] = (void*)0;
        }
    }
    for (g_2[2] = (-2); (g_2[2] == 25); g_2[2] = safe_add_func_int32_t_s_s(g_2[2], 1))
    { 
        uint32_t l_1665 = 0UL;
        int8_t *l_1668[6] = {&g_1547[0],&g_1547[0],&g_1547[0],&g_1547[0],&g_1547[0],&g_1547[0]};
        int32_t **l_2859 = &g_906;
        int i;
    }
    (*l_2863) = l_2860;
    --g_2870;
    if ((**g_78))
    { 
        int16_t l_2875 = 4L;
        uint8_t l_2883 = 246UL;
        int16_t l_2884 = 0xDBFFL;
        uint64_t ***l_2888 = (void*)0;
        int32_t l_2894 = 1L;
        int32_t **l_2916 = &l_2866[0][0][0];
        const struct S0 l_2929 = {6UL,1L};
        union U1 l_2930 = {0x90A957AEBB22658CLL};
        uint64_t **l_2945 = &g_262;
        uint16_t l_2957 = 0x4097L;
        int8_t *l_2964 = (void*)0;
        struct S0 l_2989 = {4294967295UL,-8L};
        for (g_67 = 0; (g_67 != (-27)); g_67 = safe_sub_func_uint32_t_u_u(g_67, 1))
        { 
            int16_t ****l_2880 = (void*)0;
            int16_t ***l_2882[3];
            int16_t ****l_2881 = &l_2882[2];
            uint64_t ***l_2889 = (void*)0;
            int32_t l_2892 = 0L;
            const uint32_t l_2893 = 0xFDB575F8L;
            uint32_t l_2955 = 0x2113B5DDL;
            int8_t *l_2987[2];
            struct S0 l_2988 = {5UL,0xF77CL};
            int i;
            for (i = 0; i < 3; i++)
                l_2882[i] = &g_852[6][0];
            for (i = 0; i < 2; i++)
                l_2987[i] = (void*)0;
            if (l_2875)
                break;
        }
        (**g_425) = (*l_2916);
        (*l_2865) |= (safe_add_func_uint8_t_u_u(((*g_2600) && ((**g_2628)++)), 0xC0L));
        if ((*g_2600))
        { 
            int16_t l_3005 = 1L;
            int32_t l_3006 = 7L;
            int32_t l_3007[3];
            int8_t *l_3037 = (void*)0;
            const uint16_t *l_3041 = &l_2957;
            struct S0 *l_3046 = &l_2989;
            int i;
            for (i = 0; i < 3; i++)
                l_3007[i] = (-1L);
            for (g_322 = 16; (g_322 < 47); g_322 = safe_add_func_int8_t_s_s(g_322, 7))
            { 
                int16_t l_3008[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_3008[i] = 0xA49FL;
                for (g_631 = 2; (g_631 >= 0); g_631 -= 1)
                { 
                    uint32_t l_3002 = 4294967295UL;
                    int i, j;
                    (*g_2600) |= 0x0C78FF62L;
                    l_3002--;
                    if (g_1774[(g_631 + 1)][(g_631 + 2)])
                        break;
                    if (g_1774[g_631][g_631])
                        continue;
                    g_3009--;
                }
                (*g_78) = (*g_84);
            }
            for (l_2884 = 29; (l_2884 != (-26)); l_2884--)
            { 
                int32_t l_3026[6][6][4] = {{{3L,0x56E4034AL,1L,0x7DAEA45FL},{0x1A82B80DL,0xF8F51410L,(-10L),0x8CFDFC07L},{0x8800776CL,0L,0xD614BCECL,0x56E4034AL},{7L,8L,0L,7L},{(-7L),0L,1L,(-1L)},{0xAAAC9B91L,(-9L),0L,0L}},{{1L,(-9L),7L,7L},{0xE4978249L,0x68F1843DL,(-6L),3L},{0L,(-1L),0xF46CDBC7L,7L},{0x6F2FE302L,(-10L),0xE4978249L,1L},{1L,(-1L),(-1L),0xBA73956DL},{0x9591D884L,(-1L),1L,1L}},{{1L,0x9591D884L,0xF8F51410L,0x9591D884L},{0xC0F2DA34L,0x8800776CL,1L,(-1L)},{0L,0x907E3ECFL,(-1L),0L},{0xE29E3785L,0xAAAC9B91L,(-1L),0L},{0xE29E3785L,0x9CB4C953L,(-1L),(-9L)},{0L,0L,1L,(-9L)}},{{7L,(-1L),7L,0xE29E3785L},{0L,0x8CFDFC07L,0x7DAEA45FL,0x56E4034AL},{0xAE1B706EL,0x1A82B80DL,0L,(-1L)},{0L,(-4L),(-1L),(-1L)},{(-10L),0x83E9CD34L,(-1L),0x6F2FE302L},{(-6L),0L,0x9CB4C953L,0L}},{{(-1L),0x3B6CC05DL,(-1L),0xCFACE99DL},{0xE29E3785L,0x8800776CL,0L,(-1L)},{0x9591D884L,0xBA73956DL,0xE29E3785L,(-1L)},{0x6F2FE302L,0L,1L,3L},{1L,(-10L),0x8800776CL,(-10L)},{0xE5D69128L,0xCFACE99DL,0xCFACE99DL,0xE5D69128L}},{{(-4L),0xE36922ADL,(-1L),0x220647E4L},{0xA8E8AB42L,0xE29E3785L,0L,(-10L)},{0x8800776CL,1L,0x8CFDFC07L,(-10L)},{(-10L),0xE29E3785L,0L,0x220647E4L},{0L,0xE36922ADL,3L,0xE5D69128L},{7L,0xCFACE99DL,0x907E3ECFL,(-10L)}}};
                int32_t l_3032 = 0xCF6CF30FL;
                uint8_t l_3035 = 4UL;
                int64_t l_3036 = 3L;
                uint16_t *l_3042 = &g_1530;
                int i, j, k;
                for (g_112 = 0; (g_112 >= 51); g_112 = safe_add_func_int16_t_s_s(g_112, 2))
                { 
                    uint32_t *l_3020 = (void*)0;
                    uint32_t *l_3021 = (void*)0;
                    uint32_t *l_3022 = (void*)0;
                    uint32_t *l_3023[2][4][7] = {{{&g_1090.f0,&g_632,&g_1090.f0,&l_2989.f0,&g_706.f0,&l_2989.f0,&g_1090.f0},{&g_1093.f0,&g_1093.f0,(void*)0,&g_1090.f0,&g_1093.f0,&g_632,&g_1090.f0},{(void*)0,&l_2989.f0,&g_1093.f0,&g_632,&g_1093.f0,&l_2989.f0,(void*)0},{&g_632,&g_1090.f0,&g_121,&g_632,&g_1093.f0,&g_121,&g_121}},{{&g_706.f0,&g_632,&g_121,&g_632,&g_706.f0,&g_482,&g_706.f0},{&g_1093.f0,&g_632,&g_121,&g_1090.f0,&g_632,&g_632,&g_1090.f0},{&g_1093.f0,&g_632,&g_1093.f0,&l_2989.f0,(void*)0,&l_2989.f0,&g_1093.f0},{&g_1093.f0,&g_1090.f0,(void*)0,&g_1093.f0,&g_1093.f0,(void*)0,&g_1090.f0}}};
                    const int32_t l_3024 = 0xE32C7856L;
                    int32_t l_3025 = 4L;
                    int32_t l_3031 = 0x9F061F68L;
                    uint8_t *l_3034 = &g_1482[1][4][1];
                    int i, j, k;
                    (*l_2865) |= (safe_lshift_func_uint8_t_u_u((((l_3006 ^= (g_1093.f0 = (g_121 = ((***g_2627)--)))) > (((*l_2896) = ((l_3007[2] || (((*l_2283) = l_2894) > (l_3024 ^ (l_3026[0][1][0] = (l_3025 ^= l_3005))))) < ((*l_3034) = (((--(**g_261)) > l_3005) == (safe_mul_func_int8_t_s_s((l_3031 && (0xA978474BE5D6FCB3LL < l_3032)), l_3033[2][1][0])))))) | l_3035)) <= l_3036), (*g_820)));
                    if ((*g_2600))
                        break;
                }
                for (g_3009 = 0; (g_3009 <= 0); g_3009 += 1)
                { 
                    const int32_t l_3040 = 0x37E12D93L;
                    uint16_t **l_3043[2][2][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int8_t *l_3045 = &g_1547[0];
                    int i, j, k;
                    (*g_84) = ((*l_2916) = (*g_84));
                    if ((*g_2357))
                        break;
                }
                (*g_1679) = l_3046;
            }
            (*g_2600) = (l_3007[2] < ((0x063E9A0376A6025ELL ^ l_3047) && ((((((*g_3044) = l_3006) , (void*)0) != &l_2866[0][1][0]) <= l_3006) , (*l_2865))));
            return g_320;
        }
        else
        { 
            int32_t l_3049 = 0x272E95F9L;
            uint32_t ****l_3053 = &g_2627;
            (*g_1679) = (*g_1679);
            (*g_78) = (**g_425);
            for (g_2594 = 0; g_2594 < 2; g_2594 += 1)
            {
                g_1591[g_2594] = &g_1592[2];
            }
            (*g_2600) |= l_3049;
        }
        (*l_2865) |= l_2989.f1;
    }
    else
    { 
        uint16_t l_3061 = 5UL;
        int32_t l_3070 = 0xCE15AECBL;
        struct S0 l_3078 = {0x30D6FE8BL,-5L};
        const uint64_t * const *l_3086 = (void*)0;
        const uint64_t * const **l_3085 = &l_3086;
        const uint64_t * const ***l_3084 = &l_3085;
        const uint64_t * const ****l_3083 = &l_3084;
        uint8_t l_3095 = 5UL;
        for (g_1295 = (-9); (g_1295 >= 11); g_1295++)
        { 
            int32_t ** const **l_3062 = &g_425;
            (*g_84) = (*g_78);
            (**g_78) = ((*l_2865) = ((4294967292UL < (&g_1337 == ((&g_2594 != l_2865) , l_3058))) ^ (safe_div_func_int32_t_s_s(((l_3061 , (((&g_425 == l_3062) ^ (***g_2627)) == l_3061)) | l_3061), 0xF6A99E12L))));
            if (l_3047)
                goto lbl_3063;
        }
lbl_3063:
        for (l_2864 = 0; l_2864 < 3; l_2864 += 1)
        {
            for (g_2594 = 0; g_2594 < 7; g_2594 += 1)
            {
                g_1202[l_2864][g_2594] = 1L;
            }
        }
        (*g_2600) |= ((void*)0 == g_3064[2][1][1]);
        if ((1L ^ (*g_3044)))
        { 
            const uint32_t l_3074 = 18446744073709551615UL;
            int32_t l_3096 = 0xF694FCC7L;
            int8_t *l_3097 = &g_1547[0];
            int32_t *l_3099 = &l_3096;
            if ((*g_2357))
            { 
                (*g_84) = (*g_84);
            }
            else
            { 
                int32_t l_3068 = 0x7481F28DL;
                int32_t l_3069 = 0x6C3320A4L;
                for (l_2869 = 0; (l_2869 != (-12)); l_2869 = safe_sub_func_int64_t_s_s(l_2869, 1))
                { 
                    uint16_t l_3071[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_3071[i] = 0xD8DAL;
                    l_3071[5]++;
                }
                for (l_3068 = 3; (l_3068 >= 0); l_3068 -= 1)
                { 
                    int32_t l_3077 = 0xA638B57FL;
                    (*l_2863) = (void*)0;
                    if ((*g_79))
                        continue;
                    (*g_79) = ((18446744073709551607UL >= (((void*)0 == (*g_78)) < ((2UL & l_3074) && ((((safe_mul_func_uint16_t_u_u(l_3068, l_3070)) | l_3077) , 0x330D0BD7L) < (***g_425))))) == 0UL);
                }
                return l_3074;
            }
            l_3099 = func_5(func_43(l_3078, (((*g_787) , (((**g_934) &= ((((l_3096 |= ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((&g_2147 == l_3083), 15)) || (safe_mul_func_int16_t_s_s(l_3078.f1, ((!(safe_unary_minus_func_uint64_t_u((safe_add_func_uint16_t_u_u((((((((l_3074 <= (safe_unary_minus_func_uint16_t_u(((((l_3074 , l_3094) <= l_3095) , (**g_2628)) <= 0x4AF2BCF6L)))) | (**g_78)) & (***g_2627)) & 18446744073709551608UL) , l_3074) <= (*g_3044)) || (*g_3044)), 65535UL))))) , (*g_3044))))), l_3095)) > 0xBFB9321440EB048FLL)) ^ 0L) == (*g_3044)) != l_3061)) | 2UL)) == (*g_787)), l_3070, (*l_2865), l_2990[6]), l_3097, l_3098, l_3097);
        }
        else
        { 
            int32_t *l_3102[2][7] = {{&g_2[3],&g_552[6][0],&g_2[3],&g_552[6][0],&g_2[3],&g_552[6][0],&g_2[3]},{&g_142,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142}};
            int i, j;
            for (g_978 = 0; (g_978 > (-13)); --g_978)
            { 
                uint64_t l_3103 = 8UL;
                (*g_84) = l_3102[0][6];
                return l_3103;
            }
        }
    }
    (**g_1678) = (((safe_mod_func_int16_t_s_s(0xA046L, (((*l_3106) = g_1093.f0) , 0x0426L))) ^ (((*g_3044) = (safe_rshift_func_int8_t_s_s((((*g_3044) <= (((*l_2865) == ((*g_3044) == (safe_rshift_func_int16_t_s_s(l_3111, 0)))) != 0UL)) >= (*g_2600)), (*l_2865)))) >= 0x2946L)) , (*g_1679));
    return g_1295;
}



static int32_t * func_5(int8_t * p_6, int8_t * p_7, int64_t  p_8, int8_t * p_9)
{ 
    int64_t l_2290 = (-7L);
    int32_t l_2291 = 0x2A635BD1L;
    uint16_t *l_2298 = (void*)0;
    uint16_t *l_2299 = &g_126.f1;
    uint8_t ****l_2309 = (void*)0;
    uint32_t l_2333[3];
    uint8_t l_2341 = 5UL;
    const struct S0 l_2348 = {4294967295UL,7L};
    union U1 l_2350 = {4L};
    const int32_t *l_2355 = &g_2356;
    int32_t l_2364 = (-10L);
    int32_t l_2369 = 0xC9E5138AL;
    int32_t l_2371 = 0x90B88974L;
    int32_t l_2375 = 3L;
    int32_t l_2377 = 0xCB929261L;
    int32_t l_2378 = 0xCC336A52L;
    int32_t l_2379 = (-1L);
    struct S0 l_2383 = {0xF3D33EBAL,0xD48CL};
    int16_t l_2397 = 0xF3E7L;
    uint16_t l_2409 = 0UL;
    uint8_t l_2456[4][5] = {{255UL,0UL,248UL,248UL,0UL},{1UL,247UL,248UL,6UL,6UL},{247UL,1UL,247UL,248UL,6UL},{0UL,255UL,6UL,255UL,0UL}};
    uint32_t *l_2457 = &g_421[3];
    uint32_t *l_2459[3];
    const int16_t * const **l_2466 = (void*)0;
    const int16_t * const ***l_2465[2][2] = {{&l_2466,&l_2466},{&l_2466,&l_2466}};
    const int16_t * const ****l_2464[3][1][7] = {{{&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0]}},{{&l_2465[0][1],&l_2465[0][1],&l_2465[0][1],&l_2465[0][1],&l_2465[0][1],&l_2465[0][1],&l_2465[0][1]}},{{&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0],&l_2465[1][0]}}};
    struct S0 l_2479 = {0xF8BFF30CL,3L};
    uint64_t l_2532[2];
    int32_t *l_2547 = &l_2371;
    int32_t l_2595 = 0x896B48BCL;
    uint8_t l_2624 = 0xA5L;
    uint64_t * const *l_2649 = &g_262;
    int32_t l_2681[6][6] = {{0x47020AB7L,0x5A414D3CL,0L,(-3L),7L,7L},{0x5A414D3CL,0xDA6C4909L,0xDA6C4909L,0x5A414D3CL,0x50E4DF2FL,7L},{0x220BD113L,7L,0L,0x915148D1L,(-3L),0x915148D1L},{0x50E4DF2FL,6L,0x50E4DF2FL,0L,(-3L),0x47020AB7L},{0L,7L,0x220BD113L,0x50E4DF2FL,0x50E4DF2FL,0x220BD113L},{0xDA6C4909L,0xDA6C4909L,0x5A414D3CL,0x50E4DF2FL,7L,0L}};
    int8_t *l_2703[4][5][7] = {{{&g_378,&g_378,&g_1547[0],&g_677,&g_1547[0],&g_378,&g_378},{(void*)0,&g_378,&g_378,(void*)0,&g_677,&g_1547[0],&g_677},{&g_378,&g_1547[0],&g_1547[0],&g_378,&g_1547[0],&g_378,&g_677},{&g_677,&g_1547[0],&g_378,&g_1547[0],&g_677,&g_1547[0],(void*)0},{&g_1547[0],&g_378,&g_1547[0],&g_1547[0],&g_1547[0],&g_677,&g_677}},{{(void*)0,&g_677,&g_677,&g_677,(void*)0,&g_378,&g_677},{(void*)0,&g_378,&g_378,&g_1547[0],&g_1547[0],&g_1547[0],&g_378},{&g_677,&g_1547[0],(void*)0,&g_1547[0],(void*)0,(void*)0,&g_378},{(void*)0,&g_1547[0],&g_378,&g_378,&g_1547[0],(void*)0,&g_1547[0]},{(void*)0,&g_677,&g_677,(void*)0,(void*)0,&g_1547[0],(void*)0}},{{&g_1547[0],&g_378,&g_1547[0],&g_677,&g_1547[0],&g_1547[0],(void*)0},{&g_677,&g_677,(void*)0,(void*)0,(void*)0,&g_677,&g_677},{&g_378,&g_1547[0],(void*)0,&g_1547[0],&g_1547[0],&g_1547[0],&g_1547[0]},{(void*)0,&g_1547[0],&g_677,&g_677,&g_677,&g_1547[0],&g_378},{&g_378,&g_378,(void*)0,&g_1547[0],&g_1547[0],(void*)0,&g_378}},{{&g_677,&g_677,(void*)0,&g_378,&g_677,(void*)0,&g_378},{&g_1547[0],&g_378,&g_1547[0],&g_378,&g_1547[0],&g_1547[0],&g_1547[0]},{&g_378,&g_1547[0],&g_677,&g_378,(void*)0,&g_378,&g_677},{&g_1547[0],&g_1547[0],&g_378,&g_1547[0],&g_378,&g_677,(void*)0},{&g_378,&g_378,(void*)0,&g_677,&g_1547[0],&g_1547[0],(void*)0}}};
    int16_t l_2710 = 0xD8BBL;
    int32_t l_2719 = 0xA5B91736L;
    int32_t l_2720 = 0x21924A6BL;
    int32_t l_2721 = 0x0575A60FL;
    int32_t l_2722[1];
    int32_t l_2723 = 0x13924546L;
    uint16_t l_2822[4] = {0x13CBL,0x13CBL,0x13CBL,0x13CBL};
    int32_t *l_2826 = &l_2379;
    uint32_t l_2833[7][4] = {{0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL},{0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL},{0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL},{0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL},{0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL},{0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL},{0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL,0x8D76CE1FL}};
    int32_t *l_2854 = (void*)0;
    int32_t *l_2858[7][4];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2333[i] = 0xD7248D74L;
    for (i = 0; i < 3; i++)
        l_2459[i] = &g_421[6];
    for (i = 0; i < 2; i++)
        l_2532[i] = 0x11BBCE7E7F680837LL;
    for (i = 0; i < 1; i++)
        l_2722[i] = 0x704AB6BEL;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
            l_2858[i][j] = (void*)0;
    }
lbl_2855:
    if ((safe_sub_func_int8_t_s_s(1L, (((*l_2299) = ((((-8L) <= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(l_2290, 2)), (((l_2291 = (p_8 | l_2290)) , ((*g_787) == ((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(l_2290, l_2290)) , p_8) , l_2291), (-1L))) , p_8) <= l_2291), 6)) != (-6L)))) & 0UL)))) <= 0xA84738BD3C8015B3LL) < l_2290)) <= l_2290))))
    { 
        int32_t ***l_2300 = &g_78;
        int32_t ****l_2301 = &l_2300;
        int32_t *l_2306 = &g_1947;
        uint32_t *l_2310 = &g_706.f0;
        int32_t *l_2311 = &g_142;
        int32_t *l_2316 = &g_61;
        uint8_t **l_2324 = &g_820;
        struct S0 l_2336 = {0xC337E63EL,0x16A1L};
        int32_t l_2365 = 0x2A49DC3AL;
        int32_t l_2366 = 0x5441F78AL;
        int32_t l_2373[1][6] = {{0x955504D0L,0x955504D0L,0x955504D0L,0x955504D0L,0x955504D0L,0x955504D0L}};
        int i, j;
        (*l_2301) = l_2300;
        (*l_2311) |= (safe_sub_func_int8_t_s_s(((*p_9) = (((safe_add_func_uint32_t_u_u(p_8, ((void*)0 == l_2306))) >= (((*g_787) ^ ((*l_2310) = ((void*)0 != l_2309))) , p_8)) , l_2291)), 0x7CL));
        for (g_143 = 0; (g_143 == 15); g_143 = safe_add_func_uint16_t_u_u(g_143, 9))
        { 
            int32_t l_2321 = 0x852D388EL;
            struct S0 l_2322 = {0UL,1L};
            const int32_t *l_2353 = &g_2[1];
            int32_t l_2362 = (-9L);
            int32_t l_2368 = 1L;
            int32_t l_2376[7][1][2] = {{{7L,0x56CD0C48L}},{{7L,1L}},{{0xFBCBA764L,0xFBCBA764L}},{{1L,7L}},{{0x56CD0C48L,7L}},{{1L,0xFBCBA764L}},{{0xFBCBA764L,1L}}};
            int32_t *l_2384[1][3][5] = {{{&l_2379,&l_2369,&l_2369,&l_2379,&l_2369},{&l_2379,&l_2379,&l_2371,&l_2379,&l_2379},{&l_2369,&l_2379,&l_2369,&l_2369,&l_2379}}};
            uint64_t l_2385 = 0UL;
            int i, j, k;
            for (g_196 = 0; (g_196 == (-29)); g_196 = safe_sub_func_uint32_t_u_u(g_196, 8))
            { 
                return l_2316;
            }
            if ((((safe_add_func_uint64_t_u_u(18446744073709551615UL, ((l_2321 ^ (((l_2322 , g_2323) , l_2324) == l_2324)) , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(l_2290, (*l_2316))), 11))))) & (*p_7)) & (*g_787)))
            { 
                int64_t l_2329 = (-8L);
                uint8_t l_2330 = 246UL;
                l_2330--;
            }
            else
            { 
                struct S0 l_2337 = {0x21FDF513L,0xACB5L};
                int32_t l_2340 = 1L;
                union U1 l_2347 = {0x23EB6B183DC7C683LL};
                struct S0 l_2349 = {0x046D4792L,0xF96CL};
                int8_t *l_2351 = &g_378;
                int32_t l_2352 = (-1L);
                int32_t l_2363 = 0xD99E8A1AL;
                int32_t l_2367 = (-1L);
                int32_t l_2370 = 0x5B32F8ACL;
                int32_t l_2372 = 0xE4FE5DE1L;
                int32_t l_2374[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_2374[i] = 0L;
                (*l_2311) ^= l_2333[2];
                (*g_1679) = (void*)0;
                for (g_320 = 0; (g_320 == 23); g_320 = safe_add_func_uint16_t_u_u(g_320, 6))
                { 
                    l_2337 = l_2336;
                }
                if (((l_2341 = (safe_mul_func_int8_t_s_s((*l_2316), (l_2340 = (*g_820))))) <= (l_2352 |= (safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s(((p_8 > (((safe_mul_func_int8_t_s_s(((((((((1L > (l_2347 , ((func_10((l_2349 = l_2348), l_2350, g_631, l_2351) , l_2350.f0) >= p_8))) ^ p_8) <= 0UL) | l_2321) && l_2322.f0) == p_8) , 5UL) ^ l_2337.f0), l_2290)) ^ 0L) & (*p_9))) && 0x62BC82BFL), l_2337.f1)))))))
                { 
                    const int32_t **l_2354 = (void*)0;
                    g_2357 = (l_2355 = l_2353);
                }
                else
                { 
                    int32_t *l_2358 = &g_142;
                    int32_t *l_2359 = &g_61;
                    int32_t *l_2360 = &g_978;
                    int32_t *l_2361[2][5][6];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_2361[i][j][k] = (void*)0;
                        }
                    }
                    ++g_2380;
                    l_2383 = l_2336;
                }
            }
            --l_2385;
        }
    }
    else
    { 
        int16_t l_2388 = (-1L);
        int32_t *l_2389 = (void*)0;
        int32_t *l_2390 = (void*)0;
        int32_t l_2391 = 0L;
        int32_t *l_2392 = &g_142;
        int32_t *l_2393 = &g_552[6][5];
        int32_t *l_2394 = (void*)0;
        int32_t *l_2395 = (void*)0;
        int32_t *l_2396[2];
        uint64_t l_2398[6][6][7] = {{{0xE4717275740A826DLL,0x59C397170A34BB5CLL,0x6EA2C2CABF743292LL,1UL,18446744073709551612UL,0x2A525CEA18A9D204LL,0xF668605452BFE03CLL},{0x2D50DE0AF2857B4ALL,0xD5327A8C6F49F01ALL,18446744073709551612UL,0UL,18446744073709551606UL,0x1855612024B52CCDLL,18446744073709551607UL},{0xE4717275740A826DLL,1UL,0UL,18446744073709551614UL,1UL,0x7ABBE95A311B5572LL,0x4E8FA73D8C083AD0LL},{18446744073709551615UL,18446744073709551612UL,2UL,0x0E6E029866E211E0LL,1UL,1UL,0x0E6E029866E211E0LL},{0UL,0xA369EC73FAEBFF02LL,0UL,4UL,0x4E8FA73D8C083AD0LL,0x376D0B68B8C2CD76LL,18446744073709551615UL},{18446744073709551608UL,18446744073709551607UL,0x5A846277879FF855LL,0xAA3BE4C5A7F0FC9FLL,18446744073709551615UL,0x0364D17AB8700FE2LL,18446744073709551608UL}},{{18446744073709551614UL,0x2A525CEA18A9D204LL,18446744073709551615UL,0x4E8FA73D8C083AD0LL,0x667F5B4925EA1032LL,0x376D0B68B8C2CD76LL,0xC85766FAAAA20C17LL},{18446744073709551612UL,0xD5327A8C6F49F01ALL,0x2D50DE0AF2857B4ALL,18446744073709551612UL,0x1E320C176354BE98LL,1UL,0x1855612024B52CCDLL},{0xF668605452BFE03CLL,0xA0C160E5AE008653LL,0x7ABBE95A311B5572LL,0UL,0UL,0x7ABBE95A311B5572LL,0xA0C160E5AE008653LL},{0x1E320C176354BE98LL,2UL,18446744073709551614UL,4UL,0x2D50DE0AF2857B4ALL,0x1855612024B52CCDLL,0xAA3BE4C5A7F0FC9FLL},{0x376D0B68B8C2CD76LL,0xF668605452BFE03CLL,0UL,0x6EA2C2CABF743292LL,18446744073709551606UL,0x2A525CEA18A9D204LL,0x667F5B4925EA1032LL},{0x07F098867868B905LL,18446744073709551606UL,1UL,4UL,0x0E6E029866E211E0LL,2UL,18446744073709551608UL}},{{0xC85766FAAAA20C17LL,0x667F5B4925EA1032LL,1UL,0UL,0x59C397170A34BB5CLL,4UL,0xE4717275740A826DLL},{18446744073709551607UL,4UL,18446744073709551612UL,18446744073709551612UL,4UL,18446744073709551607UL,0UL},{18446744073709551606UL,18446744073709551614UL,18446744073709551615UL,0x4E8FA73D8C083AD0LL,0xA0C160E5AE008653LL,6UL,0x4E8FA73D8C083AD0LL},{0x1E320C176354BE98LL,0x44842A39414E7BC7LL,0UL,0xAA3BE4C5A7F0FC9FLL,0UL,18446744073709551614UL,0x07F098867868B905LL},{0x6EA2C2CABF743292LL,18446744073709551614UL,0x376D0B68B8C2CD76LL,4UL,18446744073709551606UL,1UL,0x6EA2C2CABF743292LL},{18446744073709551607UL,4UL,18446744073709551614UL,0x0E6E029866E211E0LL,0xD5327A8C6F49F01ALL,0x5A846277879FF855LL,0x1855612024B52CCDLL}},{{0x667F5B4925EA1032LL,18446744073709551609UL,18446744073709551609UL,0x667F5B4925EA1032LL,0xDD32748FFED33436LL,1UL,0x6EA2C2CABF743292LL},{7UL,18446744073709551614UL,18446744073709551606UL,2UL,0x7FFD3E07EB25A575LL,18446744073709551606UL,0x5A846277879FF855LL},{0x2A525CEA18A9D204LL,0x4FA25865304174E8LL,0xE4717275740A826DLL,1UL,4UL,0xF668605452BFE03CLL,0x6EA2C2CABF743292LL},{18446744073709551607UL,7UL,2UL,0x44842A39414E7BC7LL,18446744073709551614UL,0x0364D17AB8700FE2LL,0x1855612024B52CCDLL},{1UL,0x376D0B68B8C2CD76LL,18446744073709551615UL,0UL,0x59C397170A34BB5CLL,0UL,18446744073709551615UL},{0x1855612024B52CCDLL,0x1855612024B52CCDLL,0xD5327A8C6F49F01ALL,0x7FFD3E07EB25A575LL,18446744073709551614UL,18446744073709551608UL,0UL}},{{0UL,0UL,0xA489E2EC00A1B1BDLL,0x667F5B4925EA1032LL,0UL,1UL,0x59C397170A34BB5CLL},{18446744073709551614UL,0x2D50DE0AF2857B4ALL,7UL,0UL,18446744073709551614UL,0x5A846277879FF855LL,0UL},{0x2A525CEA18A9D204LL,18446744073709551612UL,1UL,0x6EA2C2CABF743292LL,0x59C397170A34BB5CLL,0xE4717275740A826DLL,0UL},{0x44842A39414E7BC7LL,2UL,18446744073709551614UL,2UL,18446744073709551614UL,2UL,0x44842A39414E7BC7LL},{0xA489E2EC00A1B1BDLL,1UL,1UL,6UL,4UL,0x7ABBE95A311B5572LL,18446744073709551609UL},{0x2D50DE0AF2857B4ALL,0x1855612024B52CCDLL,0xAA3BE4C5A7F0FC9FLL,0x2D50DE0AF2857B4ALL,0x7FFD3E07EB25A575LL,18446744073709551615UL,2UL}},{{0x4FA25865304174E8LL,1UL,1UL,0x2A525CEA18A9D204LL,0xDD32748FFED33436LL,1UL,0x376D0B68B8C2CD76LL},{2UL,0x44842A39414E7BC7LL,18446744073709551614UL,0x0364D17AB8700FE2LL,0x1855612024B52CCDLL,1UL,1UL},{18446744073709551615UL,0x4FA25865304174E8LL,1UL,0x4FA25865304174E8LL,18446744073709551615UL,18446744073709551614UL,4UL},{0UL,0x5A846277879FF855LL,7UL,18446744073709551612UL,0UL,0x0364D17AB8700FE2LL,0x44842A39414E7BC7LL},{18446744073709551609UL,4UL,0xA489E2EC00A1B1BDLL,0xDD32748FFED33436LL,0x376D0B68B8C2CD76LL,18446744073709551615UL,1UL},{0UL,18446744073709551612UL,0xD5327A8C6F49F01ALL,0x2D50DE0AF2857B4ALL,18446744073709551612UL,0x1E320C176354BE98LL,1UL}}};
        int64_t ***l_2403[5] = {&g_493,&g_493,&g_493,&g_493,&g_493};
        const int64_t ***l_2404 = (void*)0;
        uint64_t * const *l_2413 = (void*)0;
        uint64_t * const **l_2412 = &l_2413;
        uint64_t * const ***l_2411 = &l_2412;
        uint64_t * const ****l_2410 = &l_2411;
        uint32_t **l_2416[7] = {&g_787,&g_787,&g_787,&g_787,&g_787,&g_787,&g_787};
        int32_t l_2423 = (-1L);
        const int16_t * const ****l_2463 = (void*)0;
        uint64_t *** const **l_2474 = (void*)0;
        int16_t l_2475 = 1L;
        const int32_t l_2524[4][3][5] = {{{0L,0xC8C22E17L,9L,0L,8L},{1L,0L,0x26D6E529L,0L,1L},{9L,5L,0xC8C22E17L,8L,5L}},{{1L,0xC8C22E17L,0xC8C22E17L,1L,8L},{0L,1L,0x26D6E529L,5L,5L},{9L,1L,9L,8L,1L}},{{5L,0xC8C22E17L,8L,5L,8L},{5L,5L,0x26D6E529L,1L,0L},{9L,0L,8L,8L,0L}},{{0L,0xC8C22E17L,9L,0L,8L},{1L,0L,5L,8L,0xC8C22E17L},{0xAB34724CL,9L,0x26D6E529L,1L,9L}}};
        uint32_t l_2546 = 0xCB2DCA13L;
        int32_t *l_2549[1][1];
        int64_t *l_2587 = (void*)0;
        uint32_t l_2596 = 18446744073709551610UL;
        int8_t *** const *l_2622 = &g_720;
        uint32_t l_2682 = 18446744073709551615UL;
        uint8_t ***l_2685 = &g_935[2][4];
        union U1 l_2704 = {0x1D7EA3AED44A4BE7LL};
        uint64_t l_2724 = 0x525A058FE3216126LL;
        int64_t l_2748 = 0x89D0964D1F215E7DLL;
        uint32_t l_2795[4][1][2] = {{{0xBC267190L,18446744073709551606UL}},{{0xBC267190L,0xBC267190L}},{{18446744073709551606UL,0xBC267190L}},{{0xBC267190L,18446744073709551606UL}}};
        uint32_t **l_2815 = &g_2460;
        uint32_t l_2819[6][4] = {{4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL},{4294967286UL,4294967286UL,4294967286UL,4294967286UL}};
        int32_t *l_2829 = &g_2[0];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2396[i] = &l_2369;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_2549[i][j] = (void*)0;
        }
        l_2398[5][0][0]--;
        if ((((*g_787) = 0xA2FD7D86L) == ((((((g_382.f1 , l_2383) , (g_552[3][3] < (safe_add_func_uint16_t_u_u(((l_2403[4] != (g_2405[0][1][4] = l_2404)) == (((((+((((!(l_2291 = l_2409)) > (****g_1491)) ^ p_8) == (*l_2355))) < g_1573[1].f2) & (*l_2355)) , l_2348) , (*l_2355))), 0x2E42L)))) < (*l_2355)) , l_2410) == (void*)0) > p_8)))
        { 
            int64_t l_2424 = 4L;
            int32_t l_2425 = (-1L);
            uint32_t *l_2426 = &g_421[6];
            uint8_t l_2453 = 247UL;
            uint32_t **l_2458 = &l_2457;
            int32_t l_2509 = 0x075D00FBL;
            int32_t l_2529 = 0xC79B7925L;
            int32_t l_2531 = 0x889C9659L;
            int32_t *l_2535[7] = {&g_552[6][5],&g_552[6][5],&g_552[6][5],&g_552[6][5],&g_552[6][5],&g_552[6][5],&g_552[6][5]};
            struct S0 l_2541 = {0x204C190BL,-8L};
            union U1 l_2543 = {0x74791866EBD14480LL};
            const int64_t ****l_2572 = &g_2405[0][1][4];
            const int64_t *****l_2571[1];
            union U1 ** const l_2580[6][7] = {{&g_1572,&g_1572,&g_1572,&g_1572,&g_1572,&g_381,&g_1572},{&g_1572,&g_1572,&g_1572,&g_1572,(void*)0,&g_381,&g_1572},{&g_381,&g_1572,&g_1572,&g_381,&g_1572,(void*)0,&g_1572},{&g_1572,&g_1572,&g_381,&g_1572,&g_381,&g_1572,&g_1572},{&g_381,&g_1572,&g_1572,&g_1572,&g_381,&g_1572,&g_1572},{&g_381,&g_1572,&g_381,&g_381,&g_1572,&g_1572,&g_381}};
            const int32_t **l_2585 = &l_2355;
            const int32_t ***l_2584[7];
            const int32_t ****l_2583 = &l_2584[3];
            int32_t l_2614 = 0x7AA3CF77L;
            uint16_t l_2621 = 0xA971L;
            int16_t ***l_2665 = &g_852[3][4];
            int32_t *l_2667 = &g_552[3][3];
            uint8_t ***l_2688 = &g_1594;
            uint8_t l_2739 = 255UL;
            int8_t *l_2790[4][2][6] = {{{(void*)0,&g_378,&g_1547[0],&g_378,&g_378,&g_378},{(void*)0,&g_1547[0],&g_1547[0],(void*)0,&g_378,&g_1547[0]}},{{(void*)0,&g_378,&g_1547[0],&g_378,&g_378,&g_378},{(void*)0,&g_1547[0],&g_1547[0],(void*)0,&g_378,&g_1547[0]}},{{(void*)0,&g_378,&g_1547[0],&g_378,&g_378,&g_378},{(void*)0,&g_1547[0],&g_1547[0],(void*)0,&g_378,&g_1547[0]}},{{(void*)0,&g_378,&g_1547[0],&g_378,&g_378,&g_378},{(void*)0,&g_1547[0],&g_1547[0],(void*)0,&g_378,&g_1547[0]}}};
            const uint8_t l_2794 = 0x2EL;
            int32_t *l_2827 = &g_631;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2571[i] = &l_2572;
            for (i = 0; i < 7; i++)
                l_2584[i] = &l_2585;
            (*l_2392) = (((*l_2426) = (safe_add_func_int8_t_s_s(((((void*)0 == l_2416[1]) & (*l_2355)) | (l_2425 ^= (((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((p_8 > ((((safe_add_func_uint64_t_u_u((l_2291 = ((*g_1466) == &p_9)), ((((&g_421[2] != l_2392) <= 65535UL) , p_8) <= l_2423))) == 1UL) , p_8) & (*l_2355))), p_8)), l_2424)) , (****g_1491)) || p_8))), l_2424))) , l_2424);
            for (g_632 = 0; (g_632 <= 1); g_632 += 1)
            { 
                const int32_t l_2445[2] = {0x1A604053L,0x1A604053L};
                int32_t l_2454 = 1L;
                int i;
                (*l_2392) |= 6L;
                (*g_84) = &l_2391;
                (**g_84) &= (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((*l_2393), (++(**g_934)))) ^ 0xCEL), 0)), (safe_sub_func_int64_t_s_s((0x1F9FL || (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_2454 = (((*g_78) != ((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((l_2445[0] && (((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(((l_2425 = ((((((void*)0 != &g_176[0]) == p_8) >= p_8) & p_8) | l_2445[0])) > p_8))), 4)), (*l_2355))), p_8)) > l_2424) , l_2453)) | 4UL) ^ 3L), p_8)), p_8)) , (*g_78))) < (*l_2393))), l_2445[0])), p_8))), p_8))));
                for (p_8 = 4; (p_8 >= 0); p_8 -= 1)
                { 
                    const int32_t **l_2455 = &g_2357;
                    (*l_2455) = &l_2445[1];
                }
            }
        }
        else
        { 
            union U1 **l_2830 = &g_1572;
            union U1 **l_2831 = (void*)0;
            union U1 **l_2832 = &g_381;
            int16_t *l_2846[2][2][5] = {{{(void*)0,(void*)0,&l_2710,(void*)0,(void*)0},{&l_2479.f1,(void*)0,&l_2479.f1,&l_2479.f1,(void*)0}},{{(void*)0,&g_1368,&g_1368,(void*)0,&g_1368},{(void*)0,(void*)0,&l_2388,(void*)0,(void*)0}}};
            int32_t l_2847 = 0L;
            int i, j, k;
            (*l_2832) = ((*l_2830) = &l_2704);
            (*l_2547) ^= (l_2833[0][2] >= (safe_rshift_func_int16_t_s_s(((*l_2826) = ((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(((((((((*l_2826) < (safe_mul_func_int16_t_s_s((g_1528[0][0] == (safe_mul_func_uint8_t_u_u((!((((safe_lshift_func_int16_t_s_u(((*g_850) != (*g_850)), 10)) >= (*l_2355)) & (g_1482[0][3][1] < 0x8B71L)) & (*g_787))), (*l_2392)))), 6L))) || (*p_9)) ^ p_8) && (*l_2392)) , (*l_2355)) != (*p_7)) <= (-1L)))) ^ 0xD9EFL), (*p_7))) < (-3L))), l_2847)));
            for (l_2546 = 0; (l_2546 >= 25); l_2546 = safe_add_func_uint32_t_u_u(l_2546, 4))
            { 
                for (l_2748 = 2; (l_2748 >= 0); l_2748 -= 1)
                { 
                    uint32_t l_2850[2][7][7] = {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL,4294967294UL,0xE8E1167BL}}};
                    int i, j, k;
                    l_2850[1][5][3]++;
                }
                if (p_8)
                    break;
            }
        }
        for (g_1530 = 0; (g_1530 <= 0); g_1530 += 1)
        { 
            int32_t *l_2853[1][3][7] = {{{&g_552[6][5],&l_2722[0],&l_2722[0],&g_552[6][5],&l_2722[0],&l_2722[0],&g_552[6][5]},{&l_2721,&l_2595,&l_2721,&l_2721,&l_2595,&l_2721,&l_2721},{&g_552[6][5],&g_552[6][5],(void*)0,&g_552[6][5],&g_552[6][5],(void*)0,&g_552[6][5]}}};
            int i, j, k;
            return l_2854;
        }
    }
    for (g_1295 = 2; (g_1295 >= 0); g_1295 -= 1)
    { 
        const int32_t *l_2856 = &l_2719;
        const int32_t **l_2857 = &g_2357;
        if (g_382.f1)
            goto lbl_2855;
        (*l_2857) = l_2856;
        if (p_8)
            continue;
    }
    return l_2858[0][2];
}



static struct S0  func_10(const struct S0  p_11, union U1  p_12, int32_t  p_13, int8_t * p_14)
{ 
    uint64_t l_1677 = 18446744073709551614UL;
    int32_t l_1680 = (-9L);
    uint16_t *l_1681[6][1][7] = {{{&g_126.f1,&g_126.f1,&g_24,&g_126.f1,&g_126.f1,&g_126.f1,&g_24}},{{&g_1573[1].f1,&g_1573[1].f1,(void*)0,&g_382.f1,(void*)0,(void*)0,&g_382.f1}},{{&g_382.f1,&g_1530,&g_382.f1,&g_126.f1,&g_382.f1,&g_1530,&g_382.f1}},{{&g_1573[1].f1,&g_382.f1,&g_382.f1,&g_1573[1].f1,(void*)0,(void*)0,(void*)0}},{{&g_126.f1,&g_1530,&g_24,&g_1530,&g_126.f1,&g_1530,&g_24}},{{(void*)0,&g_1573[1].f1,&g_382.f1,&g_382.f1,&g_1573[1].f1,(void*)0,(void*)0}}};
    int8_t l_1682 = 0x8BL;
    int32_t l_1683 = (-8L);
    uint8_t ****l_1688 = &g_1492[0];
    uint32_t l_1689 = 0x33510346L;
    int32_t l_1690[2][6] = {{0x99B4CCDAL,4L,4L,0x99B4CCDAL,4L,4L},{0x99B4CCDAL,4L,4L,0x99B4CCDAL,4L,4L}};
    int8_t *l_1692[6] = {&g_677,&g_378,&g_378,&g_677,&g_378,&g_378};
    struct S0 l_1693 = {4294967295UL,0L};
    int32_t *l_1694 = (void*)0;
    int32_t *l_1695 = (void*)0;
    int32_t *l_1696 = (void*)0;
    int32_t *l_1697 = &g_631;
    int16_t ****l_1698 = &g_851;
    struct S0 ***l_1748 = (void*)0;
    union U1 l_1808 = {-7L};
    uint64_t ****l_1827 = &g_1647;
    int8_t l_1872 = (-9L);
    int8_t l_1895 = 0x78L;
    int32_t l_1969[7] = {0xC25F5640L,(-3L),(-3L),0xC25F5640L,(-3L),(-3L),0xC25F5640L};
    int8_t l_1996 = 0L;
    int64_t * const l_2012 = &g_1202[1][4];
    int64_t * const *l_2011 = &l_2012;
    int64_t * const **l_2010 = &l_2011;
    int64_t * const ***l_2009[1];
    uint32_t l_2060[4] = {0x9414002FL,0x9414002FL,0x9414002FL,0x9414002FL};
    int16_t l_2064 = 0L;
    uint16_t l_2155 = 65528UL;
    uint16_t l_2158 = 0xAC2DL;
    uint16_t l_2201[6] = {0xCE43L,0xCE43L,0x017DL,0xCE43L,0xCE43L,0x017DL};
    uint8_t l_2214 = 0x50L;
    uint16_t l_2255 = 1UL;
    struct S0 l_2269 = {0xFD77138BL,0x9CC5L};
    struct S0 l_2281 = {0x280EFF2BL,1L};
    struct S0 l_2282 = {1UL,0xFEC7L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2009[i] = &l_2010;
    l_1690[0][0] = (safe_add_func_uint64_t_u_u(((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_1683 = (safe_mul_func_uint16_t_u_u((l_1682 = (p_11 , (l_1677 != (l_1680 = (((void*)0 == g_1678) != p_13))))), 1L))), 4)), (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(((((*g_787) = ((void*)0 != l_1688)) & g_1530) || (-1L)), (**g_934))), 8)))) && l_1689), l_1689));
    return l_2282;
}



static union U1  func_16(int8_t * p_17)
{ 
    const uint8_t l_21 = 255UL;
    uint16_t l_25 = 9UL;
    int32_t l_26 = (-3L);
    int8_t *l_1048 = &g_677;
    struct S0 l_1063 = {0xEB9EC7D2L,-1L};
    int32_t l_1619 = 1L;
    uint64_t ***l_1645[5][6] = {{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261,&g_261}};
    uint64_t ****l_1646[3];
    uint64_t ***l_1648[2][5] = {{&g_261,&g_261,&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261,&g_261,&g_261}};
    int8_t l_1649 = 5L;
    uint16_t *l_1650 = &g_126.f1;
    int32_t l_1651 = 0L;
    int32_t l_1652[1];
    union U1 l_1653 = {-1L};
    int i, j;
    for (i = 0; i < 3; i++)
        l_1646[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1652[i] = 0xDF2518DBL;
    l_26 &= ((safe_rshift_func_uint16_t_u_u(l_21, 2)) || ((safe_rshift_func_uint8_t_u_s((g_24 |= 2UL), (g_15.f1 < l_25))) > 0x5943E2F7C629C4DDLL));
    l_1619 &= ((((safe_mod_func_uint64_t_u_u((+0L), l_26)) <= (func_30(func_33(l_25, ((safe_rshift_func_int16_t_s_s(g_15.f1, ((((**g_720) = func_41(func_43(g_15, l_26, l_21, g_15.f0, g_18))) == l_1048) , 7L))) , g_15), l_26, l_26, &l_26), l_1063) , 0x7880L)) , 0x9669114AL) , l_1063.f1);
    l_1652[0] = (((l_1651 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_1063.f1, ((l_1619 = ((safe_div_func_int64_t_s_s(0x8E3CF634DDFF4892LL, (safe_div_func_int64_t_s_s(((l_25 == ((((safe_mod_func_uint16_t_u_u((g_1630 > (((*l_1650) = ((((((safe_mod_func_uint8_t_u_u(((****g_1491)++), (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((-6L))), 0x314E9B90L)), (!(l_26 = (((((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((((g_1647 = l_1645[1][2]) != l_1648[0][2]) , l_1063.f0) , l_21), 1L)), 0x06C29469L)) < (*g_787)) , 4UL) ^ (*g_787)) && l_25))))))) || l_26) ^ l_1619) , l_1649) <= 0UL) , g_1090.f1)) >= l_1649)), l_1619)) >= (-1L)) == l_1063.f1) ^ g_421[6])) && (-1L)), 0xBFBF59535B632352LL)))) >= 0xE4L)) >= 0x5B9DC2DDL))), 4UL))) > 254UL) , l_21);
    return l_1653;
}



static struct S0  func_30(int8_t * p_31, struct S0  p_32)
{ 
    const uint64_t **l_1082 = (void*)0;
    uint64_t **l_1083 = &g_262;
    int32_t l_1126 = 0xEEEDE953L;
    int8_t ***l_1131 = &g_721;
    int8_t l_1145 = 1L;
    int32_t l_1146 = 0x62ACE140L;
    int32_t l_1152 = (-1L);
    int32_t l_1153[7][6] = {{0x33442AD1L,0L,0x33442AD1L,8L,8L,0x33442AD1L},{2L,2L,8L,0x71DACA6CL,8L,2L},{8L,0L,0x71DACA6CL,0x71DACA6CL,0L,8L},{2L,8L,0x71DACA6CL,8L,2L,2L},{0x33442AD1L,8L,8L,0x33442AD1L,0L,0x33442AD1L},{0x33442AD1L,0L,0x33442AD1L,8L,8L,0x33442AD1L},{2L,2L,8L,0x71DACA6CL,8L,2L}};
    uint64_t l_1154 = 0xE4CC7CBB8860B019LL;
    int8_t l_1166[6];
    uint64_t l_1169 = 18446744073709551614UL;
    uint32_t *l_1176 = &g_143;
    int32_t l_1179 = 0x5C8F6EB9L;
    int32_t l_1189 = 7L;
    int32_t l_1196 = 1L;
    const int32_t l_1219 = 1L;
    uint32_t l_1223 = 1UL;
    union U1 l_1235 = {-1L};
    struct S0 l_1249 = {7UL,0x2E44L};
    uint64_t **l_1272 = (void*)0;
    uint64_t *** const l_1271 = &l_1272;
    uint64_t *** const *l_1270 = &l_1271;
    int8_t l_1297[1][6][2];
    int32_t l_1338 = (-1L);
    struct S0 *l_1360 = (void*)0;
    int64_t l_1369 = 0xE109BAF4D6101627LL;
    int32_t **l_1377 = (void*)0;
    int64_t *l_1421 = (void*)0;
    int64_t **l_1420[4][5][2] = {{{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421}},{{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421}},{{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421}},{{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421},{&l_1421,&l_1421}}};
    int32_t l_1480 = 0xD4177C88L;
    uint32_t l_1507 = 0x0477F86DL;
    union U1 *l_1556 = (void*)0;
    uint8_t l_1601 = 0x34L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1166[i] = 0x80L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
                l_1297[i][j][k] = 0x85L;
        }
    }
    for (g_141 = 2; (g_141 >= 0); g_141 -= 1)
    { 
        uint8_t *l_1071 = &g_112;
        int32_t l_1078 = 0x967FC84FL;
        int32_t l_1079 = 0xC42869A7L;
        struct S0 l_1085[2] = {{4294967291UL,0x6E69L},{4294967291UL,0x6E69L}};
        int32_t *l_1094 = &g_142;
        uint32_t * const l_1127[6] = {&g_143,&g_143,&g_143,&g_143,&g_143,&g_143};
        int32_t *l_1147 = &g_978;
        int32_t *l_1148 = &l_1146;
        int32_t *l_1149 = (void*)0;
        int32_t *l_1150 = &g_142;
        int32_t *l_1151[5] = {&l_1079,&l_1079,&l_1079,&l_1079,&l_1079};
        int i;
        for (p_32.f1 = 5; (p_32.f1 >= 0); p_32.f1 -= 1)
        { 
            uint64_t *** const l_1064 = &g_261;
            uint64_t ***l_1065 = &g_261;
            uint8_t *l_1072 = (void*)0;
            struct S0 l_1077 = {0x81D97141L,0xCA7DL};
            struct S0 l_1080[1] = {{0xB5CC9081L,-1L}};
            uint64_t ***l_1084 = &l_1083;
            uint8_t ***l_1120 = &g_934;
            uint8_t ****l_1119 = &l_1120;
            uint32_t l_1134 = 4294967295UL;
            int i, j;
            l_1065 = l_1064;
            for (g_319 = 0; (g_319 <= 3); g_319 += 1)
            { 
                int i, j, k;
                if (((((~0xB811L) ^ (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((l_1071 != l_1072), 1)), ((((safe_mod_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((l_1077 , g_460[p_32.f1][g_141][(g_141 + 1)]) , g_552[p_32.f1][(g_141 + 3)]), (l_1078 = p_32.f0))) | g_460[p_32.f1][g_141][(g_141 + 1)]), 0xABL)) <= l_1079) >= g_106) && (**g_934))))) < (**g_934)) & p_32.f0))
                { 
                    return l_1080[0];
                }
                else
                { 
                    struct S0 *l_1081 = &g_706;
                    int i, j;
                    g_552[(g_319 + 2)][p_32.f1] ^= (0xA9L | (((**g_934) = p_32.f1) & 0L));
                    (*l_1081) = p_32;
                }
            }
            l_1078 &= (((((g_552[(p_32.f1 + 1)][(g_141 + 2)] > 0UL) ^ (l_1082 == ((*l_1084) = l_1083))) < (((((0xE4L >= 0xB3L) || (*g_787)) == 65527UL) ^ (-1L)) ^ (*p_31))) && 0xAD53L) & 1UL);
            for (g_322 = 0; (g_322 <= 6); g_322 += 1)
            { 
                struct S0 * const l_1092 = &g_1093;
                struct S0 * const *l_1091 = &l_1092;
                int i, j, k;
                if (g_460[g_322][g_141][(g_141 + 2)])
                { 
                    l_1085[1] = l_1085[1];
                    return g_706;
                }
                else
                { 
                    int32_t l_1086[4];
                    struct S0 * const l_1089 = &g_1090;
                    struct S0 * const *l_1088[4][4][5] = {{{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089}},{{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089}},{{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089}},{{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089},{&l_1089,&l_1089,&l_1089,&l_1089,&l_1089}}};
                    struct S0 * const **l_1087[6][5][2] = {{{&l_1088[1][1][1],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]}},{{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]}},{{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]}},{{&l_1088[3][1][2],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]}},{{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]}},{{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]},{&l_1088[3][1][2],&l_1088[3][1][2]},{&l_1088[2][2][4],&l_1088[3][1][2]},{&l_1088[3][1][2],&l_1088[2][2][4]}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1086[i] = 0xFE012243L;
                    (*g_78) = &l_1079;
                    (**g_78) &= p_32.f0;
                    (*g_79) ^= ((*g_787) > l_1086[0]);
                    (*g_79) &= ((l_1091 = &g_705) != (void*)0);
                    return g_1090;
                }
            }
            l_1094 = &l_1079;
            for (g_106 = 2; (g_106 >= 0); g_106 -= 1)
            { 
                uint8_t ** const *l_1122 = &g_935[3][3];
                uint8_t ** const **l_1121 = &l_1122;
                int32_t l_1125 = (-8L);
                int32_t l_1128 = 0xD3C5BD56L;
                for (g_482 = 2; (g_482 <= 6); g_482 += 1)
                { 
                    uint8_t ** const ***l_1123 = (void*)0;
                    uint8_t ** const ***l_1124 = &l_1121;
                    int i, j, k;
                    (*l_1094) ^= (((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((~(safe_rshift_func_uint8_t_u_s((1L || (((((((*g_787) = (safe_mul_func_uint8_t_u_u(((***l_1120) = (safe_lshift_func_uint8_t_u_u((~g_460[g_482][g_106][(g_141 + 1)]), (!(safe_lshift_func_uint16_t_u_u(((!((l_1125 = (((*p_31) &= ((void*)0 == &g_460[6][1][4])) | (((g_552[(g_141 + 1)][(g_141 + 1)] = ((**l_1083) = (safe_mod_func_int64_t_s_s(((((safe_sub_func_uint8_t_u_u(p_32.f1, (l_1119 != ((*l_1124) = l_1121)))) != l_1125) >= 0UL) , p_32.f1), p_32.f1)))) | 0x840FE9D6374E5D7ALL) <= l_1126))) > 0x020A22721B31BF34LL)) , 0xB178L), 6)))))), 1L))) | p_32.f1) <= 0L) <= 0UL) , l_1127[4]) == &g_421[1])), g_460[g_482][g_106][(g_141 + 1)]))), p_32.f1)) , (*p_31)), 0x3EL)) | p_32.f0) , l_1128);
                }
                for (l_1128 = 4; (l_1128 >= 0); l_1128 -= 1)
                { 
                    int8_t ***l_1143 = (void*)0;
                    struct S0 l_1144 = {0x015DB52EL,-1L};
                    l_1125 &= (safe_mul_func_uint16_t_u_u(((0x4EL && (l_1131 == (((safe_rshift_func_int16_t_s_u(((l_1134 || 1UL) && ((safe_rshift_func_int8_t_s_u((p_32.f0 <= (((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((~(safe_unary_minus_func_int16_t_s(5L))), 5)), 0xFA66364D4E38B29ALL)) >= l_1126) && 2L)), 5)) , (-3L))), p_32.f1)) & l_1080[0].f0) , l_1143))) < 2L), g_552[(g_141 + 1)][(g_141 + 1)]));
                    return l_1144;
                }
                l_1125 &= ((*l_1094) = (8UL >= l_1145));
                (*g_78) = &g_552[g_141][(g_141 + 1)];
            }
        }
        ++l_1154;
        (*g_84) = &l_1079;
        for (g_316 = 0; (g_316 <= 6); g_316 += 1)
        { 
            if ((safe_rshift_func_uint8_t_u_s((p_32.f0 <= (*p_31)), 1)))
            { 
                int i;
                l_1151[(g_141 + 2)] = l_1151[g_141];
            }
            else
            { 
                for (l_1145 = 0; (l_1145 <= 4); l_1145 += 1)
                { 
                    return p_32;
                }
                if ((*g_79))
                    break;
            }
            return p_32;
        }
        (*l_1147) = (safe_lshift_func_uint8_t_u_s(((**g_78) & ((safe_mod_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((~p_32.f0), ((*g_262) = (p_32.f0 | l_1166[0])))) <= (safe_mod_func_uint64_t_u_u(g_196, ((&l_1153[1][2] == &l_1079) && p_32.f1)))) && 0xE7C2L), l_1152)) > l_1169)), (*p_31)));
        for (g_316 = 0; (g_316 <= 6); g_316 += 1)
        { 
            int32_t l_1177 = 0x6E0E8F12L;
            uint32_t *l_1178 = &g_421[2];
            int32_t l_1181 = 0xC76FD86BL;
            int32_t l_1186 = 3L;
            int8_t l_1187 = 0xE7L;
            int32_t l_1188 = (-9L);
            int32_t l_1190 = 0x29B1DCBAL;
            int32_t l_1191 = 0xD4250C43L;
            int32_t l_1192 = 0L;
            int32_t l_1193 = (-5L);
            int32_t l_1194 = 0x4D46E378L;
            int32_t l_1195 = (-1L);
            int32_t l_1197 = 7L;
            int32_t l_1198 = 8L;
            int32_t l_1199 = (-1L);
            int32_t l_1200[4][3] = {{(-3L),(-3L),(-3L)},{(-1L),(-1L),(-1L)},{(-3L),(-3L),(-3L)},{(-1L),(-1L),(-1L)}};
            int32_t l_1201 = (-7L);
            int i, j;
            (*l_1147) = ((l_1126 = ((safe_mul_func_int8_t_s_s((&g_84 == (void*)0), (((safe_rshift_func_uint8_t_u_u(((**g_934) || (*l_1094)), 3)) >= (safe_sub_func_int8_t_s_s((*p_31), ((l_1176 == (l_1178 = ((((l_1177 > p_32.f1) || 0xCCL) != 0xC4L) , &g_143))) | 0x9757A31AL)))) & l_1179))) && g_112)) > p_32.f1);
            for (g_1090.f0 = 1; (g_1090.f0 <= 6); g_1090.f0 += 1)
            { 
                int32_t *l_1180[2];
                uint32_t l_1203 = 0xEEA48894L;
                struct S0 l_1206[7][4][4] = {{{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}},{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}},{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}},{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}}},{{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}},{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}},{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}},{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}}},{{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}},{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}},{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}},{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}}},{{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}},{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}},{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}},{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}}},{{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}},{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}},{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}},{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}}},{{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}},{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}},{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}},{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}}},{{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}},{{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L},{1UL,0xDFA2L}},{{0x79485AB5L,0x22D7L},{1UL,0xDFA2L},{0x79485AB5L,0x22D7L},{0x79485AB5L,0x22D7L}},{{1UL,0xDFA2L},{1UL,0xDFA2L},{1UL,1L},{1UL,0xDFA2L}}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1180[i] = &l_1078;
                if (g_460[(g_141 + 4)][g_141][(g_141 + 3)])
                { 
                    int8_t l_1182 = (-7L);
                    int32_t l_1183 = 0xBC75CE91L;
                    int32_t l_1184 = 0L;
                    int32_t l_1185[3][2] = {{1L,0x8F9F900FL},{1L,1L},{0x8F9F900FL,1L}};
                    int i, j;
                    (*g_84) = l_1180[1];
                    --l_1203;
                    if (l_1186)
                        continue;
                    return l_1206[5][0][0];
                }
                else
                { 
                    p_32 = p_32;
                }
            }
        }
    }
    if ((((*p_31) | ((safe_mul_func_uint8_t_u_u(((((void*)0 == &g_460[2][1][2]) , &p_32) == &g_706), (&g_143 != l_1176))) | 0x6C04FC261FD7BF0ELL)) <= l_1126))
    { 
        union U1 l_1211 = {0x6B0626CE0997DF81LL};
        uint32_t l_1224 = 0x76A81028L;
        uint64_t ** const *l_1238 = &g_261;
        struct S0 l_1243 = {0x4DCA3378L,0x06EFL};
        struct S0 l_1307[3][3][7] = {{{{4294967293UL,0x0C2FL},{0x011BF4F8L,8L},{0xDEDD74A7L,0x1E56L},{0UL,5L},{4294967289UL,1L},{1UL,0x698AL},{4UL,-3L}},{{0xBB9896A3L,0xF5DFL},{0x26BBD368L,0L},{4294967294UL,0L},{4UL,-3L},{0xDB9EF3C5L,0x9D37L},{4294967295UL,0xF5EBL},{4294967295UL,0xF5EBL}},{{4294967294UL,0L},{0x0A1ECB11L,0L},{0xDEDD74A7L,0x1E56L},{0x0A1ECB11L,0L},{4294967294UL,0L},{0UL,0x75DAL},{4294967293UL,0x0C2FL}}},{{{4294967293UL,0x0C2FL},{0x0A1ECB11L,0L},{1UL,3L},{1UL,-1L},{0UL,5L},{0x011BF4F8L,8L},{0xDB9EF3C5L,0x9D37L}},{{0x0A1ECB11L,0L},{0x26BBD368L,0L},{0UL,5L},{6UL,-10L},{0xDEDD74A7L,0x1E56L},{0xDEDD74A7L,0x1E56L},{6UL,-10L}},{{4294967293UL,0x0C2FL},{1UL,-1L},{4294967293UL,0x0C2FL},{0xDEDD74A7L,0x1E56L},{1UL,0x698AL},{0x26BBD368L,0L},{6UL,-10L}}},{{{4294967294UL,0L},{0xBD265E59L,0xD3DFL},{0x011BF4F8L,8L},{0UL,0x75DAL},{6UL,-10L},{4294967293UL,0x0C2FL},{0xDB9EF3C5L,0x9D37L}},{{0xBB9896A3L,0xF5DFL},{4294967293UL,0x0C2FL},{0x26BBD368L,0L},{0xBD265E59L,0xD3DFL},{0xBD265E59L,0xD3DFL},{0x26BBD368L,0L},{4294967293UL,0x0C2FL}},{{0xDB9EF3C5L,0x9D37L},{4294967289UL,1L},{4UL,-3L},{0xBB9896A3L,0xF5DFL},{0xBD265E59L,0xD3DFL},{0xDEDD74A7L,0x1E56L},{4294967295UL,0xF5EBL}}}};
        uint32_t l_1355[1];
        int64_t l_1356 = 0L;
        int32_t l_1362 = (-1L);
        int32_t *l_1367[4][7] = {{&g_552[6][5],&g_61,&g_61,&g_552[6][5],&l_1362,&g_552[6][5],&g_61},{&g_142,&g_142,&g_552[6][5],&l_1146,&g_552[6][5],&g_142,&g_142},{(void*)0,&g_61,&g_552[6][3],&g_61,(void*)0,(void*)0,&g_61},{&g_552[6][5],&l_1146,&g_552[6][5],&g_552[6][5],&g_552[6][5],&g_552[6][5],&l_1146}};
        int32_t l_1370 = 5L;
        int16_t l_1371[2][3] = {{0x6604L,0x6AAFL,0x6604L},{0x6604L,0x6AAFL,0x6604L}};
        uint64_t l_1372 = 0x2BAFC3F7EAF58BB6LL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1355[i] = 0xA2F2CBC2L;
        for (g_323 = 0; (g_323 < 2); g_323 = safe_add_func_uint8_t_u_u(g_323, 2))
        { 
            uint32_t l_1212 = 0xDF350640L;
            union U1 l_1220 = {0x94D71B414B8C74D2LL};
            int64_t *l_1225 = &g_1202[1][4];
            int32_t l_1226 = 0x43DADB78L;
            int8_t l_1244 = 3L;
            int32_t *l_1245 = (void*)0;
            int32_t *l_1246 = &l_1146;
            uint64_t *** const l_1269[6][6][1] = {{{&g_261},{&l_1083},{&l_1083},{&g_261},{&g_261},{(void*)0}},{{(void*)0},{&l_1083},{(void*)0},{&g_261},{(void*)0},{&l_1083}},{{(void*)0},{(void*)0},{&g_261},{&g_261},{&l_1083},{&l_1083}},{{&g_261},{&g_261},{(void*)0},{(void*)0},{&l_1083},{(void*)0}},{{&g_261},{(void*)0},{&l_1083},{(void*)0},{(void*)0},{&g_261}},{{&g_261},{&l_1083},{&l_1083},{&g_261},{&g_261},{(void*)0}}};
            uint64_t *** const *l_1268 = &l_1269[1][3][0];
            struct S0 l_1308 = {0x1251B1B0L,4L};
            uint32_t l_1309 = 0x5BCA5A79L;
            struct S0 **l_1354 = &g_705;
            int i, j, k;
            l_1226 = (l_1211 , (18446744073709551611UL ^ (l_1212 && (safe_div_func_int64_t_s_s(((*l_1225) ^= (~(p_32.f0 & (~(safe_rshift_func_int16_t_s_u((l_1219 | (l_1220 , (safe_mod_func_uint32_t_u_u((((((l_1166[0] < l_1223) != l_1169) & l_1224) > 0UL) && l_1166[0]), 4294967295UL)))), 12)))))), 0x84520070EBB3AEB5LL)))));
            (*l_1246) &= (safe_div_func_int16_t_s_s(((((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_1235 , ((**g_934) ^= 247UL)), ((((*g_787) = (((safe_sub_func_uint8_t_u_u((l_1238 != (void*)0), l_1220.f2)) <= (safe_lshift_func_uint8_t_u_s(((l_1224 , ((safe_sub_func_uint32_t_u_u(((l_1243 , (*p_31)) && 0xF2L), 0x068F4CA9L)) < l_1244)) , 0x9BL), 1))) <= 0x24L)) , l_1235.f0) , p_32.f0))), (*p_31))), l_1243.f1)) >= l_1169) , &l_1224) == (void*)0), p_32.f1));
            for (g_1016 = 0; (g_1016 != (-9)); g_1016 = safe_sub_func_uint8_t_u_u(g_1016, 9))
            { 
                struct S0 *l_1250 = &l_1243;
                int32_t l_1292[2];
                int32_t l_1294 = (-6L);
                int32_t l_1296 = (-1L);
                int16_t *l_1334 = (void*)0;
                int16_t *l_1335 = &l_1243.f1;
                int i;
                for (i = 0; i < 2; i++)
                    l_1292[i] = (-1L);
                (*l_1250) = l_1249;
                for (p_32.f0 = 0; (p_32.f0 >= 34); ++p_32.f0)
                { 
                    struct S0 **l_1253 = &l_1250;
                    uint32_t *l_1285 = (void*)0;
                    uint32_t *l_1286 = &g_706.f0;
                    uint16_t *l_1293 = &l_1220.f1;
                    (*l_1253) = &g_706;
                    g_142 ^= (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x80D4L, ((((l_1270 = l_1268) != &l_1269[1][3][0]) > (safe_add_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(255UL, (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((*l_1286) = ((*g_787) = (*g_787))), (safe_unary_minus_func_int64_t_s((l_1152 ^ (l_1294 ^= (((((*l_1176) = (((((*l_1293) &= ((l_1292[1] = (g_460[6][1][4] = (safe_add_func_uint64_t_u_u(((**l_1083) = (((safe_mod_func_uint8_t_u_u((&g_126 != &l_1211), p_32.f0)) | p_32.f0) , p_32.f0)), (*l_1246))))) , 65535UL)) & (-1L)) , 0xCCB1EEF6L) && p_32.f1)) , p_32.f0) , p_32.f0) && l_1211.f0))))))), g_1202[1][4])))) && 0x7BL) < p_32.f1), g_1295)), 14)) & 0x94L) ^ 255UL), p_32.f0))) <= 0x0DL))), (**g_934))), (*l_1246))) , p_32.f1), p_32.f1)) && l_1292[0]) , &g_851) == (void*)0), l_1296)) < p_32.f1) , 0L), p_32.f1)), l_1297[0][1][0]));
                    (*g_84) = &l_1292[1];
                    (*g_84) = &l_1153[3][2];
                }
                (*l_1246) = (safe_mod_func_uint16_t_u_u(((!(safe_rshift_func_int8_t_s_s((*p_31), 6))) < ((*l_1246) >= (l_1294 = (((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(((l_1308 = l_1307[2][2][5]) , l_1309), 5)) > p_32.f1), 4)) <= p_32.f1) || (+(p_32.f0 & 0xC41F9127L)))))), l_1296));
                if (l_1292[1])
                    continue;
                if (((safe_sub_func_uint32_t_u_u((p_32.f0 = (((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((((((((*l_1250) = l_1307[1][1][0]) , (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((*g_820), (!l_1292[1]))) , ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s((((l_1249.f1 || (safe_mod_func_int8_t_s_s(((((((l_1307[2][2][5].f1 || (l_1145 <= (safe_add_func_int16_t_s_s(((*l_1335) = 0x6E06L), l_1211.f2)))) != g_112) , 0UL) , l_1292[1]) != l_1296) & 1UL), 0x9AL))) , (void*)0) != g_1336), 5)) > p_32.f0) , 0UL) , p_32.f1), 0x01L)), 5)) & 0xD3CC1CB1L)), p_32.f0)), g_466))) >= 0x4C615998L) , 250UL) != l_1338) , (*l_1246)) <= l_1292[1]), p_32.f1)), p_32.f0)) && (*g_787)) || (*g_787))), 4294967295UL)) <= 65529UL))
                { 
                    l_1292[0] = ((safe_mod_func_uint32_t_u_u(((+(safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u((-8L), ((*g_787) & (safe_lshift_func_uint8_t_u_s((1UL && ((safe_add_func_uint64_t_u_u((((&l_1238 != &l_1238) | ((l_1354 == &g_705) <= p_32.f0)) , 0x9E612861D38813B7LL), p_32.f1)) , l_1296)), l_1355[0]))))) < 6L) ^ (-7L)), 11)) , g_1202[1][4]), l_1292[1])), (*g_820)))) , 4294967295UL), p_32.f1)) , 1L);
                }
                else
                { 
                    if (p_32.f0)
                        break;
                    if (l_1356)
                        continue;
                    if (p_32.f1)
                        continue;
                    (*l_1246) |= (p_32.f0 != p_32.f0);
                    if (p_32.f0)
                        break;
                }
            }
        }
        for (g_1093.f1 = 0; (g_1093.f1 <= (-17)); g_1093.f1 = safe_sub_func_int16_t_s_s(g_1093.f1, 7))
        { 
            int32_t *l_1359 = &l_1146;
            struct S0 **l_1361[5][4];
            int32_t *l_1363 = &g_61;
            uint32_t l_1364 = 0xB04E851EL;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1361[i][j] = &l_1360;
            }
            (*l_1359) ^= 0x3B6765F7L;
            g_705 = l_1360;
            --l_1364;
        }
        l_1372--;
    }
    else
    { 
        int32_t ***l_1378 = &l_1377;
        int32_t **l_1379 = &g_79;
        int32_t l_1380[2][1][3];
        int8_t *l_1381 = &l_1166[1];
        int8_t ***l_1467 = &g_721;
        struct S0 *l_1510 = &l_1249;
        int32_t l_1532[7];
        uint32_t l_1534[6] = {0x412E9160L,0x412E9160L,0x412E9160L,0x412E9160L,0x412E9160L,0x412E9160L};
        int32_t l_1544 = 0x14E648DBL;
        uint8_t *** const **l_1586 = (void*)0;
        int32_t l_1600 = 5L;
        uint8_t l_1614 = 0xA8L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_1380[i][j][k] = 0x54ED85F8L;
            }
        }
        for (i = 0; i < 7; i++)
            l_1532[i] = (-1L);
        g_61 |= ((l_1153[1][2] = (safe_add_func_int32_t_s_s(0L, (l_1146 |= ((p_32.f0 != (l_1219 & ((*p_31) |= 0xE5L))) ^ (((*l_1378) = l_1377) != l_1379)))))) , p_32.f0);
        if ((((*l_1381) = ((*p_31) = l_1380[0][0][2])) < p_32.f1))
        { 
            struct S0 *l_1382 = &g_1090;
            int32_t l_1389 = (-1L);
            int64_t *****l_1401 = &g_1400;
            int32_t *l_1426 = (void*)0;
            int32_t l_1434 = 0xE53ACF79L;
            int32_t l_1435[2][7] = {{0xDC60608CL,1L,0xDC60608CL,0xDC60608CL,1L,0xDC60608CL,0xDC60608CL},{0x0DC33A6BL,0x0DC33A6BL,0x968610F3L,0x0DC33A6BL,0x0DC33A6BL,0x968610F3L,0x0DC33A6BL}};
            uint16_t l_1442 = 0x95B4L;
            int i, j;
            (*l_1382) = p_32;
            (*g_78) = &l_1380[1][0][1];
            if ((((safe_lshift_func_uint8_t_u_s(((*g_820)++), 3)) , 0x474A13A638E7FFFALL) || ((safe_lshift_func_int8_t_s_u((*p_31), 1)) , l_1389)))
            { 
                for (g_482 = 0; (g_482 <= 4); g_482 += 1)
                { 
                    int32_t *l_1390 = (void*)0;
                    int32_t *l_1391 = &l_1126;
                    uint32_t l_1392 = 1UL;
                    struct S0 l_1403 = {4294967295UL,0x6024L};
                    union U1 **l_1404 = &g_381;
                    (**g_78) ^= 0xE31D2DC4L;
                    --l_1392;
                    (**g_78) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((g_1399 != l_1401), (+g_320))), p_32.f0));
                    l_1403 = p_32;
                    (*l_1404) = (void*)0;
                }
            }
            else
            { 
                int8_t l_1407[3];
                uint32_t l_1414 = 0x81436D27L;
                int64_t *l_1418 = &g_67;
                int64_t **l_1417 = &l_1418;
                int64_t ***l_1419 = &l_1417;
                int32_t l_1422 = 1L;
                int16_t *l_1423 = &g_1017;
                int32_t l_1424 = 0xC276D3E3L;
                int32_t l_1436 = 0xBB737F03L;
                int32_t l_1437 = 0x24AE9A77L;
                int32_t l_1441 = (-7L);
                int i;
                for (i = 0; i < 3; i++)
                    l_1407[i] = 0x1AL;
                if ((p_32.f0 >= (l_1424 = (safe_rshift_func_int16_t_s_u((((((l_1407[1] | 18446744073709551610UL) < ((safe_mul_func_uint16_t_u_u(0x34D7L, p_32.f1)) | (((*l_1423) ^= (safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(l_1414, (safe_add_func_int32_t_s_s((l_1422 = (((*l_1419) = l_1417) != l_1420[1][2][0])), p_32.f0)))), p_32.f1))) > l_1407[2]))) && 8UL) >= (*p_31)) || 0xAF47436C09823985LL), l_1407[1])))))
                { 
                    int32_t *l_1425 = &l_1152;
                    int32_t *l_1427 = &l_1153[1][2];
                    int32_t *l_1428 = &l_1126;
                    int32_t *l_1429 = &g_552[6][5];
                    int32_t *l_1430 = &l_1146;
                    int32_t *l_1431 = &l_1424;
                    int32_t *l_1432 = &g_142;
                    int32_t *l_1433[3][2][1];
                    uint64_t l_1438[5][1][5] = {{{0x05D7DDA49095D842LL,0xD7328347B6C3A6CDLL,0xD7328347B6C3A6CDLL,0x05D7DDA49095D842LL,0xD7328347B6C3A6CDLL}},{{0x50095901590968C9LL,0x50095901590968C9LL,1UL,0x50095901590968C9LL,0x50095901590968C9LL}},{{0xD7328347B6C3A6CDLL,0x05D7DDA49095D842LL,0xD7328347B6C3A6CDLL,0xD7328347B6C3A6CDLL,0x05D7DDA49095D842LL}},{{0x50095901590968C9LL,0x43394E1E5CB04133LL,0x43394E1E5CB04133LL,0x50095901590968C9LL,0x43394E1E5CB04133LL}},{{0x05D7DDA49095D842LL,0x05D7DDA49095D842LL,0x60A1BEA532FD39E9LL,0x05D7DDA49095D842LL,0x05D7DDA49095D842LL}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1433[i][j][k] = (void*)0;
                        }
                    }
                    l_1426 = ((*g_84) = l_1425);
                    l_1438[1][0][0]--;
                    l_1442++;
                }
                else
                { 
                    l_1424 |= (**g_78);
                }
            }
            (*l_1382) = (*l_1382);
        }
        else
        { 
            uint32_t l_1469 = 0x3B491848L;
            int32_t l_1483[2][1];
            struct S0 l_1500 = {0x04573100L,1L};
            int32_t *l_1501 = (void*)0;
            int32_t *l_1502 = &g_61;
            int32_t *l_1503 = &l_1483[0][0];
            int32_t *l_1504 = &g_552[5][2];
            int32_t *l_1505 = &l_1126;
            int32_t *l_1506[5];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1483[i][j] = 0x48FB2CA0L;
            }
            for (i = 0; i < 5; i++)
                l_1506[i] = &l_1189;
            for (g_319 = 0; (g_319 >= 32); g_319++)
            { 
                int16_t *l_1451 = (void*)0;
                int16_t *l_1452 = &g_1090.f1;
                int32_t *l_1453[5][3] = {{&g_978,&l_1189,&g_978},{&g_631,&l_1380[0][0][1],&g_631},{&g_978,&l_1189,&g_978},{&g_631,&l_1380[0][0][1],&g_631},{&g_978,&l_1189,&g_978}};
                union U1 *l_1454 = &g_126;
                union U1 **l_1455 = &g_381;
                int8_t ****l_1464 = (void*)0;
                int8_t ****l_1465 = &g_720;
                uint16_t *l_1468[4];
                uint8_t *l_1481 = &g_1482[1][4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1468[i] = &g_24;
                g_978 = ((&g_1400 != &g_1400) == ((*l_1452) = ((!(g_1202[1][4] = (safe_div_func_int16_t_s_s(p_32.f0, (safe_unary_minus_func_uint64_t_u(18446744073709551615UL)))))) && 6UL)));
                (*l_1455) = l_1454;
                l_1483[0][0] = (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((((*l_1481) ^= ((((g_126.f1 = (g_24 = (l_1469 ^= (safe_sub_func_uint16_t_u_u(9UL, ((g_1466 = ((*l_1465) = l_1131)) == l_1467)))))) | (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((((*g_820) = ((((*l_1381) = ((*p_31) = (((((*g_850) != (*g_850)) | ((*g_787) = (p_32.f1 != p_32.f0))) & l_1480) & p_32.f1))) < p_32.f1) ^ (**g_934))) != p_32.f0), 3)), p_32.f0)), 11)) & p_32.f0) <= 1L) , 0x07994591L) & p_32.f0), 10)), p_32.f1))) < p_32.f1) && (*p_31))) < 0xA4L), 0x2769L)) && p_32.f1) , g_552[5][5]), p_32.f1)), 1L));
                for (g_378 = (-13); (g_378 <= 5); g_378 = safe_add_func_uint16_t_u_u(g_378, 3))
                { 
                    return g_1090;
                }
                for (g_706.f0 = 10; (g_706.f0 <= 16); g_706.f0 = safe_add_func_uint32_t_u_u(g_706.f0, 2))
                { 
                    struct S0 l_1488[7][3][4] = {{{{0x268DFA71L,7L},{0xFF26D1C8L,0xDE39L},{0xFF26D1C8L,0xDE39L},{0x268DFA71L,7L}},{{0x94767DF2L,-3L},{0x56C0311CL,0x62ADL},{4294967290UL,0x1B34L},{0x910C2B74L,7L}},{{4294967295UL,0L},{4294967287UL,0x5514L},{0x268DFA71L,7L},{0xC5C66B1AL,0xECD2L}}},{{{0x467FE056L,0x9589L},{4294967292UL,0x0A00L},{4294967289UL,0xAFA9L},{0xC5C66B1AL,0xECD2L}},{{1UL,0x9791L},{4294967287UL,0x5514L},{4294967294UL,-3L},{0x910C2B74L,7L}},{{0xFF26D1C8L,0xDE39L},{0x56C0311CL,0x62ADL},{1UL,0x9791L},{0x268DFA71L,7L}}},{{{0x64F74FF5L,0xC704L},{0xFF26D1C8L,0xDE39L},{4UL,-5L},{4294967295UL,0xD7F4L}},{{0xDA154A82L,0xE06FL},{4294967289UL,0xAFA9L},{0x36E4C2AAL,0xC15EL},{4294967289UL,0xAFA9L}},{{0UL,0x68D0L},{0xC5C66B1AL,0xECD2L},{4294967292UL,0x0A00L},{1UL,4L}}},{{{0xFEE59A90L,0x47E1L},{0x023A26C5L,3L},{1UL,4L},{0xFF26D1C8L,0xDE39L}},{{4294967295UL,0xD7F4L},{0xDA154A82L,0xE06FL},{0xC5C66B1AL,0xECD2L},{0UL,0L}},{{4294967295UL,0xD7F4L},{0x467FE056L,0x9589L},{1UL,4L},{0xFEE59A90L,0x47E1L}}},{{{0xFEE59A90L,0x47E1L},{0UL,0L},{4294967292UL,0x0A00L},{0x64F74FF5L,0xC704L}},{{0UL,0x68D0L},{0UL,0xC391L},{0x36E4C2AAL,0xC15EL},{4294967290UL,0x1B34L}},{{0xDA154A82L,0xE06FL},{0x36E4C2AAL,0xC15EL},{4UL,-5L},{4UL,-5L}}},{{{0x64F74FF5L,0xC704L},{0x64F74FF5L,0xC704L},{1UL,0x9791L},{0x023A26C5L,3L}},{{0xFF26D1C8L,0xDE39L},{0x37C73AA7L,0x1A45L},{4294967294UL,-3L},{0x56C0311CL,0x62ADL}},{{1UL,0x9791L},{4294967295UL,0L},{4294967289UL,0xAFA9L},{4294967294UL,-3L}}},{{{0x467FE056L,0x9589L},{4294967295UL,0L},{0x268DFA71L,7L},{0x56C0311CL,0x62ADL}},{{4294967295UL,0L},{0x37C73AA7L,0x1A45L},{4294967290UL,0x1B34L},{0x023A26C5L,3L}},{{0x94767DF2L,-3L},{0x64F74FF5L,0xC704L},{0xFF26D1C8L,0xDE39L},{4UL,-5L}}}};
                    struct S0 *l_1489[5];
                    int32_t l_1497 = (-3L);
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1489[i] = (void*)0;
                    g_1090 = l_1488[4][1][1];
                    l_1497 = (0xB267B607L <= (0UL != (g_1490[0] != ((safe_rshift_func_uint8_t_u_s((((p_32.f0 > ((safe_rshift_func_int16_t_s_u(p_32.f1, 11)) < (((*g_262) = 18446744073709551615UL) , p_32.f1))) != (**g_934)) ^ g_322), 7)) , (void*)0))));
                }
            }
            (*l_1379) = &l_1152;
            for (g_106 = 19; (g_106 <= 22); g_106 = safe_add_func_int8_t_s_s(g_106, 1))
            { 
                p_32 = l_1500;
            }
            --l_1507;
        }
        (*l_1510) = p_32;
        for (g_141 = 0; (g_141 < 6); ++g_141)
        { 
            uint64_t *l_1515 = &g_321;
            int32_t l_1525 = 1L;
            uint8_t *l_1526 = &g_1482[1][4][1];
            int16_t *l_1527[6] = {&g_141,&g_113,&g_141,&g_141,&g_113,&g_141};
            int32_t *l_1529 = &l_1146;
            int32_t *l_1531[1];
            int32_t l_1533[7][4] = {{0x8AEBE3B2L,(-1L),0x6CCB676CL,0xD9238856L},{1L,(-2L),0xD9238856L,0xFF59CBF5L},{0xD9238856L,0xFF59CBF5L,0x4B82C93DL,0xFF59CBF5L},{0xA6F5778BL,(-2L),(-1L),0xD9238856L},{0x83895932L,(-1L),0xFF59CBF5L,0x0F0D054DL},{(-1L),0xA6F5778BL,1L,1L},{(-1L),(-1L),0xFF59CBF5L,0x8AEBE3B2L}};
            uint64_t l_1570 = 18446744073709551615UL;
            uint32_t l_1574 = 0x91567DA4L;
            int16_t l_1599[6];
            int8_t l_1611 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1531[i] = &g_61;
            for (i = 0; i < 6; i++)
                l_1599[i] = 0x8A0DL;
        }
    }
    return g_1090;
}



static int8_t * func_33(uint64_t  p_34, struct S0  p_35, int16_t  p_36, int16_t  p_37, int32_t * p_38)
{ 
    uint64_t *l_1051[4];
    uint64_t **l_1052 = &g_262;
    union U1 l_1053 = {-7L};
    int64_t ****l_1054 = &g_492;
    int64_t *l_1058 = &g_67;
    int64_t * const *l_1057[5][3][3] = {{{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058}},{{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058}},{{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058}},{{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058}},{{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058},{&l_1058,&l_1058,&l_1058}}};
    int64_t * const **l_1056 = &l_1057[2][0][0];
    int64_t * const ***l_1055[7] = {&l_1056,&l_1056,&l_1056,&l_1056,&l_1056,&l_1056,&l_1056};
    int64_t * const ****l_1059 = &l_1055[4];
    int32_t *l_1060 = (void*)0;
    int32_t *l_1061[3][7][4] = {{{&g_631,&g_978,&g_552[2][4],&g_61},{&g_631,&g_552[2][4],&g_631,&g_978},{&g_978,&g_61,&g_978,&g_978},{&g_552[2][4],&g_552[2][4],&g_2[1],&g_61},{&g_61,&g_978,&g_2[1],&g_978},{&g_2[1],&g_61,&g_2[1],&g_552[2][4]},{&g_631,&g_61,&g_61,&g_631}},{{&g_61,&g_631,&g_2[1],&g_978},{&g_61,&g_2[1],&g_61,&g_2[1]},{&g_631,&g_978,&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_552[2][4],&g_978},{&g_978,&g_631,&g_552[2][4],&g_631},{&g_2[1],&g_61,&g_2[1],&g_552[2][4]},{&g_631,&g_61,&g_61,&g_631}},{{&g_61,&g_631,&g_2[1],&g_978},{&g_61,&g_2[1],&g_61,&g_2[1]},{&g_631,&g_978,&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_552[2][4],&g_978},{&g_978,&g_631,&g_552[2][4],&g_631},{&g_2[1],&g_61,&g_2[1],&g_552[2][4]},{&g_631,&g_61,&g_61,&g_631}}};
    int8_t *l_1062 = &g_677;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1051[i] = &g_320;
    for (p_36 = 0; p_36 < 1; p_36 += 1)
    {
        g_176[p_36] = 0UL;
    }
    g_142 = ((((safe_rshift_func_uint8_t_u_s((255UL && (l_1051[2] == ((*l_1052) = l_1051[3]))), 2)) > (l_1053 , 0x6A785E60L)) == (l_1054 == ((*l_1059) = l_1055[5]))) && 0x5B28C5BBL);
    return l_1062;
}



static int8_t * func_41(int8_t * p_42)
{ 
    int32_t * const l_383[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t **l_384 = &g_79;
    struct S0 l_392[6][2] = {{{0UL,-5L},{7UL,0L}},{{0UL,-5L},{7UL,0L}},{{0UL,-5L},{7UL,0L}},{{0UL,-5L},{7UL,0L}},{{0UL,-5L},{7UL,0L}},{{0UL,-5L},{7UL,0L}}};
    uint16_t *l_395 = (void*)0;
    const int16_t **l_402 = (void*)0;
    int8_t l_413 = 1L;
    uint32_t l_416 = 0UL;
    int64_t *l_470 = &g_67;
    int64_t **l_469 = &l_470;
    int32_t *l_513 = &g_61;
    int32_t l_527 = (-5L);
    int8_t * const *l_571[7][1] = {{&g_18},{&g_18},{&g_18},{&g_18},{&g_18},{&g_18},{&g_18}};
    uint16_t l_574 = 1UL;
    int64_t l_600 = (-5L);
    int32_t l_612 = (-2L);
    union U1 l_637 = {-1L};
    uint8_t l_661 = 0xBFL;
    int16_t * const **l_665 = &g_432;
    uint16_t l_671 = 1UL;
    uint32_t *l_672 = &g_632;
    uint8_t *l_673 = &g_112;
    int32_t l_723 = 0xC66B5C16L;
    int32_t l_724 = (-1L);
    uint32_t l_757 = 0xE12948ABL;
    int64_t l_805 = 0xB16C27E2894F6CF4LL;
    uint64_t *l_816 = &g_316;
    uint8_t **l_819 = (void*)0;
    uint32_t *l_825 = (void*)0;
    int32_t l_826 = 0x6163A2DEL;
    const uint32_t l_827 = 0xD8CC8D31L;
    uint32_t l_837[1];
    int8_t l_862 = 4L;
    uint8_t ***l_878[4] = {&l_819,&l_819,&l_819,&l_819};
    int16_t **l_889 = &g_853;
    const uint8_t *l_937 = &g_112;
    const uint8_t **l_936 = &l_937;
    uint64_t ***l_982 = (void*)0;
    int8_t *l_1029 = &g_378;
    int i, j;
    for (i = 0; i < 1; i++)
        l_837[i] = 0xAB871195L;
    (*l_384) = l_383[0][0];
    if (((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_141 == ((safe_lshift_func_int16_t_s_s(((g_322 ^ (l_383[0][0] == (void*)0)) , ((!(l_392[0][0] , (((safe_lshift_func_uint16_t_u_s(((void*)0 == l_395), g_176[0])) && 0x085A8B14L) <= g_382.f2))) , g_2[0])), 15)) > (*g_262))), g_196)), g_15.f0)) ^ g_112))
    { 
        uint64_t l_401 = 18446744073709551612UL;
        struct S0 l_403 = {4294967291UL,8L};
        uint64_t ** const *l_415 = &g_261;
        int32_t l_451 = 0x566F3951L;
        int64_t **l_471[2][2];
        int32_t l_549 = 0xCF63E608L;
        int16_t ** const l_587 = (void*)0;
        uint8_t l_594 = 1UL;
        struct S0 l_599 = {4294967292UL,0x1E31L};
        int32_t l_614 = 0x788AEC77L;
        int32_t l_630[3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_471[i][j] = &l_470;
        }
        for (i = 0; i < 3; i++)
            l_630[i] = 0x373109FEL;
lbl_546:
        for (g_316 = (-22); (g_316 <= 37); g_316 = safe_add_func_int8_t_s_s(g_316, 3))
        { 
            int32_t l_398 = 0L;
            l_398 = 0x56C0C754L;
        }
        if ((safe_div_func_uint8_t_u_u(8UL, l_401)))
        { 
            uint32_t l_414[5] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
            int32_t l_419 = 0xA15E3593L;
            int32_t ** const *l_424[6] = {&g_84,&g_84,&g_84,&g_84,&g_84,&g_84};
            int16_t *l_434 = &l_403.f1;
            int16_t **l_433 = &l_434;
            struct S0 l_452[3] = {{4294967295UL,0x601EL},{4294967295UL,0x601EL},{4294967295UL,0x601EL}};
            uint16_t l_468[1];
            int64_t ***l_495 = &g_493;
            union U1 l_501 = {-4L};
            int i;
            for (i = 0; i < 1; i++)
                l_468[i] = 0xB403L;
            for (g_142 = 0; g_142 < 5; g_142 += 1)
            {
                g_324[g_142] = 0xB5239C997CF1A5C3LL;
            }
            if ((((((void*)0 != l_402) && ((l_403 , (((1UL & ((+2UL) >= (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((0x77L == l_413) | g_378), l_403.f0)) != l_414[0]), l_403.f0)), 0)) , l_415) != (void*)0), l_401)))) , l_403.f0) , 0UL)) , 4294967295UL)) || 0x36L) , l_414[1]))
            { 
                int8_t l_420[4];
                int32_t l_431 = (-3L);
                const int16_t l_450 = (-1L);
                uint16_t l_467 = 65535UL;
                const uint16_t l_478 = 0UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_420[i] = 0xCAL;
                for (g_323 = 0; (g_323 <= 0); g_323 += 1)
                { 
                    return &g_378;
                }
                if ((g_15 , (g_176[0] & ((g_324[2] > ((l_416 != ((--(*g_262)) && (l_414[0] , l_403.f1))) , l_414[0])) <= g_382.f0))))
                { 
                    int16_t ***l_435 = &l_433;
                    const int32_t l_446 = (-1L);
                    int8_t l_447 = 0L;
                    uint16_t *l_448 = (void*)0;
                    uint16_t *l_449 = &g_382.f1;
                    struct S0 *l_453 = (void*)0;
                    struct S0 *l_454 = &l_392[0][0];
                    ++g_421[6];
                    g_425 = l_424[2];
                    l_451 = ((((*l_449) ^= (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(((((~l_431) != (g_432 != ((*l_435) = l_433))) == (safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(0x6F66ED171539ED44LL, (l_447 = (((((safe_mul_func_uint8_t_u_u((((*g_262)--) != (safe_add_func_uint32_t_u_u(l_420[2], (&g_121 == (void*)0)))), l_403.f1)) || l_446) > 1L) <= l_446) , g_141)))) <= 0x4A35L) == l_403.f1), l_403.f0))) < 6L), 3)) ^ l_401), 4UL))) != l_450) & l_420[0]);
                    (*l_454) = (l_446 , l_452[2]);
                    (*g_84) = (*g_78);
                }
                else
                { 
                    int32_t ***l_457[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_457[i] = &g_84;
                    g_142 = (((((safe_rshift_func_uint8_t_u_u((((((((void*)0 == l_457[1]) , (l_420[1] == (safe_mod_func_int32_t_s_s(((g_460[6][1][4] = 1UL) , (~(~g_382.f2))), (+(safe_add_func_uint8_t_u_u((4UL | l_431), 1L))))))) || g_466) >= 0x4CL) == g_323) | l_467), l_420[0])) , l_468[0]) < g_382.f0) <= l_403.f1) && l_403.f1);
                }
                if ((l_469 != l_471[0][0]))
                { 
                    int64_t l_472 = (-1L);
                    int32_t l_479 = 7L;
                    int32_t l_480 = (-1L);
                    int32_t l_481 = 0xA98009BCL;
                    l_431 ^= (l_403.f1 && ((0UL != (l_451 &= l_472)) <= ((l_472 , ((safe_lshift_func_int8_t_s_s((((((safe_lshift_func_int16_t_s_s((-1L), ((((~l_478) , ((l_403.f0 && 0xD0ED0B7EF76FA77ELL) & 0x89D009ECB4A04C56LL)) , 0xE9149D5CB8931E1DLL) == l_479))) , l_401) < (-4L)) || 1L) == g_319), l_479)) < 65527UL)) ^ (*g_262))));
                    (*g_84) = (void*)0;
                    g_482--;
                    return &g_378;
                }
                else
                { 
                    int64_t ****l_494 = &g_492;
                    int32_t l_498 = (-6L);
                    l_431 = (l_478 <= ((safe_mul_func_uint16_t_u_u((((~(safe_rshift_func_uint16_t_u_u(l_403.f0, (safe_rshift_func_uint8_t_u_s((((*l_494) = g_492) != l_495), 6))))) == ((*g_262) != (safe_sub_func_uint32_t_u_u(l_403.f0, 4294967295UL)))) >= 1UL), l_451)) < l_498));
                    l_451 = (safe_mul_func_uint8_t_u_u(g_126.f1, g_106));
                }
                l_431 &= (l_451 < (&l_431 == (void*)0));
                (*g_84) = ((l_501 , ((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((l_401 != ((((safe_add_func_uint16_t_u_u((l_467 <= l_478), g_24)) || l_420[2]) != ((-2L) | 0xE8L)) != g_382.f1)), 7)), 0x80627D05F5A7021CLL)), 253UL)), l_450)) | l_478)) , &l_431);
            }
            else
            { 
                int64_t **l_516[6][5][4] = {{{(void*)0,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,(void*)0},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470}},{{(void*)0,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,(void*)0},{&l_470,&l_470,&l_470,&l_470}},{{&l_470,&l_470,(void*)0,&l_470},{(void*)0,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,(void*)0},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470}},{{&l_470,&l_470,&l_470,&l_470},{(void*)0,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470},{(void*)0,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470}},{{(void*)0,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470}},{{&l_470,&l_470,(void*)0,&l_470},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470},{&l_470,&l_470,&l_470,&l_470},{(void*)0,&l_470,&l_470,&l_470}}};
                int32_t l_519 = 2L;
                int8_t *l_528 = (void*)0;
                int8_t *l_529 = &g_378;
                int i, j, k;
                (*g_84) = (((g_512 |= l_403.f1) != g_378) , l_513);
                (*g_79) = ((l_401 >= ((l_403.f1 != (safe_sub_func_uint32_t_u_u((l_516[2][1][3] == ((*l_495) = ((safe_add_func_uint64_t_u_u(l_519, ((l_401 <= ((((*l_529) ^= (safe_mod_func_int64_t_s_s(((l_392[0][0] , (safe_mod_func_uint64_t_u_u(((*g_262) = (safe_rshift_func_int16_t_s_u((!(0xD336L < 65535UL)), 9))), l_403.f0))) | l_527), (**l_384)))) & l_519) , l_401)) >= l_519))) , &l_470))), l_519))) <= (*l_513))) & l_519);
            }
            return p_42;
        }
        else
        { 
            uint8_t l_541[2][1];
            uint8_t *l_542 = &g_112;
            int32_t l_550 = 0xEB65D125L;
            int32_t l_556 = 0x783BB0D3L;
            uint32_t l_557 = 0xE88413F8L;
            int8_t **l_573 = &g_18;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_541[i][j] = 1UL;
            }
            l_451 = (-5L);
            if ((safe_unary_minus_func_int16_t_s((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(0x06L, (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_541[0][0], (((*l_542) &= ((*l_513) && l_541[1][0])) ^ ((p_42 != (g_15 , g_18)) < 0x94L)))) | 18446744073709551615UL), l_403.f1)) != g_126.f2) >= g_421[5]), g_142)))) != l_401), l_403.f0)))))
            { 
                int8_t ***l_543 = (void*)0;
                int8_t **l_545 = &g_18;
                int8_t ***l_544 = &l_545;
                int32_t l_554 = 1L;
                int32_t l_555[5] = {0x275F433EL,0x275F433EL,0x275F433EL,0x275F433EL,0x275F433EL};
                int i;
                (*l_544) = &g_18;
                if (g_482)
                    goto lbl_546;
                for (g_67 = 27; (g_67 > 14); g_67 = safe_sub_func_int64_t_s_s(g_67, 1))
                { 
                    int16_t l_551 = (-2L);
                    int32_t l_553[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
                    int i;
                    ++l_557;
                    l_554 = l_554;
                    if (l_549)
                        continue;
                }
            }
            else
            { 
                int8_t * const **l_572 = &l_571[0][0];
                int32_t l_577 = 0x872EB84DL;
                l_556 ^= ((((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((*l_542) |= 1UL), (((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint64_t_u((safe_sub_func_int8_t_s_s(((((*l_572) = l_571[4][0]) != l_573) & l_574), (safe_mul_func_int8_t_s_s((l_549 = (l_451 &= l_577)), (*l_513))))))) > ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((~((**l_469) = (safe_mod_func_uint16_t_u_u((g_24 ^= (l_587 == (void*)0)), l_577)))), 1)), (*l_513))) >= g_552[4][2]), 3)) < g_176[0])), l_403.f0)) & 0xFA3AL) == 4294967295UL))), l_403.f0)) < (-2L)) || l_577) & 0x477B6F312882AFFALL);
            }
        }
        if (l_403.f0)
        { 
            int16_t *l_590 = &g_141;
            int32_t l_595 = 0L;
            (*l_513) = (safe_add_func_int8_t_s_s((((((((*l_590) &= (-6L)) <= g_2[3]) != ((~l_403.f0) | (l_594 = (0x9414L | ((safe_sub_func_int8_t_s_s((*l_513), 9UL)) , g_15.f0))))) , 7L) != l_595) ^ l_595), l_595));
            return p_42;
        }
        else
        { 
            uint32_t l_596 = 4294967295UL;
            const int64_t *l_603 = &g_67;
            const int64_t * const *l_602 = &l_603;
            const int64_t * const **l_601 = &l_602;
            int32_t l_606 = 0x7B3FC340L;
            int32_t l_607[3][7][2] = {{{6L,0xECFE6880L},{0xECFE6880L,6L},{0xECFE6880L,0xECFE6880L},{6L,0xECFE6880L},{0xECFE6880L,6L},{0xECFE6880L,0xECFE6880L},{6L,0xECFE6880L}},{{0xECFE6880L,6L},{0xECFE6880L,0xECFE6880L},{6L,0xECFE6880L},{0xECFE6880L,6L},{0xECFE6880L,0xECFE6880L},{6L,0xECFE6880L},{0xECFE6880L,6L}},{{0xECFE6880L,0xECFE6880L},{6L,0xECFE6880L},{0xECFE6880L,6L},{0xECFE6880L,0xECFE6880L},{6L,0xECFE6880L},{0xECFE6880L,6L},{0xECFE6880L,0xECFE6880L}}};
            int32_t l_611 = 5L;
            int32_t *l_623 = &g_552[6][5];
            int i, j, k;
            l_596--;
            for (g_142 = 0; (g_142 <= 4); g_142 += 1)
            { 
                uint8_t l_615 = 255UL;
                int32_t l_622[7][1][4] = {{{(-1L),0x7D69CA24L,0x027DC054L,9L}},{{0x6F67057AL,0xEFB33213L,0x8F400509L,0x8F400509L}},{{0x6F67057AL,0x6F67057AL,0x027DC054L,3L}},{{(-1L),0x8F400509L,0x6F67057AL,0x7D69CA24L}},{{0xEFB33213L,1L,0x5EDF7F08L,0x6F67057AL}},{{0xA318F5F9L,1L,0xA318F5F9L,0x7D69CA24L}},{{1L,0x8F400509L,(-7L),3L}}};
                int i, j, k;
                (*l_384) = (void*)0;
            }
        }
    }
    else
    { 
        int16_t l_654 = 1L;
        uint16_t l_656 = 0xF36CL;
        int16_t * const **l_664 = &g_432;
        int16_t * const ***l_663[1][7][4] = {{{(void*)0,&l_664,&l_664,&l_664},{&l_664,&l_664,&l_664,&l_664},{&l_664,&l_664,&l_664,&l_664},{&l_664,&l_664,&l_664,(void*)0},{&l_664,&l_664,&l_664,&l_664},{&l_664,(void*)0,&l_664,&l_664},{&l_664,(void*)0,&l_664,&l_664}}};
        int i, j, k;
        for (g_631 = (-29); (g_631 != (-5)); g_631 = safe_add_func_int16_t_s_s(g_631, 8))
        { 
            uint8_t *l_653[2][5][7] = {{{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,(void*)0,(void*)0,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112}},{{&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112,(void*)0,&g_112,&g_112},{(void*)0,&g_112,&g_112,(void*)0,&g_112,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,&g_112,&g_112,(void*)0,(void*)0,&g_112}}};
            int32_t l_655 = 0x11FA1D81L;
            int32_t l_662 = 0x17D1833FL;
            int i, j, k;
            if ((*l_513))
                break;
            g_552[6][5] ^= ((l_637 , (safe_sub_func_int32_t_s_s(0xB25DE4F9L, (((255UL != ((safe_add_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((l_655 = ((safe_mod_func_int64_t_s_s(((*l_513) ^ (((~(safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint8_t_u_u(g_382.f2, (--l_656))) || (safe_add_func_uint16_t_u_u(l_654, g_142))) == 0x4E91E64EL) , g_382.f0), 0xAEB9B8A8L)), l_654))) , 0UL) < 18446744073709551614UL)), (*g_262))) || l_655)), l_661)) < (*l_513)), l_662)) < (-1L))) && (*l_513)) & 0x2EL)))) || l_654);
        }
        l_665 = (l_656 , &g_432);
    }
    if ((((*l_673) = ((safe_div_func_uint32_t_u_u(((*l_672) = ((!(((*g_492) = &l_470) != (void*)0)) , ((*l_513) != (0x10CE29ACL == (l_392[5][0] , ((safe_rshift_func_int8_t_s_u(((l_671 <= (((((*l_470) |= (0x59EB6399E83F7724LL || (*l_513))) && (-10L)) || 0xF2L) & 0x2556L)) , (*l_513)), 1)) && (*l_513))))))), 0x38E64998L)) >= (*l_513))) & 0x45L))
    { 
        struct S0 l_674 = {6UL,0x5874L};
        int16_t *l_676[2];
        int16_t * const **l_690 = &g_432;
        int i;
        for (i = 0; i < 2; i++)
            l_676[i] = (void*)0;
        if ((((p_42 != (g_512 , &g_378)) , (void*)0) != (void*)0))
        { 
            int16_t **l_693 = &l_676[0];
            int16_t ***l_692 = &l_693;
            int16_t ****l_691 = &l_692;
            int32_t l_694 = 0xEB896647L;
            int32_t l_695 = (-5L);
            (*l_513) = (safe_mul_func_uint8_t_u_u(1UL, ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((l_694 = ((-1L) <= (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_674.f0, (l_690 == ((*l_691) = (void*)0)))), 0x1CBFCBBED8AEF9ACLL)))), 14)) , &g_196) != (void*)0), 0L)) <= 0x78L), l_674.f1)) & l_695)));
        }
        else
        { 
            int32_t *l_696 = &g_552[2][0];
            (*g_78) = l_696;
        }
    }
    else
    { 
        uint64_t l_697 = 0x59FABF4D2FB89A05LL;
        int32_t l_700[1];
        uint32_t l_701 = 4UL;
        struct S0 *l_704 = &l_392[1][0];
        int64_t *l_717[1];
        int64_t ***l_737 = &g_493;
        int32_t l_763 = 0x045748B2L;
        const union U1 l_792 = {0L};
        const uint16_t l_804 = 0xC2D1L;
        int i;
        for (i = 0; i < 1; i++)
            l_700[i] = 1L;
        for (i = 0; i < 1; i++)
            l_717[i] = &g_466;
        --l_697;
        l_701++;
        g_705 = l_704;
        for (g_141 = 0; (g_141 != 9); g_141 = safe_add_func_int32_t_s_s(g_141, 3))
        { 
            int64_t *l_715 = (void*)0;
            int64_t **l_716[4][1][4] = {{{&l_715,&l_715,&l_715,&l_715}},{{&l_715,&l_715,&l_715,&l_715}},{{&l_715,&l_715,&l_715,&l_715}},{{&l_715,&l_715,&l_715,&l_715}}};
            const int32_t l_722[4][7] = {{(-2L),(-6L),(-6L),(-2L),(-2L),(-6L),(-6L)},{(-6L),0xB6F26B66L,(-6L),0xB6F26B66L,(-6L),0xB6F26B66L,(-6L)},{(-2L),(-2L),(-6L),(-6L),(-2L),(-2L),(-6L)},{(-3L),0xB6F26B66L,(-3L),0xB6F26B66L,(-3L),0xB6F26B66L,(-3L)}};
            int32_t l_745 = 6L;
            uint32_t *l_746 = &g_632;
            uint16_t *l_750 = &g_24;
            union U1 l_762 = {0x61AA9EED9AC79378LL};
            uint16_t l_781 = 0x2ED1L;
            int16_t l_788 = 0x4645L;
            int32_t l_789 = 0x0E7FFCDAL;
            int i, j, k;
        }
    }
    (*l_513) = ((l_805 != ((*g_262) ^= (safe_lshift_func_uint8_t_u_s((*l_513), 0)))) <= (((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(((((***g_492) || (safe_sub_func_int32_t_s_s((*l_513), (((safe_mod_func_int16_t_s_s((((*l_816)++) >= ((((g_820 = &g_112) != ((l_826 = (safe_rshift_func_uint8_t_u_s((*l_513), ((safe_rshift_func_int8_t_s_u((&g_196 != (void*)0), 5)) != (*l_513))))) , (void*)0)) <= (***g_492)) , (*l_513))), g_482)) && 0x646E6370L) <= (*l_513))))) || (*l_513)) >= (***g_492)), 6)) & 255UL), l_827)) > 0UL) && (*l_513)));
    for (g_141 = (-17); (g_141 < (-26)); g_141 = safe_sub_func_int64_t_s_s(g_141, 1))
    { 
        int32_t l_830[5][4][1];
        uint16_t *l_838 = (void*)0;
        uint16_t *l_839 = &l_671;
        struct S0 l_868 = {0x7A7A59ABL,0xC3F0L};
        int16_t ****l_870 = &g_851;
        uint64_t l_902 = 0xB8E049DE3F994396LL;
        int8_t **l_931 = &g_18;
        union U1 l_933[4][7][1] = {{{{0x5E6D3B3D5165A366LL}},{{0x587AB201A94C9475LL}},{{0x3B7FF5308DE5878CLL}},{{0x3B7FF5308DE5878CLL}},{{0x587AB201A94C9475LL}},{{0x5E6D3B3D5165A366LL}},{{0xC03F53FB256AED59LL}}},{{{0x587AB201A94C9475LL}},{{0xC03F53FB256AED59LL}},{{0x5E6D3B3D5165A366LL}},{{0x587AB201A94C9475LL}},{{0x3B7FF5308DE5878CLL}},{{0x3B7FF5308DE5878CLL}},{{0x587AB201A94C9475LL}}},{{{0x5E6D3B3D5165A366LL}},{{0xC03F53FB256AED59LL}},{{0x587AB201A94C9475LL}},{{0xC03F53FB256AED59LL}},{{0x5E6D3B3D5165A366LL}},{{0x587AB201A94C9475LL}},{{0x3B7FF5308DE5878CLL}}},{{{0x3B7FF5308DE5878CLL}},{{0x587AB201A94C9475LL}},{{0x5E6D3B3D5165A366LL}},{{0xC03F53FB256AED59LL}},{{0x587AB201A94C9475LL}},{{0xC03F53FB256AED59LL}},{{0x5E6D3B3D5165A366LL}}}};
        int32_t l_1022 = 0x65F67F62L;
        uint8_t l_1023 = 0x5CL;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_830[i][j][k] = 0xEDBAF395L;
            }
        }
    }
    return p_42;
}



static int8_t * func_43(struct S0  p_44, uint8_t  p_45, uint64_t  p_46, int64_t  p_47, int8_t * p_48)
{ 
    uint32_t l_89 = 1UL;
    int32_t l_116 = 1L;
    int32_t l_118 = 0x7FB34192L;
    int32_t l_119 = 0x57BB50BBL;
    union U1 l_169 = {0x4F14847B1AB16F84LL};
    uint32_t l_171 = 0x7998293FL;
    int64_t l_207 = 0x6E028AD11B327732LL;
    int16_t *l_235 = &g_113;
    uint64_t l_246 = 18446744073709551613UL;
    uint64_t l_277 = 18446744073709551615UL;
    const int16_t *l_361 = &g_15.f1;
    const int16_t **l_360 = &l_361;
    uint32_t *l_374 = &g_176[0];
    uint32_t l_375 = 0x095E050DL;
    int32_t l_376 = 1L;
    int8_t *l_377[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    union U1 **l_379 = (void*)0;
    union U1 **l_380[7];
    int i;
    for (i = 0; i < 7; i++)
        l_380[i] = (void*)0;
    for (p_46 = 0; (p_46 > 30); p_46 = safe_add_func_uint8_t_u_u(p_46, 8))
    { 
        uint32_t l_51[5];
        int32_t l_53 = 0x7A95534FL;
        int32_t **l_80 = &g_79;
        int32_t ***l_81 = &g_78;
        int32_t **l_83 = &g_79;
        int32_t ***l_82[6][4][3] = {{{&l_83,&l_83,&l_83},{&l_83,&l_83,(void*)0},{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83}},{{(void*)0,(void*)0,&l_83},{(void*)0,&l_83,&l_83},{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83}},{{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83}},{{&l_83,&l_83,&l_83},{&l_83,&l_83,(void*)0},{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83}},{{&l_83,&l_83,&l_83},{&l_83,(void*)0,&l_83},{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83}},{{&l_83,&l_83,(void*)0},{&l_83,&l_83,&l_83},{&l_83,&l_83,&l_83},{(void*)0,(void*)0,&l_83}}};
        union U1 l_86[6][2] = {{{4L},{4L}},{{4L},{4L}},{{4L},{4L}},{{4L},{4L}},{{4L},{4L}},{{4L},{4L}}};
        uint8_t l_172 = 0x75L;
        uint8_t *l_239 = &g_112;
        int64_t *l_242 = &g_67;
        int64_t *l_243[3];
        uint64_t *l_247 = &g_126.f2;
        uint32_t *l_248 = &l_89;
        uint64_t * const l_318[4][4][7] = {{{&g_320,&g_322,&g_322,&g_320,&g_322,&g_322,&g_320},{&g_319,&g_323,&g_319,&g_319,&g_323,&g_319,&g_319},{&g_320,&g_320,&g_324[2],&g_320,&g_320,&g_324[2],&g_320},{&g_323,&g_319,&g_319,&g_323,&g_319,&g_319,&g_323}},{{&g_322,&g_320,&g_322,&g_322,&g_320,&g_322,&g_322},{&g_323,&g_323,&g_321,&g_323,&g_323,&g_321,&g_323},{&g_320,&g_322,&g_322,&g_320,&g_322,&g_322,&g_320},{&g_319,&g_323,&g_319,&g_319,&g_323,&g_319,&g_319}},{{&g_320,&g_320,&g_324[2],&g_320,&g_320,&g_324[2],&g_320},{&g_323,&g_319,&g_319,&g_323,&g_319,&g_319,&g_323},{&g_322,&g_320,&g_322,&g_322,&g_320,&g_322,&g_322},{&g_323,&g_323,&g_321,&g_323,&g_323,&g_321,&g_323}},{{&g_320,&g_322,&g_322,&g_320,&g_322,&g_322,&g_320},{&g_319,&g_323,&g_319,&g_319,&g_323,&g_319,&g_319},{&g_320,&g_320,&g_324[2],&g_320,&g_320,&g_324[2],&g_320},{&g_323,&g_319,&g_319,&g_323,&g_319,&g_319,&g_323}}};
        uint64_t * const *l_317 = &l_318[0][3][3];
        uint64_t l_337 = 0UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_51[i] = 8UL;
        for (i = 0; i < 3; i++)
            l_243[i] = &l_207;
        for (p_45 = 0; (p_45 <= 4); p_45 += 1)
        { 
            int i;
            l_53 = (safe_unary_minus_func_int16_t_s(l_51[p_45]));
        }
        for (p_45 = 0; (p_45 != 27); p_45 = safe_add_func_uint8_t_u_u(p_45, 9))
        { 
            int8_t l_62 = 0xA8L;
            int32_t *l_66[2];
            int i;
            for (i = 0; i < 2; i++)
                l_66[i] = &l_53;
            for (p_44.f1 = 1; (p_44.f1 <= (-9)); --p_44.f1)
            { 
                int8_t l_65 = 0xC0L;
                if (g_2[2])
                    break;
                for (l_53 = 0; (l_53 > 14); l_53 = safe_add_func_uint64_t_u_u(l_53, 2))
                { 
                    int32_t *l_60 = &g_61;
                    int32_t **l_63 = &l_60;
                    int32_t *l_64 = &g_61;
                    l_62 |= ((*l_60) = (-4L));
                    (*l_63) = &g_2[2];
                    (*l_64) ^= g_2[2];
                    if (l_65)
                        break;
                    (*l_63) = (*l_63);
                }
            }
            g_67 |= g_61;
            return g_18;
        }
        if ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_46 & (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_47, ((((*l_81) = (l_80 = g_78)) == (g_84 = &g_79)) , (((safe_unary_minus_func_int32_t_s(((l_86[4][1] , (((l_89 | 0L) <= 0x6993L) || 0xF6L)) , (**l_83)))) == 5L) == g_2[2])))), g_24)), 3))), 0L)), 0x9961L)))
        { 
            uint32_t l_104 = 0x4896B3C8L;
            int16_t *l_105[1];
            int64_t *l_107 = &g_67;
            uint16_t *l_108 = &l_86[4][1].f1;
            int8_t l_109 = 1L;
            int32_t l_110 = (-1L);
            uint8_t *l_111[4][2][4] = {{{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112}},{{&g_112,(void*)0,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112}},{{&g_112,&g_112,&g_112,&g_112},{&g_112,(void*)0,&g_112,&g_112}},{{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112}}};
            struct S0 l_114 = {1UL,0x9709L};
            int32_t l_120[1];
            uint64_t *l_165 = &l_86[4][1].f2;
            uint64_t *l_166 = &g_126.f2;
            union U1 l_170 = {1L};
            int64_t l_175 = 0x9C59BD7285B31AE2LL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_105[i] = &g_106;
            for (i = 0; i < 1; i++)
                l_120[i] = 1L;
            if (((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((g_113 = (g_112 |= (safe_rshift_func_int16_t_s_s((l_110 = (((((safe_mul_func_uint16_t_u_u((1UL <= ((void*)0 == g_18)), ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0x56L, 0UL)), ((*l_108) = (p_44.f0 >= ((*l_107) = (!(p_44.f1 = l_104))))))) & l_109) > (**g_78)), 6)) | l_89))) & (-6L)) | g_24) || 65529UL) , l_104)), 12)))))), 0xE176CBFBCC831745LL)) >= (-1L)))
            { 
                struct S0 *l_115 = &l_114;
                int32_t l_117 = 7L;
                (*l_115) = l_114;
                ++g_121;
            }
            else
            { 
                int16_t *l_139[2][6] = {{&l_114.f1,&l_114.f1,&l_114.f1,&l_114.f1,&l_114.f1,&l_114.f1},{&l_114.f1,&l_114.f1,&l_114.f1,&l_114.f1,&l_114.f1,&l_114.f1}};
                int32_t l_140 = (-1L);
                int i, j;
                if (((((safe_rshift_func_int16_t_s_u(g_106, 7)) , g_126) , (((safe_div_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(l_118, (((void*)0 == &p_47) , (l_116 = (safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((p_45 , (g_112 = (p_45 &= ((safe_add_func_uint8_t_u_u(((((0x9706C822056F0203LL && 0x7CA69BD5AD9A11D3LL) < 4294967295UL) , &g_106) == l_139[1][3]), g_113)) , g_106)))) < l_118) == 1UL), l_140)), g_2[1])), 8UL)))))), l_140)) | g_113) , (void*)0)) == (void*)0))
                { 
                    (*l_80) = (*g_84);
                }
                else
                { 
                    --g_143;
                    (**g_84) |= p_46;
                    return g_18;
                }
            }
            (*g_79) ^= 0L;
            if ((g_113 != ((safe_mod_func_int32_t_s_s((l_110 = ((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((g_112 &= 0xDEL) < (safe_rshift_func_uint8_t_u_s((((*g_78) = (*l_83)) == &l_110), 0))), l_119)), (safe_mul_func_int16_t_s_s((((((((safe_mod_func_uint16_t_u_u((+(safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_141, ((safe_sub_func_uint64_t_u_u((--(*l_166)), (((((*l_165) = 0x78BFBDA86EFADCADLL) ^ 0x0A0E13958EBF8EC9LL) , l_118) && p_44.f1))) <= 9UL))), 0L))), 0xBDD4L)) , l_169) , l_170) , &l_109) == g_18) | 0UL) >= p_44.f1), g_2[2])))) >= l_110)), l_171)) , l_172)))
            { 
                g_142 ^= (**g_84);
                for (g_141 = 0; (g_141 >= (-11)); g_141 = safe_sub_func_uint16_t_u_u(g_141, 9))
                { 
                    (**l_80) = 1L;
                }
                return p_48;
            }
            else
            { 
                int64_t **l_179 = &l_107;
                int32_t l_189 = 0x253C716AL;
                int64_t *l_195 = (void*)0;
                int64_t **l_194 = &l_195;
                if (p_45)
                    break;
                g_176[0]--;
                g_196 |= (((((((*l_179) = ((**g_78) , (void*)0)) == ((*l_194) = ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((~(safe_mul_func_int8_t_s_s(p_46, (safe_mul_func_int8_t_s_s(l_189, (65535UL && ((safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(p_44.f1, l_118)), 5)) != l_118))))))), 5)), l_89)) , &g_67))) ^ p_44.f1) & p_45) , 0xDE3861B4666DC25BLL) | p_46);
                for (g_106 = 0; (g_106 > (-30)); --g_106)
                { 
                    int64_t l_214[1];
                    int32_t l_215 = 0x493EC219L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_214[i] = 1L;
                    l_215 = (((**l_80) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((l_169 , ((safe_lshift_func_uint8_t_u_u(l_189, (l_207 = (p_47 > ((g_24 ^ p_45) >= 0x96L))))) | ((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0UL, 0)), 0L)), p_45)) <= 0x24A5CBDDL))) > l_214[0]) , l_189), 0)), l_120[0]))) == 0xE5FC087BL);
                    if (l_189)
                        break;
                    (*g_79) = (-1L);
                    if (l_118)
                        break;
                }
            }
        }
        else
        { 
            uint8_t l_216[7][6] = {{0x15L,1UL,252UL,246UL,252UL,1UL},{0x15L,1UL,252UL,246UL,252UL,1UL},{0x15L,1UL,252UL,246UL,252UL,1UL},{0x15L,1UL,252UL,246UL,252UL,1UL},{0x15L,1UL,252UL,1UL,0x89L,1UL},{252UL,1UL,0x89L,1UL,0x89L,1UL},{252UL,1UL,0x89L,1UL,0x89L,1UL}};
            int8_t l_223 = 0L;
            int64_t *l_231[3][1][2] = {{{&g_67,&l_207}},{{&g_67,&g_67}},{{&l_207,&g_67}}};
            const int16_t l_234 = 0x723BL;
            int i, j, k;
            l_216[1][1]++;
            l_118 ^= (((safe_sub_func_int32_t_s_s(p_47, (p_47 > (l_223 == l_216[1][5])))) , (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((p_47 = (p_44.f1 , (safe_unary_minus_func_int64_t_s(g_15.f0)))), (((safe_mod_func_int16_t_s_s(((**g_84) > (*g_79)), g_67)) , l_223) & (-4L)))) , p_47), (**l_83))), l_234)) || (**l_80)) || (**g_78))) | p_46);
        }
        l_118 = ((l_235 == ((((~((*l_239)--)) != (&g_67 == (void*)0)) ^ ((*l_248) = (((((l_116 &= (p_45 , ((*l_242) = (p_44.f0 ^ 18446744073709551615UL)))) > ((*l_247) ^= (safe_rshift_func_uint16_t_u_u(((**l_83) = (((&l_243[1] != (void*)0) == p_46) & (**g_84))), l_246)))) < g_143) > g_2[2]) & 2UL))) , l_235)) , (**l_80));
        for (p_44.f1 = 0; (p_44.f1 >= 0); p_44.f1 -= 1)
        { 
            union U1 l_297 = {0x6E1C351EFD968E6CLL};
            int16_t l_300[7][2];
            int64_t **l_325 = (void*)0;
            int32_t l_335 = (-9L);
            int32_t l_336 = 0L;
            int64_t l_348 = 0L;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_300[i][j] = 0xFF78L;
            }
            if ((safe_div_func_uint16_t_u_u(g_176[p_44.f1], (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_176[p_44.f1] != (-3L)), 3)), (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0UL, ((safe_sub_func_uint32_t_u_u(g_176[p_44.f1], 0xBC87BEFEL)) <= (g_176[p_44.f1] == (-1L))))), p_47)))))))
            { 
                uint64_t *l_289[1][7];
                int32_t l_290 = 0xE669EC0AL;
                uint16_t *l_291 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_289[i][j] = &l_246;
                }
                (**g_84) ^= 0L;
                g_261 = &l_247;
                if ((safe_rshift_func_int8_t_s_s((((((*l_239) &= (((+p_47) , (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_121, ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_45, ((**g_84) <= (((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s(l_277)) , ((safe_add_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(0xF08DL)), ((safe_mul_func_uint16_t_u_u(((l_289[0][3] != (*g_261)) | 0xD7DA01E1D9C4CFDCLL), 5L)) || p_47))), 0x224A2D75L)), g_196)) , 0x1734EC993FBD6B82LL) != g_176[p_44.f1]) | 18446744073709551610UL), g_143)) != l_290)), g_176[0])) != g_106) , (**l_80))))), 4294967287UL)) != (*g_262)))), 0x34BDB752L))) | 0x45L)) < (-1L)) , (void*)0) == l_291), 2)))
                { 
                    uint64_t ** const l_292[1] = {&l_247};
                    uint64_t ***l_293 = (void*)0;
                    uint64_t ***l_294 = &g_261;
                    int16_t *l_299 = &g_141;
                    int i;
                    (*l_294) = l_292[0];
                    l_118 &= ((*g_79) > ((safe_div_func_uint16_t_u_u((l_297 , g_112), p_45)) , (!(((((0xACD2L <= (((l_116 |= 1L) || (((((((*l_299) &= g_113) | g_126.f0) >= (-5L)) || 0L) & (**l_80)) <= 0x8787L)) >= (**g_261))) <= g_2[3]) , p_47) || g_15.f1) || l_300[1][1]))));
                }
                else
                { 
                    int16_t l_312 = (-2L);
                    uint64_t * const l_315 = &g_316;
                    uint64_t * const *l_314 = &l_315;
                    uint64_t * const **l_313[6] = {&l_314,&l_314,&l_314,&l_314,&l_314,&l_314};
                    int64_t ***l_326 = &l_325;
                    int i;
                    (**g_78) |= (g_176[p_44.f1] != (safe_mul_func_int8_t_s_s(p_44.f0, (~((safe_mul_func_uint16_t_u_u(((l_317 = (((((safe_mul_func_uint8_t_u_u(((((&g_262 == &g_262) > ((((**g_261) = ((((safe_sub_func_int8_t_s_s(((((g_126.f1 , p_44.f1) >= (-1L)) | 0UL) <= p_46), l_312)) < l_312) <= 0xE5L) ^ 0xAC2C7B45L)) == g_176[0]) || l_312)) , g_15.f1) >= p_44.f1), p_44.f0)) > p_47) != g_142) == 0xA0A1EA45L) , &g_262)) == (void*)0), 5L)) ^ l_312)))));
                    (*l_326) = l_325;
                }
                return g_18;
            }
            else
            { 
                const int8_t l_329 = 8L;
                uint32_t *l_334 = &g_176[p_44.f1];
                l_116 = (g_142 && (0x2D3900B72B06D5C7LL | (((((((safe_add_func_uint64_t_u_u((l_169.f1 , (*g_262)), (l_329 && (safe_add_func_uint8_t_u_u(p_47, ((*l_239)--)))))) >= (l_334 == l_334)) == 0x1B13C486F106E560LL) , 0L) & l_297.f2) , p_45) , g_24)));
                --l_337;
            }
            if (l_300[1][1])
                break;
            if (p_44.f0)
            { 
                return g_18;
            }
            else
            { 
                int32_t *l_342 = &l_118;
                uint8_t *l_349 = &g_112;
                for (l_277 = (-5); (l_277 == 52); l_277 = safe_add_func_uint32_t_u_u(l_277, 1))
                { 
                    int64_t **l_357 = &l_243[1];
                    (*l_83) = l_342;
                    (***l_81) &= (((+(safe_add_func_uint8_t_u_u(0x96L, (safe_mul_func_uint8_t_u_u(((((l_348 , l_349) != &p_45) != p_46) >= (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(l_171, (~((((*g_262) , l_325) == l_357) >= 1L)))) || (-1L)), g_176[p_44.f1])) ^ (-1L)), g_324[2]))), p_44.f0))))) & 0xC56DE614161B19F2LL) >= 0xB088F62FL);
                    return p_48;
                }
            }
        }
    }
    if (((safe_rshift_func_int16_t_s_u(((g_2[2] , ((l_376 |= (((0x52413386D8614077LL || ((((*l_360) = l_235) != ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_116 = (((g_143 && 8UL) <= (safe_add_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((((((((*l_374) = 0UL) | (g_112 || (*g_79))) <= 9UL) | l_118) , l_169.f2) & 0xA9L), l_119)) , l_277) <= l_89), 0x0AAEL))) != g_121)), 3)), g_126.f1)), l_375)), p_44.f1)) , (void*)0)) != 251UL)) > p_47) , g_316)) & g_2[2])) < l_246), 13)) <= 5UL))
    { 
        return l_377[4];
    }
    else
    { 
        for (g_121 = 0; g_121 < 1; g_121 += 1)
        {
            g_176[g_121] = 1UL;
        }
    }
    g_381 = &l_169;
    return l_377[1];
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_176[i], "g_176[i]", print_hash_value);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_324[i], "g_324[i]", print_hash_value);

    }
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    transparent_crc(g_382.f1, "g_382.f1", print_hash_value);
    transparent_crc(g_382.f2, "g_382.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_421[i], "g_421[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_460[i][j][k], "g_460[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_552[i][j], "g_552[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_706.f0, "g_706.f0", print_hash_value);
    transparent_crc(g_706.f1, "g_706.f1", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1090.f0, "g_1090.f0", print_hash_value);
    transparent_crc(g_1090.f1, "g_1090.f1", print_hash_value);
    transparent_crc(g_1093.f0, "g_1093.f0", print_hash_value);
    transparent_crc(g_1093.f1, "g_1093.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1202[i][j], "g_1202[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1295, "g_1295", print_hash_value);
    transparent_crc(g_1368, "g_1368", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1482[i][j][k], "g_1482[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1528[i][j], "g_1528[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1530, "g_1530", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1547[i], "g_1547[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1573[i].f0, "g_1573[i].f0", print_hash_value);
        transparent_crc(g_1573[i].f1, "g_1573[i].f1", print_hash_value);
        transparent_crc(g_1573[i].f2, "g_1573[i].f2", print_hash_value);

    }
    transparent_crc(g_1618, "g_1618", print_hash_value);
    transparent_crc(g_1630, "g_1630", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1774[i][j], "g_1774[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1844[i][j][k], "g_1844[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1845[i][j][k], "g_1845[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1947, "g_1947", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1980[i].f0, "g_1980[i].f0", print_hash_value);
        transparent_crc(g_1980[i].f1, "g_1980[i].f1", print_hash_value);
        transparent_crc(g_1980[i].f2, "g_1980[i].f2", print_hash_value);

    }
    transparent_crc(g_2027, "g_2027", print_hash_value);
    transparent_crc(g_2323.f0, "g_2323.f0", print_hash_value);
    transparent_crc(g_2323.f1, "g_2323.f1", print_hash_value);
    transparent_crc(g_2323.f2, "g_2323.f2", print_hash_value);
    transparent_crc(g_2356, "g_2356", print_hash_value);
    transparent_crc(g_2380, "g_2380", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2593[i][j][k], "g_2593[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2594, "g_2594", print_hash_value);
    transparent_crc(g_2646, "g_2646", print_hash_value);
    transparent_crc(g_2870, "g_2870", print_hash_value);
    transparent_crc(g_2994, "g_2994", print_hash_value);
    transparent_crc(g_3009, "g_3009", print_hash_value);
    transparent_crc(g_3055, "g_3055", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
