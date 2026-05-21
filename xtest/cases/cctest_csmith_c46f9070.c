// SPDX-License-Identifier: MIT
// cctest_csmith_c46f9070.c --- cctest case csmith_c46f9070 (csmith seed 3295645808)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfde2f30d */

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

// Options:   -s 3295645808 -o /tmp/csmith_gen_swcatan1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
};

struct S1 {
   const uint32_t  f0;
   uint16_t  f1;
   const int16_t  f2;
   int32_t  f3;
   uint32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint64_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const uint32_t  f0;
   int64_t  f1;
   int8_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   uint16_t  f0;
   struct S1  f1;
   uint64_t  f2;
   uint32_t  f3;
   const int8_t  f4;
   const struct S3  f5;
};
#pragma pack(pop)

union U5 {
   uint32_t  f0;
   uint8_t  f1;
   struct S4  f2;
};


static int32_t g_3 = 1L;
static int32_t g_4 = 0xD409884CL;
static uint32_t g_54 = 4294967295UL;
static struct S0 g_64 = {0x39FA4EE4B4BC0730LL};
static int64_t g_78 = 0L;
static int64_t g_85 = 0x313FE16D896CD2A5LL;
static int8_t g_86 = 1L;
static int16_t g_88[5][2] = {{0x24A0L,0x24A0L},{0x24A0L,0x24A0L},{0x24A0L,0x24A0L},{0x24A0L,0x24A0L},{0x24A0L,0x24A0L}};
static uint64_t g_91 = 18446744073709551615UL;
static int32_t g_114 = 0xE5B6355DL;
static int8_t g_116 = 0xE3L;
static int32_t g_137[3][4] = {{0xDDF18D08L,0xDDF18D08L,0xDDF18D08L,0xDDF18D08L},{0xDDF18D08L,0xDDF18D08L,0xDDF18D08L,0xDDF18D08L},{0xDDF18D08L,0xDDF18D08L,0xDDF18D08L,0xDDF18D08L}};
static int32_t g_138 = (-10L);
static uint16_t g_164[2] = {4UL,4UL};
static struct S3 g_167 = {0x902EFDF3L,0xC3D107391EF432E6LL,0xC3L};
static struct S1 g_286 = {4294967290UL,1UL,0x5ADFL,8L,0UL};
static uint64_t g_339 = 5UL;
static uint32_t g_368 = 18446744073709551615UL;
static struct S2 g_385 = {0xF16FDA17503E69EFLL,1L};



static struct S1  func_1(void);
static struct S0  func_6(uint32_t  p_7, uint32_t  p_8, uint8_t  p_9, uint16_t  p_10, uint32_t  p_11);
static int32_t  func_20(uint64_t  p_21, union U5  p_22, int32_t  p_23, uint32_t  p_24, struct S1  p_25);
static union U5  func_27(int8_t  p_28, uint8_t  p_29, const union U5  p_30);




static struct S1  func_1(void)
{ 
    int32_t l_2[5][1];
    int16_t l_369[1][1];
    int32_t l_370 = 0x76B3C505L;
    int32_t l_415 = 0L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = 0x2DAFBBD0L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_369[i][j] = 1L;
    }
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        uint64_t l_5[5][1] = {{0x7B7E80D68F985589LL},{18446744073709551614UL},{0x7B7E80D68F985589LL},{18446744073709551614UL},{0x7B7E80D68F985589LL}};
        int32_t l_15 = 0L;
        int32_t l_366 = 0xEA96E3C9L;
        uint32_t l_367 = 4294967295UL;
        union U5 l_381 = {0UL};
        uint32_t l_386 = 18446744073709551615UL;
        int i, j;
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        { 
            int32_t l_14 = 0x79D44F4CL;
            uint8_t l_16 = 255UL;
            int16_t l_17 = 0xF4E5L;
            int32_t l_353[1];
            struct S1 l_354 = {0xC19D5F81L,0x4909L,5L,0x76593AE9L,0UL};
            int i;
            for (i = 0; i < 1; i++)
                l_353[i] = 0xC1B61811L;
            if ((l_5[2][0] != g_4))
            { 
                uint32_t l_352[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_352[i] = 5UL;
                l_353[0] = ((((g_4 && ((func_6((safe_mul_func_uint16_t_u_u(((l_15 = l_14) < (((l_16 > l_17) , 8UL) || (-6L))), l_17)), g_4, l_5[4][0], g_4, g_4) , g_167) , g_86)) > 0x2D703F634CE5A61ALL) < l_352[1]) , l_2[0][0]);
                return l_354;
            }
            else
            { 
                l_353[0] &= g_116;
                g_114 = ((l_5[3][0] != ((safe_mod_func_uint8_t_u_u(1UL, ((((g_114 , (safe_mod_func_int64_t_s_s(0xE8ED091B6409F750LL, l_2[0][0]))) | 0xC309L) < 18446744073709551610UL) | 0x6AF9L))) & g_78)) <= g_86);
            }
            l_354.f3 &= 0x38B602A2L;
        }
        for (g_54 = 0; (g_54 <= 0); g_54 += 1)
        { 
            int32_t l_365 = 0xF59CEDBFL;
            g_114 &= 0L;
            l_370 ^= ((g_368 |= (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((g_3 <= (((l_15 < (safe_mod_func_int64_t_s_s(((((((l_366 = ((l_2[2][0] , l_365) > g_88[2][1])) ^ 18446744073709551611UL) && g_164[0]) == l_367) >= (-1L)) < l_365), l_365))) || 0xEECEL) || l_367)) | l_5[2][0]), g_91)), 15))) ^ l_369[0][0]);
        }
        for (l_366 = 0; (l_366 >= 0); l_366 -= 1)
        { 
            g_137[0][2] = (safe_add_func_uint64_t_u_u(l_2[2][0], l_369[0][0]));
            for (g_114 = 0; (g_114 <= 0); g_114 += 1)
            { 
                int i, j;
                g_137[0][2] = g_137[(g_114 + 2)][(g_3 + 3)];
            }
        }
        for (g_138 = 0; (g_138 <= 0); g_138 += 1)
        { 
            int32_t l_384 = 0xE14E08D8L;
            int32_t l_405[3];
            uint32_t l_406 = 0UL;
            int i;
            for (i = 0; i < 3; i++)
                l_405[i] = 0x3492D31BL;
            l_370 = (safe_mul_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_2[0][0] == ((safe_rshift_func_int16_t_s_u((l_381 , ((((((safe_div_func_int32_t_s_s((((g_137[1][1] & l_369[0][0]) <= 0x79L) <= l_5[1][0]), 0xB54FA31EL)) && l_384) >= l_384) != l_384) , g_385) , (-1L))), 7)) == 0x2D39L)), l_386)), g_114)) & 0xEB192F12L) && l_2[0][0]), g_385.f0));
            for (g_167.f2 = 0; (g_167.f2 <= 0); g_167.f2 += 1)
            { 
                int32_t l_404[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_404[i] = 0xF38F014CL;
                if (g_4)
                    break;
                l_405[2] ^= (((((safe_sub_func_int64_t_s_s(g_3, ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((+((((safe_add_func_int8_t_s_s((l_369[0][0] > (safe_mul_func_uint16_t_u_u(((((-9L) < (g_91 , g_286.f4)) ^ l_367) <= g_138), (-4L)))), 0xD9L)) ^ (-1L)) || g_286.f4) & 0UL)), (-7L))) && g_78), 0L)), g_88[4][0])) > g_286.f0) | g_286.f0) > g_385.f1) <= l_5[2][0]) , g_3), l_404[3])), l_404[3])) != g_54))) == 0x1DB9A225L) | l_404[3]) && l_15) == g_286.f4);
            }
            for (g_91 = 0; (g_91 <= 0); g_91 += 1)
            { 
                int i;
                l_406--;
                if (l_405[g_138])
                    break;
                l_415 = (((l_405[g_91] <= ((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((+(-1L)), 0xDF73L)), (((!((g_114 && g_286.f2) > g_64.f0)) <= g_286.f2) || 0x8723L))) | l_5[2][0])) && l_405[g_91]) != l_405[g_138]);
            }
        }
    }
    g_64 = (g_385 , g_64);
    l_370 = (0x4DL | (safe_sub_func_uint8_t_u_u(((-6L) && g_88[2][0]), (safe_unary_minus_func_int16_t_s(((safe_sub_func_uint8_t_u_u((((+((-2L) ^ 1L)) | 0x12E4L) , l_369[0][0]), 0L)) & 0x61A78C10L))))));
    return g_286;
}



static struct S0  func_6(uint32_t  p_7, uint32_t  p_8, uint8_t  p_9, uint16_t  p_10, uint32_t  p_11)
{ 
    int8_t l_26 = 0x8DL;
    struct S1 l_165 = {0xAD123397L,1UL,0x7A91L,-4L,0x7F79E9FFL};
    int32_t l_343 = 0xE0EA1205L;
    int32_t l_345 = 0x7E7C0EF8L;
    int32_t l_346[1][5] = {{9L,9L,9L,9L,9L}};
    struct S0 l_351[1][3] = {{{0xB5D2E638051BDCD4LL},{0xB5D2E638051BDCD4LL},{0xB5D2E638051BDCD4LL}}};
    int i, j;
    for (p_8 = 13; (p_8 != 37); p_8 = safe_add_func_int64_t_s_s(p_8, 6))
    { 
        const union U5 l_31 = {0UL};
        int32_t l_340 = 1L;
        int32_t l_341 = 0xD4C5296EL;
        int32_t l_342 = (-6L);
        int32_t l_344[4][5][4] = {{{0x6769E6BEL,0xE9977FC4L,0x6769E6BEL,9L},{(-1L),0x86482958L,0xDB6F072EL,1L},{0xE1BA1B34L,0x6C565AADL,1L,1L},{0x28862067L,(-1L),1L,1L},{0x4FBEF737L,(-8L),(-1L),0xAC3D0BC4L}},{{0x81DE1086L,0x6769E6BEL,0x86482958L,0x4FBEF737L},{0x86482958L,0x4FBEF737L,0x4A71829DL,0x56F46021L},{0x8AA7565DL,1L,1L,0x8AA7565DL},{1L,0x7C1FB03AL,0x81DE1086L,0xA2F6E2ABL},{(-5L),0x4A71829DL,0x8AA7565DL,0x6769E6BEL}},{{0x6C565AADL,9L,0x4FBEF737L,0x6769E6BEL},{0xDB6F072EL,0x4A71829DL,0x89612D35L,0xA2F6E2ABL},{1L,0x7C1FB03AL,0xDB6F072EL,0x8AA7565DL},{0x62C1F02BL,1L,0xA0499970L,0x56F46021L},{(-1L),0x4FBEF737L,(-1L),0x4FBEF737L}},{{0xE9977FC4L,0x6769E6BEL,9L,0xAC3D0BC4L},{0L,(-8L),0xAC3D0BC4L,1L},{0x56F46021L,(-1L),0x6769E6BEL,1L},{0x56F46021L,0x6C565AADL,0xAC3D0BC4L,0L},{0L,1L,9L,0x62C1F02BL}}};
        uint32_t l_347 = 0xC5A9C8A4L;
        int i, j, k;
        g_339 &= func_20(l_26, func_27(p_7, g_4, l_31), p_7, l_31.f1, l_165);
        ++l_347;
    }
    for (g_78 = 0; (g_78 <= 0); g_78 += 1)
    { 
        struct S0 l_350 = {1UL};
        return l_350;
    }
    l_351[0][0] = l_351[0][0];
    return l_351[0][2];
}



static int32_t  func_20(uint64_t  p_21, union U5  p_22, int32_t  p_23, uint32_t  p_24, struct S1  p_25)
{ 
    int16_t l_168 = 0x84BFL;
    struct S3 l_169 = {0xE37CC862L,0x96CBFF400B975996LL,-2L};
    struct S0 l_171 = {0x67537B090339252ELL};
    int32_t l_194 = 0L;
    int32_t l_239 = 1L;
    struct S2 l_266 = {0x8B1DD971F16EABE1LL,-1L};
    int8_t l_267 = 3L;
    int32_t l_270 = (-7L);
    int32_t l_271 = (-7L);
    int32_t l_272 = 5L;
    int32_t l_273 = 1L;
    int32_t l_274 = 4L;
    int32_t l_275[1][3];
    int16_t l_276 = 9L;
    int32_t l_277 = 0L;
    uint8_t l_279 = 0UL;
    int16_t l_325 = 0xF6DFL;
    uint8_t l_338 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_275[i][j] = 0xF908FA46L;
    }
    if ((~(1L > (g_167 , ((((l_168 < ((l_169 , 0x3AL) == p_25.f4)) & g_64.f0) , 0x355AL) >= g_64.f0)))))
    { 
        struct S0 l_170 = {0xE041843AEAE04394LL};
        int32_t l_181 = 0x4A7757DAL;
        l_171 = l_170;
        for (p_22.f2.f1.f1 = 13; (p_22.f2.f1.f1 == 6); --p_22.f2.f1.f1)
        { 
            l_181 = (g_167.f1 , (p_25.f3 = ((safe_unary_minus_func_int8_t_s(((g_116 <= (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(p_25.f1, (safe_sub_func_int16_t_s_s((l_170.f0 & 1UL), 0xB109L)))) || g_137[2][3]), 4))) , p_25.f0))) >= 0x6259L)));
            for (g_78 = 1; (g_78 >= 0); g_78 -= 1)
            { 
                int i, j;
                p_23 = ((g_164[g_78] = (((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_164[g_78], g_88[(g_78 + 3)][g_78])) , (9L < ((l_181 = 0x78B9L) == g_88[(g_78 + 3)][g_78]))), 12)) >= 0xA9EB16ADL) >= l_170.f0) > p_25.f1), 0x2820L)) != 0UL), 8)), l_170.f0)) != g_164[1]) != g_3)) && g_164[0]);
            }
        }
    }
    else
    { 
        uint8_t l_195 = 4UL;
        const int32_t l_240 = 0x57C2B75BL;
        struct S4 l_241 = {0xC521L,{0x2DAD5565L,0UL,0xFFF5L,0x306404F5L,0x2883F161L},0xF2DE5E56C9CEF6D5LL,0x8A1B903DL,0L,{4294967287UL,0x1E5A38FE637BB388LL,1L}};
        if ((safe_lshift_func_int8_t_s_s(l_194, 1)))
        { 
            for (g_54 = 0; g_54 < 5; g_54 += 1)
            {
                for (g_91 = 0; g_91 < 2; g_91 += 1)
                {
                    g_88[g_54][g_91] = 0xACD4L;
                }
            }
            return l_195;
        }
        else
        { 
            uint8_t l_198[3][1][3];
            uint32_t l_203 = 0xA1A6AEE2L;
            int32_t l_260[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_198[i][j][k] = 246UL;
                }
            }
            for (i = 0; i < 3; i++)
                l_260[i] = 8L;
            if (((l_169.f1 != (((0x18L || ((l_195 == (0x13L && 1UL)) >= g_138)) != 0xFFDF36518EE95946LL) || l_198[0][0][0])) <= g_164[0]))
            { 
                uint32_t l_212 = 1UL;
                g_138 = (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_203 < g_167.f2), ((safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((((65530UL != (safe_rshift_func_int8_t_s_u(g_88[4][0], l_203))) >= 0UL) >= g_116) ^ g_85) | 1L), p_22.f0)) >= l_169.f1), 0x8BC3L)) != (-1L)), p_22.f0)) && l_212))), g_86));
            }
            else
            { 
                struct S0 l_213 = {0x7A575B735C5DC2C4LL};
                int32_t l_214 = (-1L);
                struct S2 l_226 = {5UL,1L};
                l_213 = g_64;
                l_214 = (-4L);
                p_23 = (g_137[0][2] = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((g_54 = (safe_sub_func_uint64_t_u_u((!(((((safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u(((((l_226 , (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_25.f0, ((p_25.f2 < (p_22.f0 = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_239 ^= (g_116 |= (p_25.f0 , p_22.f0))), 0x27L)), 0x8159L)), 0)), 11)) >= 1L))) , g_54))), l_240))) <= p_25.f1) , l_241) , l_203), p_24)) > l_169.f2), 6)) >= 0xCA76L) >= p_25.f4) >= g_164[0]) | p_25.f0)), 18446744073709551608UL))) , 0x1AB0926F43121853LL), l_226.f1)), 3)) || p_25.f1));
            }
            for (p_24 = 0; (p_24 <= 2); p_24 += 1)
            { 
                uint64_t l_248 = 0x33C69A03E547229BLL;
                int32_t l_256 = 1L;
                int32_t l_259 = (-1L);
                int32_t l_261[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_261[i] = (-5L);
                g_137[2][0] |= (g_164[1] , ((((((((((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(18446744073709551612UL, ((g_88[4][0] = ((safe_mod_func_int16_t_s_s(g_86, p_21)) || g_91)) && p_22.f0))) , p_23), 0x3EL)) > 0xDDL) && l_203) <= g_85) , 0UL) & 0x053BL) < g_3) | l_248) > g_85) <= l_241.f1.f3));
                if (l_240)
                    continue;
                l_261[1] = (l_260[1] |= (g_167 , (+(safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(l_239, (l_259 |= (((safe_add_func_uint16_t_u_u((l_256 = p_25.f2), (safe_div_func_uint64_t_u_u((8UL > l_248), 0x81322219A26B157ELL)))) | l_169.f1) > 0x23L)))) != 0UL), p_22.f0)))));
            }
            return l_198[0][0][2];
        }
    }
    if (((l_169.f1 < ((--g_54) < g_167.f1)) == (((l_266 , p_25.f0) | g_167.f1) == l_267)))
    { 
        int32_t l_268[1];
        int32_t l_269[1];
        int16_t l_278 = 7L;
        int i;
        for (i = 0; i < 1; i++)
            l_268[i] = 0x947E1C72L;
        for (i = 0; i < 1; i++)
            l_269[i] = (-1L);
        l_279++;
    }
    else
    { 
        int8_t l_297[2];
        int64_t l_298 = (-3L);
        int i;
        for (i = 0; i < 2; i++)
            l_297[i] = 1L;
        for (l_273 = 0; (l_273 <= 19); l_273++)
        { 
            int16_t l_315 = 0L;
            int32_t l_326 = 6L;
            g_137[0][2] |= ((((safe_add_func_uint8_t_u_u((g_286 , (safe_mod_func_uint64_t_u_u(((g_114 < g_138) ^ (((((safe_mul_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((safe_div_func_int32_t_s_s((0x332CL == g_114), g_86)) == p_22.f1) < l_297[1]) > p_25.f0), 0UL)), g_286.f4)) , 0x9D325313L) > 1UL) , 0x6515L), l_298)) <= 0x9CE884C05448FBCCLL) <= (-1L)) < 1UL) , g_167.f2)), g_86))), p_25.f2)) < p_25.f0) != 18446744073709551607UL) && 255UL);
            for (g_286.f3 = (-20); (g_286.f3 == 6); ++g_286.f3)
            { 
                int8_t l_314 = 0x9FL;
                g_138 ^= (safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(l_277, (l_315 = (safe_rshift_func_int8_t_s_u(p_25.f1, ((safe_lshift_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u(((!(l_314 && p_24)) ^ 0xF02EL), l_169.f0)) && 0xECE72C06L) > l_239) | g_167.f2), 10)) && 0xFA19F6DDL)))))), g_86)) != l_297[1]), p_22.f1));
            }
            if ((((l_272 = (g_88[4][0] ^= ((!0x4CL) | (((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(g_167.f2, (((((0xF67A6DE4L > (safe_sub_func_int64_t_s_s((g_167.f1 &= ((safe_sub_func_uint16_t_u_u(((l_325 > 1UL) > l_297[1]), l_315)) > p_23)), 0x75F6B8C41C65E760LL))) && l_266.f1) | p_25.f4) && p_25.f1) || g_164[0]))), l_326)) >= g_116) , g_137[0][1])))) <= l_326) <= g_167.f2))
            { 
                int32_t l_335 = 0x11F6C4FAL;
                p_23 ^= (safe_add_func_uint64_t_u_u(p_25.f3, (((((safe_add_func_uint32_t_u_u((((((p_22.f1 = 0xD5L) == (1UL != (((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((g_54 ^= ((((((l_297[1] < l_169.f2) , g_78) != 0xA8L) | 0x69L) , l_335) || 0xCE836181L)), p_25.f2)), l_168)) , l_335) > p_25.f4))) >= 0x0104L) < 18446744073709551611UL) | 0L), 1L)) ^ p_24) || 0x746BL) && 8UL) == l_270)));
                g_137[1][2] = (safe_rshift_func_uint8_t_u_s(g_137[0][2], 5));
            }
            else
            { 
                return l_338;
            }
        }
    }
    return p_21;
}



static union U5  func_27(int8_t  p_28, uint8_t  p_29, const union U5  p_30)
{ 
    struct S0 l_51 = {18446744073709551615UL};
    int32_t l_52 = 0xC37461BCL;
    int32_t l_53[3][2] = {{0xFF1DB06DL,0xFF1DB06DL},{0xFF1DB06DL,0xFF1DB06DL},{0xFF1DB06DL,0xFF1DB06DL}};
    int64_t l_103 = 0xFA35296D32418DFCLL;
    struct S1 l_113 = {0xEC2C21BEL,1UL,0xBB92L,0x5F0EF6F4L,0xFAC948D7L};
    int i, j;
    g_54 = (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(3L, (safe_add_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s((l_53[0][1] = (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((l_51 , (((g_4 > g_4) & p_29) || 251UL)), l_51.f0)), 0L)), p_30.f0)) == 18446744073709551614UL) ^ 0xA8L) != 0UL) || g_4), l_52)), l_51.f0))), l_52)))), 0UL)))), 1L));
    for (g_54 = 0; (g_54 > 3); g_54++)
    { 
        struct S4 l_82[2] = {{0x9C2DL,{0x6A127326L,65535UL,0L,-10L,0xE4E2CD5BL},1UL,18446744073709551608UL,1L,{4294967295UL,-2L,0L}},{0x9C2DL,{0x6A127326L,65535UL,0L,-10L,0xE4E2CD5BL},1UL,18446744073709551608UL,1L,{4294967295UL,-2L,0L}}};
        int32_t l_89 = (-1L);
        struct S4 l_112 = {0x4961L,{4294967292UL,65533UL,-1L,0x79EBF7ADL,0x520ED3B4L},0x35E97BC7E195E041LL,0UL,0L,{0xC35E3CEAL,0x76B16355718CB297LL,0x6EL}};
        int32_t l_115 = 5L;
        int i;
        for (l_51.f0 = 0; (l_51.f0 < 24); l_51.f0 = safe_add_func_uint32_t_u_u(l_51.f0, 3))
        { 
            uint16_t l_61[2];
            int32_t l_90 = 0x10918DDDL;
            int i;
            for (i = 0; i < 2; i++)
                l_61[i] = 0UL;
            if (((((safe_sub_func_int16_t_s_s(p_28, (l_61[1] <= (((((safe_add_func_int64_t_s_s(g_3, ((p_28 ^ l_61[1]) <= p_29))) && g_54) && g_4) < 5UL) <= l_61[1])))) > g_54) , g_64) , l_53[0][1]))
            { 
                l_53[0][1] &= (safe_add_func_uint8_t_u_u((!(((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_3, (safe_mod_func_uint16_t_u_u((g_78 |= (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((65535UL ^ g_3) || l_51.f0), 0xB1L)), p_29))), p_30.f0)))), l_61[1])) && 0xCAL) && l_52)), 0L));
                g_86 = (safe_rshift_func_int8_t_s_s(((+(g_85 = (l_82[0] , (1UL | (!(~l_82[0].f1.f3)))))) || l_61[1]), g_54));
            }
            else
            { 
                struct S0 l_87 = {1UL};
                l_87 = l_51;
                g_91++;
            }
            for (g_85 = (-14); (g_85 > 25); g_85 = safe_add_func_int64_t_s_s(g_85, 4))
            { 
                int8_t l_102[5][2] = {{4L,0x10L},{4L,0x10L},{4L,0x10L},{4L,0x10L},{4L,0x10L}};
                int i, j;
                l_90 = (safe_mul_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((p_28 >= ((p_28 != (safe_div_func_uint8_t_u_u((l_102[2][1] ^ 65535UL), l_82[0].f1.f0))) , g_4)) < g_78), l_102[1][0])) , l_61[1]) <= l_82[0].f5.f0), l_103));
            }
            g_116 = ((l_82[0].f1.f1 < ((g_114 = ((safe_div_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((((safe_div_func_int32_t_s_s(0L, (l_112 , (l_113 , 4294967292UL)))) | 0L) && 65529UL), g_86)), p_29)) | p_28), p_30.f1)) <= l_103)) <= l_115)) > p_29);
        }
        l_53[0][1] &= g_64.f0;
        g_114 ^= ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((g_78 >= g_85) > (+(((safe_mul_func_int16_t_s_s((l_112.f1 , g_91), (-7L))) != g_78) > 5UL))), 0xF3L)), l_113.f0)) <= g_116);
    }
    for (g_64.f0 = 0; (g_64.f0 <= 1); g_64.f0 += 1)
    { 
        struct S0 l_124[5][3] = {{{0x8413730F596B175DLL},{18446744073709551615UL},{0x8413730F596B175DLL}},{{18446744073709551607UL},{4UL},{18446744073709551607UL}},{{0x8413730F596B175DLL},{18446744073709551615UL},{0x8413730F596B175DLL}},{{18446744073709551607UL},{4UL},{18446744073709551607UL}},{{0x8413730F596B175DLL},{18446744073709551615UL},{0x8413730F596B175DLL}}};
        int32_t l_133[2];
        uint16_t l_146 = 0xD110L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_133[i] = 0xD1505295L;
        l_51 = l_124[1][1];
        for (l_51.f0 = 0; (l_51.f0 <= 1); l_51.f0 += 1)
        { 
            int32_t l_139 = 0xBD2F48C2L;
            int32_t l_143[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_143[i] = 0xEAABCA9CL;
            g_114 |= ((g_88[g_64.f0][g_64.f0] > (p_30.f0 , (safe_div_func_uint16_t_u_u(0x6382L, (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(g_78, 246UL)) , 65528UL), 6)), p_28)))))) && l_124[1][1].f0);
            for (l_113.f3 = 1; (l_113.f3 >= 0); l_113.f3 -= 1)
            { 
                uint32_t l_134 = 0xD3726BA7L;
                int32_t l_140 = (-10L);
                int32_t l_141 = (-1L);
                int32_t l_142 = (-2L);
                int32_t l_144 = 0x9D29D4CFL;
                int32_t l_145 = (-4L);
                l_134--;
                l_53[1][0] = (-1L);
                l_146--;
            }
        }
        for (g_85 = 0; (g_85 <= 1); g_85 += 1)
        { 
            int16_t l_151 = 0x911BL;
            int32_t l_152 = 0x17F8277DL;
            int i, j;
            for (g_138 = 0; (g_138 <= 1); g_138 += 1)
            { 
                int32_t l_149 = 9L;
                int32_t l_150[5][4] = {{(-8L),0xA82F6642L,0xA8138454L,0xA8138454L},{0x44EC9471L,0x44EC9471L,(-8L),0xA8138454L},{0x551692F6L,0xA82F6642L,0x551692F6L,(-8L)},{0x551692F6L,(-8L),(-8L),0x551692F6L},{0x44EC9471L,(-8L),0xA8138454L,(-8L)}};
                uint8_t l_153 = 0xA2L;
                int i, j;
                ++l_153;
            }
            l_113.f3 |= (safe_add_func_int8_t_s_s((g_116 = 0xD6L), (g_88[g_64.f0][g_64.f0] ^ (l_133[1] |= (safe_div_func_uint16_t_u_u((((((safe_mul_func_int8_t_s_s(((p_30.f0 == g_4) || (-4L)), p_29)) & 0UL) || p_29) == g_164[0]) > l_151), 65526UL))))));
        }
    }
    return p_30;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_137[i][j], "g_137[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_164[i], "g_164[i]", print_hash_value);

    }
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_167.f1, "g_167.f1", print_hash_value);
    transparent_crc(g_167.f2, "g_167.f2", print_hash_value);
    transparent_crc(g_286.f0, "g_286.f0", print_hash_value);
    transparent_crc(g_286.f1, "g_286.f1", print_hash_value);
    transparent_crc(g_286.f2, "g_286.f2", print_hash_value);
    transparent_crc(g_286.f3, "g_286.f3", print_hash_value);
    transparent_crc(g_286.f4, "g_286.f4", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_385.f0, "g_385.f0", print_hash_value);
    transparent_crc(g_385.f1, "g_385.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
