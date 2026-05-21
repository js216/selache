// SPDX-License-Identifier: MIT
// cctest_csmith_2030df58.c --- cctest case csmith_2030df58 (csmith seed 540073816)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5c04bf3d */

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

// Options:   -s 540073816 -o /tmp/csmith_gen_gq1syhig/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint32_t  f1;
   int32_t  f2;
};

union U1 {
   uint32_t  f0;
   int32_t  f1;
   struct S0  f2;
};


static uint32_t g_4[5][1][2] = {{{0x151C3C39L,0x756A3367L}},{{0x756A3367L,0x151C3C39L}},{{0x756A3367L,0x756A3367L}},{{0x151C3C39L,0x756A3367L}},{{0x756A3367L,0x151C3C39L}}};
static uint32_t g_19 = 4294967295UL;
static struct S0 g_44[4][5] = {{{1UL,0x15BFEB1EL,-6L},{1UL,0x15BFEB1EL,-6L},{65535UL,0UL,0xC6F73980L},{65533UL,0xE2192FE2L,-1L},{65531UL,0x09C821F9L,0x7EC53A21L}},{{1UL,0xD01CD43AL,0xE2510A74L},{65531UL,0x09C821F9L,0x7EC53A21L},{4UL,0x39BA5493L,0x50EB6BA8L},{4UL,0x39BA5493L,0x50EB6BA8L},{65531UL,0x09C821F9L,0x7EC53A21L}},{{65531UL,0x09C821F9L,0x7EC53A21L},{0x1081L,0x27067D5BL,1L},{1UL,0xD01CD43AL,0xE2510A74L},{65531UL,0x09C821F9L,0x7EC53A21L},{4UL,0x39BA5493L,0x50EB6BA8L}},{{65533UL,0xE2192FE2L,-1L},{65531UL,0x09C821F9L,0x7EC53A21L},{65535UL,0UL,0xC6F73980L},{65531UL,0x09C821F9L,0x7EC53A21L},{65533UL,0xE2192FE2L,-1L}}};
static uint64_t g_46 = 2UL;
static int32_t g_47[1] = {(-1L)};
static union U1 g_73 = {4294967295UL};
static uint32_t g_112 = 8UL;
static int32_t g_128 = (-1L);
static int32_t g_129 = 0x2AD57942L;



static uint32_t  func_1(void);
static uint8_t  func_9(int32_t  p_10, const int8_t  p_11, uint32_t  p_12, int32_t  p_13, int8_t  p_14);
static uint16_t  func_29(uint16_t  p_30, int64_t  p_31, int32_t  p_32);
static union U1  func_33(struct S0  p_34, int32_t  p_35, int64_t  p_36, uint16_t  p_37);




static uint32_t  func_1(void)
{ 
    uint32_t l_7 = 18446744073709551610UL;
    int32_t l_17 = 0xC77509CBL;
    int8_t l_18 = 0x1BL;
    int32_t l_131 = 1L;
    uint8_t l_132 = 255UL;
    l_131 |= (safe_rshift_func_int8_t_s_u(((g_4[4][0][0] & (safe_div_func_uint64_t_u_u((l_7 | (safe_unary_minus_func_uint64_t_u((func_9((((safe_sub_func_int64_t_s_s(0xFB66FEBFB2C41AC3LL, (--g_19))) > l_17) && g_19), g_4[4][0][0], g_4[3][0][0], g_4[4][0][0], g_4[0][0][1]) <= 0xFEL)))), l_7))) == 0x638C0632B8141019LL), l_7));
    return l_132;
}



static uint8_t  func_9(int32_t  p_10, const int8_t  p_11, uint32_t  p_12, int32_t  p_13, int8_t  p_14)
{ 
    int16_t l_28 = 0L;
    struct S0 l_38[1] = {{1UL,18446744073709551612UL,0xEB6652F0L}};
    int32_t l_130 = (-1L);
    int i;
    p_10 = (safe_mul_func_uint8_t_u_u(p_11, p_14));
    l_130 &= (~(g_129 = ((~(g_128 &= (safe_sub_func_int32_t_s_s(p_13, ((l_28 = 9L) && (func_29((func_33(l_38[0], (!(safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((g_44[2][2] , 0x9EFDL), 1)), l_28))), l_38[0].f1, p_10) , 65535UL), l_28, l_28) , l_38[0].f1)))))) , 18446744073709551614UL)));
    return l_38[0].f0;
}



static uint16_t  func_29(uint16_t  p_30, int64_t  p_31, int32_t  p_32)
{ 
    uint8_t l_76 = 4UL;
    int32_t l_97 = 1L;
    int32_t l_101[1];
    struct S0 l_126 = {0xCF26L,1UL,0xFDC658C3L};
    int i;
    for (i = 0; i < 1; i++)
        l_101[i] = 0x2099EBF9L;
    for (g_46 = 0; (g_46 > 52); g_46 = safe_add_func_int64_t_s_s(g_46, 8))
    { 
        int16_t l_83 = (-4L);
        struct S0 l_96 = {8UL,18446744073709551612UL,0x64D50EE7L};
        int32_t l_104 = 0x6B54986CL;
        int32_t l_125 = (-1L);
        if ((l_76 || (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((l_83 , (p_32 | (safe_div_func_int64_t_s_s((((((l_76 >= p_30) || g_44[2][2].f2) || 0x754D5C1110172C61LL) | p_31) != l_76), 18446744073709551615UL)))), 0x6F96L)) , p_32) | l_76), 6)) == l_76), g_46))))
        { 
            struct S0 l_91 = {0xD266L,1UL,0xCF721992L};
            int32_t l_98 = 0xEC77404BL;
            int32_t l_100 = 0xB53E36E8L;
            int32_t l_103[3][3];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                    l_103[i][j] = (-4L);
            }
            for (g_73.f0 = (-17); (g_73.f0 > 34); g_73.f0++)
            { 
                uint64_t l_88[5][4] = {{0x96DA17685C1309E2LL,18446744073709551615UL,18446744073709551615UL,0x96DA17685C1309E2LL},{0xBACEAEEF4A51DBEELL,18446744073709551615UL,0xC3227D8CF631B5FDLL,18446744073709551615UL},{18446744073709551615UL,0xE71BBE26AF1C4852LL,0xC3227D8CF631B5FDLL,0xC3227D8CF631B5FDLL},{0xBACEAEEF4A51DBEELL,0xBACEAEEF4A51DBEELL,0x96DA17685C1309E2LL,0xE71BBE26AF1C4852LL},{0xC3227D8CF631B5FDLL,0xBACEAEEF4A51DBEELL,0xC3227D8CF631B5FDLL,0x96DA17685C1309E2LL}};
                struct S0 l_92 = {0xD220L,18446744073709551610UL,-8L};
                int i, j;
                --l_88[3][0];
                l_92 = l_91;
            }
            for (p_30 = 0; (p_30 != 48); p_30 = safe_add_func_int32_t_s_s(p_30, 1))
            { 
                struct S0 l_95 = {0UL,18446744073709551606UL,0x5D133FD7L};
                int32_t l_99 = 0xF77CBFDDL;
                int32_t l_102[3];
                uint32_t l_105 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_102[i] = 1L;
                l_96 = l_95;
                --l_105;
            }
            if (((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((g_112 = (-1L)) ^ (((~(0x6AL ^ (g_44[2][2].f2 > l_91.f2))) != 0x3B1CL) && p_31)), l_103[2][2])) , l_76), 4294967295UL)) && g_4[3][0][0]))
            { 
                uint8_t l_117 = 0x92L;
                struct S0 l_124 = {0x2D8EL,0UL,0x0E8A79AFL};
                g_73.f2.f2 = ((safe_mod_func_int32_t_s_s((~6L), (l_117 || p_30))) == (((((safe_mod_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((g_44[2][4] , g_46), p_32)), l_83)) , 0x35BB462C2F114C85LL) , 0x39DAL) ^ 0UL) >= p_31), (-1L))) , l_91) , l_96) , g_4[4][0][0]) , 2L));
                l_124 = l_91;
                l_125 = p_32;
            }
            else
            { 
                l_96 = (l_96 , l_126);
                g_44[2][2] = g_44[0][4];
                l_104 ^= 0x6AFEBA28L;
            }
        }
        else
        { 
            uint16_t l_127 = 9UL;
            return l_127;
        }
        if (p_30)
            continue;
    }
    l_101[0] = (g_47[0] = p_32);
    return l_101[0];
}



static union U1  func_33(struct S0  p_34, int32_t  p_35, int64_t  p_36, uint16_t  p_37)
{ 
    struct S0 l_45 = {0x8909L,0x934ECA66L,9L};
    uint64_t l_57 = 18446744073709551615UL;
    int32_t l_65[3];
    int16_t l_67[2];
    int i;
    for (i = 0; i < 3; i++)
        l_65[i] = 0xBC330632L;
    for (i = 0; i < 2; i++)
        l_67[i] = 0x3286L;
    g_44[0][2] = l_45;
    p_34.f2 |= ((g_46 = 0xEFCF3958L) , (((l_45.f1 , (l_45.f2 = ((g_44[2][2].f0 > (g_47[0] = l_45.f0)) >= p_34.f0))) > g_44[2][2].f1) , l_45.f1));
    for (p_35 = 3; (p_35 >= 0); p_35 -= 1)
    { 
        int8_t l_50 = (-1L);
        int32_t l_58 = 0xBDACABD1L;
        int32_t l_60 = 6L;
        int32_t l_61 = 0xECA80087L;
        int32_t l_63 = 4L;
        int32_t l_64[2][3][4] = {{{0xE1321855L,0xE1321855L,1L,0xE1321855L},{0xE1321855L,0x08C6EC2AL,0x08C6EC2AL,0xE1321855L},{0x08C6EC2AL,0xE1321855L,0x08C6EC2AL,0x08C6EC2AL}},{{0xE1321855L,0xE1321855L,1L,0xE1321855L},{0xE1321855L,0x08C6EC2AL,0x08C6EC2AL,0xE1321855L},{0x08C6EC2AL,0xE1321855L,0x08C6EC2AL,0x08C6EC2AL}}};
        int i, j, k;
        if (((((safe_rshift_func_uint16_t_u_u(l_50, 12)) > ((((((((safe_add_func_int8_t_s_s((l_58 = (safe_div_func_int64_t_s_s((l_57 , l_45.f1), ((l_45.f2 , l_50) , g_44[2][2].f2)))), 247UL)) <= 0x5FBD26DA6125F897LL) <= 2UL) && l_50) ^ p_36) != 0L) & (-1L)) ^ g_44[2][2].f0)) && 6L) , p_34.f2))
        { 
            g_47[0] = g_19;
        }
        else
        { 
            int64_t l_59 = 0L;
            int32_t l_62 = (-3L);
            int32_t l_66 = 0xDC9FF6DEL;
            int8_t l_68 = 0x55L;
            uint8_t l_69 = 0x4FL;
            l_69++;
            if (p_34.f1)
                continue;
        }
        for (l_57 = 0; (l_57 <= 0); l_57 += 1)
        { 
            union U1 l_72 = {4294967289UL};
            int i;
            for (l_45.f0 = 0; (l_45.f0 <= 3); l_45.f0 += 1)
            { 
                return l_72;
            }
            if (g_47[l_57])
                break;
        }
    }
    return g_73;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_44[i][j].f0, "g_44[i][j].f0", print_hash_value);
            transparent_crc(g_44[i][j].f1, "g_44[i][j].f1", print_hash_value);
            transparent_crc(g_44[i][j].f2, "g_44[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
