// SPDX-License-Identifier: MIT
// cctest_csmith_cc024f84.c --- cctest case csmith_cc024f84 (csmith seed 3422703492)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb1c666ce */

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

// Options:   -s 3422703492 -o /tmp/csmith_gen_r9nt8rso/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   const int32_t  f1;
   uint32_t  f2;
};

union U1 {
   int8_t  f0;
};

union U2 {
   int32_t  f0;
};

union U3 {
   uint32_t  f0;
};


static int32_t g_8 = 0x8F5F4990L;
static struct S0 g_9 = {0x30CC2FDCL,-2L,0xBA47C9D5L};
static union U3 g_11 = {0xDB39523DL};
static int32_t g_27 = 0x988F15EAL;
static uint32_t g_29 = 18446744073709551615UL;
static uint8_t g_37 = 255UL;
static int64_t g_62[5][1] = {{0x4044A2B86846FFD3LL},{0x76B3EC5F66244A88LL},{0x4044A2B86846FFD3LL},{0x76B3EC5F66244A88LL},{0x4044A2B86846FFD3LL}};
static int32_t g_77 = 1L;
static int64_t g_83 = 0xEF71A1F957098D29LL;
static int64_t g_98 = (-6L);
static int32_t g_99 = 0L;
static uint32_t g_100 = 18446744073709551608UL;
static int32_t g_114[4][2] = {{0x93D3ABD0L,0x93D3ABD0L},{0x93D3ABD0L,0x93D3ABD0L},{0x93D3ABD0L,0x93D3ABD0L},{0x93D3ABD0L,0x93D3ABD0L}};
static uint64_t g_124 = 1UL;
static union U1 g_149 = {0xF2L};
static uint8_t g_154 = 0xE2L;
static int32_t g_156 = 9L;



static uint32_t  func_1(void);
static int32_t  func_2(union U3  p_3);
static union U3  func_4(int8_t  p_5, struct S0  p_6);
static uint16_t  func_14(uint32_t  p_15, int32_t  p_16, uint16_t  p_17, int8_t  p_18);




static uint32_t  func_1(void)
{ 
    uint8_t l_7 = 0x97L;
    int32_t l_63 = (-1L);
    const union U3 l_76 = {1UL};
    union U2 l_78 = {0x892391BEL};
    int32_t l_117[1][2];
    int8_t l_127[1][4] = {{(-10L),(-10L),(-10L),(-10L)}};
    uint16_t l_132 = 0x9A48L;
    uint16_t l_159 = 65532UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_117[i][j] = 0x2F147413L;
    }
    if (func_2(func_4((g_8 = l_7), g_9)))
    { 
        uint16_t l_75 = 0xAB22L;
        int32_t l_85 = 0xE758ACF1L;
        int32_t l_115 = 0xBB15C064L;
        g_8 = (g_77 &= ((safe_mul_func_uint8_t_u_u((l_63 = g_62[2][0]), ((safe_div_func_uint8_t_u_u(0UL, (+0UL))) <= (safe_sub_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s((((((((safe_mod_func_int32_t_s_s((8L || l_75), g_11.f0)) , l_75) != 0L) == l_75) , l_76) , g_62[2][0]) , 0L), l_75)) >= g_37) == g_11.f0) | l_75), l_7)) , 0x68D5L) != g_8), g_29))))) & l_75));
        if (((l_78 , (safe_mod_func_int16_t_s_s((g_83 = (safe_add_func_int8_t_s_s(g_62[2][0], g_9.f2))), (l_85 &= ((+(g_9.f1 ^ l_75)) | 0xABL))))) | l_76.f0))
        { 
            g_8 = (-2L);
        }
        else
        { 
            uint8_t l_91 = 0xF1L;
            union U1 l_96 = {-9L};
            int32_t l_97 = 0x9EFC8E81L;
            int32_t l_113 = 0xD179B141L;
            int32_t l_116 = 8L;
            if (((safe_add_func_uint8_t_u_u((((4294967295UL | 1UL) && (safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s(l_91, ((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((l_96 , 0L), l_75)), l_75)) < l_7)))))) ^ l_78.f0), 0x6EL)) ^ (-1L)))
            { 
                int64_t l_111[2];
                int16_t l_112 = 0L;
                uint32_t l_118[5][4] = {{4294967295UL,4294967295UL,0x6465DC08L,4294967295UL},{0xB9F6B8F8L,4294967295UL,4294967295UL,0xB9F6B8F8L},{4294967295UL,0xB9F6B8F8L,4294967295UL,4294967291UL},{4294967295UL,4294967295UL,4294967295UL,0x6465DC08L},{0xB9F6B8F8L,4294967291UL,0x6465DC08L,0x6465DC08L}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_111[i] = 0x707C2336C4584B38LL;
                --g_100;
                g_99 |= ((+(((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((g_37 || l_75) | (~(2UL == (((65535UL & g_62[2][0]) > g_11.f0) || g_62[2][0])))) > l_91), l_111[1])), l_111[1])), 2)) , l_112) ^ g_9.f2)) != l_76.f0);
                l_118[1][0]++;
            }
            else
            { 
                uint32_t l_121 = 2UL;
                l_121 = 0x498758D7L;
            }
            return g_8;
        }
    }
    else
    { 
        int64_t l_130 = 0x662417AC5C07F419LL;
        int32_t l_143 = 0x6F3FE561L;
        int32_t l_155 = 2L;
        uint8_t l_158 = 0x79L;
        for (g_8 = (-16); (g_8 > 24); g_8 = safe_add_func_uint64_t_u_u(g_8, 3))
        { 
            int64_t l_134[3];
            int32_t l_135 = 7L;
            uint16_t l_142 = 1UL;
            int16_t l_153 = 0x636EL;
            int i;
            for (i = 0; i < 3; i++)
                l_134[i] = 0xE33F92C7F7F81C38LL;
            g_114[0][0] &= g_62[2][0];
            if (g_124)
            { 
                union U1 l_131 = {0x3EL};
                int8_t l_133[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_133[i] = 0L;
                g_99 ^= g_114[2][0];
                l_134[0] = (((g_98 || (l_63 <= (l_127[0][0] ^ ((((safe_add_func_int32_t_s_s((l_130 ^ (-1L)), 0xDD98C9EDL)) , l_131) , l_132) >= l_131.f0)))) & l_131.f0) , l_133[2]);
                l_143 = ((l_135 = g_8) <= ((safe_mod_func_uint16_t_u_u((g_62[2][0] ^ (((safe_div_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(0x0C60L, 65533UL)) || 0x3EA9617B476EADDFLL) , g_62[2][0]), l_133[2])) || g_124) < 1UL)), l_142)) & l_117[0][1]));
            }
            else
            { 
                union U2 l_148 = {0L};
                int32_t l_157 = 9L;
                l_63 = l_78.f0;
                l_158 = ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((l_148 , g_149) , ((l_157 = (g_149.f0 = ((l_148.f0 & (g_98 = (~(g_156 |= (l_155 ^= ((l_135 = (safe_mod_func_int64_t_s_s(((l_153 &= (l_143 = ((0xEEL >= g_124) != l_132))) ^ 0xDBF3L), g_154))) & g_8)))))) || 5L))) == l_134[0])), 0UL)), 0x86L)) < 0x698A3390C0CC138CLL);
                if (g_11.f0)
                    break;
            }
        }
        for (g_11.f0 = 0; g_11.f0 < 1; g_11.f0 += 1)
        {
            for (g_29 = 0; g_29 < 4; g_29 += 1)
            {
                l_127[g_11.f0][g_29] = 1L;
            }
        }
        ++l_159;
    }
    return g_83;
}



static int32_t  func_2(union U3  p_3)
{ 
    const struct S0 l_20 = {3UL,3L,0xD955A619L};
    int32_t l_21 = 1L;
    uint8_t l_28[1];
    union U3 l_40 = {0x0EC31937L};
    int64_t l_50 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_28[i] = 0x6AL;
    if ((safe_add_func_uint8_t_u_u((func_14(g_9.f0, (!p_3.f0), (l_20 , ((((l_21 = ((l_20.f2 | p_3.f0) > p_3.f0)) != p_3.f0) < g_9.f1) < l_20.f2)), l_20.f2) ^ p_3.f0), g_9.f1)))
    { 
        uint64_t l_32 = 0UL;
        l_21 = ((((-1L) ^ ((g_29 = l_28[0]) > (((0xD540778D402A53EBLL ^ (safe_mul_func_int16_t_s_s(((l_20.f2 ^ g_8) < 0xE9L), g_8))) , (-3L)) >= l_20.f0))) && l_32) == l_20.f1);
    }
    else
    { 
        int16_t l_35[1];
        int32_t l_36[3][1];
        int32_t l_48[3];
        int32_t l_49[1][4] = {{(-7L),(-7L),(-7L),(-7L)}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_35[i] = (-1L);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_36[i][j] = 0x6516035EL;
        }
        for (i = 0; i < 3; i++)
            l_48[i] = 0xB5B4C0DDL;
        l_21 = ((((safe_add_func_uint8_t_u_u((--g_37), (l_40 , (safe_lshift_func_uint16_t_u_s(((p_3.f0 >= ((l_50 |= ((!(((l_49[0][1] &= (l_36[0][0] = ((((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_28[0], l_48[0])), 0xF6E690D9L)) ^ 0x041FL) & 249UL) , g_27))) , (-1L)) | g_9.f2)) || 18446744073709551615UL)) >= g_27)) || 0x5314680EDED6215ALL), 12))))) ^ p_3.f0) | 0x68L) || g_11.f0);
        if (l_40.f0)
            goto lbl_57;
lbl_57:
        for (g_8 = 11; (g_8 <= (-28)); --g_8)
        { 
            uint32_t l_55 = 0x5300FFBEL;
            int32_t l_56 = 0x820FDEBFL;
            l_56 = (safe_mul_func_int8_t_s_s((l_55 = (g_8 <= (1UL ^ (0x3D52L < 0L)))), 0xC8L));
        }
        if (g_9.f2)
        { 
            for (l_50 = 0; (l_50 > (-21)); l_50 = safe_sub_func_int64_t_s_s(l_50, 8))
            { 
                return g_27;
            }
        }
        else
        { 
            g_8 = g_9.f1;
            l_21 = g_9.f1;
        }
    }
    return p_3.f0;
}



static union U3  func_4(int8_t  p_5, struct S0  p_6)
{ 
    int32_t l_10[5][3][5] = {{{(-9L),0xC45C1D10L,1L,(-9L),1L},{4L,4L,(-1L),0xB5AF9F7CL,0x729694D2L},{0x9864BA8BL,1L,0x2B5725D3L,0x2B5725D3L,1L}},{{0x729694D2L,0x0980DB95L,(-1L),0x729694D2L,0xE3CA3691L},{0xC45C1D10L,1L,(-9L),1L,0xC45C1D10L},{(-1L),4L,0x0980DB95L,0xE3CA3691L,4L}},{{0xC45C1D10L,5L,5L,0xC45C1D10L,0x2B5725D3L},{0x729694D2L,0xB5AF9F7CL,(-1L),4L,4L},{0x9864BA8BL,0xC45C1D10L,0x9864BA8BL,0x2B5725D3L,0xC45C1D10L}},{{4L,0x0980DB95L,0xE3CA3691L,4L,0xE3CA3691L},{0x342F3D47L,0x342F3D47L,(-9L),0xC45C1D10L,1L},{(-1L),0x729694D2L,0xE3CA3691L,0xE3CA3691L,0x729694D2L}},{{1L,5L,0x9864BA8BL,1L,0x2B5725D3L},{0xB5AF9F7CL,0x729694D2L,(-1L),0x729694D2L,0xB5AF9F7CL},{0x9864BA8BL,0x342F3D47L,5L,0x2B5725D3L,0x342F3D47L}}};
    int i, j, k;
    l_10[1][2][3] = g_9.f0;
    return g_11;
}



static uint16_t  func_14(uint32_t  p_15, int32_t  p_16, uint16_t  p_17, int8_t  p_18)
{ 
    const union U2 l_22 = {0xB8A87EA8L};
    g_8 |= ((l_22 , (safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((l_22.f0 && 0xF1EFL), (g_27 ^= p_18))) & p_17), 1))) , (-10L));
    return g_11.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_62[i][j], "g_62[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_114[i][j], "g_114[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
