// SPDX-License-Identifier: MIT
// cctest_csmith_b75c62ef.c --- cctest case csmith_b75c62ef (csmith seed 3076285167)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcf70333a */

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

// Options:   -s 3076285167 -o /tmp/csmith_gen_2bxlt5z4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
};

struct S1 {
   const uint16_t  f0;
};

union U2 {
   uint64_t  f0;
   uint8_t  f1;
};


static int32_t g_2 = (-1L);
static int32_t g_50 = 0xF7A2D47EL;
static int32_t g_53 = 0x196ADD89L;
static uint8_t g_54 = 0xD5L;
static int16_t g_88 = 0xE043L;
static uint64_t g_89 = 0x9FEC4F7CDB24405CLL;
static struct S0 g_128 = {1UL};
static uint32_t g_131 = 0x91A53EA2L;
static uint32_t g_152 = 3UL;
static union U2 g_155 = {0x6E4BE99D4396DDFFLL};
static uint8_t g_175 = 0UL;
static uint16_t g_191 = 65534UL;
static uint32_t g_246 = 0xEA92DACDL;
static int8_t g_254 = (-1L);
static uint64_t g_255 = 4UL;



static int32_t  func_1(void);
static uint16_t  func_11(union U2  p_12, const uint32_t  p_13, struct S1  p_14, uint32_t  p_15);
static union U2  func_16(struct S1  p_17, int64_t  p_18, int64_t  p_19, int32_t  p_20);
static int32_t  func_25(uint32_t  p_26, int32_t  p_27);




static int32_t  func_1(void)
{ 
    struct S1 l_21[3] = {{1UL},{1UL},{1UL}};
    int8_t l_157 = 0x34L;
    int i;
    for (g_2 = 0; (g_2 > 15); g_2 = safe_add_func_uint32_t_u_u(g_2, 5))
    { 
        uint16_t l_5 = 0UL;
        int64_t l_8 = 1L;
        struct S1 l_156[4] = {{65530UL},{65530UL},{65530UL},{65530UL}};
        int32_t l_235 = 4L;
        uint32_t l_237 = 0UL;
        uint16_t l_239 = 0xDA06L;
        int64_t l_253 = 0x3064252A57B08C67LL;
        int i;
        if (g_2)
        { 
            ++l_5;
            if (l_8)
                continue;
        }
        else
        { 
            int32_t l_24[3][3][2] = {{{0xA2F3817DL,0xA2F3817DL},{0x403CA955L,0xA2F3817DL},{0xA2F3817DL,0x403CA955L}},{{0xA2F3817DL,0xA2F3817DL},{0x403CA955L,0xA2F3817DL},{0xA2F3817DL,0x403CA955L}},{{0xA2F3817DL,0xA2F3817DL},{0x403CA955L,0xA2F3817DL},{0xA2F3817DL,0x403CA955L}}};
            uint32_t l_238 = 18446744073709551615UL;
            struct S0 l_244 = {0x767DL};
            int i, j, k;
            if ((safe_sub_func_uint16_t_u_u(func_11((g_155 = (g_2 , func_16(l_21[2], (((safe_add_func_int8_t_s_s(g_2, (-9L))) <= 1L) == 0xF204L), g_2, l_24[0][2][1]))), l_21[2].f0, l_156[1], l_157), g_2)))
            { 
                int32_t l_236 = 0xE894D084L;
                l_239 ^= (l_238 |= (safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(0xD3D9L, 1)) <= (((g_155.f0 > ((((safe_unary_minus_func_uint64_t_u(((l_235 = 0x98EEF55BL) <= l_236))) <= l_8) <= g_191) ^ 0x37C675B0FBB6A005LL)) || l_237) >= 0x8F7EL)), 0xED94E99174BE7567LL)), 18446744073709551613UL)));
                g_50 &= (safe_rshift_func_uint16_t_u_s(l_237, (safe_lshift_func_int8_t_s_u((l_24[0][2][1] = (l_236 = (l_24[0][2][1] <= g_128.f0))), 1))));
                if (g_175)
                    break;
            }
            else
            { 
                int32_t l_245[5][5] = {{3L,0xB52631F3L,0xA12AFED2L,0xB52631F3L,3L},{1L,8L,0x4DB81D23L,0x69CED32FL,8L},{3L,0x4DB81D23L,0x4DB81D23L,3L,0x69CED32FL},{0xB52631F3L,3L,0xA12AFED2L,8L,8L},{1L,0x4DB81D23L,0x8CBA6C98L,1L,0x4DB81D23L}};
                int i, j;
                g_128 = l_244;
                g_246++;
            }
            g_50 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(9UL, (-9L))), 0));
            ++g_255;
        }
    }
    return g_155.f0;
}



static uint16_t  func_11(union U2  p_12, const uint32_t  p_13, struct S1  p_14, uint32_t  p_15)
{ 
    uint32_t l_158 = 0xF9E1A8ADL;
    int32_t l_170 = 0x3FE24BE3L;
    int32_t l_187[5] = {0x8BA9382BL,0x8BA9382BL,0x8BA9382BL,0x8BA9382BL,0x8BA9382BL};
    int32_t l_188 = (-4L);
    uint16_t l_202 = 0x1C8DL;
    struct S1 l_222 = {65532UL};
    int i;
    g_50 &= l_158;
    if ((((safe_sub_func_uint64_t_u_u(1UL, (safe_rshift_func_int16_t_s_s(l_158, 15)))) , (g_50 , ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(0UL, 0x38E8L)), 13)) > 0x46L))) > l_158))
    { 
        uint32_t l_167 = 1UL;
        return l_167;
    }
    else
    { 
        uint32_t l_173[3];
        int32_t l_174 = 1L;
        uint64_t l_190 = 0x3B9DB78BF6E46630LL;
        union U2 l_215[2][3][2] = {{{{0xB2FC288D6F10EB15LL},{0xB2FC288D6F10EB15LL}},{{0x5D78F82581418936LL},{0xB2FC288D6F10EB15LL}},{{0xB2FC288D6F10EB15LL},{0x5D78F82581418936LL}}},{{{0xB2FC288D6F10EB15LL},{0xB2FC288D6F10EB15LL}},{{0x5D78F82581418936LL},{0xB2FC288D6F10EB15LL}},{{0xB2FC288D6F10EB15LL},{0x5D78F82581418936LL}}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_173[i] = 4UL;
lbl_178:
        g_175 |= (g_152 >= ((g_50 = (safe_div_func_int16_t_s_s((l_170 = (g_155.f1 , l_158)), (l_174 = ((safe_lshift_func_int8_t_s_s(1L, l_173[1])) & (-1L)))))) != g_89));
        for (g_50 = 0; (g_50 <= (-30)); g_50 = safe_sub_func_uint64_t_u_u(g_50, 6))
        { 
            int8_t l_189[1];
            int i;
            for (i = 0; i < 1; i++)
                l_189[i] = 9L;
            if (g_89)
                goto lbl_178;
            g_191 = (((0x8FB2D7326E483898LL == ((l_189[0] = (g_155.f1 < (safe_sub_func_int8_t_s_s((((l_188 = (safe_add_func_uint32_t_u_u(((250UL & (l_187[0] = (safe_div_func_uint64_t_u_u((l_170 |= (safe_add_func_uint64_t_u_u((g_89 , p_15), (-5L)))), 0x4E00C6155EFB0F27LL)))) , 1UL), p_12.f1))) & p_13) & 7UL), 0x59L)))) >= l_158)) >= 0x56D7E5A20DB3BB4DLL) != l_190);
        }
        if ((!((safe_sub_func_int16_t_s_s(g_50, (+(safe_div_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(((((g_131 > l_174) != (safe_div_func_int8_t_s_s(((p_12.f1 <= 0x62L) >= 1UL), p_12.f0))) & 0L) | 0x4EL), g_191)) ^ g_53) || l_202) == l_187[0]), g_155.f1))))) | l_170)))
        { 
            int32_t l_205 = 1L;
            l_188 = (((safe_div_func_uint64_t_u_u((--g_89), l_174)) & l_187[0]) , (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((((!(safe_sub_func_uint16_t_u_u((l_215[1][1][1] , l_174), p_13))) < 0xE8L) & 1UL) | g_152) >= 0xDFF1B346795E0524LL) != l_158), g_155.f1)), 7)));
        }
        else
        { 
            int32_t l_225 = 1L;
            g_50 |= (((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((p_14 , (safe_sub_func_int64_t_s_s(((l_222 , (safe_add_func_int32_t_s_s(((((l_187[1] = 0x5E22557AL) , 65527UL) | p_15) , l_173[1]), p_14.f0))) <= p_12.f0), g_131))), 4)) , 0x2FL), 4)) ^ l_225) == l_225);
            for (g_88 = 2; (g_88 >= 0); g_88 -= 1)
            { 
                int i;
                return l_173[g_88];
            }
            for (g_54 = 28; (g_54 <= 17); g_54--)
            { 
                if (l_158)
                    break;
            }
        }
    }
    return p_12.f1;
}



static union U2  func_16(struct S1  p_17, int64_t  p_18, int64_t  p_19, int32_t  p_20)
{ 
    int16_t l_35 = 0x976BL;
    int32_t l_135 = 0xC3D1A69EL;
    int32_t l_136 = 0x8604516BL;
    uint8_t l_143 = 254UL;
    l_136 = (l_135 = (p_18 , func_25(((safe_rshift_func_uint16_t_u_s((!((safe_mul_func_int16_t_s_s(0xB9C6L, (safe_lshift_func_uint16_t_u_u(g_2, 0)))) >= ((((l_35 >= l_35) , g_2) < 1UL) <= 0xD7L))), l_35)) <= 1L), p_18)));
    if (g_131)
        goto lbl_153;
lbl_153:
    l_136 = (safe_add_func_uint64_t_u_u((g_89++), (safe_rshift_func_uint16_t_u_s(((((l_135 |= l_143) ^ ((((((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((g_54 ^= p_18) < (g_152 &= (1UL || (g_50 | l_35)))), 1)) > l_136), 2L)), l_35)), 1)) | l_136) , 0UL) <= l_136) >= 0x937D7650L) & 0UL) > 0x338A2FE6L) & l_136)) ^ l_35) , 0x0E94L), 8))));
    l_136 = (l_35 > (!l_35));
    return g_155;
}



static int32_t  func_25(uint32_t  p_26, int32_t  p_27)
{ 
    int16_t l_38 = 0L;
    int32_t l_43 = 4L;
    int32_t l_45 = 0x20F90F5FL;
    int32_t l_46 = 0xE0133D49L;
    int32_t l_49 = 1L;
    int32_t l_51 = 0L;
    union U2 l_68 = {0x1394407742427020LL};
    int32_t l_69 = 0x2D7FAEFFL;
    struct S1 l_95[5][5][2] = {{{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}}},{{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}}},{{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}}},{{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}}},{{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}},{{0x0281L},{0x0281L}}}};
    struct S0 l_130 = {0x6E46L};
    int32_t l_134 = 0L;
    int i, j, k;
    if (g_2)
    { 
        int8_t l_44 = 6L;
        int32_t l_47 = 0x7977F45AL;
        int32_t l_48 = 0x6BA05392L;
        int32_t l_52 = 0x409EF321L;
        l_43 = (safe_mul_func_uint16_t_u_u(g_2, ((l_38 & 0xAD22L) | (safe_add_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((0L == p_27), p_27)) && p_26) <= 0xD8L), 1UL)))));
lbl_87:
        g_54++;
        if ((g_50 = ((6L | (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(g_50, (((((~((safe_mul_func_uint8_t_u_u((l_68 , p_26), l_51)) != p_27)) || l_51) != g_53) < l_45) < p_26))), 15)) || g_53), g_50)) , 0xDEL), l_51))) > l_69)))
        { 
            uint8_t l_86 = 0x26L;
            if ((((((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((((!(+g_53)) & (((safe_lshift_func_int8_t_s_u(((((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_47 = g_50), (safe_rshift_func_int8_t_s_u((p_26 == p_26), 3)))), p_27)) != 4294967295UL) <= 4UL) & p_27), 3)) , g_50) , p_26)) && 0x9AL) & l_86), 3)), l_48)) ^ p_27), 12)) & l_86) & 0x3892EBBAL) <= g_53) | p_27))
            { 
                if (p_27)
                    goto lbl_87;
                g_89++;
            }
            else
            { 
                p_27 = l_47;
                return g_2;
            }
        }
        else
        { 
            struct S0 l_92 = {0xC6B8L};
            g_50 = (l_92 , ((p_26 && (((0xE4505BCAL ^ (safe_sub_func_uint64_t_u_u((l_95[4][1][0] , l_92.f0), 0xFFE0AB02DA2EA94ALL))) || l_52) && l_68.f0)) , l_69));
            for (l_51 = 0; (l_51 != 20); ++l_51)
            { 
                if (g_54)
                    goto lbl_87;
            }
        }
    }
    else
    { 
        int64_t l_100[1][1];
        int32_t l_127 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_100[i][j] = 0x715E5E7DF30550D7LL;
        }
        for (l_49 = (-14); (l_49 >= 12); l_49 = safe_add_func_uint8_t_u_u(l_49, 6))
        { 
            uint16_t l_129[3][3][2] = {{{0xC792L,0xC792L},{0xC792L,0xC792L},{0xC792L,0xC792L}},{{0xC792L,0xC792L},{0xC792L,0xC792L},{0xC792L,0xC792L}},{{0xC792L,0xC792L},{0xC792L,0xC792L},{0xC792L,0xC792L}}};
            int i, j, k;
            if (l_100[0][0])
                break;
            for (g_50 = 0; (g_50 >= 0); g_50 -= 1)
            { 
                int i, j;
                l_130 = ((safe_sub_func_int32_t_s_s((-1L), (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x8EF6L, (safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((l_100[g_50][g_50] > (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((safe_div_func_int16_t_s_s(l_127, p_26)) , g_128) , l_129[2][1][0]), g_89)), l_129[2][1][0])), g_2)), l_38))) , l_129[1][1][1]), l_129[2][1][0])), g_53)))), p_27)), g_50)), 3)), (-1L))))) , g_128);
                return l_43;
            }
        }
        g_131--;
    }
    return l_134;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f1, "g_155.f1", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
