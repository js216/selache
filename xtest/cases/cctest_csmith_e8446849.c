// SPDX-License-Identifier: MIT
// cctest_csmith_e8446849.c --- cctest case csmith_e8446849 (csmith seed 3896797257)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf7af842c */

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

// Options:   -s 3896797257 -o /tmp/csmith_gen_rg6e2os6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   const int64_t  f2;
   int32_t  f3;
   int16_t  f4;
   uint32_t  f5;
};

union U1 {
   uint32_t  f0;
   uint16_t  f1;
   const int16_t  f2;
};


static uint32_t g_7 = 18446744073709551614UL;
static int32_t g_10 = 0x80EEC299L;
static struct S0 g_22 = {7UL,0x9CL,0x4F06702E63372585LL,0xAFE44FA3L,0xDA37L,0x187B35F1L};
static uint64_t g_23 = 1UL;
static int32_t g_73 = 0x3F4458B9L;
static uint8_t g_83 = 249UL;
static int64_t g_92 = 0x59CB379706C82205LL;
static uint32_t g_111 = 1UL;
static int64_t g_140 = 0x6EFADCADDF3CDB0ALL;
static uint64_t g_151 = 0x1BD848F3A3E21F7CLL;
static uint64_t g_168 = 0xC72062B2DEDBDE70LL;
static uint8_t g_374 = 0xB3L;
static int32_t g_408[4][2] = {{0xACA40FAEL,0xACA40FAEL},{0xACA40FAEL,0xACA40FAEL},{0xACA40FAEL,0xACA40FAEL},{0xACA40FAEL,0xACA40FAEL}};
static int32_t g_409 = 0x9ACF184FL;
static uint64_t g_494 = 0x909DA0BEA7453C8CLL;
static uint8_t g_532 = 255UL;
static int8_t g_561 = 0xE7L;
static int64_t g_562 = 0xBEAE02E96E14C302LL;
static int32_t g_563 = 0x2A685DBEL;
static int32_t g_564[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
static int64_t g_565 = (-4L);
static uint32_t g_566[4][4][4] = {{{0UL,0x9E4BCE58L,0x033D4CC4L,0x9E4BCE58L},{0x033D4CC4L,0x9E4BCE58L,0UL,0x63F72B55L},{0x9E4BCE58L,0x3BD275F4L,0x81A871A3L,0x033D4CC4L},{0x5514FD3AL,0xAA783BB0L,0xAA783BB0L,0x5514FD3AL}},{{0x5514FD3AL,0x63F72B55L,0x81A871A3L,18446744073709551614UL},{0x9E4BCE58L,0x5514FD3AL,0UL,0UL},{0x033D4CC4L,0xA24C9806L,0x033D4CC4L,0UL},{0UL,0x5514FD3AL,0x9E4BCE58L,18446744073709551614UL}},{{0x81A871A3L,0x5514FD3AL,0xAA783BB0L,0xAA783BB0L},{0UL,0UL,0xAA783BB0L,0x63F72B55L},{0x033D4CC4L,0UL,0xA24C9806L,0x5514FD3AL},{0x81A871A3L,0xA24C9806L,0x63F72B55L,0xA24C9806L}},{{0x63F72B55L,0xA24C9806L,0x81A871A3L,0x5514FD3AL},{0xA24C9806L,0UL,0x033D4CC4L,0x63F72B55L},{0xAA783BB0L,0UL,0UL,0xAA783BB0L},{0xAA783BB0L,0x5514FD3AL,0x033D4CC4L,0x3BD275F4L}}};
static uint32_t g_569 = 0x53FAB224L;



static uint32_t  func_1(void);
static int32_t  func_3(uint16_t  p_4, struct S0  p_5, int32_t  p_6);
static const int64_t  func_16(struct S0  p_17, int64_t  p_18, int16_t  p_19, uint16_t  p_20, int64_t  p_21);
static int32_t  func_27(const uint16_t  p_28, struct S0  p_29);




static uint32_t  func_1(void)
{ 
    struct S0 l_8 = {0x4BCD76CE4A6F4440LL,0xD1L,0L,1L,0x6EEAL,0x3061ECE3L};
    int32_t l_9 = (-2L);
    int32_t l_406[5][1][1] = {{{5L}},{{0L}},{{5L}},{{0L}},{{5L}}};
    uint8_t l_421 = 255UL;
    int8_t l_470 = 0xE8L;
    uint32_t l_485 = 0UL;
    int64_t l_514 = 0x3E935561D38F8EA3LL;
    int32_t l_533 = 0xEA2B0036L;
    uint16_t l_534 = 0x923DL;
    uint32_t l_536 = 4294967287UL;
    const int32_t l_602 = 0x96D62F49L;
    int i, j, k;
lbl_584:
    l_8.f3 = (safe_unary_minus_func_int64_t_s((func_3(g_7, l_8, ((g_10 = (l_9 = g_7)) <= l_8.f1)) ^ l_8.f4)));
    for (g_22.f1 = 0; (g_22.f1 == 18); g_22.f1 = safe_add_func_uint16_t_u_u(g_22.f1, 2))
    { 
        uint32_t l_372 = 4294967295UL;
        union U1 l_392 = {0xE1A15664L};
        int32_t l_407 = (-5L);
        int32_t l_410 = 0x2689EF0BL;
        int32_t l_414 = 0x7B66DB36L;
        int8_t l_424 = 1L;
        uint16_t l_521 = 7UL;
        uint64_t l_537 = 0xA315F514BAABB76ALL;
        uint32_t l_581 = 7UL;
        if ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((+g_22.f5), 8)), ((l_372 = 18446744073709551615UL) , 0L))))
        { 
            int8_t l_373[3][2][1] = {{{0xC0L},{0xFBL}},{{0xC0L},{0xFBL}},{{0xC0L},{0xFBL}}};
            int i, j, k;
            g_374--;
            if (g_151)
            { 
                uint64_t l_385[5][3] = {{0x2733499AA9D4D813LL,0x2733499AA9D4D813LL,0x2733499AA9D4D813LL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{0x2733499AA9D4D813LL,0x2733499AA9D4D813LL,0x2733499AA9D4D813LL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{0x2733499AA9D4D813LL,0x2733499AA9D4D813LL,0x2733499AA9D4D813LL}};
                int32_t l_391 = 6L;
                int i, j;
                if (l_373[1][0][0])
                    break;
                if (g_22.f3)
                    continue;
                l_391 = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(l_8.f5, 10)), 1)), 1)) || (safe_div_func_int8_t_s_s((l_385[2][2] , ((safe_div_func_uint32_t_u_u(((1L | (safe_mul_func_int8_t_s_s((!g_140), g_10))) >= 0x3BED2E4A0732701FLL), g_92)) < g_140)), g_10)));
            }
            else
            { 
                return g_22.f5;
            }
        }
        else
        { 
            uint8_t l_405[4][4][1] = {{{249UL},{0x93L},{4UL},{0x93L}},{{249UL},{249UL},{0x93L},{4UL}},{{0x93L},{249UL},{249UL},{0x93L}},{{4UL},{0x93L},{249UL},{249UL}}};
            uint16_t l_411[1][2];
            int32_t l_423[5] = {4L,4L,4L,4L,4L};
            const uint64_t l_429 = 0x8A9CD988E820B6D7LL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_411[i][j] = 0xE358L;
            }
            if ((l_392 , (safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s((l_406[2][0][0] = ((--g_374) , ((g_73 = (safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(l_8.f5, (l_405[0][2][0] ^= ((safe_mod_func_int16_t_s_s(((l_392.f0 >= g_374) < 0x23D32879L), g_374)) || l_392.f1)))), g_23))) , l_392.f0))), l_392.f0)) < g_23), 0x5DL))))
            { 
                uint64_t l_420 = 18446744073709551615UL;
                int32_t l_422 = 0L;
                g_409 = ((l_372 <= (l_411[0][0]++)) || g_168);
                l_9 ^= l_414;
                l_424 |= (~((g_92 = (((l_423[3] = ((l_422 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_22.f3, ((g_83 < (g_7 != l_420)) & l_421))), 0x3258L))) , l_8.f5)) ^ l_420) < g_151)) || l_414));
            }
            else
            { 
                g_409 = (((l_406[2][0][0] != g_22.f0) <= ((l_8.f3 = (l_405[0][3][0] != (l_423[3] = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_168, g_73)), 65535UL))))) , g_83)) | g_23);
                l_407 = l_421;
                if (l_429)
                    break;
            }
            if ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_392.f0, 0xF7F9L)) <= ((safe_mod_func_int8_t_s_s(((l_410 = (g_22.f1 <= (g_22.f2 == l_405[0][2][0]))) , l_411[0][1]), l_421)) & g_22.f4)), 0x4CL)))
            { 
                g_409 &= (safe_lshift_func_int8_t_s_s(g_408[0][1], 3));
                l_407 = l_372;
            }
            else
            { 
                int32_t l_444 = (-9L);
                int32_t l_451 = 0L;
                g_408[2][0] = (safe_mul_func_int16_t_s_s(((0UL == ((((safe_rshift_func_uint8_t_u_u(g_22.f1, g_22.f1)) | ((g_409 = 0x8BB53B4DL) != l_444)) != 0x83L) < l_414)) < l_407), 0xF56EL));
                g_408[2][1] ^= (safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s((g_111 , g_23), (((((l_405[0][1][0] | (safe_lshift_func_int8_t_s_s(g_151, g_92))) == 9L) ^ 0x5497D5CC3521BDBELL) , l_410) > l_451))) != l_8.f2) == g_92), l_451));
                l_423[1] |= (!((g_22.f4 > (g_140 , (g_83--))) , 1UL));
            }
        }
        if ((safe_mul_func_int16_t_s_s(((g_22.f0 = (g_10 < (((safe_mod_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((~(safe_add_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_s(6L, (safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(g_83, (l_407 = (l_406[2][0][0] <= l_9)))) , g_22.f2) , g_374), g_73)))) & l_392.f0) > g_22.f5) < g_10), g_408[0][1]))), l_470)) | 0x85396C79L), g_7)) ^ l_8.f5) && g_22.f4))) == g_10), l_424)))
        { 
            uint8_t l_471[2];
            int32_t l_476[3];
            uint32_t l_477 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_471[i] = 0UL;
            for (i = 0; i < 3; i++)
                l_476[i] = 7L;
            l_471[1]++;
            for (l_470 = (-26); (l_470 < (-28)); --l_470)
            { 
                --l_477;
            }
        }
        else
        { 
            int32_t l_484 = 1L;
            struct S0 l_503[4] = {{0x1AB55380635DDA81LL,0x2FL,0x79A000F6DF1392A8LL,-1L,0x679DL,0xE0BF76F5L},{0x1AB55380635DDA81LL,0x2FL,0x79A000F6DF1392A8LL,-1L,0x679DL,0xE0BF76F5L},{0x1AB55380635DDA81LL,0x2FL,0x79A000F6DF1392A8LL,-1L,0x679DL,0xE0BF76F5L},{0x1AB55380635DDA81LL,0x2FL,0x79A000F6DF1392A8LL,-1L,0x679DL,0xE0BF76F5L}};
            int32_t l_511 = 0xD9309CCDL;
            int16_t l_560 = 0x65BAL;
            int64_t l_582 = (-1L);
            int i;
            if ((((-1L) != ((((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((((((g_92 <= g_22.f3) , l_372) >= l_484) && 0x4089DC33L) ^ 0x51D2L) >= 0x7278C815E9DAD21FLL), l_484)) >= l_485), g_140)) | g_168) , g_408[2][0]) < 0xB3CEF0DFL)) ^ 7UL))
            { 
                int16_t l_486 = (-1L);
                int32_t l_493 = 9L;
                g_22.f3 |= (g_10 , ((l_486 ^= (-2L)) < ((g_374 = (safe_div_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u(((g_22.f5 == (((safe_div_func_uint8_t_u_u((1L != l_484), l_485)) <= l_484) <= 0x46L)) , 1UL), g_22.f5)) || l_493) && l_484), l_485))) > g_22.f0)));
                ++g_494;
                l_484 |= (safe_mul_func_uint8_t_u_u(((l_407 = (safe_rshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(((g_7 || (l_503[2] , (safe_add_func_uint8_t_u_u((((g_22.f2 & (0UL != g_22.f5)) | g_22.f5) != l_407), 7UL)))) , g_494), g_22.f2)) ^ g_92) & g_10), g_23))) != 0x491B66AFL), l_503[2].f4));
            }
            else
            { 
                int32_t l_508 = 0xD0E3D36CL;
                int32_t l_535 = (-7L);
                l_514 = (((safe_mod_func_int16_t_s_s(g_408[2][0], (l_508 && ((safe_mod_func_int16_t_s_s((l_484 = ((((l_511 , ((safe_mul_func_int16_t_s_s(((g_409 = 0xAED3171AL) & l_410), g_374)) & g_22.f1)) , l_508) , l_508) ^ g_10)), g_140)) < l_8.f2)))) != l_414) != g_22.f1);
                l_484 = (safe_unary_minus_func_uint64_t_u((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((((+(-6L)) < l_521) > ((safe_mul_func_int8_t_s_s((l_535 = (safe_add_func_int64_t_s_s((g_92 = (safe_lshift_func_uint8_t_u_u((l_503[2].f3 = (((l_503[2].f0 <= (((l_534 &= (safe_div_func_uint8_t_u_u(((((g_532 |= (((safe_rshift_func_int8_t_s_u(0x17L, g_374)) | g_10) <= 0x1336D5E3203C99EDLL)) <= 0L) > l_503[2].f0) , 0x24L), l_533))) , g_374) && g_151)) <= 1UL) & l_9)), l_508))), l_407))), l_536)) & l_511)), l_537)), l_9))));
            }
            if ((safe_mul_func_uint16_t_u_u(((((~(g_7 < g_140)) < (safe_div_func_int32_t_s_s((g_151 <= 8UL), l_511))) || 0UL) , g_10), l_537)))
            { 
                int32_t l_559 = 0xC264D355L;
                l_559 = ((((safe_mod_func_int32_t_s_s((((((safe_add_func_uint8_t_u_u(((!(safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_int8_t_s(l_470)) && (safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(0xE0A9AFCFL, ((g_22.f4 = g_532) || 6L))), 0x1D6AL)) > l_559), 252UL)) | l_560) == (-1L)), l_559))), 0xD788C188BE91D048LL))) & 250UL), l_534)) && (-1L)) & l_559) && l_406[2][0][0]) || l_559), l_503[2].f4)) > l_521) , g_10) || l_559);
            }
            else
            { 
                const uint64_t l_583 = 0xEB84DB613FB3EEB2LL;
                l_410 = ((g_569 = (g_566[3][3][2]--)) && (safe_lshift_func_uint8_t_u_u(g_22.f5, ((safe_rshift_func_int16_t_s_s(((++g_569) <= (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((l_9 ^= l_392.f0), ((~(l_8.f3 = (65526UL | ((((g_563 < 0L) < l_503[2].f5) == g_408[2][0]) != l_581)))) ^ 2UL))) < l_582), g_561))), l_583)) <= 0x8BB7L))));
                l_407 = l_8.f2;
                if (g_83)
                    goto lbl_584;
            }
            g_563 ^= l_424;
        }
    }
    g_10 ^= ((((((((g_22.f4 = 0x937BL) != ((safe_lshift_func_uint8_t_u_s(0xFDL, (safe_rshift_func_uint16_t_u_u((l_8.f4 > (safe_mul_func_int8_t_s_s((~(safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_add_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((l_536 ^ 0x7F9F74993787F938LL) != g_140), 0L)) ^ l_485), 7)) >= 0xF65806866D58FBFBLL), l_8.f5)) && l_602) , 0x7F79F794L) && g_22.f5), 2)), g_73))), l_406[2][0][0]))), l_9)))) , g_22.f0)) , g_562) > l_8.f4) <= l_534) , 0xD81D241AFD9003B1LL) > 18446744073709551615UL) | 5L);
    return g_408[2][1];
}



static int32_t  func_3(uint16_t  p_4, struct S0  p_5, int32_t  p_6)
{ 
    uint16_t l_185[1];
    int32_t l_360 = (-8L);
    int i;
    for (i = 0; i < 1; i++)
        l_185[i] = 0UL;
    if ((!p_4))
    { 
lbl_359:
        for (p_4 = 0; (p_4 > 20); p_4++)
        { 
            uint32_t l_313 = 0x092D65BCL;
            for (p_6 = 0; (p_6 > 5); ++p_6)
            { 
                int64_t l_292[4];
                int32_t l_312[4] = {(-1L),(-1L),(-1L),(-1L)};
                int64_t l_314 = (-6L);
                int i;
                for (i = 0; i < 4; i++)
                    l_292[i] = 0xA8D5824C6D288F8ELL;
                l_292[0] = (func_16(g_22, (g_23 = g_7), (~(safe_sub_func_int32_t_s_s(g_22.f2, func_27(g_22.f2, p_5)))), l_185[0], l_185[0]) == g_22.f2);
                p_5.f3 |= (safe_mod_func_uint64_t_u_u((((+(safe_rshift_func_uint8_t_u_u(0xFBL, (safe_div_func_uint16_t_u_u(g_151, (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_22.f2 != (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((l_312[1] = ((safe_lshift_func_int16_t_s_s((p_5.f0 > g_83), 14)) >= g_22.f5)) , g_22.f1), 5)), 0))), 0x1140L)), l_313))))))) != 0UL) | p_4), g_22.f3));
                l_314 = p_5.f1;
            }
        }
    }
    else
    { 
        int32_t l_325 = 0x1723920CL;
        int32_t l_358[5][3] = {{0x96117DFCL,5L,0x96117DFCL},{(-1L),(-1L),(-1L)},{0x96117DFCL,5L,0x96117DFCL},{(-1L),(-1L),(-1L)},{0x96117DFCL,5L,0x96117DFCL}};
        int i, j;
        for (p_5.f3 = 0; (p_5.f3 < (-19)); p_5.f3 = safe_sub_func_int64_t_s_s(p_5.f3, 3))
        { 
            uint16_t l_324 = 0xD613L;
            int32_t l_326 = 0xA7A55D1BL;
            union U1 l_333 = {0xDDA83CD1L};
            l_326 = (safe_rshift_func_uint8_t_u_u(p_5.f4, (g_92 && ((((g_22 , (safe_add_func_int64_t_s_s((~(safe_div_func_uint8_t_u_u((5L <= l_324), l_325))), g_10))) >= 1UL) && 0x2DL) != p_5.f3))));
            if (g_22.f3)
                continue;
            for (g_22.f5 = (-14); (g_22.f5 == 42); g_22.f5++)
            { 
                if (g_22.f2)
                    break;
                l_326 = (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((l_333 , (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((g_22.f3 = (l_185[0] , (safe_mod_func_uint32_t_u_u(((((((g_111 = (18446744073709551615UL <= (-3L))) >= l_333.f2) >= g_83) >= g_168) && 0xE412L) || 0xE8C0162A6EB47831LL), 9UL)))), 1L)), 0L)) && g_23) | (-1L)), p_5.f0))) || g_83), l_325)) ^ g_151), l_326));
                return l_325;
            }
        }
        for (g_22.f5 = 0; (g_22.f5 <= 0); g_22.f5 += 1)
        { 
            int i;
            p_5.f3 = l_185[g_22.f5];
            for (p_6 = (-3); (p_6 >= (-4)); --p_6)
            { 
                l_358[3][0] ^= (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_5.f3 != g_168), (((safe_div_func_uint16_t_u_u(((((g_111 = (safe_div_func_uint16_t_u_u((!(p_6 == (safe_mod_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((~(0x5CC4E38E7CC66A49LL >= g_151)) < p_4), p_5.f1)) && 0xF629L) != 0x4D060C8F883B2210LL), g_22.f0)))), l_185[g_22.f5]))) < l_185[0]) < g_23) == p_4), 0x36B1L)) ^ p_5.f1) & 1UL))), 3L));
                if (g_22.f1)
                    goto lbl_359;
                g_10 = (l_360 ^= g_83);
            }
        }
    }
    g_73 |= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_4, ((l_185[0] && ((g_22.f0 >= g_22.f4) != p_5.f2)) != g_140))), 1L));
    return g_22.f4;
}



static const int64_t  func_16(struct S0  p_17, int64_t  p_18, int16_t  p_19, uint16_t  p_20, int64_t  p_21)
{ 
    int32_t l_186[5][4] = {{(-1L),1L,1L,(-1L)},{3L,1L,0x24A8259FL,1L},{1L,0x9B74624CL,0x24A8259FL,0x24A8259FL},{3L,3L,1L,0x24A8259FL},{(-1L),0x9B74624CL,(-1L),1L}};
    union U1 l_187 = {4294967295UL};
    int32_t l_203 = 0x5975BB4AL;
    int i, j;
lbl_226:
    for (p_19 = 0; (p_19 <= 3); p_19 += 1)
    { 
        uint64_t l_202 = 0x26FC9A2634984787LL;
        int32_t l_204 = 0x08AA5832L;
        const struct S0 l_211 = {9UL,251UL,-8L,-1L,3L,1UL};
        for (p_21 = 0; (p_21 <= 3); p_21 += 1)
        { 
            int i, j;
            p_17.f3 &= ((((l_186[(p_21 + 1)][p_21] <= l_186[p_19][p_19]) | (((0x6E5B2E24D0F4EB8ELL >= ((l_186[p_19][p_21] ^ g_10) & 0x4DB05CABCBA91106LL)) >= g_22.f0) ^ p_17.f1)) > 255UL) < g_22.f0);
            for (g_22.f0 = 0; (g_22.f0 <= 3); g_22.f0 += 1)
            { 
                int i, j;
                return l_186[(p_21 + 1)][p_21];
            }
            if (g_7)
                break;
        }
        for (g_22.f3 = 3; (g_22.f3 >= 0); g_22.f3 -= 1)
        { 
            int i, j;
            g_10 = (l_186[g_22.f3][g_22.f3] || ((((l_187 , (l_204 &= (l_203 = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((l_186[g_22.f3][g_22.f3] &= (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((p_17.f3 <= (g_22.f1 != 0UL)) == 5L), g_168)) , 8UL), p_17.f2)), g_22.f0))), g_22.f3)) , 0xFCE9AB82L) >= p_17.f2), p_18)), 5)), l_202)) && g_73)))) >= 0x570AA57CL) < l_187.f0) & 0UL));
            g_10 = (p_19 <= (l_186[g_22.f3][g_22.f3] = (safe_sub_func_uint64_t_u_u((l_186[2][1] == (safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((l_211 , ((safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(l_187.f0, p_17.f4)) , l_187.f1), 0x01BCL)), 0xF6L)) | l_186[g_22.f3][g_22.f3]), 3)) | g_22.f1)) >= 9UL), 2UL)) & g_23), g_111))), 1UL))));
            g_10 = 1L;
        }
    }
    if ((((((l_203 = ((g_22.f0 , p_17.f1) > ((p_17 , (g_22.f4 > 0x8920E447L)) != g_10))) , p_17.f5) >= p_17.f1) > 5UL) == 0x215A1ACAL))
    { 
        const int32_t l_253 = 0xFA4A0F4CL;
        int32_t l_264[2];
        int16_t l_265[4][4][1] = {{{(-8L)},{0xB452L},{2L},{1L}},{{1L},{2L},{0xB452L},{(-8L)}},{{0xB452L},{2L},{1L},{1L}},{{2L},{0xB452L},{(-8L)},{0xB452L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_264[i] = 7L;
lbl_232:
        for (p_17.f0 = (-2); (p_17.f0 > 45); p_17.f0++)
        { 
            uint64_t l_225 = 0UL;
            if ((p_17.f3 = g_22.f3))
            { 
                int32_t l_224 = (-6L);
                p_17.f3 = 0x69ADE63DL;
                if (g_23)
                    continue;
                if (l_224)
                    continue;
            }
            else
            { 
                g_73 = 0xF0D34256L;
            }
            if (l_225)
            { 
                if (g_10)
                    goto lbl_226;
            }
            else
            { 
                uint8_t l_227 = 0x07L;
                l_227++;
                return g_140;
            }
            return p_17.f1;
        }
        for (g_22.f0 = 0; (g_22.f0 < 48); g_22.f0 = safe_add_func_uint64_t_u_u(g_22.f0, 3))
        { 
            int32_t l_254 = 1L;
            int32_t l_255 = 0L;
            if (l_187.f1)
                goto lbl_232;
            if ((((p_17.f3 = ((((!(safe_sub_func_int16_t_s_s(((((l_255 |= (g_83 , ((+(g_22.f1 | (p_21 = (p_18 = ((p_17.f3 <= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((p_19 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_253, g_22.f2)), 10)), l_253)), 0xDD8FL))), 6)), g_140)), p_21)) == p_18), 4))) & 250UL))))) <= l_254))) || 0xE7L) != g_22.f4) < l_186[2][0]), 1UL))) != p_17.f1) || 0xFFL) & l_254)) > g_22.f5) < p_17.f5))
            { 
                if (l_253)
                    break;
            }
            else
            { 
                l_203 = (-7L);
                l_265[3][3][0] = ((p_19 & p_17.f5) && (((((p_17.f3 = ((g_23 || ((((((l_264[0] = ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(l_254, g_140)), 0)), 0L)) || g_23)) & l_255) , g_7) ^ 0x168BAD66L) ^ 0UL) == 0x8E640C1D5FEB8AD3LL)) || p_17.f4)) & p_17.f1) , g_111) | p_17.f1) , 0xB6BBA22A9C7A836CLL));
            }
        }
    }
    else
    { 
        uint64_t l_271 = 0xBC4ACA091E0C8585LL;
        int32_t l_286 = 0x8834A9D0L;
        const union U1 l_289 = {0x87DB0181L};
        p_17.f3 ^= (p_17.f2 || ((!((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_271, 4)), (~((safe_mul_func_uint8_t_u_u(g_23, ((((((safe_rshift_func_int8_t_s_s(((l_203 = (p_18 , g_22.f3)) >= l_186[0][2]), 3)) , 1L) , p_20) | 7UL) == p_18) != l_187.f2))) | (-5L))))) ^ p_20) , l_271) == l_187.f2)) , g_22.f1));
        for (g_111 = 0; (g_111 <= 3); g_111 += 1)
        { 
            uint64_t l_277[2];
            int i;
            for (i = 0; i < 2; i++)
                l_277[i] = 0xF42D3900B72B06D5LL;
            --l_277[1];
            l_286 = (((((((safe_mul_func_uint8_t_u_u(((p_17.f5 = (p_17.f3 ^ ((((safe_lshift_func_int8_t_s_u((l_277[1] ^ (safe_mul_func_int16_t_s_s(0xE560L, l_277[1]))), 0)) > (-1L)) <= g_22.f5) <= l_277[1]))) , l_277[0]), p_18)) != p_17.f4) ^ g_7) != p_18) && 0x31L) , g_22.f4) & g_111);
            for (g_22.f0 = 0; (g_22.f0 <= 3); g_22.f0 += 1)
            { 
                int i, j;
                if (l_187.f2)
                    goto lbl_226;
                l_186[g_111][g_111] = (safe_rshift_func_int16_t_s_s((65535UL != (l_289 , (0L == (((safe_rshift_func_uint16_t_u_s((l_286 = ((((l_186[g_22.f0][g_22.f0] , g_73) < g_7) | l_277[1]) || 255UL)), 1)) | p_18) , g_73)))), 4));
                g_10 |= (l_186[g_111][g_111] , g_83);
            }
        }
    }
    return p_18;
}



static int32_t  func_27(const uint16_t  p_28, struct S0  p_29)
{ 
    int32_t l_37 = (-1L);
    int32_t l_38 = 0xADE726F2L;
    int64_t l_82 = 0xF8E388CD3BC7639BLL;
    int32_t l_107 = (-6L);
    int32_t l_112 = (-1L);
    int8_t l_184 = 3L;
    if (((safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((0x95534FD3L || ((l_38 = l_37) > ((safe_div_func_int32_t_s_s((((0x8CBFL >= (p_29.f4 = (safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((p_29.f4 | p_29.f0), g_22.f2)) || p_29.f1), p_29.f4)))) || g_22.f3) > 255UL), g_10)) & 0x8C53L))) , l_37) ^ p_29.f1), l_37)), g_7)))) , (-6L)))
    { 
        uint16_t l_49 = 0x0716L;
        uint64_t l_84 = 0UL;
        int32_t l_85 = (-3L);
        int8_t l_89[1][5][3] = {{{0xF8L,0xF8L,0xF8L},{0x43L,0x43L,0x43L},{0xF8L,0xF8L,0xF8L},{0x43L,0x43L,0x43L},{0xF8L,0xF8L,0xF8L}}};
        int32_t l_93 = 0x0D066B32L;
        int i, j, k;
        if ((p_29.f1 >= (safe_sub_func_uint8_t_u_u(l_37, l_37))))
        { 
            uint64_t l_51 = 18446744073709551608UL;
            for (l_38 = 0; (l_38 == 20); l_38++)
            { 
                p_29.f3 = l_37;
                l_49 = g_22.f2;
                if (p_29.f5)
                    continue;
            }
            if (((((((!(((l_51 || (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((g_7 , 0x8BB1L), (safe_lshift_func_int8_t_s_s(((p_29.f1 , g_10) <= l_51), g_22.f2)))) != p_29.f1), l_49))) ^ 0xD31C11D7L) > g_22.f1)) || p_29.f4) && l_51) > g_22.f1) ^ g_22.f1) | g_10))
            { 
                return p_29.f0;
            }
            else
            { 
                const uint64_t l_70 = 0xFCFF147090205405LL;
                g_10 = ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(p_29.f3, ((+(safe_sub_func_int64_t_s_s((((l_38 = (((safe_rshift_func_uint8_t_u_s(((+(safe_lshift_func_int16_t_s_u(l_70, ((0x73L | (safe_lshift_func_int16_t_s_s((g_73 ^= 0x9C0DL), 4))) && 0x88L)))) > 3L), l_49)) < 0x72B4D3A6L) || g_22.f0)) < 0L) , l_49), 0L))) | 0x54L))), 1UL)) ^ l_70);
                l_85 = (safe_sub_func_int32_t_s_s(((g_83 = ((!(((l_70 , (p_29.f3 = (~l_49))) | ((safe_mul_func_int16_t_s_s((g_7 < ((0x7097499C904586DBLL | l_82) <= 4294967293UL)), g_10)) ^ 0x9281337FB341928BLL)) >= g_22.f5)) || p_29.f2)) != g_10), l_84));
            }
            for (l_84 = (-17); (l_84 > 20); l_84 = safe_add_func_int32_t_s_s(l_84, 3))
            { 
                return p_29.f2;
            }
        }
        else
        { 
            int16_t l_88[3];
            int i;
            for (i = 0; i < 3; i++)
                l_88[i] = 0x31AFL;
            return l_88[1];
        }
        for (p_29.f4 = 0; (p_29.f4 <= 0); p_29.f4 += 1)
        { 
            return p_29.f3;
        }
        for (l_85 = 0; (l_85 >= 0); l_85 -= 1)
        { 
            uint16_t l_91 = 1UL;
            for (p_29.f5 = 0; (p_29.f5 <= 0); p_29.f5 += 1)
            { 
                int32_t l_90 = 0xC3AA3D5FL;
                l_93 = ((((((7L > 0x31L) < (p_28 && (g_92 ^= (((l_38 &= (g_22.f5 <= l_90)) ^ l_91) < 7UL)))) == p_29.f1) < 0xA4L) & l_91) ^ g_83);
                g_73 = (0xF54F23DFL ^ (safe_mod_func_uint32_t_u_u(g_10, p_29.f4)));
            }
            for (l_37 = 0; (l_37 <= 0); l_37 += 1)
            { 
                int8_t l_108 = (-9L);
                p_29.f3 = (l_38 <= (safe_div_func_uint8_t_u_u(l_91, (l_112 &= (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((~(safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((g_111 = ((l_108 |= (l_107 |= g_22.f4)) , ((safe_div_func_int32_t_s_s(p_29.f2, g_22.f0)) < p_29.f5))), 0xB411L)) , g_22.f4), g_22.f1))) || 249UL) == 0x0421A517L), 0x40L)), g_22.f2))))));
            }
        }
    }
    else
    { 
        int32_t l_119 = 1L;
        const uint8_t l_138 = 0x6DL;
        if ((g_73 = (safe_mul_func_uint16_t_u_u((l_107 = (safe_mul_func_uint8_t_u_u((p_29.f2 < 0x9C23L), g_7))), g_22.f1))))
        { 
            uint16_t l_139 = 9UL;
            union U1 l_152 = {0xC71E7B35L};
            for (l_107 = 0; (l_107 > 24); l_107 = safe_add_func_uint8_t_u_u(l_107, 1))
            { 
                const uint32_t l_141 = 0UL;
                g_10 = (((l_119 <= g_22.f2) < g_92) ^ (l_112 = p_29.f2));
                g_10 ^= (safe_mod_func_uint8_t_u_u((g_83 = ((l_38 &= ((((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((p_29.f1 ^ ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(250UL, ((1L | (((g_140 &= (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((0xC205L & l_138), p_29.f2)), l_139))) , l_141) ^ p_29.f1)) & 0x51A12B70BD878CC6LL))) > p_29.f5), g_92)) < 0x84042AD9L)) != l_119), 0x6DF1FB71L)), 4294967286UL)), l_119)) < l_82) ^ l_141) ^ 0x0F7998293F6A8FE6LL) > 0x75L) < 0L)) , g_22.f3)), l_119));
            }
            for (g_92 = 0; (g_92 != 17); ++g_92)
            { 
                int64_t l_156 = 0L;
                int32_t l_157[3][5][1] = {{{1L},{1L},{(-1L)},{3L},{0xABF0990BL}},{{3L},{(-1L)},{1L},{1L},{(-1L)}},{{3L},{0xABF0990BL},{3L},{(-1L)},{1L}}};
                int i, j, k;
                p_29.f3 = ((+(g_111 = 4294967295UL)) | (((safe_sub_func_uint32_t_u_u((l_112 = p_29.f1), ((((safe_sub_func_uint8_t_u_u(1UL, (-1L))) != 0x65L) || g_22.f0) != g_10))) & g_22.f5) < l_138));
                l_157[1][0][0] = (safe_sub_func_int8_t_s_s((g_151 ^= 6L), (l_152 , (!(safe_sub_func_uint32_t_u_u((l_38 = (((0UL != l_119) | p_28) ^ g_22.f3)), l_156))))));
                l_107 = (!1UL);
            }
        }
        else
        { 
            int64_t l_159 = (-4L);
            if (l_159)
            { 
                uint8_t l_165[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_165[i] = 9UL;
                g_10 = (safe_mod_func_uint32_t_u_u((l_165[1] |= ((safe_sub_func_uint64_t_u_u((p_29.f0 = (~255UL)), l_119)) | 4L)), (safe_lshift_func_uint16_t_u_s(g_83, l_159))));
            }
            else
            { 
                g_10 = g_22.f5;
            }
        }
        g_10 = ((g_168 = p_29.f4) > ((((((((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((0xCCD0575CL != (p_29.f2 , (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(l_38, 7)) ^ p_28), 7)))), l_107)) && g_92) && 0x11B32773L), 0xCB4BFE13L)), 13)) , (-7L)) <= p_29.f1) , (-1L)) && l_82) , g_22.f0) && 0xA5C670BDL) && 0x4A5CBDD7E790059ELL));
        g_10 = (p_29.f5 > (safe_sub_func_uint32_t_u_u((safe_div_func_int64_t_s_s((g_22.f5 & (~g_111)), l_184)), 0x68239DE1L)));
    }
    l_38 &= g_73;
    return g_22.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
    transparent_crc(g_22.f4, "g_22.f4", print_hash_value);
    transparent_crc(g_22.f5, "g_22.f5", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_408[i][j], "g_408[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_564[i], "g_564[i]", print_hash_value);

    }
    transparent_crc(g_565, "g_565", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_566[i][j][k], "g_566[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_569, "g_569", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
