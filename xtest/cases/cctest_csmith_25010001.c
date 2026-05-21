// SPDX-License-Identifier: MIT
// cctest_csmith_25010001.c --- cctest case csmith_25010001 (csmith seed 620822529)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf785da68 */

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

// Options:   -s 620822529 -o /tmp/csmith_gen_gyb1_c6i/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint8_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   uint8_t  f3;
};

union U1 {
   uint64_t  f0;
   const int16_t  f1;
   struct S0  f2;
   int8_t  f3;
};


static const uint16_t g_7 = 0UL;
static const struct S0 g_23 = {255UL,252UL,0UL,1UL};
static uint32_t g_69 = 4294967288UL;
static int32_t g_90 = 0x95DE17A8L;
static uint64_t g_98 = 0UL;
static uint64_t g_172 = 18446744073709551606UL;
static uint32_t g_212 = 0x00A9F045L;
static uint16_t g_262 = 1UL;



static uint32_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, const int64_t  p_4, int8_t  p_5);
static uint16_t  func_13(struct S0  p_14, uint32_t  p_15, int32_t  p_16, int64_t  p_17, uint8_t  p_18);
static struct S0  func_19(int8_t  p_20, const struct S0  p_21, int16_t  p_22);




static uint32_t  func_1(void)
{ 
    uint8_t l_6 = 4UL;
    int32_t l_10 = 0x3717BE9FL;
    int8_t l_48 = (-1L);
    int8_t l_278 = (-10L);
    uint64_t l_282[5][3][5] = {{{18446744073709551615UL,0x2A24FF47029A2160LL,8UL,1UL,0xED491631D6AA0186LL},{18446744073709551615UL,18446744073709551614UL,1UL,0xEEB13F110F92F17FLL,1UL},{0x394E2B856E2F0540LL,0x394E2B856E2F0540LL,0x2A24FF47029A2160LL,4UL,18446744073709551615UL}},{{0UL,0x7E8E832C571BA37ELL,1UL,6UL,18446744073709551610UL},{0UL,0x4FEFD13C6613806CLL,0UL,0UL,18446744073709551615UL},{0xEEB13F110F92F17FLL,0x7E8E832C571BA37ELL,9UL,0x1678075960B8A567LL,18446744073709551612UL}},{{0x1678075960B8A567LL,0x394E2B856E2F0540LL,0UL,0x7F8393538FAA3ACFLL,9UL},{0UL,18446744073709551614UL,6UL,0x17470866168E0BF4LL,0x53177069160EC466LL},{0x7F8393538FAA3ACFLL,0x2A24FF47029A2160LL,6UL,8UL,18446744073709551613UL}},{{0x4FEFD13C6613806CLL,0x394E2B856E2F0540LL,0x394E2B856E2F0540LL,0x2A24FF47029A2160LL,4UL},{18446744073709551615UL,18446744073709551610UL,0UL,0x53177069160EC466LL,18446744073709551615UL},{5UL,1UL,0UL,0x17470866168E0BF4LL,0xEEB13F110F92F17FLL}},{{18446744073709551615UL,1UL,0xEEB13F110F92F17FLL,0x53177069160EC466LL,0x2A24FF47029A2160LL},{4UL,6UL,0x1678075960B8A567LL,0x2A24FF47029A2160LL,0x17470866168E0BF4LL},{18446744073709551610UL,8UL,0UL,0x7F8393538FAA3ACFLL,18446744073709551612UL}}};
    int i, j, k;
lbl_281:
    g_262 = func_2(l_6, g_7, ((((safe_div_func_int16_t_s_s((l_10 = g_7), (safe_div_func_uint16_t_u_u(func_13(func_19(l_6, g_23, g_23.f0), l_6, g_23.f3, l_48, g_7), l_48)))) <= g_23.f1) | l_48) , l_10));
    g_90 |= ((safe_mod_func_uint8_t_u_u(0xB7L, ((((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((!(safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s(2L, (safe_lshift_func_uint16_t_u_s(l_6, g_212)))), (-1L))), g_23.f1))), l_48)), l_48)) == 0x2EEC2D12L) < l_278) , g_23.f0) == (-3L)) & l_6))) | l_278);
    for (g_262 = (-25); (g_262 == 30); ++g_262)
    { 
        if (l_48)
            goto lbl_281;
    }
    return l_282[4][0][4];
}



static int32_t  func_2(uint8_t  p_3, const int64_t  p_4, int8_t  p_5)
{ 
    uint16_t l_156[1];
    int32_t l_165 = 0x59814C77L;
    int32_t l_189[1];
    union U1 l_259 = {0UL};
    uint32_t l_260 = 0xED739273L;
    int i;
    for (i = 0; i < 1; i++)
        l_156[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_189[i] = 0xEE80DCCFL;
    if ((((l_156[0]++) | ((safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(1UL, p_4)), 0x62EE7B9AL)) | ((safe_add_func_uint64_t_u_u(0x3AA3B8C42DAAAAF2LL, l_165)) < g_23.f3))) == g_23.f0))
    { 
        const int8_t l_173 = 0x3CL;
        int32_t l_190 = 0x95C91DE4L;
        int32_t l_191 = (-4L);
        int32_t l_193 = 1L;
        l_165 = (safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_7, ((((safe_rshift_func_uint8_t_u_u(g_23.f3, 6)) & (g_172 = 0x9869L)) ^ p_4) , l_156[0]))), l_173));
        for (l_165 = 0; (l_165 > (-6)); l_165--)
        { 
            uint16_t l_176 = 65535UL;
            int32_t l_192 = 0x463E212FL;
            l_176--;
            g_90 |= ((1UL | ((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(l_173, p_5)), p_3)) >= 0UL)) , 0xBDB73D74L);
            if (((safe_rshift_func_uint8_t_u_s(((((g_90 | l_156[0]) , (p_3 == ((0xDC72L || g_23.f3) <= (-1L)))) ^ p_4) & 0xBCL), 1)) < p_4))
            { 
                uint32_t l_194[5] = {0x156313A3L,0x156313A3L,0x156313A3L,0x156313A3L,0x156313A3L};
                int32_t l_202 = 0xDA37F1ACL;
                int i;
                l_191 &= (safe_mod_func_uint8_t_u_u(((((0x367B5E8C0C162246LL || (l_194[0]--)) && p_3) & (safe_unary_minus_func_int64_t_s((safe_mul_func_int16_t_s_s(l_189[0], (safe_mul_func_uint16_t_u_u(p_3, l_202))))))) || p_5), 0x5EL));
            }
            else
            { 
                uint32_t l_209 = 4UL;
                struct S0 l_217 = {0x1BL,1UL,0x1908L,0UL};
                g_212 ^= (((safe_rshift_func_int16_t_s_s(p_4, 9)) && (((-3L) >= ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((++l_209), 9)), l_176)) | (p_4 , p_3))) < g_90)) >= p_4);
                g_90 = (safe_mul_func_uint8_t_u_u(p_3, (safe_add_func_uint64_t_u_u(l_190, (l_217 , (p_3 | 0L))))));
            }
        }
    }
    else
    { 
        uint32_t l_242 = 7UL;
        int32_t l_243 = 1L;
        int32_t l_244 = 7L;
        l_244 = ((safe_add_func_uint8_t_u_u((g_23.f1 >= (safe_unary_minus_func_int16_t_s((!(safe_rshift_func_int16_t_s_u((~((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(4L, ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((((l_243 = (safe_rshift_func_int8_t_s_u((l_242 &= (p_5 = ((safe_mul_func_uint16_t_u_u((~(0x790C2E982C83C740LL && p_5)), 0xB396L)) < p_4))), g_98))) | g_23.f0) < g_23.f3) & 0L), l_156[0])) && (-1L)), 14)), 15)) == g_212))), g_98)) < 0x6182L)), 12)))))), l_156[0])) , p_4);
        l_243 = (safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(g_7, ((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0xDA24L, 0x59ADL)), (l_259 , 0x8AF46972L))), 4)), 6)) , l_260), l_242)) , 0x424BF6E064E15BF3LL))), g_172));
        l_244 = (l_259 , ((p_3 == (~(func_19(g_90, g_23, p_5) , 0xA9L))) | g_23.f2));
    }
    return p_3;
}



static uint16_t  func_13(struct S0  p_14, uint32_t  p_15, int32_t  p_16, int64_t  p_17, uint8_t  p_18)
{ 
    uint16_t l_81 = 3UL;
    int32_t l_97 = 0x7832F570L;
    int32_t l_131 = 0x0C79A429L;
    const int32_t l_132 = 0x7F386257L;
lbl_155:
    for (p_14.f3 = 24; (p_14.f3 >= 59); p_14.f3++)
    { 
        int16_t l_70 = 1L;
        int32_t l_71 = 0L;
        l_71 = ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((p_16 != (safe_mod_func_uint32_t_u_u(g_7, (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((g_69 = ((((safe_div_func_int32_t_s_s(g_23.f0, (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((0x1D8D4885L == (-3L)) ^ (-1L)), g_23.f2)), 3)), g_23.f2)))) >= g_23.f2) ^ g_7) ^ 9UL)), g_23.f2)), 0x546D79C1F62131ACLL))))) || l_70), 14)) < g_23.f1), 0x04L)) < 1UL);
        return g_23.f3;
    }
    for (p_16 = 0; (p_16 <= (-21)); p_16 = safe_sub_func_int32_t_s_s(p_16, 5))
    { 
        const uint16_t l_95[1][4] = {{65531UL,65531UL,65531UL,65531UL}};
        int32_t l_96 = 0x3B3E57ECL;
        int16_t l_133 = 1L;
        int16_t l_154 = 0L;
        int i, j;
        for (p_14.f1 = 0; (p_14.f1 > 51); ++p_14.f1)
        { 
            int64_t l_82 = 0x3B3BE7B8BBD03C5CLL;
            for (g_69 = 13; (g_69 <= 2); g_69 = safe_sub_func_int8_t_s_s(g_69, 5))
            { 
                uint64_t l_78[5][3][5] = {{{0x337B27F9695FF7D1LL,0x19F56C0C90B22F2ELL,0x19F56C0C90B22F2ELL,0x337B27F9695FF7D1LL,6UL},{0x3B6EA11B98B5DB27LL,0x18A3212EC3887D17LL,18446744073709551615UL,18446744073709551615UL,0x18A3212EC3887D17LL},{6UL,0x19F56C0C90B22F2ELL,0UL,1UL,1UL}},{{0x0A65522591552D49LL,0x218FCD19708E63FELL,0x0A65522591552D49LL,18446744073709551615UL,18446744073709551615UL},{0xFE74C19FD8DD93F8LL,0x337B27F9695FF7D1LL,1UL,0x337B27F9695FF7D1LL,0xFE74C19FD8DD93F8LL},{0x0A65522591552D49LL,0x3B6EA11B98B5DB27LL,0x218FCD19708E63FELL,0x18A3212EC3887D17LL,0x218FCD19708E63FELL}},{{6UL,6UL,1UL,0xFE74C19FD8DD93F8LL,0x3D8A5C089A473F19LL},{0x3B6EA11B98B5DB27LL,0x0A65522591552D49LL,0x0A65522591552D49LL,0x3B6EA11B98B5DB27LL,0x218FCD19708E63FELL},{0x337B27F9695FF7D1LL,0xFE74C19FD8DD93F8LL,0UL,0UL,0xFE74C19FD8DD93F8LL}},{{0x218FCD19708E63FELL,0x0A65522591552D49LL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x19F56C0C90B22F2ELL,6UL,0x19F56C0C90B22F2ELL,0UL,1UL},{0x18A3212EC3887D17LL,0x3B6EA11B98B5DB27LL,18446744073709551615UL,0x3B6EA11B98B5DB27LL,0x18A3212EC3887D17LL}},{{0x19F56C0C90B22F2ELL,0x337B27F9695FF7D1LL,6UL,0xFE74C19FD8DD93F8LL,6UL},{0x218FCD19708E63FELL,0x218FCD19708E63FELL,18446744073709551615UL,0x18A3212EC3887D17LL,0UL},{0x337B27F9695FF7D1LL,0x19F56C0C90B22F2ELL,0x19F56C0C90B22F2ELL,0x337B27F9695FF7D1LL,6UL}}};
                int i, j, k;
                if (g_23.f3)
                    break;
                if (p_14.f2)
                    continue;
                l_82 = (((0UL == (g_23.f3 , l_78[4][0][3])) != (safe_mul_func_int16_t_s_s(p_14.f3, 1L))) || l_81);
            }
            if ((((~(safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((g_7 | (l_81 < (l_97 = (safe_rshift_func_int8_t_s_u(((g_90 = g_7) , ((safe_mul_func_uint8_t_u_u(((((l_96 = ((((((safe_mul_func_uint16_t_u_u(g_23.f2, 3UL)) ^ (-1L)) || p_18) <= l_82) > l_95[0][2]) > 5UL)) , p_17) , 0UL) & p_18), l_95[0][1])) > (-1L))), l_82))))), l_81)), l_82))) & (-5L)) < g_23.f1))
            { 
                uint64_t l_134 = 18446744073709551607UL;
                g_98++;
                l_133 = (safe_sub_func_uint16_t_u_u(0x4E1BL, (((((safe_mod_func_uint64_t_u_u(l_97, (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((func_19(((!(safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_14.f0 && ((l_131 = (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((65535UL > 65528UL), 0xC5L)), p_15)) ^ 1L), 0xF91BAA84L)), p_14.f0))) == g_23.f1)), 7)), p_18))))) || p_15), p_14, l_97) , l_132), 0xD9FCL)), g_23.f3)), g_23.f3)), 1)), p_16)))) != p_14.f2) | g_98) | 0L) ^ 0UL)));
                ++l_134;
            }
            else
            { 
                return g_23.f1;
            }
        }
        g_90 = (((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((0x3AL || (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((((((((l_96 ^= (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((p_17 >= (((l_95[0][2] ^ ((safe_div_func_uint8_t_u_u(246UL, g_23.f2)) >= g_98)) <= p_14.f0) | 0x79E446C7L)))) ^ l_132), 10))) | l_81) < 0L) , l_95[0][1]) && (-1L)) || g_23.f1) , l_154) & p_14.f0) > p_14.f2) , l_95[0][2]), 0L)), (-1L))), p_15))), g_7)), g_23.f3)), g_23.f0)) || p_16) == 1UL);
        if (g_23.f2)
            goto lbl_155;
    }
    return p_14.f1;
}



static struct S0  func_19(int8_t  p_20, const struct S0  p_21, int16_t  p_22)
{ 
    uint32_t l_45 = 0xB8342836L;
    struct S0 l_47 = {0xF7L,0x83L,0x397BL,255UL};
    for (p_20 = 17; (p_20 >= (-22)); --p_20)
    { 
        uint32_t l_26 = 2UL;
        l_26++;
    }
    for (p_20 = (-21); (p_20 != 27); p_20 = safe_add_func_uint64_t_u_u(p_20, 2))
    { 
        uint64_t l_31[3][3][3];
        int32_t l_46 = 0x8592840CL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    l_31[i][j][k] = 0x15EE56E31BB000E2LL;
            }
        }
        if (l_31[2][0][1])
            break;
        l_46 |= ((safe_mul_func_uint16_t_u_u(p_21.f3, ((((safe_add_func_uint8_t_u_u((0xC23CEA2FL || (!(safe_div_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((p_21.f2 == l_45), l_31[0][1][0])), g_23.f0)) ^ g_23.f3), 0UL)) > g_7), l_45)))), l_45)) || 0xA9C1C73B017290B1LL) & 7UL) , 0xA1BAL))) , p_21.f2);
    }
    return l_47;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
    transparent_crc(g_23.f3, "g_23.f3", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
