// SPDX-License-Identifier: MIT
// cctest_csmith_e874b86a.c --- cctest case csmith_e874b86a (csmith seed 3899963498)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x663b9fad */

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

// Options:   -s 3899963498 -o /tmp/csmith_gen_peg7g977/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint8_t  f0;
   int32_t  f1;
   uint8_t  f2;
   int32_t  f3;
   int16_t  f4;
   int64_t  f5;
};

union U1 {
   const int8_t  f0;
   int8_t  f1;
   uint32_t  f2;
   int8_t * f3;
};

union U2 {
   int16_t  f0;
   int8_t * const  f1;
   const struct S0  f2;
};


static const int64_t g_10 = 0x13E13A6C9CD49FCFLL;
static int8_t g_13 = 0x01L;
static int8_t * const g_12 = &g_13;
static uint8_t g_18 = 1UL;
static uint16_t g_21 = 0x7359L;
static int32_t g_85[2] = {0x8677A3B2L,0x8677A3B2L};
static int8_t ***g_88 = (void*)0;
static int64_t g_91[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_95 = 0x233C22C9L;
static uint32_t g_125 = 4294967295UL;
static uint32_t g_155 = 0xD30B3EA3L;
static union U2 g_171 = {-10L};
static union U2 *g_170[6] = {&g_171,&g_171,&g_171,&g_171,&g_171,&g_171};
static int64_t g_205 = 1L;
static uint32_t *g_210 = &g_155;
static struct S0 g_246 = {0x91L,-1L,0xB3L,0L,0xC53BL,0x719ACE85C987445ELL};
static uint32_t g_254[6] = {0xE296A022L,0xE296A022L,0xE296A022L,0xE296A022L,0xE296A022L,0xE296A022L};
static int64_t *g_266 = (void*)0;
static int64_t * const *g_265[3][7] = {{&g_266,&g_266,&g_266,&g_266,&g_266,&g_266,&g_266},{&g_266,&g_266,&g_266,&g_266,&g_266,&g_266,&g_266},{&g_266,&g_266,&g_266,&g_266,&g_266,&g_266,&g_266}};
static uint32_t g_280[2][7] = {{0x556B4D16L,0x204F4FA2L,0x204F4FA2L,0x556B4D16L,0x204F4FA2L,0xD44CAB2CL,0x204F4FA2L},{0xD44CAB2CL,0x204F4FA2L,0xD44CAB2CL,0xD44CAB2CL,0x204F4FA2L,0xD44CAB2CL,0xD44CAB2CL}};
static uint32_t *g_279 = &g_280[0][1];
static int32_t *g_287 = (void*)0;
static int64_t g_305 = 0xD14B1F9F82BC33D4LL;
static uint64_t g_330 = 0UL;
static uint16_t g_341 = 0x05ADL;
static uint16_t g_352 = 0UL;
static union U1 g_426 = {0x6BL};
static union U1 *g_425 = &g_426;
static struct S0 g_431 = {0x52L,0xBCFAC44BL,0x5EL,9L,0xDFDAL,0x5E6DA14404AA69F6LL};
static struct S0 *g_430[3] = {&g_431,&g_431,&g_431};
static const int32_t g_462 = 0xB55F8126L;
static const int32_t *g_465 = &g_85[1];
static uint8_t g_508 = 0x58L;
static union U2 g_534 = {-5L};
static int64_t * const ***g_537 = (void*)0;
static uint16_t g_540 = 65535UL;
static uint16_t *g_539 = &g_540;
static int16_t *g_576 = &g_431.f4;
static int16_t **g_575 = &g_576;
static union U2 g_622 = {-2L};
static union U1 g_644[6][2][5] = {{{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xBCL},{-7L},{0xBCL},{-7L},{0xBCL}}},{{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xBCL},{-7L},{0xBCL},{-7L},{0xBCL}}},{{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xBCL},{-7L},{0xBCL},{-7L},{0xBCL}}},{{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xBCL},{-7L},{0xBCL},{-7L},{0xBCL}}},{{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xBCL},{-7L},{0xBCL},{-7L},{0xBCL}}},{{{0x3BL},{0x3BL},{0x3BL},{0x3BL},{0x3BL}},{{0xBCL},{-7L},{0xBCL},{-7L},{0xBCL}}}};
static int64_t **g_733 = &g_266;
static int64_t ***g_732 = &g_733;
static int64_t ****g_731[2] = {&g_732,&g_732};
static union U1 g_800 = {0x9FL};
static struct S0 g_884 = {0xABL,0x32B86920L,0xD5L,0xBA8B8E19L,-1L,-1L};
static struct S0 *g_883 = &g_884;
static union U1 g_886[3] = {{-1L},{-1L},{-1L}};



static union U2  func_1(void);
static uint16_t  func_24(int8_t * p_25, int32_t  p_26);
static int8_t * func_31(uint32_t  p_32);
static int64_t  func_33(int8_t * p_34, uint64_t  p_35);
static int8_t * func_36(int8_t * p_37, uint32_t  p_38, int8_t  p_39, uint32_t  p_40, uint16_t * p_41);
static int8_t * func_42(uint8_t * p_43, struct S0  p_44, uint32_t  p_45, uint8_t * const  p_46);
static struct S0  func_48(uint16_t * p_49);
static uint32_t  func_50(int64_t  p_51, uint8_t * p_52, uint16_t * p_53);




static union U2  func_1(void)
{ 
    uint8_t l_6 = 0UL;
    int8_t *l_14 = &g_13;
    uint8_t *l_15 = &l_6;
    uint8_t *l_16 = (void*)0;
    uint8_t *l_17 = &g_18;
    int32_t l_19 = 0L;
    uint16_t *l_20 = &g_21;
    int8_t *l_29 = (void*)0;
    uint8_t *l_47 = (void*)0;
    uint64_t l_538 = 0xE2837C5EFBEAD01ELL;
    int32_t *l_874 = &g_431.f1;
    const struct S0 l_932[6] = {{0x14L,0xC4C69DF6L,0x92L,0x51678FB2L,0L,3L},{0x14L,0xC4C69DF6L,0x92L,0x51678FB2L,0L,3L},{0x14L,0xC4C69DF6L,0x92L,0x51678FB2L,0L,3L},{0x14L,0xC4C69DF6L,0x92L,0x51678FB2L,0L,3L},{0x14L,0xC4C69DF6L,0x92L,0x51678FB2L,0L,3L},{0x14L,0xC4C69DF6L,0x92L,0x51678FB2L,0L,3L}};
    const uint32_t l_955 = 0UL;
    int64_t l_958 = 0xDFC98B1F54DA276BLL;
    union U2 l_962 = {1L};
    int32_t l_970[1];
    union U1 l_1059[2] = {{1L},{1L}};
    uint16_t l_1062 = 7UL;
    int32_t l_1088 = 0x8B7C5F6AL;
    int i;
    for (i = 0; i < 1; i++)
        l_970[i] = 0x12998211L;
    if ((safe_rshift_func_uint16_t_u_s(((*l_20) = ((safe_lshift_func_int8_t_s_s((((*l_17) = ((*l_15) = (l_6 || ((safe_lshift_func_int8_t_s_s((0x87A7L || (safe_unary_minus_func_uint16_t_u(g_10))), (+((g_12 != (void*)0) || ((l_14 != l_14) < l_6))))) , 9UL)))) == (*g_12)), l_19)) || 250UL)), 4)))
    { 
        int32_t l_30 = 1L;
        uint8_t * const l_528[4] = {&l_6,&l_6,&l_6,&l_6};
        int32_t *l_871 = &g_95;
        union U2 l_889 = {0x8A85L};
        uint16_t l_927 = 65535UL;
        uint64_t l_930 = 0x222BEC0736736888LL;
        uint64_t l_950 = 0UL;
        int64_t ****l_954[2][1];
        int32_t l_969 = 0x76E6321AL;
        int8_t l_997[2];
        int32_t l_998 = (-1L);
        int32_t l_1000 = 0xFA37CF84L;
        int32_t l_1001 = 0L;
        int32_t l_1003 = 0xD4BB41BDL;
        int32_t l_1005 = 0x169ADE4DL;
        uint32_t l_1006 = 18446744073709551615UL;
        const struct S0 l_1023 = {4UL,1L,1UL,0L,0x4F1AL,0x64030C2409498396LL};
        union U1 *l_1024 = (void*)0;
        const int16_t *l_1034[3];
        const int16_t * const *l_1033 = &l_1034[0];
        union U2 l_1035 = {0xC07CL};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_954[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
            l_997[i] = (-3L);
        for (i = 0; i < 3; i++)
            l_1034[i] = &g_431.f4;
        if (((*l_871) = (safe_mod_func_uint16_t_u_u(func_24((((*g_12) = (((void*)0 != l_29) | (l_30 == g_10))) , func_31((func_33(func_36((l_14 = func_42(l_47, func_48(&g_21), (*g_279), l_528[1])), l_30, l_538, (*g_279), g_539), l_6) < l_19))), g_426.f1), l_30))))
        { 
            struct S0 *l_880 = &g_431;
            for (g_341 = 0; (g_341 >= 49); g_341 = safe_add_func_int8_t_s_s(g_341, 8))
            { 
                int32_t *l_878 = (void*)0;
                l_874 = &g_95;
                if ((*l_871))
                { 
                    int16_t *l_877 = &g_246.f4;
                    int32_t *l_879 = &g_246.f1;
                    struct S0 **l_881 = (void*)0;
                    struct S0 **l_882 = &g_430[0];
                    union U1 *l_885[2][5] = {{&g_886[0],&g_886[0],&g_886[0],&g_886[0],&g_886[0]},{&g_886[0],&g_886[0],&g_886[0],&g_886[0],&g_886[0]}};
                    int i, j;
                    (*l_871) &= (safe_rshift_func_int16_t_s_s((**g_575), ((*l_877) = (&g_246 == (void*)0))));
                    (*l_871) &= g_305;
                    l_879 = l_878;
                    g_883 = ((*l_882) = l_880);
                    l_885[0][0] = (void*)0;
                }
                else
                { 
                    (*l_871) = (*l_874);
                }
                for (g_884.f5 = 0; (g_884.f5 > 22); g_884.f5 = safe_add_func_uint8_t_u_u(g_884.f5, 5))
                { 
                    return l_889;
                }
            }
            (*l_874) |= (safe_lshift_func_uint16_t_u_s(65535UL, 13));
            return l_889;
        }
        else
        { 
            uint64_t *l_926[3][5][1] = {{{&g_330},{&g_330},{&g_330},{&g_330},{&g_330}},{{&g_330},{&g_330},{&g_330},{&g_330},{&g_330}},{{&g_330},{&g_330},{&g_330},{&g_330},{&g_330}}};
            int32_t l_942[2];
            uint32_t l_956 = 0xD60699EFL;
            int32_t l_995[6] = {(-8L),(-8L),0L,(-8L),(-8L),0L};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_942[i] = 0xF95DC025L;
            for (g_884.f5 = 2; (g_884.f5 != 11); g_884.f5 = safe_add_func_uint32_t_u_u(g_884.f5, 9))
            { 
                int8_t l_898 = 0x8AL;
                if ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(1L, (l_898 && (+((safe_mod_func_uint16_t_u_u((((**g_575) = (-3L)) < (safe_mul_func_int16_t_s_s(1L, ((*l_871) ^ 0xA1CAL)))), (safe_mul_func_int16_t_s_s(((void*)0 != &g_330), l_898)))) <= 0x67BDA0BFL))))), 10)))
                { 
                    uint64_t l_906 = 0xB30E3B18B4A7C3DELL;
                    l_906 = (*l_874);
                }
                else
                { 
                    (*l_871) = ((*l_874) = g_246.f1);
                    (*l_874) ^= ((*l_871) = (safe_add_func_int8_t_s_s(1L, 0UL)));
                }
            }
            if ((safe_sub_func_uint16_t_u_u((*l_871), (safe_mod_func_uint8_t_u_u(g_884.f4, ((safe_div_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((-3L) <= ((-1L) <= (safe_mod_func_uint16_t_u_u(((*g_576) < (l_927 = (safe_lshift_func_int8_t_s_u((1L & (g_330 = ((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s((*l_874), 5)))) , (-1L)) , (*g_539)) == (-7L)))), 4)))), (*l_874))))) , (-6L)), g_246.f3)) <= (*l_871)), g_540)) | g_884.f3) || (*l_874)), (*g_12))) | (*l_874)))))))
            { 
                int64_t *l_931[5];
                int64_t *** const * const l_953 = &g_732;
                int32_t l_957[4];
                int32_t *l_963 = (void*)0;
                int32_t *l_964 = &g_884.f1;
                int32_t *l_965 = &g_431.f1;
                int32_t *l_966 = &l_957[0];
                int32_t *l_967[4] = {&l_942[1],&l_942[1],&l_942[1],&l_942[1]};
                int32_t l_968 = 0xE438630FL;
                uint64_t l_971 = 0x6465B81D05658EA2LL;
                int32_t **l_974 = &l_963;
                int i;
                for (i = 0; i < 5; i++)
                    l_931[i] = &g_431.f5;
                for (i = 0; i < 4; i++)
                    l_957[i] = 8L;
                (*l_871) = (safe_mul_func_int8_t_s_s((((*l_874) = ((*g_883) , l_930)) != (((l_932[2] , ((*g_539)--)) >= (safe_mod_func_int16_t_s_s(((0xFE6798D1FA0B3311LL >= (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((((((!((safe_unary_minus_func_int8_t_s(l_942[0])) > (safe_sub_func_int16_t_s_s((((!(safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_950, (safe_div_func_int32_t_s_s((l_953 == l_954[1][0]), l_942[0])))), 0xD375281E22FB7C15LL))) <= l_955) ^ 0L), 0x5E41L)))) != l_956) & (*l_871)) , 0xB6B8721433354E29LL) >= l_957[0]))) , (*g_12)), l_958))) ^ g_125), 0x36AAL))) | l_942[1])), l_957[0]));
                for (g_884.f5 = 5; (g_884.f5 == 13); g_884.f5++)
                { 
                    int32_t **l_961 = &g_287;
                    (*l_961) = &l_942[0];
                    if ((*l_871))
                        break;
                    return l_962;
                }
                l_971--;
                (*l_974) = &g_95;
                l_942[1] &= ((*l_871) , (safe_div_func_int64_t_s_s((((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((((*l_964) = (((*l_963) >= 0UL) | (((safe_add_func_int8_t_s_s((*l_874), (safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s((*l_874), g_884.f2)) , ((((l_889 , &g_884) != &g_431) != 0L) & (*l_966))), 0xA6L)))) || (*g_539)) ^ 8L))) != (*l_871)), (*l_871))) ^ g_91[1]), g_95)), (*l_871))) <= 0x9CC6L) <= (*l_874)), (*l_874))));
            }
            else
            { 
                int32_t l_996 = 0x2B465753L;
                int32_t l_999 = 1L;
                int32_t l_1002 = 0x5C4FB690L;
                int32_t l_1004 = 0x126C5853L;
                struct S0 **l_1009 = &g_430[2];
                int32_t l_1017 = 0L;
                uint8_t l_1022 = 0x50L;
                (*l_871) = (*l_874);
                for (l_958 = 16; (l_958 > (-18)); --l_958)
                { 
                    int32_t *l_993 = &l_942[0];
                    int32_t *l_994[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S0 ***l_1010[2][2][2] = {{{&l_1009,&l_1009},{&l_1009,&l_1009}},{{&l_1009,&l_1009},{&l_1009,&l_1009}}};
                    int i, j, k;
                    l_1006--;
                    l_1009 = l_1009;
                    if (l_1004)
                        continue;
                    (*l_874) |= 0x7A4865DCL;
                }
                (*l_874) = ((safe_add_func_int32_t_s_s(g_884.f3, (safe_lshift_func_uint8_t_u_s(((l_942[0] = (safe_add_func_int16_t_s_s((l_1004 &= (**g_575)), (l_1017 && (l_1017 , (safe_mod_func_int16_t_s_s(0xE0A2L, (((((((*l_871) = (*l_874)) & (((&g_280[0][1] == (void*)0) ^ l_996) == l_956)) == l_942[0]) || (*l_874)) != l_995[0]) , (*g_576))))))))) ^ l_1002), l_999)))) , l_1022);
                if (g_95)
                    goto lbl_1025;
lbl_1025:
                g_425 = (l_1023 , l_1024);
                (*l_871) &= (&l_1024 == (void*)0);
            }
        }
        (*l_874) ^= ((g_125 , (safe_mod_func_int8_t_s_s(((*g_12) ^= (*l_871)), (*l_871)))) & ((((!(l_969 = (((((*l_871) , &g_576) == (void*)0) ^ (safe_mul_func_int8_t_s_s((&g_576 != l_1033), 0L))) , (*l_871)))) != g_884.f0) > (*l_871)) || (*g_539)));
        (*l_874) ^= 0L;
        return l_1035;
    }
    else
    { 
        uint16_t **l_1043 = &g_539;
        int32_t *l_1044[4][1];
        int32_t l_1047 = 1L;
        union U1 l_1048[6] = {{1L},{1L},{1L},{1L},{1L},{1L}};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_1044[i][j] = &g_884.f1;
        }
        (*l_874) = ((safe_lshift_func_int16_t_s_u((((*l_874) == ((*l_874) != ((((*l_17) &= (((*l_20) &= (safe_add_func_int8_t_s_s((+(safe_lshift_func_uint8_t_u_u(((g_246.f1 = (0UL == (((*l_1043) = l_20) != (void*)0))) , g_246.f2), 2))), 9L))) ^ (*l_874))) >= (*l_874)) , g_426.f1))) , 1L), g_800.f0)) , 0x6A7D5215L);
        (*l_874) = (safe_mod_func_uint64_t_u_u((l_1047 , (l_1048[2] , (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*g_12) , (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((l_1059[1] , (safe_rshift_func_int16_t_s_u(l_1062, (((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((!g_85[1]), (safe_lshift_func_uint16_t_u_u((0x6247L < (-3L)), 11)))), g_884.f0)) ^ (*l_874)) , 0UL)))), (*l_874))) ^ (*g_576)), (*g_539))), 0))), 4294967295UL)), 0x9B6EL)))), (*l_874)));
        g_85[0] ^= 0x68600FABL;
    }
    for (g_246.f5 = 0; (g_246.f5 <= 5); g_246.f5 += 1)
    { 
        g_425 = &l_1059[0];
    }
    for (g_13 = 0; (g_13 != (-15)); g_13 = safe_sub_func_uint8_t_u_u(g_13, 5))
    { 
        uint8_t l_1081 = 1UL;
        const uint8_t l_1089 = 0xB7L;
        int32_t *l_1090 = (void*)0;
        int32_t *l_1091 = &g_884.f1;
        (*l_874) = (~(*l_874));
        (*l_1091) |= ((*l_874) = (safe_sub_func_int16_t_s_s((**g_575), (((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(7L, (*g_539))) || ((safe_sub_func_int32_t_s_s((l_1081 >= (((*l_874) < (((*g_425) , (((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551608UL, l_1088)), (*l_874))), 3)) ^ l_1089) || l_1081)) != (*g_539))) || (*g_210))), (*g_210))) | (*l_874))), 0xD7DBL)) > 18446744073709551615UL) ^ l_1081))));
        if ((*g_465))
            break;
    }
    return l_962;
}



static uint16_t  func_24(int8_t * p_25, int32_t  p_26)
{ 
    return (*g_539);
}



static int8_t * func_31(uint32_t  p_32)
{ 
    int64_t l_573 = 0xB265CC2C36F5531ELL;
    int16_t **l_577[6][7][1] = {{{&g_576},{(void*)0},{&g_576},{&g_576},{&g_576},{&g_576},{&g_576}},{{&g_576},{&g_576},{(void*)0},{&g_576},{(void*)0},{&g_576},{&g_576}},{{&g_576},{&g_576},{&g_576},{&g_576},{&g_576},{(void*)0},{&g_576}},{{(void*)0},{&g_576},{&g_576},{&g_576},{&g_576},{&g_576},{&g_576}},{{&g_576},{(void*)0},{&g_576},{(void*)0},{&g_576},{&g_576},{&g_576}},{{&g_576},{&g_576},{&g_576},{&g_576},{(void*)0},{&g_576},{(void*)0}}};
    int64_t **l_602 = &g_266;
    int32_t l_627 = (-10L);
    int32_t l_628[5][7] = {{0xD6662DDBL,(-10L),0xD6662DDBL,0xAC5E5F71L,0x6A8F0C79L,(-10L),0x6A8F0C79L},{0xF0904A54L,0x4CB72237L,0xF0904A54L,0x6A8F0C79L,(-10L),(-10L),0x6A8F0C79L},{0xF0904A54L,0x4CB72237L,0xF0904A54L,0x6A8F0C79L,(-10L),(-10L),0x6A8F0C79L},{0xF0904A54L,0x4CB72237L,0xF0904A54L,0x6A8F0C79L,(-10L),(-10L),0x6A8F0C79L},{0xF0904A54L,0x4CB72237L,0xF0904A54L,0x6A8F0C79L,(-10L),(-10L),0x6A8F0C79L}};
    union U1 l_701[1] = {{0x3CL}};
    int8_t *l_726 = &g_426.f1;
    int8_t **l_725 = &l_726;
    uint64_t *l_797 = &g_330;
    int32_t l_816 = 0x820F4CD9L;
    int8_t *l_818[1][3];
    int64_t ****l_851 = &g_732;
    int32_t **l_868 = &g_287;
    int16_t ***l_870 = &l_577[3][0][0];
    int16_t ****l_869 = &l_870;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_818[i][j] = &g_644[5][0][4].f1;
    }
    for (g_246.f1 = 0; (g_246.f1 == (-29)); g_246.f1 = safe_sub_func_uint64_t_u_u(g_246.f1, 1))
    { 
        uint32_t l_574 = 0x1DAA854AL;
        int16_t l_601 = 0x89D6L;
        int32_t *l_626[4][5] = {{&g_85[1],(void*)0,(void*)0,&g_85[1],&g_85[1]},{&g_85[1],&g_85[1],&g_85[1],&g_85[1],&g_85[1]},{&g_85[1],&g_85[1],(void*)0,(void*)0,&g_85[1]},{(void*)0,&g_85[1],(void*)0,&g_85[1],(void*)0}};
        uint8_t l_629 = 0x35L;
        union U1 ** const l_640[1][2][5] = {{{&g_425,&g_425,&g_425,&g_425,&g_425},{&g_425,&g_425,&g_425,&g_425,&g_425}}};
        uint8_t l_662 = 0x50L;
        int32_t l_676 = 0x595F65FBL;
        int8_t *l_679 = (void*)0;
        int64_t **l_698 = &g_266;
        int32_t *l_703 = (void*)0;
        int32_t *l_704[5][5][3] = {{{&g_431.f3,&g_431.f3,&g_246.f3},{&g_431.f3,&g_431.f3,&g_431.f3},{&g_246.f3,&g_431.f3,&g_431.f3},{&g_246.f3,&g_431.f3,&g_431.f3},{(void*)0,&g_246.f3,&g_431.f3}},{{&g_246.f3,&g_246.f3,&g_246.f3},{(void*)0,&g_246.f3,&g_246.f3},{&g_246.f3,&g_246.f3,(void*)0},{&g_246.f3,&g_246.f3,&g_246.f3},{&g_431.f3,&g_246.f3,(void*)0}},{{&g_431.f3,&g_431.f3,&g_246.f3},{&g_431.f3,&g_431.f3,&g_246.f3},{&g_431.f3,&g_431.f3,&g_431.f3},{&g_246.f3,&g_431.f3,&g_431.f3},{&g_246.f3,&g_431.f3,&g_431.f3}},{{(void*)0,&g_246.f3,&g_431.f3},{&g_246.f3,&g_246.f3,&g_246.f3},{(void*)0,&g_246.f3,&g_246.f3},{&g_246.f3,&g_246.f3,(void*)0},{&g_246.f3,&g_246.f3,&g_246.f3}},{{&g_431.f3,&g_246.f3,(void*)0},{&g_431.f3,&g_431.f3,&g_246.f3},{&g_431.f3,&g_431.f3,&g_246.f3},{&g_431.f3,&g_431.f3,&g_431.f3},{&g_246.f3,&g_431.f3,&g_431.f3}}};
        uint8_t *l_713 = (void*)0;
        uint8_t *l_714 = &g_246.f2;
        uint64_t *l_715 = &g_330;
        union U1 *l_799[5][3];
        struct S0 l_831 = {247UL,-1L,3UL,0L,4L,-1L};
        int8_t *l_858 = &g_800.f1;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_799[i][j] = &g_800;
        }
        for (g_155 = 0; (g_155 == 5); g_155 = safe_add_func_int64_t_s_s(g_155, 9))
        { 
            uint32_t l_570 = 18446744073709551615UL;
            int16_t **l_578[7][5][6] = {{{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576}},{{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576}},{{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576}},{{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576}},{{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576}},{{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576}},{{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576},{&g_576,&g_576,&g_576,&g_576,&g_576,&g_576}}};
            int16_t ***l_579 = &l_578[3][2][1];
            int16_t **l_581 = &g_576;
            int16_t ***l_580 = &l_581;
            const int32_t *l_584 = (void*)0;
            int64_t **l_593[1][6] = {{&g_266,&g_266,&g_266,&g_266,&g_266,&g_266}};
            int32_t l_600 = 0xACEF57FFL;
            int i, j, k;
            for (g_95 = (-22); (g_95 <= 2); g_95++)
            { 
                int32_t **l_567 = &g_287;
                int32_t *l_569 = &g_85[1];
                int32_t **l_568[1][7][7] = {{{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,(void*)0,&l_569,&l_569,(void*)0,&l_569,&l_569},{(void*)0,(void*)0,&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569},{&l_569,&l_569,(void*)0,&l_569,(void*)0,&l_569,&l_569},{&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,(void*)0},{&l_569,&l_569,&l_569,(void*)0,&l_569,&l_569,&l_569}}};
                int i, j, k;
                g_465 = ((*l_567) = &g_95);
                l_570++;
                if (l_573)
                    break;
                (*l_569) = (l_574 = 1L);
            }
            if ((g_575 != ((l_577[3][0][0] == ((*l_580) = ((*l_579) = l_578[3][2][1]))) , (void*)0)))
            { 
                struct S0 **l_582 = &g_430[1];
                (*l_582) = &g_431;
                if (l_574)
                    continue;
            }
            else
            { 
                int32_t **l_583 = &g_287;
                const int32_t **l_585 = (void*)0;
                const int32_t **l_586 = &l_584;
                const int32_t **l_587 = &g_465;
                union U2 *l_621[6][4][1] = {{{&g_622},{(void*)0},{(void*)0},{&g_622}},{{&g_534},{&g_622},{&g_534},{&g_622}},{{(void*)0},{(void*)0},{&g_622},{&g_534}},{{&g_622},{&g_534},{&g_622},{(void*)0}},{{(void*)0},{&g_622},{&g_534},{&g_622}},{{&g_534},{&g_622},{(void*)0},{(void*)0}}};
                int8_t *l_623 = &g_13;
                int i, j, k;
                (*l_583) = &g_85[1];
                (*l_587) = ((*l_586) = l_584);
                for (g_246.f3 = 0; (g_246.f3 < 20); g_246.f3 = safe_add_func_int32_t_s_s(g_246.f3, 6))
                { 
                    uint64_t *l_590 = &g_330;
                    int32_t l_598 = 0xDFDF2AAAL;
                    uint16_t *l_599[6][3][5] = {{{&g_341,&g_341,&g_341,&g_341,&g_341},{&g_21,&g_352,&g_341,&g_341,&g_352},{&g_341,&g_341,&g_341,&g_341,&g_341}},{{&g_21,&g_352,&g_341,&g_341,&g_352},{&g_341,&g_341,&g_341,&g_341,&g_341},{&g_21,&g_352,&g_341,&g_341,&g_352}},{{&g_341,&g_341,&g_341,&g_341,&g_341},{&g_21,&g_352,&g_341,&g_341,&g_352},{&g_341,&g_341,&g_341,&g_341,&g_341}},{{&g_21,&g_352,&g_341,&g_341,&g_352},{&g_341,&g_341,&g_341,&g_341,&g_341},{&g_21,&g_352,&g_341,&g_341,&g_352}},{{&g_341,&g_341,&g_341,&g_341,&g_341},{&g_21,&g_352,&g_341,&g_341,&g_352},{&g_341,&g_341,&g_341,&g_341,&g_341}},{{&g_21,&g_352,&g_341,&g_341,&g_352},{&g_341,&g_341,&g_341,&g_341,&g_341},{&g_21,&g_352,&g_341,&g_341,&g_352}}};
                    int32_t l_603 = 0x1745E314L;
                    int32_t *l_618 = &g_431.f1;
                    union U2 **l_619 = (void*)0;
                    union U2 **l_620[4][4][1] = {{{&g_170[4]},{(void*)0},{&g_170[4]},{(void*)0}},{{&g_170[4]},{(void*)0},{&g_170[4]},{(void*)0}},{{&g_170[4]},{(void*)0},{&g_170[4]},{(void*)0}},{{&g_170[4]},{(void*)0},{&g_170[4]},{(void*)0}}};
                    int i, j, k;
                    l_603 |= ((((*g_539) |= 1UL) | (((*l_590)++) >= (((*g_576) < ((l_593[0][2] == ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((**g_575) <= (l_598 || (((l_573 || (l_600 |= (p_32 ^ p_32))) >= l_601) | (*g_287)))), l_573)), g_431.f1)) , l_602)) , 1L)) == 0xE4DEL))) != l_574);
                    (*l_618) ^= ((safe_div_func_int16_t_s_s(((**g_575) = (l_601 && (((safe_sub_func_int32_t_s_s(l_600, l_603)) ^ ((((l_574 > 0x0A5C54B21BC4DFA3LL) , (safe_div_func_int32_t_s_s(((*g_287) = ((safe_mul_func_int8_t_s_s(p_32, (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(1L, l_574)), 2)), l_573)))) , 3L)), l_573))) <= 0x7A285540L) > 249UL)) | l_601))), p_32)) & p_32);
                    l_621[0][2][0] = &g_534;
                    return l_623;
                }
                for (g_540 = 0; (g_540 == 19); g_540 = safe_add_func_uint16_t_u_u(g_540, 3))
                { 
                    return l_623;
                }
                (*g_287) &= l_570;
            }
        }
        ++l_629;
        for (g_246.f3 = 0; (g_246.f3 != 20); g_246.f3++)
        { 
            union U1 * const l_643 = &g_644[5][0][4];
            union U1 * const *l_642 = &l_643;
            union U1 * const **l_641 = &l_642;
            int16_t **l_649[5] = {&g_576,&g_576,&g_576,&g_576,&g_576};
            int32_t l_660 = (-1L);
            uint64_t *l_661 = &g_330;
            int64_t *l_689 = &g_246.f5;
            int8_t *l_692 = &g_13;
            int32_t **l_693[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_693[i][j] = &l_626[3][4];
            }
            l_662 = ((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((*g_539) || (l_640[0][1][4] == ((*l_641) = &g_425))), (safe_rshift_func_int8_t_s_u(((*g_12) &= (((*l_661) &= (safe_rshift_func_int16_t_s_u(((l_577[1][2][0] == l_649[2]) >= (((safe_mul_func_int8_t_s_s((((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((*g_539), 5)), 0)), ((l_627 = (safe_rshift_func_int16_t_s_u((**g_575), p_32))) || l_660))) & 0x03AA3401L) || 0x471FL), l_660)) ^ g_254[3]) && 0xB124L)), l_628[4][0]))) != p_32)), 2)))), p_32)), (-7L))) == p_32);
            for (g_352 = 0; (g_352 < 51); g_352 = safe_add_func_int8_t_s_s(g_352, 1))
            { 
                uint16_t l_677 = 0x7734L;
                uint8_t *l_678[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_678[i] = &l_629;
                g_85[1] &= (safe_rshift_func_uint8_t_u_u((g_431.f2 = ((l_660 <= (((safe_mul_func_uint16_t_u_u(((*g_539) = (*g_539)), (safe_div_func_int32_t_s_s((!(((p_32 , 18446744073709551609UL) & ((((**g_575) ^= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(4294967288UL, (0x71L || (l_676 , p_32)))), 15))) >= p_32) >= p_32)) == g_644[5][0][4].f0)), (-8L))))) < p_32) <= 0x5298F61AL)) | l_677)), 6));
            }
            l_660 = ((l_679 == ((((*g_539) |= 65532UL) > ((l_660 , ((p_32 <= ((*l_689) ^= (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((g_644[5][0][4].f0 & (~l_660)) ^ ((1UL && 65533UL) != g_431.f0)), l_628[2][5])), p_32)), 3)))) < g_280[0][1])) ^ 0L)) , (void*)0)) | 0x3674L);
            for (g_13 = 0; (g_13 > 0); g_13 = safe_add_func_int8_t_s_s(g_13, 7))
            { 
                return l_692;
            }
            g_287 = &g_85[1];
        }
        if ((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((l_698 != (((safe_sub_func_int32_t_s_s((l_701[0] , 0xB9FBFB56L), ((((p_32 && (l_627 == (safe_unary_minus_func_uint64_t_u(((l_628[3][3] ^= p_32) , ((*l_715) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u(((*l_714) |= (safe_lshift_func_uint8_t_u_s(((l_628[1][5] |= (((&g_125 == &g_125) | p_32) , (-1L))) == 0L), 2))), 0x0AL)) >= l_573) , p_32) != p_32), l_627)), p_32)))))))) < (*g_12)) && 0L) > l_573))) ^ l_627) , (void*)0)) , g_644[5][0][4].f1), p_32)), 0x84L)))
        { 
            uint8_t l_716 = 0xC5L;
            int8_t *l_719[2];
            const int32_t *l_720[1][7][2] = {{{&g_95,&l_628[2][5]},{&l_628[4][2],&l_628[2][5]},{&g_95,&l_628[4][2]},{&l_676,&l_676},{&l_676,&l_628[4][2]},{&g_95,&l_628[2][5]},{&l_628[4][2],&l_628[2][5]}}};
            int32_t l_753 = 0L;
            int32_t l_754 = 1L;
            int32_t l_756 = 0L;
            int32_t l_759 = 0x9BA8AEE1L;
            uint64_t *l_796 = &g_330;
            union U1 *l_798 = &g_644[5][0][4];
            union U2 l_852 = {2L};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_719[i] = &g_13;
            l_716 |= p_32;
            if (p_32)
            { 
                const int32_t **l_721 = (void*)0;
                const int32_t **l_722 = (void*)0;
                const int32_t **l_723 = &l_720[0][6][0];
                for (g_246.f5 = (-11); (g_246.f5 < 20); g_246.f5 = safe_add_func_uint32_t_u_u(g_246.f5, 4))
                { 
                    return l_719[1];
                }
                (*l_723) = l_720[0][1][1];
            }
            else
            { 
                int64_t ****l_734 = (void*)0;
                int32_t l_735 = 1L;
                int8_t **l_749 = (void*)0;
                uint32_t *l_750 = &g_155;
                int32_t l_755 = 0x72A0111AL;
                int32_t l_757 = 0x3FE96988L;
                int32_t l_758[3][6] = {{(-8L),0xB1F814E8L,0xB1F814E8L,(-8L),0x92DD8AB0L,(-8L)},{(-8L),0x92DD8AB0L,(-8L),0xB1F814E8L,0xB1F814E8L,(-8L)},{0L,0L,0xB1F814E8L,0L,0xB1F814E8L,0L}};
                uint8_t l_760 = 0xADL;
                uint64_t l_775 = 0xE87FF2820093B6DELL;
                uint16_t l_817 = 0x2D7CL;
                uint16_t l_855 = 0x68A8L;
                int i, j;
                g_95 &= (!(l_735 &= ((l_725 == &l_726) != ((((*g_539) = (((*g_279) |= ((p_32 == 5L) , l_573)) , (safe_div_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((((((g_85[1] = l_628[4][5]) != 0L) , g_731[1]) != l_734) & l_628[2][5]) , g_246.f4), g_508)) <= l_628[2][1]), 0x14A0DD26L)))) ^ 0x00A4L) | 0x29L))));
                g_85[1] ^= ((((safe_sub_func_uint64_t_u_u((((*l_750) ^= (((l_627 = (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((((0xABBB9EA5L >= (!l_701[0].f1)) > (((*g_539) |= (0xC5D8E2B9L || (l_735 > (safe_mod_func_int64_t_s_s((l_628[2][5] == (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_735 | p_32), 0x7BFCL)), p_32))), p_32))))) < 0xB00FL)) , 0x917786BAC08165D1LL) <= p_32) == (-1L)), 0x6FL)), 0xAEL))) , l_749) != &g_12)) != p_32), 3L)) , 0x6AL) > l_735) <= l_735);
                if ((safe_div_func_int16_t_s_s((0x10E871E2L >= p_32), 65528UL)))
                { 
                    uint16_t l_778 = 0x1A49L;
                    ++l_760;
                    l_628[4][1] |= (p_32 , l_758[2][2]);
                    l_753 ^= (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(0UL, (6L != (safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((0xDB12681C7C36E3FFLL < (safe_div_func_uint8_t_u_u(((((p_32 >= l_775) , (safe_mod_func_uint32_t_u_u(l_628[0][0], (((0x8DC5CCBEL || p_32) , p_32) | l_778)))) || p_32) || 0L), p_32))) ^ l_627), g_254[3])), (*g_539)))))), l_757)), p_32));
                }
                else
                { 
                    union U2 l_779 = {-7L};
                    l_735 |= (((p_32 < (l_779 , (safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(0xB6CED6FEC7E620C6LL, ((((&g_540 == &g_341) <= ((safe_mod_func_int8_t_s_s(p_32, (g_508 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((l_796 == l_797) != 0x764BL), (**g_575))), (-5L))), (**g_575))), l_779.f0))))) | p_32)) < p_32) | 0L))), p_32)), 1L)))) , (void*)0) == (void*)0);
                    l_628[4][2] &= (g_431.f1 = (l_755 , ((&l_701[0] == (l_799[0][0] = l_798)) || (safe_lshift_func_uint8_t_u_u(((((p_32 , l_701[0].f0) >= 0xC0L) <= (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_627 = ((~(*g_539)) || l_573)), 0x86B6L)), g_341)), g_18)) > 0xD8L) && l_816), g_431.f3)), 255UL)), l_779.f0))) , l_817), g_246.f0)))));
                    return l_818[0][2];
                }
                if ((((safe_lshift_func_uint16_t_u_u(0x6422L, 11)) ^ (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(0xFCEBL, 5)), (++(*g_539))))) && p_32))
                { 
                    int32_t **l_838 = &l_626[0][1];
                    const int32_t **l_839 = &l_720[0][1][1];
                    g_85[1] = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((g_431.f1 |= (l_831 , (safe_sub_func_int8_t_s_s(((l_754 = 0x5CBC61DAL) && p_32), p_32)))), ((*l_750) = (safe_add_func_int16_t_s_s((p_32 != (((((l_573 < (l_628[0][3] &= ((safe_lshift_func_int8_t_s_u((p_32 & l_735), 1)) , p_32))) , l_701[0]) , (-1L)) != p_32) || p_32)), p_32))))), 2));
                    (*l_838) = &l_754;
                    (*l_839) = &g_462;
                    l_756 = 8L;
                }
                else
                { 
                    int64_t ****l_853[4] = {&g_732,&g_732,&g_732,&g_732};
                    int32_t **l_854 = &l_626[3][2];
                    int i;
                    l_627 |= (safe_mul_func_uint16_t_u_u((p_32 && (0xF4L >= (((safe_rshift_func_uint16_t_u_u((+(safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(((*g_12) ^ p_32), (l_851 != (l_852 , l_853[2])))) || (*g_539)), 9L)) || p_32), p_32))), 14)) , &l_775) != &l_775))), (*g_539)));
                    (*l_854) = &l_816;
                    if (p_32)
                        break;
                    l_720[0][1][1] = (void*)0;
                    (*l_854) = &l_753;
                }
                if (l_855)
                    continue;
            }
            for (l_831.f3 = 0; (l_831.f3 >= (-24)); l_831.f3 = safe_sub_func_int8_t_s_s(l_831.f3, 2))
            { 
                return l_858;
            }
            for (l_676 = (-25); (l_676 <= 3); l_676 = safe_add_func_uint32_t_u_u(l_676, 2))
            { 
                g_85[1] = ((p_32 <= 254UL) & 6L);
                if (l_573)
                    break;
            }
        }
        else
        { 
            uint16_t l_863 = 1UL;
            l_863 |= (safe_add_func_int16_t_s_s(p_32, 0xDD52L));
        }
        g_95 = (safe_mod_func_int64_t_s_s(p_32, ((safe_lshift_func_int16_t_s_s((((void*)0 != &g_539) & (1L & ((**l_851) == l_698))), 5)) , g_644[5][0][4].f1)));
    }
    (*l_868) = (void*)0;
    (*l_869) = &l_577[3][0][0];
    return &g_13;
}



static int64_t  func_33(int8_t * p_34, uint64_t  p_35)
{ 
    uint32_t l_556[1];
    union U2 l_557 = {-1L};
    struct S0 l_558 = {0UL,0x90AE4DBDL,251UL,0xEB79559CL,0x13A1L,1L};
    int32_t *l_559[3];
    uint16_t l_560 = 65530UL;
    int i;
    for (i = 0; i < 1; i++)
        l_556[i] = 0xD577AF0CL;
    for (i = 0; i < 3; i++)
        l_559[i] = &g_95;
    g_95 &= (l_560 = (l_556[0] , (1UL == ((l_557 , (((18446744073709551610UL & (l_558 , p_35)) , p_35) <= l_558.f1)) , (*g_539)))));
    return p_35;
}



static int8_t * func_36(int8_t * p_37, uint32_t  p_38, int8_t  p_39, uint32_t  p_40, uint16_t * p_41)
{ 
    int32_t *l_541 = &g_431.f1;
    int32_t *l_542 = &g_85[1];
    int32_t *l_543 = &g_85[1];
    int32_t *l_544 = &g_95;
    int32_t *l_545 = (void*)0;
    int32_t l_546[3][5][7] = {{{1L,0x1740B0A6L,0L,0x7A88DA2FL,0xCF8A823FL,(-3L),0L},{0x7A88DA2FL,1L,(-1L),0x32D4584BL,1L,(-9L),0x3B901B80L},{0L,0x1740B0A6L,0L,0x3B901B80L,(-3L),0xAE53D707L,1L},{(-1L),0x52E4C181L,1L,0L,0xAE6E7C3AL,0L,1L},{(-1L),(-1L),0x7A88DA2FL,3L,1L,5L,0x3B901B80L}},{{0x7EBC0B31L,3L,(-9L),0x1740B0A6L,(-1L),1L,0L},{3L,5L,0x7A4F1B85L,1L,1L,(-1L),1L},{0x7A4F1B85L,0L,1L,1L,0xAE6E7C3AL,3L,3L},{(-3L),0x11EDE35CL,1L,0x11EDE35CL,(-3L),1L,(-1L)},{0L,0x3B901B80L,0x7A4F1B85L,0xD437F228L,1L,0L,1L}},{{0x52E4C181L,0xD2C9C5B4L,(-9L),0x7EBC0B31L,0xCF8A823FL,0x3B901B80L,5L},{0L,0xD437F228L,0x7A88DA2FL,(-1L),0x52E4C181L,1L,0L},{(-3L),0xAE53D707L,1L,(-9L),(-9L),1L,0xAE53D707L},{0x7A4F1B85L,3L,0L,0x3599B5B4L,0x1740B0A6L,0x3B901B80L,(-9L)},{3L,0x3599B5B4L,(-1L),0x7A4F1B85L,0x11EDE35CL,0L,(-3L)}}};
    int32_t *l_547 = &g_431.f1;
    int32_t *l_548 = &g_85[1];
    int32_t *l_549 = (void*)0;
    int32_t *l_550 = &g_431.f1;
    int32_t *l_551[3];
    uint64_t l_552[1];
    int8_t *l_555 = &g_13;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_551[i] = &g_246.f1;
    for (i = 0; i < 1; i++)
        l_552[i] = 0x84AEBBB2DFAD0E45LL;
    --l_552[0];
    return l_555;
}



static int8_t * func_42(uint8_t * p_43, struct S0  p_44, uint32_t  p_45, uint8_t * const  p_46)
{ 
    int32_t *l_531[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    union U2 *l_533 = &g_534;
    int64_t * const **l_536 = &g_265[2][3];
    int64_t * const ***l_535 = &l_536;
    int i;
    g_431.f1 ^= (safe_div_func_int64_t_s_s((&g_265[2][3] == (void*)0), (-3L)));
    for (p_44.f3 = 0; (p_44.f3 <= 5); p_44.f3 += 1)
    { 
        union U2 **l_532[7];
        int i;
        for (i = 0; i < 7; i++)
            l_532[i] = &g_170[4];
        if (g_254[p_44.f3])
            break;
        l_533 = (void*)0;
        return p_43;
    }
    g_537 = l_535;
    return &g_13;
}



static struct S0  func_48(uint16_t * p_49)
{ 
    struct S0 l_62 = {0x3BL,0x5E2623EEL,0xE1L,8L,0L,-7L};
    int32_t l_67 = 0x1012106DL;
    uint8_t l_68 = 255UL;
    int64_t l_69 = 0L;
    uint32_t *l_256 = &g_125;
    union U1 l_292 = {-1L};
    int32_t l_302 = 0x5D60C054L;
    int32_t l_303 = 0xEC6072FBL;
    int32_t l_306 = 0xE72222A8L;
    int8_t l_309 = 0xDEL;
    int32_t l_312 = 0xE255A649L;
    int32_t l_313 = (-1L);
    int32_t l_314 = 0L;
    int32_t l_315 = 3L;
    int32_t l_316 = 0x23C689B7L;
    int32_t l_319 = 0xBE486600L;
    int32_t l_320 = 0L;
    int32_t l_322 = 0xF3E2441AL;
    uint8_t l_323 = 3UL;
    union U2 *l_399 = &g_171;
    int16_t *l_447 = &g_431.f4;
    int16_t **l_446 = &l_447;
    int32_t l_458[7][1];
    int32_t l_471 = (-1L);
    int32_t l_496 = 0xC7AB59A8L;
    int32_t l_500 = (-6L);
    int32_t l_501[4];
    uint64_t l_502 = 7UL;
    uint8_t *l_525 = &g_246.f2;
    uint16_t l_526 = 0xB4F4L;
    int32_t *l_527 = &l_316;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_458[i][j] = 0L;
    }
    for (i = 0; i < 4; i++)
        l_501[i] = 0x9433BDB1L;
    if (((((*l_256) = func_50((0xD1L >= (safe_sub_func_int64_t_s_s(0xFCE2495621847726LL, (((l_67 = (((void*)0 != &g_18) ^ ((g_18 = ((safe_add_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((l_62 , l_62.f1) > (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0UL, g_13)), 0xB8L))), l_62.f4)), l_62.f2)) & l_67), l_68)) , l_62.f2)) ^ (*g_12)))) < l_69) ^ (*g_12))))), &l_68, p_49)) >= 0UL) > l_62.f1))
    { 
        uint32_t l_269 = 0x63BEC67EL;
        uint8_t *l_294[1][1][1];
        int32_t l_296 = (-5L);
        int32_t l_304[5][1][6] = {{{8L,8L,0x2183CB46L,0x8418D95EL,0x2183CB46L,8L}},{{0x2183CB46L,0x47EE0E8DL,0x8418D95EL,0x8418D95EL,0x47EE0E8DL,0x2183CB46L}},{{8L,0x2183CB46L,0x8418D95EL,0x2183CB46L,8L,8L}},{{2L,0x2183CB46L,0x2183CB46L,2L,0x47EE0E8DL,2L}},{{2L,0x47EE0E8DL,2L,0x2183CB46L,0x2183CB46L,2L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_294[i][j][k] = &g_18;
            }
        }
        for (g_21 = (-7); (g_21 < 4); g_21 = safe_add_func_uint32_t_u_u(g_21, 7))
        { 
            const int32_t l_263 = 0x45837000L;
            uint32_t *l_281[5][4] = {{&g_280[0][1],&g_280[0][1],&g_280[0][1],&g_280[0][1]},{&g_280[0][1],&g_280[0][1],&g_280[0][1],&g_280[0][1]},{&g_280[0][1],&g_280[0][1],&g_280[0][1],&g_280[0][1]},{&g_280[0][1],&g_280[0][1],&g_280[0][1],&g_280[0][1]},{&g_280[0][1],&g_280[0][1],&g_280[0][1],&g_280[0][1]}};
            int32_t l_282 = 0x488E1ABAL;
            int32_t l_301 = (-1L);
            int32_t l_307 = 0x72AD0EDBL;
            int32_t l_310[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_310[i] = (-9L);
            for (l_69 = 8; (l_69 != 8); l_69 = safe_add_func_uint32_t_u_u(l_69, 2))
            { 
                int64_t *l_264 = &l_62.f5;
                int16_t l_270 = (-5L);
                int8_t *l_291 = &g_13;
                int8_t **l_290 = &l_291;
                int8_t *l_293 = (void*)0;
                int32_t *l_295 = (void*)0;
                int32_t l_308 = 0xE3C08EB2L;
                int32_t l_311 = 1L;
                int32_t l_317 = 0xE19506F3L;
                int32_t l_318 = 0xA93BC0D9L;
                int32_t l_321 = 0x5002750AL;
                if ((safe_sub_func_int8_t_s_s(0L, ((((l_263 || ((((*l_264) = (-3L)) & l_69) == (g_265[2][3] == (void*)0))) > (safe_add_func_uint16_t_u_u(((((l_269 > l_263) < l_270) <= 0x6B741F67L) >= l_269), (-5L)))) >= l_62.f0) >= g_91[2]))))
                { 
                    int32_t *l_271 = &g_85[1];
                    int32_t **l_272 = &l_271;
                    uint32_t *l_278 = &l_269;
                    (*l_271) ^= ((void*)0 != &g_171);
                    (*l_272) = &g_85[1];
                    (*l_272) = &g_85[1];
                    l_282 = ((l_62 , (*g_12)) <= ((**l_272) > ((safe_div_func_int8_t_s_s((-1L), (safe_rshift_func_int16_t_s_u(((l_62 , (((!(((*l_278) ^= l_263) , (g_279 == l_281[3][1]))) && g_280[0][3]) == l_270)) > 0UL), 4)))) == l_62.f3)));
                }
                else
                { 
                    int32_t *l_284 = &g_95;
                    int32_t **l_283 = &l_284;
                    int32_t *l_286 = &g_95;
                    int32_t **l_285[2][3] = {{&l_286,&l_286,&l_286},{&l_286,&l_286,&l_286}};
                    int i, j;
                    g_287 = ((*l_283) = &l_67);
                    (*l_283) = &l_282;
                }
                if ((((l_270 & l_62.f2) , ((safe_lshift_func_uint16_t_u_u(g_246.f4, (*p_49))) <= (l_296 = (((((((*l_290) = &g_13) != (l_292 , l_293)) < l_270) != 1UL) , l_294[0][0][0]) == (void*)0)))) ^ 0x449FL))
                { 
                    int32_t *l_297 = &g_85[1];
                    int32_t *l_298 = &g_95;
                    int32_t *l_299 = &l_282;
                    int32_t *l_300[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_300[i] = &g_95;
                    ++l_323;
                    (*l_298) |= l_282;
                    (*l_297) = ((*l_298) || (*g_12));
                }
                else
                { 
                    int32_t *l_339[5];
                    uint16_t *l_340[3];
                    int16_t *l_342 = &l_62.f4;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_339[i] = &g_85[0];
                    for (i = 0; i < 3; i++)
                        l_340[i] = &g_341;
                    l_296 &= (safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((g_246.f2 >= ((*l_342) = (((--g_330) , g_246.f4) < ((l_310[0] = ((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((l_307 = (safe_sub_func_int16_t_s_s(((*p_49) | (((g_95 = 0x7F7E1F24L) ^ l_316) , 8L)), (g_171.f0 = (l_281[1][3] != l_256))))) <= 0L), 0xDCC1L)), l_304[4][0][4])) < g_254[3])) & g_246.f1)))) <= l_315) != l_317), g_18)), 0xA77F9E045A7BEBA7LL));
                    if (g_280[1][6])
                        break;
                }
            }
        }
    }
    else
    { 
        union U1 *l_344 = &l_292;
        union U1 **l_343 = &l_344;
        uint8_t *l_347 = (void*)0;
        const int32_t l_353 = 0x6D3E3839L;
        int32_t l_378 = 0x1B7BDB62L;
        int32_t l_379 = 2L;
        int32_t l_388[1][3];
        union U2 *l_397 = &g_171;
        const uint64_t l_435[1][4] = {{0x7D3999685EE79E50LL,0x7D3999685EE79E50LL,0x7D3999685EE79E50LL,0x7D3999685EE79E50LL}};
        int64_t *l_438[5][3] = {{(void*)0,&g_91[2],&g_246.f5},{&l_62.f5,&l_62.f5,&g_246.f5},{&g_91[2],(void*)0,&g_91[2]},{(void*)0,&l_62.f5,(void*)0},{(void*)0,&g_91[2],&l_62.f5}};
        struct S0 l_439 = {1UL,1L,0xB0L,-2L,0x7AC6L,0xC37674FB4660FD85LL};
        int16_t **l_445 = (void*)0;
        uint32_t l_448 = 0x9E42C7A6L;
        int32_t *l_459[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_388[i][j] = 0x75242A0BL;
        }
lbl_376:
        (*l_343) = (void*)0;
        if ((safe_sub_func_uint8_t_u_u((--g_18), (((safe_mul_func_uint16_t_u_u(g_352, l_353)) < (l_353 , ((safe_add_func_int32_t_s_s(((0x56E9A28F82DB557ALL >= ((&l_69 == (l_68 , &l_69)) != g_254[4])) , 0x59521539L), l_314)) & 255UL))) || l_67))))
        { 
            struct S0 l_356 = {251UL,0x17DB600CL,0xA3L,6L,0x4DB1L,0xDDB8F75A03B73B3FLL};
            return l_356;
        }
        else
        { 
            uint32_t l_369 = 0xF8E4FD7FL;
            int32_t l_372 = 3L;
            uint16_t l_391 = 0UL;
            int8_t *l_421 = &g_13;
            int8_t **l_420[6][1][3] = {{{&l_421,&l_421,&l_421}},{{(void*)0,(void*)0,(void*)0}},{{&l_421,&l_421,&l_421}},{{(void*)0,(void*)0,(void*)0}},{{&l_421,&l_421,&l_421}},{{(void*)0,(void*)0,(void*)0}}};
            int64_t * const l_440 = &l_439.f5;
            int16_t *l_443 = &l_439.f4;
            int32_t *l_444 = (void*)0;
            int i, j, k;
            for (g_352 = 24; (g_352 < 9); g_352 = safe_sub_func_uint64_t_u_u(g_352, 3))
            { 
                uint32_t l_373 = 0x1308A2A7L;
                int32_t l_389 = 0x7AF9E345L;
                int32_t l_390[7][3][4] = {{{(-4L),0x5398EA8FL,0xD08A1AE8L,(-4L)},{0x5512EEACL,9L,0x6842C025L,0x44CF0E34L},{0x85C57EE1L,0x83F7E498L,(-4L),0x4180C50BL}},{{(-4L),0x4180C50BL,0xE64D8D01L,0x89DE6CA5L},{0x5398EA8FL,0x34F1C786L,0xF0768CA9L,0x44CF0E34L},{0x411BC2BFL,0x81BE8735L,0x89DE6CA5L,7L}},{{4L,0x5398EA8FL,0L,0L},{0x802F0B26L,0x802F0B26L,0x55B35D3EL,0x5512EEACL},{0x411BC2BFL,0L,4L,9L}},{{0xD08A1AE8L,0x85C57EE1L,0xE64D8D01L,4L},{0x44CF0E34L,0x85C57EE1L,1L,9L},{0x85C57EE1L,0L,0x03AC845CL,0x5512EEACL}},{{1L,0x802F0B26L,0xD08A1AE8L,0L},{7L,0x5398EA8FL,0L,7L},{0x5512EEACL,0x81BE8735L,0x03AC845CL,0x44CF0E34L}},{{0xAABE2214L,0x34F1C786L,(-4L),0x89DE6CA5L},{0x44CF0E34L,0x4180C50BL,3L,0x4180C50BL},{0x5398EA8FL,0x83F7E498L,4L,0x44CF0E34L}},{{0x592D42B9L,9L,0x89DE6CA5L,(-4L)},{0x802F0B26L,0x5398EA8FL,0xA8106793L,0L},{0x802F0B26L,4L,0x89DE6CA5L,0x5512EEACL}}};
                int32_t l_407 = 0x3F4D2753L;
                struct S0 *l_410[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_410[i] = &g_246;
                for (l_69 = 1; (l_69 >= 0); l_69 -= 1)
                { 
                    uint8_t l_364[4];
                    uint8_t *l_365 = &l_323;
                    union U1 *l_368 = &l_292;
                    uint64_t *l_374 = (void*)0;
                    uint64_t *l_375 = &g_330;
                    int32_t *l_377 = &l_302;
                    int32_t *l_380 = &l_314;
                    int32_t *l_381 = &l_379;
                    int32_t *l_382 = (void*)0;
                    int32_t *l_383 = &l_302;
                    int32_t *l_384 = (void*)0;
                    int32_t *l_385 = &l_314;
                    int32_t *l_386 = &l_306;
                    int32_t *l_387[3];
                    union U2 l_394 = {-10L};
                    union U2 **l_398 = &l_397;
                    int64_t *l_408 = (void*)0;
                    int64_t *l_409 = &g_91[0];
                    struct S0 **l_411 = &l_410[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_364[i] = 5UL;
                    for (i = 0; i < 3; i++)
                        l_387[i] = &l_67;
                    g_85[l_69] |= (((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s((g_246.f4 ^= (safe_rshift_func_int8_t_s_s((((((*l_375) = ((((((((*l_365) = ((g_254[(l_69 + 2)] || g_254[(l_69 + 2)]) >= l_364[2])) || (((safe_add_func_uint16_t_u_u((l_368 == (void*)0), ((l_369 = g_91[0]) <= ((((safe_sub_func_int16_t_s_s(l_372, g_246.f3)) & g_95) | 0x8ED415E4E6D5AF62LL) || 3UL)))) , (*g_12)) < l_292.f1)) < l_353) == (*p_49)) , l_373) < 0L) > l_315)) ^ l_302) != (-1L)) == l_364[0]), g_254[(l_69 + 2)]))), l_373)))) == l_353) , (-3L));
                    if (g_18)
                        goto lbl_432;
                    if (l_62.f1)
                        goto lbl_376;
                    --l_391;
                    (*l_411) = (((*l_409) = (l_394 , (safe_add_func_uint8_t_u_u((((*l_398) = l_397) == l_399), (((-1L) ^ (((safe_sub_func_uint32_t_u_u((l_388[0][2] ^ 0UL), ((*l_383) = (l_372 |= (((safe_sub_func_uint64_t_u_u(((*l_375)++), (!g_246.f5))) ^ l_407) , l_379))))) & l_62.f5) || 0x09C6L)) == l_390[6][0][2]))))) , l_410[4]);
                }
            }
lbl_432:
            for (g_341 = 0; (g_341 != 48); ++g_341)
            { 
                uint8_t l_414 = 0xB9L;
                if (l_414)
                { 
                    int32_t **l_424 = &g_287;
                    (*l_424) = (((l_388[0][2] > ((~(safe_unary_minus_func_int16_t_s(l_414))) , (l_391 > ((!(((void*)0 != l_420[0][0][1]) != ((safe_rshift_func_int8_t_s_s(l_379, 1)) & l_292.f0))) ^ 0xFB53L)))) || g_254[0]) , &g_85[1]);
                    g_425 = g_425;
                }
                else
                { 
                    int32_t *l_427 = (void*)0;
                    int32_t *l_428 = &l_379;
                    int32_t *l_429[2][7] = {{(void*)0,&l_372,(void*)0,(void*)0,&l_372,(void*)0,(void*)0},{&l_372,&l_372,&l_322,&l_372,&l_372,&l_322,&l_372}};
                    int i, j;
                    (*l_343) = (*l_343);
                    g_246.f1 = ((*l_428) = l_414);
                    g_430[1] = (void*)0;
                }
                if (l_414)
                { 
                    return l_62;
                }
                else
                { 
                    return l_62;
                }
            }
            l_314 = (safe_add_func_int16_t_s_s((0x80B9L | l_435[0][2]), ((*l_443) = (safe_rshift_func_uint16_t_u_u((l_438[0][1] != (l_439 , l_440)), (safe_div_func_int32_t_s_s((&g_287 == (void*)0), 0x810619EDL)))))));
            l_320 = (l_322 <= 0x43L);
        }
        l_446 = l_445;
        g_246.f1 = (((l_448 != (((safe_mod_func_int16_t_s_s((((((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(((0x13L <= (l_62.f3 == ((*g_12) = l_448))) | (-1L)))), (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((((((*p_49) = l_388[0][0]) && ((*l_447) |= (((g_254[3] , &g_266) != &l_438[3][0]) , l_62.f0))) && l_439.f4) > l_435[0][0]), l_379)), l_448)))) && l_388[0][2]) | (-1L)) >= l_62.f1) ^ l_306), l_292.f1)) , l_292) , 0x241B77E6L)) <= l_435[0][2]) , l_458[5][0]);
    }
lbl_517:
    for (l_67 = 1; (l_67 <= 5); l_67 += 1)
    { 
        const int32_t *l_461[2];
        const int32_t **l_460 = &l_461[0];
        const int32_t *l_464 = (void*)0;
        const int32_t **l_463 = &l_464;
        const int32_t *l_466[2][2] = {{&g_462,&g_462},{&g_462,&g_462}};
        int64_t l_469 = 0x37BC20602535A360LL;
        int32_t l_470 = 0x667E573DL;
        int32_t l_472 = (-1L);
        int32_t l_480 = 0x0C79545CL;
        int32_t l_481 = 0x2FA34F84L;
        int32_t l_486 = (-1L);
        int32_t l_487 = (-2L);
        int32_t l_488 = 0L;
        uint16_t l_489 = 0x0F4FL;
        uint16_t *l_492 = &g_352;
        struct S0 l_506 = {0UL,0x1927A803L,0x34L,-6L,0x8037L,0L};
        int64_t **l_512 = (void*)0;
        int64_t ***l_511 = &l_512;
        int i, j;
        for (i = 0; i < 2; i++)
            l_461[i] = &g_462;
        g_465 = ((*l_463) = ((*l_460) = &l_315));
        for (l_322 = 1; (l_322 <= 5); l_322 += 1)
        { 
            uint16_t l_473 = 0x731DL;
            int32_t l_476 = 0x9FB61022L;
            int32_t l_478 = 1L;
            int32_t l_483 = (-9L);
            int32_t l_484[3];
            int32_t l_497 = 0x623D507DL;
            int i;
            for (i = 0; i < 3; i++)
                l_484[i] = 0x073F5E95L;
            (*l_463) = l_466[0][1];
            for (g_155 = 0; (g_155 <= 5); g_155 += 1)
            { 
                int32_t *l_467 = &l_316;
                int32_t *l_468[4][2][6] = {{{&g_85[1],&g_431.f1,&l_312,&g_85[1],&l_67,&l_312},{&g_85[1],&l_67,&l_312,&l_312,&l_67,&g_85[1]}},{{(void*)0,&g_431.f1,&g_85[1],&g_85[1],&g_85[1],&g_85[1]},{&g_85[1],&g_85[1],&l_312,&l_312,&l_306,&l_312}},{{&g_85[1],&g_85[1],&l_312,&g_85[1],&l_316,&g_85[1]},{(void*)0,&g_85[1],(void*)0,&l_312,&l_306,&l_312}},{{&g_85[1],&g_85[1],(void*)0,&g_85[1],&g_85[1],&g_85[1]},{&g_85[1],&g_431.f1,&l_312,&g_85[1],&l_67,&l_312}}};
                int i, j, k;
                ++l_473;
                for (l_323 = 0; (l_323 <= 5); l_323 += 1)
                { 
                    int32_t l_477 = 0x8927D9AAL;
                    int32_t l_479 = 5L;
                    int32_t l_482 = (-1L);
                    int32_t l_485 = 0x1E8C8223L;
                    int i;
                    if (g_91[l_322])
                        break;
                    ++l_489;
                    (*l_467) = g_91[l_67];
                }
                if (l_62.f1)
                    goto lbl_517;
                for (g_18 = 0; (g_18 <= 5); g_18 += 1)
                { 
                    uint16_t *l_494[5];
                    uint16_t **l_493 = &l_494[4];
                    int32_t l_495 = 0L;
                    int32_t l_498 = 0x880312BFL;
                    int32_t l_499[2][6] = {{(-1L),(-3L),(-1L),(-3L),(-1L),(-3L)},{(-1L),(-3L),(-1L),(-3L),(-1L),(-3L)}};
                    struct S0 l_505 = {0UL,0xF8D2A95AL,248UL,0x2AF43CFEL,-10L,0L};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_494[i] = &l_473;
                    l_495 = (g_91[l_67] || ((l_492 = p_49) == ((*l_493) = p_49)));
                    --l_502;
                    return l_505;
                }
                return l_506;
            }
        }
        for (l_313 = 5; (l_313 >= 0); l_313 -= 1)
        { 
            uint64_t *l_507[3];
            uint32_t *l_515 = &g_254[5];
            int i;
            for (i = 0; i < 3; i++)
                l_507[i] = (void*)0;
            l_312 ^= ((((g_508++) && g_91[l_67]) != ((void*)0 == l_511)) , ((safe_div_func_uint16_t_u_u((g_91[2] && (((l_470 = (l_515 != ((~0x98E2938CL) , &g_125))) > l_292.f1) && g_91[l_67])), 0xBE5FL)) ^ (*g_465)));
        }
    }
    (*l_527) = (safe_add_func_uint8_t_u_u(l_501[0], (!(l_501[3] , (safe_mod_func_uint16_t_u_u((l_292 , ((g_508 || ((*l_447) = (((safe_add_func_uint64_t_u_u(g_85[1], ((((*l_525) = (((&g_280[0][1] == ((*g_425) , l_256)) || 0x14L) , l_62.f0)) ^ l_471) <= l_501[3]))) <= l_471) > l_526))) > l_501[3])), l_526))))));
    return l_62;
}



static uint32_t  func_50(int64_t  p_51, uint8_t * p_52, uint16_t * p_53)
{ 
    uint32_t l_70 = 9UL;
    int8_t *l_78 = (void*)0;
    int8_t **l_77 = &l_78;
    union U2 l_81 = {0xB9C4L};
    uint32_t l_83 = 18446744073709551608UL;
    int32_t *l_84 = &g_85[1];
    uint16_t *l_86 = &g_21;
    uint32_t l_102 = 0x7037A9E2L;
    union U1 l_119 = {0x81L};
    uint32_t *l_124 = &g_125;
    int16_t l_126 = 0x0203L;
    int64_t *l_135 = &g_91[0];
    int32_t l_138[3];
    uint8_t l_189 = 0x84L;
    const uint8_t l_251 = 0xB5L;
    uint32_t l_253 = 0x43A748A0L;
    int32_t l_255 = 0xC54E92F5L;
    int i;
    for (i = 0; i < 3; i++)
        l_138[i] = 4L;
    ++l_70;
    if ((safe_lshift_func_uint8_t_u_u(((g_10 != 7L) == (safe_mul_func_int8_t_s_s((((*l_77) = p_52) == ((safe_mod_func_int64_t_s_s((l_81 , ((((((safe_unary_minus_func_uint16_t_u(l_81.f0)) | ((((*l_84) ^= (l_81.f0 > (248UL > l_83))) , &g_21) == l_86)) ^ (-1L)) > 4L) != 0UL) || (*g_12))), l_70)) , &g_13)), (*p_52)))), 3)))
    { 
        int8_t ***l_87 = (void*)0;
        int32_t l_89 = 0x5F9D9D8AL;
        g_88 = l_87;
        l_89 |= 0xC93CBC91L;
        (*l_84) &= p_51;
    }
    else
    { 
        int64_t *l_90 = &g_91[2];
        int32_t *l_94[6][3] = {{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95}};
        int i, j;
        g_95 |= ((*l_84) = (((*l_90) ^= 3L) ^ (safe_div_func_uint16_t_u_u((*l_84), g_18))));
    }
    (*l_84) = (((((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(l_102, (safe_mul_func_uint16_t_u_u(0x550BL, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_86)--), ((safe_div_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((l_119 , l_81) , p_51), p_51)) != ((*l_124) = (safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(1L, g_85[0])), (*l_84))))), 0x2FL)) == p_51) ^ 0x8323L) != 0x35237E92L), (-1L))) & (*l_84)))), (-1L))), 0x0B35L)))))) < (*g_12)), (-1L))), g_91[0])) & (*l_84)) , l_119) , l_126) < p_51);
    for (g_125 = 0; (g_125 <= 1); g_125 += 1)
    { 
        int64_t *l_129 = &g_91[2];
        int64_t **l_128 = &l_129;
        int64_t ***l_127 = &l_128;
        int32_t **l_130 = &l_84;
        int32_t l_139 = 0L;
        int32_t l_144 = (-9L);
        union U1 l_229 = {0L};
        uint32_t l_230 = 0xF24154FCL;
        (*l_127) = (void*)0;
        (*l_130) = l_84;
        if ((safe_rshift_func_int16_t_s_s((((safe_unary_minus_func_int8_t_s(((safe_unary_minus_func_int8_t_s(((l_135 = &g_91[2]) == &p_51))) & 0x4196DCF8DE9EF314LL))) , l_84) == &g_95), 10)))
        { 
            if ((*l_84))
                break;
        }
        else
        { 
            int32_t l_140 = 6L;
            int32_t l_143 = 0xBCEF8620L;
            int32_t l_145 = (-1L);
            int32_t l_147 = 0x9FD84452L;
            int32_t l_188 = 0x4A350FA8L;
            int16_t *l_199 = (void*)0;
            int32_t *l_204[6];
            int i;
            for (i = 0; i < 6; i++)
                l_204[i] = (void*)0;
            for (l_70 = 0; (l_70 <= 1); l_70 += 1)
            { 
                int16_t l_137 = 0x992BL;
                int32_t l_141 = (-2L);
                int32_t l_142 = 0L;
                int32_t l_146[2][5] = {{7L,7L,7L,7L,7L},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
                uint8_t l_148 = 255UL;
                int i, j;
                for (l_102 = 0; (l_102 <= 1); l_102 += 1)
                { 
                    int32_t *l_136[5][4] = {{&g_85[1],&g_85[1],&g_85[1],&g_85[1]},{&g_85[1],&g_85[1],&g_85[1],&g_85[1]},{&g_85[1],&g_85[1],&g_85[1],&g_85[1]},{&g_85[1],&g_85[1],&g_85[1],&g_85[1]},{&g_85[1],&g_85[1],&g_85[1],&g_85[1]}};
                    uint32_t *l_153 = (void*)0;
                    uint32_t *l_154 = &g_155;
                    int i, j;
                    g_85[l_70] = p_51;
                    if (p_51)
                        continue;
                    l_148++;
                    g_95 = ((**l_130) || ((safe_div_func_uint32_t_u_u((++(*l_154)), (safe_lshift_func_uint16_t_u_u(g_91[2], (p_51 & (l_142 |= ((**l_130) = g_21))))))) != p_51));
                }
                for (g_18 = (-4); (g_18 >= 43); g_18++)
                { 
                    int32_t *l_163 = &l_147;
                    int32_t **l_162 = &l_163;
                    (*l_162) = ((*l_130) = &g_85[0]);
                }
                (*l_130) = (*l_130);
            }
            g_85[g_125] ^= 0x47E6CF93L;
            for (g_95 = 8; (g_95 < (-30)); --g_95)
            { 
                union U2 *l_168 = (void*)0;
                int32_t l_172 = (-2L);
                int32_t l_187[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_187[i] = (-5L);
                for (p_51 = 14; (p_51 > 0); p_51 = safe_sub_func_uint64_t_u_u(p_51, 1))
                { 
                    union U2 **l_169[4] = {&l_168,&l_168,&l_168,&l_168};
                    int32_t l_175[3][2][4] = {{{0x0213BFE5L,(-10L),0x0213BFE5L,(-10L)},{0x0213BFE5L,(-10L),0x0213BFE5L,(-10L)}},{{0x0213BFE5L,(-10L),0x0213BFE5L,(-10L)},{0x0213BFE5L,(-10L),0x0213BFE5L,(-10L)}},{{0x0213BFE5L,(-10L),0x0213BFE5L,(-10L)},{0x0213BFE5L,(-10L),0x0213BFE5L,(-10L)}}};
                    uint32_t *l_178 = &g_155;
                    int32_t *l_179 = &g_85[1];
                    int32_t *l_180 = (void*)0;
                    int32_t *l_181 = (void*)0;
                    int32_t *l_182 = (void*)0;
                    int32_t *l_183 = (void*)0;
                    int32_t *l_184 = &l_138[0];
                    int32_t *l_185 = (void*)0;
                    int32_t *l_186[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_186[i] = &l_138[0];
                    g_170[4] = l_168;
                }
            }
            g_205 ^= (l_144 = (safe_lshift_func_uint8_t_u_s((p_51 , (*p_52)), (safe_mul_func_int16_t_s_s(((**l_130) = (255UL & (safe_rshift_func_uint8_t_u_u(((~g_85[0]) > 0xEE9CL), 6)))), (g_95 & (((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_21, 12)), g_95)) >= (-1L)) >= l_140)))))));
            for (l_102 = 0; (l_102 <= 1); l_102 += 1)
            { 
                int16_t l_252 = 0x7F7AL;
                int i;
                if ((g_95 = (g_85[l_102] = g_10)))
                { 
                    g_95 |= (*l_84);
                }
                else
                { 
                    const uint32_t *l_211 = &l_102;
                    uint64_t l_216 = 18446744073709551615UL;
                    uint32_t *l_217 = &l_70;
                    uint32_t *l_220 = &l_83;
                    g_95 ^= ((-10L) < (((safe_rshift_func_uint8_t_u_u(((((*l_84) = (0x884F1EB21537E41DLL & ((safe_lshift_func_int16_t_s_s((g_13 , ((g_210 = &l_102) == l_211)), (p_51 & 5L))) , 0L))) , p_51) , g_85[0]), g_205)) || 0xED6841EEF570C646LL) , (-1L)));
                    (**l_130) = ((((l_119 , p_51) | g_91[3]) != (((safe_mod_func_uint8_t_u_u((--(*p_52)), (l_216 & (((*l_220) ^= ((*l_217)--)) , (safe_div_func_int8_t_s_s(((*g_12) = (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_85[g_125], (safe_rshift_func_int8_t_s_u((((l_229 , g_85[l_102]) ^ g_85[1]) & (*l_84)), g_95)))), (*g_12)))), p_51)))))) || 0x5D44334F404DFAA3LL) == l_216)) >= 3L);
                    l_230++;
                }
                g_254[3] ^= (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((~((!(*l_84)) == ((p_51 , ((((safe_unary_minus_func_uint16_t_u((((((g_171.f0 = (g_18 > (~(((~(safe_sub_func_int32_t_s_s((((((safe_lshift_func_uint8_t_u_u((g_246 , (safe_div_func_uint8_t_u_u(g_91[2], (0x69C13BAC8EDC9C16LL || (safe_div_func_uint64_t_u_u(((((((((*g_12) != (*p_52)) <= 252UL) > (*g_210)) != 0x91L) | g_18) < g_85[1]) < (-1L)), p_51)))))), g_246.f0)) , g_85[1]) <= l_251) | (**l_130)) <= g_18), (**l_130)))) == l_252) , 0UL)))) ^ l_253) == 0x86L) , 0xF6L) , (*p_53)))) , g_95) == (*l_84)) <= p_51)) & 0xEBAF8E38L))), p_51)) > 0x5BB9L) , 1UL), g_246.f2));
                if (g_95)
                    break;
                return p_51;
            }
        }
    }
    return l_255;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_254[i], "g_254[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_280[i][j], "g_280[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_426.f0, "g_426.f0", print_hash_value);
    transparent_crc(g_426.f1, "g_426.f1", print_hash_value);
    transparent_crc(g_431.f0, "g_431.f0", print_hash_value);
    transparent_crc(g_431.f1, "g_431.f1", print_hash_value);
    transparent_crc(g_431.f2, "g_431.f2", print_hash_value);
    transparent_crc(g_431.f3, "g_431.f3", print_hash_value);
    transparent_crc(g_431.f4, "g_431.f4", print_hash_value);
    transparent_crc(g_431.f5, "g_431.f5", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_534.f0, "g_534.f0", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_622.f0, "g_622.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_644[i][j][k].f0, "g_644[i][j][k].f0", print_hash_value);
                transparent_crc(g_644[i][j][k].f1, "g_644[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_800.f0, "g_800.f0", print_hash_value);
    transparent_crc(g_800.f1, "g_800.f1", print_hash_value);
    transparent_crc(g_884.f0, "g_884.f0", print_hash_value);
    transparent_crc(g_884.f1, "g_884.f1", print_hash_value);
    transparent_crc(g_884.f2, "g_884.f2", print_hash_value);
    transparent_crc(g_884.f3, "g_884.f3", print_hash_value);
    transparent_crc(g_884.f4, "g_884.f4", print_hash_value);
    transparent_crc(g_884.f5, "g_884.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_886[i].f0, "g_886[i].f0", print_hash_value);
        transparent_crc(g_886[i].f1, "g_886[i].f1", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
