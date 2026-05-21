// SPDX-License-Identifier: MIT
// cctest_csmith_503a3984.c --- cctest case csmith_503a3984 (csmith seed 1345993092)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb15b975a */

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

// Options:   -s 1345993092 -o /tmp/csmith_gen_ht7mbphp/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int16_t  f1;
   uint16_t  f2;
   const uint64_t  f3;
   int64_t  f4;
};

union U1 {
   const int8_t  f0;
};


static union U1 g_17 = {-1L};
static uint64_t g_22 = 18446744073709551615UL;
static uint64_t g_30 = 4UL;
static int16_t g_37 = (-1L);
static struct S0 g_54 = {1L,0L,0UL,18446744073709551615UL,-1L};
static uint32_t g_90 = 0xEE66DBACL;
static uint8_t g_167[5] = {255UL,255UL,255UL,255UL,255UL};
static uint32_t g_207[4][3][4] = {{{18446744073709551613UL,0x2153381EL,1UL,0x6710E112L},{18446744073709551615UL,0xDB69EBD4L,18446744073709551613UL,0x6710E112L},{0x2C09F95BL,0x2153381EL,0x2C09F95BL,2UL}},{{0x2C09F95BL,2UL,18446744073709551613UL,0x5584E04FL},{18446744073709551615UL,2UL,1UL,2UL},{18446744073709551613UL,0x2153381EL,1UL,0x6710E112L}},{{18446744073709551615UL,0xDB69EBD4L,18446744073709551613UL,0x6710E112L},{0x2C09F95BL,0x2153381EL,0x2C09F95BL,2UL},{0x2C09F95BL,2UL,18446744073709551613UL,0x5584E04FL}},{{18446744073709551615UL,2UL,1UL,2UL},{18446744073709551613UL,0xDB69EBD4L,18446744073709551615UL,0x2153381EL},{18446744073709551613UL,2UL,0x2C09F95BL,0x2153381EL}}};
static uint32_t g_225 = 1UL;
static uint8_t g_237[5][2] = {{0x67L,0x67L},{0x67L,0x67L},{0x67L,0x67L},{0x67L,0x67L},{0x67L,0x67L}};
static uint8_t g_265 = 0x89L;
static uint64_t g_298[5] = {6UL,6UL,6UL,6UL,6UL};
static int16_t g_327[1][2] = {{(-6L),(-6L)}};
static uint32_t g_328[4] = {0xE5559032L,0xE5559032L,0xE5559032L,0xE5559032L};
static uint32_t g_352[3] = {0x21A5E6A2L,0x21A5E6A2L,0x21A5E6A2L};
static uint32_t g_364 = 5UL;
static int8_t g_368 = 0x75L;
static uint64_t g_369 = 18446744073709551615UL;
static int32_t g_383 = 7L;
static uint64_t g_431 = 0x1A58AE6F715648FCLL;
static uint32_t g_434 = 0x046392CDL;



static uint32_t  func_1(void);
static const int32_t  func_4(uint16_t  p_5, const int32_t  p_6, int32_t  p_7);
static uint16_t  func_8(uint32_t  p_9, int8_t  p_10);
static uint32_t  func_11(union U1  p_12, int64_t  p_13, int8_t  p_14, const int16_t  p_15, uint8_t  p_16);




static uint32_t  func_1(void)
{ 
    uint16_t l_18 = 0UL;
    uint16_t l_281 = 0x86AEL;
    int32_t l_300 = 6L;
    uint32_t l_318 = 0xB0A6C2ECL;
    int32_t l_382[3][3] = {{(-1L),(-1L),(-1L)},{0x0344B7B1L,0x0344B7B1L,0x0344B7B1L},{(-1L),(-1L),(-1L)}};
    uint32_t l_432 = 0xBDD68C78L;
    int i, j;
    if ((safe_mod_func_int32_t_s_s(((l_281 = (func_4(func_8(func_11(g_17, g_17.f0, l_18, l_18, g_17.f0), l_18), g_167[2], l_18) <= l_18)) >= l_18), l_18)))
    { 
        int32_t l_297 = 0x8525E490L;
        uint32_t l_299 = 0x88F4ACA7L;
        int32_t l_338[2];
        uint16_t l_342 = 0x66D6L;
        int i;
        for (i = 0; i < 2; i++)
            l_338[i] = 6L;
        if ((safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_u((((((((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((0x89C1L > 0UL) && 0x85B39BC7L), (((safe_div_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s((g_37 |= ((g_265 <= 0L) > l_297)), l_18)) > 0x50A6E4D9L) | g_90) == l_297), g_298[1])), l_297)) != l_297), l_18)) == g_17.f0) <= l_299))), l_299)) && g_265) < 0UL) , 0x2FL) , g_237[0][0]) && g_237[2][0]) >= g_207[2][2][0]), 5)) == l_281))))
        { 
            l_300 ^= l_18;
        }
        else
        { 
            struct S0 l_311[4] = {{0x4FA118B2L,0xAAACL,0xD9CEL,0x212CEEA7DD988B33LL,6L},{0x4FA118B2L,0xAAACL,0xD9CEL,0x212CEEA7DD988B33LL,6L},{0x4FA118B2L,0xAAACL,0xD9CEL,0x212CEEA7DD988B33LL,6L},{0x4FA118B2L,0xAAACL,0xD9CEL,0x212CEEA7DD988B33LL,6L}};
            uint32_t l_319 = 0UL;
            int i;
            if ((safe_div_func_uint8_t_u_u(g_54.f3, ((safe_mod_func_int64_t_s_s(l_297, (safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((l_311[1] , l_18) <= 0x1BF3L), l_281)) , 0xDDABL), l_281)) , g_265), l_297)))) & g_54.f0))))
            { 
                uint32_t l_320 = 9UL;
                g_54.f0 = (((safe_mod_func_uint8_t_u_u(((l_318 = (safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_298[1], (0xD7L <= 0x24L))) > 0x0EF8E2C787117CDELL), 0xF6L))) , 251UL), 0x46L)) > g_17.f0) != l_319);
                l_320 = l_311[1].f1;
                g_328[1] = (g_54.f0 ^= ((g_298[1] ^= ((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((g_327[0][1] , ((255UL ^ l_297) ^ l_320)), 3)), g_167[4])), l_320)) >= g_237[2][0])) , g_30));
            }
            else
            { 
                const int16_t l_337 = 0L;
                uint64_t l_339[3][5][4] = {{{0x7E7F28E239A32766LL,18446744073709551615UL,0xEF6679340A2A62F1LL,18446744073709551615UL},{0xEF6679340A2A62F1LL,18446744073709551615UL,0x7E7F28E239A32766LL,0x3B56AE92661E0266LL},{18446744073709551615UL,0xB7EC5688E5A82F8BLL,1UL,0xEF6679340A2A62F1LL},{0x632F5110C61D9D73LL,0xF4A846E4403DE6FFLL,0xF4A846E4403DE6FFLL,0x632F5110C61D9D73LL},{0x632F5110C61D9D73LL,0x3B56AE92661E0266LL,1UL,1UL}},{{18446744073709551615UL,0x632F5110C61D9D73LL,0x7E7F28E239A32766LL,1UL},{0xEF6679340A2A62F1LL,0UL,0xEF6679340A2A62F1LL,1UL},{0x7E7F28E239A32766LL,0x632F5110C61D9D73LL,18446744073709551615UL,1UL},{1UL,0x3B56AE92661E0266LL,0x632F5110C61D9D73LL,0x632F5110C61D9D73LL},{0xF4A846E4403DE6FFLL,0xF4A846E4403DE6FFLL,0x632F5110C61D9D73LL,0xEF6679340A2A62F1LL}},{{1UL,0xB7EC5688E5A82F8BLL,18446744073709551615UL,0x3B56AE92661E0266LL},{0x7E7F28E239A32766LL,18446744073709551615UL,0xEF6679340A2A62F1LL,18446744073709551615UL},{0xEF6679340A2A62F1LL,18446744073709551615UL,0x7E7F28E239A32766LL,0x3B56AE92661E0266LL},{18446744073709551615UL,0xB7EC5688E5A82F8BLL,1UL,0xEF6679340A2A62F1LL},{0x632F5110C61D9D73LL,0xF4A846E4403DE6FFLL,0xF4A846E4403DE6FFLL,0x632F5110C61D9D73LL}}};
                int i, j, k;
                l_311[1].f0 = (g_167[3] >= (((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_90, 5)), ((((safe_lshift_func_uint8_t_u_u(g_237[3][0], l_337)) , 1L) >= l_311[1].f0) , 0x11ACL))) >= g_37), l_337)) , g_207[2][2][0]) != l_337));
                l_339[1][2][0]++;
            }
            l_342 = (g_265 <= 0UL);
            g_54.f0 = 0x2EADB3B8L;
        }
    }
    else
    { 
lbl_349:
        l_300 = (safe_mul_func_uint16_t_u_u((g_237[1][1] && 2UL), (--g_54.f2)));
        for (l_300 = 0; (l_300 != (-21)); l_300 = safe_sub_func_uint32_t_u_u(l_300, 7))
        { 
            if (g_17.f0)
                goto lbl_349;
        }
    }
    if (g_17.f0)
    { 
        int64_t l_350 = (-5L);
        int32_t l_351 = 0x82B40DBBL;
        --g_352[1];
    }
    else
    { 
        int8_t l_361 = 0x02L;
        int32_t l_367 = (-1L);
        uint64_t l_384 = 18446744073709551606UL;
        int32_t l_398 = 7L;
        int8_t l_410 = (-9L);
        int32_t l_422 = (-5L);
        union U1 l_427 = {0x18L};
        g_54.f0 = ((safe_rshift_func_uint8_t_u_u(g_327[0][0], 2)) , (safe_lshift_func_uint16_t_u_s(l_18, (safe_sub_func_uint64_t_u_u(((((l_361 && l_300) , l_300) <= g_327[0][0]) & 0x76F7A8BFL), g_237[2][0])))));
        for (g_265 = (-16); (g_265 >= 56); ++g_265)
        { 
            ++g_364;
            for (l_18 = 0; l_18 < 3; l_18 += 1)
            {
                g_352[l_18] = 0x987B85D4L;
            }
            ++g_369;
        }
        if ((safe_sub_func_uint16_t_u_u(l_281, (safe_lshift_func_uint8_t_u_u(((l_18 == (l_382[2][1] = (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(0xB602L, (safe_mul_func_int16_t_s_s((2L < l_361), g_328[0])))) > 1L), g_54.f2)))) == g_383), 6)))))
        { 
            uint64_t l_395[3];
            int i;
            for (i = 0; i < 3; i++)
                l_395[i] = 0UL;
            ++l_384;
            l_398 &= (((safe_sub_func_int32_t_s_s((l_367 = (safe_add_func_uint32_t_u_u((((g_368 = (l_367 , g_368)) >= (g_352[1] == ((safe_mod_func_uint64_t_u_u(((--l_395[1]) || ((((0x2E50060146208832LL < l_395[1]) != g_207[0][2][3]) & l_384) , 0xCE44F534FA682BD6LL)), g_17.f0)) < 0L))) >= g_54.f3), g_327[0][1]))), 0UL)) , 1L) , g_54.f1);
        }
        else
        { 
            struct S0 l_401 = {0L,-1L,65531UL,0x0F86EE01CB1AA11DLL,0x3B8FEF89A33DC61ELL};
            uint32_t l_433 = 4294967290UL;
            g_383 = ((g_368 = ((safe_sub_func_uint64_t_u_u(g_167[2], ((l_401 , ((g_90 < l_398) , g_90)) >= g_369))) & l_367)) < 0x75L);
            g_54.f0 = (safe_div_func_uint16_t_u_u(1UL, ((safe_sub_func_uint8_t_u_u(9UL, (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s(l_361, ((l_410 = g_167[1]) <= l_382[1][0]))), 0x285ED7635218622FLL)))) , 0xE8A6L)));
            for (g_364 = 0; (g_364 != 7); g_364 = safe_add_func_uint64_t_u_u(g_364, 7))
            { 
                int32_t l_430[5] = {0xBAC443F8L,0xBAC443F8L,0xBAC443F8L,0xBAC443F8L,0xBAC443F8L};
                uint32_t l_462 = 4294967291UL;
                int i;
                g_383 &= ((0xEFFBL | 1L) >= 0x8F519CF447D91602LL);
                g_434 |= (((safe_mul_func_int16_t_s_s(((!((((safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(0xF9L, (l_432 ^= (((g_54.f0 |= (((l_422 , (g_431 = (g_328[1] = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((l_427 , (safe_sub_func_int64_t_s_s((g_90 , 0xB5DE88017DE39BCALL), l_430[4]))) == 5UL), g_352[2])), g_22))))) , 3UL) , 0xF4388EDDL)) ^ 0x90A043C2L) <= 0xEE26L)))) >= 0x76FA71606EB43864LL), 0xACL)) > 255UL), g_37)) | l_430[1]) || (-6L)) , l_430[4])) >= l_433), g_383)) != 1L) ^ l_281);
                g_54.f0 = (safe_mod_func_int64_t_s_s(0xD81151B42EB3B12CLL, (safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u((65535UL > (safe_mul_func_int16_t_s_s((!(safe_rshift_func_uint8_t_u_u((l_300 &= (g_265 = ((safe_sub_func_int64_t_s_s(((l_430[4] = (((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s((g_327[0][1] && (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0xFD7BL, 4)), 0xE1L)), l_401.f3)), g_364))), l_398)), l_361)), l_462)) > l_401.f3) > l_361)) > g_54.f0), l_462)) | 0x8FDDL))), 6))), 0x4168L))), l_422)) , l_382[2][1]) & 0UL) <= 0x369EL), 4))));
            }
        }
    }
    for (g_54.f1 = (-7); (g_54.f1 != 14); ++g_54.f1)
    { 
        uint8_t l_470 = 255UL;
        for (g_54.f2 = 0; (g_54.f2 >= 29); g_54.f2 = safe_add_func_int64_t_s_s(g_54.f2, 7))
        { 
            uint64_t l_467 = 9UL;
            int16_t l_473[4] = {7L,7L,7L,7L};
            int32_t l_474 = (-1L);
            int i;
            for (g_364 = 1; (g_364 <= 4); g_364 += 1)
            { 
                int i;
                l_467--;
                l_470 = g_298[g_364];
                l_473[2] |= (safe_add_func_uint32_t_u_u(0xBB6925A8L, g_431));
            }
            l_474 &= l_432;
        }
    }
    return l_382[2][0];
}



static const int32_t  func_4(uint16_t  p_5, const int32_t  p_6, int32_t  p_7)
{ 
    uint16_t l_184 = 0UL;
    int32_t l_185 = 0x63E18B63L;
    int32_t l_186 = 8L;
    int32_t l_187 = 1L;
    union U1 l_205 = {0x56L};
    if ((((safe_div_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u((+p_6), (l_186 |= (safe_mod_func_uint16_t_u_u((0xAFA607CF51585644LL >= ((safe_div_func_uint64_t_u_u(0x00BEEA7B122D0340LL, (((safe_add_func_int32_t_s_s(((l_184 = (-1L)) && g_37), 4294967295UL)) & 0xDD91CD6CL) ^ g_167[0]))) , 0xEFFA272E7E9FB3AELL)), l_185))))) < 0xC0CC138C4916DE7ALL) , 0xC0B2L) | l_185), p_5)) && l_187) & 0x8CC23DAE7EE4AC10LL))
    { 
        int16_t l_188 = 5L;
        const struct S0 l_224 = {0xB6731223L,0x0B12L,65531UL,18446744073709551615UL,0x6871525431BED743LL};
        int32_t l_240 = 0xAD1FBBA7L;
        if ((l_188 = (l_186 && 0x1D0698F759302C5ELL)))
        { 
            int8_t l_206 = 0xF1L;
            int32_t l_208 = 0x71BFAA68L;
            int32_t l_209 = 0x5B173B0BL;
            g_54.f0 = ((((((safe_div_func_int8_t_s_s(((g_54.f2 && (safe_mul_func_int8_t_s_s((l_208 = (safe_mod_func_int16_t_s_s((g_37 = 0x8C41L), (g_54.f1 = (safe_div_func_int8_t_s_s((((l_187 |= (g_54.f4 >= ((safe_add_func_uint64_t_u_u((l_206 &= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((((safe_add_func_int64_t_s_s((l_205 , g_54.f2), g_54.f3)) & g_30) < g_54.f2) <= l_188), 4)), 0x4DL))), g_90)) <= g_207[2][2][0]))) >= l_208) >= g_22), 248UL)))))), l_209))) || l_205.f0), l_188)) && 0UL) >= p_7) && p_5) <= 0UL) ^ 0xF74D8AA7L);
            for (l_186 = 0; (l_186 < (-14)); l_186 = safe_sub_func_int64_t_s_s(l_186, 1))
            { 
                return p_5;
            }
            for (g_54.f2 = (-24); (g_54.f2 >= 31); g_54.f2 = safe_add_func_int64_t_s_s(g_54.f2, 4))
            { 
                g_54.f0 = (((safe_add_func_uint8_t_u_u(((l_188 || ((((safe_rshift_func_int8_t_s_u(0x94L, 7)) > (((g_22 , (safe_lshift_func_int8_t_s_u((((safe_div_func_int8_t_s_s(0x7BL, g_207[2][2][0])) , g_30) < g_30), p_7))) ^ 4UL) != l_205.f0)) | p_7) && l_187)) , l_185), 1UL)) , 0L) , g_37);
            }
        }
        else
        { 
            int32_t l_236 = 2L;
            for (g_90 = 3; (g_90 > 39); g_90 = safe_add_func_uint32_t_u_u(g_90, 1))
            { 
                return p_5;
            }
            g_54.f0 = (l_224 , ((g_225--) == ((((safe_rshift_func_uint8_t_u_s(p_6, 2)) <= (safe_add_func_int32_t_s_s(p_7, ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(0x89E38A55L, 7L)), 1)) > p_7)))) && g_22) != l_186)));
            g_237[2][0]--;
        }
        l_240 = g_237[2][0];
        for (g_22 = 0; (g_22 <= 2); g_22 += 1)
        { 
            const int8_t l_241 = 0x9AL;
            return l_241;
        }
    }
    else
    { 
        int64_t l_242 = (-7L);
        int32_t l_262 = (-5L);
        l_186 &= (p_6 <= l_187);
        l_242 = g_167[0];
        for (l_187 = 0; (l_187 < 13); ++l_187)
        { 
            int16_t l_250 = 9L;
            if ((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0L, p_7)), (g_37 ^ (((!(g_54.f1 != 0x9A0C9D9835C9623FLL)) && 0xD2L) ^ l_250)))))
            { 
                int32_t l_261 = 0x77754722L;
                int32_t l_263 = 1L;
                int32_t l_264[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_264[i][j] = (-1L);
                }
                g_54.f0 = ((safe_sub_func_uint32_t_u_u((g_54.f2 , ((safe_div_func_int32_t_s_s((l_262 |= ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_37, 5)), (safe_add_func_int16_t_s_s(l_205.f0, ((4L ^ 1UL) >= l_261))))) != g_207[2][2][0])), g_54.f2)) < p_5)), (-9L))) ^ 0x1CF9L);
                g_265--;
            }
            else
            { 
                int64_t l_268 = (-4L);
                g_54.f0 = l_250;
                l_185 = l_268;
                l_185 = (g_54 , (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((g_225 <= (g_237[0][1] < (safe_lshift_func_int16_t_s_u(((l_262 > 0xC74038AB73313E7CLL) || g_207[2][0][2]), 11)))), 0L)), 4)), l_268)));
            }
            g_54.f0 = (safe_sub_func_uint16_t_u_u((p_6 || 252UL), ((l_262 ^= ((++p_5) != (8UL > (g_30 = p_6)))) || l_250)));
        }
    }
    l_187 ^= g_225;
    return p_5;
}



static uint16_t  func_8(uint32_t  p_9, int8_t  p_10)
{ 
    uint32_t l_168 = 0x722A3428L;
    int8_t l_172 = (-9L);
lbl_171:
    for (g_54.f2 = 0; (g_54.f2 <= 4); g_54.f2 += 1)
    { 
        return p_9;
    }
    l_168++;
    if (g_54.f2)
        goto lbl_171;
    return l_172;
}



static uint32_t  func_11(union U1  p_12, int64_t  p_13, int8_t  p_14, const int16_t  p_15, uint8_t  p_16)
{ 
    int8_t l_21 = (-4L);
    int32_t l_55 = 0L;
    uint8_t l_76 = 0x30L;
    uint8_t l_134[5] = {0UL,0UL,0UL,0UL,0UL};
    struct S0 l_149 = {0xCD8B9F6BL,0xF8F0L,0x5C2DL,0x5B90580498758D7FLL,-5L};
    union U1 l_156[5] = {{0x4DL},{0x4DL},{0x4DL},{0x4DL},{0x4DL}};
    int16_t l_166[3][1][3] = {{{9L,9L,9L}},{{0xD8B8L,0xD8B8L,0xD8B8L}},{{9L,9L,9L}}};
    int i, j, k;
    if ((safe_div_func_int64_t_s_s((g_22 = l_21), 0x9864BA8B35EDADE0LL)))
    { 
        uint32_t l_23 = 0x2278213AL;
        uint32_t l_47 = 0UL;
        int32_t l_61[4];
        const int64_t l_75 = 1L;
        int32_t l_77 = 0x15A4C4AEL;
        const int16_t l_88 = (-1L);
        int i;
        for (i = 0; i < 4; i++)
            l_61[i] = 0L;
        if ((l_23 &= l_21))
        { 
            int16_t l_29 = 0x7C8BL;
            for (l_23 = 15; (l_23 < 20); l_23++)
            { 
                l_29 = (safe_unary_minus_func_uint8_t_u((safe_div_func_int16_t_s_s(g_22, g_22))));
            }
            g_30 &= g_17.f0;
        }
        else
        { 
            uint64_t l_42 = 18446744073709551614UL;
            const int32_t l_45 = 0xF58CDC14L;
            int32_t l_46[4];
            int i;
            for (i = 0; i < 4; i++)
                l_46[i] = (-2L);
lbl_62:
            for (p_16 = (-19); (p_16 != 53); p_16 = safe_add_func_uint16_t_u_u(p_16, 2))
            { 
                uint8_t l_53 = 0x6AL;
                int32_t l_56 = 0x3CE724D2L;
                l_47 |= ((safe_add_func_uint32_t_u_u((((p_12.f0 >= ((l_46[3] |= (safe_mul_func_int16_t_s_s(((((g_37 ^= p_13) | ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_42 = p_13), (safe_sub_func_int16_t_s_s(0xBFCFL, l_45)))), l_45)) <= l_23)) == (-1L)) , 0L), l_21))) ^ l_23)) != p_15) < p_16), 0xAE07DF7DL)) , 0x88F15EA3L);
                l_56 |= (safe_sub_func_int16_t_s_s((((l_55 = ((safe_unary_minus_func_uint64_t_u(g_17.f0)) | ((((safe_lshift_func_uint16_t_u_s(l_53, 10)) , g_54) , g_54.f0) , 2L))) > 255UL) ^ (-1L)), g_37));
            }
            l_61[2] &= (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(((g_54.f1 > (g_54.f4 == l_47)) != (l_21 <= p_13)), l_21)) , p_14), 6));
            if (l_21)
                goto lbl_62;
        }
        l_77 |= (safe_add_func_int64_t_s_s((((g_54.f0 <= ((((l_61[1] &= (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((((((safe_mod_func_uint8_t_u_u((18446744073709551610UL >= g_30), (-6L))) & g_54.f2) != l_75) < l_23) , g_54.f2), 0x700A5FF0L)), p_15)), p_14)), p_13))) ^ g_17.f0) ^ g_37) != g_54.f2)) | l_76) > g_54.f0), l_21));
        for (l_76 = (-20); (l_76 != 24); l_76 = safe_add_func_uint32_t_u_u(l_76, 4))
        { 
            int16_t l_89 = 0x300FL;
            for (g_54.f1 = 16; (g_54.f1 < (-3)); --g_54.f1)
            { 
                g_54.f0 ^= ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((0UL != p_13), l_88)) , (g_54.f2 = g_22)), 13)), g_22)) >= l_89) || l_61[2]) != p_16);
                if (l_61[2])
                    break;
                --g_90;
            }
        }
    }
    else
    { 
        uint8_t l_103 = 0x74L;
        struct S0 l_111 = {-1L,0xC7FAL,0xD575L,0x27816D4D43A62FBFLL,-2L};
        int8_t l_122[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_122[i][j] = (-1L);
        }
        for (p_16 = 27; (p_16 == 36); p_16++)
        { 
            uint32_t l_102[2];
            int i;
            for (i = 0; i < 2; i++)
                l_102[i] = 18446744073709551615UL;
            l_55 &= g_54.f1;
            for (l_21 = 0; (l_21 < 6); ++l_21)
            { 
                uint32_t l_97 = 0x1D6FFC8DL;
                union U1 l_106 = {0xC3L};
                g_54.f0 = ((l_97 & (safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((g_54.f2 = (l_102[0] = (18446744073709551607UL == (g_54.f4 = (-1L))))) == g_54.f1) < l_97), g_17.f0)), 0x443EFFA9L))) <= l_103);
                l_111.f0 = ((safe_div_func_int32_t_s_s(0xAAB22D3BL, (l_106 , (((l_103 , (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((l_111 , l_102[0]) ^ g_54.f2), g_54.f0)), 0x83L)) > (-2L)) && g_37)) <= g_22) , 1L)))) <= l_97);
            }
            for (l_111.f2 = 22; (l_111.f2 == 59); l_111.f2 = safe_add_func_uint8_t_u_u(l_111.f2, 9))
            { 
                g_54.f0 = (l_55 |= 8L);
                return g_54.f3;
            }
        }
        l_55 &= (safe_div_func_int8_t_s_s(0x52L, (safe_lshift_func_int16_t_s_s((((p_14 ^ p_13) <= (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0UL, 0x6AL)), l_111.f4))) || p_15), l_21))));
        for (g_54.f2 = 0; (g_54.f2 <= 0); g_54.f2 += 1)
        { 
            return g_90;
        }
    }
    for (g_37 = (-26); (g_37 != (-14)); g_37 = safe_add_func_int32_t_s_s(g_37, 3))
    { 
        const uint32_t l_135[3] = {0xF1415305L,0xF1415305L,0xF1415305L};
        int32_t l_136 = 0x3565F0DEL;
        int i;
        l_136 = (safe_lshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s((p_14 = (g_54.f1 <= (((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((-3L) != g_90), 7)) , (!(((l_134[4] > l_135[2]) || 1L) , 0xD163L))), l_135[2])) == (-9L)) && 0x11C70F4A07556C5FLL))), g_54.f1)) <= 65535UL), 11));
        g_54.f0 ^= (l_135[2] ^ (-1L));
        for (g_54.f2 = 5; (g_54.f2 == 20); g_54.f2 = safe_add_func_uint16_t_u_u(g_54.f2, 2))
        { 
            uint16_t l_161 = 65531UL;
            if (((l_55 |= 0xC8F4L) || (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((g_90 , ((g_54.f1 = (safe_div_func_int16_t_s_s((1L && (((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(l_21, g_54.f1)), p_13)) >= 0xCCF1A098L) == 0x714EL)), p_14))) < g_22)))), g_22))))
            { 
                uint32_t l_148 = 0x8F338002L;
                l_148 = 9L;
            }
            else
            { 
                g_54.f0 = (l_149 , (((((safe_rshift_func_uint8_t_u_s(0x1DL, (safe_sub_func_int64_t_s_s(((l_136 ^= (safe_mod_func_int64_t_s_s((l_161 |= (l_156[0] , (((safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((p_15 < (-4L)) | g_54.f0), g_54.f1)) || g_54.f4), p_13)) , g_54.f0) >= 0x93L))), g_54.f4))) && g_17.f0), p_13)))) || l_55) == 0x59E3L) & g_37) <= p_13));
            }
        }
    }
    g_54.f0 ^= (((safe_add_func_uint16_t_u_u((((((l_149 , (l_149.f0 |= (safe_mod_func_uint16_t_u_u(((p_14 < (g_54.f4 | p_15)) <= l_149.f4), (-1L))))) >= 1L) >= g_30) , 0xEADDFB17L) , 65535UL), g_17.f0)) <= g_30) != l_166[2][0][2]);
    return g_37;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_54.f3, "g_54.f3", print_hash_value);
    transparent_crc(g_54.f4, "g_54.f4", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_167[i], "g_167[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_207[i][j][k], "g_207[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_225, "g_225", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_237[i][j], "g_237[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_265, "g_265", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_298[i], "g_298[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_327[i][j], "g_327[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_328[i], "g_328[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_352[i], "g_352[i]", print_hash_value);

    }
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
